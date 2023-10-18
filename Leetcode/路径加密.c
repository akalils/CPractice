char* pathEncryption(char* path) {
    int numsSize = strlen(path);
    int returnSize = 0;
    char *ret = malloc(sizeof(char) * 10000);
    for (int i = 0; path[i] != '\0'; i++)
    {
        if (path[i] == '.')
        {
            ret[returnSize++] = ' ';
        }
        else
        {
            ret[returnSize++] = path[i];
        }
    }
    ret[returnSize] = '\0';
    return ret;
}
