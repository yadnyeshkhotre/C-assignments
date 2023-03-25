//C++ Operators
//Assignment Solutions

/*Q1 - Write a program to check whether two numbers (entered by user) are equal or not (0 for not equal, 1 for equal)
Sample Input 1: 1, 2
Sample Output 1: 0*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num1,num2;
//     cout<<"Hey user please enter the value of num1: ";
//     cin>>num1;
//     cout<<"Hey user please enter the value of num2: ";
//     cin>>num2;
//     cout<<(num1==num2);
//     return 0;
// }


/*Q2 - Write a program to take the values of two variables a and b from the keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.
Sample Input 1 : 1, 2
sample output:1
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num1,num2,condition1,condition2;
//     cout<<"Hey user please enter the value of num1: ";
//     cin>>num1;
//     cout<<"Hey user please enter the value of num2: ";
//     cin>>num2;
//     cout<<((num1<50)&&(num1<num2))?1:0;
//     return 0;
// }



/*Q3 - There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".
Sample Input : 45
Sample Output : 19*/

// #include<iostream>
// using namespace std;

// int main(){
//     int totlaGirls, totalBoys, totalStudent=45,totalBoysGettingA=17,totalGirlsWithA=0,totalStudentGettingA=0;
//     totalBoys=25;
//     totlaGirls=45-25;

//     cout<<"There are "<<totalStudent<<" students in the class out of which "<<totalBoys<<" are boys and "<<totlaGirls<<" are girls"<<endl;

//     totalStudentGettingA=(80*45)/100;
//     totalGirlsWithA=totalStudentGettingA-totalBoysGettingA;

//     cout<<"girls received grades A : "<<totalGirlsWithA<<endl;
//     return 0;
// }


/*Q4 - Write a program to calculate the sum of the first and the second last digit of a 5 digit number. Sample Input : 12345
Sample Output : 1+4=5
*/

// #include<iostream>
// using namespace std;

// int main(){
//     int num,firstDigit,secondDigit,thirdDigit,forthDigit,fifthDigit,sum=0;

//     cout<<"Please enter a 5 digit number: ";
//     cin>>num;

//     firstDigit=num/10000;

//     num=num%10000;
    
//     secondDigit=num/1000;
//     num=num%1000;

//     thirdDigit=num/100;
//     num=num%100;

//     forthDigit=num/10;

//     fifthDigit=num%10;
// sum = firstDigit + forthDigit;
// cout << "sum of first and fourth digit is: " << sum << endl;
// return 0;
// }


// Q5 - write a program to calculate the sum of digits of a 3 digit number.
// #include <iostream>
// using namespace std;
// int main()
// {
// int n, first, second, third,sum;
// n = 524;
// /*Take out each digit of this number and then finally add the digits*/
// first = n/100; //first digit
// n = n%100;
// second = n/10; //second digit
// third = n%10; //third digit
// sum = first + second + third;
// cout << "sum of 3 digits is: " << sum << endl;
// return 0;
// }




// Q6 - Design a calculator to perform basic arithmetic operations (+,-,/,*)
// # include <iostream>
// using namespace std;
// int main() {
// float num1, num2;
// cout << "Enter the first number ";
// cin >> num1;
// cout << "Enter the second number ";
// cin >> num2;
// cout << "Sum = " << num1 + num2<<endl;
// cout <<"Difference = " << num1 - num2<<endl;
// cout <<"Product = " << num1 * num2<<endl;
// cout << "Division = " << num1 / num2<<endl;
// return 0;
// }