void rotateArr(int arr[], int d, int n)
{
        // code here
        reverse(arr,0,d-1);
        reverse(arr,d,n-1);
        reverse(arr,0,n-1);
    }
    void reverse(int a[],int l,int r)
    {
        while(l < r)
        {
            swap(a[l],a[r]);
            l++;
            r--;
        }
    }
