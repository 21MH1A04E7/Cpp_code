#include<iostream>
using namespace std;
class krishana {
    
 char c;
 int health;
 public:
 krishana(){
        cout<<"hii i am very pleasure to say that"<<endl;
    }
krishana(int health,char c){
    this->health=health;
    this->c=c;
}
 void setheath(int n){
    this->health=n;
 }
 int gethealth(){
    return health;
 }
 void print(){
    cout<<"health "<<this->health<<endl;
    cout<<"character  "<<this->c<<endl;
 }
 void setchar(char c){
    this->c=c;
 }
 char getchar(){
    return c;
 }
};
int main(){
    krishana obj(78,'a');
    obj.print();
    //copy constructor
    //it will automatically created
    krishana r(obj);
    r.print();
    //obj.setchar('a');
    //obj.setheath(78);
    //cout<<obj.getchar()<<endl;
    //cout<<obj.gethealth()<<endl;

}