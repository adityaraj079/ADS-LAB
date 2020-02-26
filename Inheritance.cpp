#include<iostream>
using namespace std;
class parent
{
int par_id;
public:
void father()
{
 cout<<"I am the father function";     //This is the father class
}
};
class child : public parent
{
void son()
 {
     cout<<"i am son";
 }
};

int main()
{
 child obj1;            //Declared child class and object
 obj1.father();         //Access father
 return 0;
}
