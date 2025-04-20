#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<"     Task-3     "<<endl<<endl;
	int a,i, min, max;
	cout<<"Enter the number of elements you want to enter: "<<endl;
	cin>>a;
	int arr[a]={};
	for(int i=0; i<a; i++){
		cout<<"Enter the values you want to store: "<<endl;
		cin>>arr[i];
		min=arr[0];
		max=arr[0];
	}
		for(int i=0; i<a; i++){
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}	
	}
	cout<<"Maximum element is: "<<max<<endl;
	cout<<"Minimum element is: "<<min<<endl;
	return 0;
}
