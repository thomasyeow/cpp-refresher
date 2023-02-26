#include <iostream>

using std::cout;

int main(){
	//Rectangle
	for (int i = 0; i < 9; i++){
		if(i == 0 || i == 8){
			for(int i = 0; i < 9; i++){
				cout<<"*";
			}
			cout<<"\n";
		}
		else{
			cout<<"*       *\n";	
		}
	}
	//Oval
	for (int i = 0; i < 9; i++){
		if(i == 0 || i == 8){
			cout<<"   ***   \n";
		}
		else if(i == 1 || i == 7){
			cout<<" *     *\n";		
		}
		else{
			cout<<"*       *\n";
		}
	}
	//Up Arrow
	for (int i = 0; i < 9; i++){
		switch(i){
			case 1:
				cout<<" ***\n";
				break;
			case 2:
				cout<<"*****\n";
				break;
			default:
				cout<<"  *\n";
		}
	}
	//Diamond
	cout<<"    *"<<
		"\n   * *"<<
		"\n  *   *"<<
		"\n *     *"<<
		"\n*       *"<<
		"\n *     *"<<
		"\n  *   *"<<
		"\n   * *"<<
		"\n    *";
}
