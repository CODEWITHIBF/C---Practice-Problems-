#include<iostream>
#include<cmath>
#include<string>

using namespace std;

int main() {
    double x, y, size = 10;
    char ch = 3; // You can replace this with '*' or any other character
    string message("I Love You");
    int print_line = 7; // The line at which the message will be printed
    int msg_len = message.length();

    // If the message length is odd, append a space for symmetry
    if (msg_len % 2 != 0) {
        message += " ";
        msg_len++;
    }

    // Top part of the heart
    for (x = 0; x < size; x++) {
        for (y = 0; y < 4 * size; y++) {
            double d1 = sqrt(pow(x - size, 2) + pow(y - size, 2));
            double d2 = sqrt(pow(x - size, 2) + pow(y - 3 * size, 2));
            if (d1 < size + 0.5 || d2 < size + 0.5) {
                cout << ch;
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    // Bottom part of the heart
    for (x = 1; x < 2 * size; x++) {
        // Left spaces to center the bottom triangle
        for (y = 0; y < x; y++) {
            cout << " ";
        }

        // Width of the bottom part of the heart
        int width = 4 * size + 1 - 2 * x;

        // Center the message on the line specified by print_line
        if (x == print_line) {
            int padding = (width - msg_len) / 2;
            for (y = 0; y < padding; y++) {
                cout << ch;
            }
            cout << message;
            for (y = 0; y < padding; y++) {
                cout << ch;
            }
        } else {
            for (y = 0; y < width; y++) {
                cout << ch;
            }
        }
        cout << "\n";
    }

    return 0;
}
