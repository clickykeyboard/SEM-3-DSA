#include <iostream>

using namespace std;

struct student {

    int rollNumber;
    string name;
    string phoneNumber;

};


main() {

    struct student s1 = { 1, "Name", "12345" };

    cout << "Roll: " << s1.rollNumber << endl;
    cout << "Name: " << s1.name << endl;
    cout << "Phone: " << s1.phoneNumber << endl;

}

