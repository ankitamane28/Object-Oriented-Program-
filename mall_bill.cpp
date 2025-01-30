#include <iostream>
#include<iomanip>
using namespace std;
int main() 
{
    int total;
    string item[3]={"Suger","Rice","Milk"};
    int price[3]={40,120,60};
    
    cout<<left<<"Item"<<'\t'<<right<<"Price"<<endl;
    
    for(int i=0;i<3;i++)
    {
        cout<<left<<item[i]<<'\t'<<right<<setw(5)<<price[i]<<endl;
         total+=price[i];
    }
    cout<<"_______________"<<endl;
    cout<<right<<"Total"<<'\t'<<left<<total<<endl;
    
    return 0;
}