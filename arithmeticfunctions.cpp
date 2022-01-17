#include "arithmeticfunctions.h"

// Compute x^3
int cube(int x){

    return (x * x *x);
}

// Compute the maximum of x and y
int max(int x, int y){
    int max = x;
    if (max < y){
        max = y;
    }
    
    return max;
}

// Compute x - y
int difference(int x, int y){
    return (x-y);
}