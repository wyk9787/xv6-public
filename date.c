#include "types.h"
#include "user.h"
#include "date.h"

int 
main(int argc, char *argv[])
{
  struct rtcdate r;
  
  if(date(&r)) {
    printf(2, "date failed\n");
    exit();
  }

  printf(1, "Right now it is UTC time year %d month %d day %d hour %d minute %d second %d\n", r.year, r.month, r.day, r.hour, r.minute, r.second);

  exit();
}
