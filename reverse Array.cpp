// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class rev{
    public:

    int arr[8]={1,14,15,16,17,18,19,30};
    int n = sizeof(arr) / sizeof(int);
    int copyarr[8];




void reverse(){


    for(int i=n-1; i>=0; i--){

        int j= n-i-1;
        copyarr[i]= arr[j];



            }



}


void print(){
    for(int i=0; i<n; i++){
        cout<<copyarr[i]<<",";
    }

}


};

int main() {

rev array;
array.reverse();
array.print();


    return 0;
}
