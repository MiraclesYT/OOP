// task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<locale.h>
#include <iostream>
#include <conio.h>
#include<cmath>
#include <math.h>
#include <stdio.h>
#include <tchar.h>
#include <windows.h>
void main()
{
	setlocale(LC_ALL, "Ukr");
	float a = 2, b = 3, c = 5;
	printf_s("Введiть a\n"); scanf_s("%f", &a);
	printf_s("Введiть b\n"); scanf_s("%f", &b);
	printf_s("Введiть c\n"); scanf_s("%f", &c);

	a = a + c; c = a - c; a = a - c;

	c = b + c; b = c - b; c = c - b;

	a = b + a; b = a - b; a = a - b;

	printf_s("\na:%.2f", a);
	printf_s("\nb:%.2f", b);
	printf_s("\nc:%.2f", c);
}