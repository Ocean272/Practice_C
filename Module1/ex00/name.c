#include <stdio.h>


// // 1) Pointer version
// //    => Points to "Read Only" memory
// //    => Crashes if try to change a letter
// //    => Only stores the address (8 bytes)
// //
// int main()
// {
//     char *first_name = "Arthur";
//     char *last_name = "Dent";

//     printf("%s %s\n", first_name, last_name);
//     return 0;
// }
// // =======================================================

// 2)  Array version (best to use cos it's mutable)
//     => Stores data in "Writable" memory
//     => Mutable (can change letters)
//     => Stores the entire string in that spot
//     Can also explicitly state how much memory to set aside just by adding
//     number in the []. 
//
int main()
{
    char first_name[] = "Authur";
    char last_name[] = "Dent";

    printf("%s %s\n", first_name, last_name);
    return 0;
}