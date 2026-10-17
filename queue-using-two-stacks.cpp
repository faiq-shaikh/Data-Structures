#include<iostream>
#include<stack>
using namespace std;
class queue{
    private:
    stack<int> s1,s2;
    public:
    void enqueue(int val){
        s1.push(val);
    }
    int dequeue(){
        if(s1.empty()&&s2.empty()){
            cout<<"queue is empty";
            return -1;
        }
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
        int x=s2.top();
        s2.pop();
        return x;
    }

};
int main(){
    queue q1;
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    int x=q1.dequeue();
    cout<<x;
}