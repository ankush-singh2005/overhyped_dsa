#include<iostream>
#include <stack>
using namespace std;
int main(){
    char i;
    stack<int> st;
    while(true){
        cout<<"Enter y to perform operations and n to terminate"<<endl;
        cin>>i;

        if(i=='y'||i=='Y'){
            cout<<"Enter your choice"<<endl;
            cout<<"1. Push"<<endl;
            cout<<"2. Pop"<<endl;
            cout<<"3. Check empty"<<endl;
            cout<<"4. Show top"<<endl;
            int choice;
            cin>>choice;
            if(choice==1){
                cout<<"Enter the value to push"<<endl;
                int val;
                cin>>val;
                st.push(val);
            }

            else if(choice==2){
                if(st.empty()){
                    cout<<"Stack empty cannot pop"<<endl;
                }
                else st.pop();
            }

            else if(choice==3){
                if(st.empty()) cout<<"Stack is empty"<<endl;
                else cout<<"Stack is not empty"<<endl;;
            }

            else if(choice==4){
                if(st.empty()) cout<<"EMPTY cannot show top";
                else cout<<st.top()<<endl;
            }
        }
        else if(i=='n'|| i=='N'){

            break;
        }
        else{
            cout<<"Invalid input";
            break;
        }
    }

}
