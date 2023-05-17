#include <iostream>

int main();
bool isPalindrome(int x);
int input;

int main() {
    std::cin >> input;
    if(input<0) {
        std::cout << "false";
    }
    else if(isPalindrome) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }

}

bool isPalindrome(int x) {
    int num = x;
    int size{0};
    int newnum{0};
    for(int i=1;;++i) {
        if((num/10^i)<1) {
            size = i;
            break;
        }
    }
    int* digits{new int[size]};
    for(int i=0;i<size;++i) {
        digits[i] = num%10;
        num/10;
    }
    for(int i=size-1;i>=0;--i) {
        newnum+=digits[i]*(10^(size-i));
    }

    if(newnum == x) {
        return true;
    }
    else {
        return false;
    }
}
