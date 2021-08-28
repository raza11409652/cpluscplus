//fabonacci series
#include<iostream>
//#include<stdio.h>
using namespace std ;


int main(){

	int first=0 ,second =1 ,result =0;
	cout<<first<<"\t"<<second<<"\t";
	for(int i=2 ; i<=100 ;i++){
		result = first+second ;
		cout<<result<<"\t" ;
		first =second ; 
		second = result ;
	}
	
	
	return 0 ; 
}
