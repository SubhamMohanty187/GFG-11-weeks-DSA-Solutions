int equilibriumPoint(long long a[], int n) {
        int i;
        long long lsum=0,rsum=0;
        for(i=0;i<n;i++)
        {
            rsum += a[i];
        }
        for(i=0;i<n;i++)
        {
            rsum-=a[i];
            if(lsum == rsum)
               return i+1;
            
            lsum+= a[i];
        }
        
        return -1;
    }
