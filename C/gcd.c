#include <stdio.h>

int gcd(int a, int b) {
    if (a < b) {
        return gcd(b,a);
    }
    if (a == b) {
        return a;
    }
    if (a % 2 == 0) {
        if (b % 2 == 0){
            return 2*gcd(a/2,b/2);
        } else {
            return 1;
        }
    } else {
        if (b%2 == 0) {
            return gcd(a, b/2);
        } else {
            return gcd((a-b)/2, b);
        }
    }

}

int main(void) {
    printf("%d", gcd(5,15));
    return 0;
}