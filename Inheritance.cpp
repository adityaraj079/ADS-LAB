#include<iostream>
using namespace std;
class parent
{
int par_id;
public:
father()
{
 cout<<"I am the father function";
}
};
class child : public parent
{
 son()
 {
     cout<<"i am son";
 }
};

int main()
{
 child obj1;
 obj1.father();
 return 0;
}
