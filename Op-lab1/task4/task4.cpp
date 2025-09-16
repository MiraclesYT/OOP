// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<locale.h>
#include <iostream>
#include <conio.h>
#include<cmath>
#include <math.h>
#include <stdio.h>
#include <tchar.h>
#include <windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, y;
	printf_s("Введіть a=");
	scanf_s("%lf", &a);
	printf_s("Введіть b=");
	scanf_s("%lf", &b);
	y = (a / 5 + b / 3) - (a * a - b * b) / b + 2;
	printf_s("Результат: y=%f\n", y);
	setlocale(LC_ALL, "Ukr");
	printf("Завдання 4");
	return 0;


}