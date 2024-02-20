#include <iostream>
#include <conio.h>
using namespace std;


//Створити додаток, який виводить на екран таку таблицю :
//╔════════════════════════════════════════════╗
//║ Pory Roku								   ║
//╠═════════╦═══════════╦═══════════╦══════════╣
//║ Zyma	║ Vesna		║ Lito		║ Osin	   ║
//╚═════════╩═══════════╩═══════════╩══════════╝
//Підказка : Підказка:
//Рекомендуємо виконати наступний код :
//cout << "\n" << (char)201 << (char)205 <<
//(char)205 << (char)187;
//Необхідні символи розташовані в діапазоні від 179
//до 218.


int main() 
{
	for (int i = 0; i < 44; i++)
	{
		if (i == 0)
		{
			cout << char(201);
		}
		else
		{
			cout << char(205);
		}
		
	}
	cout << char(187) << "\n" << char(186) << "\t\tPory Roku\t\t    " << char(186) << "\n";
	for (int i = 0; i < 45; i++) 
	{
		if (i == 0)
		{
			cout << char(204);
		}
		else if (i == 10 or i == 22 or i == 34)
		{
			cout << char(203);
		}
		else if (i == 44)
		{
			cout << char(185);
		}
		else
		{
			cout << char(205);
		}
	}
	cout << "\n" << char(186) << " Zyma    " << char(186) << " Vesna     " << char(186) << " Lito      " << char(186) << " Osin    " << char(186)<< "\n";
	for (int i = 0; i < 45; i++)
	{
		if (i == 0)
		{
			cout << char(200);
		}
		else if (i == 10 or i == 22 or i == 34)
		{
			cout << char(202);
		}
		else if (i == 44)
		{
			cout << char(188);
		}
		else
		{
			cout << char(205);
		}
	}
	_getch();
	return 0;
}

