#include <stdio.h>

float areaOfCircle(float radius)
{
float area;
area = (radius*radius)*3.14;

return area;
}

int main()
{
for(float a = 3.5; a<=12.5; a++)
{
printf("the area is %f\n",areaOfCircle(a));
}
return 0;
}
