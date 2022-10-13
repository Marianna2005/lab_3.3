// Lab_03_3.cpp
// Дашавська Марія-Анна
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -2 * R)
		y = -3;
	else
		if (-2 * R < x && x <= -R)
			y = 3 * (R + x) / 5 - R;
		else
			if (-R < x && x <= R)
				y = R-x ;
			else
				if (R < x && x <= -2,5*R)
					y = R*(x-R)/8-R;
				else
					y = R ;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}