#include <stdio.h>
1.task
int main(){
    printf("Hello World!\n");
    return 0;
}

2.task
void calculator(int a, int b);
int main(){
    calculator(12,2);
    return 0;
}

void calculator(int a,int b){
    int Addition = a+b;
    printf("Addition: %d\n",Addition);
    int Subtract = a-b;
    printf("Subtract: %d\n",Subtract);
    int Multiplication = a*b;
    printf("Multiplication: %d\n",Multiplication);
    int Division = a/b;
    printf("Division: %d",Division);
}

3.task

void check_even_or_odd(int n);

int main(){
    check_even_or_odd(12);
    return 0;
}

void check_even_or_odd(int n){
    if (n%2 == 0){
        printf("%d is an even number.",n);
    }else{
        printf("%d is a odd number.",n);
    }
}


4.task 

void check_largest_num(int a, int b);
int main(){
    check_largest_num(2,3);
    return 0;
}

void check_largest_num(int a,int b){
    if (a>b){
        printf("%d is greater then %d",a,b);
    }else{
        printf("%d is greater then %d",b,a);
    }
}


5.task 

void check_neg_pos_zero(int n);

int main(){
    check_neg_pos_zero(0);
    check_neg_pos_zero(12);
    check_neg_pos_zero(-12);
    return 0;
}

void check_neg_pos_zero(int n){
    if (n > 0){
        printf("%d is positive.\n",n);
    }else if (n < 0){
        printf("%d is negative.\n",n);
    }else{
        printf("%d is zero\n",n);
    }
    
}


6.task 

void grade_calculate(int math, int eng, int hindi,int phy, int che);
int main(){
    grade_calculate(40,40,40,40,40);
    grade_calculate(90,80,58,90,90);
}

void grade_calculate(int math, int eng, int hindi,int phy,int che){
    if ((math+eng+hindi+phy+che)/5 >= 60){
        printf("Grade : PASS \n");
    }else{
        printf("Grade : FAIL \n");
    }
}
