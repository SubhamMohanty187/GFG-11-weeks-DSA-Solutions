int majorityWins(int arr[], int n, int x, int y) {
        // code here
        int i,c1=0,c2=0;
        for(i=0;i<n;i++)
        {
            if(arr[i] == x)
            c1++;
            if(arr[i] == y)
            c2++;
        }
        if(c1!=c2)
        {
            if (c1 > c2)
            return x;
            else
            return y;
        }
        else
        return x<y?x:y;
    }
