#include <iostream>
#include <math.h>       /* pow */

float V ;
float r ;
const float PI= 3.1415926 ;


int main (){
    std::cout << "Insert radius :" <<  '\n';
    std::cin >> r ;
    V      =   pow (r, 3) * PI * 4/3 ;
    std::cout << "Volumn of the sphere is  " << V  << '\n' ;
    return 0;
}
