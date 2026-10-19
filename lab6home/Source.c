#include <stdio.h>
#include<locale.h>
#include<math.h>

//Контрольные примеры:
//x=1 y= 7 ---> не входит
//x=2 y=2 ---> входит
//x=222 y=2222 ---> не входит
int main()
{
	setlocale(LC_CTYPE, "UTF-8");
	double x;
	double y;
	puts("Введите x и y:");
	scanf("%lf %lf", &x, &y);
	if (y >= 0 && y <= 2)
	{
		if ((x >= -5 && x <= -2) || (x > 1 && x <= 5))
		{
			printf("точка (%.0lf;%.0lf) входит в закрашенную область", x, y);

		}
		else
		{
			printf("точка (%.0lf;%.0lf) не входит в закрашенную область", x, y);

		}

	}
	else if (y >= 2 && y <= 6)
	{
		if (x >= -5 && x <= 5)
		{
			printf("точка (%.0lf;%.0lf) входит в закрашенную область", x, y);

		}
		else
		{
			printf("точка (%.0lf;%.0lf) не входит в закрашенную область", x, y);

		}

	}
	else
	{
		printf("точка (%.0lf;%.0lf) не входит в закрашенную область", x, y);
	}

}