#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char source[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed dapibus lorem vitae consectetur porta. Nulla sollicitudin enim id quam commodo, a aliquam ipsum facilisis. Vestibulum venenatis tincidunt erat ut rhoncus. Quisque tincidunt vitae lectus eu dignissim. Duis mattis turpis non lorem condimentum vestibulum. Donec sagittis, ipsum quis lobortis auctor, dui metus blandit dolor, in venenatis risus ante nec nibh. Curabitur auctor luctus egestas. Aenean a tempus sem, at vulputate sapien. Donec blandit diam est, eget vehicula velit auctor at. Praesent scelerisque purus a lorem egestas, at tempus enim rhoncus. Duis sodales nibh ut odio eleifend tempor. Suspendisse luctus elit vitae nulla hendrerit fermentum. Vivamus convallis faucibus justo ac rutrum. Vivamus sollicitudin nulla id ante suscipit ornare. Morbi quis porttitor ante. Sed vitae odio a nisl volutpat tempus id a eros. Fusce ornare venenatis ornare. Donec ut tempus leo. Sed sit amet augue ante. Donec lacinia gravida dolor id interdum. Donec sollicitudin, quam et mollis gravida, ipsum lectus euismod nibh, sed tempus mi turpis vel dui. Vestibulum pellentesque semper mi, bibendum ultricies odio. Vivamus dictum convallis justo, et malesuada orci lobortis id. Etiam eu luctus elit. Aenean porttitor ultrices lobortis. Pellentesque blandit, libero et commodo rutrum, leo felis vestibulum nisl, nec gravida mauris enim id quam. Praesent varius odio a purus commodo lacinia. Donec maximus sit amet risus sit amet sodales. Pellentesque porta nunc non euismod tincidunt. Vestibulum tellus purus, eleifend nec nulla vitae, euismod ornare metus. Fusce in odio est. Donec accumsan, mauris ut feugiat hendrerit, nibh nisi fringilla odio, fringilla viverra est enim non mi. Nullam efficitur dui leo, ut tempor neque facilisis sit amet. Pellentesque sodales dui sit amet nisl condimentum, cursus rhoncus arcu egestas. Donec tincidunt sit amet augue ullamcorper porta. Suspendisse potenti. Cras bibendum, tellus elementum blandit posuere, quam augue congue odio, non lobortis tortor orci non nisi. Pellentesque habitant morbi tristique senectus et netus et malesuada fames ac turpis egestas. Donec eget lacus in est vehicula aliquam consectetur sagittis eros. Curabitur mattis posuere mi, at dictum orci eleifend vel. Vestibulum fermentum velit faucibus ex vestibulum, in rhoncus neque fermentum. Mauris vitae magna non libero tincidunt ultricies. Suspendisse erat lacus, malesuada sit amet arcu nec, venenatis volutpat elit. Morbi nec orci tellus. Maecenas pulvinar lacus ex, sit amet molestie augue efficitur eu. Nunc ut leo neque. Sed non pretium sem, vitae venenatis lacus. Nunc sodales, metus eu aliquet pulvinar, est metus egestas eros, ut lobortis diam urna eget lectus. Vestibulum vitae libero venenatis, varius mi vel, eleifend diam. Nam viverra semper urna vitae convallis. Maecenas tempor tempor sapien quis pulvinar. Donec scelerisque ligula lectus, placerat malesuada quam gravida a. Integer faucibus quis libero tempor tincidunt. Phasellus id lectus commodo, finibus diam ac, tempor sapien. Integer non dignissim ex. Duis fermentum nulla at facilisis porta. Nam nec semper ipsum. Curabitur eu tortor nec mauris cursus imperdiet in vel justo. Quisque et leo et neque dignissim vestibulum sed non ligula. Aenean tellus sapien, ultricies id sapien et, elementum viverra nisi. Vestibulum a pulvinar dolor, consectetur dignissim urna. Morbi quis diam massa. Phasellus feugiat ut mi in vestibulum. Donec volutpat bibendum quam, vel viverra dui bibendum eget. Phasellus at tincidunt turpis, eu congue mi. Donec viverra nibh ac ligula fringilla, eget imperdiet libero lobortis. Pellentesque id metus vitae erat lobortis pulvinar vel sit amet justo. Praesent porttitor vestibulum elit vitae tempor. Donec pharetra non ligula et interdum. Proin et lorem molestie, egestas ipsum ac, tincidunt felis. In eu quam justo. Sed malesuada laoreet quam, nec blandit ipsum gravida ornare. Nunc eleifend nibh a lectus dictum, quis luctus enim blandit. Phasellus lacinia ante dictum, lacinia turpis quis, rutrum sapien. Praesent faucibus molestie tellus id lobortis. Aliquam erat volutpat. Aliquam tristique quis odio ac interdum. Aenean quis arcu ut tortor iaculis laoreet. Nulla facilisi. Mauris nec tortor metus. In pharetra a turpis dapibus semper. Aenean vestibulum ut orci quis ullamcorper. Integer et velit et felis bibendum sollicitudin. Fusce sed sem ornare, suscipit ante sit amet, suscipit nisl. Curabitur tristique erat lorem, vel tincidunt ex pellentesque eget. Donec ante mi, porta ultrices lectus nec, lobortis malesuada sapien. Quisque non leo ornare, cursus mauris in, sodales nisl. Phasellus cursus ullamcorper ante eget vulputate. Vivamus condimentum tempor venenatis. Nulla at maximus justo. Curabitur bibendum aliquam ante, id sodales turpis. Nam quis pretium dui. Sed ornare fermentum leo, ut ultricies massa euismod id. Fusce euismod ligula eget ante lobortis pretium. Sed ultricies massa sed metus pharetra maximus. In ac ornare urna. Proin id vestibulum mi. Integer vel orci dui. Etiam vel lectus justo. Vestibulum blandit dapibus dolor in cursus. Vivamus luctus, nibh sed ornare eleifend, orci sapien tempor diam, quis finibus leo leo non leo. Curabitur a fringilla nisl. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Integer quis nulla pretium, aliquet turpis ac, posuere lorem. Etiam ullamcorper nec quam a vestibulum. Sed cursus sagittis ornare. Phasellus nunc mauris, tempus sit amet nibh non, consequat placerat lorem. Vestibulum ante ipsum primis in faucibus orci luctus et ultrices posuere cubilia curae; Maecenas pellentesque euismod hendrerit. Donec at aliquet ex, quis sollicitudin dolor. Sed vitae gravida mauris. Aenean tempus id eros ut imperdiet. Proin auctor maximus imperdiet. Mauris et lectus arcu. Interdum et malesuada fames ac ante ipsum primis in faucibus. Etiam sed molestie libero. Fusce suscipit nulla rhoncus, maximus odio sit amet, tempor odio. Fusce id nibh et ante tempus iaculis. Nunc vitae leo nunc. Cras eget orci iaculis, accumsan elit at, porta lorem. Donec ornare volutpat lacus, a consectetur diam luctus vel. In nec turpis non arcu bibendum sollicitudin nec eu quam. Vestibulum eget felis vitae mi tincidunt hendrerit. Cras at tristique nibh. Praesent quis vehicula arcu. Mauris varius ac eros at maximus. In hac habitasse platea dictumst. Pellentesque et ligula ut nisl bibendum tincidunt quis quis erat. Nunc at aliquam nunc. Nulla convallis scelerisque erat nec consectetur. Nam tincidunt dui ligula, vitae aliquam dolor feugiat vel. Aliquam aliquet diam erat, sit amet egestas metus aliquam ac. Etiam a lorem non odio aliquam semper. Ut ullamcorper felis vitae molestie volutpat. Praesent ac lacinia arcu. Pellentesque dapibus metus ac pharetra lacinia. Phasellus iaculis eu tortor et aliquam. Suspendisse et aliquet elit, pharetra dictum est. Duis quis tortor pharetra, pellentesque justo quis, finibus sem. Cras efficitur quam eget nibh varius consectetur. Proin ac odio id erat efficitur posuere sed eu eros. Aliquam cursus vehicula eros nec imperdiet. Cras faucibus consectetur justo, vitae interdum tellus mattis ac. Morbi accumsan sapien elit, at elementum mauris pretium a. Aenean tellus felis, aliquam sed molestie vitae, ullamcorper scelerisque sem. Nullam in porttitor lacus. Fusce et rhoncus augue, a mattis mauris. Integer malesuada posuere nulla, id efficitur metus. Quisque in gravida enim. Donec non ipsum ac nibh mattis tempus. Vestibulum lobortis, dui vel ornare posuere, diam diam tincidunt leo, maximus consectetur ligula arcu eu purus. Sed vitae maximus ante. Donec lobortis pellentesque sem, a hendrerit velit. Donec feugiat pellentesque venenatis. Nunc velit elit, imperdiet in odio euismod, tempor dignissim diam. Nullam euismod nec sem tempus mattis. Nulla tempor interdum sem, ut rhoncus tortor ornare consectetur. Sed turpis justo, hendrerit a consectetur vitae, gravida vel velit. Curabitur viverra, nulla eu rutrum lobortis, elit massa cursus justo, vitae pulvinar ex sem bibendum tortor. Etiam scelerisque orci orci, ut aliquet nisl suscipit eget. Etiam egestas massa in congue volutpat. Integer pellentesque turpis quis arcu aliquet sollicitudin. Curabitur pharetra lectus non convallis accumsan. Pellentesque lorem turpis, ornare ut commodo in, tristique id lorem. Pellentesque aliquam gravida vulputate. Praesent posuere vestibulum tincidunt. Nunc vel euismod purus. Nunc tempus efficitur dolor. Etiam quis est a lacus condimentum faucibus. Nulla hendrerit nulla ultricies, lobortis sem sit amet, vestibulum eros. Ut laoreet dui elit, vitae porttitor tortor dictum eget. Ut egestas, nulla ac facilisis feugiat, lacus justo congue erat, et blandit sem sapien eu erat. Vivamus ipsum lacus, malesuada at eros sodales, congue rutrum justo. Etiam vel ex in nisl lobortis congue vitae quis justo. Aliquam erat volutpat. Aenean non ipsum eu nisi interdum dignissim sit amet quis enim. Vivamus facilisis at libero non pellentesque. Aliquam non tincidunt elit, at convallis lacus. Cras sed luctus nisi. Donec lacus leo, aliquet vitae metus ut, rhoncus fringilla felis. Suspendisse euismod tellus eu volutpat ultrices. Suspendisse porta lacus tellus. Ut sit amet neque id tortor rutrum malesuada a a dolor. Cras pellentesque ligula eget leo eleifend faucibus. Pellentesque ipsum odio, blandit et imperdiet quis, pellentesque id nibh. Vivamus ornare tellus eu imperdiet tempor. Nam congue lectus at eros maximus ornare. Phasellus dolor mi, consequat vel placerat sit amet, accumsan mollis dui. Maecenas sagittis vulputate semper. Nullam vel porta massa. Aenean vitae ante metus. Cras mollis hendrerit enim, non ultrices magna ornare id. Donec commodo libero vel bibendum malesuada. Mauris quis dui eget justo vestibulum blandit. Integer vel rutrum tellus. Phasellus porttitor accumsan ultricies. Cras ultrices malesuada est, eu porta justo dignissim id. Integer eget odio in dui euismod faucibus. Nullam eu justo et sapien finibus pharetra.";

    int len = strlen(source);
    for (int i = 0; i < len; i++) {
        write(1, &source[i], 1);
    }
    
    printf("\n");
}
