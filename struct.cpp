#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;

struct Student {
    char name[30];
    int rank[3];

};

void init(Student& s, const char* name, int* rank) {

    strcpy_s(s.name, strlen(name) + 1, name);

    for (int i = 0; i < 3; i++) {
        s.rank[i] = rank[i];
    }

}

void out(const Student& s) {
    cout << "Имя: " << s.name << "\n";
    cout << "Ранг: ";
    for (int i = 0; i < 3; i++) {
        cout << s.rank[i] << " ";
    }
    cout << "\n";
}
double Final(const Student& s) {
    int chponk = 0;
    for (int i = 0; i < 3; i++) {
        chponk += s.rank[i];
    }
    
    return double(chponk) / 3;
    // return chponk / 3.0;
}

void main() {

    setlocale(0, "");
    srand(time(NULL));

    Student s;

    //cin >> s.name;
    //cout << s.name;

    int ball[3]{ 12,10,5 };
    char name[20]{ "Tenno" };

    init(s, name, ball);
    out(s);
    cout << "Средний балл: " << Final(s) << "\n";
}
