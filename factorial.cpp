//factorial calculation
#include<iostream>
//#include<stdio.h>
using namespace std ;

int main(){
		/**
		5!=> 5*4*3*2*1
		8!=>8*7*6*5*...*1
		*/
		int number ;
		cout <<"Enter number";
		cin>>number ;
		int result=1;
		for(int i=number ;i>=1 ; i--){
			result = result*i;
		}
		cout<<result ; 
	
	return 0; 
}
