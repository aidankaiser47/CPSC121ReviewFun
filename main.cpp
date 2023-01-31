//added a comment here

#include "vecfuncs.h"

int main() {
  vector<int> userNums;

  int min;
  int max;
  fillVector(userNums);

  findMaxMin(userNums, min, max);
cout << min << endl << max;
  return 0;
}