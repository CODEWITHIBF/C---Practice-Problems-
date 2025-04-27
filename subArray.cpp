#include <iostream>
using namespace std;

void PrintSubArray(int *arr, int n){
    //outer loop
    for(int start= 0; start<n; start++){
        for(int end= start; end<n; end++){
            cout<<"(";
            for(int i=start; i<=end; i++){
                cout<<arr[i]<<" ";
            }
            cout<<")";
        }
        cout<<endl;
    }
}
int main()
{

    int arr[10] = {2, 4, 5, 6,8,10,12,14,16,18};
    int n = sizeof(arr) / sizeof(arr[0]);

    PrintSubArray(arr, n);
    return 0;
}