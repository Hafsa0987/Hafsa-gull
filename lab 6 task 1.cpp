#include<iostream>
using namespace std;
int main()
{
 string password;
 string correct_password="12345";
 int i=1;
 while(i<=5)
 {
 cout<<"Enter password"<<endl;
 cin>>password;
 i++;
 if(password==correct_password)
 {
 cout<<"Access granted"<<endl;
 break;
 }
 else
 {
 	cout<<"incorrect password try again"<<endl;
 }
}
return 0;  
}