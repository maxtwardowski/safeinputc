# safeinputc
**'Safe' stdin input in C**
<ul>
  <li>fgets truncates the input to avoid overflows</li>
  <li>buffer cleaned only if strlen(string) == sizeof(string) so that no newlines need to be entered twice</li>
  <li>last element of the array reserved for the nul terminator</li>
  <li>changes newline created by fgets to nul</li>
</ul>
