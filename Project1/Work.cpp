#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

void generation(room* num)//��������� ������� 
{
	for (int i = 0;i < 10;i++)
	{
		num->numb = rand() % 11;
	}
	cout << "����� ��������:" << num << endl;
}

void generationKol(room* rooms)//���-�� ������ 
{
	for (int i = 0;i < 10;i++)
	{
		rooms->rooms = 1 + rand() % 3;
	}
	cout << "���-�� ������ � ��������:" << rooms << endl;
}

void generationS(room* s)//�������
{
	for (int i = 0;i < 10;i++)
	{
		s->s = 50 + rand() % 120;
	}
	cout << "����� �������:" << s << endl;
}



t Ter()
{
	return (t)(0 + rand() % 3);
}

void printTer(t x)
{
	if (x == 0)
		cout << "�������" << endl;
	else if (x == 1)
		cout << "��������" << endl;
	else if (x == 2)
		cout << "�������������" << endl;
}