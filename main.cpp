#include <iostream>
#include <conio.h>
using namespace std;


//Задані три опори R1, R2, R3.Обчислити
//значення опору R0 за формулою : 1 / R0 = 1 / R1 + 1 / R2 + 1 / R3.
//Контрольний приклад : R1 = 2, R2 = 4, R3 = 8 R0 = 1.142857.


int main()
{
	double r_0, r_1, r_2, r_3;

	cout << "To determine resistance #0 enter: \n\tResistance #1: ";
	cin >> r_1;
	cout << "\n\tResistance #2: ";
	cin >> r_2;
	cout << "\n\tResistance #3: ";
	cin >> r_3;
	r_0 = 1 / (1 / r_1 + 1 / r_2 + 1 / r_3);
	cout << "\n\tResistance value R0: " << r_0;

	_getch();
	return 0;
}