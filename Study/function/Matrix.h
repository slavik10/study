#include "stdafx.h"

void WriteArray(int* arr, int size);
void WriteArray(int* arr, int size, int step);
bool ArrayIsAsc(int* arr, int size);
bool ArrayIsAsc(int* arr, int size, int step);
bool ArrayIsDesc(int* arr, int size);
bool ArrayIsDesc(int* arr, int size, int step);

void WriteMatrix(int* arr, int row, int col);
int FindMinInMatrix(int* arr, int row, int col);
int FindMaxInMatrix(int* arr, int row, int col);

void ChangeVariables(int* a, int* b);
void ReverseMainDiagonal(int* arr, int row, int col);
void ReverseSecondaryDiagonal(int* arr, int row, int col);