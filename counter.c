#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  long l;
  double factor = (double)1001 / (double)960;
  long sample, previous = -1, last = 0;
  for(l = 0; l < 960960; l++)
  {
    sample = (long)floor(((double)l + 0.5) * factor);
    if((sample - previous) != 1)
    {
      printf("%lu\n", sample - last);
      last = sample;
    }
    previous = sample;
  }
  return 0;
}
