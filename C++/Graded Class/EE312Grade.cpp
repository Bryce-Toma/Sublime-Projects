/*
* Fill in the main function, int main {}, to create an instnace
* of an EE312 grade for yourself with room for 1 exam score and 
* and 2 assignment scores. Fill in the grades with arbitrary values
*/

#include <iostream>
#include <string>

using namespace std;
class CourseGrade {
protected:
	string studentName;
	double overallGrade;
public:
	CourseGrade(string name) {
		cout << "Constructing Course Grade" << endl;
		studentName = name;
	}
	string getName() { return studentName; }
	double getGrade() { return overallGrade; }
};