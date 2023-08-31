#include<iostream>
using namespace std;

float rfact(float x){
	if (x < 2) return 1;
	else return (x*rfact(x-1));
}

int main(){
	int input = 0;
	int result = 0;
	cout << "Please enter the factorial you want to calculate: " ;
	cin >> input; cout << endl;
	result = rfact(input);
	cout << "The factorial for " << input << " is " << result << endl;
}