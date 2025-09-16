// Op-Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include<stdio.h>
#include<math.h>
int main()
{
	float x, y, e, z, a, b, c, S;
	printf("\nVvedit x: "); scanf_s("%f", &x);
	printf("\nVvedit y: "); scanf_s("%f", &y);
	printf("\nVvedit z: "); scanf_s("%f", &z);
	printf("\nVvedit e: "); scanf_s("%f", &e);
	a = pow(e, z + y) * (x - y);
	b = sin(x) + sin(y) + (x);
	c = sqrt(4 * x) * pow(x, 7) + log(y);
	S = a / b + c;
	printf("Result S=%.4f", S);
	return 0;
}
