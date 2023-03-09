#include "dna.h"

int factorial(int num) {
    auto sum = 1;
    auto index = 1;
    
    while (index <= num) {
        sum *= index;
        index++;
    }
    
    return sum;
}

int gcd(int num1, int num2) {
    auto smaller= 0;

    if (num1 > num2) {
        smaller = num2;
    } else {
        smaller = num1;
    }

    auto answer = 0;    
    for (auto i = 1; i <= smaller; i++) {
        if ((num1 % i == 0) and (num2 % i == 0)) {
            answer = i;
        } 
    }

    return answer;
}

bool is_palindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}