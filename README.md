# Calculating-Pi
Calculating pi using the square AGM method <br>

<h3> Default settings </h3>
Set to calculate: 1048576 decimal places <br>
Prints to console: 100 decimal places<br>
Prints to file: 1048576 decimal places<br>
File name: pi.txt<br>


<h3> Changing source code for calculation </h3>

Source: Main.cpp; lines: 14-15;
``` c++
long int prec = 10485760; 
int loops = 20;
```
The formula says it's accuracy increases by a power of 2 decimal places each iteration, therefore<br>
if we increase the number of interrations by 2 we would have to increase the acuracy by 2². <br>
exponential laws tell that when we multiply exponants we can just add the super-scripts e.g. <br>
2²⁰ * 2² = 2²². For the next value of prec take, the number of iterations needed, raise as a <br>
power of 2 and then multiply by 10. <i>The reason for multiplying by 10 is so there is decimal <br>
accuracy during the calculation so pi is accurate as as needed</i>.
Finally line 58 needs to be changed to print new accuracy. <i> Code will be added in the future... </i>

Line 58:

``` c++
 gmp_fprintf(fp, "%0.1048576Ff\n", pi.get_mpf_t());
 ```
 
 Change ` "%0.1048576Ff\n"  ` to ` "%0.(new accuracy)Ff\n"` 
 
 <h3>Example</h3>
 
 Changing default accuracy to 2³⁰. <br>
 
 <b>2³⁰ = 1073741824 </b> and<br>
<b>1073741824 * 10 = 10737418240 </b>
 
 So code becomes:
 
 ``` c++
 long int prec = 10737418240;
 int loops = 30;
 /* ...skipping to line 58 */
 gmp_fprintf(fp, "%0.1073741824Ff\n", pi.get_mpf_t());
 ```
 
 Any questions, email <a href="mailto:blearb.github@outlook.com">blearb.Github@outlook.com</a>
