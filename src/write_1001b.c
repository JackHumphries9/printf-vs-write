#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char source[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam a justo ac risus suscipit ornare. Pellentesque euismod, dui eget lacinia fringilla, ex augue sodales nibh, vel pretium sapien arcu sed libero. Pellentesque varius mauris vitae vehicula facilisis. Curabitur vitae dapibus libero. Aliquam eget tellus convallis, volutpat eros sed, blandit sapien. Aenean ut orci metus. Aenean fringilla elit vel tempus condimentum. In in ante ac libero vestibulum pellentesque. Sed lacinia lacus quis sem rutrum tincidunt. Nullam accumsan metus vel lectus tristique scelerisque. Quisque ut neque ac lectus finibus pretium. Maecenas ornare ipsum sit amet pharetra sollicitudin. Pellentesque feugiat nunc in fringilla scelerisque. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Fusce sed scelerisque nulla, ut sodales tellus. Phasellus in tortor dui. Etiam vitae lobortis odio. Curabitur a malesuada orci. Vestibulum sem leo, dignissim nec ullamcorper quis, scelerisque vitae veli. Curabitur justo.";

    int len = strlen(source);
    for (int i = 0; i < len; i++) {
        write(1, &source[i], 1);
    }
    
    printf("\n");
}
