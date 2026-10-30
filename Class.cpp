
#include <iostream>
using namespace std;

class Input {
public:
    double length, width;

    void getInput() {
        cout << "Enter rectangle length: ";
        cin >> length;

        cout << "Enter rectangle width: ";
        cin >> width;
    };
}

class Calculatin {
public:
    double area;

    void calculateArea(double length, double width) {
        area = length * width;
    }

    void displayOutput() {
        cout << "\nRectangle Area: " < area << endl;
    }
};

int main() {
    Input userInput;
    Calculation result;

    userInput.getInput();

    result.calculateArea(userInput.length, userInput.width);

    result.displayOutput();

    return 0;
}
