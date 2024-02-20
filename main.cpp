#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить з клавіатури грошову
//суму в гривнях і копійках(гривні і копійки вводяться
//	в різні змінні).Сума може бути введена як правильно
//	(наприклад 19 грн 90 коп), так і неправильно(наприклад
//		22 грн 978 коп).Написати програму, яка, використовуючи
//	тільки лінійний алгоритм, здійснить коригування введеної
//	грошової суми в правильну форму.
//	Наприклад, якщо користувач ввів 11 грн 150 коп,
//	програма має вивести на екран суму 12 грн 50 коп.


int main()
{
	int hrn;
	cout << "Enter currency amount in hryvnias : ";
	cin >> hrn;
	
	int kop;
	cout << "Enter cash amount in kopecks: ";
	cin >> kop;

	int balance = hrn + kop / 100;
	kop %= 100;

	cout << "Your balance is " << balance << " hryvnias " << kop << " kopecks";
	
	_getch();
	return 0;
}