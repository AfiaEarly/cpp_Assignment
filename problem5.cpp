#include <iostream>
using namespace std;

void takeDamage(int &health,int damage)
{
health= health-damage;
}

int main()
{
int playerHP=100;

 takeDamage(playerHP,30);
 takeDamage(playerHP,20);
cout<<playerHP;

}