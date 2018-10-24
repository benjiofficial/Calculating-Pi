# Variable usage

<table>
<tr>
    <th>Variable Name</th>
    <th>Type</th>
    <th>Stores</th>
</tr>
<tr>
    <td>loops</td>
    <td>int</td>
    <td>log₂(accuracy of pi)</td>
</tr>
<tr>
    <td> prec</td>
    <td>long int</td>
    <td>gmp_precision</td>
</tr>
<tr>
    <td>p</td>
    <td>long int</td>
    <td>2ⁿ</td>
</tr>
 
<tr>
    <td>a</td>
    <td>gmp_class</td>
    <td>current value of a</td>
</tr>
<tr>
    <td>b</td>
    <td>gmp_class</td>
    <td>current value of b</td>
</tr>
<tr>
    <td>t</td>
    <td>gmp_class</td>
    <td>current value of t</td>
</tr>
<tr>
    <td>a_next</td>
    <td>gmp_class</td>
    <td>next value of a according to arithmetic mean</td>
</tr>
<tr>
    <td>b_next</td>
    <td>gmp_class</td>
    <td>next value of b according to geometric mean</td>
</tr>
<tr>
    <td>t_next</td>
    <td>gmp_class</td>
    <td>next value of t according to t - p(a - a_next)</td>
</tr>
<tr>
    <td>temp</td>
    <td>gmp_class</td>
    <td>temporary values to shorten equations</td>
</tr>
<tr>
    <td>pi</td>
    <td>gmp_class</td>
    <td>final result of pi</td>
</tr>
</table>