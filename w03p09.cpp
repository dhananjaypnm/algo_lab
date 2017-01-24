#include<iostream>
#include <cstdlib>
#include<time.h>
using namespace std;

int partition(int a[],int l,int r){
  srand(time(NULL));
  int randIndex=rand()%(r+1-l)+l;
  int pivot=a[randIndex],temp;
  int i,j;
  i=j=l;
  a[randIndex]=a[r];
  a[r]=pivot;
  for(;i<r;i++){
    if(a[i]<pivot) {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      j++;
    }
  }
  a[r]=a[j];
  a[j]=pivot;
  return j;
}

void quickSort(int a[],int l,int r){
  if(l<r){
    int p=partition(a,l,r);
    quickSort(a,l,p-1);
    quickSort(a,p+1,r);
  }
}

int main(){
  cout<<"enter the size of the array :\n";
  int n;
  cin>>n;
  cout<<"\nenter the array :"<<endl;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  quickSort(a,0,n-1);
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
