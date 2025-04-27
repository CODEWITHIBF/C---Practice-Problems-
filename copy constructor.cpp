#include<iostream>
using namespace std;
class server{
public:
    string name;
    string pass;

  server(string man, string pass){

        this->name=man;
        this->pass=pass;


    }

    server(server &user){
        cout<<"\nwe are copying....."<<endl;

    name=user.name;
    pass=user.pass;

    }
};


int main(){

server user("Kamran", "kamran?");

server user1 (user);
cout<<user1.name<<endl<<user1.pass;

server users("Yasir", "yasir234");
server user2(users);
cout<<user2.name<<endl<<user2.pass;







return 0;
}
