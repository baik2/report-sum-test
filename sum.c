#include "sum.h"

int sum(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        sum += i;
    }
    return sum;
}

int main() {
    int start = 1;
    int end = 10;
    int sum_ = sum(start, end);
    printf("The sum from %d to %d is: %d\n", start, end, sum_);
    return 0;
}
