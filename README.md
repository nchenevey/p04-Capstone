# Input/Output
[main1.cpp lines 189-325](/main1.cpp#L189)
I ask for an input and create a list of options. The user can choose a number that corresponds to an option; after the user choses an option they will get an output.
## Control Flow
[main1.cpp lines 618-668](/main1.cpp#L618)
Using if statements, else if statements, and else statements I could make sure the highest hand will be read first. This way the user won't have to consider the highest hand possible, it will be chosen automatically.
### Iteration
[main1.cpp lines 248-304](/main1.cpp#L248)
I used for loops, do-while loops, and while loops to make sure that certain options will be repeated if incorrect inputs are entered. I also made sure that certain vectors will have their values read off correctly.
#### Data Structure
[main1.cpp lines 145-181](/main1.cpp#L145)
I created a matrix with lanes for the game. To allow the 'units' to move through the lanes I had to make sure they could move from the bottom to the top without causing segmentation faults. I succeeded by seperating the ways the matrix was read. 
##### Function
[main1.cpp lines 137-329](/main1.cpp#L137)
I made a function that uses pass-by-value and pass-by-reference. It even uses a pass-by-reference class value. Using these I could easily manipulate variables that needed to be altered in the main function as well, without returning them.
[profile.cpp lines 4-8](/profile.cpp#L4)
I used a void function to set the user's first and last name as variables that could be used in my class file.
###### File IO
[main1.cpp lines 295-308](/main1.cpp#L295)
I created a help file with some basic instructions and a description of the game I made. To open the file I used fstream and a help.txt file
####### Class
[profile.h lines 1-38](/profile.h#L1)
I made a profile class to keep track of a user's name and cash. To make sure the values stayed constant and easily usable I used the class file and in the main function I could use pass-by-reference to manipulate the user's 'profile'.

