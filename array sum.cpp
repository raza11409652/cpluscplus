//array sum each element
#include<iostream>
using namespace std ;

int main(){
	int size =5 ;
	int array[size];
	int result =0 ; 
	for(int i=0;i<size;i++){
		cin>>array[i];
	}
	for(int j=0;j<size;j++){
		result+=array[j];
		//result =result +arr[j]
	}
	cout<<result;
	
	//Array arr[1000] int
	//0...................
	//-1-2-4-5-6-7--8-----
	
	return 0; 
}
