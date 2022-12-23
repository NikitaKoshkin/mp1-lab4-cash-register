#include <stdio.h>
#include <string.h>
int main()
{
	char stroka[210];
	char plus = '+';
	char minus = '-';
	char multiplication = '*';
	char division = '/';
	char minus1[6] = "minus";
	char plus1[5] = "plus";
	char multiplication1[15] = "multiplication";
	char division1[9] = "division";
	int mode = 0;
	printf("Enter string: ");
	gets_s(stroka);
	for (int i = 0;i < 200;i++)
	{
		if (strncmp((stroka + i), &plus, 1) == 0)
		{
			mode = 2;
		}
		if (strncmp((stroka + i), &minus, 1) == 0)
		{
			mode = 1;
		}
		if (strncmp((stroka + i), &multiplication, 1) == 0)
		{
			mode = 3;
		}
		if (strncmp((stroka + i), &division, 1) == 0)
		{
			mode = 4;
		}

		switch (mode)
		{
		case (1):
		{
			for (int v = 0;v < 4;++v) {
				for (int j = 200; j > i; --j) {
					stroka[j] = stroka[j - 1];
				}
			}
			stroka[i] = ' ';
			for (int t = 1;t < 5;++t)
			{
				stroka[i + t] = ' ';
			}
			strncpy(&stroka[i], minus1, 5);
			mode = 0;
			break;
		}
		case (2):
		{
			for (int v = 0;v < 3;++v) {
				for (int j = 200; j > i; --j) {
					stroka[j] = stroka[j - 1];
				}
			}
			stroka[i] = ' ';
			for (int t = 1;t < 4;++t)
			{
				stroka[i + t] = ' ';
			}
			strncpy(&stroka[i], plus1, 4);
			mode = 0;
			break;
		}
		case (3): {
			for (int v = 0;v < 13;++v) {
				for (int j = 200; j > i; --j) {
					stroka[j] = stroka[j - 1];
				}
			}
			stroka[i] = ' ';
			for (int t = 1;t < 14;++t)
			{
				stroka[i + t] = ' ';
			}
			strncpy(&stroka[i], multiplication1, 14);
			mode = 0;
			break;}
		case (4):
		{
			for (int v = 0;v < 7;++v) {
				for (int j = 200; j > i; --j) {
					stroka[j] = stroka[j - 1];
				}
			}
			stroka[i] = ' ';
			for (int t = 1;t < 8;++t)
			{
				stroka[i + t] = ' ';
			}
			strncpy(&stroka[i], division1, 8);
			mode = 0;
			break;
		default:break;
}
}
	}
	puts(stroka);
}