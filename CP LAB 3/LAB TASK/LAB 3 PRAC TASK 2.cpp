// Name: Adnan Ahmad 
// Department: Electrical Engineering (POWER)
// Registration No: BF25NWELE0744
// Section: A

#include <iostream>
using namespace std;
int main()
    {
int age; //DECLARATION OF VARIABLE
char hasId; //STORING CHARACTER

cout << "Enter your age:";  //DISPLAY OR PRINT
cin >> age;   // INOUT FROM USER

cout << "Do you have an ID card? (Y/N):"; 
cin >> hasId;

if(age >=18 && hasId=='Y'){    //USED IF FOR CONDITION
	cout << "You can enter" <<endl;  //DISPLAY
}
else {    
	cout<<"Entry not allowed";
}

return 0;
}
