#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
char bidang;
double P,p,S,s,l,a,t,L;

cout << "Pilih Bidang : ";
cin >> bidang;

	if ((bidang==P) && (bidang==p)) {
		cout << "Mengitung luas persegi panjang \n";	
		cout << "Masukkan panjangnya : \n";
		cin >> p;
		cout << "Masukkan lebarnya   : \n";
		cin >> l;
		L = p*l;
		cout << "Luas persegi panjang : "<< L<<endl;
	}
	else if ((bidang==S) && (bidang==s)) {
		cout << "Mengitung luas segitiga \n";	
		cout << "Masukkan alasnya : \n";
		cin >> a;
		cout << "Masukkan tingginya   : \n";
		cin >> t;
		L = 0.5*a*t;
		cout << "Luas persegi panjang : "<< L<<endl;
	}	
	else{
		cout<<"Maaf, Anda Salah Memilih"<<endl;
	}
}



