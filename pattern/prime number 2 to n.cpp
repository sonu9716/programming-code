#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int i,j,flag;
for( i=1; i<=n; i++){
       flag=0;
    for( j=2; j<=i/2; j++){
    if(i%j==0){
            flag++;
            break;
    }
    }
    if(flag==0 && i!=1){
        cout<<i<<endl;
    }
}
}
