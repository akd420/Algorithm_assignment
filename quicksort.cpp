#include<bits/stdc++.h>
using namespace std;

void swap(int a[], int i , int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}


int partition(int a[], int l , int h){
    int pi = a[h];
    int i = l-1;
    for (int j = l;j<h;j++){
        if(a[j]<=pi){
            i++;
        swap(a,i,j);
    }
}
    swap(a,i+1,h);
    return i+1;
}

void quickSort(int a[], int l, int h){
    if(l<h){
        int pi = partition(a,l,h);
        quickSort(a,l,pi-1);
        quickSort(a,pi+1,h);
    }
}

int main(){
    int a[5]={3,7,5,9,1};
        quickSort(a,0,4);
            for(int i=0;i<5;i++){
                cout<<a[i]<< " ";
            }
            cout<<endl;
            return 0;
        }
