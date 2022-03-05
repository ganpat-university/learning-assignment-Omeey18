#include<iostream>
using namespace std;

class AddAmount{
public:
int amount=50;
AddAmount(){
cout<<"Inside of default constructor and amount is:"<<amount<<endl;}
AddAmount(int a){
amount=a+amount;
cout<<"Inside of paramterized constructor and amount is:"<<amount<<endl;
}
};


int main(){
AddAmount s,s1(100);
return 0;
}
