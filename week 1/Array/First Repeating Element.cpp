int firstRepeated(int arr[], int n) {
        
        int index,max=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>max)
            max=arr[i];
        }
        int a[max+1];
        fill(a,a+(max+1),0);
  
        for(int i=0;i<n;i++)
        {
            index = arr[i];
            a[index]++;
        }
        for(int i=0;i<n;i++)
        {
            index = arr[i];
            if(a[index] > 1)
            return i+1;
        }
        return -1;
    }
