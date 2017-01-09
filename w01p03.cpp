#include<algorithm>
#include<iostream>
using namespace std;

bool find(int a[],int n,int f){
	int foun=false;
	int mid=n/2;
	int start=0;
	int end=n;

	while(end>=start){
		mid=(start+end)/2;
		if(f==a[mid]){
			foun=true;
			return foun;
		}
		if(f>a[mid]){
			start=mid+1;
		}
		if(f<a[mid]){
			end=mid-1;
		}
	}

	return foun;
}

int main(){
	int n,x;
	bool found=false;
	cout<<"enter the number of elements (n) :";
	cin>>n;
	cout<<endl;
	cout<<"enter the sum (x) :";
	cin>>x;
	cout<<endl;
	int a[n];
	cout<<"enter the elements :\n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	sort(a,a+n);

	for(int i=0;i<n;i++){
		cout<<"checking "<<i<<" th element\n" ; 
		int curr=a[i];
		bool currFound=find(a,n,x-curr);
		if(currFound==true){
			found=true;
		}
	}

	cout<<"is the sum found ? ";
	
	if(found){
		cout<<"found\n";
	}else{
		cout<<"not found\n";
	}

	return 0;
}
