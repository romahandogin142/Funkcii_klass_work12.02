#include <stdio.h>
#include <iostream>
#include <stdarg.h>
#include <time.h>

using namespace std;



void rand(char*mas,int r)
{
	srand(time(0));

	for (int i = 0; i < r; i++)
	{
		*mas = (1 + rand() % 9) + '0';
		mas++;
	}
}

int sum(char* ch,int r)
{
	int s=0;
	for (int i = 0; i < r; i++)
	{
		s+=(int)*ch;
		ch++;
	}
	return s;
}

int rsum(char* ch, int r,int *s)
{	
	if (r >= 0)
	{
		r--;
		s += rsum(ch + r, r, s);
	}
	else
		r = *ch+r;

	return r;
}

int t2(int a, char b)
{
	cout << (int)b << endl;
	for (int i = 0; i < a; i++)
	{
		cout << b;
	}
	return 0;
}

void addRD(int d, int & k)
{
	k = 10 * k + d;
}

int  up_and_down(int n)
{

	cout << "Level: " << n << endl;
	if (n < 4)
	{
		int result = up_and_down(n + 1);
		cout << "result: " << result << endl;
		cout << "Level: " << n << endl;
	}
	return n;
}

long fact(int n)
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;

	return ans;
}

long rfact(int n)
{
	long ans;
	if (n > 0)
		ans = n*rfact(n - 1);
	else
		ans = 1;

	return ans;
}

int sumNumber(int num, ...)
{
	int sum = 0.0;

	va_list arg;
	//Инициализируем указатель arg
	va_start(arg, num);
	//Суммируем рады
	int t;
	for (; num; num--)
	{
		t = va_arg(arg, int);
		sum += t;
	}
	//завершение
	va_end(arg);

	return sum;
}
