#include<iostream>
using namespace std;
void arrange(int array[],int n){
int start =0;
int end =n-1;
int val=1;
while(start<=end){
    if(val%==0){
        array[end]=val;
        val++;
    end--;
    }

    else{
        array[start]=val;
        val++;
        start++;
    }
}
}
int main(){

}
