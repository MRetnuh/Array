#include<stdio.h>
#include<stdlib.h>

int parse_int(char *s) {
int result = 0;
int i = 0;
int sign = 1;
if(s[0] == '-'){
sign = -1;
i++;
}
while(s[i] != 0){
  result = (result*10) + s[i]-'0';
i++;
}
result *= sign;
return result;
}

int main(int argc, char *argv[]){
int a = parse_int("-12");
int b = parse_int("0007");
int c = parse_int("997");
int d = parse_int("cero");
printf("a: %d\n", a);
printf("b: %d\n", b);
printf("c: %d\n", c);
printf("d: %d\n", d);
}
