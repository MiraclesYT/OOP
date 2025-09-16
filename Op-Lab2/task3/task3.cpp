// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <stdio.h>
#include<math.h>
#include <iostream>

void main()
{
	setlocale(LC_ALL, "Ukr");
	float a;

	printf_s("Введiть радiанну мiру кута\n"); scanf_s("%f", &a);
	a = a * 180 / _ARM_WINAPI_PARTITION_DESKTOP_SDK_AVAILABLE;
	printf_s("\nГрадусна мiра:%.2f", a);

}