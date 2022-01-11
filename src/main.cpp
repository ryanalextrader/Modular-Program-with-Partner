#include <mbed.h>
#include "HostIO.h"
#include "SegDisplay.h"

int main() {

  // put your setup code here, to run once:
  char data1, data2;
  SegInit();
  HostInit();
  while(1) {
    // put your main code here, to run repeatedly:
    data2 = GetKeyInput();
    Seg2 = SegConvert(data2);
    data1 = GetKeyInput();
    Seg1 = SegConvert(data1);
    printf(" ");
  }
}