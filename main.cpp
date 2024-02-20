#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

//Створити додаток, який виводить інформацію про книгу, у такому форматі :
//Name: “The war and the peace”
//Avtor : L.N.Tolstoj
//Izdatelstvo : Piter
//Pages : 500.

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Name\t   : “The war and the peace”" << endl;
	cout << "Avtor\t   : L.N.Tolstoj" << endl;
	cout << "Izdatelstvo: Piter" << endl;
	cout << "Pages\t   : 500." << endl;
	_getch();
	return 0;
}