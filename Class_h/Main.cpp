#pragma warning(disable:4996)

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include "Student.h"

using namespace std;
//public private protected

void main() {

    setlocale(0, "");
    srand(time(NULL));

    Student s;

    int ball[3]{ 12,10,5 };
    char name[20]{ "Tenno" };

    s.init(name, ball);
    s.out();
    cout << "Средний балл: " << s.Final() << "\n";
    cout << "get: " << s.GetRank(1) << "\n";
    s.SetRank(1, 3);

    cout << "\n2:\n\n";

    cout << "Get: " << s.getName() << "\n";
    s.setName("Lotos");
    s.out();
}
