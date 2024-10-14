// function to swap 2 values using pointers
// also uses a template
// code by Ryuya

#include <iostream>

template <typename T>
void swap(T *v1, T *v2) {
    T tmp = *v2;
    *v2 = *v1;
    *v1 = tmp;
}

int main() {
    int i1 = 7272;
    int i2 = 54;
    
    std::cout << "i1: " << i1 << std::endl;
    std::cout << "i2: " << i2 << std::endl;
    
    swap(&i1, &i2);
    
    std::cout << "after swap():" << std::endl;
    std::cout << "i1: " << i1 << std::endl;
    std::cout << "i2: " << i2 << std::endl;
    
    
    std::string s1 = "what";
    std::string s2 = "swap";
    
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;
    
    swap(&s1, &s2);
    
    std::cout << "after swap():" << std::endl;
    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s2: " << s2 << std::endl;

    return 0;
}
