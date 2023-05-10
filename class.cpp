#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>

using namespace std;
//public private protected
class Student {
    char name[30];
    int rank[3];//поля
public:
    void init(const char* uname, int* urank) {// Методы

        strcpy_s(name, strlen(uname) + 1, uname);

        for (int i = 0; i < 3; i++) {
            rank[i] = urank[i];
        }

    }

    void out() {
        cout << "Имя: " << name << "\n";
        cout << "Ранг: ";
        for (int i = 0; i < 3; i++) {
            cout << rank[i] << " ";
        }
        cout << "\n";
    }
    double Final() {
        int chponk = 0;
        for (int i = 0; i < 3; i++) {
            chponk += rank[i];
        }

        return double(chponk) / 3;
        // return chponk / 3.0;
    }
};



void main() {

    setlocale(0, "");
    srand(time(NULL));

    Student s;

    //cin >> s.name;
    //cout << s.name;

    int ball[3]{ 12,10,5 };
    char name[20]{ "Tenno" };

    s.init(name, ball);
    s.out();
    cout << "Средний балл: " << s.Final() << "\n";
}
