#include <iostream>
using namespace std;

int main () {
	float berat;
	int tinggi;
	
	cout << "Masukkan tinggi badan dalam cm : ";
	cin >> tinggi;
	
	cout << "Masukkan berat badan dalam kg : ";
	cin >> berat;	
	
	if (berat<tinggi/2.5) {
		cout << "Hasil : Kurus banar sanak ai lamaki lg" << endl;
	}
	else if  (tinggi/2.5 <= berat && berat <= tinggi/2.3) {
		cout <<  "Hasil : Ideal haja, sadang dah awak pian" << endl;
	}
	
	else if (tinggi/2.3 < berat)
		cout << "Hasil : Kelamakan pulang sanak ai, bekurus gin lg" << endl;
	
}

