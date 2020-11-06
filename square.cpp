#include <iostream>
#include <math.h>       /* pow */
using namespace std;

signed int xA;
signed int yA;
signed int xB;
signed int yB;
float 	sum_of_squared_d;
float 	distance_AB	;	


int main (){
		cout << "insert point A location, x and y ";
		cin >> xA >> yA ;
		cout << "insert point B location, x and y ";
		cin >> xB >> yB ;
		sum_of_squared_d =pow((xA - xB),2) + pow((yA - yB),2)  ; 
		distance_AB 	= pow(sum_of_squared_d,0.5)       ;
		cout << "Distance is: "	 << distance_AB << '\n';
	    return 0;
	    
}


