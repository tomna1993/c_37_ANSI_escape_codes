# c_37_coloring_text_in_terminal

## DESCRIPTION

This program illustrates how a text foreground and background color can be changed from a c program.

[More infortmation and documentation](https://en.wikipedia.org/wiki/ANSI_escape_code#Unix_environment_variables_relating_to_color_support)

### CSI (Control Sequence Introducer) sequences

For Control Sequence Introducer, or CSI, commands, the ESC `[` (written as `\e[` or `\033[` in several programming and scripting languages) is followed by any number (including none) of "parameter bytes" in the range `0x30–0x3F` (ASCII `0–9:;<=>?`), then by any number of "intermediate bytes" in the range `0x20–0x2F` (ASCII space and `!"#$%&'()*+,-./`), then finally by a single "final byte" in the range `0x40–0x7E` (ASCII `@A–Z[\]^_`a–z{|}~`).

All common sequences just use the parameters as a series of semicolon-separated numbers such as `1;2;3`. Missing numbers are treated as `0` (`1;;3` acts like the middle number is `0`, and no parameters at all in `ESC[m` acts like a `0` reset code). Some sequences (such as CUU) treat `0` as `1` in order to make missing parameters useful.

Example:

```code
\e[38;2;255;255;255;1m

\e[ or \033[ - escape sequence
38 - set foreground color
2 - Faint, decreased intensity, or dim
255 - R
255 - G
255 - B
1 - Bold or increased intensity
m - Select Graphic Rendition (SGR)



\033[9m - crossed out, or strike text

\033[0m - reset graphics
```

## INSTALL LIBRARIES

The source code uses the cs50 library what you can download [HERE](https://github.com/cs50/libcs50).

To install the cs50 library follow the steps:

1. Open git bash terminal and change the current working directory to `src`:  
   > cd ./libsc50/src

2. Compile the cs50.c source into .o with:
   > gcc -c cs50.c -o cs50.o

3. Make the library archive:  
   > ar rcs libcs50.a cs50.o

4. Copy the `libcs50.a` file into your compiler's `lib` directory

5. Copy the `cs50.h` file into your compiler's `include` directory

## COMPILE AND RUN THE CODE

The code is written in C, the compiler used to generate the exe is: `gcc Rev10, Built by MSYS2 project 12.2.0`

Run the below code in terminal (git bash) to compile the source:

> gcc commandLineArgument.c -lcs50 -o ./build/commandLineArgument

To run the executable run the below code in terminal (git bash):

> ./build/commandLineArgument.exe
