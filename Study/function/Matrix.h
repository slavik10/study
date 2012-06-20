#include "stdafx.h"

void ChangeVariables(int* a, int* b);
void ChangeArrays(int* arr, int* arr2, int size);
void ChangeArrays(int* arr, int* arr2, int size, int step);

void WriteArray(int* arr, int size);
void WriteArray(int* arr, int size, int step);

bool ArrayIsAsc(int* arr, int size);
bool ArrayIsAsc(int* arr, int size, int step);
bool ArrayIsDesc(int* arr, int size);
bool ArrayIsDesc(int* arr, int size, int step);

void WriteMatrix(int* arr, int row, int col);

int FindMinInMatrix(int* arr, int row, int col);
int FindMaxInMatrix(int* arr, int row, int col);

void ReverseMainDiagonal(int* arr, int row, int col);
void ReverseSecondaryDiagonal(int* arr, int row, int col);
void ReverseByRows(int* arr, int row, int col);
void ReverseByColumns(int* arr, int row, int col);