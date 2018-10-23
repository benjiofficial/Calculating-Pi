#include <gmpxx.h>  //GMP library
#include <cstdio> // For Printing to file
#include <iostream> //pause

int pause()
{
	std::cout << "Press enter to exit...";
	std::cin.ignore();
	return 0;
}
int main () //Start main function
{
    //Set precision as variabels
    int prec = 10485760; // 2^loops * 10 (* 10 for extra accuracy)
    int loops = 20;

    //Tell GMP the precision needed
    mpf_set_default_prec(prec);

    //Decalre variables (including temporary ones)
    mpf_class a, b, t, a_next, b_next, t_next, temp, pi;
    
    //Assign values to variables
    a = 1;
    b = 0.5;    //set value to half and then square root
    mpf_sqrt(b.get_mpf_t(), b.get_mpf_t()); //square root
    t  = 0.25;
    long int p = 1;
   
    /*
     Create loop and loop counter (n) 
    */
    for(int n = 0; n < loops; n++) //n++ increments n. so on every loop it increases in by 1; 
    {
        //Set next values according to Gauss-Legendre formula
        a_next = (a + b)/2;
        b_next = (a * b);
        mpf_sqrt(b_next.get_mpf_t(), b_next.get_mpf_t());
        temp = a - a_next;
        t_next = t - p * temp * temp;

        //Set values of old variables to values of new variables
        a = a_next;
        b = b_next;
        t = t_next;
        p = 2 * p;
    }
    //Final Maths
    temp = (a + b) / 2;
    pi = temp * temp / t;

    // Print to console
    gmp_printf ("%.100Ff\n", pi.get_mpf_t());
    
    // Open file 
    FILE *fp;
    fp = fopen("pi.txt","w");
    gmp_fprintf(fp, "%0.1048576Ff\n", pi.get_mpf_t());
    
    pause();
    // End Code
    return 0;
}