#include<iostream>
using namespace std;
class hello{
 private:
 int v;
 public:
 void setv(int n){//setter
    v=n;
 }
int getv(){//getter
    return v;
} 
};
int main(){
  //hello h;//statically allocated
  hello *h=new hello;//dynamically allocated
  (*h).setv(5);//set the value
  cout<<(*h).getv()<<endl;//get the value
  cout<<h->getv();//we can access another way
}