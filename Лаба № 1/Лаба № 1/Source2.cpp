#include <string>
#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	string n;
	int k;
	cout << "Введите n: ";
	cin >> n;
	cout << "Введите k: ";
	cin >> k;
	cout << " Число разрядов?\n ";
	cin >> k;
	cout << n.substr(0, k);
	_getch();
	return 0;
}