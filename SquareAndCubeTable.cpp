#include <iostream>

using std::cout;

int main(){
	cout<<"integer	square	cube";
	for (int i = 0; i < 11; i++){
		cout << "\n" << i << "	" << i * i << "	" << i * i * i;
	}
}
