#pragma once

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

class Student {
    char name[30];
    int rank[3];//поля
public:
    void init(const char* uname, int* urank);
    void out();
    double Final();

    int GetRank(int index) {
        return rank[index];
    }
    void SetRank(int index, int x) {
        rank[index] = x;
    }
    char* getName() {
        return name;
    }
    void setName(const char* uname) {
        strcpy_s(name, 20, uname);
    }

};

