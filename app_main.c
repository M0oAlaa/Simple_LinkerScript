#include "app_main.h"

//#pragma CODE_SECTION(C_arr, "sprinters");
//#pragma DATA_SECTION(C_arr, "sprinters");

const int C_arr[5]={1,2,3,4,5};
const int C_arr[5] __attribute__((section(".sprinters")));

char u8InitGLobalVar = 2;
static long int u32NonInitStaticGlobalVar; 
const short int u16ConstGlobalVar = 3;

void main(void)
{
	short int u16LocVar = 4;
	static char u8InitStaticLocVar = 5;
	if(u16ConstGlobalVar == 3)
	{
		u32NonInitStaticGlobalVar = 6;
		vidFunc(&u16LocVar);
	}
	else
	{
		u32NonInitStaticGlobalVar = 7;
	}
	while(1)
	{
	
	}
}
