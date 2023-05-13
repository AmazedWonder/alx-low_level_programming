0x09. C - Static libraries

cp -p file1.txt file2.txt
To copy files or directories while preserving their attributes, such as ownership, permissions, and timestamps
The -p option stands for "preserve"

cp -rp directory1 directory2
use the -r option to copy directories recursively while preserving their attributes

gcc -c *.c
This will compile all the .c files in the directory and create object files (.o files) for each of them

ar rc liball.a *.o
This will create a static library named liball.a from all the object files in the directory. The r flag is used to replace any existing library with the same name, c flag is used to create the library if it doesn't already exist

ranlib libmy.a
To create an index (also known as a table of contents) for a static library. The index contains information about the symbols (functions, variables, etc.) defined in the library, which can improve linking times by allowing the linker to quickly locate the symbols it needs

ar rcs liball.a *.o
This will create a static library named liballl.a from all the object files in the directory. The r flag is used to replace any existing library with the same name, c flag is used to create the library if it doesn't already exist, and s flag is used to create an index of the symbols in the library, which can improve linking times


