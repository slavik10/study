#include "stdafx.h"
#include <iostream>
#include <time.h>
using namespace std;

void Init() {
	setlocale(LC_ALL, "Russian");
	srand ( time(NULL) );
}

int flip() {
	return rand() % 2;
}

void OrelReshkaTask() {
	Init();
	int OrelCount = 0;
	int ReshkaCount = 0;

	for(int i = 0; i < 10000; i++) {
		if(flip() == 0) 
			OrelCount++;
		else
			ReshkaCount++;
	}

	cout << "Кол-во орлов: " << OrelCount << endl;
	cout << "Кол-во решек: " << ReshkaCount << endl;
}
