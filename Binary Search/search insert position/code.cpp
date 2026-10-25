class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
     int s , e , m,index;
     index = -1;
      s=0;
      e = nums.size()-1;
      m = (s+e)/2;
      while(s<=e){
        
      if(nums[m]==target){
        return m; 


      }
      else if(nums[m]>target){
        e= m-1;
        index = m;
        



      }
     else{
        s=m+1;
        
     } 
     

     m=(s+e)/2;

       


      }

     if(index == -1){
        index = m+1;
     }

     return index;
    



        
    }
};
