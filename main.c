#include &lt;stdio.h&gt;
int main() {
int a;
int b;
printf("\ nEntry First Number:");
scanf("% d", &a);
do {
printf("\ nEnter the Second Number:");
scanf("% d", &b);
} while (b == 0);
printf("\ n% d +% d =% d", a, b, a + b);
printf("\ n% d -% d =% d", a, b, a - b);
printf("\ n% d /% d =% f \ n", a, b, (float) a / b);
return(0);
