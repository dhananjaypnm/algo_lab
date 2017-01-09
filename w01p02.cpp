#include<iostream>
using namespace std;

int main(){

	cout<<"enter the size of the array :";
	int n;
	cin>>n;
	cout<<endl;
	cout<<"enter the array elements :\n";
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int index=0;
	int length=0;
	for(int i=0;i<n;i++){
		if(a[index]!=a[i]){
			int diff=i-index;
			index=i;
			if(diff>length){
				length=diff;
			}
		}
	}


	if((n-index)>length){
		length=n-index;
	}

	cout<<"max length of plateau :"<<length<<endl;

	return 0;
}
