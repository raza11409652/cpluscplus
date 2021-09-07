#include<iostream>
using namespace std ;
//worst case element ....O(n)
//best case 0th O(1)
//average O(n/2)
//linear search

int main(){
	int arr [5] { 16, 2, 77, 40,100};
	cout<<"Enter number to be searched";
	int number;
	cin>>number;
	for(int i=0;i<5;i++){
		
		if(arr[i]==number){ //true
			cout<<"position"<<i;
			break;
		}
	}
	
	
	
}

