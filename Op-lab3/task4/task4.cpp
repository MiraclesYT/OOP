// task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<stdio.h>
#include <math.h>
void main()
{
	float a = 100, b = 0.001, n = 4, m = 7;
	a = n++ - m;
	printf_s("n +++m:%f \n", a);
	printf_s("n:%f \n", n);
	printf_s("m:%f \n", m);
	a = m-- > n;
	printf_s("m-->n:%f \n", a);
	printf_s("n:%f \n", n);
	printf_s("m:%f \n", m);
	a = n-- > m;
	printf_s(" n-- >m:%f \n", a);
	printf_s("n:%f \n", n);
	printf_s("m:%f \n", m);
	a = n-- - --m;
	printf_s("n--- --m:%f \n", a);
	printf_s("n:%f \n", n);
	printf_s("m:%f \n", m);
	a = --m - ++n;
	printf_s("- -m-++n:%f \n", a);
	printf_s("n:%f \n", n);
	printf_s("m:%f \n", m);
	a = m * n < n++;
	printf_s("m*n<n++:%f \n", a);
	printf_s("n:%f \n", n);
	printf_s("m:%f \n", m);


}