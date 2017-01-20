#include "Farsiutf8.h"
#if defined(ARDUINO) && ARDUINO >= 100
  #include "Arduino.h"
#else
  #include "WProgram.h"
#endif


char Farsiutf8::utf8ascii(char c1,char c2)
{       
        byte r;
        char c;
        Serial.print((int)c1,HEX);
        Serial.println((int)c2);
         if(c1==217 ||c1==216||c1==219)r=Getchar2(c2);
        else if(c1==218)r=Getchar3(c2);
        return r;
}

char Farsiutf8::Getchar2(char c){
  //return 0xdd+(c-129);
  switch (c){
  case 129:
  return 0xdd;//ف
  break;
  case 130:
  return 0xde;
  break;
  case 132:
  return 0xe1;
  break;
  case 133:
  return 0xe3;
  break;
  case 134:
  return 0xe4;
  break;
  case 135:
  return 0xe5;
  break;
  case 136:
  return 0xe6;
  break;
  case 140:// ی
  return 0xec;
  break;
  case 152:
  return 0xe6;
  break;
  case 161://ء
  return 0xc1;
  break;
  case 162://آ
  return 0xc2;
  break;
  case 166://ئ
  return 0xc1;
  break;
  case 167:
  return 0xc7;
  break;
  case 168:
  return 0xc8;//ب
  break;
  case 170:
  return 0xca;//ت
  break;
  case 171:
  return 0xcb;
  break; 
  case 172:
  return 0xcc;
  break;
  case 173:
  return 0xcd;
  break;
  case 174:
  return 0xce;
  break;
  case 175:
  return 0xcf;//د
  break;
  case 176:
  return 0xd0;//ذ
  break;
  case 177:
  return 0xd1;
  break;
  case 178:
  return 0xd2;//ز
  break;
  case 179:
  return 0xd3;
  break;
  case 180:
  return 0xd4;
  break;
  case 181:
  return 0xd5;
  break;
 case 182:
  return 0xd6;
  break;
 case 183:
  return 0xd8;//ط
  break;
  case 184:
  return 0xd9;//ظ
  break;
 case 185:
  return 0xda;
  break;
 case 186:
  return 0xdb;//غ
  break;
 case 190:
  return 0x81;//پ
  break;
 
 
  }
  
}
char Farsiutf8::Getchar3(char c){
  switch (c){
  case 134:
  return 0x8d;
  break;
  case 169:
  return 0xdf;
  break;
 case 175:
  return 0x90;
  break; 
  case 152:
  return 0x8e;//ژ
  break; 
  }
  
}
// In Place conversion UTF8-string to Extended ASCII (ASCII is shorter!)
char* Farsiutf8::utf8(char* s)
{       
        int k=0;
        char c;
        char c2;
        for (int i=0; i<strlen(s); i=i+2)
        {
               if(s[i]>=216 && s[i]<=219){
                c = utf8ascii(s[i],s[i+1]);
               }else{
                //Serial.println((int)s[i],HEX);
               c=s[i];
               i=i-1;
               }
                if (c!=0) 
                        s[k++]=c;
        }
        s[k]=0;
        return s;
}
