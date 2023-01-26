# include "vecfuncs.h"

void fillVector(vector<int> &vectorInt) {
  int num = 0;
  for (int i = 0; i < 5; i++) {
    cout << "Please enter an Integer: ";
    cin >> num;
    vectorInt.push_back(num);
  }
}

void findMaxMin(vector<int> &vectorInt, int &min, int &max) {
  max = vectorInt.at(0);
  min = vectorInt.at(0);
  for (int i = 0; i < vectorInt.size(); i++) {
    if (vectorInt.at(i) > max) {
      max = vectorInt.at(i);
    }
    if (vectorInt.at(i) < min) {
      min = vectorInt.at(i);
    }
  }
}