#include<iostream>
#include<string>

using namespace std;

enum CharacterType{
  Swordsman,
  Scorcerer,
  Demons
};
struct Character {
  CharacterType tp;
  string name;
  int attack;
  int heal;
  int hp;
};

const Character Swordsmanstats = {Swordsman,"Swordsman",80,40,5};
const Character Scorcererstats = {Scorcerer,"Scorcerer",120,10,20};
const Character Demonsstats = {Demons,"Demons",100,20,51};

int main(){
  string n;
  int choice;
  Character player;

  cout<<"Welcome to my game\n Enter your choice for class \n 1.Swordsman \n 2.Scorcerer \n 3.Demon \n Enter your choice:"<<endl;
  cin>>choice;

  switch(choice){
    case 1:
      player=Swordsmanstats;
    case 2:
      player=Scorcererstats;
    case 3:
      player=Demonsstats;
  }
  cout<<"What is your name?"<<endl;
  cin>>n;
  
  player.name=n;

  cout<<"Your character name is "<<player.name<<" and class is: "<<player.tp<<endl;
  cout<<player.name<<" Attack is :"<<player.attack<<endl;
  cout<<player.name<<" HP is :"<<player.hp<<endl;
  cout<<player.name<<" Heal is :"<<player.heal<<endl;

  
  return 0;
}
