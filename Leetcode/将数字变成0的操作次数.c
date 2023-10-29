

// int numberOfSteps(int num){
//     int count = 0;
//     while (num != 0)
//     {
//         if (num % 2 == 0)
//         {
//             num = num / 2;
//             count++;
//         }   
//         else
//         {
//             num -= 1;
//             count++;
//         }  
//     }
//     return count;
// }
int numberOfSteps(int num)
{
    if (num == 0)
        return 0;
    if (num % 2 == 0)
        return numberOfSteps(num / 2) + 1;
    else    
        return numberOfSteps(num - 1) + 1;
}
