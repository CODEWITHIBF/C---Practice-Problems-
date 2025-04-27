#include <iostream>
using namespace std;


class GPA{
public:

double subject[9];
double grade[9];


void data (){
cout<<"Enter Your Marks"<<endl;
cout<<"English: ";
cin>>subject[0]; //English
cout<<"Programming Fundamentals Theory: ";
cin>>subject[1]; //P_F_th
cout<<"Programming Fundamentals Lab: ";
cin>>subject[2]; //P_F_lab
cout<<"ICT Theory: ";
cin>>subject[3];//ICT_th
cout<<"ICT LAB: ";
cin>>subject[4]; //ICT_lab;
cout<<"Physics Theory: ";
cin>>subject[5];//Physics_th;
cout<<"Physics Lab: ";
cin>>subject[6];//Physics_Lab;
cout<<"Social Science: ";
cin>>subject[7];//Social_science;
cout<<"Calculas: ";
cin>>subject[8];//Calculas;
};



void calculating_grade() {

for(int i=0; i<9; i++){

for(int j=50; j>=85; j++){
        if(subject[i]== j){
for(double k=0; k>4.0; k++){

if(grade[j]==k){
    grade=k;
}


}

        }

}

}



}







};







int main (){
int a;

    GPA std;
    std.data();


return 0;
}
