//while loop

#include<iostream>
using namespace std ; 

int main(){
	// target 2 table
	for(int i=11;i<=10;i++){
		cout<<"2"<<"*"<<i<<"="<<2*i<<"\n";
	}
	
	int j=1 ; 
	while(j<=10){
		cout<<"3*"<<j<<"="<<3*j<<"\n";
		j++;
	}
	cout<<"J="<<j;
	cout<<"----------------------\n";
	int k=11 ;
	do{
		cout<<"3*"<<k<<"="<<3*k<<"\n";
		k++;	
	}while(k<=10);
	
	cout<<"k"<<k;
	

}
