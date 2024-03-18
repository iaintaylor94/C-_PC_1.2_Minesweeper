# Programming Challenges C++
## Problem 1.2 Minesweeper[^1]
### Problem description
This program determines the number of "mines" adjacent to each square for the game "Minesweeper". The input to the program is a single line containing the dimensions of the grid (0 < n, m <= 100), followed by "n" lines - each "m" characters long. The program is terminted by a line containing (n = 0, m = 0) . The output contains: the Field ID followed by an (n x m) grid with each field containing either, the number of mines adjacent, or an '*' representing a "mine".


### Example 
>**Input**                                                                 
>4 4                                                          
>*...                                              
>....                                                     
>.*..                                                  
>....                                          
>3 5                                            
>**...                                              
>.....                                                
>.*...                                                  
>0 0                                                                                         

>**Output**                            
>Field #1:                                                                                  
>\*100                                                              
>2210                                                        
>1\*10                                           
>1110                                                     
>                                                             
> Field #2:                                            
> **100                                              
> 33200                                                      
> 1*100                                                                                   


### Problem solution
1. The program will read in the "n" and "m" dimensions of the first field.
2. if the dimension are (0, 0) end program.
3. The next "n" lines are read into an array of characters - the array has a buffer of '.' arround the contents read in by the program.
4. The number of mines adjacent to each square [1][1] - [n][m] are computed and copied into a seperate array.
5. The Field # is printed to the screen followed by the contents of the second array.
6. Return to step 1.

### Bug Checklist
- [ ] NA

[^1]: Programming Challenges By S.Skienna and M.Revilla, page 16