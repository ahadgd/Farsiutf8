/////////////////////////////////////////////////////
/****************************************************
 * UTF8 to extended ASCII
This file has been edited by Ahad Gerami for the Persian language
This File decode Utf-8 and change to Windows-1256
این فایل کتابخانه برای دیکد کردن متن فارسی که بصورت utf8 می باشد نوشته شده است
با استفاده از این کتابخانه می توان بصورت مستقیم از متن فارسی در برنامه آردینو استفاده کرده و برای انواع ال سی دی ها و خروجی سریال استفاه کنید.
2017/1/20
1395/11/1
version 1.0
 * *************************************************/
 
#ifndef _FARSIUTF8_H
#define _FARSIUTF8_H

#if defined(ARDUINO) && ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#include "pins_arduino.h"
#endif

class Farsiutf8{
  public:
  char* utf8(char* s);
  private:
   char utf8ascii(char c1,char c2);
   char Getchar2(char c);
   char Getchar3(char c);
};
#endif
