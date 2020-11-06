#include <iostream>
int total ;
int item;

using namespace std;

int main (){
    total = 1;
    while (1){
            cout << "nter # to add \n";
            cout << "or 0 to stop: ";
            cin  >> item;
    if (item == 0)
        break;
    total += item;
    cout  << "Total: " <<total<< '\n';
    
    }
    cout << "Final total " << total << '\n';
    return 0;
}
