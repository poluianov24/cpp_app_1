#include <iostream>
#include <Windows.h>
#include <conio.h>


//—творити додаток, €кий виводить на консоль
//фразу :
//ЂKraj lukomorТa dub zelenyj,
//I zolotyj lancyuh na nim :
//Shodnya, shonochi kit uchenyj
//Na lancyuhu kruzhlТaje timФ
//—упроводити кожен новий р€док потр≥йним звуковим
//сигналом


int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::cout << "ЂKraj lukomorТa dub zelenyj, \n\a\a\aI zolotyj lancyuh na nim : \n\a\a\aShodnya, shonochi kit uchenyj \n\a\a\aNa lancyuhu kruzhlТaje timФ" << std::endl;
	_getch();
	return 0;
}