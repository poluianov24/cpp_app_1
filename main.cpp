#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//���������� ������� � ��������� ��� � ��������.��������� �������� ��������, ��� �������� ������
//������������ ������� � ������, �������, ������� � �������� �� �� �����.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int h, m, s;
	cout << "������ ��� (���.): ";
	cin >> s;
	m = s / 60;
	h = m / 60;
	m %= 60;
	s %= 60;
	cout << "\n�������� ��� ������: " << h << " ���. " << m << " ��. " << s << " ���." << endl;

	_getch();
	return 0;
}