/*
 * Project /{1}:

{Rectangle }

Description:

This program should allow the phrase, Hello World, to run and show on the small window

Date:

1/20/23

Class:

CS117

Author:

Logan Schulze

Notes/Assumption:
This program should display three different rectangles with their specifications
 given, after this, a square should be created
 */
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

long double lengthOne = 0, widthOne = 0;
long double lengthTwo = 0, widthTwo = 0;
long double lengthThree = 0, widthThree = 0;

double ansOne = 0;
double ansAreaOne = 0;
cout<< "Enter the length of the 1st rectangle:"
;
cin >> lengthOne;

cout<< "Enter the width of the 1st rectangle:";

cin >> widthOne;

ansOne      = lengthOne + widthOne + lengthOne+ widthOne;
ansAreaOne  = lengthOne * widthOne;

cout << "You created the 1st rectangle with the following characteristics:" << endl << endl;
cout << "width      = " << widthOne<< endl;
cout << "length     = " << lengthOne << endl;
cout << "perimeter  = " << ansOne << endl;
cout << "area       = " << ansAreaOne << endl<<endl;

double ansTwo     = 0;
double ansAreaTwo = 0;

cout<< "Enter the length of the 2nd rectangle:";
cin >> lengthTwo;

cout<< "Enter the width of the 2nd rectangle:" << endl;
cin >> widthTwo;

ansTwo      = lengthTwo + widthTwo + lengthTwo+ widthTwo;
ansAreaTwo  = lengthTwo * widthTwo;

cout << "You created the 2nd rectangle with the following characteristics:" << endl << endl;
cout << "width      = " << widthTwo<< endl;
cout << "length     = " << lengthTwo<< endl;
cout << "perimeter  = " << ansTwo << endl;
cout << "area       = " << ansAreaTwo << endl <<endl;

double ansThree= 0;
double ansAreaThree = 0;

cout << fixed << setprecision (5)

cout<< "Enter the length of the 3rd rectangle:";
cin >> lengthThree;

cout<< "Enter the width of the 3rd rectangle:";
cin >> widthThree;

ansThree     = lengthThree + widthThree + lengthThree+ widthThree;
ansAreaThree = lengthThree * widthThree;

cout << "You created the 3rd rectangle with the following characteristics:" << endl << endl;
cout << "width      = " << widthThree<< endl;
cout << "length     = " << lengthThree<< endl;
cout << "perimeter  = " << ansThree << endl;
cout << "area       = " << ansAreaThree << endl <<endl;



    return (0);
}
