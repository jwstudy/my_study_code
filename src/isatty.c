#include <unistd.h>
#include <stdio.h>

//ttyname 如果参数表示的为一终端机，返回终端机的名称。否则返回空
//isatty  如果参数表示的为一终羰机，返回1，否则返回0
int main() {
  int ret = isatty(stdout);
  printf("ret = %d \n", ret);
  
  char * name = ttyname(stdout);
  if (name == NULL) {
    printf("get ttyname failed \n");
    return 0;
  }
  printf("name is %s \n",name);

}
