#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

#include "Matrix.h"

int main()
{
	const int column = 4;
	const int row = 3;

	int arr[row][column] = {
		{ 1,  5,   7,  3},
		{ 9, -4,  17, 10},
		{18, -8,  74,  5}
	};

	WriteMatrix((int *)arr, row, column);

	for(int i = 0; i < column; i++) {
		//указатель на элемент в первой строке, кол-во строк, шаг(в данном случае кол-во столбцов)
		//WriteArray(&arr[0][i], row, column);

		if(ArrayIsAsc(&arr[0][i], row, column))
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}	
	return 0;
}

