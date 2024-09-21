// 1. Hello world programe
// # include <stdio.h>
//  int main(){
//      printf("hello world");
//      return 0;
//  }


// 2. SUM OF TWO NUMBERS
// # include <stdio.h>
// int main() {
//     int a = 1;
//     int b = 2;
    
//     printf("%d",a+b);
//     return 0;
// }


// 3. Largest of Two Numbers
//#include <stdio.h>
//int main(){
//	int a;
//	int b;
//	scanf("%d",&a);
//	scanf("%d",&b);
//	if(a>b){
//		printf("%d is largest number",a);
//	}else{
//		printf("%d is largest number",b);
//	}
//	return 0;
//}


//4. Even or Odd
//#include <stdio.h>
//int main() {
//	int num;
//	scanf("%d",&num);
//	if (num%2==0){
//		printf("%d is even",num);
//	}else{
//		printf("%d is odd",num);
//	}
//	return 0;
//}


//5. Factorial of a Number
//#include <stdio.h>
//int main(){
//	int fectorial=5;
//	int sum=1;
//	int i=0;
//	for (i=1;i<=fectorial;i++){
//		sum=sum*i;
//	}
//	printf("%d",sum);
//	return 0;
//}


//6. Reverse a Number
//#include <stdio.h>
//int main() {
//	int a;
//	int revers=0;
//	int rem;
//	printf("Enter Number : ");
//	scanf("%d",&a);
//	while(a!=0){
//		rem=a%10;
//		revers =revers*10+rem;
//		a=a/10;
//	}
//	printf("%d",revers);
//}



//7. Palindrome Check
//#include<stdio.h>  
// int main(){    
//	int n;
//	int sum=0;
//	int m; 
//	int tem;   
//	printf("Enter a number:");    
//	scanf("%d",&n);   
//	tem=n; 
//	while(n>0){    
//	m=n%10;    
//	sum=(sum*10)+m;    
//	n=n/10;    
//	}    
//	if(tem==sum){
//		printf("Number is Palindrom");
//	} else{
//		printf("Number is not Pelindrom");
//	}
//	return 0; 
//} 


//8. Sum of Digits
//#include <stdio.h>  
// int main(){    
//int n;
//int sum=0;
//int m;    
//printf("Enter a number:");    
//scanf("%d",&n);    
//while(n>0)    
//{    
//m=n%10;    
//sum=sum+m;    
//n=n/10;    
//}    
//printf("%d",sum);    
//return 0;  
//} 


//10. Fibonacci Sequence
//Write a program to print the Fibonacci sequence up to a given number of terms.

//#include <stdio.h>
//int main(){
//	int n;
//	int i;
//	int first=0;
//	int second=1;
//	printf("Enter the number of terms in the Fibonacci sequence: ");
//	scanf("%d",&n);
//	for (i=0;i<n;i++){
//		if(i==0){
//			printf("%d",first);
//		}else if(i==1){
//			printf("%d",second);
//		}else{
//			int next=first+second;
//			printf("%d",next);
//			first=second;
//			second=next;
//		}
//	}
//	printf("\n");
//	return 0;
    //}


//
//METHOD=2
//#include <stdio.h>
//int main() {
//	int a=0;
//	int b=1;
//	int i=0;
//	int n;
//	printf("Enter Term value :");
//	scanf("%d",n);
//	for(i=1;i<=n;i++){
//		int c=a+b;
//		printf("%d",c);
//		a=b;
//		b=c;
//	}
//	printf("%d",n);
//}


//11. GCD of Two Numbers
//#include <stdio.h>
//int main() {
//    int a = 100;
//    int b = 300;
//    int x;
//    int y;
//    int i;
//    int gcd = 1;
//
//    for(i = 2; i <= a && i <= b; i++){  
//        if(a % i == 0 && b % i == 0){
//            gcd = i;
//        }
//    }
//    printf("GCD : %d\n",gcd);
//    return 0;
//}


//12. LCM of Two Numbers
//#include <stdio.h>
//int main() {
//    int a = 100;
//    int b = 300;
//    int x;
//    int y;
//    int i;
//    int gcd = 1;
//
//    for(i = 2; i <= a && i <= b; i++){  
//        if(a % i == 0 && b % i == 0){
//            gcd = i;
//        }
//    }
//    x = a / gcd;
//    y = b / gcd;
//
//    printf("GCD: %d\n", gcd);
//    printf("LCM: %d\n", gcd * x * y);
//
//    return 0;
//}



//13. Leap Year Check
//#include <stdio.h>
//int main() {
//	int year;
//	scanf("%d",&year);
//	if(year%4==0){
//		printf("%d is leap year",year);
//	}else{
//		printf("%d is not leap year",year);
//	}
//  return 0;
//}



//14. Simple Calculator
//#include <stdio.h>
//int main() {
//	int a;
//	printf("Enter first number :  ");
//	scanf("%d",&a);
//	int b;
//	printf("Enter second number:  ");
//	scanf("%d",&b);
//
//	printf("%d\n",a+b);
//	printf("%d\n",a-b);
//	printf("%d\n",a*b);
//	printf("%d\n",a/b);
//  return 0;
//}



//15. Sum of Array Elements
//#include <stdio.h>
//int main() {
//	int arr[]={3,2,46,2,4};
//	int sum=0;
//	int len=sizeof(arr)/sizeof(arr[0]);
//	int i;
//	for (i=0;i<len;i++){
//		sum=sum+arr[i];
//	}
//	printf("%d",sum);
//	return 0;
//}

//16. Largest Element in an Array
//#include <stdio.h>
//int main() {
//	int arr[]={1,2,3,6,5};
//	int len=sizeof(arr)/sizeof(arr[0]);
//	if(arr[0]>arr[1] && arr[0]>arr[2] && arr[0]>arr[3] && arr[0]>arr[4]){
//		printf("%d",arr[0]);
//	}else if (arr[1]>arr[0] && arr[1]>arr[2] && arr[1]>arr[3] && arr[1]>arr[4]){
//		printf("%d",arr[1]);
//	}else if (arr[2]>arr[0] && arr[2]>arr[1] && arr[2]>arr[3] && arr[2]>arr[4]){
//		printf("%d",arr[2]);
//	}else if (arr[3]>arr[0] && arr[3]>arr[1] && arr[3]>arr[2] && arr[3]>arr[4]){
//		printf("%d",arr[3]);
//	}else{
//		printf("%d",arr[4]);
//	}
//	return 0;
//}


//17. String Length
//#include <stdio.h>
//int main() {
//	char str[]="Arya";
//	int len=sizeof(str)/sizeof(str[0]);
//	len=len-1;
//	printf("%d",len);
//}

//#include <stdio.h>
//int main(){
//	char str[] = "Arya";
//	int count = 0;
//	int i = 0;
//	while(str[i]!= '\0'){
//		count = count + 1;
//		i++;
//	}
//	printf("%d",count);
//  return 0;
// }


//18. String Reverse
//Write a program to reverse a string.

//#include <stdio.h>
//#include <string.h>
//int main(){
//	char str[] = "Arya";
//	int i;
//for(i=strlen(str)-1;i>=0;i--){
//	printf("%c",str[i]);
//}
//	return 0;
//}

//19. Swapping Two Numbers
//#include <stdio.h>
//int main(){
//	int a;
//	printf("Enter a value :  ");
//	scanf("%d",&a);
//	int b;
//	printf("Enter b value :  ");
//	scanf("%d",&b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	
//	printf("a = %d\n",a);
//	printf("b = %d\n",b);
//  return 0;
//}

//20. Swap Two Numbers Using Third Variable
//#include <stdio.h>
//int main() {
//	int c;
//	int a;
//	printf("Enter a value : ");
//	scanf("%d",&a);
//	int b;
//	printf("Enter b value : ");
//	scanf("%d",&b);
//	
//	c=a;
//	a=b;
//	b=c;
//	printf("a=%d\n",a);
//	printf("b=%d\n",b);
//  return 0;
//}

//21. ASCII Value of a Character
//#include <stdio.h>
//int main(){
//	char A;
//	printf("Enter a charector : ");
//	scanf("%c",&A);
//	printf("The ASCII value of '%c' is %d\n",A,(int)A);
//	return 0;
//}


//22. Convert Celsius to Fahrenheit
//#include <stdio.h>
//int main(){
//	int tem;
//	printf("Enter fahrenheit temprecture :");
//	scanf("%d",&tem);
//	int c=(tem*9/5)+32;
//	printf("%d",c);
//  return 0;
//}


//23. Convert Fahrenheit to Celsius
//#include <stdio.h>
//int main(){
//	int tem;
//	printf("Enter fahrenheit temprecture :");
//	scanf("%d",&tem);
//	int c=(tem-32)*5/9;
//	printf("%d",c);
//  return 0;
//}

//24. Sum of First N Natural Numbers
//int main(){
//	int num;
//	printf("Enter value :");
//	scanf("%d",&num);
//	int i=0;
//	int sum=0;
//	for (i=1;i<=num;i++){
//		sum=sum+i;
//	}
//	printf("%d",sum);
//	return 0;
//}


//25. Check Vowel or Consonant
//#include <stdio.h>
//
//int main() {
//    char ch;
//
//    printf("Enter a character: ");
//    scanf("%c", &ch);
//
//    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
//        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
//        printf("The character '%c' is a vowel.\n", ch);
//    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
//        printf("The character '%c' is a consonant.\n", ch);
//    } else {
//        printf("The character '%c' is not a letter.\n", ch);
//    }
//
//    return 0;
//}


//26. Check Alphabet, Digit, or Special Character
//#include <stdio.h>
//int main(){
//	char ch;
//	printf("Enter a value : ");
//	scanf("%c",&ch);
//	if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')){
//		printf("%c is Alphabet",ch);
//	}else if(ch<=9 && ch>=1){
//		printf("%c is Digit",ch);
//	}else{
//		printf("%c is special cheracter",ch);
//	}
//  return 0;
//}





























