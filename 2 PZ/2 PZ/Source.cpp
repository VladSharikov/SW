#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "russian");
	int x;
	cout << "������� ����������� ����� ";
	cin >> x;
	if (x % 2 == 0)
	{
		cout << "������ �����";
	}
	else
	{
		cout << "�������� �����";
	}
	return 0;
}