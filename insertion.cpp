#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cout << "Number of elements : ";
    cin >> n;
    int array[n];
    for(int i = 0; i < n;i++){
        x =i;
        cout <<"Insert element " << x << " : ";
        cin >> array[i];
    }
    for(int i = 1; i < n;i++){
        int temp = array[i];
        int j = i-1;
        while(array[j]>temp && j>=0){
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=temp;
        
    }
    cout <<"Sorted elements : ";
    for (int i = 0; i < n; i++){
        cout << array[i] << " ";
    }
}
