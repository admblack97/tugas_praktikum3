#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main () {
	int gp,jk,lembur,gt,gb,pajak;
	
	cout << "Masukkan gaji pegawai : ";
	cin >> gp;
	cout << "Masukkan jam kerja    : ";
	cin >> jk;
	
	if(jk>40){
		lembur= (jk - 40)*(gp/40);
		gt = (lembur*1.5)+gp;
		pajak=gt*0.15;
		gb=gt-pajak;
	}
	else {
		pajak=gp*0.15;
		gb=gp-pajak;
	}
	
	cout<<"Gaji bersih pegawai : "<< gb<<endl;
	
}
