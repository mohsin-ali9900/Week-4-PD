#include <iostream>
using namespace std;
main(){

float initial_v;
float final_v;
float acceleration;
float time;
	
cout << "Enter Initial Velocity=> ";
cin >> initial_v;
cout << "Enter Acceleration=> ";
cin >> acceleration;
cout << "Enter Time taken=> ";
cin >> time;
		
final_v = acceleration * time + initial_v;
cout << "Final Velocity=> " << final_v; 

}