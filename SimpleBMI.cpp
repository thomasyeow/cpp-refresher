#include <iostream>

using std::cin;
using std::cout;

int main(){
	float weight, height;
	cout<<"Simple BMI Calculator\nInput weight in kg: ";
	cin >>weight;
	cout<<"Input height in meters: ";
	cin >> height;
	
	cout<<"BMI VALUES\nUnderweight:	lessthan 18.5\nNormal:	between 18.5 and 24.9\nOverweight:	between 25 and 29.9\nObese:	30 or greater";
	cout<<"\n\nYour BMI: " << weight/(height*height);
}
