#include <iostream>

int main(){
    int a = 5;
    int *p = &a;
    *p = *p + 3;
    std::cout << a << std::endl;
}