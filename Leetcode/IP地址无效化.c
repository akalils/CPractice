

char * defangIPaddr(char * address){
    int numsSize = strlen(address);
    char *ret = malloc(sizeof(char) * numsSize * 2);
    int returnSize = 0;
    for (int i = 0; address[i] != '\0'; i++)
    {
        if (address[i] == '.')
        {
            ret[returnSize++] = '[';
            ret[returnSize++] = '.';
            ret[returnSize++] = ']';
        }
        else
        {
            ret[returnSize++] = address[i];
        }
    }
    ret[returnSize] = '\0';
    return ret;
}
