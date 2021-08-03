vector<int> subarraySum(int arr[], int n, int s)
    {
        
        int sum = arr[0],left=0;
        vector<int> a;
        for(int i=1;i<=n;i++)
        {
            while(sum>s && left<i-1)
            {
                sum = sum - arr[left];
                left++;
            }
            
            if(sum == s){
                a.push_back(left+1);
                a.push_back(i);
                return a;
            }
    
            sum += arr[i];
            
        }
        a.push_back(-1);
        return a;
        
    }
