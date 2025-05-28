
#include <iostream>
#include <string>
using namespace std;

// كلاس التقييم
class Evaluation {
private:
    string evaluator;
    string target;
    int rating;

public:
    Evaluation(string e, string t, int r) {
        evaluator = e;
        target = t;
        rating = r;
    }

    void show() {
        cout << evaluator << " gave " << rating
             << " stars to " << target << "." << endl;
    }
};

// كلاس المصنع
class EvaluationFactory {
public:
    static Evaluation create(string evaluator, string target, int rating) {
        return Evaluation(evaluator, target, rating);
    }
};

// Main
int main() {
    string evaluator, target;
    int rating;

    cout << "Enter your name: ";
    getline(cin, evaluator);

    cout << "Enter the name of the member to evaluate: ";
    getline(cin, target);

    cout << "Enter rating (1 to 10): ";
    cin >> rating;

    try {
        if (evaluator == target)
            throw "You can't evaluate yourself!";
        if (rating < 1 || rating > 5)
            throw "Rating must be between 1 and 5.";

        Evaluation e = EvaluationFactory::create(evaluator, target, rating);
        cout << "Evaluation saved successfully.\n";
        e.show();

    } catch (const char* error) {
        cout << "Error: " << error << endl;
    }

    return 0;
}
