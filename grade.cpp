#include <iostream>

using namespace std;

int score;
int last_score_digit;
char value;
char modifier; 


int main (){
	while (1){
		cout << "Enter scores __ \n "	;
		cout << "Or enter -1 to stop: ";
		cin >> score;
		last_score_digit = score%10;
		
		if (score == -1)
			break;
			
		if (score >= 0 && score <= 60)
			value = 'F';
		if (score >= 61 && score <= 70)
			value = 'D';	
		if (score >= 71 && score <= 80)
			value = 'C';	
		if (score >= 81 && score <= 90)
			value = 'B';	
		if (score >= 91 && score <= 100)
			value = 'A';	
		
		if (last_score_digit >=1 && last_score_digit <= 3 )
			modifier = '-';
		if (last_score_digit >=4 && last_score_digit <= 7 )
			modifier = ' ';
		if (last_score_digit == 8 ||last_score_digit == 9 ||  last_score_digit == 0  )
			modifier = '+';
												
		cout << "Grade is " << value << modifier << '\n';
	}
	
	    return 0;
	    
}