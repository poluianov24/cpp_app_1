#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cmath>
using namespace std;


//Обчислити пройдену відстань при прямолінійному рівноприскореному русі за формулою 
// S = v * t + (a * t2) / 2, де v — швидкість, t — час, а — прискорення.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double v, t, a, s;

	cout << "Для обчислення пройденої відстані введіть: \n\tШвидкість (км.год.): ";
	cin >> v;
	cout << "\n\tЧас (год.): ";
	cin >> t;
	cout << "\n\tПрискорення (км.год.): ";
	cin >> a;
	s = v * t + (a * pow(t, 2)) / 2;
	cout << "Пройдена відстань скдадає " << S << endl;

	_getch();
	return 0;
}