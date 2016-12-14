#include <iostream>
using namespace std;
//Declaration of Date class
class Date {
public:
	Date(int, int, int);
	void set(int, int, int);
	void print();
private:
	int year;
	int month;
	int day;
};
int main(){
	//Declate today to be object of class Date
	//Values are automatically initialized by calling contructor function
	Date today(12, 7, 2016);
	cout<<"This program was written on ";
	today.print();
	cout<<"This program was modified on ";
	today.set(12, 11, 2016);
	today.print();
	return 0;
}

//Date contructor function definition
Date::Date(int m, int d, int y){
	if(d>0 && d<=32) day = d;
	if(m>0 && m<13) month = m;
	if(y>0) year = y;	
}
//Date member function definitions
void Date::set(int m, int d, int y){
	if(d>0 && d<=31) day = d;
	if(m>0 && m<13) month = m;
	if(y>0) year = y;
}
void Date::print(){
	cout<<month<<"/"<<day<<"/"<<year<<endl;
}