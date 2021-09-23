#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){




	float Nilai_Praktikum, Nilai_Teori, Nilai_Tugas, Final_Project;
	cout << "  Menghitung Nilai Rata-Rata\n " << endl;

	cout << " Nilai Praktikum	: ";
	cin >> Nilai_Praktikum;
	cout << " Nilai Teori		: ";
	cin >> Nilai_Teori;
	cout << " Nilai Tugas		: ";
	cin >> Nilai_Tugas;
	cout << " Final Project		: ";
	cin >> Final_Project;
	cout << endl;

	cout << " Nilai Rata-Rata = "
	<< (Nilai_Praktikum*0.4)+(Nilai_Teori*0.4)+(Nilai_Tugas*0.1)+(Final_Project*0.1)/4.0 << endl;
	getch();



}
