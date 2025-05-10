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
                throw "البريد الإلكتروني غير صالح!";
            }
            users[count].name = name;
            users[count].email = email;
            users[count].password = password;
            count++;
            cout << "تمت إضافة المستخدم بنجاح." << endl;
        } catch (const char* msg) {
            cout << "خطأ: " << msg << endl;
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
                cout << "تم حذف المستخدم بنجاح." << endl;
                break;
            }
        }
        if (!found) {
            cout << "المستخدم غير موجود." << endl;
        }
    }

    void showUsers() {
        cout << "\nقائمة المستخدمين:\n";
        for (int i = 0; i < count; i++) {
            cout << "الاسم: " << users[i].name << " - البريد: " << users[i].email << endl;
        }
    }
};

int main() {
    UserManager manager;

    manager.addUser("Miral", "miral@example.com", "12345");
    manager.addUser("Ali", "ali.email.com", "xyz");  // خاطيء

    manager.showUsers();

    manager.deleteUser("miral@example.com");

    manager.showUsers();

    return 0;
}
