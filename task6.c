//********************************************************************
//*                    EEE2046F/EEE2050F C template                  *
//*==================================================================*
//* WRITTEN BY:    	                 		             *
//* DATE CREATED:                                                    *
//* MODIFIED:                                                        *
//*==================================================================*
//* PROGRAMMED IN: Eclipse Luna Service Release 1 (4.4.1)            *
//* TARGET:    PC or STM32F0?                                        *
//*==================================================================*
//* DESCRIPTION:                                                     *
//*                                                                  *
//********************************************************************
// INCLUDE FILES
//====================================================================
#include <stdio.h>
#include <math.h>
//====================================================================
// GLOBAL CONSTANTS
#define TITLE "BINARY TO DECIMAL CONVERTOR"
#define AUTHOR "Tumelo Lephadi"
#define YEAR 2017
//====================================================================

//====================================================================
// GLOBAL VARIABLES
//====================================================================

//====================================================================
// FUNCTION DECLARATIONS
//====================================================================
int dec2bin(int value)
{
	int remainder = 0, i = 1, binary = 0;
	while(value != 0)
	{
		remainder = value % 2;
		value = value / 2;
		binary = binary + (remainder * i);
		i = i * 10;
	}
	return binary;
}
//====================================================================
// MAIN FUNCTION
//====================================================================
int main (void)
{
	int decimal;
	printf("***************************\n");
	printf("%s\n", TITLE);
	printf("Written by: %s\n", AUTHOR);
	printf("Date: 2017 %d\n", YEAR);
	printf("***************************\n");
	while(decimal >= 0)
	{
		printf("Enter a decimal number: ");
		scanf("%d", &decimal);
		printf("The number that you have entered is: %d\n", decimal);
		if (decimal < 0)
		{
			printf("EXIT\n");
			break;			
		}
		else
		{
			printf("The log2 of the number is %.2f\n", log2(decimal));
			printf("The number divided by 2 is %d\n", (decimal / 2));
			printf("The remainder is %d\n", (decimal % 2));
			printf("The binary value is: %d\n", dec2bin(decimal));
		}
	}	
	return(0);	
}// End of main
//********************************************************************
// END OF PROGRAM
//********************************************************************
