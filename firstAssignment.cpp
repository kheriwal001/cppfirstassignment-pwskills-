/* Question 1 =Take 2 integer values in two variables x and y and print their product.

find product of x and y
#include<iostream>
using namespace std;
int main(){
    int x , y;
    cout<<"enter x and y"<<endl;
    cin>>x>>y;
    int p = x*y;
    cout<<"product: "<<p<<endl;
    return 0;
}


question 2= Print the ASCII value of character ‘U’.

#include<iostream>
using namespace std;
int main(){
    char n;
    cout<<"enter chracter value"<<endl;
    cin>>n;
    
    cout<<int(n)<<endl;
    return 0;
}


Question 3 =Write a C++ program to take length and breadth of a rectangle and print its area.

#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"enter length and breadth"<<endl;
    cin>>l>>b;
    int a = l*b;
    cout<<"area"<<a<<endl;
    return 0;
}


Question 4=Write a C++ program to calculate the cube of a number.

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    cout<<"cube"<<n*n*n<<endl;
}

Question5=Write a C++ program to calculate the cube of a number.

#include <iostream>
using namespace std;

int main() 
{    
    cout << "Size of char: " << sizeof(char) << " byte" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of  short: " << sizeof(short)<< " byte" << endl;
    cout << "Size of  long: " << sizeof(long)<< " byte" << endl;
    cout << "Size of  long long" << sizeof(long long)<< " byte" << endl;
    cout << "Size of double:" << sizeof(double)<< " byte" << endl;
    cout << "Size of long double:" << sizeof(long double)<< " byte" << endl;
    cout << "Size of bool:" << sizeof(bool)<< " byte" << endl;
    return 0;
}

Question6 =Write a C++ program to swap two numbers with the help of a third variable.

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter num"<<endl;
    cin>>n>>m;
    int temp = n;
    n =m;
    m =temp;
    cout<<"n:"<<n<<"  "<<"m: "<<m<<endl;
}

*/