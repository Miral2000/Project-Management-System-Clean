#include <iostream>
#include <string>
using namespace std;


class project {
public:
    string name, startdate, enddate, description;

    void input() {
        try {
            cout << "enter the name of project: ";
            getline(cin, name);
            cout << "enter the start date: ";
            getline(cin, startdate);
            cout << "enter the end date: ";
            getline(cin, enddate);
            cout << "enter the description: ";
            getline(cin, description);
        }
        catch (const exception& e) {
            cout << "the are error: " << e.what() << endl;
        }
    }

    void display() {
        try {
            cout << "\nthe name of project is: " << name << endl;
            cout << "the description of project is: " << description << endl;
            cout << "the start date of project is: " << startdate << endl;
            cout << "the end date of project is: " << enddate << endl;
        }
        catch (const exception& e) {
            cout << "the are error: " << e.what() << endl;
        }
    }
};

int main() {
    try {

        project pro[100];
        int c = 0;
        char x = 'y';

        while ((x == 'y' || x == 'Y')){
            pro[c].input();
            c++;

            cout << "do you want to add another project? (y/n): ";
            cin >> x;
            cin.ignore();
        }


        for (int i = 0; i < c; i++) {
                cout<<"the information of  project "<<i+1<<" is:\n";
            pro[i].display();
        }
    }
    catch (const exception& e) {
        cout << "\n the are error in the program: " << e.what() << endl;
    }

    return 0;
}
