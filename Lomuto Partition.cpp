#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={50,30,20,10,5,11};
    int p;
    cout<<"Enter the pivot";
    cin>>p;
    swap(arr[p],arr[5]);
    int l=0,h=5;
    int i=l-1;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<arr[h]){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    cout<<"The index of the pivot elelment is: "<<i+1<<endl;

    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

}
