#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    //int age;
    //cout << "Hello how old are you?" << endl;
    //cout << "your age:";
    //cin>> age;
    //cout<<"so, your age : "<<age<<endl;
    // return 0;

    //problem1
    // string name;
    // int age;
    // cout << "please,enter your name: ";
    // cin >> name;
    // cout << "ok," <<name<< "how old are you?"<<endl;
    // cin >> age;
    // cout << " you are " <<name<<endl;
    // cout<<"you are "<<age<<"years old"<< endl;
    // return 0;

    //problem2
    // int a=1 ,b=2 ,c=3, d=4 ,e=5;
    // cout<<setw(5)<<a<<endl;
    // cout<<setw(5)<<b<<endl;
    // cout<<setw(5)<<c<<endl;
    // cout<<setw(5)<<d<<endl;
    // cout<<setw(5)<<e<<endl;
    // return 0;

    //problem3
    // int a,b;
    // cout << "Hello  , enter first integer";
    // cin >> a;
    // cout << "enter second integer";
    // cin >> b;
    // cout << "before swapping" <<endl;
    // cout << "first integer is " << a << endl
    // << "second integer is " << b << endl;

    //problem4
    // int temp=a;
    // a=b;
    // b=temp;
    // cout << "after swapping" <<endl;
    // cout << "first integer is " << a << endl;
    // cout << "second integer is " << b << endl;
    // return 0;

    //problem5
    // string input;
    // cout << "Please enter a string" << endl;
    // cin >> input;
    // int width=50;
    // int padding=(width-input.length())/2;
    // cout<<setw(padding)<<input<<setw(padding)<<endl;

    //lab_3
    //problem1
    // int a, b, c, d,e ;
    // cout<< "enter  5 integers"<< endl;
    // cin >> a>> b>> c>>d >>e;
    // int sum=a+b+c+d+e;
    // cout<< "sum of your integer is equal to "<<sum<<endl;
    // return 0;

    //problem2
    // int student_id,  year_of_study,study_fee;
    // float gpa;
    // cout<<"enter your student ID:"<<endl;
    // cin>>student_id;
    // cout<<"enter your GPA:"<<endl;
    // cin>>gpa;
    // cout<<"enter your Year of study:"<<endl;
    // cin>>year_of_study;
    // cout<<"enter your study_fee:"<<endl;
    // cin>>study_fee;
    // cout << "student ID: " << student_id << endl;
    // cout << "GPA: " << gpa << endl;
    // cout << "Year of study: " << year_of_study << endl;
    // cout << "Study fee: " << study_fee<< "sum"<<endl;
    // return 0;

    //problem3
    // int celcius,fahrenheit;
    // cout<<"Enter the temperature in celcius: ";
    // cin>>celcius;
    // fahrenheit = (celcius * 1.8) + 32;
    // cout<<"The temperature in Celcius: "<<celcius<<endl;
    // cout<<"The temperature in Fahrenheit: "<<fahrenheit<<endl;
    // return 0;

    //problem4
    // int  quantity1, quantity2;
    // double price1,price2, total;
    // cout << "Enter price of apple: ";
    // cin >> price1;
    // cout << "Enter quantity apple: ";
    // cin >> quantity1;
    // cout<<"Enter price of bread: ";
    // cin >> price2;
    // cout<<"Enter quantity bread: ";
    // cin >> quantity2;
    //
    // total = price1 * quantity1+price2 * quantity2;
    // cout<<"Total cost: "<<total;
    // return 0;

    //problem5
    // float age_of_dad,age_of_mom,age_of_sibling,age_of_you;
    // float avg;
    // cout << "Enter your father's age: ";
    // cin >> age_of_dad;
    // cout << "Enter your mother's age: ";
    // cin >> age_of_mom;
    // cout << "Enter your sibling's age: ";
    // cin >> age_of_sibling;
    // cout << "Enter your you age: ";
    // cin >> age_of_you;
    // avg=(age_of_mom+age_of_sibling+age_of_you+age_of_dad)/4.0;
    // cout<<"average age of a family is : "<<avg<<endl;
    // return 0;

    //problem6
    // float width, length, area, perimeter;
    // cout << "Enter the length of the rectangle: ";
    // cin >> length;
    // cout << "Enter the width of the rectangle: ";
    // cin >> width;
    // area = (length * width);
    // perimeter = 2 *(length + width);
    // cout<<"Area of the rectangle is: "<<area<<endl;
    // cout<<"Perimeter of the rectangle is: "<<perimeter<<endl;
    // return 0;

    //problem7
    // int devidend, divisor, quotient, remainder;
    // cout << "Enter a devidend: ";
    // cin >> devidend;
    // cout << "Enter a divisor: ";
    // cin >> divisor;
    // quotient = devidend / divisor;
    // remainder = devidend % divisor;
    // cout << "The quotient of the division is : "<< quotient << endl;
    // cout << "The remainder of the division is : " << remainder << endl;
    // return 0;


    //problem8
    // float amount1, ex_rate;
    // int amount2;
    // cout<<"enter the amount in USD";
    // cin>>amount1;
    // cout<<"enter the exchange rate ";
    // cin>>ex_rate;
    // amount2 = amount1*ex_rate;
    // cout<<"the equivalent amount in UZS :"<< amount2 <<endl;
    // return 0;

    //problem9
    // float rad;
    // float area
    // ;
    // cout << "Enter the radius of the circle: ";
    // cin >> rad;
    // area = 3.14 * rad * rad;
    // cout << "The area of the circle with r="<<rad<<": " << area << endl;
    // return 0;

    //problem10
    //     float rad , height, volume;
    //     cout<<"Enter the radius of a base the circle: ";
    //     cin>>rad;
    //     cout<<"Enter the height of the cylinder: ";
    //     cin>>height;
    //     volume = 3.14*rad*rad*height;
    //     cout<<"The volume of the circle with r="<<rad<<"and h="<<height<<": "<<volume<<endl;
    // return 0;

    //problem12
    // int minutes, hours ,remaining_min ;
    // cout << "Enter number of  minutes:";
    // cin >> minutes;
    // hours = minutes / 60;
    // remaining_min = minutes % 60;
    // cout<<"total time :"<<hours<<"hours "<<remaining_min<<"minutes"<<endl;
    // return 0;

    //problem13
    // int fix_cost, selling_price, var_cost, bep;
    // cout << "Enter selling price per unit : ";
    // cin>>selling_price;
    // cout << "Enter variance per unit : ";
    // cin>>var_cost;
    // fix_cost=10000;
    // bep=fix_cost/(selling_price-var_cost);
    // cout<<"break-even point : "<<bep<<endl;
    // return 0;

    //problem14
    // int tax_rate, basic_salary,net_salary;
    // cout << "Enter your salary: ";
    // cin >> basic_salary;
    // cout<<"enter tax percentage: ";
    // cin>>tax_rate;
    // net_salary=basic_salary-basic_salary*tax_rate/100;
    // cout<<"net salary is: "<<net_salary<<endl;
    // return 0;

    //problem15
    // int price1,dis_percent,dis_amount, final_price;
    // cout << "original price: ";
    // cin >> price1;
    // cout<<"discount percentage: ";
    // cin>>dis_percent;
    // dis_amount = price1 * dis_percent/100;
    // cout<<" discount amount : "<<dis_amount<<endl;
    // final_price = price1 - dis_amount;
    // cout<<"final price: "<<final_price;
    // return 0;

    //problem16
    // float grade1, grade2, grade3, grade4, grade5,gpa;
    // int credit1, credit2, credit3, credit4, credit5;
    // cout<<"Grade points for courses:";
    // cin>>grade1>>grade2>>grade3>>grade4>>grade5;
    // cout<<"Credit hours for courses:";
    // cin>>credit1>>credit2>>credit3>>credit4>>credit5;
    // gpa=(grade1*credit1+grade2*credit2+grade3*credit3+grade4*credit4+grade5*credit5)/(credit1+credit2+credit3+credit4+credit5);
    // cout << fixed << setprecision(2);
    // cout<<"The average GPA is:"<<gpa<<endl;
    // return 0;

    // problem17
    // int price1, price2;
    // float inflation_rate;
    // cout<<" initial price :";
    // cin>>price1;
    // cout<<"final price :";
    // cin>>price2;
    // inflation_rate = float(price2-price1)/price1*100;
    // cout<<"inflation rate :"<<inflation_rate<<"%";
    // return 0;

    //problem18
    // double  original_fee, scholar_rate, scholar_amount,final_fee;
    // cout<<"Original Tuition Fee:";
    // cin>>original_fee;
    // cout<<"Scholarship rate(%):";
    // cin>>scholar_rate;
    // scholar_amount=scholar_rate*original_fee/100;
    // cout<<"scholarship amount:"<<scholar_amount<<endl;
    // final_fee=original_fee-scholar_amount;
    // cout<<"Final Tuition Fee:"<<final_fee;
    // return 0;

    //problem19
    // float p, r, t, SI;
    // cout << "Principal amount :" ;
    // cin >> p;
    // cout<<"Rate of Interest (%):";
    // cin >> r;
    // cout<<"time(years): " ;
    // cin >> t;
    // SI=p*r*t/100;
    // cout<<"The simple interest is:"<<SI<<endl;
    // return 0;

    //problem20
    // float principal_amount, interest_rate,amount,compound;
    // cout<<"principal:";
    // cin>>principal_amount;
    // cout<<"annual interest rate(%):";
    // cin>>interest_rate;
    // amount = principal_amount *( 1+interest_rate/100)*(1+interest_rate/100);
    // compound = amount - principal_amount;
    // cout<<"compound interest after 2 years is:"<<compound<<endl;
    // cout<<"total interest after 2 years is:"<<amount<<endl;
    // return 0;



    //lab4

    //problem1
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // if (num > 0) {
    //     cout<<"positive number"<<endl;
    // }else if (num<0) {
    //     cout<<"negative number"<<endl;
    // }else {
    //     cout<<"zero"<<endl;
    // }
    // return 0;

    //problem2
    // int num;
    // cout<<"enter a number: ";
    // cin >> num;
    // if (num%2 == 0) {
    //     cout << num << " is even" << endl;
    // }
    // else {
    //     cout << num << " is odd" << endl;
    // }
    //return 0;

    //problem3
    // int num1, num2;
    // cout << "Enter two numbers: ";
    // cin >> num1 >> num2;
    // if (num1 > num2) {
    //     cout << num1 << endl;
    // }
    // else if (num1 < num2) {
    //     cout <<num2 <<endl;
    // }
    // else {
    //     cout<<"they are equal";
    // }
    // return 0;

    //problem4
    //  int a,b,c;
    // cout<<"3 numbers"<<endl;
    //  cin>>a>>b>>c;
    //  if (a>=b && a>=c) {
    //      cout<<a<<"is the largest";
    //  }
    //  else if ( b>=c) {
    //      cout<<b<<"is the largest";
    //  }
    //  else   {
    //      cout<<c<<"is the largest";
    //  }
    //  return 0;

    //problem5
    // int year;
    // cout<<"Enter Year: ";
    // cin>>year;
    // if (year%4==0) {
    //     cout<<"leap year"<<endl;
    // }
    // else {
    //     cout<<"not leap year"<<endl;
    // }
    // return 0;

    //problem6
    // int speed;
    // cout << "Enter speed: ";
    // cin >> speed;
    // if (speed<=20) {
    //     cout<<"too slow"<<endl;
    // }
    // else if (speed>=80) {
    //     cout<<"too fast"<<endl;
    // }
    // else {
    //     cout<<"just right "<<endl;
    // }
    // return 0;

    //problem7
    // int mark;
    // cout << "Enter your marks: ";
    // cin >> mark;
    // if (mark>=50 ) {
    //     cout<<"passed"<<endl;
    // }
    // else {
    //     cout<<"failed"<<endl;
    // }
    // return 0;

    //problem8
    // int num;
    // cout<<"enter a number: ";
    // cin>>num;
    // if (num>0) {
    //     cout<<"positive"<<endl;
    // }
    // else if (num<0) {
    //     cout<<"negative"<<endl;
    // }
    // else {
    //     cout<<"zero"<<endl;
    // }
    // return 0;

    //roblem9
    // string color;
    // cout<<"enter the traffic light color:";
    // cin>>color;
    // if (color == "green") {
    //     cout<<"GO!"<<endl;
    // }else if (color == "red") {
    //     cout<<"STOP!"<<endl;
    // }else if (color == "yellow") {
    //     cout<<"GET READY!"<<endl;
    // }else {
    //     cout<<"ERROR!"<<endl;
    // }
    // return 0;

    //problem9.1
    char light;
    cout << "Enter a character: ";
    cin >> light;
    switch (light) {
        case 'g':
            cout << "GO!" << endl;
        break;
        case 'r':
            cout << "STOP!" << endl;
        break;
        case 'y':
            cout << "GET READY!" << endl;
        break;
        default:
            cout << "invalid input!" << endl;
        return 0;
    }

    //problem10
    // int grade ;
    // cout << "enter your grade:" << endl;
    // cin >> grade;
    // if (grade >= 90 && grade <= 100) {
    //     cout << "A" << endl;
    // }
    // else if (grade >= 80 && grade <= 89) {
    //     cout << "B" << endl;
    // }
    // else if (grade >= 70 && grade <= 79) {
    //     cout << "C" << endl;
    // }
    //
    // else if (grade >= 60 && grade <= 69) {
    //     cout << "D" << endl;
    // }
    // else if (grade >= 0 && grade <= 59) {
    //     cout << "F" << endl;
    // }
    // else {
    //     cout << "ERROR" << endl;
    // }
    // return 0;

    //problem11
    // int a,b;
    // cout<<"Enter the  numbers: ";
    // cin>>a>>b;
    // if (a%2==0){}

}

