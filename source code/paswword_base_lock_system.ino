#include<reg51.h>

#include"delay.h"
#include"lcd.h"
#include"keypad.h"
/******************
motor PIN
******************/
sbit a1=P2^0;
sbit a2=P2^1;
sbit a3=P2^2;
sbit a4=P2^3;

void motor();

unsigned char ar[5];

unsigned char com[5]={"77777"};

unsigned int f,m=1,p;

/******************
main program
******************/
void main()
{
  unsigned int i;
    
  lcd_ini();
    
  while(1)
  {
    cmd(0x01);
    lcd_str(" ENTER YOUR");
    cmd(0xc0);
    lcd_str(" PASSWORD");

    for(i=0;i<5;i++)
    {
      keypad1();
      
      ar[i]=c;
      
      if(i==0)
      {
        cmd(0x01);
        lcd_display(' ');
      }
      lcd_display('*');
    }

      //compare();
    if(ar[0]==com[0] && ar[1]==com[1] && ar[2]==com[2] && ar[3]==com[3] && ar[4]==com[4])
    {
      m=1;
    }
    else
    {
      m=0;
    }
    if(m==1)
    {
      cmd(0x01);
      lcd_str(" PASSWORD MATCHED");
      cmd(0xc0);
      lcd_str(" ACCESS GRANTED");
      
      motor();
      p=0;
      delay_fv(1000,100);
    }
    else if(m==0)
    {
      p++;
      cmd(0x01);
      lcd_str(" WRONG PASSWORD");
      cmd(0xc0);
      lcd_str(" ACCESS DENIED");
      delay_fv(1000,100);
      delay_fv(1000,100);
      m=1;
      if(p==3)
      {
          cmd(0x01);
          lcd_str(" PLEASE CONTACT");
          cmd(0xc0);
          lcd_str(" YOUR HOD....");
          while(p==3);
      }
    }
  }
}



void motor()
{ 
  unsigned int i;
  
  for(i=0;i<10;i++)
  {
    a2=a3=a4=0;
    a1=1;
    delay_ff();
    a1=a3=a4=0;
    a2=1;
    delay_ff();
    a1=a2=a4=0;
    a3=1;
    delay_ff();
    a1=a2=a3=0;
    a4=1;
    delay_ff();
  }
  delay_fv(1000,100);
  for(i=0;i<10;i++)
  {
    a2=a3=a1=0;
    a4=1;
    delay_ff();
    a1=a2=a4=0;
    a3=1;
    delay_ff();
    a1=a3=a4=0;
    a2=1;
    delay_ff();
    a4=a2=a3=0;
    a1=1;
    delay_ff();
  }
}
