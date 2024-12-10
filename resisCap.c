#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    string a,b,c;
    int i;
    double d=0,e=0,f=0;
    double R;
    cout<<"====================================================="<<endl<<endl;
    cout<<"=========RESISTOR AND CAPACITOR CALCULATOR==========="<<endl<<endl;
    cout<<"What do you want to check the value of ?"<<endl<<endl;
    cout<<"press 1 for resistor or press 2 for capacitor"<<endl<<endl;
    cin>>i;
    cout<<endl;
    switch(i)
    {
    case 1:
    cout<<"Enter color of first band of your resistor:"<<endl<<endl;
    cin>>a;
    cout<<endl;
    cout<<"Enter color of second band of your resistor:"<<endl<<endl;
    cin>>b;
    cout<<endl;
    cout<<"Enter color of third band of your resistor:"<<endl<<endl;
    cin>>c;
    cout<<endl;
    if (a=="black")
        d=0;
    else if (a=="brown")
        d=1;
    else if (a=="red")
        d=2;
    else if (a=="orange")
        d=3;
    else if (a=="yellow")
        d=4;
    else if (a=="green")
        d=5;
    else if (a=="blue")
        d=6;
    else if (a=="violet")
        d=7;
    else if (a=="gray")
        d=8;
    else if (a=="white")
        d=9;

    if (b=="black")
        e=0;
    else if (b=="brown")
        e=1;
    else if (b=="red")
        e=2;
    else if (b=="orange")
        e=3;
    else if (b=="yellow")
        e=4;
    else if (b=="green")
        e=5;
    else if (b=="blue")
        e=6;
    else if (b=="violet")
        e=7;
    else if (b=="gray")
        e=8;
    else if (b=="white")
        e=9;

    if (c=="black")
        f=pow(10,0);
    else if (c=="brown")
        f=pow(10,1);
    else if (c=="red")
        f=pow(10,2);
    else if (c=="orange")
        f=pow(10,3);
    else if (c=="yellow")
        f=pow(10,4);
    else if (c=="green")
        f=pow(10,5);
    else if (c=="blue")
        f=pow(10,6);
    else if (c=="violet")
        f=pow(10,7);
    else if (c=="gray")
        f=pow(10,8);
    else if (c=="white")
        f=pow(10,9);

    R=((d*10)+e)*f;
    cout<<"Resistance of your resistor is"<<R<<"ohm(s)"<<endl;
    break;
    case 2:

        double C,s,t,u;
        char v;
        cout<<"Enter first digit written on your capacitor"<<endl<<endl;
        cin>>s;
        cout<<endl;
        cout<<"Enter second digit written on your capacitor"<<endl<<endl;
        cin>>t;
        cout<<endl;
        cout<<"Enter third digit written on your capacitor"<<endl<<endl;
        cin>>u;
        cout<<endl;
        cout<<"Enter the character written on your capacitor"<<endl<<endl;
        cin>>v;
        cout<<endl;
        C=(s*10+t)*pow(10,u);
        cout<<"Value of your capacitor is "<<C<<" PF"<<endl;


}
    return 0;
}