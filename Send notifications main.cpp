#include <iostream>
using namespace std;


class Notification {
public:
    char message[100]; // · Œ“Ì‰ «·—”«·… «·„œŒ·…
    char Name[50]; // · Œ“Ì‰ «”„ «·‘Œ’ «·„” ·„
    char Email[50]; // · Œ“Ì‰ «·»—Ìœ «·≈·ﬂ —Ê‰Ì ··‘Œ’ «·„” ·„

    // œ«·… ·⁄—÷ «·≈‘⁄«—
    void show() {
        cout << "meesgage to: " << Name << "\n";
        cout << "meesage is: " << message << endl;
    }
};

int main() {
    Notification op1;

    // ≈œŒ«· »Ì«‰«  «·‘Œ’ «·„” ·„
    cout << "enter the name: ";
    cin.getline(op1.Name, 50); // ﬁ—«¡… «”„ «·„” ·„

    cout << "enter the email: ";
    cin.getline(op1.Email, 50); // ﬁ—«¡… «·»—Ìœ «·≈·ﬂ —Ê‰Ì

    // ≈œŒ«· —”«·… «·≈‘⁄«—
    cout << "enter the message: ";
    cin.getline(op1.message, 100); // ﬁ—«¡… «·—”«·… „‰ «·„” Œœ„

    // ⁄—÷ «·≈‘⁄«—
    op1.show();

    return 0;
}

