#ifndef LABASSIGNMENT_1_LAB1_POLYNOMIAL_H
#define LABASSIGNMENT_1_LAB1_POLYNOMIAL_H
#include <vector>
#include <string>
#include <cstdlib>
using namespace std;

class Polynomial {
    vector<int> data;

public:
    Polynomial(int A[], int size);

    Polynomial();


    Polynomial(string fileName);


    ~Polynomial() {

    }
};



#endif //LABASSIGNMENT_1_LAB1_POLYNOMIAL_H
