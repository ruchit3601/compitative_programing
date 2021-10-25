#include <iostream>
using namespace std;
inline int cube(int s)
{
    return s * s * s;
}
int main()
{
    cout << "The cube of 3 is: " << cube(3) << "\n";
    cout << "The cube of 3 is: " << cube(3) << "\n";
    cout << "The cube of 3 is: " << cube(3) << "\n";
    cout << "The cube of 3 is: " << cube(3) << "\n";
    cout << "The cube of 3 is: " << cube(3) << "\n";
    cout << "The cube of 3 is: " << cube(3) << "\n";

    return 0;
}
// Output: The cube of 3 is: 27

// Inline functions provide following advantages:
// 1) Function call overhead doesn’t occur.
// 2) It also saves the overhead of push/pop variables on the stack when function is called.
// 3) It also saves overhead of a return call from a function.
// 4) When you inline a function, you may enable compiler to perform context specific optimization on the body of function. Such optimizations are not possible for normal function calls. Other optimizations can be obtained by considering the flows of calling context and the called context.
// 5) Inline function may be useful (if it is small) for embedded systems because inline can yield less code than the function call preamble and return.