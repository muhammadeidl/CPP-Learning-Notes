

//Type Casting

/*
--> Type casting is the process of converting a variable from one data type to another.
--------
#include <iostream>
using namespace std;

int main() {
    float x = 7.9; // Declare x as float with value 7.9
    int y;         // Declare y as int

    y = (int)x;    // Cast x from float to int (removes decimal part)

    cout << "x (float) = " << x << endl;           // Print x as float
    cout << "y (int) after casting = " << y << endl; // Print y as int after casting

    return 0;
}
--------
#include <iostream>
using namespace std;

int main() {
    int x = 10;    // Declare x as int with value 10
    float y;       // Declare y as float

    y = (float)x;  // Cast x from int to float

    cout << "x (int) = " << x << endl;             // Print x as int
    cout << "y (float) after casting = " << y << endl; // Print y as float after casting

    return 0;
}
--------------
#include <iostream>
using namespace std;

int main() {
    char x = 'B';  // Declare x as char with value 'B'
    int y;         // Declare y as int

    y = (int)x;    // Cast x from char to int (converts to ASCII value)

    cout << "x (char) = " << x << endl;            // Print x as char
    cout << "y (int) after casting = " << y << endl; // Print y as int after casting

    return 0;
}
-------------


*/

//Lesson #14 (When to use \n vs endl)

/*

Ders14:


- When to use \n:

    Use it when you want a new line only.

    It's faster and better for normal output, especially when printing many things.

    It does not flush the buffer, so it's more efficient.

- When to use endl:

    Use it when you need the output to be printed immediately.

    Helpful when you're debugging or waiting for user input, to make sure everything appears on the screen.

    It flushes the buffer, which makes it slower if used too often.



*/

//Lesson #15 (C++ Comments)

/*

Ders15:
C++ Coments..

<< Coments are used to explain the code, and to make it more readable. >>

1) Single-line comments 
    Ex: cout<< "Hello World"; // This is a single-line comment

2) Multi-line comments
   Ex: /*This is a multi-line comment

        It can span multiple lines 

*/

//Lesson #16 (Literals and Escape Sequences)

/*

 Literals and Escape Sequences:
---------------------------------
1)Literals:

<<Literals are fixed values written directly in the code.>>

Examples:
---
* Integer: 7, -5
* Float: 3.14
* Char: 'A' ,@ , $ ................etc
* String: "Hello"
* Boolean: true, false
---

2)Escape Sequences:

<<Special characters written with a backslash `\` used inside strings or characters.>>

Examples:
---
`\n` → New line
`\t` → Tab space
`\\` → Backslash
`\"` → Double quote
`\'` → Single quote


#include <iostream>
using namespace std;
int main()
{
    cout << "A\B   " << endl; //AB
    cout << "A\\B" << endl; //A\B
    cout << "A\\B\\C\\D" << endl; //A\B\C\D
    cout << "Muhammad Eid Is \"My Name\""; //Muhammad Eid Is "My Name"
    cout << "\a"; //Gives you Sound (Ring bell sound)


    return 0;
}


---


*/


////Lesson #17 (Variables in C++)

/*

Ders17:

 Variables:
------------

For Declaring(Creating) Variables in C++:
Syntax:

    << type variable_name= value; >>
    Ex: int myAge = 20;
    cout << myAge; // Outputs: 20
    ---

    //
    
    #include <iostream>
    using namespace std;
    int main()
    {

    int myAge = 45;
    cout <<"1. Age Is : "<< myAge << endl; //45

    myAge = 50;
    
    cout << "2. Age Is : "<< myAge << endl; //50
    int x = 3, y = 4;
    int sum = x + y;
    cout << "Sum is = " << sum <<endl;

    const float PI = 3.14;
    cout << PI << endl;
    return 0;

    }




1) Fundamental (Built-in) Data Types:

These are basic types provided by C++.

Examples:
---
* `int` → integers
* `float`, `double` → decimals
* `char` → single character
* `bool` → true or false
* `void` → no value (used in functions)
---

2) Derived Data Types:

These are built using fundamental types.

Examples:
---
* **Arrays** → `int numbers[5];`
* **Pointers** → `int* ptr;`
* **Functions** → return and take data types
* **References** → `int& ref = x;`
---

3) User-Defined Data Types:

You can create your own types using these.

Examples:
---
* `struct` → groups variables
* `union` → memory-saving struct
* `enum` → named integer constants
* `class` → used in OOP to create objects
* `typedef` / `using` → give new names to types
---


*/


////Lesson #18 (User Input and Output in C++)

/*

    >> User Input and Output in C++:

    #include <iostream>
    using namespace std;
    int main()
    {   

	char myChar;
	int myNumber;
	cout << "Please Enter a character:"<<endl;
	cin >> myChar;
	cout << "Please Enter a Number:" << endl;
	cin >> myNumber;
	cout << "======================================" << endl;
	cout << "You Entered this Char:  , " << myChar << " and this Number: " << myNumber << endl;

	return 0;
    }


1.Homework:



    #include <iostream>
    using namespace std;
    int main()
    {   

	
	string Name;
	int Age;
	string City;
	string Country;
	int day;
	float mounth;
	double year;
	string whatYourGender;
	bool IsMarried;

	cout << "Hello My Friend for 1. homework ... " << "\a" << endl;
	cout << "Please Enter Your Age :" << endl;
	cin >> Age;
	cout << "Please Enter Your Name :" << endl;
	cin >> Name;
	cout << "Please Enter Your City :" << endl;
	cin >> City;
	cout << "Please Enter Your Country :" << endl;
	cin >> Country;
	cout << "Please Enter Your Day :" << endl;
	cin >> day;
	cout << "Please Enter Your Mounth :" << endl;
	cin >> mounth;
	cout << "Please Enter Your Year :" << endl;
	cin >> year;
	cout << "Please Enter Your Married if you really Married :" << endl;
	cin >> IsMarried;
	cout << "Please Enter your Geneder.. For Male write M, For Female F.. :)" << endl;
	cin >> whatYourGender;

	cout << "-------------------------------------------------"<<endl;
	cout << "Your Age : " << Age<<",  Your Name Is : "<<Name<<",  Your City is : "<<City<<",  Your country is : "<<Country<<"." << endl;
	cout << "Your Date is : " << day << "." << mounth << "." << year << endl;
	cout << "Your Gender is : " << whatYourGender<<endl;
	cout << "Married Or Not : " << IsMarried << endl<<endl;
	cout << "-------------------------------------------------" << endl;

	    return 0;
    }

2. Homework:


    #include <iostream>
    using namespace std;
    int main()
    {      
	int firstNumber;
	int secondNumber;
	int thirdNumber;

	
	
	cout << "Please Ener First Number : " << endl;
	cin >> firstNumber;
	cout << "Please Ener second Number : " << endl;
	cin >> secondNumber;
	cout << "Please Ener third Number : " << endl;
	cin >> thirdNumber;

	int sum = firstNumber + secondNumber + thirdNumber;
	cout << "-----------------" << endl;
	cout << "The Sum of Numbers Is: " << sum << endl;
	cout << "-------------------" << endl;
	return 0;
    }


3. Homework:





	#include <iostream>
	using namespace std;
	int main()
	{   
	
		int YourAgeThisYear;
		cout << "-----------------------------------------------" << endl;
		cout << "Please Enter Your Year : " << endl;
		cout << "-----------------------------------------------" << endl;
		cin >> YourAgeThisYear;
		int yourAgeAfterFiveYear = YourAgeThisYear + 5;
		cout << "-----------------------------------------------" << endl;
		cout << "Your Year After 5 Year Is: " << yourAgeAfterFiveYear << endl;
		cout << "-----------------------------------------------" << endl;
	return 0;
	}






*/

//Lesson #19 (DataTypes Sizes & Ranges in C++)

/*

Ders19: DataTypes Sizes & Ranges in C++:


	#include <iostream>
	using namespace std;
	int main()
	{   
		cout << "----------------------------------------------------------------" << endl;
		cout << "char Range: (" << CHAR_MIN << "," << CHAR_MAX << ")\n";
		cout << "unsigned char Range: (" << 0 << "," << UCHAR_MAX << ")\n";
		cout << "short int Range: (" << SHRT_MIN << "," << SHRT_MAX << ")\n";
		cout << "unsigned short int Range: (" << 0 << "," << USHRT_MAX << ")\n";
		cout << "int  Range: (" << INT_MIN << "," << INT_MAX << ")\n";
		cout << "unsigned int Range: (" << 0 << "," << CHAR_MAX << ")\n";
		cout << "long int Range: (" << CHAR_MIN << "," << UINT_MAX << ")\n";
		cout << "unsigned long int Range: (" << LONG_MIN << "," << LONG_MAX << ")\n";
		cout << "long long int Range: (" << 0 << "," << ULLONG_MAX << ")\n";
		cout << "unsigned long long int Range: (" << FLT_MIN << "," << FLT_MAX << ")\n";
		cout << "float Range: (" << -FLT_MIN << "," << CHAR_MAX << ")\n";
		cout << "float(negative) Range: (" << CHAR_MIN << "," << -FLT_MAX << ")\n";
		cout << "double Range: (" << DBL_MIN << "," << DBL_MAX << ")\n";
		cout << "double(negative) Range: (" << -DBL_MIN << "," << -DBL_MAX << ")\n";
		cout << "long double Range: (" << LDBL_MIN_10_EXP << "," << LDBL_MAX_10_EXP << ")\n";
		cout << "----------------------------------------------------------------" << endl;

	return 0;
	}


*/

//Lesson #20 (Arithmetic Operators in C++)

/*

Arithmetic Operators in C++:
-----------------------------

1) Addition: `+`
   - Adds two numbers. Example: `5 + 3 = 8`

2) Subtraction: `-`
   - Subtracts the second number from the first. Example: `5 - 3 = 2`

3) Multiplication: `*`
   - Multiplies two numbers. Example: `5 * 3 = 15`

4) Division: `/`
   - Divides the first number by the second. Example: `6 / 3 = 2`

5) Modulus: `%`
   - Returns the remainder of the division of the first number by the second. Example: `5 % 3 = 2`
------------------------------------------------------
------------------------------------------------------

	#include <iostream>
	using namespace std;
	int main()
	{   
		int A = 10;
		int B = 8;

		cout << "--------------------"<<endl;
		cout << " A + B = " << A + B << endl; //18
		cout << " A - B = " << A - B << endl; //2
		cout << " A * B = " << A * B << endl; //80
		cout << " A / B = " << A / B << endl; //1
		cout << " A % B = " << A % B << endl; //2
		cout << "--------------------" << endl;

	return 0;
	}
------------------------------------------------------
-------------------------------------------------------

*/

//Lesson #21 (Increment & Decrement Operators in C++)

/*
Ders21:
Increment & Decrement Operators: ++, --



#include <iostream>
using namespace std;
int main()
{
	int a = 10, b = 20;
	cout << "a= " << a << endl; //10 
	cout << "b= " << b << endl; //20 
 	a++;
	b--;
	cout <<"a= "<< a<<endl; //11 (Same As a = a + 1)
	cout << "b= " << b << endl; //19 (Same As b = b - 1)
	++a;
	--b;
	cout << "a= " << a << endl; // 11=11+1 >> a=12
	cout << "b= " << b << endl; // 19= -1 +19 >> b=18 
	b--;
	cout << "b= " << b << endl; // 18 = -1 +18 >> b=17 



	return 0;
}






*/

// Lesson #22 (Postfix A-- A++ vs Prefix --A ++A Operators)

/*
Ders22:

1) Postfix : A-- vs A++


#include <iostream>
using namespace std;
int main()
{

	int a = 10, b = 7;

	int c = a++;
	int d = b--;
	cout << "PostFix: " << c<<endl;   //10 yazdirlacaktir. Sonra bir artilacak    c=10+1 >> c=11 olacaktir.
	cout << "PostFix: " << d << endl; //7 yazdirlacaktir. Sonra bir kaldirilcak   c=7-1 >> c=6 olacaktir.

	c = a;
	cout << c<<endl; //11
	d = b;
	cout << d << endl; //6
	return 0;
}



2) Prefix : ++A vs --A



#include <iostream>
using namespace std;
int main()
{

	int a = 10, b = 7;

	int c = ++a;
	int d = --b;
	cout << "PreFix: " << c<<endl;   //1+10=11 yazdirlacaktir. >> c=11 olacaktir.
	cout << "PreFix: " << d << endl; //-1+7=6 yazdirlacaktir.  >> c=6 olacaktir.

	c = a;
	cout << c<<endl; //11
	d = b;
	cout << d << endl; //6
	return 0;
}


*/

//Lesson #23 (Assignment Operators in C++)

/*

Ders23:

Assignment Operators in C++:
------------------------------------------------------
1) Assignment: `=`

   - Assigns a value to a variable. Ex: x = 5;
------------------------------------------------------
2) Add and Assign: `+=`

   - Adds a value to a variable and assigns the result. Ex: x += 3; same as x = x + 3;
 -----------------------------------------------------
3) Subtract and Assign: `-=`

   - Subtracts a value from a variable and assigns the result. Ex: x -= 2; same as x = x - 2;
------------------------------------------------------
4) Multiply and Assign: `*=`

   - Multiplies a variable by a value and assigns the result. Ex: x *= 4; same as x = x * 4;
------------------------------------------------------   
5) Divide and Assign: `/=`

   - Divides a variable by a value and assigns the result. Ex: x /= 2; same as x = x / 2;
------------------------------------------------------
6) Modulus and Assign: `%=`

   - Takes the modulus of a variable with a value and assigns the result. Ex: x %= 3; same as x = x % 3;
------------------------------------------------------


#include <iostream>
using namespace std;
int main()
{
	int a = 25, b = 5;
	a += b;  // a=a+b
	cout << "a= " << a << endl; //a=30

	a -= b; //  a=a-b
	cout << "a= " << a << endl; //30-5=25 >> a=25 
	
	a *= b; // a=a*b
	cout << "a= " << a << endl; //25*5=125 >> a=125
	
	a /= b; // a=a/b
	cout << "a= " << a << endl; //125/5=25 >> a=25
	
	a %= b; // a=a%b
	cout << "a= " << a << endl; //25%5=0 >> a=0
	
	return 0;
}



*/

//Lesson #24 (Relational Operators in C++)

/*

Ders24:
------------------------------------------------------
Relational Operators in C++:
------------------------------------------------------
1) Equal to: `==`
   - Checks if two values are equal. Ex: a == b

2) Not equal to: `!=`
   - Checks if two values are not equal. Ex: a != b

3) Greater than: `>`
   - Checks if the left value is greater than the right value. Ex: a > b

4) Less than: `<`
   - Checks if the left value is less than the right value. Ex: a < b

5) Greater than or equal to: `>=`
   - Checks if the left value is greater than or equal to the right value. Ex: a >= b

6) Less than or equal to: `<=`
   - Checks if the left value is less than or equal to the right value. Ex: a <= b
------------------------------------------------------



#include <iostream>
using namespace std;
int main()
{
	int a = 25, b = 5;
	cout << (a == b) << endl; //0
	cout << (a != b) << endl; //1
	cout << (a > b) << endl; //1
	cout << (a < b) << endl; //0
	cout << (a >= b) << endl; //1
	cout << (a <= b) << endl; //0
	return 0;
}


//Homework:

#include <iostream>
using namespace std;
int main()
{
	int a , b ;
	cout << "Ener Value For A...\n";
	cin >> a;
	cout << "Enter Value For B...\n";
	cin >> b;
	cout << "---------------\n";
	cout << (a == b) << endl; //0
	cout << (a != b) << endl; //1
	cout << (a > b) << endl; //1
	cout << (a < b) << endl; //0
	cout << (a >= b) << endl; //1
	cout << (a <= b) << endl; //0
	cout << "---------------";
	return 0;
}


*/

//Lesson #25 (Logical Operators in C++)

/*

Logical Operators in C++:
------------------------------------------------------
1) Logical AND: `&&`
   - Returns true if both operands are true. Ex: (a > b) && (c > d)

2) Logical OR: `||`
   - Returns true if at least one operand is true. Ex: (a > b) || (c > d)

3) Logical NOT: `!`
   - Reverses the logical state of its operand. Ex: !(a > b)
------------------------------------------------------


#include <iostream>
using namespace std;
int main()
{

	bool a = 1, b = 0;
	
	cout << (a && b) << endl; //0
	cout << (a || b) << endl; //1
	cout << !a << endl; //0
	cout << !b << endl; //1
	cout << !(a && b) << endl; //1
	cout << !(a || b) << endl; //0
	cout << "-------------------------" <<endl;
	bool result;
	result = !(5 > 6 || 7 == 7) && !(1 || 0); // 0 && 0 >>>>> 0
	cout << result << endl;
	result = (5 < 6 || 7 == 7) && !(0 || 0); // (1 || 1) && !(0) >>> 1 && 1 = 1 true7
	cout << result << endl;
	result = (2 > 5 || !4 == 4) || !3 == 5; // (0 || 0) || 1 >> 1 Yani True
	cout << result << endl;
	result = (2 == 2 && 5 == 5) || (!2 == 4) && (10 > 2); // (1) || (1) && (1) >> 1 Yani true
	cout << result << endl;
	result = (!(2 == 7) && ((2 < 1) || !(1 == 5))) || (!3 == 7); //1
	cout << result << endl;
	cout << "-------------------------" << endl;


	
	return 0;
}










*/


// Lesson #26 (Math Functions in C++)

/*

-Math Functions in C++:
------------------------------------------------------
C++ provides several built-in math functions in the `<cmath>` library.
------------------------------------------------------
1) Absolute value --> abs(x) - Returns the absolute value of x.
	Ex: abs(-10) = 10

2) Square root --> sqrt(x) - Returns the square root of x.
	Ex: sqrt(25) = 5

3) Power --> pow(x, y) - Returns x raised to the power of y.
	Ex: pow(2, 3) = 8

4) Maximum --> max(x, y) - Returns the maximum of x and y.
	Ex: max(10, 20) = 20

5) Minimum --> min(x, y) - Returns the minimum of x and y.
	Ex: min(10, 20) = 10

6) Round --> round(x) - Rounds x to the nearest integer.
	Ex: round(4.3) = 4, round(4.7) = 5, round(4.5) = 5

7) Ceil --> ceil(x) - Rounds x up to the nearest integer.
	Ex: ceil(4.1) = 5, ceil(4.9) = 5, ceil(4.7) = 5, ceil(4.5) = 5, ceil(5.0) = 5
	كلمة ceil  "السقف" أو "الحد الأعلى"، حيث تقوم هذه الدالة بتقريب الرقم إلى أقرب عدد صحيح أكبر أو يساوي الرقم نفسه.

8) Floor --> floor(x) - Rounds x down to the nearest integer.
	Ex: floor(4.9) = 4, floor(4.1) = 4, floor(5.0) = 5, floor(-2.1) = -3, floor(-2.9) = -3
	كلمة floor  "الأرضية" أو "الحد الأدنى"، حيث تقوم هذه الدالة بتقريب الرقم إلى أقرب عدد صحيح أقل أو يساوي الرقم نفسه.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

	int x = 16;
	cout << "-------------------------" << endl;
	cout<<sqrt(16)<<endl; //4
	cout << sqrt(x) << endl; // 4
	cout << sqrt(4 * 4) << endl; //4
	cout << "-------------------------" << endl;
	cout << round(1.4) << endl; //gives 1
	cout << round(1.7) << endl; //gives 2
	cout << round(5.3) << endl; //gives 5
	cout << round(5.8) << endl; //gives 6
	cout << "-------------------------" << endl;
	cout << round(5.5) << endl; //gives 6
	cout << round(1.5) << endl; //gives 2
	cout << "-------------------------" << endl;
	cout << sqrt(55) << endl; // 7.4162
	cout << "-------------------------" << endl;
	cout << round(sqrt(55)) << endl; //7
	cout << round(2.6) + round(2.4) << endl; // 3+2=5
	cout << round(round(2.7) + round(1.3)) << endl;//4
	cout << round(2.8) / 3 << endl; // 3/3 = 1
	cout << (round(2.8)*(2) )<< endl; //3*2 = 6
	cout << round(8 % 3) << endl; //8%3 yani 2.1837483 >> yani 2 olacaktir
	cout << "------------------------" << endl;
	cout << sqrt(125 / 5) << endl; // 125/5 =25 >> sqrt(25) = 5

	cout << "------------------------" << endl;
	cout << pow(2, 3) << endl; // 2^3 = 8
	cout << pow(5, 3) << endl; // 5^3 = 125
	int a = 4, b = 3;
	cout << pow(a, b) << endl; // a^b=4^3=64
	cout << pow(4, 3) << endl; //64
	// yani biz onceden boyle yapiyorduk
	// int x=2;
	// x=x*x; suan boyle kullanacagiz x=pow(x,2);

	int r = 3;
	r = pow(r, 2);
	cout << r << endl; //pow(3,2)=3^2=9
	cout << "---------------" << endl;
	cout << ceil(2.9) << endl; //3
	cout << ceil(2.1) << endl; //3
	cout << ceil(2.0) << endl; //2
	cout << ceil(2.01) << endl; //3
	cout << ceil(2.5) << endl; //3
	cout << "----------------" << endl;
	cout << "----------------" << endl;
	cout << floor(2.9) << endl; //2
	cout << floor(2.1) << endl; //2
	cout << floor(2.0) << endl; //2
	cout << floor(1.99) << endl; //1
	cout << floor(2.01) << endl; //2
	cout << floor(2.5) << endl; //2
	cout << "----------------" << endl;
	cout << abs(-10) << endl; //10
	cout << abs(10) << endl; //10
	return 0;
}


*/


// Lesson #27 ( Structures(User-Defined Data Types) in C++ )

/*
- Structures (التراكيب) is User-Defined Data Typs.
- A structure is a way to create your own custom data type that can contain multiple types of data in one unit.

- For Ex; imagine you want to store information about a student: their name, age, and grade.
  Instead of creating three separate variables,
  you can put them all inside one structure called Student.


- Instead of creating 3 separate variables: //بدل ما تعمل 3 متغيرات

	string name;
	int age;
	float grade;

- You can group them in one structure: //ممكن تجمعهم في structure واحدة


struct Student {

  	string name;
 	int age;
    float grade;

	};


- How do we use it?

	Student s1;
	s1.name = "Ali";
	s1.age = 21;
	s1.grade = 90.5;

- Why do we use it?
Because it:

1)- Organizes data.
2)- Makes code easier.
3)-Keeps your program clean and clear.

-----
ما الغاية من الـ Structures (التراكيب)؟
الغاية ببساطة هي:

تجميع بيانات مرتبطة ببعضها في كيان واحد منظم.

يعني مثلاً:

إذا عندك معلومات عن كتاب (اسمه، مؤلفه، عدد صفحاته، لغته، تاريخه)...
كلها تخص شيء واحد: الكتاب.

فبدل ما تكتب كل واحدة في متغير لحال، نضعها داخل "علبة" اسمها Book.
هذه العلبة هي الـ structure.
-----
 ما عيوب الطريقة التقليدية؟
الكثير من المتغيرات، والكود يصبح غير مرتب.

يصعب التعامل مع عدد كبير من الكتب (ستحتاج لمزيد من المتغيرات).

لا يوجد تنظيم يربط بيانات كل كتاب ببعضها.

لو أردت دالة تأخذ "كتابًا" كوسيط، سيكون من الصعب تمرير كل القيم يدويًا.
-----

-----
فوائد استخدام struct:
يجمع كل البيانات المتعلقة بشيء معين (مثل كتاب) في كيان واحد.

يسهل توسيع البرنامج والتعامل مع عدد كبير من العناصر.

الكود يصبح أوضح وأسهل للفهم.
-----

#include <iostream>
#include <cmath>
using namespace std;

struct Araba {
	string reng;
	string model;
	int fiyat;
};


struct Ev {
	string postaKod;
	string sokak;
	int bina;
	int daire;
	string mahalle;
};

int main()
{
	Araba BenimArabam1;
	BenimArabam1.reng = "Siyah";
	BenimArabam1.model = "BMW";
	BenimArabam1.fiyat = 1200;

	cout << "Benim Arabamin Belgeleri Bunlardir: " << endl;
	cout << "------------------" <<endl;
	cout << "Reng: " << BenimArabam1.reng <<endl;
	cout << "Model: " << BenimArabam1.model <<endl;
	cout<<"Fiyat: "<< BenimArabam1.fiyat << endl;
	cout << "------------------" << endl<<endl;
	
	Ev evimiz;
	evimiz.mahalle = "Hasapasa Mah.";
	evimiz.postaKod = 12345;
	evimiz.sokak = "Hisar SK";
	evimiz.bina = 10;
	evimiz.daire = 5;

	cout << "Benim Evimizin Belgeleri Bunlardir: " << endl;
	cout << "------------------" << endl;
	cout << "Mahalle Adi: " << evimiz.mahalle << endl;
	cout << "Posta Kodu: " << evimiz.postaKod << endl;
	cout << "Sokak Adi: " << evimiz.sokak << endl;
	cout << "Bina No: " << evimiz.bina<< endl;
	cout << "Daire No: " << evimiz.daire << endl;
	cout << "------------------" << endl;

	return 0;
}

---------

#include <iostream>
#include <cmath>

using namespace std;

struct Book {  // ال Book هو data type الأن

	string name;
	string author;
	int paperNo;
	string date;
	string language;

};

int main()
{
	Book book1, book2; 

	book1.name = "Nabiz-Laylam";
	book1.author = "Ahmad Omar";
	book1.paperNo = 200;
	book1.language = "Arabic";
	book1.date = "20.02.2009";

	book2.name = " AlRahik El-Makhtoom";
	book2.author = "Adnan Muhammad";
	book2.paperNo = 450;
	book2.language = "Turkhish";
	book2.date = "12.11.2006";

	cout << "--------------------------------------------------------------------------------\n";
	cout <<"1.Book Data:   " <<book1.name << ", " << book1.author << ", " << book1.paperNo << ", "
	<< book1.language << ", " << book1.date << "." << endl;
	cout << "--------------------------------------------------------------------------------\n";

	cout << "2.Book Data:  "<< book2.name << ", " << book2.author << ", " << book2.paperNo << ", "
	<< book2.language << ", " << book2.date << "." << endl;
	cout << "--------------------------------------------------------------------------------\n";

	return 0;
}
---------

#include <iostream>
#include <cmath>
using namespace std;
struct stAdress {
	string country;
	string city;
	int postaCode;
	string email;
	string phone;
};
struct stOwner {
	string fullName;
	int idNo;
	int age;
	stAdress address;
};
struct Car {
	string brand;
	string model;
	string color;
	stOwner owner;
	};
int main() {
	string a;
	Car car1;
	cout << "------------------------\n";
	cout << "Please Enter The Brand Of Car: " << endl;
	cin >> car1.brand;
	cout << "Please Eenter The Model Of Car:  " << endl;
	cin >> car1.model;
	cout << "Please Eenter The Color Of Car:  " << endl;
	cin >> car1.color;
	cout << "------------------------\n";
	cout << "Please Eenter The Full Name For Owner:  " << endl;
	cin >> car1.owner.fullName;
	cout << "Please Eenter The ID No For Owner:  " << endl;
	cin >> car1.owner.idNo;
	cout << "Please Eenter The Age For Owner:  " << endl;
	cin >> car1.owner.age;
	cout << "------------------------\n";
	cout << "Please Enter The Country: " << endl;
	cin >> car1.owner.address.country;
	cout << "Please Enter The city: " << endl;
	cin >> car1.owner.address.city;
	cout << "Please Enter The Posta Code: " << endl;
	cin >> car1.owner.address.postaCode;
	cout << "Please Enter The Phone Number: " << endl;
	cin >> car1.owner.address.phone;
	cout << "Please Enter The E-mail Address: " << endl;
	cin >> car1.owner.address.email;
	cout << "------------------------\n";
	cout << "Please Enter Anything.." << endl;
	cin >> a;
	cout << "------------------------\n";
	cout << "Car Information Is: \n" << "Brand: " << car1.brand << ", Model: " << car1.model << ", Color: " << car1.color << endl;
	cout << "The Full Name For Owner: " << car1.owner.fullName << ", ID No: " << car1.owner.idNo << ", Age: " << car1.owner.age << endl;
	cout << "Country: " << car1.owner.address.country << ", City: " << car1.owner.address.city << ", Posta Code: " << car1.owner.address.postaCode << endl;
	cout << "Phone Number: " << car1.owner.address.phone << ", E=mail: " << car1.owner.address.email << endl<<endl;
	cout << "The End.." << endl;

	return 0;
}
---------

*/


//Lesson #28 (Enums(User-Defined Data Types) In c++)

/*
- An enumeration is a distinct type whose values is restricted to a range of values.

- Enums (التعدادات) هي نوع بيانات معرف من قبل المستخدم في C++.
- يمكن استخدامها لتحديد مجموعة من القيم الثابتة.
- تجعل الشيفرة أكثر وضوحًا وسهولة في الصيانة.

----
#include <iostream>
#include <cmath>
using namespace std;
enum Color {Red, Green, Yellow, Blue};
enum Directions {North, South, East, West};
enum Week{Sat, Sun, Mon, Tue, Wed, Thu, Fri};
enum Gender {Male, Female};
enum Status {Single=100, Married=-100};

int main() {
	Color MyColor;
	MyColor = Color::Yellow; //2

	Directions MyDirections;
	MyDirections = Directions::South;//1

	Week MyWeek;
	MyWeek = Week::Wed; //4

	Gender MyGender;
	MyGender = Gender::Male; //0

	Status MyStatus;
	MyStatus = Status::Married; //-100

	cout << "Color Is: " << MyColor << endl;
	cout << "Directions Is: " << MyDirections << endl;
	cout << "Week Is: " << MyWeek << endl;
	cout << "Gender Is: " << MyGender << endl;
	cout << "Status Is: " << MyStatus << endl;
	return 0;
}
----    




*/


//Lesson #29 (Nested Structures and Enums-For Partical Examples)

/*

#include <iostream>
#include <cmath>
using namespace std;

enum enColor {Red, Green, Yellow, Blue};
enum enGender {Male, Female};
enum enMaritalStatus {Single, Married};

struct stAddress {
	string StreerName;
	int BuildingNo;
	string POBos;
	string ZipCode;
};
struct stContactInfo {
	string phone;
	string Email;
	stAddress Address;
};
struct stPerson {
	string FirstName;
	string LastName;

	stContactInfo ContactInfo;

	stAddress AddressInfo;
	
	enColor FavourateColor;
	enMaritalStatus  MaritalStatues;
	enGender Gender;

};

int main() {
	stPerson person1;
	person1.FirstName = "Muhammad";
	person1.LastName = "Eid";

	person1.ContactInfo.phone = "04331290";
	person1.ContactInfo.Email = "muhEid22@hotmail.com";

	person1.ContactInfo.Address.StreerName = "Hisar SK";
	person1.ContactInfo.Address.BuildingNo = 10;
	person1.ContactInfo.Address.ZipCode = "12345";
	person1.ContactInfo.Address.POBos = "3333";

	person1.FavourateColor = enColor:: Green;
	person1.MaritalStatues = enMaritalStatus::Single;
	person1.Gender = enGender::Male;

	cout << "--------------------------------" << endl;
	cout << "The First Name Is: " << person1.FirstName << endl;
	cout << "The Last Name Is: " << person1.LastName<<endl;
	cout << "--------------------------------" << endl;
	cout << "The Phone Number Is: " << person1.ContactInfo.phone << endl;
	cout << "E-mail: " << person1.ContactInfo.Email << endl;
	cout << "--------------------------------" << endl;
	cout << "Street Name: " << person1.ContactInfo.Address.StreerName << endl;
	cout << "Building No: " << person1.ContactInfo.Address.BuildingNo << endl;
	cout << "Zip Code: " << person1.ContactInfo.Address.ZipCode << endl;
	cout << "PoBos: " << person1.ContactInfo.Address.POBos << endl;
	cout << "--------------------------------" << endl;
	cout << "The Favoirate Color Is: " << person1.FavourateColor << endl;
	cout << "The Marital Statues Is: " << person1.MaritalStatues << endl;
	cout << "The Gendor Is: " << person1.Gender << endl;
	cout << "--------------------------------" << endl;
	return 0;
}



*/


//Lesson #30 (Data Type Conversion --> Casting Data Types)

/*


----
#include <iostream>
#include <cmath>
using namespace std;
int main() {

	int num1;
	double num2 = 18.88;
	num1 = num2; // Implicit Conversion From double to int
	cout << num1<<endl; //18

	num1 = int(num2);
	cout << num1 << endl; //18 Explicit Conversion

	num1 = (int)num2; //18
	cout << num1 << endl;

	return 0;
}
-----
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string str_num = "123.566";

	//Converting string to int
	int int_num = stoi(str_num);   //stoi --> string to int
	cout << int_num << endl;

	return 0;
}
-----
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string str_num = "123.566";

	//Converting string to double
	double double_num = stod(str_num);   //stod --> string to double
	cout << double_num << endl;

	return 0;
}
-----
#include <iostream>
#include <string>
using namespace std;
int main() {
	
	string str_num = "123.566";

	//Converting string to float
	float float_num = stof(str_num);   //stof --> string to float
	cout << float_num << endl;

	return 0;
}
-----
#include <iostream>
#include <string>
using namespace std;

//Convert Numbers To string

int main() {
	
	int num1 = 1234;
	double num2 = 1234.56789;

	string str1, str2;


	str1 = to_string(num1);
	str2 = to_string(num2);
	
	cout << "From int to string --> " <<num1<< endl; //1234
	cout << "From double to string --> " << num2 << endl; //1234.57

	return 0;
}
-----
#include <iostream>
#include <string>
using namespace std;

//Convert Numbers To string

int main() {
	
	string str1;
	str1 = "43.22";

	double str_to_double = stod(str1);
	float str_to_float = stof(str1);
	int str_to_int = stoi(str1);
	//------------------------------

	int N1;
	N1 = 20;
	string n1 = to_string(N1);
	//------------------------------
	double N2 = 35.56789;
	string n2 = to_string(N2);
	//------------------------------
	float N3 = 55.23;
	string n3_str = to_string(N3);
	int n3_int = int(N3);
	//------------------------------
	cout << "-------------------------------" << endl;
	cout << "convert str1 from sting to double --> :" << str_to_double << endl;
	cout << "convert str1 from sting to float --> :" << str_to_float << endl;
	cout << "convert str1 from sting to int --> :" << str_to_int << endl;
	cout << "-------------------------------" << endl;
	cout << "convert N1 from int to string --> :" << n1 << endl;
	cout << "-------------------------------" << endl;
	cout << "convert N2 from double to string --> :" << n2 << endl;
	cout << "-------------------------------" << endl;
	cout << "convert N3 from float to string --> :" << n3_str<< endl;
	cout << "convert N3 from float to int --> :" << n3_int << endl;
	return 0;
}
-----
*/


//Lesson #31 (Strings)

/*
----

--> String: is Array of Characters.
--> A string variable contains a collection of characters surrounded by double quotes.

----
#include <iostream>
#include <string>
using namespace std;


int main() {
	string str1, str2,str3;
	str1 = "Muhammad";
	str2 = " Eid";
	str3 = str1 + str2;

	cout << "The Full Name --> : " << str3 << endl;
	return 0;
}
----
#include <iostream>
#include <string>
using namespace std;

int main() {
	string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << "The Length Of MyString Is: " << myString.length() << endl;
	cout << myString[0] << endl; //Will Print A
	cout << myString[1] << endl; //Will Print B
	cout << myString[2] << endl; //Will Print C
	cout << myString[4] << endl; //Will Print D
	cout << "------------" << endl;
	string s1="10", s2="20";
	string s3 = s1 + s2;

	cout << "------------" << endl;
	cout << s3<< endl; //1020
	cout << "------------" << endl;
	int sum = stoi(s1) + stoi(s2);
	cout << sum << endl; //30
	return 0;
}
----
--> Read string with spaces
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!" << endl;
----
#include <iostream>
#include <string>
using namespace std;

int main() {
	string fullName, str2 , str3, str4;  //
	cout << "Please Enter string1 ?" << endl;
	getline(cin, fullName);
	cout << "Please Enter string 2 ? " << endl;
	cin >> str2;
	cout << "Please Enter string 3 ? " << endl;
	cin >> str3;
	cout << "------------------" << endl;
	cout << "the string 1 Is --> : " << fullName << endl;
	cout << "The Length Of string1 Is: "<<fullName.length() << endl;
	cout << "Charecters at 0,2,4,7 are --> : " << fullName[0]<< ", " << fullName[2] << ", " << fullName[4] << ", " << fullName[7] <<"."<< endl;
	cout << "------------------" << endl; 
	str4 = str2 + str3;
	cout << "Concatenating string2 and string3 --> " << str4 << endl;
	cout << "------------------" << endl;
	int str_to_int1, str_to_int2, multi;
	str_to_int1 = stoi(str2);
	str_to_int2 = stoi(str3);
	multi = str_to_int1 * str_to_int2;
	cout << "The End Of Rsult Is: " << multi << endl;
	cout << "------------------" << endl;
	return 0;
}
----
*/


//Lesson #32 (Functions I)

/*
--> A Function is a block of code which only runs when it is called.
--> They help in organizing code, improving readability, and reducing redundancy.
--> Functions can take inputs (parameters) and can return outputs (return values).

----
#include <iostream>
using namespace std;

void printLine()
{
	cout << "--------------------------------------\n";
}

void carInfo()
{
	cout << "**************************************\n";
	cout << "* Car Brand Is : BMW                 *\n";
	cout << "* Car Model Is : X5                  *\n";
	cout << "* Car Color Is : Yellow              *\n";
	cout << "* Owner Of Car Is : Muhammad Eid     *\n";
	cout << "**************************************\n";
}

int main() {
	//printLine();
	carInfo();
	//printLine();
	return 0;
}
----    


*/


//Lesson #34 (Functions Part II --> Functions vs Procedures)

/*

--> Functions: are blocks of code that return a value.
--> Procedures: are blocks of code that do not return a value.

----
#include <iostream>
#include <string>
using namespace std;

void printLine()
{
    cout << "----------------------------\n";
}

string myFunc1()
{
	return "Hello.. This is The Second my func..." ;
}

int myFunc2()
{
	int x=10, y=20;
	int z = x + y;
	return z;
}

int main() {
	int result;
	result = myFunc2()/3;
	printLine();
	cout << result << endl;
	printLine();
	return 0;
}
----
#include <iostream>
#include <string>
using namespace std;

void printLine()
{
	cout << "----------------------------\n";
}

string myFunc1()
{
	return "Hello.. This is The Second my func..." ;
}

int myFunc2()
{
	int x=10, y=20;
	int z = x + y;
	return z;
}
float myFunc3()
{
	float a = 250.6756, b = 5;
	return (a * b);
}

int main() {


	int result1;
	float result2;
	result1 = myFunc2()/2;
	result2 = myFunc3();
	printLine();
	cout << result1 << endl;
	printLine();
	cout << result2 << endl;
	result2 = ceil(myFunc3())/ 5;
	cout << result2 << endl;
	printLine();

	return 0;
}
----
#include <iostream>
using namespace std;

void my_sum_procedure()
{
	int num1, num2;
	cout << "please Enter First Number: " << endl;
	cin >> num1;
	cout << "please Enter Second Number: " << endl;
	cin >> num2;
	int result = num1 + num2;
	cout << "Result Is: " << result << endl;
}


int main() {

	my_sum_procedure();

	return 0;
}
-----
#include <iostream>
using namespace std;

double 	my_sum_function()

{
	double num1, num2;
	cout << "please Enter First Number: " << endl;
	cin >> num1;
	cout << "please Enter Second Number: " << endl;
	cin >> num2;
	double result = num1 + num2;
	return result;
}

int main() {

	cout <<"The Result Is : " << my_sum_function()<<endl;
    //cout <<"The Result Is : " << my_sum_function()* 3 <<endl;
    //cout <<"The Result Is : " << my_sum_function() + 3 <<endl;
    //cout <<"The Result Is : " << my_sum_function()/3 <<endl;
	return 0;
}
----

*/


//Lesson #35 (Function Part III --> Parameters)

/*
--> Functions can take inputs (parameters) and can return outputs (return values).
--> if it procedure or normal function you can use parameters.
----
#include <iostream>
using namespace std;

int  MyFunc(int num1, int num2)
{
	return num1+num2;
}

int main() {
	cout<< MyFunc(1, 2)<<endl; //3
	cout << MyFunc(10, 20)<< endl; //30
	cout << MyFunc(10, 20)*2<<endl; //60
	cout << MyFunc(10, 20)+50<<endl; //80
	return 0;
}
----
#include <iostream>
using namespace std;

int  MyFunc(int num1, int num2)
{
	return num1+num2;
}

int main() {
	int num1, num2;
	cout << "Pleas Enter A Number 1 : "<<endl;
	cin >> num1;
	cout << "Pleas Enter A Number 2 : " << endl;
	cin >> num2;
	cout << "---------------------" << endl;
	cout << MyFunc(num1,num2) << endl;
	return 0;
}
----

*/


//Lesson #36 (Variable Scope/ Local vs Global Variables)

/*
--> Variable Scope: refers to the visibility and lifetime of variables in a program.
--> Local Variables: are declared inside a function and can only be accessed within that function.
--> Global Variables: are declared outside of all functions and can be accessed from any function.
-----
#include <iostream>
using namespace std;
void myFunc()
{
    int x = 10;
    cout << "The value of X inside function is: " << x << endl;
}
int main(){

    int x = 100;
    cout << "The Local value of X inside main is: " << x << endl;
    myFunc();
    return 0;
}
------
#include <iostream>
#include <cmath>
using namespace std;

int x = 300; //Global x

void myFunc()
{
    int x = 10;
    cout << "The value of X inside function is: " << x << endl;

}
int main(){

    int x = 100;
    cout << "The value of X inside main is: " << x << endl;
    myFunc();
    cout << "-------------------\n\n";

    cout << "The Global Value Of x Is: " << ::x <<" !!"<< endl;
    return 0;
}
-------
#include <iostream>
using namespace std;

int x = 300; //Global x

void myFunc()
{
    int x = 10;
    cout << "The value of X inside function is: " << x << endl;

}
int main(){

    int x = 100;
    cout << "The value of X inside main is: " << x << endl; //100
    myFunc(); //10
    cout << "-------------------\n\n";

    cout << "The Global Value Of x Is: " << ::x <<endl; //300

    ::x++;
    cout << "The Global Value of x After ++ Is: " << ::x << endl; //301
    ::x = 400;
    cout << "The New Global Value of x Is: " << ::x << endl; //400
    return 0;
}
-------


*/


//Lesson #37 ( Function Parameters -->  By-Value vs By-Reference)

/*
--> By-Value:
--> AÇIKLAMA:
	In by-value, what really happens is?
	In the main function, we gave the variable num the value 20.
	But when we called the function, it took a copy of num and worked with that copy inside the function.
	So any changes happen only to the copy, not to the original num in main.
Ex:
-----
#include <iostream>
using namespace std;
void myFunc(int num)
{
    num = 10;
    cout << "Number inside function became=  " << num << endl;
}

int main(){
    int num;
    num = 20;
    cout << "Number After Calling the function became=  " << num << endl; //20
    myFunc(num); //10
    cout << "Number After Calling the function became=  " << num << endl; //20
    myFunc(num); //10
    return 0;
}
-----
--> By-Reference: 
--> AÇIKLAMA:
	In by-reference, what happens is 
	The function gets a reference (or link) to the original variable, not a copy.
	This means any changes inside the function will directly change the original variable in main.
Ex:
------
#include <iostream>
using namespace std;
void myFunc(int &num)
{
    num = 10;
    cout << "Number inside function became=  " << num << endl;

}
int main(){
    int num;
    num = 20;
    cout << "Number After Calling the function became=  " << num << endl; //20
    myFunc(num); //10
    cout << "Number After Calling the function became=  " << num << endl; //10
    myFunc(num); //10
	return 0;
}
-------
#include <iostream>
using namespace std;

int main(){
    int num;
    num = 20;
    
    cout << "The Value Is: " << num << endl; // Will print value of num
    cout << "The Memory Address is: " << &num << endl; //but here, will print the address for num in memory

    return 0;
}
-------
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    
    int c;
    c = a;
    a = b;
    b = c;
    cout << "\nAfter Swap --> a= " << a << ", and b= " << b << "  \n\n";
}


int main()
{

    int a, b;
    cout << "Enter a the first num? " << endl;
    cin >>a;
    cout << "Enter a the second num? " << endl;
    cin >> b;
    cout << "\nBefore Swap --> a= " << a << ", and b= " << b << "  \n\n";
    cout << "----------------" << endl;
    swap(a, b);
    //Not: Without By Ref will print the same values in main function but with By Ref will print same values in yukardaki function
    cout << "\nAfter Swap but Inside Main --> a= " << a << ", and b= " << b << "  \n\n";

    cout << "\n------------------\n";
}
-------
#include <iostream>
using namespace std;

void swapByValue(int num1, int num2)
{    
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swap By-Value: --> Num1 IS =  " << num1 << "   , and Num2 Is =  " << num2 << "  \n";
    cout << "Address Value For Num1 Is : " << &num1 << "  , and Address Value For Num2 Is : " << &num2<<endl;
    cout <<"-----------------------\n";
}

void swapByReferance(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After Swap By-Referance: --> Num1 IS =  " << num1 << "  ,  and Num2 Is =  " << num2 << "  \n";
    cout << "Address Value For Num1 Is : " << &num1 << "  ,  and Address Value For Num2 Is : " << &num2<<endl;
    cout << "-----------------------\n";
}

int main()
{
    int num1, num2;
    cout << "Enter num 1 ? " << endl;
    cin >>num1;
    cout << "Enter num 2 ? " << endl;
    cin >> num2;
    cout << "\nBefore Any Swap --> Num1 =   " << num1 << "  , Num2 =  " << num2<<endl;
    cout << "Address Value For Num1 Is :  " << &num1 << "   , and Address Value For Num2 Is : " << &num2 << endl;
    cout << "\n------------------\n";
    swapByValue(num1, num2);
    cout <<"\nAfter Swap By-Value 'But inside Main function' --> Num1 =   " << num1 << "  ,  Num2 =  " << num2 <<"\n";
    cout << "\n------------------\n";
    swapByReferance(num1, num2);
    cout << "\nAfter Swap By-Referance 'But inside Main function' --> Num1 =   " << num1 << "  ,  Num2 =  " << num2 << "\n";
    cout << "\n------------------\n";
    return 0;
}
-------


*/



// Lesson #38 (Structures and Functions - Re-usability)

/*
--> We can pass a struct to functions to organize and reuse code.
--> If we pass by reference (&), the function can change the original data in main.
	If we pass by value, the function works on a copy, and changes won't affect the original.
--> NOT:
	In the Ex2, we will use the Re-Usability concept.
------
Ex1:
#include <iostream>
#include <string>
using namespace std;
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(strInfo &info) //Not!!! --> "&" means we work on the same variable from main, so changes here stay after the function ends.
{
    cout << "Please Enter A First Name.." << endl;
    cin >> info.firstName;
    cout << "Please Enter A Last Name.." << endl;
    cin >> info.lastName;
    cout << "Please Enter Age.." << endl;
    cin >> info.age;
    cout << "Please Enter A Phone Number.." << endl;
    cin >> info.phone;
}

void printInfo(strInfo info)
{
    cout << "--------------------------------" << endl;
    cout << "The First Name Is --> " << info.firstName << endl;
    cout << "The Last Name Is --> " << info.lastName << endl;
    cout << "The Age Is      --> " << info.age << endl;
    cout << "The Phone Number Is --> " << info.phone << endl;
    cout << "--------------------------------" << endl;
}
int main()
{
    strInfo info;
    readInfo(info);
    printInfo(info);

   
    return 0;
}
------
Ex2: --> Using Re-Usability concept

#include <iostream>
#include <string>
using namespace std;
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string phone;
};

void readInfo(strInfo &info) //Not!!! --> "&" means we work on the same variable from main, so changes here stay after the function ends.
{
    cout << "Please Enter A First Name?" << endl;
    cin >> info.firstName;
    cout << "Please Enter A Last Name?" << endl;
    cin >> info.lastName;
    cout << "Please Enter Age?" << endl;
    cin >> info.age;
    cout << "Please Enter A Phone Number?" << endl;
    cin >> info.phone;
}
void printInfo(strInfo info)
{
    cout << "--------------------------------" << endl;
    cout << "The First Name Is --> " << info.firstName << endl;
    cout << "The Last Name Is --> " << info.lastName << endl;
    cout << "The Age Is      --> " << info.age << endl;
    cout << "The Phone Number Is --> " << info.phone << endl;
    cout << "--------------------------------\n\n";
}

int main()
{
    strInfo info;
    readInfo(info);
    printInfo(info);
    
    strInfo info2;
    readInfo(info2);
    printInfo(info2);

    strInfo info3;
    readInfo(info3);
    printInfo(info3);

    return 0;
}
------------
HomWork:
----
#include <iostream>
#include <string>
using namespace std;

struct strAddress
{
    string Adress;
    int PostaCode;
    int BuildingNo;
    string phone;

};

struct strCar
{
    string color;
    string model;
    string brand;
    string plakaNo;
};

struct strInfo
{
    string firstName;
    string lastName;
    int age;
    int mounthlySalary;
    int yearlySalary;

    strAddress address;
    strCar car;
};

void readInfo(strInfo &info) //Not!!! --> "&" means we work on the same variable from main, so changes here stay after the function ends.
{
    cout << "Please Enter A First Name?" << endl;
    cin >> info.firstName;
    cout << "Please Enter A Last Name?" << endl;
    cin >> info.lastName;
    cout << "Please Enter Age?" << endl;
    cin >> info.age;
    cout << "Please Enter Your Mounthly Salary?" << endl;
    cin >> info.mounthlySalary;
    cout << "Please Enter Your Yearly Mountly?" << endl;
    cin >> info.yearlySalary;
    cout << "Please Enter Color Of Your Car?" << endl;
    cin >> info.car.color;
    cout << "Please Enter Brand Of Your Car?" << endl;
    cin >> info.car.brand;
    cout << "Please Enter Model Of Your Car?" << endl;
    cin >> info.car.model;
    cout << "Please Enter Plaka No Of Your Car?" << endl;
    cin >> info.car.plakaNo;
    cout << "Please Enter A Phone Number?" << endl;
    cin >> info.address.phone;
    cout << "Please Enter Your Address?" << endl;
    cin.ignore(1, '\n');
    getline(cin, info.address.Adress); //daha mantikli bence :)
    cout << "Please Enter Your Building No?" << endl;
    cin >> info.address.BuildingNo;
    cout << "Please Enter Your Posta Code?" << endl;
    cin >> info.address.PostaCode;
}

void printInfo(strInfo info)
{
    cout << "--------------------------------" << endl;
    cout << "The First Name Is --> " << info.firstName << endl;
    cout << "The Last Name Is --> " << info.lastName << endl;
    cout << "The Age Is      --> " << info.age << endl;
    cout << "Your Mounthly Salary Is -->" << info.mounthlySalary << endl;
    cout << "Your Yearly Salary Is -->" << info.yearlySalary << endl<<"-------";
    cout << "\nCar Informations:\n";
    cout << "The Color Of Your Car Is -->" << info.car.color<< endl;
    cout << "The Brand Of Your Car Is -->" << info.car.brand << endl;
    cout << "The Model Of Your Car Is -->" << info.car.model << endl;
    cout << "The Plaka No Of Your Car Is -->" << info.car.plakaNo << endl << "-------\n";
    cout << "\Address Informations:\n";
    cout << "The Phone Number Is -->  " << info.address.phone << endl;
    cout << "The Address Is -->  " << info.address.Adress << endl;
    cout << "The Buildin No Is -->  " << info.address.BuildingNo << endl;
    cout << "The Posta Code Is -->  " << info.address.PostaCode << endl << "-------\n";
    cout << "------------------THE END-------------------\n\n";
}
int main()
{
    strInfo info;
    readInfo(info);
    printInfo(info);
    return 0;
}
-----


*/


//Lesson #39 (Arrays)

/*

--> Data Types in C++:
   - Fundamental Data Types: int, float, char, bool, etc.
   - Derived Data Types: arrays, pointers, etc.
   - User-Defined Data Types: struct, class, etc.

--> Array:
   - An array is a **derived data type**.
   - It stores **many values of the same type** in one place.
   - Example: int numbers[5]; // an array with 5 integers.

--> Accessing Elements:
   - Each value in the array has a **position number** called "index".
   - The first index is 0.
   - Example: numbers[0] = 10; // put 10 in the first position.

--> Array Length:
   - You can find the number of elements in the array using sizeof.
   - Example:
     int length = sizeof(numbers) / sizeof(numbers[0]);

--> Strings:
   - string name = "John Doe";
   - A `string` is **not** exactly an array.
   - But you can think of it like an array of characters.
-----------------------------------------------------------------------------------

// Example: int x[5] = {22, 18, 2, 55, 520};

-----------------------------------------------------
| Array Indexes | Array Values  | Memory Addresses  |
-----------------------------------------------------
| x[0]          |  22           | 1000              |
| x[1]          |  18           | 1004              |
| x[2]          |   2           | 1008              |
| x[3]          |  55           | 1012              |
| x[4]          | 520           | 1016              |
----------------------------------------------------

Notes:
- Index starts from 0.
- Memory address changes by 4 bytes for each element (because int = 4 bytes).
------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    string name = "Muhammad";
    cout << name[0] << endl; //Prints --> M
    cout << name[2] << endl; //Prints --> h
    return 0;
}
------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int x[5] = { 11,22,33,40,100 };
    cout << x[0] << endl; //prints --> 11
    cout << x[2] << endl; //prints --> 33
    cout << x[3] / 4 << endl; //prints 40/4 --> 10
    return 0;
}
------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int x[5] = { 11,22,33,40,100 };
    cout << x[0] + x[4] << endl; //prints 11+100 --> 111
	cout <<x[0] + x[4]*2 << endl; //prints 11+100*2 --> 211
    return 0;
}
-----------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int x[5];
    x[0] = 11;
    x[1] = 22;
    x[2] = 33;
    x[3] = 40;
    x[4] = 100;

    cout << x[0] + x[3] << endl; //prints 11+40 --> 51

    return 0;
}
-----------------------------------------------------------------------------------
// HomeWork:

#include <iostream>
using namespace std;

int main()
{
    float grade[3];

    cout << "\nPlease Enter a value for grade1 ? \n";
    cin >> grade[0];

    cout << "\nPlease Enter a value for grade2 ? \n";
    cin >> grade[1];

    cout << "\nPlease Enter a value for grade3 ? \n";
    cin >> grade[2];
    
    float avg;
    avg = (grade[0] + grade[1] + grade[2])/3;
   
    cout << "\nThe Avrage For 3 Grade Is --> " << avg << "\n\n";
    return 0;
}
-----------------------------------------------------------------------------------


*/


//Lesson #40 (Arrays with Functions)

/*

--> Summary:
	- In C++, array indexing starts at 0, not 1.
	- int x[3] means the array has 3 elements: x[0], x[1], and x[2].
	- The number inside [] represents the total number of elements, NOT the last index.
	- If you write int x[2], it will only have x[0] and x[1],
	  and accessing x[2] will cause an out-of-bounds error.

-------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

void readGrade(float grade[3]) //Procedure
{
    cout << "Please enter The First Grade? " << endl;
    cin >> grade[0];
    cout << "Please enter The Second Grade? " << endl;
    cin >> grade[1];
    cout << "Please enter The Third Grade? " << endl;
    cin >> grade[2];
}

float avgForGrades(float grade[3]) //Function
{
    float avg;
    avg = (grade[0] + grade[1] + grade[2]) / 3;
    cout << "\nThe Avrage For 3 Grades Is --> " << avg << endl;

    return avg;
}

   
int main()

    {
        float grade[3];
        readGrade(grade);
        avgForGrades(grade);

        return 0;
    }
-------------------------------------------------------------------------------------------------
2.Yol:

#include <iostream>
using namespace std;

void readGrade(float grade[3]) //Procedure
{
    cout << "Please enter The First Grade? " << endl;
    cin >> grade[0];
    cout << "Please enter The Second Grade? " << endl;
    cin >> grade[1];
    cout << "Please enter The Third Grade? " << endl;
    cin >> grade[2];
}

float avgForGrades(float grade[3]) //Function
{
    float avg;
    avg = (grade[0] + grade[1] + grade[2]) / 3;
    return avg;
}

void printAvgForGrades(float avg) //Procedure
{
    cout << "\nThe Avrage For 3 Grades Is --> " << avg << endl;
}
   
int main()

    {
        float grade[3];
        float avg;
        readGrade(grade);
        avg=  avgForGrades(grade);
        printAvgForGrades(avg);

        return 0;
    }
------------------------------------------------------------------------------------------------		
3.Yol(Abo_Hadhoud Solution)

#include <iostream>
using namespace std;

void readGrade(float grade[3]) //Procedure
{
    cout << "Please enter The First Grade? " << endl;
    cin >> grade[0];
    cout << "Please enter The Second Grade? " << endl;
    cin >> grade[1];
    cout << "Please enter The Third Grade? " << endl;
    cin >> grade[2];
}

float CalculatAvrageGrades(float grade[3]) //Function
{
    return  (grade[0] + grade[1] + grade[2]) / 3;
}

int main()
  {
        float grade[3];
        readGrade(grade);
        cout << "\nThe Avrage Grades Is --> " << CalculatAvrageGrades(grade) << endl;
        cout << "------------\n\n";

        return 0;
  }
-------------------------------------------------------------------------------------------------


*/


//Lesson #41 (Arrays Of Structures)

/*

#include <iostream>
using namespace std;

struct strInfo
{
    string name;
    string phoneNumber;
    int age;
    string work;
};

int main()
{
    strInfo person[2];

    person[0].name = "Muhammad";
    person[0].phoneNumber = "053122345";
    person[0].age = 19;
    person[0].work = "Engineer";

    person[1].name = "Mustafa";
    person[1].phoneNumber = "03293445";
    person[1].age = 30;
    person[1].work = "Doctor";

    cout << "The Name For First Person Is --> " << person[0].name << endl;
    cout << "---------------------------------------------\n";
    cout << "The Name For Second Person Is --> " << person[1].name << endl;
    cout << "---------------------------------------------\n";
   return 0;
  }

------------------------------------------------------------------------------------------------
//Homework Solution:

- My Solution:

#include <iostream>
using namespace std;

struct strAddress
{
    string phoneNo;
    int buildingNo;
    int houseNo;
    string streetName;
};
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string work;

    strAddress address;
};

void readPerson1Data(strInfo person[2])
{
    cout << "Person 1 Information:\n\n";
    cout << "Please Enter First Name? " << endl;
    cin >> person[0].firstName;
    cout << "Please Enter Last Name? " << endl;
    cin >> person[0].lastName;
    cout << "Please Enter Age? " << endl;
    cin >> person[0].age;
    cout << "Please Enter Work? " << endl;
    cin >> person[0].work;
    cout << "Please Enter Phone Number? " << endl;
    cin >> person[0].address.phoneNo;
    cout << "Please Enter Building No? " << endl;
    cin >> person[0].address.buildingNo;
    cout << "Please Enter House No? " << endl;
    cin >> person[0].address.houseNo;
    cout << "Please Enter Street Name? " << endl;
    cin >> person[0].address.streetName;
    cout << "----------------------------\n";
}
void readPerson2Data(strInfo person[2])
{
    cout << "Person 2 Information:\n\n";
    cout << "Please Enter First Name? " << endl;
    cin >> person[1].firstName;
    cout << "Please Enter Last Name? " << endl;
    cin >> person[1].lastName;
    cout << "Please Enter Age? " << endl;
    cin >> person[1].age;
    cout << "Please Enter Work? " << endl;
    cin >> person[1].work;
    cout << "Please Enter Phone Number? " << endl;
    cin >> person[1].address.phoneNo;
    cout << "Please Enter Building No? " << endl;
    cin >> person[1].address.buildingNo;
    cout << "Please Enter House No? " << endl;
    cin >> person[1].address.houseNo;
    cout << "Please Enter Street Name? " << endl;
    cin >> person[1].address.streetName;
    cout << "----------------------------\n";
}
void printPerson1Data(strInfo person[2])
{
    cout << "The Informations For Person 1:  \n";
    cout << "First Name: " << person[0].firstName << endl;
    cout << "last Name: " << person[0].lastName << endl;
    cout << "Age: " << person[0].age << endl;
    cout << "What's Working: " << person[0].work << endl;
    cout << "Phone Number: " << person[0].address.phoneNo << endl;
    cout << "Building No: " << person[0].address.buildingNo << endl;
    cout << "House No: " << person[0].address.houseNo << endl;
    cout << "Street Name: " << person[0].address.streetName << endl;
    cout << "------------------------------\n\n";
}
void printPerson2Data(strInfo person[2])
{
    cout << "The Informations For Person 2:  \n";
    cout << "First Name: " << person[1].firstName << endl;
    cout << "last Name: " << person[1].lastName << endl;
    cout << "Age: " << person[1].age << endl;
    cout << "What's Working: " << person[1].work << endl;
    cout << "Phone Number: " << person[1].address.phoneNo << endl;
    cout << "Building No: " << person[1].address.buildingNo << endl;
    cout << "House No: " << person[1].address.houseNo << endl;
    cout << "Street Name: " << person[1].address.streetName << endl;
    cout << "------------------------------\n\n";
}

int main()
{
    strInfo person[2];

    readPerson1Data(person);
    readPerson2Data(person);
    printPerson1Data(person);
    printPerson2Data(person);

   return 0;
  }
------------------------------------------------------------------------------
Abo_Hadhoud Solution:

#include <iostream>
using namespace std;

struct strAddress
{
    string phoneNo;
    int buildingNo;
    int houseNo;
    string streetName;
};
struct strInfo
{
    string firstName;
    string lastName;
    int age;
    string work;

    strAddress address;
};

void readInfo(strInfo& info)
{
    cout << "Please Enter Fist Name? " << endl;
    cin >> info.firstName;
    cout << "Please Enter Last Name?" << endl;
    cin >> info.lastName;
    cout << "Please Enter Age? " << endl;
    cin >> info.age;
    cout << "Please Enter Work Name?" << endl;
    cin >> info.work;
    cout << "Please Enter Phone Number? " << endl;
    cin>> info.address.phoneNo;
    cout << "Please Enter Building No?" << endl;
    cin >> info.address.buildingNo;
    cout << "Please Enter House No? " << endl;
    cin >> info.address.houseNo ;
    cout << "Please Enter Street Name?" << endl;
    cin>> info.address.streetName;
    cout << "*************************************\n\n";
}

void printInfo(strInfo info)
{
    cout << "Fist Name:  " << info.firstName << endl;
    cout << "Last Name:  " << info.lastName << endl;
    cout << "Age:   " << info.age << endl;
    cout << "Work Name:  " << info.work << endl;
    cout << "Phone Number:   " << info.address.phoneNo << endl;
    cout << "Building No:  " << info.address.buildingNo << endl;
    cout << "House No:   " << info.address.houseNo << endl;
    cout << "Street Name:  " << info.address.streetName << endl;
    cout << "*************************************\n\n";

}

void readPersonInfo(strInfo person[2])
{
    readInfo(person[0]);
    readInfo(person[1]);
}

void printPersonInfo(strInfo person[2])
{
    printInfo(person[0]);
    printInfo(person[1]);
}

int main()
{
   strInfo person[2];
   readPersonInfo(person);
   printPersonInfo(person);

   return 0;
  }
-----------------------------------------------------------------------------------
Kafamdan Bir Program Yaptim:

#include <iostream>
using namespace std;

struct strPublisher
{
    string publishedYear;
    string publisherFirmaName;
    string publisherCountry;
};
struct strBooks
{
    string title;
    string authorName;
    int pages;

    strPublisher publisher;
};

void readData(strBooks& bookInfo)
{
    cout << "-----------------------------------------\n";
    cout << "Please Enter Book Title? \n";
    cin >> bookInfo.title;
    cout << "Please Enter Name Of Author? \n";
    cin >> bookInfo.authorName;
    cout << "Please Enter Book Pages? \n";
    cin >> bookInfo.pages;
    cout << "Please Enter Book Published Year? \n";
    cin >> bookInfo.publisher.publishedYear;
    cout << "Please Enter Publisher Firma Name? \n";
    cin >> bookInfo.publisher.publisherFirmaName;
    cout << "Please Enter Publisher Country Of Book? \n";
    cin >> bookInfo.publisher.publisherCountry;
    cout << "-----------------------------------------\n\n";
}

void printData(strBooks& bookInfo)
{
    cout << "Book Title Is: "<<bookInfo.title<<endl;
    cout << "Book Author Name Is: " << bookInfo.authorName << endl;
    cout << "Book Pages Is:" << bookInfo.pages << endl;
    cout << "Book Published Year Is: " << bookInfo.publisher.publishedYear << endl;
    cout << "Book Publisher Firma Name Is: " << bookInfo.publisher.publisherFirmaName << endl;
    cout << "Book Publisher Country Is: " << bookInfo.publisher.publisherCountry << endl;
    cout << "-----------------------------------------\n\n";
}

void readBooksData(strBooks books[3])
{
    readData(books[0]);
    readData(books[1]);
    readData(books[2]);
}

void printBooksData(strBooks books[3])
{
    printData(books[0]);
    printData(books[1]);
    printData(books[2]);
}


int main()
{
    strBooks books[3];// For 3 books
    readBooksData(books);
    printBooksData(books);
   return 0;
  }

*/


//Lesson #42 (Conditional Statements: IF, IF ... Else Statement)

/*

--> IF Statement:
   - Runs some code only if the condition is TRUE.
   - Syntax:
        if (condition) {
            // code runs if condition is TRUE
        }
	- Ex:
		if (age >= 18) {
			cout << "You are an adult.";
		}


--> IF...Else Statement:
   - Runs one block of code if condition is TRUE,
     and another block if condition is FALSE.
   - Syntax:
        if (condition) {
            // code if TRUE
        }
        else {
            // code if FALSE
        }
   - Ex:
        if (grade >= 50) {
            cout << "You passed.";
        }
        else {
            cout << "You failed.";
        }		
			
--> Comparison Operators (used in conditions):
   - ==  (equal to)
   - !=  (not equal to)
   - >   (greater than)
   - <   (less than)
   - >=  (greater than or equal to)
   - <=  (less than or equal to)
   
--> Notes:
   - The condition must be inside ( ).
   - The code block is inside { }.
   - If there is only 1 line of code, { } can be skipped.
   - Indentation makes code easier to read.
-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    if (x > 3) {
        cout << "The Code Of  IF body has executed.." << endl;
    }

   return 0;
  }
-----------------------------------------------------------------------------------

int main()
{
    int x = 10;
    if (x > 2 &&  x<11) {
        cout << "The Code Of  IF body has executed.." << endl;
    }

   return 0;
  }   
-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    if (x > 22) {
        cout << "The Code Of 'IF' body has executed.." << endl;
    }
    else {
        cout << "The Code Of 'ELSE IF' body has executed.." << endl;

    }

   return 0;
  }
-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    if (x > 22 && x<1) {
        cout << "The Code Of 'IF' body has executed.." << endl;
    }
    else {
        cout << "The Code Of 'ELSE IF' body has executed.." << endl;

    }

   return 0;
  }
-----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18) {
        cout << "You can vote.";
    } else {
        cout << "You are too young to vote.";
    }

    return 0;
}

----------------------------------------------------------------------------------- 
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    if (x < 2 || x==10) {
        cout << "The Code Of 'IF' body has executed.." << endl;
    }
    else {
        cout << "The Code Of 'ELSE IF' body has executed.." << endl;

    }

   return 0;
  }
----------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    if (x > (2*x)) { //boyle bir sey yapabiliriz
        cout << "The Code Of 'IF' body has executed.." << endl;
    }
    else {
        cout << "The Code Of 'ELSE IF' body has executed.." << endl;

    }

   return 0;
  }
---------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int x ;
    cout << "Please Enter A number..\n";
    cin >> x;
    if (x > 20) {
        cout << "The Code Of 'IF' body has executed.." << endl;
    }
    else {
        cout << "The Code Of 'ELSE IF' body has executed.." << endl;

    }

   return 0;
  }
---------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    int x ;
    cout << "Please Enter A number..\n";
    cin >> x;
    if (x > 5) {
        cout << "Yes, X is grator than 5.." << endl;
    }
    else {
        cout << "No, X is less than 5..."<< endl;

    }

   return 0;
  }
---------------------------------------------------------------------------------
//HomWork 4:
#include <iostream>
using namespace std;

int main()
{
    int age;
    bool hasDriverLicense;
    cout << "Please Enter Age Your Age?" << endl;
    cin >> age;
    cout << "Do You Have A Driver License?" << endl;
    cin >> hasDriverLicense;

    if (age > 21 && hasDriverLicense == true)
    {
        cout << "Hired :) " << endl;
    }
    else { cout << "Rejected.." << endl; }
   return 0;
  }
-----------------------------------------------------------------------------------
//HomWork 8:
#include <iostream>
using namespace std;

int main()
{
    float grade;
    
    cout << "Please Enter Your Grade?" << endl;
    cin >> grade;
   

    if (grade >= 50)
    {
        cout << "PASS :) " << endl;
    }
    else { cout << "Fail.." << endl; }
   return 0;
  }
-----------------------------------------------------------------------------------
//HomWork 11:
#include <iostream>
using namespace std;

int main()
{
    float grade1,grade2,grade3;
    
    cout << "Please Enter Your First Grade?" << endl;
    cin >> grade1;
    cout << "Please Enter Your Second Grade?" << endl;
    cin >> grade2;
    cout << "Please Enter Your Third Grade?" << endl;
    cin >> grade3;
    float avrage;
    avrage = (grade1 + grade2 + grade3) / 3;
    if (avrage >= 50)
    {
        cout << "PASS :) " << endl;
    }
    else { cout << "Fail.." << endl; }
   return 0;
  }
-----------------------------------------------------------------------------------
//HomeWork 24:

1.Yol:

#include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout << "Please Enter Your Age?" << endl;
    cin >> age;
    bool result = (age >= 18 && age <= 45);
    if (result==true)
    {
        cout << "Valid Age :) " << endl;
    }
    else { cout << "Invalid Age.." << endl; }
   return 0;
  }

  2.Yol:

  #include <iostream>
using namespace std;

int main()
{
    int age;
    
    cout << "Please Enter Your Age?" << endl;
    cin >> age;
    
    if (age >= 18 && age <= 45)
    {
        cout << "Valid Age :) " << endl;
    }
    else { cout << "Invalid Age.." << endl; }
   return 0;
  }
--------------------------------------------------------------------------------------------

//HomeWork 49:

#include <iostream>
using namespace std;

int main()
{
    int month;
    
    cout << "Please Enter Month?" << endl;
    cin >> month;
    
    if (month == 1)
    {
        cout << "The Month Is January." << endl;
    }
    else if (month == 2)
    {
        cout << "The Month Is February." << endl;
    }
    else if (month == 3)
    {
        cout << "The Month Is March." << endl;
    }
    else if (month == 4)
    {
        cout << "The Month Is April." << endl;
    }
    else if (month == 5)
    {
        cout << "The Month Is May." << endl;
    }
    else if (month == 6)
    {
        cout << "The Month Is Jun." << endl;
    }
    else if (month == 7)
    {
        cout << "The Month Is July." << endl;
    }
    else if (month == 8)
    {
        cout << "The Month Is August." << endl;
    }
    else if (month == 9)
    {
        cout << "The Month Is September." << endl;
    }
    else if (month == 10)
    {
        cout << "The Month Is October." << endl;
    }
    else if (month == 11)
    {
        cout << "The Month Is November." << endl;
    }
    else cout << "The Month Is December.";
   return 0;
  }
------------------------------------------------------------------------------------------------------



*/


//Lesson #43 (Conditional Else IF Statement)

/*
#include <iostream>
using namespace std;

int main()
{
    int time;
    cout << "Please Enter a Time?\n\n";
    cin >> time;
   
    if (time < 12)
    {
        cout << "Good Morning." << endl;
    }
    else if (time <20)
    {
        cout << "Good Day." << endl;
    }
    
    else { cout << "Good Evening." << endl; }
   return 0;
  }

--> HomeWork 33:

#include <iostream>
using namespace std;

int main()
{
    float grade;
    cout << "Please Enter a Grade?\n\n";
    cin >> grade;
   
    if (grade>=90 && grade <=100)
    {
        cout << "A." << endl;
    }
    else if (grade >= 80 && grade <= 89)
    {
        cout << "B." << endl;
    }
    else if (grade >= 70 && grade <= 79)
    {
        cout << "C." << endl;
    }
    else if (grade >= 60 && grade <= 69)
    {
        cout << "D." << endl;
    }
    else if (grade >= 50 && grade <= 59)
    {
        cout << "E." << endl;
    }
    else { cout << "F." << endl; }
   return 0;
  }
----------------------------------
--> HomeWork 36:

#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    string operationType;
    cout << "Please Enter Num1?\n";
    cin >> num1;
    cout << "Please Enter Num2?\n";
    cin >> num2;
    cout << "Please Enter Operation Type?\n\n";
    cin >> operationType;
    cout << "-----------------\n";
    if (operationType == "+")
    {
        cout << "The Operation Type Is: +, Num1+Num2 --> " << (num1 + num2) << endl;
    }
    else if (operationType == "-")
    {
        cout << "The Operation Type Is: -, Num1-Num2 --> " << (num1 - num2) << endl;

    }
    else if (operationType == "*")
    {
        cout << "The Operation Type Is: *, Num1*Num2 --> " << (num1* num2) << endl;

    }
    else 

    { cout << "The Operation Type Is: /, Num1/Num2 --> " << (num1/num2) << endl; }

   return 0;
  }
----------------------------------
--> HomeWork 44:

    #include <iostream>
using namespace std;

int main()
{
    int day;
    cout << "Please Enter a Day?\n";
    cin >> day;
    cout << "----------------\n";
    if (day == 1) {
        cout << "The Day Is Sunday." << endl;
    }
    else if (day == 2) {
        cout << "The Day Is Monday." << endl;
    }
    else if (day == 3) {
        cout << "The Day Is Tuesday." << endl;
    }
    else if (day == 4) {
        cout << "The Day Is Wednsday." << endl;
    }
    else if (day == 5) {
        cout << "The Day Is Thursday." << endl;
    }
    else if (day == 6) {
        cout << "The Day Is Friday." << endl;
    }
    else  {
        cout << "The Day Is Saturday." << endl;
    }
   return 0;
  }

*/


//Lesson #44 ( Enums with IF Statements)

/*

#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue=2, Green=3, Yellow=4 };

int main()
{
    
    cout << "***************************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "For Red --> (1) " << endl;
    cout << "For Blue --> (2) " << endl;
    cout << "For Green --> (3) " << endl;
    cout << "For Yellow --> (4) " << endl;
    cout << "***************************************\n\n";
    cout << "What Is Your Choice?\n";
    enScreenColor color;
    int c;
    cin >> c;
    color = (enScreenColor)c;


    if (color == enScreenColor::Red)
    {
        system("color 4F");
    }
    else if (color == enScreenColor::Blue)
    {
        system("color 1F");
    }
    else if (color == enScreenColor::Green)
    {
        system("color 2F");
    }
    else if (color == enScreenColor::Yellow)
    {
        system("color 6F");

    }
    else system("color 4F");

   return 0;
  }
----------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

enum enCountries{ Syria=1, Jordan=2, Turkey=3, Iraq=4, Algeria=5, Lebanon=6, others=7};

int main() {

    cout << "*************************************************\n";
    cout << "The Your Country using a Number from 1 --> 6\n";
    cout << "For Syria Enter (1)\n";
    cout << "For Jordan Enter (2)\n";
    cout << "For Turkey Enter (3)\n";
    cout << "For Iraq Enter (4)\n";
    cout << "For Algeria Enter (5)\n";
    cout << "For Lebanon Enter (6)\n";
    cout << "For Others Enter (7)\n";
    cout << "*************************************************\n\n";
    int c;
    enCountries country;
    cout << "What Is Your Choice??\n";
    cin >> c;
    
    country = (enCountries)c; // If c=1 --> country::syria
                              // If c=2 --> counter::Jordan

    if (country == enCountries::Syria) {
        cout << "Your Countery Is Syria..\n";
    }

    else if (country == enCountries::Jordan)
    {
        cout << "Your Countery Is Jordan..\n";
    }

    else if (country == enCountries::Turkey)
    {
        cout << "Your Countery Is Turkey..\n";

    }

    else if (country == enCountries::Iraq)
    {
        cout << "Your Countery Is Iraq..\n";

    }

    else if (country == enCountries::Algeria)
    {
        cout << "Your Countery Is Algeria..\n";
    }

    else if (country == enCountries::Lebanon)
    {
        cout << " Your Countery Is Lebanon..\n";
    }

    else cout << "Your Country Bulunmadi Maalesef Gardes\n";

    return 0;
}
-------  

// kafamdan bir ornek;

#include <iostream>
using namespace std;

enum enCountries{ syria=1, jordan=2,Iraq=3, others=4};

void readData(enCountries& country)
{
	int c;
	cout << "Please Enter A number..\n";
	cin >> c;
	country = (enCountries)c;

}
void printData(enCountries country) {

	if (country ==enCountries::syria)
		cout << "Your Country Is Syria..\n";
	else if (country == enCountries::jordan)
		cout << "Your Country Is Jordan..\n";
	else if (country == enCountries::Iraq)
		cout << "Your Country Is Iraq..\n";
	else cout << "Your Country Is not Founded!\n";
}
int main() {

	enCountries country;
	int c;
	readData(country);
	printData(country);
	
	return 0;
}
--------    
*/


//Lesson #45 (switch-case statements)

/*
- switch-case statements are an alternative to if-else statements
- they can make the code cleaner and easier to read
- they are particularly useful when you have many conditions based on the same variable
--> Syntax:
   switch (expression) {
       case value1:
           // code for value1
           break;
       case value2:
           // code for value2
           break;
       ...
       default:
           // code if no cases match
   }
----------------           
#include <iostream>
using namespace std;

int main() {

	int day;
	cout << "Please Enter A number.. 1-7" << endl;
	cin >> day;

	switch (day) {

		case 1:
			cout << "Sunday";
			break;
		case 2:
			cout << "Monday";
			break;
		case 3:
			cout << "Tuesday";
			break;
		case 4:
			cout << "Wedsday";
		case 5:
			cout << "Thursday";
			break;
		case 6:
			cout << "Friday";
		case 7:
			cout << "Saturday";
			break;
		default:
			cout << "Not A week day!" << endl;

	}
	
	return 0;
}
------------------------------
#include <iostream>
using namespace std;
enum enColors { red=1, blue=2, green=3, yellow=4};

int main() {

	cout << "-----------------------------------------\n";
	cout << "Please chose the number of your color?\n";
	cout << "(1) for red\n";
	cout << "(2) for Blue\n";
	cout << "(3) for Green\n";
	cout << "(4) for Yellow\n";
	cout << "--------------------------------------\n";
	int c;
	cout << "What is Your choice?\n";
	cin >> c;
	enColors color;
	color = (enColors)c;

	switch (color) {
	case enColors::red:
		system("color 4F");
		break;
	case enColors::blue:
		system("color 1F");
		break;
	case enColors::green:
		system("color 2F");
		break;
	case enColors::yellow:
		system("color 6F");
		break;
		default:
			cout << "You dont love any color bro :)\n";
	}
	return 0;
}
----------------------------EX2---------------------

	//daha once ne yapiyorduk?
	// if (country = enCountries::Syria) {
	//code blok
	// }
	// else if (country = enCountries::Jordan)
	// {
	//	// code blok
	// }

    // simdi boyle ornekler icin switch-case yapisini daha mantikli


#include <iostream>
using namespace std;
enum enCountries {Syria=1, Jordan=2, Egypt=3, Algeria=4, KSA=5, Qatar=6, other=7};
int main() {

	int numForCountry;
	enCountries country;
	cout << "-------------------------------------------\n";
	cout << "Please chose the number of your country?\n";
	cout << "(1) for Syria\n";
	cout << "(2) for Jordan\n";
	cout << "(3) for Egypt\n";
	cout << "(4) for Algeria\n";
	cout << "(5) for KSA\n";
	cout << "(6) for Qatar\n";
	cout << "(7) for Other\n";
	cout << "-------------------------------------------\n";
	cout << "What is Your choice?\n";

	cin >> numForCountry;
	country = (enCountries)numForCountry;

	
	switch (country) {

	case enCountries::Syria:
		cout << "Your Country Is Syria..\n";
		break;
	case enCountries::Jordan:
		cout << "Your Country Is Jordan..\n";
		break;
	case enCountries::Egypt:
		cout << "Your Country Is Egypt..\n";
		break;
	case enCountries::Algeria:
		cout << "Your Country Is Algeria..\n";
		break;
	case enCountries::KSA:
		cout << "Your Country Is KSA..\n";
		break;
	case enCountries::Qatar:
		cout << "Your Country Is Qatar..\n";
		break;
	case enCountries::other:
		cout << "Your Country Is Diffrent..\n";
		break;
	default: cout << "Your Country Is not found!!!\n\n";
	}
	cout << "-------------------------------------------\n";
	return 0;
}

------------------------------------homework36-------------------------------------
#include <iostream>
using namespace std;
enum enOperationTypes { Add=1, Subtract=2, Multiply=3, Divide =4 };

int main() {

	int num1, num2;
	int oprType;

	cout << "--------------------------\n";
	cout << "--------------------------\n";
	cout << "For Add (+) --> (1)\n";
	cout << "For Subtract (-) --> (2)\n";
	cout << "For Multiply (*) --> (3)\n";
	cout << "For Divide (/) --> (4)\n";
	cout << "--------------------------\n";
	cout << "--------------------------\n\n";
	cout << "Please Enter a num1?\n";
	cin >> num1;
	cout << "Please Enter a num2?\n";
	cin >> num2;
	cout << "Please Cohose Your Operation Type Number?\n";
	cin >> oprType;
	cout << "--------------------------";
	enOperationTypes OperationType;
	OperationType = (enOperationTypes)oprType;

	switch (OperationType) {

	case enOperationTypes::Add:
		cout << "\nResult After Add Operation Is = "<<num1<<" + "<<num2<<" = "<<num1+num2 << endl;
	break;

	case enOperationTypes::Subtract:
		cout << "\nResult After Subtract Operation Is = " << num1 << " - " << num2 << " = " << num1-num2 << endl;
	break;

	case enOperationTypes::Multiply:
		cout << "\nResult After Multiply Operation Is = " << num1<<" * "<<num2<<" = "<<num1*num2 << endl;
		break;
	case enOperationTypes::Divide:
		if (num2 == 0) {
			cout << "Error!!: Cannot divide by zero!" << endl;
		}
		else {
			cout << "After Divide Two Numbers will --> "<<num1<<"/"<<num2<<" = " << num1 / num2 << endl;
		}
		break;
	default:
		cout << "No Operation already exited.. you entered diffrent operation...." << endl;
	}
	return 0;
}
------------------------------------homework44-------------------------------------

#include <iostream>
using namespace std;
enum enDays{Sun=1, Mon=2, Tue=3, Wed=4, Thu=5, Fri=6, Sat=7};
int main() {
	int day;
	cout << "-----------------------------\n";
	cout << "--------- Days List ---------\n";
	cout << "For Sun(1)\n";
	cout << "For Mon(2)\n";
	cout << "For Tue(3)\n";
	cout << "For Wed(4)\n";
	cout << "For Thu(5)\n";
	cout << "For Fri(6)\n";
	cout << "For Sat(7)\n";
	cout << "---------------------------\n\n";
	cout << "Please Enter a Number For Day?\n";
	cin >> day; //1
	enDays Day;
	Day= (enDays)day; //Ex:user entered 1, in day variable will storge 1(day=1),
					  // Sonra In Day biz o day int'den --> enDays Type degistirecegiz.
					  // yani: eger user 1 eklediyse --> Day'de Sun depolancaktir.
	switch (Day) {

		case enDays::Sun:
		cout << "The Day Is Sunday..\n";
		break;

		case enDays::Mon:
		cout << "The Day Is Monday..\n";
		break;

		case enDays::Tue:
		cout << "The Day Is Tuesday..\n";
		break;

		case enDays::Wed:
		cout << "The Day Is Wednsday..\n";
		break;

		case enDays::Thu:
		cout << "The Day Is Thursday..\n";
		break;

		case enDays::Fri:
		cout << "The Day Is Friday..\n";
		break;

		case enDays::Sat:
			cout << "The Day Is Saturday..\n";

		default:
			cout << "No Such Day!\n";
	}
	return 0;
}
------------------------------------homework45-------------------------------------

#include <iostream>
using namespace std;
enum enMonths {
	Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,
	Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12
};

int main() {
	int month;
	cout << "-----------------------------\n";
	cout << "-------- Months List --------\n";
	cout << "For Jan(1)\n";
	cout << "For Feb(2)\n";
	cout << "For Mar(3)\n";
	cout << "For Apr(4)\n";
	cout << "For May(5)\n";
	cout << "For Jun(6)\n";
	cout << "For Jul(7)\n";
	cout << "For Aug(8)\n";
	cout << "For Sep(9)\n";
	cout << "For Oct(10)\n";
	cout << "For Nov(11)\n";
	cout << "For Dec(12)\n";
	cout << "-----------------------------\n\n";

	cout << "Please Enter a Number For Month?\n";
	cin >> month;
	

	enMonths Month;
	Month = (enMonths)month;

	switch (Month) {
	case enMonths::Jan: cout << "The Month is January..\n";
	break;
	case enMonths::Feb: cout << "The Month is February..\n";
	break;
	case enMonths::Mar: cout << "The Month is March..\n";
	break;
	case enMonths::Apr: cout << "The Month is April..\n";
	break;
	case enMonths::May: cout << "The Month is May..\n";
	break;
	case enMonths::Jun: cout << "The Month is June..\n";
	break;
	case enMonths::Jul: cout << "The Month is July..\n";
	break;
	case enMonths::Aug: cout << "The Month is August..\n";
	break;
	case enMonths::Sep: cout << "The Month is September..\n";
	break;
	case enMonths::Oct: cout << "The Month is October..\n";
	break;
	case enMonths::Nov: cout << "The Month is November..\n";
	break;
	case enMonths::Dec: cout << "The Month is December..\n";
	break;

	default:
		cout << "No Such Month!\n\ى";
	}

	return 0;
}

------------------------------------------------------------------------

*/


//Less0n #46 (Nested Functions With Enums)

/*

#include <iostream>
using namespace std;
enum enWeekDay {Sun=1, Mon, Tue, Wed, Thu, Fri, Sat};
void printWeekData()
{
	cout << "---------------------------\n";
	cout << "---------Week-Days---------\n";
	cout << "Sunday    --> (1)\n";
	cout << "Monday    --> (2)\n";
	cout << "Tuesday   --> (3)\n";
	cout << "Wednsday  --> (4)\n";
	cout << "Thursday  --> (5)\n";
	cout << "Friday    --> (6)\n";
	cout << "Saturday  --> (7)\n";
	cout << "---------------------------\n";
}


enWeekDay ReadWeekDay()
{
	int numForDay;
	enWeekDay Day;
	cout << "Please Enter The Number Of Day 1-7\n";
	cin >> numForDay;
	
	Day = (enWeekDay)numForDay;
	return Day;
}

string GetWeekDayName(enWeekDay Day) {

	switch (Day) {
	case enWeekDay::Sun:
		return "Sunday";
		break;

	case enWeekDay::Mon:
		return "Monday";
		break;

	case enWeekDay::Tue:
		return "Tuesday";
		break;

	case enWeekDay::Wed:
		return "Wednsday";
		break;

	case enWeekDay::Thu:
		return "Thursday";
		break;

	case enWeekDay::Fri:
		return "Friday";
		break;

	case enWeekDay::Sat:
		return "Saturday";
		break;

	default:
		cout << "No such Day!!\n";
	}
	
}
int main() {

	printWeekData();
	cout <<"Today Is: "<<GetWeekDayName(ReadWeekDay())<<endl;

	return 0;
}
------------------------------Homwork--------------------------------------
#include <iostream>
using namespace std;
enum enColors {Red=1, Blue=2, Green=3, Yellow=4, Other=5};

void ColorsList()
{
	cout << "-----------------------------\n";
	cout << "-------  Colors-List  -------\n";
	cout << "For Red Enter    --> (1)\n";
	cout << "For Blue Enter   --> (2)\n";
	cout << "For Green Enter  --> (3)\n";
	cout << "For Yellow Enter --> (4)\n";
	cout << "-----------------------------\n\n";
	cout << "Please Choose a Number For Color?\n";
}


enColors ReadColor()
{
	int c;
	cin >> c;
	return (enColors)c;
}

int ShowColor(enColors colorType) {

	switch (colorType) {
		case Red:
		return system("color 4F");
		break;
		case Blue:
		return system("color 1F");
		break;
		case Green:
		return system("color 2F");
		break;
		case Yellow:
		return system("color E0");
		break;
		default: cout << "Other.." << endl;
	}

}

int main() {
	
	ColorsList();
	ShowColor(ReadColor());
	return 0;
}
-------------------------------------------------------------------------------

#include <iostream>
using namespace std;

enum enCities { Istanbul = 34, Sakarya = 54, Sivas = 50, Malatya = 62, Ankara = 14, Other = 1 };

void PrintCitiesList()
{
	cout << "--------------------\n";
	cout << "------- Cities ------\n";
	cout << "Istanbul --> (34)\n";
	cout << "Sakarya  --> (54)\n";
	cout << "Sivas    --> (50)\n";
	cout << "Malatya  --> (62)\n";
	cout << "Ankara   --> (14)\n";
	cout << "Other    --> (1)\n";
	cout << "--------------------\n";
}
enCities ReadCityCode()
{
	int code;
	cout << "Please enter your city code: ";
	cin >> code;
	return (enCities)code;
}
string GetCityName(enCities city)
{
	switch (city)
	{
	case Istanbul: return "Istanbul";
	case Sakarya:  return "Sakarya";
	case Sivas:    return "Sivas";
	case Malatya:  return "Malatya";
	case Ankara:   return "Ankara";
	default:       return "Sorry! Your city is not listed.";
	}
}

int main() {
	PrintCitiesList();
	cout << "Your city is --> " << GetCityName(ReadCityCode()) << endl;
	return 0;
}
----------------------------------------------------------------------------

#include <iostream>
using namespace std;

enum enGrades {AA = 1, BA=2, BB=3, CB=4, CC=5, DC=6, DD=7, FD=8, FF=9 };

void GradesList()
{
	cout << "----------------------\n";
	cout << "------- Grades -------\n";
	cout << "AA --> (1)\n";
	cout << "BA --> (2)\n";
	cout << "BB --> (3)\n";
	cout << "CB --> (4)\n";
	cout << "CC --> (5)\n";
	cout << "DC --> (6)\n";
	cout << "DD --> (7)\n";
	cout << "FD --> (8)\n";
	cout << "FF --> (9)\n";
	cout << "----------------------\n";
}
enGrades ReadGradeFromUser()
{
	int g;
	cout << "Please enter your grade? \n";
	cin >> g;
	return (enGrades)g;
}

string PrintGrade(enGrades grade)
{
	switch (grade)
	{
	case AA: return "Excellent (AA)";
	case BA: return "Very Good (BA)";
	case BB: return "Good Plus (BB)";
	case CB: return "Good (CB)";
	case CC: return "Average / Pass (CC)";
	case DC: return "Weak Pass (DC)";
	case DD: return "Barely Passed (DD)";
	case FD: return "Failed (FD)";
	case FF: return "Failed Badly (FF)";
	default: return "Invalid grade entered!";

	}
}

int main() {

	GradesList();
	cout <<PrintGrade(ReadGradeFromUser());

	return 0;
}

*/


//Lesson #47 (For loops)

/*
---> For loops are used to repeat code many times.
---> We use a counter to know how many times the code runs.
---> The Syntax of a for loop is:

    for(initialization; condition; update) {
    // body of the loop
    }

---> Ex:
    for(int i = 0; i < 5; i++) {
    cout << "Hello World!" << endl;
    }

---> Explanation:
    - int i = 0 -> start the counter at 0.
    - i < 5 -> run the loop while i is less than 5.
    - i++ -> add 1 to i each time.

---> The loop prints "Hello World!" 5 times.

--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i <5; i++)
	{
		cout << i << endl;
	}
	return 0;
}

//outPut:
0
1
2
3
4
5
--------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	for (int i = 5; i >0; i--)
	{
		cout << i << endl;
	}
	return 0;
}

//outPut:
5
4
3
2
1
---------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main() {
	for (int i = 0; i <10; i=i+2)
	{
		cout << i << endl;
	}
	return 0;
}
//output:

0
2
4
6
8
-----------------------------------------------------------------------------
//HomWork #26 Write a program to print numbers from 1 to n
#include <iostream>
using namespace std;
 //Function to read a number from user
int readNum()
{
	cout << "Please Enter A Number\n";
	int num;
	cin >> num;
	cout << "---------------\n";
	return num;
}

// Procedure to print numbers from 1 to num
void printNumbers(int num) {
	for (int i = 1; i <= num; i++) {
		cout << i << endl;
	}
}

int main() {

	printNumbers(readNum());
	return 0;
}
-----------------------------------------------------------------------------
//HomWork #27 Write a program to print numbers from n to 1

#include <iostream>
using namespace std;
 
int readNumberFromUser()
{
	cout << "Please Enter Positive Number For Loop\n";
	int n; //We will take a number from user
	cin >> n;
	cout << "--------------\n";
	return n;
}

void printFrom_N_to_1(int n) {
	for (int i = n; i >= 1 ;i--) {
		cout << i << endl;
	}
}
int main() {
	
	printFrom_N_to_1(readNumberFromUser());
	return 0;
}
----------------------------------------------------------------------------
// HomWork #28 Write a program to print even numbers from 1 to n
#include <iostream>
using namespace std;

int readNumber() {
    int n;
    cout << "please enter a positive number\n";
    cin >> n;
    cout << "-----------------------\n";
    return n;
}
void printSumOfEvenNumbers(int n) {
    int sum=0; // initialize sum
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum = sum + i;
        }
    }
    cout << "The sum of even numbers from 1 to " << n << " is: " << sum << endl;

}

int main() {
    //int n= readNumber();
   // printSumOfEvenNumbers(n);
   // Yada:
   printSumOfEvenNumbers(readNumber());
    return 0;
}

---------------------------------------------------------------------------------------
// HomWork #29 Write a program to print odd numbers from 1 to n

#include <iostream>
using namespace std;

int readNumber() {
    int n;
    cout << "please enter a positive number\n";
    cin >> n;
    cout << "-----------------------\n";
    return n;
}

void printOddNumbers(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

int main() {
    printOddNumbers(readNumber());
    return 0;
}
-------------------------------------------------------------------------------------------
// HomWork #30 Write a program to print factorial number Ex: 5! = 120

#include <iostream>
using namespace std;

int readNumber() {
    int f;
    cout << "Please Enter a Positive Number?\n";
    cin >> f;
    cout << "-------------------------------\n";
    return f;
}

void printFactorialOfNumber(int f) {

    int factorialNum = 1;
    for (int i = f; i > 0; i--)
    {
        factorialNum = factorialNum * i;
    }
    cout << "The Factorial Of " << f << " Is: " << factorialNum << endl;
}

int main() {
  
    printFactorialOfNumber(readNumber());
    return 0;
}
-------------------------------------------------------------------------------------------
// HomWork #31 Write a program to calculate power of a number

#include <iostream>
using namespace std;

int readNumber() {
    int num;
    cout << "Please Enter a Positive Number?\n";
    cin >> num;
    cout << "---------------------------------------\n\n";
    return num;
}

int readPower() {
    int p;
    cout << "Please Enter a Power?\n";
    cin >> p;
    cout << "---------------------------------------\n\n";
    return p;
}

void ResultAfterPower(int x, int y) {
    // Yani x^y olacaktir.
    int result = 1;
    for (int i = 1; i <=y ; i++)
    {
        result *= x;
    }
    cout << "The Result Is: " << result;

}
int main() {
        int number = readNumber();
        int pow = readPower();
        ResultAfterPower(number, pow);
        return 0;
}
--------------------------------------------------------------------------------------------
// HomWork #32 Write a program to print all letters from A to Z

#include <iostream>
using namespace std;

void printLettersAtoZ() {
    for (char c = 'A'; c <= 'Z'; c++) {
        cout << c << " "<<endl;
    }
}

int main() {
    printLettersAtoZ();
    return 0;
}
--------------------------------------------------------------------------------------------

*/

//Lesson #48 (For Loop & Arrays)

/*

---> Important Notes About Arrays:

1)- When to Use By Reference vs By Value:
    - Use By Reference (&) when:
		* Modifying original variable
		* Working with large data (saves memory)
		* Need multiple return values
		* Ex:
			void addFive(int &x) {
			x = x + 5; // يغير المتغير الأصلي مباشرة
			}

			int main() {
			int num = 10;
			addFive(num);
			cout << num; // يطبع 15 (تغير)
			}

    - Use By Value when:
	    * Only reading data
	    * Data is small
	    * Protect original data
		* Ex:

			void addFive(int x) {
			x = x + 5; // لا يؤثر على المتغير الأصلي
			}

		    int main() {
			int num = 10;
			addFive(num);
			cout << num; // يطبع 10 (لم يتغير)
		    }
-------------------------------------------------------------------------------
2)- Array Passing to Functions:
- Arrays are passed by reference by default.
- Changes to the array inside the function affect the original array.
- Ex:
#include <iostream>
using namespace std;

void test(int arr[]) {
    arr[0] = 100; // هذا سيغير المصفوفة الأصلية!
}

int main() {
    int myArray[5] = {1, 2, 3, 4, 5};
    test(myArray);
    cout << myArray[0]; // سيطبع 100 (تغيرت!)
	return 0;
}
---------------------------------------------------------------------------------------------------------
HomeWork 1:
#include <iostream>
using namespace std;

void readArrayData(int dizi[], int &uzunluk) {
	cout << "How Many Want to Enter Number?\nPlease Enter From 1 to 100\n";
	cin >> uzunluk;
	cout << "***********************************************\n";
	for (int i = 0; i < uzunluk; i++)
	{
		cout << "Please Enter Number " << i + 1 << endl;
		cin >> dizi[i];
		
	}
	cout << "***********************************************\n";
}


void printArrayData(int dizi[], int uzunluk) {
	for (int i = 0; i < uzunluk; i++) {
		cout << "The Number " << i + 1 << " Is: " << dizi[i] << endl;
	}
}

float sumNumbersOfArray(int dizi[], int uzunluk) {
	float sum = 0;
	for (int i = 0; i < uzunluk; i++)
	{
		sum += dizi[i]; //sum = sum + dizi[i];
	}
	return sum;
}

int main()
{
	int dizi[100];
	int uzunluk;
	
	readArrayData(dizi, uzunluk);
	printArrayData(dizi, uzunluk);
	cout << "***********************************************\n";
	cout << "The Sum For Numbers Is: " << sumNumbersOfArray(dizi, uzunluk) << endl;
	float avg;
	avg = sumNumbersOfArray(dizi, uzunluk) / uzunluk;
	cout << "The Avg For Numbers Is: " << avg << endl;
	cout << "***********************************************\n";

	return 0;
}

-----------------------------------------------------------------------------------------------------
HomeWork 2:











-----------------------------------------------------------------------------------------------------
*/