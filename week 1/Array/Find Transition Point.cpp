int transitionPoint(int arr[], int n) {
    int l = 0,r=n-1;
     while(l<=r)
    {   int mid=(l+r)/2;
        if(arr[mid]==1 && arr[mid-1]!=1)
         return mid;
        if(arr[mid]==1)
          r=mid-1;
        else
         l=mid+1;
    } 
    return -1;   
}
