#include <iostream>
using namespace std;
void registerMember(float id) 
{
cout<<"Member ID: "<<id<< endl;
}
void registerMember(int &id)
{
cout<<"Reference ID: "<<id<<endl;
}
int main() {
int x=10;
registerMember(x); //Line A
registerMember(20); //Line B
return 0;
}

// 1) Line A will give error first,compiler stops at line A.
// 2) The ambiguity we saw in the given program was  because it was against function overloading rules.
      // In the problem both function name was same also their datatype of variable(id). 
      //So i changed the datatype of variable of first funcion which passes the valuse provided in the main function(line B) to 
      //ignore ambiguity.
    