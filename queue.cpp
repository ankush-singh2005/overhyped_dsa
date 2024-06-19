#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(2);
    q.push(4);
    q.push(56);
    q.push(27);
    q.push(67);
    q.push(23);
    q.push(29);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.empty()<<endl;
}
