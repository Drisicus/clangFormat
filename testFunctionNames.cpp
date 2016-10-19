#include <iostream>


void long_Name_Function_That_Exceeds_The_Column_Limit(unsigned int a, int b, unsigned int c, unsigned int d, unsigned int e)
{
    return;
}


int long_Name_Function_That_Exceeds_The_Column_Limit( unsigned int a, int abcdef, unsigned int c, unsigned int d, unsigned int e){ return 0;}

int long_Name_Function_That_Exceeds_The_Column_Limit( unsigned int a, int abcde, unsigned int c, unsigned int d, unsigned int e){ return 0;}



int main(){

long_Name_Function_That_Exceeds_The_Column_Limit( 1234, 5678, 9101112, 13141516, 17181920);

long_Name_Function_That_Exceeds_The_Column_Limit( 1234, 5678, 9101112, 13141516, 17181920, 21222324);

long_Name_Function_That_Exceeds_The_Column_Limit( 1234, 5678, 9101112, 13141516, 17181920, 21222324, 25262728, 29303132, 333);

return 0;
}

/*

1234, 5678, 9101112, 13141516, 17181920 (40)
1234, 5678, 9101112, 13141516, 17181920, 21222324 (50)
1234, 5678, 9101112, 13141516, 17181920, 21222324, 25262728, 29303132, 333 (75)

unsigned int a, int b, unsigned int c, unsigned int d, unsigned int e
unsigned int a, unsigned int b, unsigned int c, unsigned int d, int ee
unsigned int a, int bbbbbb, unsigned int c, unsigned int d, unsigned int e

void long_Name_Function_That_Exceeds_The_Column_Limit(unsigned int a, int b, unsigned int c, unsigned int d, unsigned int e) (125)

int long_Name_Function_That_Exceeds_The_Column_Limit( unsigned int a, int bbbbbb, unsigned int c, unsigned int d, unsigned int e) (130)

unsigned int a, int abcdef, unsigned int c, unsigned int d, unsigned int e
unsigned int a, int abcde, unsigned int c, unsigned int d, unsigned int e

*/
