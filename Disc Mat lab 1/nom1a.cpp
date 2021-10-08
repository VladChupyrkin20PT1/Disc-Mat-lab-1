#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int x, y, f1, f2, f3;
	cout << "x" << " " << "y" << " " <<"f3" << endl;
	for (x = 0;x <= 1;x++) {
		for (y = 0;y <= 1;y++) {
				f1 = (x || !y);
				f2 = (y ^ x);
				if (f1 > f2) {
					f3 = 0;
				};
				if ((f1 <= f2) || (f1 == f2)) {
					f3 = 1;
				};
				cout << x << " " << y << " " << f3 << endl;
			
		}
	}
}