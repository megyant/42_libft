# Libft

## About the project
Libft is the first project developed during Common Core at 42 school. It consists of a library composed of several functions that will be necessary throughout 42 journey.  

In the first part of this project I had to recreate several functions that are a part of C99 standard libc. Then I developed some additional functions that were not included in libc or were implemented in a different form. Finally, I jumped into the bonus part, where I had to learn some basic concepts of list manipulation.  

## Implemented functions
### Part 1 - Libc Functions

| Function    | Description                                        |
|-------------|----------------------------------------------------|
| ft_memset   | Sets the first n bytes of the memory area pointed to by s to the specified value. |
| ft_bzero    | Sets the first n bytes of the memory area pointed to by s to zero. |
| ft_memcpy   | Copies n bytes from memory area src to memory area dest. |
| ft_memmove  | Copies n bytes from memory area src to memory area dest, handling overlap correctly. |
| ft_memchr   | Locates the first occurrence of c in the first n bytes of the memory area pointed to by s. |
| ft_memcmp   | Compares the first n bytes of memory areas s1 and s2. |
| ft_strlen   | Calculates the length of the string pointed to by s, excluding the terminating null byte. |
| ft_strlcpy  | Copies up to size - 1 characters from the NULL-terminated string src to dst, NULL-terminating the result. |
| ft_strlcat  | Appends the NULL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NULL-terminating the result. |
| ft_strchr   | Locates the first occurrence of c in the string pointed to by s. |
| ft_strrchr  | Locates the last occurrence of c in the string pointed to by s. |
| ft_strnstr  | Locates the first occurrence of the NULL-terminated string needle in the string haystack, where not more than len characters are searched. |
| ft_strncmp  | Compares at most the first n bytes of two strings s1 and s2. |
| ft_atoi     | Converts the initial portion of the string pointed to by str to int representation. |
| ft_isalpha  | Checks if the character c is an alphabetic character (a-z or A-Z). |
| ft_isdigit  | Checks if the character c is a decimal digit (0-9). |
| ft_isalnum  | Checks if the character c is alphanumeric (a-z, A-Z, or 0-9). |
| ft_isascii  | Checks if the character c is a 7-bit ASCII character. |
| ft_isprint  | Checks if the character c is a printable character (including space). |
| ft_toupper  | Converts the character c to uppercase. |
| ft_tolower  | Converts the character c to lowercase. |
| ft_calloc   | Allocates memory for an array of nmemb elements of size bytes each and initializes the memory to zero. |
| ft_strdup   | Duplicates the string pointed to by src, including the terminating null byte, using malloc. |

### Part 2 - Additional Functions

| Function      | Description                                           |
|---------------|-------------------------------------------------------|
| ft_substr     | Returns a substring of the string s.    |
| ft_strjoin    | Returns a new string which is the result of concatenating s1 and s2.                             |
| ft_strtrim    | Returns a copy of the string s1 with the characters of set at the beggining and end removed. |
| ft_split      | Splits a string into an array of strings using a character c as a delimiter. |
| ft_itoa       | Returns a string representing the integer recieved as an argument |
| ft_strmapi    | Applies the function f to each character of the string passing its indext as the first argument and the character itself as the second. A new string is created to store the results |
| ft_striteri   | Applies the function f to each character of the string passing its indext as the first argument |
| ft_putchar_fd | Outputs the character c to the specified file descriptor. |
| ft_putstr_fd  | Outputs the string s to the specified file descriptor.    |
| ft_putendl_fd | Outputs the string s to the specified file descriptor, followed by a newline. |
| ft_putnbr_fd  | Outputs the integer n to the specified file descriptor.   |

### Bonus Part

These functions are bonus functions:

these functions are using the following structure (linked list):

```c
typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;
```


| Function        | Description                                          |
|-----------------|------------------------------------------------------|
| ft_lstnew       | Returns a new node.                 |
| ft_lstadd_front | Adds the new node at the beginning of the list.   |
| ft_lstsize      | Counts the number of nodes in a list.             |
| ft_lstlast      | Returns the last node of the list.                |
| ft_lstadd_back  | Adds the new node at the end of the list.         |
| ft_lstdelone    | Deletes and frees the given node using the del function.                 |
| ft_lstclear     | Deletes and frees the given node and every successor of that element, using the function del and free(3). |
| ft_lstiter      | Iterates the list lst and applies the function f to the content of each element. |
| ft_lstmap       | Iterates the list lst and applies the function f to the content of each element. Creates a new list resulting of the successive applications of the function f. |

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
