#include <iostream>
using namespace std;


class Notification {
public:
    char message[100]; // ������ ������� �������
    char Name[50]; // ������ ��� ����� �������
    char Email[50]; // ������ ������ ���������� ����� �������

    // ���� ���� �������
    void show() {
        cout << "meesgage to: " << Name << "\n";
        cout << "meesage is: " << message << endl;
    }
};

int main() {
    Notification op1;

    // ����� ������ ����� �������
    cout << "enter the name: ";
    cin.getline(op1.Name, 50); // ����� ��� �������

    cout << "enter the email: ";
    cin.getline(op1.Email, 50); // ����� ������ ����������

    // ����� ����� �������
    cout << "enter the message: ";
    cin.getline(op1.message, 100); // ����� ������� �� ��������

    // ��� �������
    op1.show();

    return 0;
}

