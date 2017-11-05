#include <iostream>
using namespace std;

int main () {
	int x;
	int y;
	int hasil;
	
	cout << "Input nilai x = ";
	cin  >> x;
	
	cout << "Input nilai y = ";
	cin  >> y;
	
	if (x > y)
	{
		hasil = x-y;
		cout<<hasil<<endl;
		cout<<"Hasil Positif";
	}
	else 
	{
		cout<<"negatif"<<endl;
	}
	
}
