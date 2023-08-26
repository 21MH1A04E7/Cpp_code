 #include<iostream>
 using namespace std;
 class College{
    private:
    string name;
    int age;
    int height;
    public:
    int geragre(){
        return this->age;
    }
 };
 int main(){
    //encapsulation->wrapping of data membere or function in a single unit
    //fully encapsulation -> mean all data member is private mark
    //advantage-> used for data hinding and information hiding
    //if we want ,we can make class read only
    //code reusability
    //unit testing
    College first;
    cout<<"hi"<<endl;
 }