int n = floor(sqrt(N));
    bool p[n+1];
    memset(p,true,sizeof(p));
    int count = 0;
    for(int i = 2;i<n+1;i++)
    {
        for(int j = i*i;j<n+1;j+=i)
        {
            p[j] = false;
        }
    }
    for(int i = 2;i<n+1;i++)
    {
        if(p[i] == true)
        count++;
    }
    return count;
    }
