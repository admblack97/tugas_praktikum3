#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
char bidang;
double p,l,a,t,L;

cout << "Pilih Bidang : ";
cin >> bidang;

	if (bidang == 'P' || bidang == 'p') {
		cout << "+================================+ \n";	
		cout << "   Mengitung luas persegi panjang \n";
		cout << "+================================+ \n";	
		cout << "   Masukkan panjangnya : ";
		cin >> p;
		cout << "   Masukkan lebarnya   : ";
		cin >> l;
		L = p*l;
		cout << "+================================+ \n";
		cout << "   Luas persegi panjang : "<< L<<endl;
		cout << "+================================+ \n";
	}
	else if (bidang == 'S' || bidang == 's') {
		cout << "+================================+ \n";
		cout << "   Mengitung luas segitiga \n";
		cout << "+================================+ \n";	
		cout << "   Masukkan alasnya   : ";
		cin >> a;
		cout << "   Masukkan tingginya : ";
		cin >> t;
		L = 0.5*a*t;
		cout << "+================================+ \n";
		cout << "   Luas persegi panjang : "<< L<<endl;
		cout << "+================================+ \n";
	}	
	else{
		cout<<"Maaf, Anda Salah Memilih"<<endl;
	}
}



