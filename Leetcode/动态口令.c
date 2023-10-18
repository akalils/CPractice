char* dynamicPassword(char* password, int target) {
    int numsSize = strlen(password);
    char *ret = malloc(sizeof(char) * numsSize + 1);
    for (int i = 0; i < numsSize; i++)
    {
        ret[i] = password[(i + target) % numsSize];
    }
    ret[numsSize] = '\0';
    return ret;    
}
