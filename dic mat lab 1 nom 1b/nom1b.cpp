#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int x, y, z, f1, f2, f3, f4;
	cout << "x" << " " << "y" << " " << "z" << " " << "f4" << endl;
	for (x = 0;x <= 1;x++) {
		for (y = 0;y <= 1;y++) {
			for (z = 0;z <= 1;z++) {
				if (x == !y) {
					f1 = 1;
				}
				else {
					f1 = 0;
				};
				f2 = !(f1 && !z);
				f3 = !(x && y);
				f4 = !f2 && !f3;
				cout << x << " " << y << " " << z << " " << f4 << endl;
			}
		}
	}
}