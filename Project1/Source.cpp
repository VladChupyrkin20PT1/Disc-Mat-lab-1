#include <iostream>
//#include <conio.h>
#include <stdlib.h> 
using namespace std;
int FuncVolume(int& f)
{
    do {
        cout << "Vvedite znachenit funkcii na dannom nabore :" << endl;
        cin >> f;
        if ((f != 0) && (f != 1))
            cout << "Error!!!Funkciya mojet prinimat' znachenie libo 0 libo 1!\n";
    } while ((f != 0) && (f != 1));
    return f;
}




void main()
{
    system("cls");
    const int N = 8;
    int m[5];
    int f[N], a[N];
    for (int i = 0; i < N; i++)
    {
        FuncVolume(f[i]);
    }
    a[0] = f[0];
    a[3] = f[0] ^ f[1];
    a[2] = f[0] ^ f[2];
    a[1] = f[0] ^ f[4];
    m[0] = f[1] ^ a[2] ^ a[3];
    a[5] = m[0] ^ f[3];
    m[1] = f[1] ^ a[1] ^ a[3];
    a[6] = m[1] ^ f[5];
    m[2] = f[1] ^ a[1] ^ a[2];
    a[4] = m[2] ^ f[6];
    m[3] = a[3] ^ a[4] ^ a[5];
    m[4] = m[2] ^ m[3] ^ a[6];
    a[7] = m[4] ^ f[7];




    cout << "\n\nTablica istinnosti dlya dannoy funkcii : \n\n";
    cout << "x_1 x_2 x3  f\n\n";
    cout << " 0   0   0   " << f[0]
        << "\n 0     0   1   " << f[1]
        << "\n 0     1   0   " << f[2]
        << "\n 0     1   1   " << f[3]
        << "\n 1     0   0   " << f[4]
        << "\n 1     0   1   " << f[5]
        << "\n 1     1   0   " << f[6]
        << "\n 1     1   1   " << f[7] << "\n\n";
    cout << "\n\nZnachenie koefficientov v polimome Jigalkina : \n\n";

    for (int i = 0; i < N;i++)
    {
        cout << "a" << i << " " << a[i] << "\n";
    }
    cout << "Polinom Jigalkina dlya dannoy funkcii imeet vid : \n f = " << a[0]
        << "^(" << a[1] << "x_1)^(" << a[2] << "x_2)^(" << a[3] << "x_3)^(" << a[4] << "x_1x_2)^\n^(" << a[5] << "x_2x_3)^(" << a[6] << "x_1x_3)^("
        << a[7] << "x_1x_2x_3)";

}