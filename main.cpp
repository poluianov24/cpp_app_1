#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//Написати програму, яка обчислює, з якою
//швидкістю бігун пробіг дистанцію.Рекомендований вигляд екрану під час виконання програми наведено нижче :
//■ Обчислення швидкості бігу;
//■ Введіть довжину дистанції(метрів) = 1000;
//■ Введіть час(мін.сек) = 3.25;
//■ Дистанція : 1000 м;
//■ Час : 3 хв 25 сек = 205 сек;
//■ Ви бігли зі швидкістю 17.56 км / год.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double speed, seconds, distance, time, seconds_all, minutes;

	cout << "Обчислення швидкості бігу. \nВведіть довжину дистанції (метрів) = ";
	cin >> distance;
	cout << "\nВведіть час (хв.сек) = ";
	cin >> time;
	distance /= 1000;
	minutes = static_cast<int>(time);
	seconds = (time - minutes) * 100;
	seconds_all = minutes * 60 + seconds;

	speed = distance / (seconds_all / 3600);
	distance *= 1000;
	cout << "\nДистанція: " << distance << " м;\nЧас: " << minutes << " хв. " << seconds << " сек. = " << seconds_all << " сек;\nВи бігли зі швидкістю " << speed << " км / год.";


	_getch();
	return 0;
}