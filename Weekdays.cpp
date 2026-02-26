#include <iostream>

using namespace std;

int main ()

{
       int a;

       cout << "Enter your number: ";
       cin >> a;

       if (a==1)
            cout << "Saturday" ;

       else if (a==2)
               cout << "Sunday" ;
            else if (a==3)
                     cout << "Monday" ;
                 else if (a==4)
                          cout << "Tuesday" ;
                      else if (a==5)
                              cout << "Wednesday" ;
                           else if (a==6)
                                   cout << "Thursday" ;
                                else if (a==7)
                                        cout << "Friday" ;
                                     else
                                         cout << "Error" ;

       return 0; 
}