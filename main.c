#include "complex_calculator.h"
#include "test_complex_calculator.h"
#include "stdio.h"

int main(){

	test_main();

    complex_t cnum1 = {5, 6}, cnum2 = {3, 2}, cresult = {0, 0};
    
	//for adding the 2 complex nos
	
	complex_sum(&cnum1, &cnum2, &cresult);
    printf("\nSum of the complex numbers = %f + %fi\n", cresult.real, cresult.imaginary);
    
	//for finding difference between the 2 complex nos
    
    complex_diff(&cnum1, &cnum2, &cresult);
    printf("\nDifference of the complex numbers = %f + %fi\n", cresult.real, cresult.imaginary);

	//for multiplying the 2 complex nos
    
    complex_mul(&cnum1, &cnum2, &cresult);
    printf("\nMultiplication of the complex numbers = %f + %fi\n", cresult.real, cresult.imaginary);

	//for dividing the 2 complex nos
    
    complex_div(&cnum1, &cnum2, &cresult);
    printf("\nDivision of the complex numbers = %f + %fi\n", cresult.real, cresult.imaginary);

    return 0;
}