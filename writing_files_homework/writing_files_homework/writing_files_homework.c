#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

int exercise1();
int exercise2();
int exercise4();
int exercise5();

int exercise1()
{
	FILE* f = fopen("exe1.txt", "w");


	if (f)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				fputc('*', f);
			}
			fputc('\n', f);
		}
	}
	else
	{
		// error
	}
	fclose(f);
}

int exercise2()
{
	FILE* f = fopen("exe2.txt", "w");


	if (f)
	{
		for (int i = 1; i <= 4; i++)
		{
			if (i == 1)
			{
				for (int j = 1; j <= 10; j++)
				{
					fputc('1', f);
				}
			}
			else if (i == 2)
			{
				for (int j = 1; j <= 10; j++)
				{
					fputc('2', f);
				}
			}
			else if (i == 3)
			{
				for (int j = 1; j <= 10; j++)
				{
					fputc('3', f);
				}
			}
			else if (i == 4)
			{
				for (int j = 1; j <= 10; j++)
				{
					fputc('4', f);
				}
			}
			fputc('\n', f);
		}
	}
	else
	{
		// error
	}
	fclose(f);
}

int exercise4()
{
	/*

	מבנים: יש להגדיר מבנה שמייצג רכב:
	שם 100 תוים
	מודל 10 תוים
	שנת עליה לכביש - מספרי
	מספר רכב - מספר

	יש ליצור משתנה מסוג המבנה הזה ולהציב נתונים כרצונכם

	*/
	FILE* f;
	f = fopen("exe4.txt", "w");

	if (f)
	{
		struct  car
		{
			char name[100];
			char model[100];
			int year;
			int id;
		};

		// דרך 1
		struct car a;
		strcpy(a.name, "BMW");
		strcpy(a.model, "pro4");
		a.year = 2019;
		a.id = 564821;

		fwrite(&a, sizeof(struct car), 1, f);

		// דרך 2
		struct  car b = { "mazda","family5",2017,648521 };
		fwrite(&b, sizeof(struct car), 1, f);
	}
	else
	{
		// error
	}
	fclose(f);


}

exercise5()
{
	/*
	על בסיס התרגיל הקודם יש להגדיר מערך של מבנה שמייצג רכב בגודל של 10
	יש לבקש מהמשתמש שיכניס נתונים בהתאמה ולמלא את המערך בהתאמה
	*/

	FILE* f = fopen("exe5.bin", "w");

	struct StructCar
	{
		char name[100];
		char model[100];
		int year;
		int id;
	};

	if (f)
	{

		char name[100];
		char model[100];
		int year;
		int id;

		struct StructCar car;
		struct StructCar* list;

		list = malloc(sizeof(struct StructCar) * 10);


		for (int i = 1; i <= 10; i++)
		{
			printf("\nEnter Name:");
			scanf("%s", name);

			printf("\nEnter model:");
			scanf("%s", model);

			printf("\nEnter year:");
			scanf("%d", &year);

			printf("\nEnter id:");
			scanf("%d", &id);

			strcpy(list->name, name);
			strcpy(list->model, model);
			list->year = year;
			list->id = id;
			fwrite(&car, sizeof(struct StructCar), 1, f);
			list++;
		}

		fclose(f);
		free(list);

	}
	else
	{
		// error
	}
}

int main()
{
	exercise1();
	exercise2();
	exercise4();
	exercise5();

	return 0;
}