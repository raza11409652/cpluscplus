//print * problem
/**
* ->1
**2
***3
****4
*****5
.... n
*/
#include<iostream>
using namespace std ;

int main(){
	int n=0;//100
	cout<<"Enter max value";
	cin>>n ; 

	for(int i=n;i>=1;i--){
		for(int j=1;j<=i;j++){
			
		cout<<"*";
		
			
		}
		
		cout<<"\n";
		for(int k=i;k>=1;k--){
			
		cout<<k;
		
			
		}
		cout<<"\n";

	}
}
