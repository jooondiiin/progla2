#include<iostream>
using namespace std;

int get_sum(int num1, int num2){
	return num1+num2;
}
int get_diff(int num1, int num2){
	return num1-num2;
}
int get_prod(int num1, int num2){
	return num1*num2;
}
int get_quo(int num1, int num2){
	return num1/num2;
}

int main()
{
	int num1;
	int num2;
	
	cout << "Enter num 1: ";
	cin >> num1;
	cout << "Enter num 2: ";
	cin >> num2;
	

	cout << "Sum is: " << get_sum(num1, num2) << endl;
	cout << "Difference is: " << get_diff(num1, num2) << endl;
	cout << "Product is: " << get_prod(num1, num2) << endl;
	cout << "Quotient is: " << get_quo(num1, num2) << endl;
	
	return 0;
}
