#include <iostream>
#include <climits>
using std::cout;
using std::cin;

int main(){
	int argCount = 5;
	
	int arrangedArgs[argCount];
	for(int i = 0; i < argCount; i++){
		cin>>arrangedArgs[i];
	}
	int maximum = arrangedArgs[0];
	int minimum = arrangedArgs[1];
	
	for(int element : arrangedArgs){
		if (element < minimum){
			minimum = element;
		}
		if(element > maximum){
			maximum = element;
		}
	}
	cout<<"Max: "<<maximum<<"\nMin:"<<minimum;
	

}

