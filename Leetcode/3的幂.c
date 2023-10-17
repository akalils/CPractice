

bool isPowerOfThree(int n){
    if (n == 0)
        return false;
    if (n == 1162261467)
        return true;
    for (int i = 1; i != 1162261467; i *= 3)
    {
        if (i == n)
            return true;
    }
    return false;
}
