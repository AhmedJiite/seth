/*
#include <iostream>
using namespace std;

int main() {

   return 0;
}
*/
/*
// basics explained and first “Hello World” program

#include <iostream>
using namespace std;

int main() {
   cout << "Hello World \n"; // this will output to the console Hello world.
   cout << "My name is Ahmed." << endl;
   cout << "Today is Friday ";

   return 0;
}
*/
///////////////////////////////////////////////////////////////////////


/*
//  Introduction to variables  Rules for naming variables

#include <iostream>
using namespace std;

int main() {
   // float annualSlary = 50000.99;
   float annualSlary;
   cout << "please enter your annual salary ";
   cin >> annualSlary;
   float monthlySalary = annualSlary / 12;
   cout << "your monthly salary is " << monthlySalary << endl;
   cout << "In 10 years you will earn " << annualSlary * 10;

   char character = 'a';

   return 0;
}
*/

///////////////////////////////////////////////////////////////////////


/*

// Data types in C++ and how to use sizeof operator

#include <iostream>
using namespace std;
int main() {
   int yearOfBirth = 1995;
   char gender = 'f';
   bool isOlderThan18 = true;
   float averageGrade = 4.5;
   double balance = 45678945856;

   cout << "size of int is " << sizeof(int) << " bytes\n";
   // -1, -2, -3, ....... -2147483648 
   cout << "Int min value is " << INT_MIN << endl;
   // 0, 1, 2, 3, .......2147483647
   cout << "Int max value is " << INT_MAX << endl;
   cout << "size of unsigned int is " << sizeof(unsigned int) <<" bytes\n";
   cout << "UInt max value is " << UINT_MAX << endl;
   cout << "size of int is " << sizeof(bool) << " bytes\n";
   cout << "size of int is " << sizeof(char) << " bytes\n";
   cout << "size of int is " << sizeof(float) << " bytes\n";
   cout << "size of int is " << sizeof(double) << " bytes\n";


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

///////////////////////////////////////////////////////////////////////


/*

// What is ASCII table

#include <iostream>
using namespace std;

int main() {

   cout << (int)'a' << endl;
   cout << int ('a') << endl;
   cout << int('A') << endl;
   cout << char(65) << endl;

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
cout << "ACSII message: " << int(c1) << " " << int(c2)
 << " " << int(c3) << " " << int(c4) << " " << int(c5); 


   return 0;
}

*/

///////////////////////////////////////////////////////////////////////

/*

// If/else statement (Build a program that checks odd/even numbers + flowchart explanation)  

#include <iostream>
using namespace std;

int main() {

 // useer enters integer numbers 
 // program write out if that number is even or odd
 int number;
 cout << "please enter whole number: ";
 cin >> number;
 if (number % 2 == 0)
 {
    cout << "you have entred even number, " << endl;
 }
 else 
 {
    cout << "you have entered odd number " << endl;
 }
 cout << "thanks Bye.";


   return 0;
}
*/
///////////////////////////////////////////////////////////////////////
/*

//  Nested if/else statement (Build a program that determines the type of a triangle + flowchart)  

#include <iostream>
using namespace std;

int main() {
 // user enters side lengths of a triangle (a,b,c)
 // program should write out wether that triangle is equilateral isosceles or scalene

  float a, b, c;
  cout << "a, b, c:";
  cin >> a >> b >> c;

  if (a == b && b == c)
  {
    cout << "Equilateral triangle";
  }
  else {
    if (a != b && a != c && b != c)
    {
          cout << "scalene triangle";
  
    }
    else {
            cout << "isosceles triangle";

    }
  }


   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*

// Operators in C++ (arithmetic, relational, logical, assignment operators)

#include <iostream>
using namespace std;

int main() {
 
 // arithmatic operators +, _ , *, /, %
 cout << 5 + 2 << endl;
 cout << 5 / 2 << endl;
 cout << 5.0 / 2 <<endl;
 cout << 5 % 2 << endl;

 // unary operators n++, _ _ 

 int counter  = 7;
 counter++;
 cout << counter << endl;
 counter--;
 cout << counter << endl;

 int counter2 = 7;
 // cout << counter2++ << endl;
 cout << ++counter2 << endl;
 cout << counter2-- << endl;
 cout << counter2 << endl;


 //  Relations operators<, >, <=, >=, ==, !=
 int a = 5, b = 8;
 cout << (a != b) << endl;

 // Logicl operators &&, ||, !
 // cout << (a == 5 && b == 5 ) << endl; 
 // cout << (a == 5 || b == 5 ) << endl;
 // cout << !(a == 5 || b == 5 ) << endl;
 cout << (a == 5 && b == 5+3 ) << endl; 

// assignment operators =, +=, *=, /=, %=
int x = 5;
x -= 7;
// x = x + 7;
cout << x << endl;



   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

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
///////////////////////////////////////////////////////////////////////


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

  float weight, height, bmi;
  cout << "weight(kg), height(m): ";
  cin >> weight >> height;
  bmi = weight / (height * height);

  if (bmi < 18.5)
     cout << "uderweight" << endl;
  else if (bmi > 25)
     cout << "overweight" << endl;
  else 
     cout << "Normalrweight" << endl; 
  cout << "your bmi is " << bmi ;

   return 0;
}
*/

///////////////////////////////////////////////////////////////////////
/*

// Ternary (Conditional) operator (Build a Guessing game app)

#include <iostream>
using namespace std;

int main() {
    int hostUserNum, guestUserNum;
    cout << "Host: ";
    cin >> hostUserNum;
    system("cls");
    cout << "Guest: "; 
    cin >> guestUserNum;

    (hostUserNum == guestUserNum)? cout << "Correct!" : cout << "Failed";

   // if (hostUserNum == guestUserNum)
        cout << "Correct!";
    else 
        cout << "Failed";
        //

   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*

// Switch/case statement part 1 (Build Calculator app)

#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    char operation;
    cout << "**CodeBeauty calculator**" << endl;
    cin >> num1 >> operation >> num2;

    switch (operation)
    {
    
    case '-' : 
    cout << num1 << operation << num2 << "=" << num1 - num2;
    break;
    case '+' : 
    cout << num1 << operation << num2 << "=" << num1 + num2;
    break;
    case '/' : 
    cout << num1 << operation << num2 << "=" << num1 / num2;
    break;
    case '*' : 
    cout << num1 << operation << num2 << "=" << num1 * num2;
    break;
    case '%' : 
        bool isNum1Int, isNum2Int;
       isNum1Int = (int)num1 == num1; // 5 == 5.0
       isNum2Int = (int)num2 == num2; // 5 == 5.0
       if (isNum1Int && isNum2Int)
       cout << num1 << operation << num1 << "=" << (int)num1 % (int)num2;
       else
       cout << "Not valid!";
       break;
    default : cout << "Not Valid Operation!" << endl;

    }
   return 0;
}
*/
///////////////////////////////////////////////////////////////////////


/*

// Switch/case statement part 2 (Build program that checks number of days in a month)

#include <iostream>
using namespace std;

int main() {
//  (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
int year, month;
cout << "Year, month: ";
cin >> year >> month;

switch (month)
{
case 2:   (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)?
        cout << "29 days month.": cout << "28 days month."; break;
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

default : cout << "Not Valid!";
}

   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
//  While loop part 1 + infinite loop example

#include <iostream>
using namespace std;

int main() {
// write out all the numbers between 100 - 500 that are divisible by 3 and 5

int counter = 100;
while (counter <= 500)
{
    if (counter % 3 == 0 && counter % 5 == 0)
    cout << counter << "is divisible\n";
    counter++;
}
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*

// While loop part 2 (Build a program for counting digits of a number)

#include <iostream>
using namespace std;

int main() {
   // count digits of a number
   int number;
   cout << "Number:";
   cin >> number;

   if (number == 0)
   cout << "you have entered 0.\n";
   else{
      if (number < 0)
      number = -1 * number;
      int counter = 0;
      while (number > 0) // 123
      {
         //number = number / 10;
         number /=10; // this code takes last digit of 123
         counter++; // increase value by 1 
      }
      cout << "Number contains " << counter << " digits\n";
      
   }


   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// While loop part 3 (Build a program for reversing digits of a number)

#include <iostream>
using namespace std;

int main() {
   // Reversing number

   int number, reversedNumber = 0; // 312
   cout << "Number: ";
   cin >> number;
   
   while(number!=0){
      reversedNumber *= 10;
      // int lastDigit = number % 10;
      reversedNumber += number % 10;
      number /= 10;
   }

  cout << "Reversed: " << reversedNumber;
  return 0;
}
*/

///////////////////////////////////////////////////////////////////////



/*

// Do while loop (Program for PIN validation) 

#include <iostream>
using namespace std;

int main() {
   int userPin = 1234, pin, errorCounter = 0;
   do{
      cout << "PIN:";
      cin >> pin;
      if (pin != userPin)
      errorCounter++;

   }while (errorCounter < 3 && pin!= userPin);

   if (errorCounter < 3)
   cout << "Loading...";
   else 
   cout << "Blocked...";
   
  return 0;
}
*/

///////////////////////////////////////////////////////////////////////


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
   int factorial = 1;// 6

   // for(int i = 1; i <= number; i++){ // i=4
   //   factorial = factorial * i;
   //}

   // 6! = 6*5*4*3*2*1 =720
   for(int i= number; i >= 1; i--){
      factorial = factorial * i;
   }

   cout << number << "!=" << factorial;
   
   
  return 0;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// Nested loops (Nesting do while loop and for loop)

#include <iostream>
using namespace std;

int main() {
   int grade, sum = 0;
   for(int i = 0; i < 3; i++){
      do{
         cout << "Enter grade " << i + 1 << ": ";
         cin >> grade;
      }while (grade<1 || grade>5);
      
        sum += grade;
      }
      cout << "sum = " << sum << endl;
      cout << "Avg grade = " << (float)sum / 3.0 << endl;
   
   
  return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// Nested for loop (Build Multiplication table app)

#include <iostream>
using namespace std;

int main() {
   // multiplication
   for(int i = 1; i <= 10; i++){
      for(int j = 1; j <= 10; j++){
         cout << i << " * " <<j<< " = " << i * j << endl;
      }
      cout << endl;
   }
   
  return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// Program for drawing rectangle shape 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int height, width;
   cout << "Height: ";
   cin >> height;
   cout << "Width: ";
   cin >> width;
   char symbol;
   cout << "symbol: ";
   cin >> symbol;

   for(int h = 0; h < height; h++){
      for(int w =0; w < width; w++){
         cout << std::setw(3) << symbol;
      }
      cout << endl;
   }
   
  return 0;
}

*/

///////////////////////////////////////////////////////////////////////

/*
// Program for drawing triangle and inverted/reversed triangle shapes

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   
   int length;
   cout << "Lengeth: ";
   cin >> length;
   char symbol;
   cout << "Symbol: ";
   cin >> symbol;

   for(int i = 1; i <=length; i++){
      for(int j = 1; j <= i; j++ ){
         cout << setw(2) <<symbol;
      }
      cout << endl;
   }
   cout << endl << endl;

   for(int i = length; i >= 1; i--){
      for(int j = 1; j <= i; j++ ){
         cout << setw(2) <<symbol;
      }
      cout << endl;
   }

  return 0;
}

*/

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

/*
// Introduction to functions

#include <iostream>
using namespace std;

void Function();
int main() {

cout << "Hello from main()\n";
Function();
Function();
Function();

   return 0;
}
void Function(){
   cout << "Hello from function()" << endl;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// Functions with parameters/arguments (multiple and default)

#include <iostream>
using namespace std;

void introduceMe(string name, string city, int age =0){
   cout << "my name is " << name << endl;
   cout << "I am from " << city  << endl;
   if(age != 0)
   cout << "I am " << age << " years old" << endl;
}
int main() {
   string name1, city1;
   int agee1;
   cout << "Name: ";
   cin >> name1;
   cout << "City: ";
   cin >> city1;
   cout << "Age: ";
   cin >> agee1;
   introduceMe(name1, city1, agee1);
//introduceMe("Ahmed", "chicago", 23);
//introduceMe("saldina", "mostar");

   return 0;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// Function return statement (Build program for checking prime numbers)

// Example we did without function
#include <iostream>
using namespace std;

int main() {
   int number;
   cout <<"Number: ";
   cin >> number;

   bool isprimeFlag = true;
   for(int i = 2; i < number; i++){
      if (number % i == 0){
      isprimeFlag = false;
      break;
      }
   }
   if(isprimeFlag)
   cout << "Prrime number" << endl;
   else
   cout << "Not prime number" << endl;
   return 0;
}
*/

/*
// Example we did with function
#include <iostream>
using namespace std;

bool isPrimeNumber(int number){
   // long way
   // bool isprimeFlag = true;

   for(int i = 2; i < number; i++){
      if (number % i == 0){
         // short way
         return false;

      // long way
      //isprimeFlag = false;
      //break;

      }
   }
   // short way
   //return isprimeFlag;
   return true;


}

int main() {
   // how can we make this function reusable/?
   //int number;
   //cout <<"Number: ";
   //cin >> number;

   //bool isPrimeFlag = isPrimeNumber(number);

   //if(isPrimeFlag)
   //cout << "Prrime number" << endl;
   //else
   //cout << "Not prime number" << endl;

   // here is How can we make reusable the function

   // check all number prime numbers bt/w 1 and 1000
   for(int i = 1; i <= 1000; i++){
      bool isPrime = isPrimeNumber(i);
      if(isPrime)
      cout << i << " is prime number\n";

   }


   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
//  Function overloading
#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

// our main function
int main() {

   cout <<sum(3, 4) << endl;
   cout << sum(3.3, 4.4) << endl;
   cout << sum(4.4, 3.3 , 2.2);

   return 0;
}
int sum(int a, int b){

   // long way
   //int result = a + b;
   //return result;

   // short way
   return a + b;

}
double sum(double a, double b){
   return a + b;

}
float sum(float a, float b, float c){
   return a + b + c;
}
*/

///////////////////////////////////////////////////////////////////////

/*
 // Build ATM app
#include <iostream>
using namespace std;

void showMenu(){
   cout <<"**********MENU**********" << endl;
   cout << "1. check balance" << endl;
   cout << "2. check Deposit" << endl;
   cout << "3. check Withdraw" << endl;
   cout << "4. Exite" << endl;
   cout <<"************************" << endl;

}
// our main function
int main() {
  // check blance, deposit, withdraw, show menu
  int options;
  double blance = 500;
  do{
  showMenu();
  cout << "Options: ";
  cin >> options;
  switch (options){
   case 1: cout << "Balance is: " << blance << "$" << endl; break;
   case 2: cout << "Deposit Amount: ";
   double depositAmount;
   cin >> depositAmount;
   blance += depositAmount;
   break;

   case 3: cout << "withdraw Amount: ";
   double withdrawAmount;
   cin >> withdrawAmount;
   if(withdrawAmount <= blance)
   blance -= withdrawAmount;
   else
   cout << " Not enough money" << endl;
   break;

  }

 }while(options != 4);

   return 0;
}
*/
///////////////////////////////////////////////////////////////////////

// Generic functions and templates

// long approach and you need Generic fuction to solv it
/*
#include <iostream>
using namespace std;

void swap(int& a, int& b){
int temp = a;
a = b;
b = temp;
}

void swap(char& a, char& b){
char temp = a;
a = b;
b = temp;
}
int main() {
   int a = 5, b = 7;
   cout << a << " - " << b << endl;
   swap(a, b);
   cout << a << " - " << b << endl;
   char c = 'c', d = 'd';
   cout << c << " - " << d << endl;
   swap(c,d);
   cout << c << " - " << d << endl;


   return 0;
}
*/

/*
//short solving it using Generic fuction 
#include <iostream>
using namespace std;

// another way of this keyword
// template<class Type>
// key word
template<typename T>
void Swap(T& a, T& b){
T temp = a;
a = b;
b = temp;
}
int main() {
   int a = 5, b = 7;
   cout << a << " - " << b << endl;

   //another way
   // Swap(a, b);
   Swap<int>(a, b);
   cout << a << " - " << b << endl;
   char c = 'c', d = 'd';
   cout << c << " - " << d << endl;
   //another way
   // Swap(c,d);
   Swap<char>(c,d);
   cout << c << " - " << d << endl;


   return 0;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// Recursion and recursive functions

// Example using without Recursion
#include <iostream>
using namespace std;

// sum numbers between m-n
int main() {
   int m = 2 , n = 4;

   int sum = 0;
   for(int i = m; i <= n; i++){
     sum += i;
   }
   cout << "sum = " <<sum;

   return 0;
}
*/

/*
// Example using  Recursion
#include <iostream>
using namespace std;

int recursive_sum(int m, int n){// m=2 = 3 = 4, n=4
// base case
if( m == n)
return m;
return m + recursive_sum(m + 1, n);// 2+(3+(4)) = (2+3+4)= 9
}
// sum numbers between m-n
int main() {
   int m = 2 , n = 4;
   cout << "sum = " << recursive_sum(m, n);// 9

   
   return 0;
}
*/
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

/*
// Introduction to OOP, What are classes and objects
#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// our class
class youTubeChannel {
public:
// attributes or properties
string name;
string onerName;
int subscribersCount;
list<string>publisheVideoTitles;
};
int main() {
   // our opject
   youTubeChannel ytchannel;
   ytchannel.name = "codeBeatuy";
   ytchannel.onerName = "saldina";
   ytchannel.subscribersCount = 1800;
   ytchannel.publisheVideoTitles = {"c++ for biginners video 1", "HTML & CSS video1", "c++ oop video1"};
   // writing out the information
   cout << "Name: " << ytchannel.name << endl;
   cout << "onerName: " << ytchannel.onerName << endl;
   cout << "subscribersCount: " << ytchannel.subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: ytchannel.publisheVideoTitles){
      cout << videoTitle << endl;
   }
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// OOP Constructors and class methods

// Example why we need constructors and class methods
#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// our class
class youTubeChannel {
public:
// attributes or properties
string name;
string onerName;
int subscribersCount;
list<string>publisheVideoTitles;
};

int main() {
   // our opject
   youTubeChannel ytchannel;
   ytchannel.name = "codeBeatuy";
   ytchannel.onerName = "saldina";
   ytchannel.subscribersCount = 1800;
   ytchannel.publisheVideoTitles = {"c++ for biginners video 1", "HTML & CSS video1", "c++ oop video1"};

   // writing out the information
   cout << "Name: " << ytchannel.name << endl;
   cout << "onerName: " << ytchannel.onerName << endl;
   cout << "subscribersCount: " << ytchannel.subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: ytchannel.publisheVideoTitles){
      cout << videoTitle << endl;
   }
   // our opject
   youTubeChannel ytchannel2;
   ytchannel2.name = "Amysings";
   ytchannel2.onerName = "Amy";
   ytchannel2.subscribersCount = 2000;
   ytchannel2.publisheVideoTitles = {"johny b - (the Hoosters)", "Lorelei - cover"};

   // writing out the information
   cout << "Name: " << ytchannel2.name << endl;
   cout << "onerName: " << ytchannel2.onerName << endl;
   cout << "subscribersCount: " << ytchannel2.subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: ytchannel2.publisheVideoTitles){
      cout << videoTitle << endl;
   }
   
   return 0;
}
*/
/*
// Example using  constructors and class methods
#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// our class
class youTubeChannel {
public:
// attributes or properties
string Name;
string owerName;
int subscribersCount;
list<string>publisheVideoTitles;

// constructors
youTubeChannel(string name, string ownerName){
   Name = name;
   ownerName = owerName;
   subscribersCount = 0;
}
//class methods
void GetInfo(){
// writing out the information behavior
   cout << "Name: " << Name << endl;
   cout << "onerName: " << owerName << endl;
   cout << "subscribersCount: " << subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: publisheVideoTitles){
      cout << videoTitle << endl;
   }
}

};

int main() {
    // our opjects
      youTubeChannel ytchannel("codeBeatuy","saldina");
      ytchannel.publisheVideoTitles.push_back("c++ for beginners");
      ytchannel.publisheVideoTitles.push_back("HTML & CSS for beginners");
      ytchannel.publisheVideoTitles.push_back("c++ oop");
      youTubeChannel ytchannel2 ("Amysings","Amy");

      ytchannel.GetInfo();
      ytchannel2.GetInfo();
   
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// OOP Encapsulation, 

// Example why we need Encapsulation
#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// our class
class youTubeChannel {
public:
// attributes or properties
string Name;
string owerName;
int subscribersCount;
list<string>publisheVideoTitles;

// constructors
youTubeChannel(string name, string ownerName){
   Name = name;
   ownerName = owerName;
   subscribersCount = 0;
}
//class methods
void GetInfo(){
// writing out the information behavior
   cout << "Name: " << Name << endl;
   cout << "onerName: " << owerName << endl;
   cout << "subscribersCount: " << subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: publisheVideoTitles){
      cout << videoTitle << endl;
   }
}

};

int main() {
    // our opjects
      youTubeChannel ytchannel("codeBeatuy","saldina");
      ytchannel.publisheVideoTitles.push_back("c++ for beginners");
      ytchannel.publisheVideoTitles.push_back("HTML & CSS for beginners");
      ytchannel.publisheVideoTitles.push_back("c++ oop");
      // Example why we need Encapsulation This is not a normal way to get subscribers
      ytchannel.subscribersCount = 100000;
      

      ytchannel.GetInfo();
      
   
   return 0;
}
*/

/*
#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// our class
class youTubeChannel {
private:
// attributes or properties
string Name;
string owerName;
int subscribersCount;
list<string>publisheVideoTitles;

// public methods
 public:
// constructors
youTubeChannel(string name, string ownerName){
   Name = name;
   ownerName = owerName;
   subscribersCount = 0;
}
//class methods
void GetInfo(){
// writing out the information behavior
   cout << "Name: " << Name << endl;
   cout << "onerName: " << owerName << endl;
   cout << "subscribersCount: " << subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: publisheVideoTitles){
      cout << videoTitle << endl;
   }
}
// method
void Subscribe(){
   subscribersCount++;
}
// method
void Unsubscribe(){
   if(subscribersCount > 0)
   subscribersCount--;
}
// methods
void PublishVideo(string titel){
   publisheVideoTitles.push_back(titel);
}
};

int main() {
    // our opjects
      youTubeChannel ytchannel("codeBeatuy","saldina");
      ytchannel.PublishVideo("c++ for beginners");
      ytchannel.PublishVideo("HTML & CSS for beginners");
      ytchannel.PublishVideo("c++ oop");
      ytchannel.Subscribe();
      ytchannel.Unsubscribe();
      ytchannel.GetInfo();
      
   
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// OOP Inheritance, 

#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// Base class
 class YouTubeChannel {
 private:
// attributes or properties
 string Name;
 int subscribersCount;
 list<string>publisheVideoTitles;
 protected:
 string OwnerName;

// public methods
 public:
// constructors
 YouTubeChannel(string name, string ownerName){
   Name = name;
   OwnerName = ownerName;
   subscribersCount = 0;
 }
//class methods
 void GetInfo(){
// writing out the information behavior
   cout << "Name: " << Name << endl;
   cout << "onerName: " << OwnerName << endl;
   cout << "subscribersCount: " << subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: publisheVideoTitles){
      cout << videoTitle << endl;
   }
 }
// method
 void Subscribe(){
   subscribersCount++;
 }
// method
 void Unsubscribe(){
   if(subscribersCount > 0)
   subscribersCount--;
 }
// methods
 void PublishVideo(string titel){
   publisheVideoTitles.push_back(titel);
 }
 };

// Derived class
 class CookingYouTubeChannel:public YouTubeChannel{
   public:
// constructors
 CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName){

 }
// methods
 void Practice(){
   cout << OwnerName <<" is Practicing cooking learning new recipes, experimenting with spices..."<<endl;
 }
 };

 int main() {
    
    // object Base class
    CookingYouTubeChannel CookingYtChannel("Amy's kitchen", "Amy");
    // object Derived class
    CookingYouTubeChannel CookingYtChannel2("john's kitchen", "john");
    //  CookingYtChannel.PublishVideo("Apple pie");
    //  CookingYtChannel.PublishVideo("chocolate cake");
    //  CookingYtChannel.Subscribe();
    //  CookingYtChannel.Subscribe();
    //  CookingYtChannel.GetInfo();
    CookingYtChannel.Practice();
    CookingYtChannel2.Practice();

   return 0;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// OOP Polymorphisam
#include <iostream>
#include<list>
using namespace std;
// youtupe chanel
// Base class
 class YouTubeChannel {
 private:
// attributes or properties
 string Name;
 int subscribersCount;
 list<string>publisheVideoTitles;
 protected:
 string OwnerName;
 int contentQuality;

// public methods
 public:
// constructors
 YouTubeChannel(string name, string ownerName){
   Name = name;
   OwnerName = ownerName;
   subscribersCount = 0;
   contentQuality = 0; 
 }
//class methods
 void GetInfo(){
// writing out the information behavior
   cout << "Name: " << Name << endl;
   cout << "onerName: " << OwnerName << endl;
   cout << "subscribersCount: " << subscribersCount << endl;
   cout << "video:" << endl;
   for(string videoTitle: publisheVideoTitles){
      cout << videoTitle << endl;
   }
 }
// method
 void Subscribe(){
   subscribersCount++;
 }
// method
 void Unsubscribe(){
   if(subscribersCount > 0)
   subscribersCount--;
 }
// methods
 void PublishVideo(string titel){
   publisheVideoTitles.push_back(titel);
 }
 void CheckAnalytics(){
   if(contentQuality < 5)
   cout << Name <<" has bad quality content." << endl;
   else
   cout << Name << " has great quality content." << endl;
 }
 };

// Derived class
 class CookingYouTubeChannel:public YouTubeChannel{
   public:
// constructors
 CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName){

 }
// methods
 void Practice(){
   cout << OwnerName <<" is Practicing cooking learning new recipes, experimenting with spices..."<<endl;
   contentQuality++;
 }
 };
  
  // Another Derived class
 class SingersYouTubeChannel:public YouTubeChannel{
   public:
// constructors
 SingersYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName){

 }
// methods
 void Practice(){
   cout << OwnerName <<" is taking singing classes, learning new songs, lerning how to dance..."<<endl;
   contentQuality++;
 }
 };

 int main() {
    
    // // Derived class
    CookingYouTubeChannel CookingYtChannel("Amy's kitchen", "Amy");
    SingersYouTubeChannel SingersYtChannel("Johnsings","John");

    CookingYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();
    SingersYtChannel.Practice();

    YouTubeChannel * yt1 = &CookingYtChannel;
    YouTubeChannel * yt2 = &SingersYtChannel;

    yt1->CheckAnalytics();
    yt2->CheckAnalytics();
    
   return 0;
}
*/
///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

/*
// Introduction to pointers

#include <iostream>
using namespace std;

int main() {

   int n = 5;
   cout << &n << endl;
   int* ptr = &n;
   cout << ptr << endl;
   cout << *ptr << endl;
   *ptr = 10;
   cout << *ptr << endl;
   cout << n << endl;
   
   int v;
   int* ptr2 = &v;
   *ptr2 = 7;
   cout << "v = " << v << endl;

   return 0;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// Void pointers

#include <iostream>
using namespace std;

void PrintNumber(int* numberPtr){
   cout << *numberPtr << endl;
   
}
void PrintLetter(char* charPtr){
   cout << *charPtr << endl;
}

int main() {

  int number = 5;
  char letter = 'a';
  PrintNumber(&number);
  PrintLetter(&letter);

  

   return 0;
}
*/


///////////////////////////////////////////////////////////////////////


/*
// Pointers and arrays

#include <iostream>
using namespace std;

int main() {

int luckyNumbers[5]; // {2,3,5,7,9};
// cout << luckyNumbers<< endl;
// cout << &luckyNumbers[0]<< endl;
// cout << luckyNumbers[2] << endl;
// cout << *(luckyNumbers + 2) << endl;

 for(int i = 0; i <= 4; i++){
  cout << "Number: ";
  cin >> luckyNumbers[i];
}
for(int i = 0; i <= 5; i++){

  cout << *(luckyNumbers+i) << " ";
}


   return 0;
}
*/
///////////////////////////////////////////////////////////////////////

/*
// Return multiple values from a function using pointers

#include <iostream>
using namespace std;

// function min value
int getMin(int numbers[], int size){
   int min = numbers[0];
   for(int i = 1; i < size; i++){
      if (numbers[i] < min)
      min =numbers[i];
   }
   return min;
}

// function max value
int getMax(int numbers[], int size){
   int max = numbers[0];
   for(int i = 1; i < size; i++){
      if(numbers[i] > max)
      max = numbers[i];
   }
   return max;
}

void getMinAndMax(int numbers[], int size, int* min, int*max) {
   for(int i = 1; i < size; i++){
      if(numbers[i] > *max)
      *max = numbers[i];
      if(numbers[i] < *min)
      *min = numbers[i];
   }
}
int main() {
 int numbers[5] = {5,4,-2,29,6};
//  cout << "min is " << getMin(numbers, 5) << endl;
//  cout << "max is " << getMax(numbers ,5) << endl;
int min = numbers[0];
int max = numbers[0];
getMinAndMax( numbers, 5, &min, &max);
cout << "min is " << min << endl;
cout << "max is " << max << endl;
   return 0;
}
*/

///////////////////////////////////////////////////////////////////////

/*
// Dynamic arrays, create/change arrays at runtime

#include <iostream>
using namespace std;

int main() {

   int size;
   cout << "size: ";
   cin >> size;

   //int myArray[size];
   int* myArray = new int[size];

   for(int i =0; i < size; i++){
      cout << "Array[" << i <<"]";
      cin >> myArray[i];
   }
   for(int i = 0;  i< size; i++){

      // cout << myArray[i] << " ";
      // another way to excess
      cout << *(myArray+i) << " ";
   }

   delete[]myArray;
   myArray = NULL;

   return 0;
}
*/
///////////////////////////////////////////////////////////////////////
/*
// Multidimensional dynamic arrays, Two-dimensional array

#include <iostream>
using namespace std;

int main() {
 
 int rows, cols;
 cout << "rows, cols: ";
 cin >> rows >> cols;

 int** table = new int*[rows];
 for(int i = 0; i < rows; i++){
   table[i] = new int[cols];
 }
  table[1][2] = 88;

  for(int i = 0; i < rows; i++){
    delete[] table[i];
    table = NULL;
 }
 delete []table;
 

   return 0;
}

*/
/*

#include <iostream>
using namespace std;

int main() {
    const int MAX_LENGTH = 100;
    char name[MAX_LENGTH];

    // Ask for user's name
    cout << "Enter your name: ";
    cin.getline(name, MAX_LENGTH);

    // Print ASCII codes of each character in the name
    cout << "ASCII codes: ";
    for (int i = 0; name[i] != '\0'; i++) {
        cout << static_cast<int>(name[i]) << " ";
    }
    cout << endl;

    return 0;
}
*/
// Data types in C++ and how to use sizeof operator

// #include <iostream>
// using namespace std;
// int main() {
//    int yearOfBirth = 1995;
//    char gender = 'f';
//    bool isOlderThan18 = true;
//    float averageGrade = 4.5;
//    double balance = 45678945856;

//     cout << "size of int is " << sizeof(int) << " bytes\n";
//    // -1, -2, -3, ....... -2147483648 
//    cout << "Int min value is " << INT_MIN << endl;
//    // 0, 1, 2, 3, .......2147483647
//    cout << "Int max value is " << INT_MAX << endl;
//    cout << "size of unsigned int is " << sizeof(unsigned int) <<" bytes\n";
//    cout << "UInt max value is " << UINT_MAX << endl;
//    cout << "size of int is " << sizeof(bool) << " bytes\n";
//    cout << "size of int is " << sizeof(char) << " bytes\n";
//    cout << "size of int is " << sizeof(float) << " bytes\n";
//    cout << "size of int is " << sizeof(double) << " bytes\n";


//    return 0;
// }

// #include <cctype>
// #include <cstdlib>
// #include <fstream>
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>
// #include <random>
// #include "include/caesar_dec.h"
// #include "include/caesar_enc.h"
// #include "include/subst_dec.h"
// #include "include/subst_enc.h"
// #include "include/utils.h"

// using namespace std;

// // Initialize random number generator in .cpp file for ODR reasons
// std::mt19937 Random::rng;

// /**
//  * Print instructions for using the program.
//  */
// void printMenu() {
//   cout << "Ciphers Menu" << endl;
//   cout << "------------" << endl;
//   cout << "C - Encrypt with Caesar Cipher" << endl;
//   cout << "D - Decrypt Caesar Cipher" << endl;
//   cout << "E - Compute English-ness Score" << endl;
//   cout << "A - Apply Random Substitution Cipher" << endl;
//   cout << "S - Decrypt Substitution Cipher from Console" << endl;
//   cout << "R - Set Random Seed for Testing" << endl;
//   cout << "X - Exit Program" << endl;
// }

// int main() {
//   Random::seed(time(NULL));
//   string command;

//   cout << "Welcome to Ciphers!" << endl;
//   cout << "-------------------" << endl;
//   cout << endl;

//   do {
//     printMenu();
//     cout << endl << "Enter a command (case does not matter): ";

//     // Use getline for all user input to avoid needing to handle
//     // input buffer issues relating to using both >> and getline
//     getline(cin, command);
//     cout << endl;

//     if (command == "C" || command == "c") {
//       runCaesarEncrypt();
//     } else if (command == "D" || command == "d") {
//       runCaesarDecrypt();
//     } else if (command == "A" || command == "a") {
//       applyRandSubstCipherCommand();
//     } else if (command == "S" || command == "s") {
//       QuadgramScorer scorer;
//       decryptSubstCipherCommand(scorer);
//     } else if (command == "R" || command == "r") {
//       string seed_str;
//       cout << "Enter a non-negative integer to seed the random number "
//               "generator: ";
//       getline(cin, seed_str);
//       Random::seed(stoi(seed_str));
//     }

//     cout << endl;

//   } while (!(command == "x" || command == "X") && !cin.eof());

//   return 0;
// }

// #pragma region CaesarEnc

// char rot(char c, int amount) {
//   if (isupper(c)) {
//     return 'A' + (c - 'A' + amount) % 26;
//   } else if (islower(c)) {
//     return 'a' + (c - 'a' + amount) % 26;
//   }
//   return c;
// }

// string rot(const string& line, int amount) {
//   string result;
//   for (char c : line) {
//     result += rot(c, amount);
//   }
//   return result;
// }

// void runCaesarEncrypt() {
//   string plaintext;
//   int shiftAmount;

//   cout << "Enter the plaintext message: ";
//   getline(cin, plaintext);

//   cout << "Enter the shift amount (0-25): ";
//   cin >> shiftAmount;

//   if (shiftAmount < 0 || shiftAmount > 25) {
//     cout << "Invalid shift amount. Please enter a value between 0 and 25." << endl;
//     return;
//   }

//   string ciphertext = rot(plaintext, shiftAmount);
//   cout << "Encrypted message: " << ciphertext << endl;
// }

// #pragma endregion CaesarEnc

// #pragma region CaesarDec

// void rot(vector<string>& strings, int amount) {
//   for (string& s : strings) {
//     s = rot(s, amount);
//   }
// }

// string clean(const string& s) {
//   string result;
//   for (char c : s) {
//     if (isalnum(c)) {
//       result += toupper(c);
//     }
//   }
//   return result;
// }

// vector<string> splitBySpaces(const string& s) {
//   vector<string> words;
//   istringstream iss(s);
//   string word;
//   while (iss >> word) {
//     words.push_back(word);
//   }
//   return words;
// }

// string joinWithSpaces(const vector<string>& words) {
//   ostringstream oss;
//   for (size_t i = 0; i < words.size(); ++i) {
//     if (i != 0) oss << ' ';
//     oss << words[i];
//   }
//   return oss.str();
// }

// int numWordsIn(const vector<string>& words, const vector<string>& dict) {
//   int count = 0;
//   for (const string& word : words) {
//     if (find(dict.begin(), dict.end(), word) != dict.end()) {
//       ++count;
//     }
//   }
//   return count;
// }

// void runCaesarDecrypt(const vector<string>& dict) {
//   string ciphertext;
//   cout << "Enter the ciphertext message: ";
//   getline(cin, ciphertext);

//   vector<string> words = splitBySpaces(clean(ciphertext));
//   int bestShift = 0;
//   int maxValidWords = 0;

//   for (int shift = 0; shift < 26; ++shift) {
//     vector<string> shiftedWords = words;
//     rot(shiftedWords, shift);

//     int validWords = numWordsIn(shiftedWords, dict);
//     if (validWords > maxValidWords) {
//       maxValidWords = validWords;
//       bestShift = shift;
//     }
//   }

//   rot(words, bestShift);
//   cout << "Decrypted message: " << joinWithSpaces(words) << endl;
// }

// #pragma endregion CaesarDec

// #pragma region SubstEnc

// string applySubstCipher(const vector<char>& cipher, const string& s) {
//   string result;
//   for (char c : s) {
//     if (isupper(c)) {
//       result += toupper(cipher[c - 'A']);
//     } else if (islower(c)) {
//       result += tolower(cipher[c - 'a']);
//     } else {
//       result += c;
//     }
//   }
//   return result;
// }

// void applyRandSubstCipherCommand() {
//   string plaintext;
//   cout << "Enter the plaintext message: ";
//   getline(cin, plaintext);

//   vector<char> cipher(26);
//   iota(cipher.begin(), cipher.end(), 'A');
//   shuffle(cipher.begin(), cipher.end(), Random::rng);

//   string ciphertext = applySubstCipher(cipher, plaintext);
//   cout << "Encrypted message: " << ciphertext << endl;
// }

// #pragma endregion SubstEnc

// #pragma region SubstDec

// double scoreString(const QuadgramScorer& scorer, const string& s) {
//   // TODO: Scoring logic goes here
//   return 0.0;
// }

// void computeEnglishnessCommand(const QuadgramScorer& scorer) {
//   string text;
//   cout << "Enter the text to score: ";
//   getline(cin, text);

//   double score = scoreString(scorer, text);
//   cout << "English-ness score: " << score << endl;
// }

// vector<char> decryptSubstCipher(const QuadgramScorer& scorer,
//                                 const string& ciphertext) {
//   // TODO: Decryption logic based on quadgram analysis goes here
//   return vector<char>{};
// }

// void decryptSubstCipherCommand(const QuadgramScorer& scorer) {
//   string ciphertext;
//   cout << "Enter the ciphertext: ";
//   getline(cin, ciphertext);

//   vector<char> key = decryptSubstCipher(scorer, ciphertext);
//   cout << "Decryption key: ";
//   for (char c : key) {
//     cout << c;
//   }
//   cout << endl;
// }

// #pragma endregion SubstDec
//////////////////////////////////////////////////////////////////

#include <cctype>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "include/caesar_dec.h"
#include "include/caesar_enc.h"
#include "include/subst_dec.h"
#include "include/subst_enc.h"
#include "utils.h"

using namespace std;

// Initialize random number generator in .cpp file for ODR reasons
std::mt19937 Random::rng;

/**
 * Print instructions for using the program.
 */
void printMenu() {
  cout << "Ciphers Menu" << endl;
  cout << "------------" << endl;
  cout << "C - Encrypt with Caesar Cipher" << endl;
  cout << "D - Decrypt Caesar Cipher" << endl;
  cout << "E - Compute English-ness Score" << endl;
  cout << "A - Apply Random Substitution Cipher" << endl;
  cout << "S - Decrypt Substitution Cipher from Console" << endl;
  cout << "R - Set Random Seed for Testing" << endl;
  cout << "X - Exit Program" << endl;
}

int main() {
  Random::seed(time(NULL));
  string command;

  cout << "Welcome to Ciphers!" << endl;
  cout << "-------------------" << endl;
  cout << endl;

  do {
    printMenu();
    cout << endl << "Enter a command (case does not matter): ";

    // Use getline for all user input to avoid needing to handle
    // input buffer issues relating to using both >> and getline
    getline(cin, command);
    cout << endl;

    if (command == "R" || command == "r") {
      string seed_str;
      cout << "Enter a non-negative integer to seed the random number "
              "generator: ";
      getline(cin, seed_str);
      Random::seed(stoi(seed_str));
    }

    cout << endl;

  } while (!(command == "x" || command == "X") && !cin.eof());

  return 0;
}

// "#pragma region" and "#pragma endregion" group related functions in this
file
// to tell VSCode that these are "foldable". You might have noticed the
little
// down arrow next to functions or loops, and that you can click it to
collapse
// those bodies. This lets us do the same thing for arbitrary chunks!
#pragma region CaesarEnc

char rot(char c, int amount) {
  // TODO: student fill this in
  return 'A';
}

string rot(const string& line, int amount) {
  // TODO: student fill this in
  return "";
}

void runCaesarEncrypt() {
  // TODO: student fill this in
}

#pragma endregion CaesarEnc

#pragma region CaesarDec

void rot(vector<string>& strings, int amount) {
  // TODO: student fill this in
}

string clean(const string& s) {
  // TODO: student fill this in
  return "";
}

vector<string> splitBySpaces(const string& s) {
  // TODO: student fill this in
  return vector<string>{};
}

string joinWithSpaces(const vector<string>& words) {
  // TODO: student fill this in
  return "";
}

int numWordsIn(const vector<string>& words, const vector<string>& dict) {
  // TODO: student fill this in
  return 0;
}

void runCaesarDecrypt(const vector<string>& dict) {
  // TODO: student fill this in
}

#pragma endregion CaesarDec

#pragma region SubstEnc

string applySubstCipher(const vector<char>& cipher, const string& s) {
  // TODO: student fill this in
  return "";
}

void applyRandSubstCipherCommand() {
  // TODO: student fill this in
}

#pragma endregion SubstEnc

#pragma region SubstDec

double scoreString(const QuadgramScorer& scorer, const string& s) {
  // TODO: student fill this in
  return 0.0;
}

void computeEnglishnessCommand(const QuadgramScorer& scorer) {
  // TODO: student fill this in
}

vector<char> decryptSubstCipher(const QuadgramScorer& scorer,
                                const string& ciphertext) {
  // TODO: student fill this in
  return vector<char>{};
}

void decryptSubstCipherCommand(const QuadgramScorer& scorer) {
  // TODO: student fill this in
}

#pragma endregion SubstDec