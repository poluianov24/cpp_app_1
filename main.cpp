#include <iostream>
#include <conio.h>
using namespace std;


//���������� ������� ����� ����.���������
//�������� ��������, ��� ������ ������� ��� � �����
//����.��� �������� �������� ��������������� ������
//��������(����������� �������� ������ �� ���������������).���������, ���������� ��� �� 2004, ��������
//���������, �� � ����� ���� 366 ��� � ���� ���� :
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