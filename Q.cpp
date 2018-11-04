//
// Created by danai on 10/18/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    m = 0;
    a=new int*[n];
    for (int i = 0; i < n; ++i) a[i] = new int[m];
}

Q::Q(int nn, int mm) {
    n=nn;
    m = mm;
    a=new int*[n];
    for (int i = 0; i < n; ++i) a[i] = new int[m];
}

Q::Q(int nn, int mm, int **aa) {
    n=nn;
    m = mm;
    a=new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
        for (int j = 0; j < m; ++j) a[i][j] = aa[i][j];
    }
}

void Q::user_input() {
    cout << "введите N : ";
    cin >> n;
    while((n < 1) && ((n%2)==1)) {
        cout << "введите положительное чётное число : ";
        cin >> n;
    }
    cout << "введите M : ";
    cin >> m;
    while((m < 1) && ((m%2)==1)) {
        cout << "введите положительное чётное число : ";
        cin >> m;
    }
    a = new int*[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
        for (int j = 0; j < m; ++j) {
            cout << "введите [" << i << ", " << j << "] элемент: ";
            cin >> a[i][j];
        }
    }
}

int Q::fun(int *r) {
    int tmp;
    for (int i = 0; i < n/2; ++i) {
        for (int j = 0; j < m/2; ++j) {
            tmp = a[i][j];
            a[i][j] = a[n / 2 + i][m / 2 + j];
            a[n / 2 + i][m / 2 + j] = tmp;
        }
    }
    *r = a[m/2][m/2];
    return m/2+1;
}

void Q::print() {
    cout << "массив размера " << n << " * " << m << ": " << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cout << a[i][j] << " ";
        cout << endl;
    }
}