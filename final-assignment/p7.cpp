#include <bits/stdc++.h>
using namespace std;
int gcdIterative(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int gcdRecursive(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcdRecursive(b, a % b);
    }
}

int main() {
    int a = 99;
    int b = 27;

    int resultIterative = gcdIterative(a, b);
    int resultRecursive = gcdRecursive(a, b);

    std::cout << "Iterative: " << resultIterative << std::endl;
    std::cout << "Recursive: " << resultRecursive << std::endl;

    return 0;
}