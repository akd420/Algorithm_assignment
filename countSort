#include<bits/stdc++.h>
using namespace std;


void countSort(int a[], int n){
    int x=a[0];
    for(int i=0; i<n; i++){
        x=max(x,a[i]);
    }
    int Count[x]={0};
    for(int i=0; i<n; i++){
        Count[a[i]]++;
    }
    for(int i=1;i<=x;i++){
        Count[i]+=Count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--Count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++){
        a[i]=output[i];
    }
}

int main(){
    int a[]={1,2,5,2,9,5,6,3,7,3};
    countSort(a,10);
    for(int i=0; i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}
