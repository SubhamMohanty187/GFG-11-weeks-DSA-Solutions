int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int res=arr[0];
        int maxSum = arr[0];
        
        for(int i=1;i<n;i++)
        {
            maxSum = max(arr[i],maxSum+arr[i]);
            res = max(maxSum,res);
        }
        return res;
        
    }
