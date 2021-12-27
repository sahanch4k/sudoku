#pragma once
/*! \file sudoku_t.h
    \brief Документируемый файл
*/

/*! \fn void read(int a[20])
    \brief Функция чтения статистики из файла
    \param[out] a Массив содержащий статистику
*/

/*! \fn void write(int a[20])
    \brief Функция записи статистики в файл
    \param[in] a Массив содержащий статистику
*/

/*! \fn int ran(int N)
    \brief Функция генерации случайных значений
    \param[in] N Число являющееся верхней границей для генератора
    \return Возвращает сгенерированное число
*/

/*! \fn void mesh(int** arr1, int** arr2, int s)
    \brief Функция перемешивания поля судоку
    \param[in,out] arr1 Массив содержащий поле судоку
    \param[in,out] arr2 Вспомогательный массив, используется при транспонировании
    \param[in] s Размер поля судоку
*/

/*! \fn int prov(int* arr1[25], int s)
    \brief Функция проверки правильности заполнения судоку
    \param[in] arr1 Массив содеажащий поле судоку
    \param[in] s Размер поля судоку
    \return Возвращает 0, если не были найдены ошибки, и 1, если были найдены символы противоречащие условию
*/

/*! \fn bool fill_sud(int* sud[25], int row, int col, int N)
    \brief Функция подсказки в заполнении судоку
    \param[in,out] sud Массив содержащий поле судоку
    \param[in] row Номер строки
    \param[in] col Номер столбца
    \param[in] N Размер поля судоку
    \return Возвращает true, если есть решение, и false, если решения нет
*/

/*! \fn bool resh(int* sud[25], int row, int col, int N, int* count, int r)
    \brief Функция подсчета количества способов заполнения судоку
    \param[in,out] sud Массив содержащий поле судоку
    \param[in] row Номер строки
    \param[in] col Номер столбца
    \param[in] N Размер поля судоку
    \param[out] count счетчик количества решений
    \param[in] r переменная для хранения прошлого значения ячейки
*/
void read(int a[20]);
void write(int a[20]);
int ran(int N);
void mesh(int** arr1, int** arr2, int s);
int prov(int* arr1[25], int s);
bool fill_sud(int* sud[25], int row, int col, int N);
bool resh(int* sud[25], int row, int col, int N, int* count, int r);