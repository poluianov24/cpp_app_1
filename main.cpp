#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cmath>
using namespace std;


//За заданою довжиною окружності знайти
//площу кола за формулою S = pi * R2, радіус обчислити
//з формули довжини кола : L = 2 * pi * R.
//Примітка : pi = 3.14


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double lenght, area, radius;

	cout << "To calculate the area of a circle, enter: \n\tCircle length (cm.) -> ";
	cin >> lenght;
	radius = lenght / (2 * 3.14);
	area = 3.14 * pow(radius, 2);
	cout << "\n\tThe area of the circle is " << area <<" cub.cm.";

	_getch();
	return 0;
}