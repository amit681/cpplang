#include<stdio.h>
#include<string.h>
int main()
{
	
	//declaring two dimensional array of character to store names and other necessary variables
	char name[20][10]={"Hannah","Solomon","Isaac","Simon","Gideon","Karthick","Samuel","Deepak","Lenin","David","Moses","Samson"};
	char temp[10];
	int i,j,BEG=0,END=11,MID;
	
	//Given array
	printf("--------------------------\n\tGiven array\n--------------------------\n");
	for(i=0; i<12; i++)
	{
		printf("%d)%s\n",i,name[i]);	
	}
	
	printf("\n------------------------------------------------------------------------------------");
	//code to find number of comparisons
	printf("\n1) Number of comparisons used by linear search to locate Isaac, Samuel and David are\n");
	for(i=0; i<20; i++)
	{
		if(strcmp(name[i],"Deepak")==0)
			printf("Deepak\t:\t%d comparisons\n",i+1);
		
		if(strcmp(name[i],"Samuel")==0)
			printf("Samuel\t:\t%d comparisons\n",i+1);
		
		if(strcmp(name[i],"David")==0)
			printf("David\t:\t%d comparisons\n",i+1);
			
	}
	printf("------------------------------------------------------------------------------------");
	
	
	//code to sort array of names in assending order
	for(i=0; i<11; i++)
	{
		for(j=i+1; j<12; j++)
		{
			if(strcmp(name[i],name[j]) > 0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	
	//Sorted array
	printf("\n\n--------------------------\n\tSorted array\n--------------------------\n");
	for(i=0; i<12; i++)
	{
		printf("%d)%s\n",i,name[i]);	
	}
	
	printf("\n-----------------------------------------------------------------------------------");
	printf("\n2) Application of Binary Search to the array (name[]) to find the location of Moses\n\n");
	
	//code of binary search to find the location of Moses
	i=0;
	while(BEG<=END)
	{
		i++;
		MID = (BEG + END) / 2;
		printf("COMPARISON %d) BEG : %d \t\t END : %d \t\t MID : %d \n",i,BEG,END,MID);
		if(strcmp(name[MID],"Moses")>0)
			END = MID;
			
		else if(strcmp(name[MID],"Moses")<0)
			BEG = MID;
		
		else
			break;		
	}
	printf("\nMoses is located at index : %d",MID);
	printf("\nTotal Number of comparisons to locate Moses using Binary Search  : %d",i);
	printf("\n-----------------------------------------------------------------------------------");
	
	
	//Insertion of new element where at the place of Moses
	i=11;
	while(i>=MID)
	{
		strcpy(name[i+1],name[i]);
		i--;	
	}
	printf("\n\n-------------------------------------------------------------------");
	printf("\n3)Enter a string to insert at the place of Moses : ");
	scanf("%s",temp);
	strcpy(name[MID],temp);
	
	for(i=0; i<13; i++)
	{
		printf("%d)%s\n",i,name[i]);	
	}
	printf("-------------------------------------------------------------------");
	
	return 0;
}
