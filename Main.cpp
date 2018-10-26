#include <gmpxx.h>  //GMP library
#include <cstdio> // For Printing to file
#include <iostream> //pause
#include <math.h> // log2
#include <string> //for c_str()
#include <iomanip> //setprecision

using namespace std;
int pause()
{
	cout << "Press enter to exit...";
	cin.ignore();
	return 0;
}
int main () //Start main function
{
    long int User_Prec; // Declare variable user_Precision
    cout << "How many decimal places of pi would you like?: ";
    cin >> User_Prec;
    string tmp = "%0." + to_string(User_Prec)+ "Ff\n";
    const char * File_prec= tmp.c_str();
    //Set precision as variabels
    int loops = log2(User_Prec) + 1;
    //Tell GMP the precision needed
    mpf_set_default_prec(User_Prec * 10);

    //Decalre variables (including temporary ones)
    mpf_class a, b, t, a_next, b_next, t_next, temp, pi;
    
    //Assign values to variables
    a = 1;
    b = 0.5;    //set value to half and then square root
    mpf_sqrt(b.get_mpf_t(), b.get_mpf_t()); //square root
    t  = 0.25;
    long int p = 1;
    double complete;
    cout << setprecision(0);
    cout << fixed;
    /*
     Create loop and loop counter (n) 
    */
    for(int n = 0; n <= loops; n++) //n++ increments n. so on every loop it increases in by 1; 
    {
        //Set next values according to Gauss-Legendre formula
        a_next = (a + b)/2;
        b_next = (a * b);
        mpf_sqrt(b_next.get_mpf_t(), b_next.get_mpf_t());
        temp = a - a_next;
        t_next = t - p * temp * temp;
        complete = (n / (log2(User_Prec) + 1) ) * 100;
        
        //Set values of old variables to values of new variables
        a = a_next;
        b = b_next;
        t = t_next;
        p = 2 * p;
        cout << complete << '%' << endl;
    }
    //Final Maths
    temp = (a + b) / 2;
    pi = temp * temp / t;
    cout << "100%" << endl;
    // Print to console
    gmp_printf ("%0.100Ff\n", pi.get_mpf_t());
    
    // Open file 
    FILE *fp;
    fp = fopen("pi.txt","w");
    gmp_fprintf(fp, File_prec, pi.get_mpf_t());
    
    pause();
    // End Code
    return 0;
}
