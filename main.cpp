#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;


//�������� �������� ���������� �ᒺ�� �������������.����� �������� �������������� ������
//������ �� ��� ��������� ��������.
//���������� �ᒺ�� �������������.
//������ ������ ��� :
//�������(��) -> 9;
//������(��) -> 7.5;
//������(��) -> 5;
//�ᒺ�: 337.50 ���.��.


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double length, width, height, volume;

	cout << "���������� �ᒺ�� �������������. \n������ ������ ��� : \n\t�������(��) -> ";
	cin >> length;
	cout << "\n\t������(��) -> ";
	cin >> width;
	cout << "\n\t������(��) -> ";
	cin >> height;
	volume = length * width * height;
	cout << "\n\t�ᒺ�: " << volume << " ���.��.";

	_getch();
	return 0;
}