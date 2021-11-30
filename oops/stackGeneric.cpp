#include<bits/stdc++.h>
using namespace std;

template <class T>
class Stack{
    private:
        T *arr;
        int top;
        int size;
    public:
        Stack(){
            arr = new T[1000];
            top = -1;
            size = 1000;
        }
        
        void push(T data){
            if(top==size-1){
                cout << "stack full"<<endl;
                return;
            }
            top++;
            arr[top] = data;
        }

        T topMost(){
            if(top==-1){
                cout << "stack is empty" << endl;
                return NULL;
            }
            return arr[top];
        }

        T pop(){
            if (top == -1)
            {
                cout << "stack is empty" << endl;
                return NULL;
            }
            T deleted = arr[top];
            top--;
            return deleted;
        }
        
};

int main(){
    Stack<string> st;
    st.push("ruchit");
    st.push("abcd");
    cout<<st.pop()<<endl;
    cout << st.topMost() << endl;
    cout << st.pop() << endl;

    return 0;
}