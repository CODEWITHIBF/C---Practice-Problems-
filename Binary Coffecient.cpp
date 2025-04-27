#include <iostream>
using namespace std;



// function for factorial

int factorial(int a)

{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
        
    }
    return fact;
}





// function for Binomial Coffecient


void bino(int n, int r)
{

    int total_items = factorial(n);
    int choose_items = factorial(r);
    int choose_items2 = n - r;
    int multiply = choose_items * choose_items2;
    int result = total_items / multiply;

    cout << "The Answer is " << result << endl;
}




// main function starts here
int main()
{


    int n;
    int r;

    cout<<"Enter value of n ";
    cin>>n;
    cout<<"Enter Value of r ";
    cin>>r;

    bino(n, r);

    return 0;
}