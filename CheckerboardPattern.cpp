#include <iostream>

using std::cout;

int main(){
	for (int row = 0; row < 8 ; row ++){
		for (int column = 0; column < 16; column ++){
			if((row + column)%2==0){
				cout<<"*";
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}
