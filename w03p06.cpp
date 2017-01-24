#include<iostream>
using namespace std;

void merge(int a[],int l,int m,int r){
  int i=l,j=m+1,k=l;
  int c[50];
  while (i<=m&&j<=r) {
    if(a[i]<a[j]){
      c[k++]=a[i++];
    }else{
      c[k++]=a[j++];
    }
  }
  while(i<=m) c[k++]=a[i++];
  while(j<=r) c[k++]=a[j++];
  for(int t=l;t<=r;t++) a[t]=c[t];
}

void mergeSort(int a[],int l,int r){
  int m;
  if(l<r){
    m=(l+r)/2;
    mergeSort(a,l,m);
    mergeSort(a,m+1,r);
    merge(a,l,m,r);
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
  mergeSort(a,0,n-1);
  cout<<endl;
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }
  cout<<endl;
}
