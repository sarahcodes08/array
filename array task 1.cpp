#include<iostream>
using namespace std;
int main(){
	cout<<" Name: Sarah Shahzad"<<endl;
	cout<<" Reg#: F24605008"<<endl;
	cout<<"     Task-1     "<<endl<<endl;
	int a,i;
	cout<<"Enter the number of elements you want to enter: "<<endl;
	cin>>a;
	int arr[a]={};
		cout<<"Enter the values you want to store: "<<endl;
	for(int i=0; i<a; i++){
		cin>>arr[i];
	}
		cout<<"Array before reversal: "<<endl;
	for(int i=0; i<a; i++){
		cout<<arr[i];
	}
		cout<<endl<<"Array after reversal: "<<endl;
	for(int i=a-1; i>=0; i--){
		cout<<arr[i];
	}
}

