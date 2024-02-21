#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;


//Напишіть програму, яка обчислює об’єм кулі.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double radius, volume;

	cout << "Обчислення об’єм кулі. \n\tВведіть радіус кулі (см.) -> ";
	cin >> radius;
	volume = 4 * 3.14159 * pow(radius, 3)/3;
	cout << "\n\tОб’єм кулі: " << volume << " куб. см.";

	_getch;
	return 0;
}