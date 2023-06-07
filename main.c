#include <stdio.h>
#include <stdlib.h>


// Artur - https://github.com/Artyev/calculator/tree/master some changes
int main () {
  // variant #3
  int day2 = 1; // 1-31
  
  char buff[1000][1000] = {
    "Text 0",
    "Text 1",
    "Text 2",
    "Text 3",
    "Text 4"
  };
  printf("%s\n", buff[day2-1]);

  // variant #1
  // int day = 1;
  // if (day == 0) {
  //   printf("0");
  // } else if (day == 1) {
  //   printf("1");
  // }

  // // variant #2
  // switch(day) {
  //   case 0:
  //     printf("0");
  //     break;
  //   case 1:
  //     printf("1");
  //     break;
  // }
  


  return 0;
}