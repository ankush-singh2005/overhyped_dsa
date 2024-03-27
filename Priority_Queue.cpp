#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int> v2;
    map<int,int> p;
    stack<int> st;
    vector<int> res;
    
    
    for(int i=0;i<5;i++){
        int val;
        cin>>val;
        v1.push_back(val);
    }
    
    for(int i=0;i<5;i++){
        int val;
        cin>>val;
        v2.push_back(val);
    }
    
    for(int i=0;i<5;i++){
        p[v2[i]]=v1[i];
    }
    
    for(auto i:p){
        st.push(i.second);
        res.push_back(i.second);
    }
    
    //to print elements that have the highest priority
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    
    //to print elements that have the lowest priority
    for(int i=0;i<5;i++){
        cout<<res[i]<<" ";
    }
    
}

//input v1 -> 11 9 12 13 5
//input v2 -> 2 1 3 5 
//output (high priority) 13 5 12 11 9
//output (low priority) 9 11 12 5 13
