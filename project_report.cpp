// Feature by: nour Ibrahim Elfadhli
// This file implements the Generate Reports feature

#include <iostream>
#include <string>
using namespace std;

class Report {
private:
    string projectName;
    int completed, pending;

public:
    Report(string name, int c, int p) {
        projectName = name;
        completed = c;
        pending = p;
    }

    void generate() {
        try {
            if (completed + pending == 0) {
                throw "Cannot generate report: no tasks available.";
            }

            cout << "\n----- Project Progress Report -----" << endl;
            cout << "Project: " << projectName << endl;
            cout << "Completed Tasks: " << completed << endl;
            cout << "Pending Tasks: " << pending << endl;
            cout << "-----------------------------------" << endl;

        } catch (const char* err) {
            cout << "Error: " << err << endl;
        }
    }
};

int main() {
    Report r1("Website Development", 4, 3);
    r1.generate();

    Report r2("Empty Project", 0, 0);
    r2.generate();

    return 0;
}
