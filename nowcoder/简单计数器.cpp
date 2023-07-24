////
//// Created by 黎圣  on 2023/7/20.
////
//#include <stdio.h>
//
//int main() {
//    double n1, n2;
//    char op = 0;
//    while(scanf("%lf %c %lf", &n1, &op, &n2) != EOF)
//    {
//        switch(op)
//        {
//            case '+':
//                printf("%.4lf+%.4lf=%.4lf", n1, n2, n1+n2);
//                break;
//            case '-':
//                printf("%.4lf-%.4lf=%.4lf", n1, n2, n1-n2);
//                break;
//            case '*':
//                printf("%.4lf*%.4lf=%.4lf", n1, n2, n1*n2);
//                break;
//            case '/':
//                if (n2 == 0.0)
//                    printf("Wrong!Division by zero!\n");
//                else
//                    printf("%.4lf/%.4lf=%.4lf", n1, n2, n1/n2);
//                break;
//            default:
//                printf("Invalid operation!\n");
//        }
//    }
//    return 0;
//}