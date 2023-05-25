#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>     
#include <time.h>     
#include <locale.h>   
#define SIZE 20
#define N 5
#define M 7
#include <stdlib.h>
#include <conio.h>
int main()
{
	setlocale(LC_ALL, "Rus");
	//Переменная i используется в циклах для итерации по массиву a ПРОВЕРКА СВЯЗИ НА GIT BASH
	int i;
	//Переменная anss используется для хранения значения найденного четного элемента массива. 
	//Изначально она установлена в 1 для случая, когда в массиве отсутствуют четные элементы.
	int anss = 1;
	int a[SIZE];
	srand(time(NULL)); // время сделал так
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 61 + (-20);
		printf("%d ", a[i]);
	}
	for (int i = 0; i < SIZE; i++)
		if (!(a[i] % 2)) {
			anss = a[i];
			break;
		}
	for (int i = 0; i < SIZE; i++)
		if (!(a[i] % 2))
			if (anss > a[i])
				anss = a[i];
	if (!(anss % 2))
		printf("Answer: %d", anss);
	else
		printf("There is no even elements\n");
	printf("%s", "\n");
	int n;
	int m;
	int aa;
	int bb;
	int mas[10][10];
	int c = 0;
	for (n = 0; n < 10; n++) {
		for (m = 0; m < 10; m++) {
			mas[n][m] = rand() % 10 - (10);
			printf("%d%s\t", mas[n][m], (m + 1) % 10 == 0 ? "\n" : " ");
		}
	}

	for (int n = 0; n < 9; n++) {
		for (int m = 0; m < 9; m++) {
			aa = mas[n][m];
			bb = mas[n][m + 1];
			(aa == bb) ? c++ : c;
		}
	}
	printf("%d", c);
	return 0;
}