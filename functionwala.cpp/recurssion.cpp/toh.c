    
    
    
#include <stdio.h>

 // Tower of Hanoi program in C using Recursion
 // here S is source, A is auxiliary and D is Destination
 void toH(int n, char S, char A, char D)
 {
 if (n == 1)
 {
 printf("\n Move disk 1 from rod %c to rod %c",S ,D );
 return;
 }
 toH(n-1, S, D, A);
 printf("\n Move disk %d from rod %c to rod %c", n, S, D);
 toH(n-1, A, S,D);
 }

 int main()
 {
 int no_of_disks ;
 printf("Enter number of disks: ");
 scanf("%d", &no_of_disks);
 toH(no_of_disks, 'S','A','D');
 return 0;
 }