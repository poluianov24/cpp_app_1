#include <iostream>
#include <conio.h>
using namespace std;


//���������� ������� � ��������� �������
//���� � ������� � �������(����� � ������ ���������
//	� ��� ����).���� ���� ���� ������� �� ���������
//	(��������� 19 ��� 90 ���), ��� � �����������(���������
//		22 ��� 978 ���).�������� ��������, ���, ��������������
//	����� ������ ��������, �������� ����������� �������
//	������� ���� � ��������� �����.
//	���������, ���� ���������� ��� 11 ��� 150 ���,
//	�������� �� ������� �� ����� ���� 12 ��� 50 ���.


int main()
{
	int hrn;
	cout << "Enter currency amount in hryvnias : ";
	cin >> hrn;
	
	int kop;
	cout << "Enter cash amount in kopecks: ";
	cin >> kop;

	int balance = hrn + kop / 100;
	kop %= 100;

	cout << "Your balance is " << balance << " hryvnias " << kop << " kopecks";
	
	_getch();
	return 0;
}