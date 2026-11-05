class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

int n ,s,m,e;
s=0;
n =arr.size() -1;
e =n;
m=n/2;


    while(s<=e){
        


        m = e + (s-e)/2;

        if(arr[m]>=arr[m-1]&&arr[m]>=arr[m+1]){
            break;
        }
        else if(arr[m]>arr[m-1]){
            s=m+1;
        }
        else{
            e = m-1;
        }






      }
      return m;

      
        
      
    }
};
