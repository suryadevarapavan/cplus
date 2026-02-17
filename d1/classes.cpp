#include <iostream>
#include <string>
using namespace std;

int main(){
  string name,type;
  int attack,hp,c1;
  double heal;
  bool active;
  
  cout<<"Choose a class \n 1.Swordsman \n 2.Wizard \n 3.Demon \n Enter your choice:\n";
  cin>>c1;

  if (c1 == 1){
    type="Swordsman";
  } else if ( c1 == 2 ) {
    type="Wizard";
  }else if ( c1 == 3 ) {
    type="Demon";
  }else{
    cout<<"Choose a class";
    return 0;
  }

  cout<<"If is your character active:\n 1.True \n 2.False:";
  cin>>c1;

  if (c1==1) {
    active=true;
  }else{
    active=false;
  }

  cout<<"Class:"<<type<<" is active:"<<active;


  /*
  cout<<"Enter name of the character:"<<"\n";
  cin>>name;
  cout<<"Your name is:"<<name<<endl;

  cout<<"Enter attack of the "<<name<<":\n";
  cin>>attack;
  
  cout<<"Enter Heal of the "<<name<<":\n";
  cin>>heal;

  cout<<"Enter HP of the "<<name<<":\n";
  cin>>hp;


  cout<<"Character Bio: \n";
  cout<<name<<"'s attack is:"<<attack<<" && heal is:" <<heal<<endl;
  cout<<name<<"'s Heal points are: "<<hp<<endl;

  return 0; */ 
}
