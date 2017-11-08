#include <iostream>
using namespace std;

int main () {
	int i=0;
	int j=0;
	int k=0;
	
	cin >> i ;
	
	while (j<i) {
		k=0;
		while(k<j){
		cout << "*";
		k++;
		}
		if(j!=0) {
		cout << "\n";}
		j++;
	}
}
