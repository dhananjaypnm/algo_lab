#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;

int main(){

	cout<<"enter the size of array :";
	int n;
	cin>>n;
	cout<<endl;
	cout<<"enter the array :\n";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int diff=INT_MAX;
	int x,y;
	for(int i=1;i<n;i++){
		if((a[i]-a[i-1])<diff){
			diff=a[i]-a[i-1];
			x=a[i];y=a[i-1];
		}
	}

	cout<<"closest pair : ( "<<y<<" : "<<x<<" ) \n";
	return 0;
}
