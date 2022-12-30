#include <iostream>
using namespace std;
main(){

string name;
int adult_ticker_price;
int children_ticket_price;
int adult_ticket_sold;
int children_ticket_sold;
int total;
float percent;
float donation;
cout << "Enter movie name: ";
cin >> name;
cout << "Enter adult ticket price: ";
cin >> adult_ticker_price;
cout << "Enter children ticket price: ";
cin >> children_ticket_price;
cout << "Enter number of adult ticket sold: ";
cin >> adult_ticket_sold;
cout << "Enter number of children ticket sold: ";
cin >> children_ticket_sold;
cout << "Enter percentage to donate: ";
cin >> percent;
total = (adult_ticker_price*adult_ticket_sold) + (children_ticket_price*children_ticket_sold);
donation = total - total * percent/100 ;
cout << "Total generated=> " << total << endl;
cout << "Amount after donation=> " << donation;

}