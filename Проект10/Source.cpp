#include <stdio.h>
#include <iostream>
#include <locale.h>
void task1()
{
	int h, m, sec;
	printf("������� ���-�� ������: ");
	scanf_s("%d", &sec);

	h = sec / 3600;
	printf("����: %d", h);

	m = sec / 60;
	printf("������: %d", m);

}

void task2()
{
	int x, res=0;
	printf("������� �����: ");
	scanf_s("%d", &x);

	do
	{
		res *= 10; 
		res += x % 10;
		x /= 10;
		printf("�������� �����: %d\n", res);
	}while (x > 0);
	
}

void task3()
{
	int N;
	printf("������� �����: ");
	scanf_s("%d", &N);
	int cur=0;
	int rev=0;
	int base = cur;
	while (cur)
	{
		rev = rev * 10 + cur % 10;
		cur /= 10;
	}
	if (base == rev)
		printf("true\n");
	else if (base!=rev)
		printf("false\n");

}

int main()
{
	setlocale(LC_ALL, "");
	
	int task = 0;
	int restart = 0;
	do
	{
		printf("������� ����� �������: ");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		default:
			break;
		}

		printf("\n----------------------\n");
		printf("�� ������ ����������?1/0\n");
		scanf_s("%d", &restart);

	} while (restart == 1);

	system("pause");
}