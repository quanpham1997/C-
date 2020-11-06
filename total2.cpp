#include <iostream>
	 
using namespace std;

int total 	;
int item	;
int minus_item	;

int main (){
        total = 0;
		minus_item 	=0;
		while (1) {
			cout << "Enter # to add \n";
			cout << " or 0 to stop: " ;
			cin >> item 		;
			
			if (item == 0)
				break;
			if (item< 0) {
				++minus_item ;
				continue;
			}
			total += item	;
			cout << "Total: " << total << '\n';			
		}
			
			cout << "Final total " << total << '\n';
			cout << "width " << minus_item << "negative items omitted \n";
				
	    return 0;
	    }
