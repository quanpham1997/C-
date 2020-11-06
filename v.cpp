#include <iostream>
int value;
int result;
int main (){
    value = 1  ;
    result=(value++ *5) +(value++ *3);
    std::cout << "Result is :" << result << '\n';
    return 0;
}



















