#include<iostream>
#include<cstring>
using namespace std;
int main()
{	
  int binarycount = 0;
  char binaryString[10];
  
strcpy(binaryString, "111100101");
for(int i = 0; binaryString[i]!='\0'; i++)
{
if(binaryString[i]=='1'){
binarycount++;
}
}
cout<<"Given binary string: 1010010010\n"<<endl;
cout<<"The count of 1's on a binary string is: "<<binarycount;
return 0;
}
