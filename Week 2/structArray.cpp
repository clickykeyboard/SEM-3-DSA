#include <iostream>

using namespace std;

struct student {
    int rollNumber;
    string name;
    string phoneNumber;
};

main() {

    struct student students[5];

    for (int student = 0; student < 5; student++) {
        cout << "Roll: " << endl;
        cin >> students[student].rollNumber;
        cout << "Name: " << endl;
        cin >> students[student].name;
        cout << "Phone: " << endl;
        cin >> students[student].phoneNumber;
    }

    for (int student = 0; student < 5; student++) {
        cout << "Student Roll: " << students[student].rollNumber << endl;
        cout << "Student Name: " << students[student].name << endl;
        cout << "Student Phone: " << students[student].phoneNumber << endl;
    }


}