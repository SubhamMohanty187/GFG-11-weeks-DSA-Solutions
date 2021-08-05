void arrange(long long arr[], int n) {
        
        long long i;
        for(i=0;i<n;i++)
        {
            arr[i] = arr[i] + (arr[arr[i]]%n)*n;          //Here, arr[arr[i]] < n, So, arr[arr[i]]%n =arr[arr[i]] AND arr[arr[i]]%n)*n = arr[arr[i]]
        }
        
        for(i=0;i<n;i++)
        {
            arr[i] = arr[i]/n;
        }
        
    }
