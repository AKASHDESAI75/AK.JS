// 1. HELLO WORLD PROGRAM
//  console.log("hello world")


//2. SUM OF TWO NUMBERS
// var a=1;
// var b=2;

// console.log(a+b)


// 3. LARGEST OF TWO NUMBERS
// var a=1;
// var b=3;
// if(a>b) {
//     console.log("largest number is a",a);
// } else {
//     console.log("largest number is b",b);
// }


// 4. EVEN OR ODD
// var a = 56;
// if(a%2==0) {
//     console.log("even");
// } else{
//     console.log("odd");
// }


// 5..  FACTORIAL OF A NUMBER
// var mul=1;
// i;
// var num = 3;
// for(var i=1;i<=num;i++){
// mul *=i;
// }
// console.log(mul,"is factorial of",num);


// // 6. Reverse a Number
// var ab = 123;

// console.log(bc)
// var cd = ' ';

// var reverse = 0;
// for(var i = bc.length-1;i>=0;i-- ){
//     cd += bc[i];
// }
// console.log(cd)



// // 7. Palindrome Check
// var str = 'madam';
// var rstr = '';

// for(var i = str.length -1;i>=0;i--){
//     rstr += str[i];
// }
// if(str == rstr){
//     console.log("palidrome")
// }else{
//     console.log("not palidrome")  
// }



//  8. Sum of Digit
// var  num = 123;

// var sum=0;
// while(num != 0){
//     var digit = num%10;
//     num = (num-digit)/10
//     sum = sum + digit;

// }
// console.log(sum)


// 9. Prime Number Check
// var num = 2;
// var count = 0;
// for(var i = 2;i<num;i++){
// if(num%i ==0){
//     count++;
// }

// }
// if(count>0){
//     console.log("not prime")
// }else{
//     console.log("prime")
// }



// 10. Fibonacci Sequence
// var giv_num= 5
// var first = 0;
// var sec = 1;
// var sum;
// for(var i =0;i<giv_num;i++){
//     sum =first +sec;

//     first = sec;
//     sec = sum;
// }
// console.log(sum)



//  11. Swapping Two Numbers
// var a = 9,b=7;

// a= a+b;
// b =a-b;
// a =a-b;
// console.log("a is ",a," b is ",b)



//  12. Swap Two Numbers Using Third Variable
// var a= 3,b =8,temp;
// temp = a;
// a= b;
// b =temp;
// console.log("a is ",a," b is ",b)



//  13. Leap Year Check
// var year = 1999;
// if(year%4 ==0 && year%100 != 0||year%400 == 0){
//     console.log(year," year is leap year")
// }else{
//     console.log(year," year is not leap year")
// }



//  14. Simple Calculator
// var a = 3,b =9;
// console.log("addition of",a," and ",b," is ",a+b);
// console.log("multiply of",a," and ",b," is ",a*b);
// console.log("division of",a," and ",b," is ",a/b);
// console.log("substraction of",a," and ",b," is ",a-b);



// 15. Sum of Array Elements
// var arr = [1,5,3,2,6,8,9];
// var sum = 0;
// for(var i = 0; i<arr.length; i++){
//     sum += arr[i];
// }
// console.log(sum);



//  16. Largest Element in an Array
// var arr = [2,4,6,2,40,6,7,7,8];
// var sort = arr.sort((a,b)=>a-b);
// console.log(sort)

// for (var i = 0; i<arr.length;i++){
//     for(var j = i+1;j<arr.length;j++){
//         if(arr[i]>arr[j]){
//             var digit = arr[i];
//             arr[i]= arr[j];
//             arr[j] = digit;
            
//         }
//     }

// }
// console.log(arr)



//  17. String Length
// var str ='abc';
// var len =0;
// for(var i =0;str[i] != undefined;i++){
//     len++
// }
// console.log(len);



//  18. String Reverse
// var str = 'abc';
// var rstr = '';
// for (var i= str.length-1;i>=0;i--){
//     rstr += str[i]
// }
// console.log(rstr)



//  19. GCD of Two Numbers
// var a = 9;
// var b = 27;
// var gcd;

// for(var i = 0;i<=a && i<=b;i++){
//     if(a%i ==0 && b%i == 0){
// gcd = i;

//     }
// }
// console.log(gcd)



//  20. LCM of Two Numbers
// var a = 9;
// var b = 27;
// var gcd;

// for(var i = 0;i<=a && i<=b;i++){
//     if(a%i ==0 && b%i == 0){
// gcd = i;

//     }
// }
// console.log(a*b/gcd)



//  21. ASCII Value of a Character
// var char = 'A';
// console.log("the ascii value of",char," is ",char.charCodeAt())



//  22. Convert Celsius to Fahrenheit
// var c = 89;
// var f = (c*9/5)+32
// console.log(f)



// 23. Convert Fahrenheit to Celsius
// var f = 192.2;
// var c = (f-32)*5/9
// console.log(c)



//  24. Sum of First N Natural Numbers
// var num =10;
// var sum =0;
// for(var i=0;i<=num;i++){
//     sum +=i;

// }console.log(sum)

// sum2= num*(num+1)/2
// console.log(sum2)



//  25. Check Vowel or Consonant
// var letter = 'A';
// var char = letter.toLowerCase();

// if(char == 'a'||char == 'e'||char == 'i'||char == 'o'||char == 'u'){
//     console.log(letter ," is vowel")
// }else{
//     console.log(letter ," is consonent ");
// }




//  26. Check Alphabet, Digit, or Special Character
// var letter ='8';
// var ascii = letter.charCodeAt();
// if((ascii>=65 &&ascii<=90)||(ascii>=97 && ascii<=122)){
//     console.log(letter," Is Alphabet")
// }else if((ascii>=48 && ascii<=57)){
//     console.log(letter," Is Digit")
// }else{
//     console.log(letter," Is Special Character")
// }


//  27. Count the Number of Digits in an Integer
// var number = 12594.95;
// var numb =parseInt(number);
// var num = numb.toString()
// console.log(num.length)



//  28. Reverse a String
// var str ='abcd';
// var rstr = '';

// for(var i =str.length-1;i>=0;i--){
//     rstr = rstr + str[i];
// }
// console.log(rstr)



//  29. Check the Alphabetic Order of Two Strings
// var str1 = 'apple';
// var str2 = 'ball';
// var ascii1 = str1.charCodeAt();
// var ascii2 = str2.charCodeAt();
// if(ascii2 == ascii1+1){
//     console.log("Alphabetic Order of Two Strings")

// }else{
//     console.log("not Alphabetic Order of Two Strings");
// }



//  30. Calculate the Power of a Number
// var num = 3;
// var power = 2;
// var mul = 1;
// for(var i =1 ; i<=power;i++){
//     mul *=num; 
// }
// console.log(mul)



//  31. Print All Prime Numbers Between Two Numbers
// var a= 3 ,b = 100;
// for(var i =a ;i<=b; i++){
//     var count = 0;
//     for(var j = 2 ; j< i ; j++){
//         if(i%j == 0){
//             count++
//         }
//     }
//     if(count == 0){
//         console.log("prime  ",i)
//     }
// }



//  32. Check Armstrong Number
// var  num = 153, num1 = num,len= num.toString().length;var sum = 0;

// while(num != 0){
//     var digit = num%10;
//     var mul = digit**len;
//     sum += mul;
//     num = (num-digit)/10;

// }
// if(sum == num1){
//     console.log("armstrong",sum)
// }else{
//     console.log("not armstrong ",num1)
// }



// 33. Calculate the Average of Numbers in an Array
// var array =[18,15,9,4,6];
// var sum = 0;

// var length = array.length
// for(var i = 0;i<length;i++){
// sum += array[i];

// }
// console.log("average is ",sum/length)




//  34. Find the Second Largest Number in an Array
// var array = [1,9,2,8,30,7,6,4,5];

// for(var i =0;i<array.length;i++){
//     for(var j =i+1;j<array.length;j++){
//         if(array[i]>array[j]){
//             var digit = array[i];
//             array[i] = array[j];
//             array[j]= digit
//         }
//     }
// }

// console.log(array[array.length-2])




//  35. Check If a Number is a Perfect Square
// var num = 7;

// var power = Math.sqrt(num)
// var pow = parseInt(power);
// if((pow*pow) == num){
//     console.log("power of ",num," is ", pow)
// }else{
//     console.log("not perfect squre")
// }





