# Final Question 1

_Always open your README.md in preview mode in vscode!!!_

## Program  
When complete, your project should include the following files:  
- threeDShape.cpp
- threeDShape.h
- pyramid.cpp
- pyramid.h
- main.cpp
- makefile 
- README.md  




Your executable should be named ```pyramid```   

## Programming Problem
For this part of your final, you have been given main.cpp, threeDShape.cpp, and threeDShape.h, as well as the makefile that will compile the given files into a final executable. 

Write a program that extends threeDShape into a class named pyramid. Pyramids have a length, width, and height, and the volume of a pyramid is calculated using the formula `(l*w*h)/3`. You should assume that other people will want to reuse the 3DShape class, even though you're only responsible for pyramid. To complete this part, do the following:
1) modify threeDShape so that it can be inherited from
2) construct the pyramid class; note that 3DShape already has values for sides, numSides, and the volume, so take that into account when you decide what (if any) properties you want to add to pyramid to extend 3D Shape. It is perfectly accepable to have empty child constructors if the parent sets all properties and the child only differentiates with a virtual function.
3) address the comments in main.cpp
4) update the makefile

Doing steps 1-4 accurately will result in a C (70%) on this question. To earn additional credit, do the following:
5) dynamically allocate all objects and arrays (additional 20%)
6) modify the program so that an abstract base class is used correctly (additional 10%); don't forget to clean up the parent class, if applicable, by removing any function implementations that aren't generalizable to all children and making the function purely virtual. Don't forget to update main.cpp to reflect the changes you made


## Submission details
To submit your project,zip all of your code into a folder named /<netid/>_pyramid_answer.zip

`sarad_pyramid_answer.zip` for example

BE CAREFUL- if you are on windows and using WSL, zipping in windows instead of WSL may result in your makefile being renamed which will result in loss of credit.  

## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
