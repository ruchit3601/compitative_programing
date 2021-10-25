#include <bits/stdc++.h>
using namespace std;

template <typename T>
class vectorS
{
private:
    T *arr;
    int counter;
    int cur_size;

public:
    vectorS()
    {
        arr = new T[2];
        counter = 0;
        cur_size = 2;
    }
    void push_back(T data)
    {
        if (counter == cur_size)
        {
            T *temp = new T[cur_size * 2];
            for (int i = 0; i < cur_size; i++)
            {
                temp[i] = arr[i];
            }
            T *temp2;
            temp2 = arr;
            arr = temp;
            delete (temp2);
            cur_size *= 2;
        }
        arr[counter] = data;
        counter++;
    }
    void display(){
        for (int i = 0; i < counter;i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    T pop_back()
    {
        if (2*counter == cur_size)
        {
            T *temp = new T[cur_size /2];
            for (int i = 0; i < cur_size/2; i++)
            {
                temp[i] = arr[i];
            }
            T *temp2;
            temp2 = arr;
            arr = temp;
            delete (temp2);
            cur_size /= 2;
        }
        counter--;
        return counter;
    }
};


int main()
{
    vectorS <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.display();
    arr.push_back(3);
    arr.push_back(4);
    arr.pop_back();
    arr.display();
}





















// template <typename T>
// class vectors{
//     private:
//         T *arr;
//         int counter;
//         int cur_size;
//     public:
//         vectors(){
//             arr = new T[2];
//             counter = 0;
//             cur_size = 2;
//         }

//         void push_back(T data){
//             if(counter==cur_size){
//                 T *temp = new T[2 * cur_size];
//                 for (int i = 0; i < cur_size;i++){
//                     temp[i] = arr[i];
//                 }
//                 T *temp2;
//                 temp2 = arr;
//                 arr = temp;
//                 delete (temp2);
//                 cur_size *= 2;
//             }
//             arr[counter] = data;
//             counter++;
//         }
//         void display()
//         {
//             for (int i = 0; i < size();i++){
//                 cout << arr[i]<<" ";
//             }
//             cout << "\n";
//         }
//         int size()
//         {
//             return counter;
//         }
//         T pop_back()
//         {
//             if (2*counter == cur_size)
//             {
//                 T *temp = new T[cur_size/2];
//                 for (int i = 0; i < cur_size/2; i++)
//                 {
//                     temp[i] = arr[i];
//                 }
//                 T *temp2;
//                 temp2 = arr;
//                 arr = temp;
//                 delete (temp2);
//                 cur_size /= 2;
//             }
//             counter--;
//             return counter;
//         }
// };

// int main(){
//     vectors<int> arr;
//     arr.display();
//     arr.push_back(2);
//     arr.display();
//     arr.push_back(4);
//     arr.display();
//     arr.push_back(6);
//     arr.display();
//     arr.push_back(8);
//     arr.display();
//     arr.pop_back();
//     arr.display();

//     return 0;
// }