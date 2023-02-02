#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main()
{
	int num, U, T, H, TH,S,P;
	char *single_digits[]	= {"zero", "one",                           "two", "three", "four", "five",                          "six", "seven", "eight", "nine"};
	
	char *two_digits[]	= {"", "ten", "eleven",
	              "twelve", "thirteen", "fourteen", 
	              "fifteen", "sixteen","seventeen", 
	              "eighteen", "nineteen"};

	char *tens_multiple[] = {"", "", "twenty", 
	                             "thirty", "forty", "fifty",
                                   "sixty", "seventy",
                                  "eighty","ninety"};

   char *tens_power[] = {"hundred",
                                      "thousand"};
	
	printf("\n Name : Sachin Kumar Malviya"
		   "\t Rollno : 0827CS201209\n");

	printf("\n Enter only four digit number : ");
	scanf("%d", &num);
	TH = num / 1000;
	H = (num % 1000) / 100;
	T = (num % 100) / 10;
	U = num % 10;
/*	if(TH>0) S=1,P=0; else S=0;
	char*sp="9";
	printf("\n%d",sp);/
/*	printf("\n %d thousands,%d hundreds, %d 
      tens, %d units", TH,H, T, U);*/
	if(TH==0){
      	printf("\n %s hundred %s %s ", single_digits[H],
	tens_multiple[T],single_digits[U]);
	  }
	  else{
	  	printf("\n %s thousand %s hundred %s %s ", 
	single_digits[TH],single_digits[H],
	tens_multiple[T],single_digits[U]);
	  }
	
	return 0;
}
