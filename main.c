#include <stdio.h>

- Check Even or Odd
Input a number and print whether it’s even or odd.
🔹 Bonus: Use modulo and bitwise operator both


int main(){
    int x;
    printf("enter the num : ");
    scanf("%d", &x);
    if (x%2 == 0){
        printf("Number is even\n");
    }
    else{
        printf("Number is odd\n");
    }
    return 0;
}

- Positive, Negative, or Zero
Take an integer and classify it.
🔹 Bonus: Use nested if to avoid else if


int main(){
    int x ;
    printf("enter the num: ");
    scanf("%d", &x);
    if (x > 0){
        printf("Positive number.");
    }
    if (x < 0){
        printf("Negative number.");
    }
    if (x == 0){
        printf("Zero");
    }
    return 0;
}

- Grade Calculator
Input marks and print grade (A, B, C, D, F).
🔹 Bonus: Add input validation (0–100 only)


int main(){
    int marks;
    printf("Enter the marks: ");
    scanf("%d", &marks);

    if (marks >= 90){
        printf("GRADE = A\n");
    }
    else if(marks >= 80){
        printf("GRADE = B\n");
    }
    else if(marks >= 70){
        printf("GRADE = C\n");
    } 
    else {
        printf("GRADE = F\n");

    }
    return 0;
}

int main(){
    int number;
    printf("Enter the marks: ");
    scanf("%d", &number);
    if (number > 30){
        printf("PASS!");
    } else{
        printf("FAIL");
    }
    return 0;
}

int main(){
    int x;
    printf("Enter the num: ");
    scanf("%d",&x);
    x % 2 == 0 ? printf("EVEN") : printf("ODD"); 
    return 0;
}


int main(){
    int x;
    printf("Enter the num: ");
    scanf("%d", &x);
    switch (x){
        case 1: printf("Hello World!");
        break;
        case 2: printf("Have a nice day");
        break;
        default: printf("Bye!!!");
    }
    return 0;
}


int main(){
    char ch;
    printf("Enter the letter: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z'){
        printf("UPPERCASE");
    }
    else if(ch >='a' && ch <='z'){
        printf("LOWERCASE");
    }
    else{
        printf("Wrong letter!! Only english letter is valid.");
    }
    return 0;
}

int main(){
    for(int i=100; i>=1; i -=1){
        printf("%d\n", i);
    }
    return 0;
}


int main(){
    for (float i = 1.0; i <= 6.0; i++){
        printf("%f\n",i);
    }
    for (char ch = 'a'; ch <= 'z'; ch++){
        printf("%c\n",ch);
    }
    return 0;
}

int main(){
    int i = 20;
    while (i<=26)
    {
        printf("Hello world!\n");
        i++;
    }
    return 0;
}

int main(){
    int n;
    int i = 1;
    printf("Enter the num: ");
    scanf("%d", &n);
    while(i<=n){
        printf("%d\n",i);
        i++;
    }
    return 0;
}


int main(){
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    for(int i = 1; i <=n; i++){
        printf("%d\n",i);
    }
}

int main(){
    for (int i = 1; i <= 100; i++){
        if (i%2==0){
            printf("%d: Even\n",i);
        }
        else{
            printf("%d: Odd \n",i);
        }
    }
    return 0;
}

int main(){
    for (int i = 1;i<=100;i++){
        if (i % 2== 0){
        printf("%d\n",i);
    }
    }
    return 0;
}

int main () {
    int i = 1;
    while(i <= 100){
        if (i%3 == 0){
            printf("%d\n",i);
        }
        i++;

    }
    return 0;
}

int main(){
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}

int main(){
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    for(int i = 1; i <= 100; i++){
        if(n%i == 0){
            printf("%d\n",i);
        }
    }

    return 0;
}

int main(){
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 0;i<= n; i++){
        sum = sum + i;

    }
    printf("Sum is %d", sum);
    return 0;
}

int main(){
    int n;
    
    do{
        printf("Enter the num: ");
        scanf("%d",&n);
        if (n%2 != 0){
            printf("%d= odd\n", n);
            break;
        }else{
            printf("%d \n",n);
        }
    
    } while(1);
    return 0;
}

int main(){
    int n;
    printf("Enter the num: ");
    scanf("%d",&n);
    if (n % 2 == 0){
        printf("Even=%d\n",n);
    }else{
        printf("Odd=%d\n",n);
    }
    return 0;
}



int main() {
    int user;
    printf("Enter the num: ");
    scanf("%d", &user);  // ✅ Input lena

    if (user % 2 == 0) {
        printf("%d is an even.\n", user);  // ✅ Even check
    } else {
        for (int i = 1; i <= 10; i++) {  // ✅ Loop from 1 to 10
            printf("%d x %d = %d\n", user, i, user * i);  // ✅ Table print
        }
    }

    return 0;
}

