#include<iostream>
using namespace std;



void finding(int *arr,int n, int number){
bool yes=false;

    for(int i=0; i<n; i++){
                 if(arr[i]==number){
            cout<<number <<" is at index of "<<i<<endl;
            yes=true;
        }

}

if(yes==false){
                    cout<<number <<" not found";
}

}
int main(){

    int arr[]={10,20,30,40,5,6,5,9,100};
    int n= sizeof(arr)/sizeof(arr[0]);


finding(arr,n,100);



return  0;
}
