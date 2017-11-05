#include <iostream>
using namespace std;

int main () {
	float berat, kurus_karing, normal, lamak_banar;
	int tinggi;
	
	cout << "Masukkan tinggi badan dalam cm : ";
	cin >> tinggi;
	
	cout << "Masukkan berat badan dalam kg : ";
	cin >> berat;	
	
	if (berat<tinggi/2.5) {
		cout << "Hasil : Kelamakan" << endl;
	}
	else if  (tinggi/2.5 <= berat <= tinggi/2.3) {
		cout <<  "Hasil : Kurus Banar" << endl; 
	}
	
	
	
		
	
}

