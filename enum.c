#include <stdio.h>

enum lcdType
{
  old = '0',
  new = '1'
};
enum lcdType LcdType = new;  
  

int main()
{
  LcdType = old;
  if(LcdType == '0')
   printf("%s","hello");
  return 0;
}
