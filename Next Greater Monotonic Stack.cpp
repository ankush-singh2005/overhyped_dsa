#include <bits/stdc++.h>
using namespace std;

void previousGreater(int* arr){
    stack<int> st;
    vector<int> ans(10,-1);
    for(int i=0;i<10;i++){
        while(!st.empty()&&arr[st.top()]<=arr[i]){
            int top=st.top();
            st.pop();
            
        }
        if(st.size()){
            ans[i]=st.top();
        }
        st.push(i);
    }
    for(int i=0;i<10;i++){
        cout<<ans[i]<<" ";
    }
}

int main() {
    // Write C++ code here
    int arr[]={13,8,1,5,2,5,9,7,6,12};
    previousGreater(arr);

    return 0;
}
