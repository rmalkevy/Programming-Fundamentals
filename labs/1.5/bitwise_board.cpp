#include <iostream>
#include <string>
#include <bitset>

using namespace std;

const string RED = "\033[31m";
const string RESET = "\033[0m";
const string ON_SYM = "*";
const string OFF_SYM = ".";

void display(unsigned char state) {
    cout << "Current state (binary): " << bitset<8>(state) << endl;
    cout << " +" << string(16, '-') << "+ " << endl;
    for (int i = 0; i < 4; ++i) {
        // Left diode (bits 0-3)
        bool left_on = (state & (1 << i)) != 0;
        string left_color = left_on ? RED : "";
        string left_reset = left_on ? RESET : "";
        string left_sym = left_on ? ON_SYM : OFF_SYM;

        // Right diode (bits 4-7)
        bool right_on = (state & (1 << (i + 4))) != 0;
        string right_color = right_on ? RED : "";
        string right_reset = right_on ? RESET : "";
        string right_sym = right_on ? ON_SYM : OFF_SYM;

        cout << left_color << left_sym << left_reset
             << "|" << string(16, ' ') << "|"
             << right_color << right_sym << right_reset << endl;
    }
    cout << " +" << string(16, '-') << "+ " << endl;
}

int main() {
    unsigned char state = 0;  // Initial state: all diodes off
    string input;
    int op;

    while (true) {
        display(state);

        cout << "Enter mask in binary (e.g., 0b01010101) or 'q' to quit: ";
        cin >> input;
        cout << "Input: " << input << endl;
        if (input == "q" || input == "Q") {
            break;
        }

        // Parse binary mask
        unsigned char mask;
        try {
            if (input.find("0b") != string::npos) {
                input = input.substr(2);
            }
            mask = static_cast<unsigned char>(stoul(input, nullptr, 2));
        } catch (...) {
            cout << "Invalid binary input. Try again." << endl;
            continue;
        }

        cout << "Operation (1=OR, 2=AND, 3=XOR): ";
        cin >> op;

        if (op == 1) {
            state |= mask;
        } else if (op == 2) {
            state &= mask;
        } else if (op == 3) {
            state ^= mask;
        } else {
            cout << "Invalid operation. Try again." << endl;
        }
    }

    cout << "Program exited." << endl;
    return 0;
}