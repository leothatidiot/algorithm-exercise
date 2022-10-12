#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
		int i,j;
		for(i=0; i<nums.size(); i++ ){
			for(j=0; j<nums.size(); j++){
				if(i == j)
					continue;
				else if(nums[i]+nums[j] == target){
					vector<int> res = {i,j};
					// res = vector()
					return res;
				}
			}
		}	 
    }
};

int mian()
{
	vector<int> nums = {2, 7, 11, 15};
	int target = 9;
	
	Solution.twoSum(nums, target)
	cout << "over" << endl;
}