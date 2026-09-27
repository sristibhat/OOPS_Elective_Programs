
// Write a cpp program to find the largest of number in the list.
#include<iostream>
using namespace std;
int main(){
    int n;
int a[n];
cout<<"ENTER THE SIZE OF ARRAY"<<endl;
cin>>n;
for( int i=1;i<=n;i++)
{
    cin>>a[i];
}
int max1=0;
for(int i=1;i<=n;i++)
{
 if(a[i]>max1)
 {
     max1=a[i];
 }

}
cout<<"biggest is:"<<max1<<endl;
}
