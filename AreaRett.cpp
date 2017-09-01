#include <stdio.h>

double main(){
  
  double base,altezza,area;
  
  printf("Inserire: base altezza\n");
  scanf("%lf %lf",&base,&altezza);
  
  area = base * altezza;
  
  printf("L'area del rett. di base");
  printf(" %lf e alt. %lf e' %lf\n",base,altezza,area);

  return area;
 
}
