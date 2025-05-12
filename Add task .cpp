#include <iostream>
#include <string>

using namespace std;


class Task {
public:
    string taskname, statetask, enddate,;  //ÇÓã ÇáãåãÉ æÍÇáÊåÇ æÊÇÑíÎ ÇäÊåÇÁ

    void input() {
        try {
            cout << "enter the name of Task: ";
            getline(cin, taskname);
            cout << "enter the statetask: ";
            getline(cin, statetask);
            cout << "enter the end date: ";
            getline(cin, enddate);

        }
        catch (const exception& e) {
            cout << "the are error: " << e.what() << endl;
        }
    }

    void display() {
        try {
            cout << "\nthe name of of Task is: " << taskname << endl;
            cout << "the statetask of Task is: " << statetask << endl;
            cout << "the end date of Task is: " << enddate << endl;
        }
        catch (const exception& e) {
            cout << "the are error: " << e.what() << endl;
        }
    }
};

int main() {
    try {

        Task task[100];
        int c = 0;
        char x = 'y';

        while ((x == 'y' || x == 'Y')){
            task[c].input();
            c++;

            cout << "do you want to add another Task? (y/n): ";
            cin >> x;
            cin.ignore();
        }


        for (int i = 0; i < c; i++) {
                cout<<"the information of  Task "<<i+1<<" is:\n";
            task[i].display();
        }
    }
    catch (const exception& e) {
        cout << "\n the are error in the program: " << e.what() << endl;
    }

    return 0;
}
