#include <iostream>
#include <string>
using namespace std;

class MessageService {
    string from; //«·‘Œ’ «·„—”· «·—”«·…
    string to;   //«·‘Œ’ «·„” ·„ ··—”«·…
    string text; //„Õ ÊÏ «·—”«·…

public:
    void sendMessage(string f, string t, string m) {
        from = f;
        to = t;
        text = m;

    }
    //œ«·… ·⁄—÷ «·—”«∆· «·„—”·… ·‘Œ’ „«
    void displayMessage(string user) {
        if (user == to) {

         cout << from << " sent to " << to << ": " << text << endl;

        } else {
            cout << "No messages for " << user << endl;
        }
    }
};

// «·Ê«ÃÂ… «·„ÊÕœ… (Facade)
class Facade {
    MessageService op1; //«Ê»Ãﬂ  „‰ ‰Ê⁄ «·ﬂ·«” «·«Ê·

public:
    void send(string from, string to, string text) {
        op1.sendMessage(from, to, text);
    }

    void display(string user) {
        op1.displayMessage(user);
    }
};

int main() {
    Facade facade;

    string fromuser, touser, message;

    cout << "Enter sent name: ";
    getline(cin, fromuser);

    cout << "Enter to name: ";
    getline(cin, touser);

    cout << "Enter the message: ";
    getline(cin, message);

    facade.send(fromuser, touser, message);

    cout << "\nEnter user name to display message: ";
    getline(cin, touser);

    facade.display(touser);

    return 0;
}

