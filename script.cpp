#include <iostream>
using namespace std;

void _strcpy( char *dest, const char *src);
void _strcpy2 ( char *dest, const char *src);
int _strlen (const char* str);
int _strcmp( const char* str1, const char* str2);
char* _strstr(char *str1, char *str2);
void _strcat(char* str1, const char* str2);
void _strncpy(char* dest, const char* src, int n);

int main() {

    const char* mysource = "demon king";
    char mydestination[100];
    _strcpy(mydestination, mysource);
    cout << "_strcpy " << mydestination << endl;

    _strcpy2(mydestination, mysource);
    cout << "_strcpy2 " << mydestination << endl;

    int l = _strlen(mydestination);
    cout << "_strlen " << l << endl;

    const char *s1 = "tricksters";
    const char *s2 = "trickster";

    cout << "S1 & S2 compare as follows : " <<_strcmp(s1,s2)<<endl;

    char *s3 = "Hello ";
    char *s4 = "World!";
    _strcat(s3, s4);
    return 0;
}

// example of string copy operation
void  _strcpy(char *destination, const char *source) {

    int i=0;
    while(source[i]) {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
}

//more elegant implementation of string copy
void _strcpy2(char *destination, const char *source) {

   //check if source is not null and destination is not null
   while(*destination++ = *source++);
}

//example implementation of string length.
int _strlen(const char* str) {

    int len=0;
    while(*str++) len++;

    return len;
}
//example implementation of string compare
int _strcmp(const char* s1, const char* s2) {

 while(*s1 && (*s1 == *s2))
 {
     s1++;
     s2++;
 }
 return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

//Fill in this method so that calling _stracat can append s2 contents to s1
void _strcat(char* s1, const char* s2) {
  cout << *s1 << endl;
  cout << *s2 << endl;
  while(false){

  }
}
//check if string s2 is inside or embedded within string s1
char* _strstr(char *s1, char *s2) {
  while(false){

  }
  return s1;
}
// _strcpy for specified number of characters n.
void _strncpy(char *s1, char* s2, int n) {

}
// _strcmp for specified number of characters n.
int _strncmp(const char* s1, const char*s2) {
  while(false){

  }
  return 0;
}
// _strcat for specified number of characters n.
void _strncat(char* s1, const char *s2, int n) {
  while(false){

  }
}