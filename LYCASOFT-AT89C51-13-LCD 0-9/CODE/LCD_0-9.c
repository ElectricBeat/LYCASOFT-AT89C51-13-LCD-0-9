#include<reg51.h>
#include "8051_delay.h"
#include "LCD_4_BIT_HEADER_FILE.h"

int Count;
void main()
{
	P1=0X00;

	Lcd_Intialization();

	while(1)
	{
		Lcd_Command(0x80);
		Lcd_String("LYCO SOFT");
		
		Lcd_Command(0xc0);
		Lcd_Data(Count+48);
		delay(500);
		
		Count++;
		if(Count > 9)
			Count = 0;
	}
}