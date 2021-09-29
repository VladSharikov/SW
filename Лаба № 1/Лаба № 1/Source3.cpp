#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c, d, f;
	cout << "¬ведите длину(a): ";
	cin >> a;
	cout << "¬ведите ширину(b):  ";
	cin >> b;
	cout << "¬ведите высоту(c): ";
	cin >> c;
	cout << "¬ведите длинну отверсти€(d): ";
	cin >> d;
	cout << "¬ведите высоту отверсти€(f): ";
	cin >> f;
	switch ((b <= d) && (c <= f) ? 1 : (a <= d) && (c <= f) ? 2 : (a <= d) && (b <= f) ? 3 : -1)
	{
	case 1: {cout << "ѕараллелепипед прошЄл через отверстие по высоте и ширине" << endl; break; }
	case 2: {cout << "ѕараллелепипед прошЄл через отверстие по высоте и длинне" << endl; break; }
	case 3: {cout << "ѕараллелепипед прошЄл через отверстие по длинне и ширине" << endl; break; }
	default: cout << "ѕараллелепипед не прошЄл через отверстие" << endl;
	}
	return 0;
}