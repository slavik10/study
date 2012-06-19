#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

void WriteMatrix(int* arr, int row, int col) {
	for(int i = 0; i < row; i++) {
		for	(int j = 0; j < col; j++) {
			cout << setw(4) << arr[i * col + j];
		}
		cout << endl;
	}
}
int FindMinInMatrix(int* arr, int row, int col) {
	int min = *arr;
	for(int i = 0; i < row; i++) {
		for	(int j = 0; j < col; j++) {
			if(min > arr[i * col + j]) {
				min = arr[i * col + j];
			}
		}
	}
	return min;
}
int FindMaxInMatrix(int* arr, int row, int col) {
	int max = *arr;
	for(int i = 0; i < row; i++) {
		for	(int j = 0; j < col; j++) {
			if(max < arr[i * col + j]) {
				max = arr[i * col + j];
			}
		}
	}
	return max;
}

void ChangeVariables(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void ReverseMatrix(int* arr, int row, int col) {
	for(int i = 0; i < row; i++) {
		for	(int j = 0; j < i; j++) {
			ChangeVariables(&arr[i * col + j], &arr[j * col + i]);
		}
		cout << endl;
	}
}
void BackReverseMatrix(int* arr, int row, int col) {
	for(int i = 0; i < row; i++) {
		for	(int j = col - 1; (col - j - 1) < i; j--) {
			//cout <<"["<< i << "][" << j << "] vs [" << column - j - 1 << "][" << row - i - 1 <<"]"<< endl;
			ChangeVariables(&arr[i * col + j], &arr[(col - j - 1) * col + (row - i - 1)]);
		}
		cout << endl;
	}
}


/*void WriteColumnsInMatrix(int* arr, int row, int col) {
	for(int i = 0; i < col; i++) {
		//��������� �� ������� � ������ ������, ���-�� �����, ���(� ������ ������ ���-�� ��������)
		WriteArray(&(arr[i]), row, col);
	}
}*/

void WriteArray(int* arr, int size) {
	for(int i = 0; i < size; i++) {
		cout << setw(4) << arr[i];
	}
	cout << endl;
}
bool ArrayIsAsc(int* arr, int size) {
	for(int i = 0; i < size - 1; i++) {
		//���� ������� ������� ������ ����������,
		//�� ������ �� � ������� �����������
		if(arr[i] > arr[i + 1])
			return false;
	}
	return true;
}
bool ArrayIsDesc(int* arr, int size) {
	for(int i = 0; i < size - 1; i++) {
		//���� ���� ������� ������ ��������, �� ������ �� � ������� ��������
		if(arr[i] < arr[i + 1])
			return false;
	}
	return true;
}

void WriteArray(int* arr, int size, int step) {
	for(int i = 0; i < size; i++) {
		cout << setw(4) << arr[i * step];
	}
	cout << endl;
}
bool ArrayIsAsc(int* arr, int size, int step) {
	for(int i = 0; i < size - 1; i++) {
		if(arr[i * step] > arr[i * step + step])
			return false;
	}
	return true;
}
bool ArrayIsDesc(int* arr, int size, int step) {
	for(int i = 0; i < size - 1; i++) {
		if(arr[i * step] < arr[i * step + step])
			return false;
	}
	return true;
}