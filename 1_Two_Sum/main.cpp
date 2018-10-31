//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> indices;
    int a;
    for(int i=0;i<nums.size();i++){
      a=nums[i];
      for(int j=i+1;j<nums.size();j++){
        if(a+nums[j]==target) {
          indices.push_back(i);
          indices.push_back(j);
          return indices;
        }
      }
    }
    return indices;
  }
};
int main(int argc, const char * argv[]) {
  vector<int> num={-1,-2,-3,-4,-5};
  int target=-8;
  Solution s;
  vector<int> sol=s.twoSum(num, target);
  return 0;
}
