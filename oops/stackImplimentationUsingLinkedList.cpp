#include <bits/stdc++.h>
using namespace std;

#include "LinkedList6.txt"

template <class T>
class Stack
{
private:
    LinkedList<T> top;
    int size;
    string anything;

public:
    Stack()
    {
        size = 0;
    }
    Stack(string q)
    {
        cout << q << " "<< endl;
        anything = q;
    }

    void push(T data)
    {
        top.insertHead(data);
        size++;
    }

    T topMost()
    {
        if (size == 0)
        {
            cout << "stack is empty" << endl;
            return NULL;
        }
        return top.getHeadData();
    }

    T pop()
    {
        if (size == 0)
        {
            cout << "stack is empty" << endl;
            return NULL;
        }
        T deleted = top.getHeadData();
        top.deleteHead();
        size--;
        return deleted;
    }
};

int main()
{
    Stack<int> st("ruchit");
    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.pop() << endl;

    cout << st.topMost() << endl;
    cout << st.pop() << endl;

    return 0;
}