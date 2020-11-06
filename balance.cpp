#include <iostream>

using namespace std;

signed int balance_owed;


int main (){
		cout << "Enter number of Dollars owned "	;
		cin >>  balance_owed ;
		
		if (balance_owed == 0)
			cout << "You owed nothing.\n";
			
		else 
			cout << "You owe " << balance_owed << " dollards. \n";
				
	    return 0;
	    }
		




