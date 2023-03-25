/*marathon in kilometers*/

#include <stdio.h>

int main(void)
{
  int miles = 26, yards = 385;
  double kilometers;

  kilometers = 1.609 * (miles + yards / 1760.0);
  printf("\nA marathon is %lf kilometrs.\n\n", kilometers);
  return 0;
}

int main(void)/*initialize function*/
{
  int miles = 26, yards = 385; /*this is called a declaration with an initalization*/
  /* the declaration has 2 interger type*/
  /* miles and yards are identifiers*/
  double kilometers; /*this is the result*/
  /*the identifier kilometers will result in a double type*/

  /*the equation for kilometers*/
  kilometers = 1.609 * (miles + yards / 1760.0);
  /*print statement*/
  printf("\nA marathon is %lf kilometers.\n\n", kilometers);
  /*"qoutation for a controlling format expression" */
  /* \n: print a new line*/
  /*%lf: use a long float or double format*/
  /*after the string statement, kilometers is interperted into the %lf(long float/double format)*/
  return 0;/*execute the program*/
}