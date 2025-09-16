// task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<stdio.h>
#include <math.h>
void main()
{
	float a = 100, b = 0.001, c, d, l, k;
	c = pow(a + b, 4);
	d = pow(a, 4) + 4 * (a, 3) * b + 6 * pow(a, 2) * pow(b, 2);
	l = 4 * a * pow(b, 3) + pow(b, 4);
	k = (c - d) / 1;
	printf("c:%f \n", c);
	printf("d:%f \n", d);
	printf("l:%f \n", l);
	printf("k:%f \n", k);
}