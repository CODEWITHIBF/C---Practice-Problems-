#include<iostream>
using namespace std;

class large{
public:

int range;
int maximum;
int *index;

void get_input(){

cout<<"Enter Size of Array: ";
cin>>range;

index= new int[range];


for(int i=0; i<range; i++){

    cout<<"Enter Number";
    cin>>index[i];

}

}



void display_output(){
    maximum={0};

for(int i=0; i<range; i++){

if (index[i] > maximum){
    maximum= index[i];
}





}
cout<<"\n\nLargest number in Array is: "<<maximum<<endl;


}



};



int main(){

large number;
number.get_input();
number.display_output();




return 0;}
