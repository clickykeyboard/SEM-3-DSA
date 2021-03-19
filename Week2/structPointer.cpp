#include <iostream>

using namespace std;

struct student {

    int roll;
    string name;

};

main() {

    struct student stud = { 123, "Naam" };
    struct student *studPointer;
    studPointer = &stud;

    cout << studPointer << " " << &stud;

}