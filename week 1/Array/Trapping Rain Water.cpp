int trappingWater(int arr[], int n){
        
        int lMax[n],rMax[n],result=0;
        lMax[0] = arr[0];
        for(int i=1;i<n;i++)
        {
            lMax[i] = max(arr[i],lMax[i-1]);
        }
        
        rMax[n-1] = arr[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rMax[i] = max(rMax[i+1],arr[i]);
        }
        for(int i=1;i<n-1;i++)
        {
            result += min(lMax[i],rMax[i]) - arr[i];
        }
       
        return result;
    }
