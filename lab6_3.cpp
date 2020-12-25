#include<iostream>
using namespace std;

//done!!
char before(char x){
	int a1 = x, i = 65;
	if(a1 >= 65 && a1 <= 90){
		if(x == 'A'){return 'Z';}
		else{return x-1;}
	} else {return '0';}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
