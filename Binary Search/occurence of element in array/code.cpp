class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        int s , e , m , first ,second,ans;
        
        first = -1;
        second = -1;
        s = 0;
        e = arr.size()-1;
        m = (s + e)/2;
        // first;
        while(s<=e){
          if(arr[m]==target){
              e = m-1;
              first = m;
              
          } 
         else if(arr[m]>target){
             e = m-1;
         } 
        else{
            s = m+1;
        }    
        m = (s+e)/2;    
        }
        //second
        s = 0;
        e = arr.size()-1;
        m = (s+e)/2;
             while(s<=e){
          if(arr[m]==target){
              s = m+1;
              second = m;
              
          } 
         else if(arr[m]>target){
             e = m-1;
         } 
        else{
            s = m+1;
        }    
        m = (s+e)/2;    
        }
          if(first==second&&first!=-1){
             ans = 1;
         }
         else if(first==-1){
             ans = 0;
         }
         else{
         
        ans = (second-first) + 1;}
         
       
        
        return ans;
    }
};
