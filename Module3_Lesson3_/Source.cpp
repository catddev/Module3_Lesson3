#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <conio.h>

void main()
{

	setlocale(LC_ALL, "Rus");

	srand(time(NULL));

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	int tn = 0;

start:

	printf("task number:\t");
	scanf("%d", &tn);

	switch (tn)
	{
	case 1:
	{
		int day;
		printf("day:\t");
		scanf("%d", &day);
		switch (day)
		{
		case 1:
			printf("\nGo to work\n\n");
			break;
		case 2:
			printf("\nGo to work again\n\n");
			break;
		case 3:
			printf("\nAnd again\n\n");
			break;
		case 4:
			printf("\nAnd again\n\n");
			break;
		case 5:
			printf("\nLsat working day\n\n");
			break;
		case 6:
			printf("\nLive your life\n\n");
			break;
		case 7:
			printf("\nHave a rest\n\n");
			break;
		default:
			printf("Only 7 days\n\n");
		}
	}
	break;
	case 2:
	{
		int x, d;
		x = 1 + rand() % 365;
		printf("%d\n\n", x);
		if (x % 7 == 1)
			printf("Monday\n\n");
		else if (x % 7 == 2)
			printf("Tuesday\n\n");
		else if (x % 7 == 3)
			printf("Wednesday\n\n");
		else if (x % 7 == 4)
			printf("Thursday\n\n");
		else if (x % 7 == 5)
			printf("Friday\n\n");
		else if (x % 7 == 6)
			printf("saturday\n\n");
		else if (x % 7 == 0)
			printf("Sunday\n\n");
	}
	break;
	case 3:
	{
		int n, x, y, z;
		n = 100 + rand() % 1000;
		printf("%d\n\n", n);
		x = n % 10;
		n = n / 10;
		y = n % 10;
		n = n / 10;
		z = n % 10;
		if (((x + y + z) / 100 == 0)&& ((x + y + z) / 10 != 0))
			printf("сумма цифр числа N = %d и является двузначным числом\n\n", (x + y + z));
		else printf("сумма цифр числа N = %d и НЕ является двузначным числом\n\n");
		if (x == 0)
			x = 1;
		if (y == 0)
			y = 1;
		if (z == 0)
			z == 1;
		if ((x*y*z)>99&&(x*y*z)<1000)
			printf("произведение его цифр = %d и является трехзначным числом\n\n", (x*y*z));
		else printf("произведение его цифр = %d и НЕ является трехзначным числом\n\n", (x*y*z));
	}
	break;
	case 4:
	{
		int r, s, b, k;
		b = 3 + rand() % 3;
		s = 0 + rand() % 6;
		if (s == 0) k = 1;
		else if (s < 2) k = 13;
		else if (s >= 2 && s <= 5) k = 16;
		r = b*k;
		if (r >= 45) printf("score: %d \nAdmitted\n\n", r);
		else printf("score: %d \nDenied\n\n", r);
	}
	break;
	case 5:
	{
		int x, v;
		x = 1 + rand() % 20;
		if (x == 1) v = 1;
		else if (x >= 2 && x <= 4) v= 2;
		else if (x >= 6 && x <= 20) v = 3;
		switch (v)
		{
		case 1:
			printf("\n%d рубль\n\n", x);
			break;
		case 2:
			printf("\n%d рубля\n\n", x);
			break;
		case 3:
			printf("\n%d рублей\n\n", x);
			break;
		}
	}
	break;
	case 6:
	{
		/*int x, n, p;
		x = 1 + rand() % 31;*/
		

	}
	break;
	case 7:
	{
		int k, t, sum;
		printf("выберите город и введите код ниже - \nАлматы (7272), \nШымкент (7252), \nАстана (7172), \nАктау (7292):\n\n");
		scanf("%d", &k);
		printf("enter time of conversation:\t");
		scanf("%d", &t);
		if (k == 7272) sum=t*25;
		else if (k == 7252) sum=t*18;
		else if (k == 7172) sum=t*13;
		else if (k == 7292) sum=t*11;
		else printf("\nchoose the city from the list\n\n");
		printf("\ntotal sum=%d\n\n", sum);
	}
	break;
	case 8:
	{
		int x;
		printf("\nвведите характер ветра: слабый - 1, умеренный - 2, сильный - 3, ураганный - 4:\n\n");
		scanf("%d", &x);
		switch (x)
		{
		case 1:
			printf("1-4 m/s\n\n");
			break;
		case 2:
			printf("5-10 m/s\n\n");
			break;
		case 3:
			printf("9-18 m/s\n\n");
			break;
		case 4:
			printf("more than 19 m/s\n\n");
			break;
		default:
			printf("no option\n\n");
		}
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}