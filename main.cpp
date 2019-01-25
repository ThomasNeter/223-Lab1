//Thomas Neter, 20709080
//Michael Jamieson,

#include "lab1_polynomial.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;

Polynomial::Polynomial(int A[], int size) {
    data.resize(size);
    for (int i = 0; i < size - 1; i++) {
        data.push_back(A[i]);
    }
}

Polynomial::Polynomial() {
    int exponent = rand() % 1001;
    int array[exponent];
    for(int i=(exponent-1); i >= 0; i--){
        array[i]= rand() % 2001 - 1000;
        data.push_back(array[i]);
    }
}

Polynomial::Polynomial(string fileName){

}


int main() {
srand(time(0));
int large = 4;
int array[] = {5, 3, 8, 2};


Polynomial third_degree(array, large);


}