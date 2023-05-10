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
};

