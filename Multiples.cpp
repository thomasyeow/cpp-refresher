#include <iostream>

using std::cout;
using std::cin;

int main(){
	int A, B;
	cout<<"Is A a multple of B?\nInput A: ";
	cin>>A;
	cout<<"\nInput B: ";
	cin>>B;
	if(A%B == 0){
		cout<<"A is a multiple of B";
	}
	else{
		cout<<"A isn't a multiple of B";
	}
}
