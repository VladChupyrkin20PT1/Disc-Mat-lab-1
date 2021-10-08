#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main()
{
	int x, y, z, f1, f2, i, f3, f4, f5, j;
	int a[8], b[8];
	i = 0;
	j = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Если элементы функций равны, то эти функции эквивалентны. Иначе не эквивалентны." << endl;
	cout << "f2" <<" "<<"f5" << endl;
	for (x = 0;x <= 1;x++) {
		for (y = 0;y <= 1;y++) {
			for (z = 0;z <= 1;z++) {
					if ((y <= z) || (y == z)) {
						f1 = 1;
					} else {
						f1 = 0;
					};
					f2 = x & f1;
					f3 = x & y;
					f4 = x & z;
					if ((f3 <= f4) || (f3 == f4)) {
						f5 = 1;
					}
					else {
						f5 = 0;
					};
					cout << f2 << "  " << f5 << endl;
			}
		}
	}
}
