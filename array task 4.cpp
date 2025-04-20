#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<"     Task-4     "<<endl<<endl;
	int a,even=0, odd=0;
	cout<<"Enter the number of elements you want to enter: "<<endl;
	cin>>a;
	int arr[a]={};
	cout<<"Enter the values you want to store: "<<endl;
	for(int i=0; i<a; i++){
		cin>>arr[i];
	}
	for(int i=0; i<a; i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	cout<<"Number of even elements in array are: "<<even<<endl;
	cout<<"Number of odd elements in array are: "<<odd<<endl;
}

