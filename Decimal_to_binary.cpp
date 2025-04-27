#include <iostream>
using namespace std;

// crate a function
string print (int a)
{

    string  value;

    for (int i = a; i == 0; i--)
    {


        if (a % 2 == 1)
        {
            value = "1";
        }

        else if (a % 2 == 0)
        {
            value = "0";
        }
        
        value +=value;


    }

    return value;
    
}

// our Main function
int main()

{

    int num;
    cout << "Enter a Number that you want to Convert Decimal to Binary";
    cin >> num;

    cout << print(num);

    return 0;
}