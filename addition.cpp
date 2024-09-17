#include <iostream>


int add(int a, int b) {
    return a + b;
}


void performAddition() {
    int x = 5;
    int y = 10;
    
    
    int result = add(x, y);
    
    std::cout << "The result of addition is: " << result << std::endl;
}

int main() {
    performAddition();
    return 0;
}
