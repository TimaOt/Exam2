#include <iostream>
#include <time.h>
#include "Header.h"
using namespace std;

void generation(room* num)//нумирация квартир 
{
	for (int i = 0;i < 10;i++)
	{
		num->numb = rand() % 11;
	}
	cout << "Номер квартира:" << num << endl;
}

void generationKol(room* rooms)//кол-во комнат 
{
	for (int i = 0;i < 10;i++)
	{
		rooms->rooms = 1 + rand() % 3;
	}
	cout << "Кол-во комнат в квартире:" << rooms << endl;
}

void generationS(room* s)//площадь
{
	for (int i = 0;i < 10;i++)
	{
		s->s = 50 + rand() % 120;
	}
	cout << "Общая площадь:" << s << endl;
}



t Ter()
{
	return (t)(0 + rand() % 3);
}

void printTer(t x)
{
	if (x == 0)
		cout << "продана" << endl;
	else if (x == 1)
		cout << "свободна" << endl;
	else if (x == 2)
		cout << "забронирована" << endl;
}