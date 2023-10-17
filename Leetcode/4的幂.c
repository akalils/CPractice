

bool isPowerOfFour(int n){
    if (n == 0)
        return false;
    if (n == 1073741824)
        return true;
    for (int i = 1; i < 1073741824; i *= 4)
    {
        if (n == i)
            return true;
    }
    return false;
}
