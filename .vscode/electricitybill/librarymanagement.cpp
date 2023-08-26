#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Library{
 public:
  int id;
  char name[100];
  char author[100];
  char student[100];
  float price;
  int pages;
};
int main(){
  Library lib[100];
  map<int,int>mpp;
  set<int>s;
  int input=0;
  int count=0;
  while(input!=5){
    start:
    cout<<"enter 1 to input details like id,name, author ,student ,price , pages"<<endl;
    cout<<"enter 2 to display details"<<endl;
    cout<<"enter 3 to quit"<<endl;
    cin>>input;
    switch(input){
    case 1:
        first:
        cout<<"enter book id"<<endl;
        int idd;
        cin>>idd;
        if(s.find(idd)==s.end()){
            s.insert(idd);
            lib[count].id=idd;
        }else{
            cout<<"id should be unique"<<endl;
            cout<<"enter a valid id"<<endl;
            goto first;
        }
        mpp[lib[count].id]=count;
        cout<<"Enter Book name"<<endl;
        cin>>lib[count].name;
        cout<<"enter author name"<<endl;
        cin>>lib[count].author;
        cout<<"enter student name"<<endl;
        cin>>lib[count].student;
        cout<<"enter the price of books"<<endl;
        cin>>lib[count].price;
        cout<<"enter the pages"<<endl;
        cin>>lib[count].pages;
        count++;
        break;
    case 2:
        for(int i=0;i<count;i++){
          cout<<"book id : "<<lib[i].id<<endl;
          cout<<"book name: "<<lib[i].name<<endl;
          cout<<"author name : "<<lib[i].author<<endl;
          cout<<"student name: "<<lib[i].student<<endl;
          cout<<"price : "<<lib[i].price<<endl;
          cout<<"pages : "<<lib[i].pages<<endl;
        }
        break;
    case 3:
        input=5;
        break;
    default:
       cout<<"you have enter wornge data pls enter again"<<endl;
       goto start;
    }  
   
  }
  h:
  cout<<"enter book id "<<endl;
  int n;
  cin>>n;
  if(mpp.find(n)==mpp.end()){
    cout<<"invalid book id "<<endl;
    cout<<"try again "<<endl;
    goto h;
  }else{
     int index=mpp[n];
          cout<<"<--------------------------->"<<endl;
          cout<<"book id : "<<lib[index].id<<endl;
          cout<<"book name: "<<lib[index].name<<endl;
          cout<<"author name : "<<lib[index].author<<endl;
          cout<<"student name: "<<lib[index].student<<endl;
          cout<<"price : "<<lib[index].price<<endl;
          cout<<"pages : "<<lib[index].pages<<endl;
  }
}