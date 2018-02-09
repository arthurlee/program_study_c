
/*
Example (WRONG) :
*/

#include <stdio.h>
int main () {
    printf("%s"，OK);
    return 0;    
}

/*
Wrong massage:
    1.1_1.c:14:16: error: expected ')'
    printf("%s"，OK);
               ^
*/

//Expected vision:
#include <stdio.h>
int main () {
    printf("%s", "OK");
    return 0;    
} 