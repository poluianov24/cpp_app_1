#include <iostream>
#include <conio.h>
#include <cmath>
#include <Windows.h>
using namespace std;


//�������� ��������, ��� �������� �ᒺ� ���.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double radius, volume;

	cout << "���������� �ᒺ� ���. \n\t������ ����� ��� (��.) -> ";
	cin >> radius;
	volume = 4 * 3.14159 * pow(radius, 3)/3;
	cout << "\n\t�ᒺ� ���: " << volume << " ���. ��.";

	_getch;
	return 0;
}