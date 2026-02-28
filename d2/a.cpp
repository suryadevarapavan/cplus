
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  vector<int>nums;
  int size;

  cout << "Size of the array: ";
  cin >> size;

  for(int i=0; i<size; i++){
    cout << "Enter element " << i+1 << ": ";
    int element;
    cin >> element;
    nums.push_back(element);
  }

  cout << "The elements in the vector are: ";
  for(int element : nums) {
    cout << element << " ";
  }
  cout << endl;

  return 0;
}
