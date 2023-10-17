int peakIndexInMountainArray(int* arr, int arrSize){
    int max = arr[0];
    int index = 0;
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];   
            index = i;
        }
            
    }
    return index;
}
