//HEAPS
#include <bits/stdc++.h>
using namespace std;

void insert(int h[], int size, int val) {
    size += 1;
    int index = size;
    h[size] = val;
    while (index > 1 && h[index] > h[index / 2]) {
        swap(h[index], h[index / 2]);
        index = index / 2;
    }
    // return h; // This line is commented out as the function does not need to return anything
}

void deleteh(int h[], int ind, int size) {
    swap(h[ind], h[size]);
    size--;

    int i = ind;
    while (i <= size) {
        int leftindex = 2 * i;
        int rightindex = 2 * i + 1;
        int maxindex = i;

        if (leftindex <= size && h[leftindex] > h[maxindex]) {
            swap(h[maxindex],h[leftindex]);
            maxindex = leftindex;
        }
        if (rightindex <= size && h[rightindex] > h[maxindex]) {
            swap(h[maxindex],h[rightindex]);
            maxindex = rightindex;

        }
        else{
            break;
        }
    }
}

void print(int h[],int size){
    for(int i=1;i<=size;i++){
        cout<<h[i]<<" ";
    }
}


int main(){
    cout<<"Enter the size of the heap"<<endl;
    int size;
    cin>>size;
    cout<<"Enter the heap elements one by one:"<<endl;
    int h[size+1];
    int val;
    for(int i=0;i<size;i++){
        cin>>val;
        insert(h,i,val);
    }
    print(h,size);
    // cout<<"Enter the index you want to delete"<<endl;
    // int index;
    // cin>>index;
    // deleteh(h,index,size);
    // size--;
    // print(h,size);
}
