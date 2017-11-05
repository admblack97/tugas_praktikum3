#include <iostream>
using namespace std;

int main () {
	int x;
	int y;
	int z;
	cout << "Input nilai x = ";
	cin  >> x;
	
	cout << "Input nilai y = ";
	cin  >> y;
	
	if (x >= y)
	{
		z = y - x;
		cout<<z<<endl;
		cout<<"Hasil Positif";
	}
	else if (y <= x) {
		z = x - y;
		cout<<z<<endl;
		cout<<"Hasil Positif";
	}
	
}
