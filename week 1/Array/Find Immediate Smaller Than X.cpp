int immediateSmaller(int arr[], int n, int x)
    {
     
        int rem=-1;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>rem && arr[i]<x)
            rem = arr[i];
        }
        return rem;
        
    }
