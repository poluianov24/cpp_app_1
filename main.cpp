#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cmath>
using namespace std;


//Написати програму, яка перетворює введене
//з клавіатури дробове число на грошовий формат.Наприклад, число 12, 5 має бути перетворено так : 12 грн 50 коп.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double enter_int;
	int hrn, kop;
	cout << "Перетворення дробового числа в грошовий формат." << endl;
	cout << "Введіть число: ";
	cin >> enter_int;
	enter_int *= 100;
	kop = static_cast<int>(enter_int);
	hrn = kop / 100;
	kop %= 100;
	cout << "Введене число складає " << hrn << " грн. " << kop << " коп." << endl;
	_getch();
	return 0;
}