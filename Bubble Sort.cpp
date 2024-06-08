#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,3,7,11,9};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[j]<arr[i])
            swap(arr[i],arr[j]);
        }
    }

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
