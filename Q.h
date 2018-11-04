//
// Created by danai on 10/18/18.
//

#include <iostream>
using namespace std;
#ifndef AAD_3_LAB08_2_Q_H
#define AAD_3_LAB08_2_Q_H

class Q {
private:
    int n, m, **a;
public:
    Q();
    Q(int nn, int mm);
    Q(int nn, int mm, int **aa);

    void user_input();
    void print();
    int fun(int *r);
};

#endif //AAD_3_LAB08_2_Q_H
