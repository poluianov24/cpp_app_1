#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//Користувач вводить з клавіатури час у секундах.Необхідно написати програму, яка переведе введені
//користувачем секунди в години, хвилини, секунди і виводить їх на екран.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int h, m, s;
	cout << "Введіть час (сек.): ";
	cin >> s;
	m = s / 60;
	h = m / 60;
	m %= 60;
	s %= 60;
	cout << "\nВведений час складає: " << h << " год. " << m << " хв. " << s << " сек." << endl;

	_getch();
	return 0;
}