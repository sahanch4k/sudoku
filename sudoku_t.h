#pragma once
/*! \file sudoku_t.h
    \brief ��������������� ����
*/

/*! \fn void read(int a[20])
    \brief ������� ������ ���������� �� �����
    \param[out] a ������ ���������� ����������
*/

/*! \fn void write(int a[20])
    \brief ������� ������ ���������� � ����
    \param[in] a ������ ���������� ����������
*/

/*! \fn int ran(int N)
    \brief ������� ��������� ��������� ��������
    \param[in] N ����� ���������� ������� �������� ��� ����������
    \return ���������� ��������������� �����
*/

/*! \fn void mesh(int** arr1, int** arr2, int s)
    \brief ������� ������������� ���� ������
    \param[in,out] arr1 ������ ���������� ���� ������
    \param[in,out] arr2 ��������������� ������, ������������ ��� ����������������
    \param[in] s ������ ���� ������
*/

/*! \fn int prov(int* arr1[25], int s)
    \brief ������� �������� ������������ ���������� ������
    \param[in] arr1 ������ ���������� ���� ������
    \param[in] s ������ ���� ������
    \return ���������� 0, ���� �� ���� ������� ������, � 1, ���� ���� ������� ������� �������������� �������
*/

/*! \fn bool fill_sud(int* sud[25], int row, int col, int N)
    \brief ������� ��������� � ���������� ������
    \param[in,out] sud ������ ���������� ���� ������
    \param[in] row ����� ������
    \param[in] col ����� �������
    \param[in] N ������ ���� ������
    \return ���������� true, ���� ���� �������, � false, ���� ������� ���
*/

/*! \fn bool resh(int* sud[25], int row, int col, int N, int* count, int r)
    \brief ������� �������� ���������� �������� ���������� ������
    \param[in,out] sud ������ ���������� ���� ������
    \param[in] row ����� ������
    \param[in] col ����� �������
    \param[in] N ������ ���� ������
    \param[out] count ������� ���������� �������
    \param[in] r ���������� ��� �������� �������� �������� ������
*/
void read(int a[20]);
void write(int a[20]);
int ran(int N);
void mesh(int** arr1, int** arr2, int s);
int prov(int* arr1[25], int s);
bool fill_sud(int* sud[25], int row, int col, int N);
bool resh(int* sud[25], int row, int col, int N, int* count, int r);