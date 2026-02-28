#include<iostream>
#include<string>
#include<vector>
#include<cstdlib>
#include<ctime>

using namespace std;

struct Info{
  string name;
  int level;
  vector<string>inventory;
};

void displatstats(Info I){
  cout <<"Name is: "<<I.name<<endl;
  cout<<I.name<<" level is: "<<I.level<<endl;
  cout<<I.name<<" inventory has: "<< endl;
  for(int i = 0;i<I.inventory.size();i++ ){
    cout<<I.inventory[i]<<endl;
  }

}

int main(){
  Info i;
  i.name="weokin";
  i.level=1;
  i.inventory.push_back("Inverted Spear of Heaven");
  i.inventory.push_back("Festering Life Sword");
  i.inventory.push_back("Prison Realm");
  displatstats(i);
}
