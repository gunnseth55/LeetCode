#include<cmath>

class Solution {
public:
    bool isPerfectSquare(int num) {
      double x=std::sqrt(num);
      return ceil(x)==floor(x);
    }
};