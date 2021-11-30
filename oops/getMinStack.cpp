#include <bits/stdc++.h>

using namespace std;

struct MyStack{
    
    stack<int> st;
    int minEle;
    
    void push(int x){
        if(st.empty()){
            minEle=x;
            st.push(x);
            cout<<x;
            return;
        }
        else if(x<minEle){
            st.push(2*x-minEle);
            minEle=x;
            cout<<minEle;
            
        }
        else{
            st.push(x);
            cout<<x;
        }
    }
    
    void pop(){
        if(st.empty()){
            cout<<"stack empty";
            return;
        }
        int t=st.top();
        st.pop();
        
        if(t<minEle){
            cout<<minEle;
            minEle=2*minEle-t;
        }
        else{
            cout<<t;
        }
    }
    void peek(){
        if(st.empty()){
            cout<<"stack empty";
            return;
        }
        int t=st.top();
        (t<minEle) ? cout<<minEle : cout<<t;
    }
    void getMin(){
        if(st.empty()){
            cout<<"stack empty";
            return;
        }
        else{
            cout<<minEle;
        }
    }
    
};

int main()
{
    MyStack s;
    s.push(3);
    s.push(5);
    s.getMin();
    s.push(2);
    s.push(1);
    s.getMin();
    s.pop();
    s.getMin();
    s.pop();
    s.peek();

    return 0;
}
