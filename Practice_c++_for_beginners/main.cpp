
/*
// basics explained and first “Hello World” program

#include <iostream>
using namespace std;

int main() {
cout << "Hello world!\n" ; // this will output to the  console hello world
cout << "My nsme is Ahmed\n";
cout << "Today is friday";
cout << "Have a nice day";
   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
//  Introduction to variables  Rules for naming variables

#include <iostream>
using namespace std;

int main() {
float annualSalary;
cout << "please enter your annual salary ";
cin >> annualSalary;
float monthlySalary = annualSalary / 12;
cout << "Your monthly salary is " << monthlySalary << endl;
cout << "In 10 years you will earn " << annualSalary * 10;

char character = 'a';
float firstSecondThird;
   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// Data types in C++ and how to use sizeof operator
#include <iostream>
using namespace std;

int main() {
int yearOfBirth = 1999;
char gender = 'M';
bool isOlderThen18 = true;
float averageGrade = 4.5;
double balance = 45678945856;

//  sizeof operator of Data Types
cout << "size of in is " << sizeof(int) << " byts\n";
// -1, -2, -3, ....... -2147483648 
cout << "INT MIN value is " << INT_MIN << endl;
// 0, 1, 2, 3, .......2147483647
cout << "INT MAX value is " << INT_MAX << endl;
cout << "zise of unsigned int is " << sizeof(unsigned int) << " bytes\n";
cout << "UInt max vlaue is " << UINT_MAX << endl;
cout << "size of bool is " << sizeof(bool) << " bytes\n";
cout << "size of char is " << sizeof(char) << " bytes\n";
cout << "size of  float is " << sizeof(float) << " bytes\n";\
cout << "size of double is " << sizeof(double) << " bytes\n";

   return 0;
}
*/


/*

// Data type overflow

#include <iostream>
using namespace std;

int main() {

   int intMax = INT_MAX;
   cout << intMax << endl;
   cout << intMax + 1;


   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// What is ASCII table
// ASCII stands for "American Standard Code for Information Interchange"

#include <iostream>
using namespace std;

int main() {

cout << (int)'a' << endl;
cout << int ('a') << endl;
cout << int ('A') << endl;
cout << char (65) << endl;

   return 0;
}
*/

/*
// Simple, fun program for ciphering words into ASCII
#include <iostream>
using namespace std;
int main() {

char c1, c2, c3, c4, c5;
cout << "Enter 5 letters: ";
cin >> c1 >> c2 >> c3 >> c4 >> c5;
cout << "'ASCII massege: " << int(c1) << " " << int(c2) 
<< " " << int(c3) << " " << int(c4) << " " << int(c5);
cout  << endl;

// this is my own thing 
int n1, n2, n3, n4, n5;
cout << "Enter 5 numbers: ";
cin >> n1 >> n2 >> n3 >> n4 >> n5;
cout << "'ASCII massege: " << char(n1) << " " << char(n2) 
<< " " << char(n3) << " " << char(n4) << " " << char(n5);


   return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// If/else statement (Build a program that checks odd/even numbers + flowchart explanation)  

#include <iostream>
using namespace std;

int main() {

// user enters integer numbers 
// program write out if that number is even or odd
int number;
cout << "please enter whole number: ";
cin >> number;

if (number % 2 == 0){

cout << "you have entered even number." << endl;

}
else{
   cout << "you have entered odd number. " << endl;
}
cout << "Thanks, Bye.";


   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
//  Nested if/else statement (Build a program that determines the type of a triangle + flowchart) 

#include <iostream>
using namespace std;

int main() {
// user enters side lengths of a triangle (a,b,c)
// program should write out wether that triangle is equilateral isosceles or scalene

float a,b,c;
cout << "Enter a, b, c:";
cin >> a >> b >> c;

if (a==b && b==c)

   cout << "Equilateral triangle";

else{
   if (a!=b && a!=c && b!=c)
   
      cout << "scalene triangle";
   
   else
      cout << "Isosceles triangle";
   
}
   return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// Operators in C++ (arithmetic, relational, logical, assignment operators)
#include <iostream>
using namespace std;

int main() {

// arithmatic operators or bianry +, _ , *, /, %
 cout << 5 + 2 << endl;
 cout << 5 / 2 << endl;//2
 cout << 5.0 / 2.0 << endl;
 cout << 5 % 2 << endl;//1

 // unary operators n++, _ _ 
 int counter = 7;
 counter++;
 cout << counter << endl;
 counter--;
 cout << counter << endl;
 
 // post increment oprator
 int counter2 = 7;
 cout << counter2++ << endl;
 // pere increment oprator
 int counter3 = 7;
 cout << ++counter3 << endl;
 cout << counter3-- << endl;
 cout << counter3 << endl;


 //  Relations operators<, >, <=, >=, ==, !=
 int a = 5, b = 5;
 cout << (a > b) << endl;
 cout << ( a <= b) << endl;
 cout << (a != b);
 cout << endl;

 // Logicl operators &&, ||, !
 int c = 5, d = 8;
 //cout << (c == 5 && d == 5) << endl;
 //cout << (c == 5 || d == 5) << endl;
 //cout << !(c == 5 || d == 5);
 cout << (c == 5 && d == 5+3);
 cout << endl;
 // assignment operators =, +=, *=, /=, %=
 int x = 5;
 x -= 7;
 // x = x + 7;
 cout << x << endl;




   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// Swapping values of two variables with or without a third variable
#include <iostream>
using namespace std;

int main() {
 
 // program for swapping values of two variables 

 int a = 20;
 int b = 10;
///
 int temp = a;
 a = b;
 b = temp;

 cout << "a = " << a << ", b = " << b << endl;
 ////

 a = a + b; //30
 b = a - b; //20 
 a = a - b; //10

 cout << "a = " << a << endl;
 cout << "b = " << b << endl;



   return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// Build BMI Calculator application + flowchart
#include <iostream>
using namespace std;

int main() {
 
 // BMI Calculator 
 // weight(kg) / (height * height(m))
 // underweight < 18.5 
 // Normal weight 18.5 - 24.9
 // Overweight >25
  
 float weight, hight, bmi;
 cout << "wight(kg), hight(m):";
 cin >> weight >> hight;
 bmi = weight / (hight* hight);

 if(bmi < 18.5)
 cout << "Uderweight" << endl;
 else if (bmi > 25)
 cout << "overweight" << endl;
 else
 cout << "Normal weight" << endl;

 cout << "your bmi is: " << bmi;

   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// Ternary (Conditional) operator (Build a Guessing game app)
#include <iostream>
using namespace std;

int main() {
   int hostUserNum, guestUserNum;
   cout << "Host: ";
   cin >> hostUserNum;
   cout << "Guest: ";
   cin >> guestUserNum;

   (hostUserNum == guestUserNum)? cout << "correct!" : cout << "failed";

   //if (hostUserNum == guestUserNum)
   //cout << "corect!";
   //else
   //cout << "failed";

   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// Switch/case statement part 1 (Build Calculator app)
#include <iostream>
using namespace std;

int main() {
   float num1, num2;
   char operation;
   cout << "**codeBeauty claculater**" << endl;
   cin >> num1 >> operation >> num2;

   switch(operation){
      case '-': cout << num1 << operation << num2 << "="<< num1 - num2; break;
      case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;
      case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;
      case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;
      case '%': 
      bool isNum1Int, isNum2Int;
      isNum1Int = ((int)num1 == num1);// 5==5.0
      isNum2Int = ((int)num2 == num2);

      if (isNum1Int && isNum2Int)
      cout << num1 << operation << num2 << "=" << (int)num1 % (int)num2;
      else
      cout << "Not Valid!";
      break;
      default: cout << "Not valid operation!" << endl;

   }
   
   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// Switch/case statement part 2 (Build program that checks number of days in a month)

#include <iostream>
using namespace std;

int main() {
//  (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
int year, month;
cout << "Enter year, month: ";
cin >> year >> month;

switch (month)
{
   case 2: (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)?
         cout << "29 days month." : cout << "28 days month." ; break;
   case 4:
   case 6:
   case 9:
   case 11: cout << "30 days month."; break;
   case 1:
   case 3:
   case 5:
   case 7:
   case 8:
   case 10:
   case 12: cout << "31 days month."; break;
   default : cout << "Not valid!";
}

   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////
/*
//  While loop part 1 + infinite loop example
#include <iostream>
using namespace std;

int main() {
// write out all the numbers between 100 - 500 that are 
// divisible by 3 and 5

int counter = 100;
while (counter <= 500)
{
  if (counter % 3 == 0 &&  counter % 5 == 0)
  cout << counter << " is divisible\n";
  counter++;
  
}
   return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// // While loop part 2 (Build a program for counting digits of a number)

#include <iostream>
using namespace std;

int main() {
   // count digits of a number
   int number;
   cout << "Number: ";
   cin >> number;

   if(number == 0)
   cout << "you have entered 0.\n";
   else{
      // check if our number les then  0 if it is convert positive number
      if(number < 0)
      number = -1 * number;

      //cereat integer value to make while loop itteration
      int counter = 0;
      while(number > 0){// 123 = 12 = 1 = 0
      // number = number / 10;
      number /= 10; // takes last digit of 123 until it takes all
      counter++;//1, 2, 3 increase by one evry time until itteration done 
      }
      cout << "Number contains "<< counter << " digits\n";
   }
   
   return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// While loop part 3 (Build a program for reversing digits of a number)

#include <iostream>
using namespace std;

int main() {
   // Reversing number
   int number, reversedNumber = 0; // 321
   cout << "Number: ";
   cin >> number; // 123

   while (number != 0){
   // each itteration multibly reversedNumber by 10 // the first one is 0 becouse our reversedNumber is assigned 0
   reversedNumber *= 10;
   //int lastdigit = number % 10
   // takes reversedNumber and added last digit number our user entered
   reversedNumber += number % 10;
   // take last digit our user entered
   number /= 10;
   }
   cout << "Reversed: " << reversedNumber;

  return 0;
}
*/
////////////////////////////////////////////////////////////////////////////
/*
// Do while loop (Program for PIN validation) 

#include <iostream>
using namespace std;

int main() {
   // Do while loop (Program for PIN validation) 
   int userPin = 1234, pin, errorCounter = 0;//1

   do{
      cout << "PIN: ";
      cin >> pin;
      // checks wether that pin is equal
      if(pin != userPin)
      // if not equal increase errorConter value
      errorCounter++;
      // checks if errorCounter lesthen 3 also that pin is not equal the pin we need to gues
   }while (errorCounter < 3 && pin != userPin);
   
   // checks if errorCounter lesthen 3 
   if(errorCounter < 3)
   cout << "loading....";
   else
   cout << "Blocked....";
   
   
  return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// For loop (Build a program for calculating the factorial of a number)

#include <iostream>
using namespace std;

int main() {
   // The factorial of a number
   // 6! = 1*2*3*4*5*6=720

   int number;
   cout << "Number: ";
   cin >> number;//3
   int factorial = 1;// 1, 2, 6

  // checks the condition if it true or not if it true it runs the bloke of the code if not is going to leaf
   //for(int i = 1; i <= number; i++){// i = 1, i = 2, i = 3, i = 4
     // factorial = factorial * i;
   //}

   // 6! = 6*5*4*3*2*1 =720
   for(int i = number; i >= 1; i--){
      factorial = factorial * i;
   }

   cout << number << "!=" << factorial;

   
  return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// Nested loops (Nesting do while loop and for loop)
#include <iostream>
using namespace std;

int main() {
   
   int grade, sum = 0;

   for(int i = 0; i < 3; i++){

      do{
         cout << "Enter grade " << i+1 << ":";
         cin >> grade;

// repeat do massege process for sigle grade while our user grade les then 1 or grater then 5
      }while(grade < 1 || grade > 5);
      sum += grade;
   }
   // sum of the 3 grade our user entered
   cout << "sum = " << sum << endl;
   // the average of all grads
   cout << "Avg grade = " << (float)sum / 3.0 << endl;
  return 0;
}
*/

////////////////////////////////////////////////////////////////////////////

/*
// Nested for loop (Build Multiplication table app)

#include <iostream>
using namespace std;

int main() {
   // multiplication

   // outer for loop
   for(int i = 1; i <= 10; i++){

       // inter for loop
      for(int j = 1; j <= 10; j++){
         cout << i << " * " << j << " = " << i * j << endl;
      }
      cout << endl;

   }
   
  return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

/*
// Program for drawing rectangle shape 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int height, width;
   cout << "Enter height: ";
   cin >> height;
   cout << "Enter width: ";
   cin >> width;
   char symbol;
   cout << "Enter symbol: ";
   cin >> symbol;

   for(int h = 0; h < height; h++){

      for(int w = 0 ; w < width; w++){
         cout << setw(3)<<  symbol ;
      }
      cout << endl;

   }
 
   
  return 0;
}
*/
////////////////////////////////////////////////////////////////////////////

// Program for drawing triangle and inverted/reversed triangle shapes

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int length;
   cout << "Length: ";
   cin >> length;
   char symbol;
   cout << "symbol: ";
   cin >> symbol;

   for(int i = 1; i <= length; i++){
      for(int j = 1; j <= i; j++){
       cout << setw(2)<<symbol;
      }
      cout << endl;
   }

   cout << endl;cout << endl;cout << endl;
   for(int i = length; i >= 1; i--){
      for(int j = 1; j <= i; j++){
       cout << setw(2)<<symbol;
      }
      cout << endl;
   }
   
  return 0;
}




