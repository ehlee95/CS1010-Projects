/**
 * CS1010 AY2016/7 Semester 1 Lab2 Ex3
 * bisection.c
 * Eric Lee
 * Tutorial 23
 * This program uses the bisection method to find the root of a polynomial
 * within a range [a, b]
 */

#include <stdio.h>
#include <math.h>

double find_root(double, double, int, int, int, int);
double polynomial(double, int, int, int, int);

int main(void) {
	
	int c3, c2, c1, c0;			 // coefficients of polynomial
	double a, b;  		         // endpoints
	double root;				 // output

	printf("Enter coefficients (c3,c2,c1,c0) of polynomial: ");
	scanf("%d %d %d %d", &c3, &c2, &c1, &c0);

	printf("Enter endpoints a and b: ");
	scanf("%lf %lf", &a, &b);

	root = find_root(a, b, c3, c2, c1, c0);

	printf("root = %f\n", root);
	printf("p(root) = %f\n", polynomial(root, c3, c2, c1, c0));

	return 0;
}

// function finds root of polynomial using bisection
double find_root (double a, double b, int c3, int c2, int c1, int c0) {

	double pA, pB, diff;		 // function values at endpoints
	double m, pM;         		 // midpoint and function value at midpoint

	pA = polynomial(a, c3, c2, c1, c0);		//calculates initial values
	pB = polynomial(b, c3, c2, c1, c0);
	diff = fabs(a - b);
	m = (a + b)/2;

	while (diff > 0.0001) {					//loop runs until a ~ b
	
		pM = polynomial(m, c3, c2, c1, c0);

			if(pM==0)						//halts loop if pM = 0
				return m;
			else if(pM < 0)
				if(pA < 0)	
					a = m;
				else
					b = m;
			else
				if(pB > 0)
					b = m;
				else
					a = m;
		
		m = (a + b)/2;
		pA = polynomial(a, c3, c2, c1, c0);
		pB = polynomial(b, c3, c2, c1, c0);
		diff = fabs(a - b);
	
	}

	return m;

}

// function determines output of polynomial when given double input
double polynomial(double input, int c3, int c2, int c1, int c0) {			//calculates value of function at 'input'

	double polynomialValue = c3 * pow(input,3) + c2 * pow(input,2) + c1 * input + c0;
	
	return polynomialValue;

}
