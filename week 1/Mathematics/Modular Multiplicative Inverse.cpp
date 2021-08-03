int modInverse(int a, int m)
    {
        for (int x = 1; x < m; x++)
        {
        if (((a%m) * (x%m)) % m == 1)
            return x;
        }
        return -1;
    }
