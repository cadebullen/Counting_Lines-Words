Write a C++ program that reads lines from a file until the end of file. 
The program should prompt the user for the file name to read from. 
The program should open the file for reading, and if the file cannot be opened, it should print the message "File cannot be opened ", followed by the filename, and exit.

The program acts like a simple interpreter for a scripting/command language. 
The file includes commented lines that are recognized by either the character ‘#’, as the start character of the line; or by “//”, as the first two characters of the line. 
The program should skip over all commented lines. 
For the rest of the file, the program should keep track of the total number of lines read, the number of non-commented lines, the line of the maximum length, the number of words, and the word of maximum length.  

A word is defined as a sequence of one or more non-whitespace characters. 
Note that a line having only whitespace characters is referred to as a blank line. 
After reading the contents of the input file, the program should print out the total number of lines, 
the number of non-commented lines, the line of the maximum length delimited by double quotes, the number of words, and the word of maximum length delimited by double quotes, as shown in the following example.

 
