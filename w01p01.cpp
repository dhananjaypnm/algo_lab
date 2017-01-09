#include<iostream>
using namespace std;

int main(){
	int n,x;
	cout<<"enter the degree of polynomial (n) :";
	cin>>n;
	n=n+1;
	cout<<endl;

	cout<<"enter the coeffs :\n";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"enter the value of x :";
	cin>>x;
	cout<<endl;

	int result=a[0];
	for(int i=1;i<n;i++){
		result=result*x+a[i];
	}

	cout<<"the value f(x) :"<<result<<endl;
	return 0;
}

