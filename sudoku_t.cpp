#pragma once
#include "sudoku_g.h"
#include <windows.h>
#include <iostream>
#include <random>
#include <string>
#include <fstream>

void read(int a[20])
{
	std::ifstream f;
	f.open(L"D:\C++\stat.txt");
	int i = 0;
	if (f.is_open())
	{
		f >> a[i];
		if (f.eof())
		{
			f.close();
			for (i = 0; i < 20; i++)
			{
				a[i] = 0;
			}
			write(a);
			return;
		}
		else
		{
			for (i = 1; i < 20; i++)
			{
				f >> a[i];
			}
		}
	}
	f.close();
	return;
}

void write(int a[20])
{
	std::ofstream f;
	f.open(L"D:\C++\stat.txt");
	int i = 0;
	if (f.is_open())
	{
		for (i = 0; i < 20; i++)
		{
			f << a[i] << " ";
		}
	}
	f.close();
	return;
}

int ran(int N)
{
	std::random_device rd;
	std::mt19937 mersenne(rd());
	int a = (mersenne() % N);
	return a;
}

void mesh(int** arr1, int** arr2, int s)
{
	int buf;
	int i, j, o = s*s;
	int a, b, c, d;
	for (int h = 0; h < o; h++)
	{
		c = ran(5);
		if (c == 0) 
		{
			d = ran(s);
			do {
				a = ran(s);
				if ((b = ran(s - 1)) == 0)
				{
					b++;
				}
				b = (a + b) % s;
			} while (a == b);
			for (i = 0; i < o; i++)
			{
				buf = arr1[d * s + a][i];
				arr1[d * s + a][i] = arr1[d * s + b][i];
				arr1[d * s + b][i] = buf;
			}
		}
		else if (c == 1)
		{
			do {
				a = ran(s);
				if ((b = ran(s - 1)) == 0)
				{
					b++;
				}
				b = (a + b) % s;
			} while (a == b);
			for (i = 0; i < o; i++)
			{
				for (j = 0; j < s; j++)
				{
					buf = arr1[a * s + j][i];
					arr1[a * s + j][i] = arr1[b * s + j][i];
					arr1[b * s + j][i] = buf;
				}
			}
		}
		else if (c == 2)
		{
			d = ran(s);
			do {
				a = ran(s);
				if((b = ran(s - 1)) == 0)
				{
					b++;
				}
				b = (a + b) % s;
			} while (a == b);
			for (i = 0; i < o; i++)
			{
				buf = arr1[i][d * s + a];
				arr1[i][d * s + a] = arr1[i][d * s + b];
				arr1[i][d * s + b] = buf;
			}
		}
		else if (c == 3)
		{
			do{
				a = ran(s);
				if((b = ran(s - 1)) == 0)
				{
					b++;
				}
				b = (a + b) % s;
			} while (a == b);
			for (i = 0; i < o; i++)
			{
				for (j = 0; j < s; j++)
				{
					buf = arr1[i][a * s + j];
					arr1[i][a * s + j] = arr1[i][b * s + j];
					arr1[i][b * s + j] = buf;
				}
			}
		}
		else if (c == 4)
		{
			for (i = 0; i < o; i++)
			{
				for (j = 0; j < o; j++)
				{
					arr2[i][j] = arr1[i][j];
				}
			}
			for (i = 0; i < o; i++)
			{
				for (j = 0; j < o; j++)
				{
					arr1[i][j] = arr2[j][i];
				}
			}
		}
	}
	return;
}

int prov(int* arr1[25], int s)
{
	int o = s * s;
	int fail = 0;
	int i;
	for (i = 0; i < o && !fail; ++i) {
		int p[25];
		for (int y = 0; y < 25; y++)
		{
			p[y] = 0;
		}
		int j;
		for (j = 0; j < o && !fail; ++j) {
			if (arr1[i][j]!=0) {
				if (p[arr1[i][j] - 1] == 0)
				{
					p[arr1[i][j] - 1] = 1;
				}
				else
				{
					fail = 1;
					return 1;
				}
			}
		}
	}
	for (i = 0; i < o && !fail; ++i) {
		int p[25];
		for (int y = 0; y < 25; y++)
		{
			p[y] = 0;
		}
		int j;
		for (j = 0; j < o && !fail; ++j) {
			if (arr1[j][i]!=0) {
				if (p[arr1[j][i] - 1] == 0)
				{
					p[arr1[j][i] - 1] = 1;
				}
				else
				{
					fail = 1;
					return 1;
				}
			}
		}
	}
	for (i = 0; i < o && !fail; i += s) {
		int j;
		for (j = 0; j < o && !fail; j += s) {
			int p[25] = {};
			int ik;
			for (ik = i; ik < i + s && !fail; ++ik) {
				int jk;
				for (jk = j; jk < j + s && !fail; ++jk) {
					if (arr1[ik][jk] != 0) {
						if (p[arr1[ik][jk] - 1] == 0)
							p[arr1[ik][jk] - 1] = 1;
						else
						{
							fail = 1;
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool is_row_ok(int row[], int col, int val, int N)
{
	for (int i = 0; i < N * N; i++)
	{
		if (i != col && row[i] == val)
		{
			return false;
		}
	}
	return true;
}

bool is_col_ok(int* sud[25], int row, int col, int val, int N)
{
	for (int i = 0; i < N * N; i++)
	{
		if (i != row && sud[i][col] == val)
		{
			return false;
		}
	}
	return true;
}

bool is_sqr_ok(int* sud[25], int row, int col, int val, int N)
{
	int row_corner = (row / N) * N;
	int col_corner = (col / N) * N;
	for (int i = row_corner; i < (row_corner + N); i++)
	{
		for (int j = col_corner; j < (col_corner + N); j++)
		{
			if ((i != row || j != col) && sud[i][j] == val)
			{
				return false;
			}
		}
	}
	return true;
}

bool is_legal(int* sud[25], int row, int col, int val, int N)
{
	return (is_row_ok(sud[row], col, val, N) &&
		is_col_ok(sud, row, col, val, N) &&
		is_sqr_ok(sud, row, col, val, N));
}

bool fill_sud(int* sud[25], int row, int col, int N)
{
	int next_row = (col == N * N - 1) ? row + 1 : row;
	int next_col = (col + 1) % (N * N);
	if (row == N * N)
	{
		return true;
	}
	if (sud[row][col] != 0) 
	{
		return fill_sud(sud, next_row, next_col, N);
	}
	for (int value = 1; value <= N * N; value++)
	{
		sud[row][col] = value;
		if (is_legal(sud, row, col, value, N) && fill_sud(sud, next_row, next_col, N))
		{
			return true;
		}
		sud[row][col] = 0;
	}
	return false;
}

bool resh(int* sud[25], int row, int col, int N, int* count, int r)
{
	{
		int next_row = (col == N * N - 1) ? row + 1 : row;
		int next_col = (col + 1) % (N * N);
		if (row == N * N)
		{
			*count = *count + 1;
			return false;
		}
		if (sud[row][col] != 0)
		{
			return resh(sud, next_row, next_col, N, count, 1);
		}
		for (int value = r; value <= N * N; value++)
		{
			sud[row][col] = value;
			if (is_legal(sud, row, col, value, N) && resh(sud, next_row, next_col, N, count, 1))
			{
				return true;
			}
			sud[row][col] = 0;
		}
		return false;
	}
}
