#include <iostream>
using namespace std;
main(){

float sub1;
float sub2;
float sub3;
float sub4;
float sub5;
float sum;
float percent;
	
cout << "Enter subject 01 marks: ";
cin >> sub1;
cout << "Enter subject 02 marks: ";
cin >> sub2;
cout << "Enter subject 03 marks: ";
cin >> sub3;
cout << "Enter subject 04 marks: ";
cin >> sub4;
cout << "Enter subject 05 marks: ";
cin >> sub5;

sum = sub1+sub2+sub3+sub4+sub5;
percent = sum/500 * 100;
cout << "total percentage: " << percent;
}