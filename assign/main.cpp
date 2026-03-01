#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;
enum tp{
  WEAPON,
  POTION,
  ESCAPE,
};

struct wepaon{
  tp tpe;
  string name;
  int attack;
};

const wepaon w1={WEAPON,"Inverted Spear of Heaven",-40};  
const wepaon w2={WEAPON,"Dragon-Bone sword",-25};  
const wepaon w3={WEAPON,"Spirit soul katana",-10};  
const wepaon h1={POTION,"Ghost-Ink",10};  
const wepaon h2={POTION,"Draught",15};  
const wepaon h3={POTION,"Brew",5};    

void wpstats(wepaon w){
  if (w.attack>0){
    cout<<w.name<<" attack is:"<<w.attack<<endl;
  }else{
    cout<<w.name<<" heal is:"<<w.attack<<endl;
  }
}

struct Info{
  string name;
  int hp;
  vector<string>inventory;
};

struct Monster{
  string name;
  int hp;
  int attack;
};

const Monster m1={"Kenjaku",100,10};
const Monster m2={"Rika",120,20};
const Monster m3={"Roboronin",80,20};

void inventorychoice(Info &I){
  int choice;

  cout<<"Choose your weapon\n 1."<<w1.name<<"\n 2."<<w2.name<<"\n 3."<<w3.name<<endl;
  cin>>choice;

  switch(choice){
    case 1:
      I.inventory.push_back(w1.name);
      break;
    case 2:
      I.inventory.push_back(w2.name);
      break;
    case 3:
      I.inventory.push_back(w3.name);
      break;
  }
  cout<<"Choose your weapon\n 1."<<h1.name<<"\n 2."<<h2.name<<"\n 3."<<h3.name<<endl;
  cin>>choice;

  switch(choice){
    case 1:
      I.inventory.push_back(h1.name);
      break;
    case 2:
      I.inventory.push_back(h2.name);
      break;
    case 3:
      I.inventory.push_back(h3.name);
      break;
  }

}

Monster randomMonster() {
    srand(time(0));
    int choice = rand() % 3;

    if (choice == 0) {
        return m1;
    } else if (choice == 1) {
        return m2;
    } else {
        return m3;
    }
}

void enemy_stats(Monster m){
  cout<<"Name:"<<m.name<<endl;
  cout<<m.name<<" HP is: "<<m.hp<<endl;
  cout<<m.name<<" Attack is: "<<m.attack<<endl;

}

void ds(Info I){
  cout<<I.name<<" stats are:"<<endl;
  cout<<I.name<<" HP is: "<<I.hp<<endl;
  cout<<I.name<<" Inventory has: "<< endl;
  for(int i = 0;i<I.inventory.size();i++ ){
    string itemName = I.inventory[i];
        
        if (itemName == w1.name) wpstats(w1);
        else if (itemName == w2.name) wpstats(w2);
        else if (itemName == w3.name) wpstats(w3);
        else if (itemName == h1.name) wpstats(h1);
        else if (itemName == h2.name) wpstats(h2);
        else if (itemName == h3.name) wpstats(h3);
  }

  cout<<"Enemy stats are:"<<endl;
}

void Biq(Monster m, Info &I) {
    ds(I);
    enemy_stats(m);
    cout << "\nBattle: " << I.name << " vs " << m.name << endl;

    while (I.hp > 0 && m.hp > 0) {
        int pDmg = 0;
        string wName = I.inventory[0];
        if (wName == w1.name) pDmg = abs(w1.attack);
        else if (wName == w2.name) pDmg = abs(w2.attack);
        else if (wName == w3.name) pDmg = abs(w3.attack);

        m.hp -= pDmg;
        cout << I.name << " deals " << pDmg << " damage." << endl;

        if (m.hp <= 0) break;

        I.hp -= m.attack;
        cout << m.name << " deals " << m.attack << " damage." << endl;
        cout << "Player HP: " << I.hp << " | Monster HP: " << m.hp << endl;
    }

    if (I.hp > 0) cout << "Victory!" << endl;
    else cout << "Defeat..." << endl;
}

int main(){
  Info player;
  cout<<"Enter name of the character:";
  cin>>player.name;

  cout<<"Enter hp of the "<<player.name<<endl;
  cin>>player.hp;
  inventorychoice(player);
  
  Monster enemy = randomMonster();

  Biq(enemy,player);

}
