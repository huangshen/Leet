#include "SumOfTwoIntegers.h"

Solution::Solution() {
}

Solution::~Solution() {
}


int Solution::getSum(int a, int b) {
    //return a+b;
    int tmp_or, tmp_and;
    
    do {
    tmp_or = a ^ b;
    tmp_and = a & b;
    a = tmp_or;
    b = tmp_and << 1;
    } while(tmp_and);
    
    return tmp_or;
}
