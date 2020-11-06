#include <iostream>
long int     old_num     ;
long int     current_num ;
long int     next_num    ;

using namespace std;


int main (){
    old_num         = 1;
    current_num     = 1 ;
    
    cout << "1 \n";
    
    while (current_num < 1000000000000000000) {
        cout << current_num << ' ';
        next_num    = current_num + old_num ;
        
        old_num     = current_num ;
        current_num = next_num  ;
    }
    return 0;
}
