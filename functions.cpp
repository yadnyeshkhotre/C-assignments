//C++ Program to add two numbers using functions
// #include <iostream>
// using namespace std;
// int addition(int a, int b){
//     int add = a + b;
//     return add;
// }

// int main(){
//     int a,b;
//     cout<<"Enter any two number:";
//     cin>>a>>b;
//     int result=addition(a,b);
//     cout<<result;
// }










// Prototypes:
// #include <iostream>
// using namespace std;

// function prototype
// int sub(int a,int b);

// int main(){
//     int difference;
//     difference=sub(200,100);
//     cout<<difference<<endl;
//     return 0;
// }

//function definition
// int sub(int x, int y) {
// return (x - y);
// }










//Example of Standard Library Functions
// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
// cout<<("Square root of 16 is: ")<< sqrt(16);
// }













// function with same name but differet set of parameter and datatypes:
// #include <iostream>
// using namespace std;

// int add(int num1, int num2){
//     int sum=num1+num2;
//     return sum;
// }

// int add(int num1, int num2,int num3){
//     int sum=num1+num2+num3;
//     return sum;
// }

// float add(float num1, float num2){
//     float sum=num1+num2;
//     return sum;
// }

// int main(){
//     int a=5;
//     int b=15;
//     int c=25;

//     float d=2.2;
//     float e=2.4;

//     cout<<add(a,b)<<endl;

//     cout<<add(a,b,c)<<endl;

//     cout<<add(d,e)<<endl; 
//     return 0;
// }
 







//Write a function to print squares of the first 5 natural numbers.

// #include <iostream>
// using namespace std;

// int square(int num)
// {
//     int sq=num*num;
//     return sq;
// }


// int main()
// {
//     for(int i=1;i<=5;i++)                    
//     {
//         cout<<square(i)<<" ";
//     }
// }












//Q2 - Given radius of a circle. Write a function to print the area and circumference of the circle.

// #include <iostream>
// using namespace std;

// double circum(int r)
// {
//     double cir=2*3.14*r;
//     return cir;
// }

// double area(int r)
// {
//     double ar=3.14*r*r;
//     return ar;
// }

// int main()
// {
//     cout<<"Enter the radius : ";
//     int r;
//     cin>>r;
//     cout<<"Area : "<<area(r)<<endl;
//     cout<<"Circumference : "<<circum(r);
// }



#include<iostream>
#include<math.h>
using namespace std;
 
 void check(int age){
    if (age>=18){
        cout<<"You are eligible"<<endl;

    }
    else{
        cout<<"you are not eligible"<<endl;
    }
 }
 int main(){
    int age;
    cout<<"Enter age"<<endl;
    cin>>age;
    check(age);
 }








//Q3 - ven the age of a person, write a function to check if the person is eligible to vote or not.
// #include<iostream>
// using namespace std;

// void vote(int age){
//     if(age>=18){
//         cout<<"You are eligible to vote";
//     }
//     else{
//         cout<<"You are not eligible to vote";
//     }

// }

// int main(){
//     int age;
//     cout<<"Please enter you age:";
//     cin >> age;
//     vote(age);
// }
















//- Given two numbers a and b, write a program to print all the prime numbers present between a and b.
// #include <iostream>
// using namespace std;
// bool prime(int num)
// {
// for(int i=2;i<num;i++)
// {
// if(num%i==0)
// {
// return false;
// }
// }
// return true;
// }
// int main()
// {
// int a;
// int b;
// cout<<"Enter the two numbers : ";
// cin>>a>>b;
// for(int i=a;i<=b;i++)
// {
// if(prime(i)){
// cout<<i<<" ";
// }
// }
// }