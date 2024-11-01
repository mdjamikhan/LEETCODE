class Solution {
public:
  int merge(vector<int>&arr,int low,int mid,int high){
      vector<int>temp;
      int left=low;
      int count=0;
      int right=mid+1;
      while(left<=mid && right<=high){
          if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
          }
          else{
               // count+=(mid-left+1);
                if( arr[left]==2*arr[right]){
                    count+=(mid-left+1);

                }
                temp.push_back(arr[right]);

                right++;
          }
      }
      while(left<=mid){
            temp.push_back(arr[left]);
            left++;
      }
      while(right<=high){
            temp.push_back(arr[right]);
            right++;
      }
      for(int i=low;i<=high;i++)
      {
            arr[i]=temp[i-low];
      }
      return count;
  }
  int merging(vector<int>&arr,int low,int high)
  {
      //interview thought process
      int count=0;
      if(low>=high) return count;
      int mid=(low+high)/2;
      merging(arr,low,mid);
      merging(arr,mid+1,high);
      count=merge(arr,low,mid,high);
      return count;
  }

    int reversePairs(vector<int>& nums) {
        return merging(nums,0,nums.size()-1);
        
    }
};