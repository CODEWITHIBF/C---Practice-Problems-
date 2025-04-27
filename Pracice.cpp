#include<iostream>
#include<string.h>

using namespace std;
class user{
private:
    int id;
    string password;
public:
    string userName;

    user(int id){
    this->id= id;
     }
            //setters
      string getPassword(){
        return password;
    }

            //getters
    void setPassword(string password){
        this->password=password;

    }






};




int main(){

user yasir(100);

yasir.userName="Yasir Jalalani";
yasir.setPassword("yasir123?");
cout<<"UserName: "<<yasir.userName<<endl<<"Password : "<<yasir.getPassword();







return 0;
}
