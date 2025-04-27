#include <iostream>
using namespace std;


int sum(int a, int b){
cout<<(a+b)<<endl;
return a+b;

}

int sum(double a, double b){
    cout<<(a+b)<<endl;
return a+b;
}



int main(){

sum(4,5);
sum(2.3,5.6);
    return 0;
}