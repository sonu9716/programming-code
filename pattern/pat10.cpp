#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int n1= (n-1)/2 +1;
    int n2=n1+1;
    int i=1;
    while(i<=n1){
        int j=1;
        while(j<=n1-i){
            cout<<" ";
            j++;
        }
        int k=1;
        while(k<=(2*i)-1){
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
    i=1;
    int j=n2;
    while(j<=n){
        int k=1;
        while(k<=i){
            cout<<" ";
            k++;
        }
        int t=1;
        while(t<=n-2*i){
            cout<<"*";
            t++;
        }
        cout<<endl;
        i++;
        j++;

    }

}
