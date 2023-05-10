#include "Student.h"
#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;


void Student::init(const char* uname, int* urank) {// Методы

    strcpy_s(name, strlen(uname) + 1, uname);

    for (int i = 0; i < 3; i++) {
        rank[i] = urank[i];
    }

}

void Student::out() {
    cout << "Имя: " << name << "\n";
    cout << "Ранг: ";
    for (int i = 0; i < 3; i++) {
        cout << rank[i] << " ";
    }
    cout << "\n";
}
double Student::Final() {
    int chponk = 0;
    for (int i = 0; i < 3; i++) {
        chponk += rank[i];
    }

    return double(chponk) / 3;
    // или
    // return chponk / 3.0;
}
