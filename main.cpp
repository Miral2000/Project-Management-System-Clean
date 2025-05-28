// Feature by: Miral Ibrahim Elfadhli
// This file user mangment feature
#include <iostream>
#include <string>
using namespace std;

const int MAX_USERS = 100;

struct User {
    string name;
    string email;
    string password;
};

class UserManager {
private:
    User users[MAX_USERS];
    int count = 0;

public:
    void addUser(string name, string email, string password) {
        try {
            if (email.find('@') == string::npos) {
                throw "Invalid email format!";
            }
            if (count >= MAX_USERS) {
                throw "User list is full!";
            }

            users[count].name = name;
            users[count].email = email;
            users[count].password = password;
            count++;
            cout << "User added successfully.\n";
        } catch (const char* msg) {
            cout << "Error: " << msg << endl;
        }
    }

    void deleteUser(string email) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (users[i].email == email) {
                for (int j = i; j < count - 1; j++) {
                    users[j] = users[j + 1];
                }
                count--;
                found = true;
                cout << "User deleted successfully.\n";
                break;
            }
        }
        if (!found) {
            cout << "User not found.\n";
        }
    }

    void searchUser(string email) {
        for (int i = 0; i < count; i++) {
            if (users[i].email == email) {
                cout << "User found: " << users[i].name << ", Email: " << users[i].email << endl;
                return;
            }
        }
        cout << "User not found.\n";
    }

    void showUsers() {
        cout << "\nAll Users:\n";
        for (int i = 0; i < count; i++) {
            cout << "- Name: " << users[i].name << ", Email: " << users[i].email << endl;
        }
    }
};

int main() {
    UserManager manager;
    int choice;
    string name, email, password;

    cout << "Welcome Admin - User Management System\n";

    do {
        cout << "\nMenu:\n";
        cout << "1. Add User\n";
        cout << "2. Delete User\n";
        cout << "3. Search User\n";
        cout << "4. Show All Users\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
        case 1:
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter email: ";
            getline(cin, email);
            cout << "Enter password: ";
            getline(cin, password);
            manager.addUser(name, email, password);
            break;

        case 2:
            cout << "Enter email to delete: ";
            getline(cin, email);
            manager.deleteUser(email);
            break;

        case 3:
            cout << "Enter email to search: ";
            getline(cin, email);
            manager.searchUser(email);
            break;

        case 4:
            manager.showUsers();
            break;

        case 5:
            cout << "Exiting program.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
