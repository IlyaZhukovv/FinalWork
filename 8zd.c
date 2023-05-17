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
	int i, ans = 1;
	int a[SIZE];
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		a[i] = rand() % 61 + (-20);
		printf("%d ", a[i]);
	}
	for (int i = 0; i < SIZE; i++)
		if (!(a[i] % 2)) {
			ans = a[i];
			break;
		}
	for (int i = 0; i < SIZE; i++)
		if (!(a[i] % 2))
			if (ans > a[i])
				ans = a[i];
	if (!(ans % 2))
		printf("Answer: %d", ans);
	else
		printf("There is no even elements\n");
	printf("%s", "\n");
	int n, m, aa, bb;
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