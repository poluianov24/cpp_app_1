#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//Написати програму обчислення об’єму паралелепіпеда.Нижче наведено рекомендований вигляд
//екрану під час виконання програми.
//Обчислення об’єму паралелепіпеда.
//Введіть вихідні дані :
//Довжина(см) -> 9;
//Ширина(см) -> 7.5;
//Висота(см) -> 5;
//Об’єм: 337.50 куб.см.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double length, width, height, volume;

	cout << "Обчислення об’єму паралелепіпеда. \nВведіть вихідні дані : \n\tДовжина(см) -> ";
	cin >> length;
	cout << "\n\tШирина(см) -> ";
	cin >> width;
	cout << "\n\tВисота(см) -> ";
	cin >> height;
	volume = length * width * height;
	cout << "\n\tОб’єм: " << volume << " куб.см.";

	_getch();
	return 0;
}