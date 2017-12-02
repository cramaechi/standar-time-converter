# Standard Time Converter
A program that converts military time to standard time.

## Setup
1. Download and install [Git](https://git-scm.com/downloads), if you don't already have it.

2. Open terminal and run the git clone command:

   ```
   $ git clone https://github.com/cramaechi/standard-time-converter.git
   ```
    or [download as ZIP](https://github.com/cramaechi/standard-time-converter/archive/master.zip).

3. Go to the project folder:

   ```
   $ cd standard-time-converter
   ```

4. Compile:

   ```
   $ make
   ```
   
## Usage
Run:

```
$ ./standard_time_converter
```

Sample Output:
```
Enter time in 24 hr notation: 14:25                                                                                   
The time in 12 hr notation is: 2:25 P.M.                                                                              
                                                                                                                      
Start over? (y/n): y                                                                                                  
                                                                                                                      
                                                                                                                      
Enter time in 24 hr notation: 24:59                                                                                   
The time in 12 hr notation is: 12:59 A.M.                                                                             
                                                                                                                      
Start over? (y/n): y                                                                                                  
                                                                                                                      
                                                                                                                      
Enter time in 24 hr notation: 9:18                                                                                    
The time in 12 hr notation is: 9:18 A.M.                                                                              
                                                                                                                      
Start over? (y/n): n    
```
