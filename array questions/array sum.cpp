#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int array[100000];
int sum=0;
for(int i=0;i<n;i++){
    cin >>array[i];
}
for(int j=0;j<n;j++){
    sum=sum+array[j];
}
cout<<sum<<endl;
}
