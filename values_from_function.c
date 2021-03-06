#include<stdio.h>
#include<math.h>

void main()
{
 float lowerLimit;
 float upperLimit;
 int valueCount;

 printf("Šī programma aprēķina cosh(x/2) vērtības un saglabā tās failā data.txt\n");
 printf("Lūdzu ievadiet x minimālo vērtību: ");
 scanf(" %f99", &lowerLimit);
 printf("Lūdzu ievadiet x maksimālo vērtību: ");
 scanf(" %f99", &upperLimit);
 printf("Lūdzu ievadiet cik vērtības aprēķināt:  ");
 scanf(" %d99", &valueCount);
 
  FILE * dataFile;

 dataFile = fopen("data.txt", "w");

 fprintf(dataFile,"# cosh vērtības\n");
 fprintf(dataFile,"# X         # Y\n");

 float stepSize = (upperLimit - lowerLimit)/((float)valueCount-1);

 for(int z = 0; z<valueCount; z++)
 {
   float x = lowerLimit + (stepSize*(float)z);
   float y = cosh(x/2);
  fprintf(dataFile,"%.3f         %.3f\n", x, y);
 }

 fclose(dataFile);
}
