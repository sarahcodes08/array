#include<iostream>
using namespace std;
int main(){	
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<"     Task-2     "<<endl<<endl;
	int a,sum=0;
	cout<<"Enter the number of elements you want to enter: "<<endl;
	cin>>a;
	int arr[a]={};
	cout<<"Enter the values you want to store: "<<endl;
	for(int i=0; i<a; i++){
		cin>>arr[i];
	}
	for(int i=0; i<a; i++){
		sum=sum+arr[i];
	}
	cout<<"Sum of all elements in the array: "<<sum<<endl;
}

