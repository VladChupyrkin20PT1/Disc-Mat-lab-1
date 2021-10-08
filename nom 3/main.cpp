#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
int main()
{
	int x, y, z, f1, f2, f3, i, k, l, P;
	int a[8], b[8][3], c[7], d[6], e[5], f[4], g[3], h[2];
	i = 0;
	setlocale(LC_ALL, "Russian");
		for (x = 0;x <= 1;x++) { //Значения функции 
			for (y = 0;y <= 1;y++) {
				for (z = 0;z <= 1;z++) {
					f1 = (x | !y);
					if (z == !x) {
						f2 = 1;
					}
					else {
						f2 = 0;
					};
					if (f1 > f2) {
						f3 = 0;
					}
					else {
						f3 = 1;
					};
					f3 = !f3;
					a[i] = f3;
					i++;
				}
			}
		}
		for (int i = 0; i < 8; i++) { //Таблица истинности
			for (int k = 0; k < 3; k++) {
				b[i][k] = (i >> (3 - k - 1)) & 1;
			}
		}
		for (i = 0;i < 7;i++) {  //Треугольник Паскаля
			c[i] = a[i] ^ a[i + 1];
		}
		for (i = 0;i < 6;i++) {
			d[i] = c[i] ^ c[i + 1];
		}
		for (i = 0;i < 5;i++) {
			e[i] = d[i] ^ d[i + 1];
		}
		for (i = 0;i < 4;i++) {
			f[i] = e[i] ^ e[i + 1];
		}
		for (i = 0;i < 3;i++) {
			g[i] = f[i] ^ f[i + 1];
		}
		for (i = 0;i < 2;i++) {
			h[i] = g[i] ^ g[i + 1];
		}
		l = h[0] ^ h[1];
		cout << "Полином Жегалкина:"<<" ";
		if (a[0] == 1) {	//Полином Жегалкина
			P = 1;
			cout << P << " " << "XOR" << " ";
		}
		if (c[0] == 1) { 
			cout << "z" << " " << "XOR" << " ";
		}
		if (d[0] == 1) {
			cout << "y" << " " << "XOR" << " ";
		}
		if (e[0] == 1) {
			cout << "yz" << " " << "XOR" << " ";
		}
		if (f[0] == 1) {
			cout <<"x" << " " << "XOR" << " ";
		}
		if (g[0] == 1) {
			cout << "xz" << " " << "XOR" << " ";
		}
		if (h[0] == 1) {
			
			cout << "xy" << " " << "XOR" << " ";
		}
		if (l == 1) {
			cout << "xyz" << endl;
		}
		cout << "СДНФ:"<<" ";
		if (a[0] == 1) {	//СДНФ
			cout <<"!x!y!z"<<"||";
		}
		if (a[1] == 1) {
			cout << "!x!yz"<<"||";
		}
		if (a[2] == 1) {
			cout << "!xy!z"<<"||";
		}
		if (a[3] == 1) {
			cout << "!xyz"<<"||";
		}
		if (a[4] == 1) {
			
			cout << "x!y!z"<<"||";
		}
		if (a[5] == 1) {
			cout << "x!yz"<<"||";
		}
		if (a[6] == 1) {
			
			cout << "xy!z"<<"||";
		}
		if (a[7] == 1) {
			
			cout << "xyz" << endl;
		}
		cout << "СКНФ:" << " ";
		if (a[0] == 0) {	//СКНФ
			cout <<"(x||y||z)"<<"*";
		}
		if (a[1] == 0) {
			cout << "(x||y||!z)"<<"*";
		}
		if (a[2] == 0) {
			cout << "(x||!y||z)"<<"*";
		}
		if (a[3] == 0) {
			cout << "(x||!y||!z)"<<"*";
		}
		if (a[4] == 0) {
			
			cout << "(!x||y||z)"<<"*";
		}
		if (a[5] == 0) {
			cout << "(!x||y||!z)"<<"*";
		}
		if (a[6] == 0) {
			
			cout << "(!x||!y||z)"<<"*";
		}
		if (a[7] == 0) {
			
			cout << "(!x||!y||!z)" << endl;
		}
}

		