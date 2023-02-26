#include<iostream>

using std::cin;
using std::cout;

int main(){
	int arg;
	cout<<"input a 5 digit integer: ";
	cin >> arg;
	
	for (int i = 10000; i > 0; i /= 10){
		cout<< arg / i << " ";
		arg -= (arg/i) * i;
	}
	
	
}
