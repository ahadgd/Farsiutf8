
#include <Farsiutf8.h>
Farsiutf8 utf8;

void setup() {
  Serial.begin(9600);
  Serial.println();
  Serial.println(utf8.utf8ascii("بنام خدا"));
  Serial.println(utf8.utf8ascii("کتابخانه utf8 فارسی"));
  Serial.println(utf8.utf8ascii("این کتابخانه اولین ورژن بوده و وجود اشکال در آن محتمل می باشد"));
  Serial.println(utf8.utf8ascii("ا ب پ ت ث ج چ ح خ د ذ ر ز ژ س ش ص ض ط ظ ع غ ف ق ک گ ل م ن و ه ی"));
  Serial.println(utf8.utf8ascii("آبپتثجچحخدذرزژسشصضطظعغفقکگلمنوهی"));
}

void loop() {
  

}
