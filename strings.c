/*********************************************
 * raju
 * 09/10/2021
 * to understand string init in C language
 ********************************************/


#include <stdio.h>

int main(){

	int s1_int[10];
	char s1_char[10];
	char *s1_ptr[10];

	int s2_int[] = {1,2,3,4,5};
	char s2_char[] = "Vibha";
	char *s2_ptr[] = {"Vibha", "Raju", "Pushkala"};

	char s3_char[50] = "Vibha";

	char s4_char[] = {'V', 'i', 'b', 'h', 'a'};
	// Change 'V' to 'X' and see output

	char s5_char[] = {'V', 'i', 'b', 'h', 'a', '\0'};

	char s6_char[6] = {'V', 'i', 'b', 'h', 'a', '\0'};

	printf("Exploration of strings: \n");

	printf("sizeof s1_int = %ld\n", sizeof(s1_int));
	printf("sizeof s1_char = %ld\n", sizeof(s1_char));
	printf("sizeof s1_ptr = %ld\n", sizeof(s1_ptr));

	printf("sizeof s2_int = %ld\n", sizeof(s2_int));
	printf("sizeof s2_char = %ld\n", sizeof(s2_char));
	printf("s2_char = %s\n\n", s2_char);
	printf("sizeof s2_ptr = %ld\n", sizeof(s2_ptr));

	printf("sizeof s3_char = %ld\n", sizeof(s3_char));
	printf("s3_char = %s\n\n", s3_char);

	printf("sizeof s4_char = %ld\n", sizeof(s4_char));
	printf("s4_char = %s\n\n", s4_char);

	printf("sizeof s5_char = %ld\n", sizeof(s5_char));
	printf("s5_char = %s\n\n", s5_char);

	printf("sizeof s6_char = %ld\n", sizeof(s6_char));
	printf("s6_char = %s\n\n", s6_char);

	return(0);
}

