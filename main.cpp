#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cmath>
using namespace std;


//��������� �������� ������� ��� ������������ ���������������� ��� �� �������� 
// S = v * t + (a * t2) / 2, �� v � ��������, t � ���, � � �����������.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double v, t, a, s;

	cout << "��� ���������� �������� ������ ������: \n\t�������� (��.���.): ";
	cin >> v;
	cout << "\n\t��� (���.): ";
	cin >> t;
	cout << "\n\t����������� (��.���.): ";
	cin >> a;
	s = v * t + (a * pow(t, 2)) / 2;
	cout << "�������� ������� ������ " << S << endl;

	_getch();
	return 0;
}