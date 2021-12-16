#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* ***1***
void main()
{
	int num1, res1 , res2 ,res3;
	printf("Enter integer number with 3 digits: ");
	scanf("%d", &num1);
	res1 = num1 % 10; // if the number is 198- 198 % 10 = 8
	res2 = (num1 / 10) % 10; // 19 % 10 = 9 
	res3 = (num1 / 100) % 10; // 1 % 10 = 1
	printf("Sum of digit is: %d", res1 + res2 + res3);
}*/

/* ***2***
void main()
{
	int num1 , res1 , res2 , res3;
	printf("Enter integer number with 3 digits: ");
	scanf("%d", &num1);
	res1 = num1 % 10;
	res2 = (num1 / 10) % 10;
	res3 = (num1 / 100) % 10;
	printf("New number is: %d", res1);
	printf("%d", res2);
	printf("%d", res3);
}*/

/* ***3***
void main()
{
	int days, years, mounths, d;
	printf("Enter number of days: ");
	scanf("%d", &days);
	if (days / 365 >= 1 || days % 365 >= 30) {
		years = days / 365;
		printf("years: %d", years);
		mounths = (days % 365) / 30;
		printf(" ,mounths: %d", mounths);
		d = (days % 365) % 30;
		printf(" ,days: %d", d);
	}
	else if (days / 365 < 1) {
		years = 0;
		printf("years: %d", years);
		mounths = days / 30;
		printf(" ,mounths: %d", mounths);
		d = days % 30;
		printf(" ,days: %d", d);
	}
}*/

/* ***4***

void main()
{
	int g1, g2, g3, finalGrade, gradeTest, gradeTasks;
	printf("Enter grade of task 1: \n");
	scanf("%d", &g1);
	printf("Enter grade of task 2: \n");
	scanf("%d", &g2);
	printf("Enter grade of task 3: \n");
	scanf("%d", &g3);

	printf("Enter grade of final test: ");
	scanf("%d", &gradeTest);

	gradeTasks = (g1 + g2 + g3) / 3;

	finalGrade = (gradeTasks * 0.2) + (gradeTest * 0.8);

	printf("The total grade of the test in computer science is: %d", finalGrade);
}*/

/* ***5***
void main()
{
	double X, X2, X4 , X6 , X8;
	printf("Enter a number: ");
	scanf("%lf", &X);

	X2 = (X*X);
	printf("X^2 =  %lf", X2);

	X4 = X2 * X2;
	printf(", X^4 =  %lf", X4);

	X6 = X2 * X4;
	printf(", X^6 =  %lf", X6);

	X8 = X4 * X4;
	printf(", X^8 =  %lf", X8);
}*/

/* ***6*** 
void main()
{
	double dCity, sCar1, sCar2, sFly, tMeet, dFly;

	printf("Enter distance between city A to city B: ");
	scanf("%lf", &dCity);

	printf("Enter spped of car 1: ");
	scanf("%lf", &sCar1);
	printf("Enter spped of car 2: ");
	scanf("%lf", &sCar2);

	printf("Enter speed of fly: ");
	scanf("%lf", &sFly);

	if (sFly <= sCar1 || sFly <= sCar2)
		printf("Err ***Enter speed of fly bigger then speed of cars !***\n");

	else {
		tMeet = (dCity / (sCar1 + sCar2));
		dFly = sFly * tMeet;
		printf("The distance of fly in km is: %.2lf\n", dFly);
	}
}*/

/* ***1*** 
void main()
{
	double lengthSide;
	printf("Enter length side of square: ");
	scanf("%lf", &lengthSide);
	
	double slantSquare;
	slantSquare = sqrt((pow(lengthSide, 2)) * 2);
	printf("The length of slant square is: %.3lf", slantSquare);
} */

/* ***2***
void main()
{
	double r;
	printf("Enter the radius of circle: ");
	scanf("%lf", &r);

	double pi = 3.14;
	double area;
	area = pow(r, 2) * pi;
	printf("The area of the circle is: %.3lf\n", area);

	double perimeter; 
	perimeter = 2 * (r * pi);
	printf("The perimeter of the circle is: %.3lf\n", perimeter);

	double volume , x;
	x = 4.0 / 3.0;
	volume = x * pi * pow(r , 3);
	printf("The volume of the circle is: %.3lf\n", volume);
}*/

/* ***3***
void main()
{
	double a1, d;
	printf("Enter your a1 number: \n");
	scanf("%lf", &a1);

	printf("Enter your d number: \n");
	scanf("%lf", &d);

	int n;
	printf("Enter your n number: \n");
	scanf("%d", &n);
	
	double an;
	an = a1 + d * (n - 1);

	printf("A%d", n); 
	printf(": %.3lf\n", an);
}*/

/* ***4***
void main()
{
	double a1, d;
	printf("Enter your a1 number: \n");
	scanf("%lf", &a1);

	printf("Enter your d number: \n");
	scanf("%lf", &d);

	int n;
	printf("Enter your n number: \n");
	scanf("%d", &n);

	double an;
	an = a1 + d * (n - 1);

	double s;
	s = (n * (a1 + an)) / 2.0;
	printf("The sum of S: %.3lf", s);
}*/

/* ***5***
void main()
{
	double a1, q;
	printf("Enter your a1 number: \n");
	scanf("%lf", &a1);

	printf("Enter your q number: \n");
	scanf("%lf", &q);

	int n;
	printf("Enter your n number: \n");
	scanf("%d", &n);

	double an;
	an = a1 * pow(q, n - 1);
	printf("A%d", n);
	printf(": %.3lf\n", an);
}*/

/* ***6*** 
void main()
{
	double a1, q;
	printf("Enter your a1 number: \n");
	scanf("%lf", &a1);

	printf("Enter your q number: \n");
	scanf("%lf", &q);

	int n;
	printf("Enter your n number: \n");
	scanf("%d", &n);

	double an;
	an = (a1 * (pow(q, n) - 1)) / (q-1);
	printf("A%d", n);
	printf(": %.1lf\n", an);
}*/

/* ***7*** 
void main()

{
	int num;
	printf("Enter number with 3 digits: ");
	scanf("%d", &num);

	int n1, n2, n3, ans;
	n1 = num % 10; 
	n2 = (num / 10) % 10;
	n3 = (num / 100) % 10; 
	ans = pow(n1, 2) + pow(n2, 2) + pow(n3, 2);
	printf("The answer is: %d", ans);
}*/

/* ***8***
void main()
{
	double num;
	printf("Enter double number: \n");
	scanf("%lf", &num);
	
	double ans;
	ans = num - (int)num;
	printf("The double num is: %.2lf\n", ans);

}*/

/* ***9***
void main()
{
	double previousWage;
	printf("Enter your previos wage: ");
	scanf("%lf", &previousWage);

	double compensation;
	printf("Enter your compesation: ");
	scanf("%lf", &compensation);

	double wageNow;
	wageNow = (int)((previousWage * 0.75 + compensation * 0.1) + 1);
	printf("Your wage in this work is: %.0lf\n", wageNow);
}*/
void main()
{
	int a1, d, an, n;
	printf("Please enter the a1 of the series and the d of the series and the an you want:\n");
	scanf("%d %d %d", &a1, &d, &n);
	an = a1 + d*(n - 1);
	printf("The number is : %d", an);
}

