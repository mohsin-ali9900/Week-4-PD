#include <iostream>
using namespace std;
main()
{
	int first,second,third,fourth,fifth,sixth,seventh,eigth,ninth,tenth;
	int eleventh,twelveth,thirteenth,fourteenth,fifteenth;
	int total1,total2,total3;
	int final;
		
	cout << "Enter the first number=> ";
	cin >> first;
	cout << "Enter the second number=> ";
	cin >> second;
	cout << "Enter the third number=> ";
	cin >> third;
	cout << "Enter the fourth number=> ";
	cin >> fourth;
	cout << "Enter the fifth number=> ";
	cin >> fifth;
	cout << "Enter the sixth number=> ";
	cin >> sixth;
	cout << "Enter the seventh number=> ";
	cin >> seventh;
	cout << "Enter the eigth number=> ";
	cin >> eigth;
	cout << "Enter the ninth number=> ";
	cin >> ninth;
	cout << "Enter the tenth number=> ";
	cin >> tenth;
	cout << "Enter the eleventh number=> ";
	cin >> eleventh;
	cout << "Enter the twelveth number=> ";
	cin >> twelveth;
	cout << "Enter the thirteenth number=> ";
	cin >> thirteenth;
	cout << "Enter the fourteenth number=> ";
	cin >> fourteenth;
	cout << "Enter the fifteenth number=> ";
	cin >> fifteenth;
		
	total1 = first + second + third + fourth + fifth;
	total2 = sixth * seventh * eigth * ninth * tenth;	
	total3 = eleventh - twelveth - thirteenth - fourteenth - fifteenth;
			
	final = (total1 + total2) - total3;
	cout << "total=> " << final;
}