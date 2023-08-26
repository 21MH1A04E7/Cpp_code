#include<iostream>
using namespace std;
//creating class
class hero{
    //properties
    //by default it will create private modifier
public://bewlo this line  are all public midifier if private won't there
//we can access any where because it is public
//can access outside of class and inside of class
//private modifier can we access only inside of class
int v=4;
char ch;
};
int main(){
    //creating object
    hero h1;//hero is class name and h1 is object name;
    cout<<h1.v<<endl;//accessing v variable
    h1.ch='A';//initializing ch varible
    cout<<h1.ch;
}