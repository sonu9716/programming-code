#include<iostream>
using namespace std;
int main(){
int n ;
cin>>n;
int i=1;
while(i<=n){
        int j=1;
      while(j<=n-i){
        cout<<" ";
        j++;
      }
      int k=1;
      int m=i;
      while(k<=i){
        cout<<m;
        k++;
        m++;
      }
      int l=i-1;
      int t=2*(i-1);
      while(l>=1){
        cout<<t;
        t--;
        l--;
      }
      cout<<endl;
      i++;

}
}
