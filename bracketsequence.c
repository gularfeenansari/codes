#include<stdio.h>
int main(){


int i,j,seq=0;

char array[6]={')','(',')','(',')','('};



	for(i=0 ; i<(sizeof(array)/sizeof(char)) ; i++)

	{
	for(j=i+1 ; j<(sizeof(array)/sizeof(char)) ; j++)
	
	{
	
		if(array[i]!=-1 && (array[i]!=array[j]))
	
		{
			seq++;
			array[j]=-1;	}	
	}


			
	}

printf("no of sequence is = %d",seq);

return 0;	
}
