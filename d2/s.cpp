#include<iostream>
#include<string>
using namespace std;

struct{
  int n;
  string s;
  
}Ms;

int main(){
  Ms.n=100;
  Ms.s="Pavan";

  cout << "My Name is "<<Ms.s<<" and my score is "<<Ms.n<<endl;
}
