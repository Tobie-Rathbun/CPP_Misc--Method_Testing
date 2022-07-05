#include <iostream>
using namespace std;

bool running = true;
int main() {
    while (running == true) {
        string answer;
        cin >> answer;

        cout << "Enter the first number: ";
        // output


        if (answer == "n") {
            running = false;
        }
    }
}