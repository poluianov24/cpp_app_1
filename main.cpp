#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//�������� ��������, ��� ���������� �������
//������������ ������� ��� �� ������� ������ �����
//� ���, �� ����������.���������, ���������� ��� 17 ���,
//�������� �� ������� �� ����� 2 ���� � 3 ��.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int day, week;

	cout << "����������� ������. \n\t������ ������� ���: ";
	cin >> day;
	week = day / 7;
	day %= 7;
	cout << "������� ������� ��� ���������� � " << week << " ������ �� " << day << " ���." << endl;


	_getch();
	return 0;
}