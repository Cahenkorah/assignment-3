#include <iostream>
using namespace std;

int main(){
    double grade;
    
    cout << "please enter your grade?";
    cin >> grade;
    
    if  ( ( grade >= 80) && ( grade < 100) )
    {
     cout << "your letter grade is: " << "A";
    }
    else if ( ( grade >= 75) &&  (grade <80) )
    {
    cout << "your letter grade is: " << "B+";
    }
     else if ( ( grade >= 70) &&  (grade <74) )
    {
    cout << "your letter grade is: " << "B";
    }
     else if ( ( grade >= 65) &&  (grade <69) )
    {
    cout << "your letter grade is: " << "C+";
    }
     else if ( ( grade >= 60) &&  (grade <64) )
    {
    cout << "your letter grade is: " << "C";
    }
     else if ( ( grade > 55) &&  (grade <59) )
    {
    cout << "your letter grade is: " << "D+";
    }
     else if ( ( grade > 50) &&  (grade <54) )
    {
    cout << "your letter grade is: " << "D";
    }
     else if ( ( grade > 45) &&  (grade <49) )
    {
    cout << "your letter grade is: " << "E";
    }
     else if ( ( grade > 0) &&  (grade <44) )
    {
    cout << "your letter grade is: " << "F";
    }


return 0;
}


