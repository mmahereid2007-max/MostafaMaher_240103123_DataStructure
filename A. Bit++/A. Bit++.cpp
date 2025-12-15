#include<iostream>
using namespace std;
#include <string>
int main()
{
 int X{0}; 
 int N;
 cin>>N;
 string statement ;
 
 while (N!=0) {
 cin >>statement ;
 if(statement =="++X" || statement == "X++" ){
 X++;
}  
else if(statement =="--X" || statement == "X--") {
 X-- ;
 }N-- }
 cout<<X;
    return 0;
}