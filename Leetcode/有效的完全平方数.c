bool isPerfectSquare(int num){
    long long p;
    for (int i = 1; ; i++)
    {
        p = (long long)i * i;
        if (p == num)
            return true;
        if (p > num)
            return false;
    }
    return false;
}
