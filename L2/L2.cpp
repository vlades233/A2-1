// L2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"


int main()
{
	double a, b, c, x, y, z;
	printf("Enter side of triangle (a, b, c)cm: ");
	int cn = scanf("%lf %lf %lf", &a, &b, &c);

	if (a == b &&  b ==c && c==a) {
		printf("equilateral triangle\n");
	}
	else
	{

		if (a == b || b == c || c == a)
		{
			printf("isosceles triangle\n");
		}
		else
		{
			x = (a*a) - ((b*b) + (c*c));
			y = (b*b) - ((a*a) + (c*c));
			z = (c*c) - ((b*b) + (a*a));
			if (x == 0 || y == 0 || z == 0)
			{
				printf("rectangular triangle\n");

			}
			else
			{
				printf("other triangle\n");
			}
		}
	}


	getchar();

	return 0;
	
}
