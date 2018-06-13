#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

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
			printf("\nLast working day\n\n");
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
		n = 100 + rand() % 901;
		printf("%d\n\n", n);
		x = n % 10;
		n = n / 10;
		y = n % 10;
		n = n / 10;
		z = n % 10;
		if ((x + y + z) > 9 && (x + y + z) < 100)
			printf("сумма цифр числа N = %d и является двузначным числом\n\n", (x + y + z));
		else printf("сумма цифр числа N = %d и НЕ является двузначным числом\n\n");
		if ((x*y*z) > 99 && (x*y*z) < 1000)
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
		/*6.	Ввести число от 1 до 31. Определить ближайшую (следующую) дату полнолуния или 
		новолуния (лунных месяц содержит 28 дней), если последнее полнолуние было 27 августа.*/
		int d, p, n;

		printf("Введите число от 1 до 31:\n");
		scanf("%d", &d);
		if (d > 0 && d < 32)
		{
			printf("Последнее полнолуние было 27 августа.\n");
			n = abs(31 - 27 - 14);
			p = abs(31 - 27 - 28);

			if (d < n)
				printf("Следующее новолуние = %d\n", n);
			else if (d > n && d < p)
				printf("Следующее полнолуние = %d\n", p);
			else if (d == n)
				printf("Новолуние сегодня! %d\n", n);
			else if (d == p)
				printf("Полнолуние сегодня! %d\n", p);
		}
		else
			printf("Введите число от 1 до 31\n");
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
	case 9:
	{
		//3.	Почтовый автомат предлагает поздравительные открытки на три темы 
		//(1Новогодние, 2 - С Днем Рождения, 3 - С Днем Защитника Отечества) 
		//в трех вариантах (a, b, c) по цене 2 тенге.  Ввести с клавиатуры номер темы, 
		//вариант, и купюру оплаты (5,10, 20 тенге). Выдать нужную открытку 
		//(сообщение, например: «Новогодние, вариант с», а также сдачу (купюрами 1,2,5,10) 
		//с виде сообщения, например, «2тн+1тн». Предусмотреть обработку неправильного номера или варианта.
		int theme = 0, price = 0;
		char var;

		printf("Введите номер темы:");
		scanf("%d", &theme);

		cin.get();
		printf("Введите вариант (a, b, c):");
		scanf("%c", &var);

		printf("Введите купюру оплаты (5,10, 20 тенге):");
		scanf("%d", &price);

		if (theme == 1)
			printf("Новогодние, вариант %c", var);
		else if (theme == 2)
			printf("С Днем Рождения, вариант %c", var);
		else if (theme == 3)
			printf("С Днем Защитника Отечества, вариант %c", var);
		if (price == 5)
			printf(", сдача 2тн+1тн.\n");
		else if (price == 10)
			printf(", сдача 5тн+2тн+1тн.\n");
		else if (price == 20)
			printf(", сдача 10тн+5тн+2тн+1тн.\n");
	}
	break;
	default:
		printf("\nerror: no tasks\n\n");
	}
	goto start;
}