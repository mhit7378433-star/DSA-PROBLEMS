class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int s , e, m , size,first,last;

      size = nums.size();
      s = 0;
      e = size -1 ;
      first  = -1;
      last =-1;
      //First
      while(s<=e){
      m = (s+e)/2;
      if(nums[m]==target){
        first = m;
        e = m-1;
      }
      else if(nums[m]<target){
        s = m+1;
      }
      else{
        e = m-1;
      }
      }
     
      // last
      s = 0;
      e = size-1;
       while(s<=e){
      m = (s+e)/2;
      if(nums[m]==target){
        last = m; 
        s =  m + 1;
      }
      else if(nums[m]<target){
        s = m+1;
      }
      else{
        e = m-1;
      }
      }

        
        
     vector<int>a(2);
     a[0]= first;
     a[1]= last;
     return a;

    

    

        
    }
};
