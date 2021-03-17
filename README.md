# _PRINTF
![alt text](https://camo.githubusercontent.com/1d843f82247b60996b235f8a7f7cd2057824c71d35375103ad00679837c848db/68747470733a2f2f7777772e686f6c626572746f6e7363686f6f6c2e636f6d2f686f6c626572746f6e2d6c6f676f2e706e67 "Holberton")


## _printf()
#####The function prints the standard output dependet of the format received.
int _printf(const char *format, ...)

## How to use _printf
  * You must be in an ubuntu / linux environment
  * You must clone the repository
 >git clone https://github.com/SebastianMH14/printf.git
* Now you can call the function using _printf ("")
    - Use %s to print string
    - Use %c to print character
    - Use %d or %i to print integer

###  Man Page 
  * To see the man page use :
 > man ./man_3_printf 

 ### Example of use
  >#include <stdio.h>
int main()
{
    printf ("Hello World! \ n");
    return (0);
}
## Output
    Hello World!

 #### Authors
 Juan Felipe Prado Cruz @Jfprado11
 Sebastian Molina Henao @SebastianMH14