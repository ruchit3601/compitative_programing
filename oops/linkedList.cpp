#include <bits/stdc++.h>
using namespace std;

template <class T>
class Node
{
public:
    T data;
    Node<T> *next;

    Node(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

template <class T>
class LinkedList
{
private:
    Node<T> *head;
    int length;

public:
    LinkedList()
    {
        length = 0;
        head = NULL;
    }

    void insertHead(T data)
    {
        Node<T> *ptr = new Node<T>(data);
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            ptr->next = head;
            head = ptr;
        }
        length++;
    }

    void insertEnd(T data)
    {
        Node<T> *ptr = new Node<T>(data);
        if (head == NULL)
        {
            head = ptr;
        }
        else
        {
            Node<T> *temp;
            temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
        }
        length++;
    }

    T deleteHead()
    {
        T deletedData = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete";
            return NULL;
        }
        else
        {
            Node<T> *temp;
            temp = head;
            if (temp->next == NULL)
            {
                deletedData = head->data;

                delete (head);
                head = NULL;
            }
            else
            {
                head = temp->next;
                deletedData = temp->data;
                delete (temp);
            }
        }
        length--;
        return deletedData;
    }

    T deleteEnd()
    {
        T deletedData = NULL;
        if (head == NULL)
        {
            cout << "nothing to delete";
            return NULL;
        }
        else if (head->next == NULL)
        {
            deletedData = head->data;
            delete (head);
            head = NULL;
        }
        else
        {
            Node<T> *temp = head;
            while (temp->next->next != NULL)
            {
                temp = temp->next;
            }
            deletedData = temp->next->data;
            delete (temp->next);
            temp->next = NULL;
        }
        length--;
        return deletedData;
    }

    void display()
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    int size()
    {
        return length;
    }
};

int main()
{
    LinkedList<int> ll;
    ll.insertHead(2);
    ll.display();
    ll.insertHead(4);
    ll.display();
    ll.insertEnd(7);
    ll.display();
    cout << "deleted data=" << ll.deleteEnd() << endl;
    ll.display();
    // cout<<ll.size();

    return 0;
}