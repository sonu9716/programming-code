#include<iostream>
usingh namespace std;


int binary_search(int array[],int n ,int x){
int i =0;
int start=0;
int end =0;
while(i<=n){
    start=array[0];
    end = array[n-1];
    int mid=(start+end)/2;

    if(mid==x){
        return mid;
    }
    else{
        if(x>mid){
            start =mid +1;

          else{
            end = mid-1;
          }
    }

}


}
return -1;
}
