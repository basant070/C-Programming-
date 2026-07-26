Topic 0: Introduction to C-programming 
- C-programming language is a general purpose structured programming language. It contains additional features that allows it to be used at lower level this bridging the gap between machine language and the more conventional high level language. This property of C allows C to be used for system programming like OS development . 
 
Topic 1: Data types and operators in C
  1.Fundamental dataypes
     -integer
     -float
     -character
     -void
  2.Derived datatypes
     -Typedef(type definition)

            #include <stdio.h>
            int main() {
                typedef int integer;
                integer p=5;
             printf("now int and integer both are same : %d",p) 
            return 0;
            }

     -enum (enumerated datatype used to create symbolic constant)
  3.User defined datatypes
      - array
      - structure
      - union
      - pointer
  1.1 : Operators 
    . Relational Operator           : ==  >  <  >=  <= !=
    . Arithmetic operator           : +  -  *  / %
    . Logical Operator              : &&  ||  !
    . Assignment Operator           : = +=  -=  *=  /= %=
       eg: a+=b : a=a+b;
    . Increment/Decrement operator :  ++  --
    . Conditional Operator         :   ?:
    . Bitwise Operator             :  &  |  ^  ~  <<  >>
    . Special Operator             
           -array operator         : &  *
           -member access operator : .  ->
           - cast operator         : (type)
           -sizeof  operator       : sizeof
           -comma operator         : ,