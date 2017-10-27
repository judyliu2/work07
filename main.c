#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>

int get_random(int rand_fd){
  int *buffer = (int *)malloc(sizeof(int) * 1);
    read(rand_fd, buffer, sizeof(int));
    return buffer[0];
}

int main() {
  int rand_nums[10];
  int rand_fd = open("/dev/random", O_RDWR, 0644);

  printf("%d\n", get_random(rand_fd));


  /*
  int i;
  for(i=0; i<10; i++){
    printf("random %d: %d\n", i, rand_nums[i]);
  }
  */
}
