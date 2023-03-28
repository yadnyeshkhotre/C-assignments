//Assignment no 3

//Q1- Write a program which takes the values of length and breadth from user and check if it is a square or not.
// #include<iostream>
// using namespace std;

// int main(){
//     int length,breadth;
//     cout<<"Enter Lenght and Breadth: "<<endl;
//     cin >> length >> breadth;
//     if(length==breadth) {
//         cout<<"It is a square"<<endl;
//     }
//     else
//     {
//         cout<<"It is a rectangle"<<endl;
//     }
//     return 0;
// }

//Q2- Write a program to print absolute value of a number entered by the user.
// #include<iostream>
// using namespace std;

// int main ()
// {
//     int x;
//     cout<<"Please enter a number: ";
//     cin >> x;
//     if(x<0){
//         x*=-1;
//     }
//     cout<<"Absolute value of x = "<<x;
//     return 0;
// }

//Q3- Write a program to take input from user for Cost Price (C.P.) and Selling Price (S.P.) and calculate Profit or Loss.
// #include<iostream>
// using namespace std;

// int main(){
//     int costPrice,sellingPrice,profit=0,loss=0;
//     cout<<"Cost Price: ";
//     cin >> costPrice;
//     cout<<"sellingPrice: ";
//     cin >>sellingPrice;

//     if(sellingPrice > costPrice){
//         profit=sellingPrice-costPrice;
//         cout<<"profit: "<<profit<<endl;
//     }
//     else if(sellingPrice < costPrice){
//         loss=costPrice-sellingPrice;
//         cout<<"loss: "<<loss<<endl;
//     }
//     else{
//         cout<<"No profit no loss";
//     }
//     return 0;
// }

//Q4- Create a calculator using switch statement to perform addition, subtraction, multiplication and division.
// #include<iostream>
// using namespace std;

// int main(){
//     char op;
//     float num1,num2;
//     cout<<"Enter an operator (+,-,*,/) : ";
//     cin>>op;
//     cout<<"Enter two numbers :"<<endl;
//     cin>>num1>>num2;
    
//     switch(op){
//         case '+':
//         cout<<num1+num2;
//         break;
//         case '-':
//         cout<<num1-num2;
//         break;
//         case '*':
//         cout<<num1*num2;
//         break;
//         case '/':
//         cout<<num1/num2;
//         break;
//         default:
//         cout<<"operator doesn't match with any case constant (+, -, *, /) "<<endl;
//         break;
//     }
//     return 0;

// }

//Q5- Write a program to calculate marks to grades . Follow the conversion rule as given below :
// #include <iostream>
// using namespace std;
// int main(){
// int marks;
// cout<<"Enter Your Marks: ";
// cin>>marks;
// if (marks >= 90){
// cout<<"Your Grade is A+";
// }
// else if (marks >= 80){
// cout<<"Your Grade is A";
// }
// else if (marks >= 70){
// cout<<"Your Grade is B+";
// }
// else if (marks >= 60){
// cout<<"Your Grade is B";
// }
// else if (marks >= 50){
// cout<<"Your Grade is C";
// }
// else if (marks >= 40){
// cout<<"Your Grade is D";
// }
// else if (marks >= 30){
// cout<<"Your Grade is E";
// }
// else if (marks <= 30){
// cout<<"Your Grade is F";
// }
// else{
// cout<<"Enter Valid Marks";
// }
// return 0;
// }