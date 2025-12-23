#include<iostream>
#include <string>
using namespace std;

int main(){
	char grade ;
	int j = 0 ;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<< endl;

	
	do{
		cout << "Student [" << j+1 <<  "]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == 'A') {// if grade is A
			count[0] += 1 ;      //A
		}else if(grade == 'B'){ // if grade is B
			count[1] += 1 ;      //B
		}else if (grade == 'C'){ // grade is wrong input
			count[2] += 1 ;  
		}else if (grade == 'D'){
			count[3] += 1 ;  
		}else if (grade == 'F'){
			count[4] += 1 ;  
		}else if (grade == '0'){
			
			break ; 
		}else{

			cout << "Wrong input. Please input again." <<endl ;
			j -= 1 ; 
		}
		j++ ; 
	}while(true);
	
	
	cout << "In total "<< j  << " students."<< endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	
	
	return 0;

}



