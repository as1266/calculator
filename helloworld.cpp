#include<iostream>//basic code for finding the smallest, largest, product and division of two numbers given
#include <iomanip>
using namespace std;
int main()
{
    int x,y,t,v,j,n;//only asked for two each but it shouldnt be too hard to add more if else statements to figure out for more or just add more rstrictions in the parameters
    char Yes, No;
    int smallest, largest,Product, Division;
while(true)//boolean expression which makes this loop happen to make sure that the switch statement keeps repeating while the case is true
{
    cout<<"Enter which choice you want to make 1-5"<<endl;
    cin>>n;
    switch (n)//n is the given name fore the cin which means anything past 5 will not work
{
    case 1:
    cout<<"Enter two numbers and we will print out your minimum value"<<endl;
    cin>> x>> y;
    if (x < y) {
        smallest = x;
         cout<<"Your minmum value is \n"<< smallest << endl;
    }else{
        smallest = y;
        cout<<"Your minmum value is \n"<< smallest << endl;
    }
        break;
    case 2:
       cout<<"Enter two numbers and we will print out your maximum value"<<endl;
    cin>> x>> y;
    if (x > y){
        largest = y;
        cout<<"Your largest value is \n"<< largest << endl;
    }else{
        largest = x;
        cout<<"Your largest value is \n"<< largest << endl;
        }
        break;
    case 3:
        cout<<"Enter two numbers and we will print out the product of the two values"<<endl;
        cin>> t>> v;
        Product=t*v;
        cout<<"Your product is \n"<< Product << endl;
        break;
    case 4:
        cout<<"Enter two numbers and we will print out the result of the division of the two values"<<endl;
        cin>> t>> v;  
        Division=t/v;
        cout<<"Your result is \n"<< Division<< endl;
        break;
    case 5:
        cout<<"Would you like to exit this program?"<<endl;
        cin>> Yes;
        exit(1);//makes the loop stop if the user is bored(you will be after a minute of this lol)
    default:
    break;
    }
}
return 0;
}//end of my program hope it was readable 