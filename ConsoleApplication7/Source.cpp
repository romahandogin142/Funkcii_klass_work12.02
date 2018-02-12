#include <stdio.h>
#include <iostream>

#include "Header.h"

using namespace std;

void main()
{
	/*11.	Написать рекурсивную функцию :
	a.вычисления суммы цифр натурального числа;
	b.вычисления количества цифр натурального числа.*/
	char ch[5];
	int s=0;
	rand(ch, 5);
	s = sum(ch, 5);
	cout << s << endl;


}



