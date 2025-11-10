# Libft

## About the project
Libft is the first project developed during Common Core at 42 school. It consists of a library composed of several functions that will be necessary throughout 42 journey.  

In the first part of this project I had to recreate several functions that are a part of C99 standard libc. Then I developed some additional functions that were not included in libc or were implemented in a different form. Finally, I jumped into the bonus part, where I had to learn some basic concepts of list manipulation.  

## Tools and insights
### Useful tools
- [Francinette](https://github.com/xicodomingues/francinette)
    - Great tool, does lot of tests but carefull because does not accout for all possible edge cases
- [Libft Guide](https://42-cursus.gitbook.io/guide/0-rank-00/libft)
    - It has pseudocodes of some functions and some solutions, but careful with them because some are not fully correct (e.g. not protecting enough 2nd part functions) or there are better ways of doing it
- [Concepts' cheat sheet](https://github.com/agavrel/42_CheatSheet?tab=readme-ov-file#0x00--array-overflow)
- [Oceno's channel](https://www.youtube.com/@onaecO)
  - He does some grat explaining of some of the functions (split) and some of the concepts
- [Conceptual libft guide](https://www.gibbontech.com/ecole42/libft/index.html#key-concepts)
  - Does a great listing of concepts you should have in mind while building the library and before delivering it
- 42 C-format Vscode Extension
  - Automatically fixes most of norminette errors
  - To install:
    - Download the extension on Vscode
    - Run pip3 install c_formatter_42 and pip3 install --user c_formatter_42 (one at a time) int the vscode terminal
    - Use crl + shft + i to use
    - If a pop-up shows up the first time you use it click on update or change or smth along this lines and select 42 formater
- Also I cannot recommend enough that you chat with your peers, specially the ones that have delivered the project (preferably not from your kick-off), they **will** know tricks and failing points that you don't, which is fine since we're all here to learn!

### Before Delivering
Make sure you know what your code is doing and that none of the 2nd part and beyond functions are segfaulting. Here's a checklist to help you:  
- Have you checked norminette?
- Do you have any files in your folder that are not supposed to be there? Careful with .vscode, a.out, libft.a...
- (if you work from home) Have you checked if your headers have your intra user
- Does calloc have protections against nmemb = 0 && size = 0 and int overflow?
- Do **all** of your 2nd part and bonus functions have protection against NULL? if (!s) return NULL/0/ ;
- Is your makefile re-linking?
  - e.g. when you run make or make bonus a 2nd time does it show up-to-date?
- Have you protected/checked all of your mallocs?
- (Not mandatory but in your evaluation you may get someone picky) Have you protected your fds against -1 return?
- Do you know all the basic concepts that you need to explain your functions?
  - ex: size_t, *, void *, memory allocation, difference between memcpy and memmove, size of a *, size of a char, size of an int, difference between unsigned char and signed char, why do you do cast to unsigned char in some of your functions, what are fds, what are lists...

### IMPORTANT MESSAGE

DO NOT COPY OR CHEAT, YOU WILL NOT BE HELPING YOURSELF. USE THIS ONLY TO GET THE LOGIC.

### Others
  
Passed with 125 on 04/11
