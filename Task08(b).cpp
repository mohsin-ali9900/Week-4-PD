#include <iostream>
using namespace std;
main(){

int num;
int one;
int two;
int three;
int four;
int result;
cout << "Enter a 4-digit number: ";
cin >> num;
one = num % 10;
two = num / 10 % 10;
three = num / 100 % 10;
four = num / 1000 % 10;
result = one+two+three+four;
cout << "Result: " << result;
	
}