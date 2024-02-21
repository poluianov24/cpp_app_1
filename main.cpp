#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//Написати програму, яка перетворює введену
//користувачем кількість днів на кількість повних тижнів
//і днів, що залишилися.Наприклад, користувач ввів 17 днів,
//програма має вивести на екран 2 тижні і 3 дні.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int day, week;

	cout << "Калькулятьр тижднів. \n\tВведіть кількість днів: ";
	cin >> day;
	week = day / 7;
	day %= 7;
	cout << "Введена кількість днів складається з " << week << " тижднів та " << day << " днів." << endl;


	_getch();
	return 0;
}