#include<iostream> 
using namespace std; 

class Student {
    public: 
        string name; 
        int age; 
    Student(string n, int a ): name(n), age(a){}
};  

void greeting(){
cout<<"Greeting! "<<endl; 
cout<<"Welcome to the main program ! "<<endl; ''
}
int main(){

    system("clear"); 
    string username="jamesbond"; 
    string password="007password"; 
    cout<<"This is the main class of our application.\n";
    cout<<"Thank you!"<<endl; 
    return 0 ; 
}