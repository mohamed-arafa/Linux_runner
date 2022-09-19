#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	while(1){
		int n;
		char buffer[40];
		write(1,"Welcom to my first c program using system calls \n",50);
	        write(1,"\nEnter somthing or exit :  ",28);
		n=read(0,buffer,40);
		int x= strncmp(buffer,"exit",4);

		if(x!=0)
			{
			write(1,"you entered : ",15);
			write(1,buffer,n);
			write(1,"\n",1);
			}
		else if(x==0)
			{
		        write(1,"bey bey\n",8);
			exit(3);
			}
		}

	return 0;
}

