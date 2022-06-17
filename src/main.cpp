#include <stdio.h>
#include <tcl/tcl.h>

#define BUFF_SIZE 1024

int main()
{
  char buff[BUFF_SIZE];
  Tcl_Interp *ip = Tcl_CreateInterp();

  printf("> ");
  while (fgets(buff, BUFF_SIZE, stdin) != NULL) {
    if (Tcl_Eval(ip, buff) != TCL_OK) {
      fprintf(stderr, "%s\n", Tcl_GetStringResult(ip));
    } else {
      printf("%s\n", Tcl_GetStringResult(ip));
    }
    printf("> ");
  }

  Tcl_DeleteInterp(ip);
  return 0;
}