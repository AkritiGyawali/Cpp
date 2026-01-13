    
    
    
#include <iostream>
using namespace std;

// Tower of Hanoi program in C using Recursion
// here S is source, A is auxiliary and D is Destination
void toH(int n, char S, char A, char D)
{
if (n == 1)
{
cout<<" Move disk 1 from rod "<<S<<" to rod "<<D <<endl;
return;
}
toH(n-1, S, D, A);
cout<<"Move disk "<< n<<" from rod "<< S<<" to rod "<<   D<<endl;
toH(n-1, A, S,D);
}

int main()
{
int no_of_disks ;
cout<<"enter the number of disk"<<endl;
cin>>no_of_disks;
toH(no_of_disks, 'S','A','D');
return 0;
}