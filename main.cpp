#include <iostream>
#include <conio.h>
using namespace std;


//Користувач вводить номер року.Необхідно
//написати програму, яка виведе кількість днів у цьому
//році.При написанні програми використовувати лінійний
//алгоритм(конструкції умовного вибору не використовувати).Наприклад, користувач ввів рік 2004, програма
//повідомляє, що в цьому році 366 днів у такій формі :
//In 2004 year = 366 days


int main()
{
    int year;
    cout << "Enter the year number: ";
    cin >> year;
    int days = 365 + (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0));
    cout << "In " << year << " year = " << days << " days" << endl;
	_getch();
	return 0;
}