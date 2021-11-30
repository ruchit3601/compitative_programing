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
    int length;

public:
    Node<T> *head;

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

    void deleteData(T data)
    {
        if (!isPresent(data) && head == NULL)
        {
            return;
        }
        if (head->next == NULL)
        {
            if (head->data == data)
            {
                delete (head);
                head = NULL;
            }
        }
        else if (head->data == data)
        {
            Node<T> *temp = head;
            head = head->next;
            delete (temp);
        }
        else
        {
            Node<T> *temp = head;
            while (temp->next->data != data)
            {
                temp = temp->next;
            }
            Node<T> *deleted_node = temp->next;
            temp->next = temp->next->next;
            delete (deleted_node);
        }
    }

    bool isPresent(T data)
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    void display()
    {
        Node<T> *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ,";
            temp = temp->next;
        }
        cout << endl;
    }

    int size()
    {
        return length;
    }
};

template <class T>
class unorderedSet
{
private:
    LinkedList<T> *arr;
    int size = 3;
    int unique = 0;
    hash<T> myHashFunction;

public:
    unorderedSet()
    {
        arr = new LinkedList<T>[3];
    }

    int getHash(T data)
    {
        return myHashFunction(data);
    }

    bool fineDensity()
    {
       return (size + 0.0f) / (unique + 0.0f) >= 2.0f;
    }

    void reDistribution(int newSize)
    {
        LinkedList<T> *temp = new LinkedList<T>[newSize];
        swap(temp, arr);

        int tempSize = size;
        size = newSize;
        unique = 0;

        for (int i = 0; i < tempSize; i++)
        {
            Node<T> *temp2 = temp[i].head;
            while (temp2 != NULL)
            {
                insert(temp2->data);
                temp2 = temp2->next;
            }
        }
        delete (temp);
    }

    void insert(T data)
    {
        int index = abs(getHash(data)) % size;
        if (arr[index].isPresent(data))
        {
            return;
        }
        arr[index].insertEnd(data);
        unique++;

        if (!fineDensity())
        {
            reDistribution(2 * size);
        }
    }

    void remove(T data)
    {
        int index = abs(getHash(data)) % size;
        if (!arr[index].isPresent(data))
        {
            return;
        }
        arr[index].deleteData(data);
        unique--;

        if (!fineDensity())
        {
            reDistribution(size / 2);
        }
    }

    bool isPresent(T data)
    {
        int index = abs(getHash(data)) % size;
        if (!arr[index].isPresent(data))
        {
            return false;
        }
        return true;
    }

    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << i << ":";
            arr[i].display();
        }
        cout << "\n---------\n";
    }
};

int main()
{
    unorderedSet<string> s;
    s.insert("friend");
    s.insert("ru");
    s.insert("hello");
    s.display();

    cout <<s.isPresent("ru") << " " << s.isPresent("rock");

    return 0;
}