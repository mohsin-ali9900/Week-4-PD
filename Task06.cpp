#include <iostream>
using namespace std;
main()
{
	int BagSize;
	int BagCost;
	int area;
	int per_pound;
	int per_area;
	
	cout << "Enter the size of bag in Pounds: ";
	cin >> BagSize;
	cout << "Enter Cost of one Bag: ";
	cin >> BagCost;
	cout << "Enter area covered by each bag in Square Feet: ";
	cin >> area;
		
	per_pound = BagCost/BagSize;
	cost_area = BagCost/area;
	cout << "per pound: " << cost_per_pound << endl;
	cout << "Fertilizing cost of area per square feet: " << cost_area;

}