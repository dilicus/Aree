#include "stdio.h"
#include "stdlib.h"

#include "AreaRett.cpp"
#include "AreaTri.cpp"

int main(){

  double area=0.;
  
  int forma;
  printf("Scegli forma\n");
  printf("[1:triangolo, 2:rettangolo, 3:trapezio, 4:cerchio]\n");
  scanf("%i",&forma);

  if(forma==1)area=AreaTri();
  if(forma==2)area=AreaRett();
  if(forma==3)area=AreaTrap();
  if(forma==4)area=AreaCirc();
  else area=0.;

  return area;
}
