#include <iostream>

using std::cin;
using std::cout;

int main(){
	int arg;
	cin>>arg;
	if(arg % 2 == 0){
		cout<<"Argument is even";
	}
	else{
		cout<<"Argument is odd";
	}
}
