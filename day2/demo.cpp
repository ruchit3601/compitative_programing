#include<iostream>

namespace oxygen{
    int a=22;
}
namespace carbon{
    float a=2.3;
}

int main(){

    // cout<<"hello world";
    std::cout<<oxygen::a;
    return 0;
}