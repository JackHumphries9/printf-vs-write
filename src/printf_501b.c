#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char source[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec blandit maximus ante non tristique. Suspendisse potenti. Proin gravida urna enim. Mauris nec purus risus. Nullam non ante purus. Pellentesque tempus scelerisque ipsum, a dignissim sapien facilisis nec. Aliquam aliquet metus nibh, sed mattis nisl vehicula a. Sed eleifend nisi vitae magna eleifend tincidunt. Praesent viverra velit nunc, vitae cursus ipsum luctus in. Sed in mattis nisi, quis elementum nibh. Integer ullamcorper pharetra.";

    int len = strlen(source);
    for (int i = 0; i < len; i++) {
        printf("%c", source[i]);
    }
    
    printf("\n");
}
