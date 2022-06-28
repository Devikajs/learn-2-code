#include <stdio.h>
#include<math.h>


float VolFrust()
{
  float vol,h,r,R;
  scanf("%f%f%f",&R,&r,&h);
  vol= (3.1415926535898*h/3)*(pow(R,2)+R*r+pow(r,2));
  return vol;
}
int main() {
  float volume = VolFrust();
  printf("%.2f",volume);
  return 0;
}
