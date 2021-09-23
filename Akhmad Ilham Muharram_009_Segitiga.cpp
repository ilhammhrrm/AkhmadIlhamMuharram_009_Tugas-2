#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    float alas,tinggi,sisimiring,keliling;
    cout << "alas segitiga = ";
    cin >> alas;
    cout << "tinggi segitiga = ";
    cin >> tinggi;
    sisimiring=sqrt(alas*alas+tinggi*tinggi);
    keliling=alas+tinggi+sisimiring;
    cout << "sisimiring = " <<sisimiring;
    cout << "\nkeliling segitiga=" <<keliling;
    getch();

}
