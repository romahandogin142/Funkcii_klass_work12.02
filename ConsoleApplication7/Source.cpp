#include <stdio.h>
#include <iostream>

#include "Header.h"

using namespace std;

void main()
{
	/*11.	�������� ����������� ������� :
	a.���������� ����� ���� ������������ �����;
	b.���������� ���������� ���� ������������ �����.*/
	char ch[5];
	int s=0;
	rand(ch, 5);
	s = sum(ch, 5);
	cout << s << endl;


}



