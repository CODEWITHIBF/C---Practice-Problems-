#include <iostream>
using namespace std;

class Array {
    public:
    int arr[12] = {1, 3, 6, 9, 5, 10, 39, 310, 64, 3, 674, 10};
    int n;


    void input() {
        cout << "Enter the number that you want to find: ";
        cin >> n;
    }

int checking() {
        for (int i = 0; i < 12; i++) {
            if (arr[i] == n) {
                return i;
                }
        }
        return -1;
        }

void display() {
        int index = checking();
        if (index != -1) {
            cout << "The number you entered, " << n << ", is at the index: " << index << endl;
        } else {
            cout << "The number you entered, " << n << ", was not found in the array." << endl;
        }
    }
};

int main() {
    Array leng;
    leng.input();
    leng.display();
    return 0;
}
