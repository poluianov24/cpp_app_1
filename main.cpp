#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <cmath>
using namespace std;


//�������� ��������, ��� ���������� �������
//� ��������� ������� ����� �� �������� ������.���������, ����� 12, 5 �� ���� ����������� ��� : 12 ��� 50 ���.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double enter_int;
	int hrn, kop;
	cout << "������������ ��������� ����� � �������� ������." << endl;
	cout << "������ �����: ";
	cin >> enter_int;
	enter_int *= 100;
	kop = static_cast<int>(enter_int);
	hrn = kop / 100;
	kop %= 100;
	cout << "������� ����� ������ " << hrn << " ���. " << kop << " ���." << endl;
	_getch();
	return 0;
}