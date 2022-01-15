int digitsInFactorial(int N)
    {
        
        if(N==0 || N==1)
        return 1;
        
       int x = ((N * log10(N / M_E) + log10(2 * M_PI * N) /2.0));
       
       return floor(x) + 1;
    }
