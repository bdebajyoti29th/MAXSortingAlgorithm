/*
MAXSortingAlgorithm
This C++ Program is used to sort the array using the my own MAX way of sorting the items. 
This is my first algorithm on sorting the items please do check the efficiency of program.
*/
#include<iostream.h>
#include<conio.h>
void arrange(int A[20],int N);
int main()
{
int A[20],i,n;
clrscr();
cout<<"\nEnter How Many Number You Input : ";
cin>>n;
cout<<"\nEnter The Elements One After Another\n";
for(i=0;i<n;i++)
{
cout<<"\nEnter Element No."<<i+1<<":";
cin>>A[i];
}
clrscr();
cout<<"\nBefore Arrangements Elements Are:\n";
for(i=0;i<n;i++)
{
cout<<"\nElement No."<<i+1<<":"<<A[i];
}
arrange(A,n);
getch();
return 0;
}
void arrange(int A[20],int N)
{
int i,j=0,B[20],MAX=0,k=0;
for(i=N-1;i>=0;i--)
{
for(j=0;j<N;j++)
{
if(A[j]>MAX)
{
MAX=A[j];
k=j;
}
}
B[i]=MAX;
A[k]=0;
MAX=0;
}
cout<<"\n\nAfter Arrangements Elements Are:\n";
for(i=0;i<N;i++)
{
cout<<"\nElement No."<<i+1<<":"<<B[i];
}
}
/*
Created And Designed By: Debajyoti Bhattacharjee(MCA),INDIA
Contact:7002858345
EmailID:bdebajyoti@hotmail.com/debajyoti29th@gmail.com
Please Do Check The Efficiency Of This Program
Modified Version Will Be Uploaded By Few Days....Thank You
*/