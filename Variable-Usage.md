# Variable usage

<table>
<tr>
    <th>Variable Name</th>
    <th>Type</th>
    <th>Stores</th>
</tr>
<tr>
    <td text-align="center">tmp</td>
    <td text-align="center">string</td>
    <td text-align="center">"%0.UserAccuracyFf\n"</td>
</tr>
<tr>
    <td text-align="center">File_prec</td>
    <td text-align="center">const char *</td>
    <td text-align="center">"%0.UserAccuracyFf\n" converted</td>
</tr>
<tr>
    <td text-align="center">loops</td>
    <td text-align="center">int</td>
    <td text-align="center">log₂(User_prec) + 1</td>
</tr>
<tr>
    <td text-align="center">User_prec</td>
    <td text-align="center">long int</td>
    <td text-align="center">Desired Precision</td>
</tr>
<tr>
    <td text-align="center">p</td>
    <td text-align="center">long int</td>
    <td text-align="center">2ⁿ</td>
</tr>
 
<tr>    
    <td text-align="center">a</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">current value of a</td>
</tr>
<tr>
    <td text-align="center">b</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">current value of b</td>
</tr>
<tr>
    <td text-align="center">t</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">current value of t</td>
</tr>
<tr>
    <td text-align="center">a_next</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">next value of a according to arithmetic mean</td>
</tr>
<tr>
    <td text-align="center">b_next</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">next value of b according to geometric mean</td>
</tr>
<tr>
    <td text-align="center">t_next</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">next value of t according to t - p(a - a_next)</td>
</tr>
<tr>
    <td text-align="center">temp</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">temporary values to shorten equations</td>
</tr>
<tr>
    <td text-align="center">pi</td>
    <td text-align="center">gmp_class</td>
    <td text-align="center">final result of pi</td>
</tr>
</table>
