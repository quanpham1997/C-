#include <iostream>

float F ;
float C ;



int main (){
    std::cout << "Insert Celcius degree" <<  '\n';
    std::cin >> C ;
    F      = (C*9/5) + 32 ;
    std::cout << C <<"Degree Celcius equal to " << F << "Farenheiht." << '\n' ;
    return 0;
}
