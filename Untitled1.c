#include<iostream>
using namespace std;

class a {
public:
    void print1() {
        cout << "class A print function working" << endl;
    }
};

class b : public a {
public:
    void print2() {
        cout << "class b derived from a function is working" << endl;
    }
};

class c : public a {
public:
    void print3() {
        cout << "class c derived from b function is working" << endl;
    }
};

int main() {
    c c1;
    c1.print1();
}
