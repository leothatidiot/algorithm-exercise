/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target){
  int *res = (int*) malloc( sizeof(int)*2 );

  int i,j;
  for(i=0; i<numsSize; i++){
    for(j=0; j<numsSize; j++){
      if(i==j)
	continue;
      else if( *(nums+i) + *(nums+j) == target ){
	*res = i;
	*(res+1) = j;
	return res;
      }
    }
  }
  return 0;
}

int main()
{
  int nums[] = {2, 7, 11, 15};
  int target = 13;

  printf("%d %d", *twoSum(nums, 4, target), *(twoSum(nums, 4, target)+1));

  return 0;
}
