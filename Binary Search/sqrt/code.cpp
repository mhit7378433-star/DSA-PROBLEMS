class Solution {
public:
    int mySqrt(int x) {

      int s, e ,m,ans;
      
     

     s = 0;
     e = x;
     m = s + (e-s)/2;
     if(x==0||x==1){
        return x;
     }
 else {    
     while(s<=e){
if(m==x/m){
    return m;
}
else if(m<x/m){

    s= m+1;
    ans = m;
}
else{
    e = m-1;
    
}
     m = s + (e-s)/2;

     } }
 return ans;    

        
    }
};
