#include<iostream>
using namespace std;

int main(){
	char grade;
	int count[5] = {0,0,0,0,0},stu=1; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << stu <<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='A'){
			count[0]++;
			stu++;
		}else if(grade=='B'){
			count[1]++;
			stu++;
		}else if(grade=='C'){
			count[2]++;
			stu++;
		}else if(grade=='D'){
			count[3]++;
			stu++;
		}else if(grade=='F'){
			count[4]++;
			stu++;
		}else if(grade=='0'){
			break;
		}else{
			cout << "Wrong input. Please input again."<<endl;
		}
		
	}while(true);
	
	
	cout << "In total "<< stu-1 <<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}