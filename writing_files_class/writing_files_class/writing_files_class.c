#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

/*
יש לייצר קובץ עם 10 שורות. בכל שורה יהיה התו כוכבית

יש לייצר קובץ עם 10 שורות ,בכל שורה עשרה טורים של האות A

יש לקלוט ממשתמש מספר  X ולייצר קובץ עם X שורות , בכל שורה יהיה חמישים כוכביות.

יש לקלוט מהמשתמש מחרוזת, ומספר שורות, יש לייצר קובץ חדש עם המחרוזת הזו כפול מספר הפעמים (ללא ירידת שורה)

כתבו פונקציה שמקבלת פרמטר שם קובץ (לא פוינטר לקובץ)  קוראת את הקובץ ויוצרת קובץ חדש (שם הקובץ יהיה מורכב משם הקובץ המקורי עם המילה copy
הפונקציה מעתיקה את תכולת הקורץ המקורי לחדש ובנוסף מוסיפה לתוכן את המחרוזת NOT ORIGINAL
*/


int main()
{

	FILE* f = fopen("data.txt", "w");
	int num;

	if (f != NULL)
	{
		fputc('1', f);
		fputc('.', f);
		fputc('\n', f);

		for (int i = 1; i <= 10; i++)
		{
			fputc('*', f);
			fputc('\n', f);
		}

		fputc('\n', f);
		fputc('2', f);
		fputc('.', f);
		fputc('\n', f);
		fputc('\n', f);

		for (int i = 1; i <= 10; i++)
		{
			for (int i = 1; i <= 10; i++)
			{
				fputc('A', f);
			}
			fputc('\n', f);
		}

		fputc('\n', f);
		fputc('3', f);
		fputc('.', f);
		fputc('\n', f);
		fputc('\n', f);

		printf("please enter a number: \n");
		scanf("%d", &num);
		for (int i = 1; i <= num; i++)
		{
			for (int i = 1; i <= 50; i++)
			{
				fputc('*', f);
			}
			fputc('\n', f);
		}

		fputc('\n', f);
		fputc('4', f);
		fputc('.', f);
		fputc('\n', f);
		fputc('\n', f);

		char str[1000];
		printf("please enter a str: \n");
		//scanf(" %s", str);
		gets(str);
		gets(str);
		printf("please enter a number: \n");
		scanf("%d", &num);


		for (int i = 1; i <= num; i++)
		{
			for (int i = 0; i < strlen(str); i++)
			{
				fputc(str[i], f);
			}
			fputc('\n', f);
		}

	}
	else
	{
		// error
	}
	fclose(f);


	return 0;
}