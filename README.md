*This project has been created as part of the 42 curriculum by mbotelho*

# Libft

## Description
Libft is the first project developed during Common Core at 42 school. It consists of a library composed of several functions that will be necessary throughout 42 journey.  

In the first part of this project consisted in recreating several functions that are a part of C99 standard libc. Some additional function that were not a part of Libc were also completed. Finally, the bonus part of this project consisted of simple list manipulation.  

## Implemented functions
Functions that can be found in this git repository.
### Part 1 - Libc Functions

| Function    | Description                                        |
|-------------|----------------------------------------------------|
| ft_isalpha  | Checks for an alphabetic character. |
| ft_isdigit  | Checks for a digit (0-9). |
| ft_isalnum  | Checks for an alphanumeric character. |
| ft_isascii  | Checks for a 7-bit unsigned char that fits into the ASCII character. |
| ft_isprint  | Checks for any printable character including space. |
| ft_strlen   | Calculates the length of the string pointed to by s, excluding the terminating null byte. |
| ft_memset   | Fills the first n bytes of the memory area pointed to by s with the constant byte c. |
| ft_bzero    | Erases the data in the n bytes of memory. |
| ft_memcpy   | Copies n bytes from memory area src to memory area dest. |
| ft_memmove  | Copies n bytes from memory area src to memory area dest. The memories may overlap. |
| ft_strlcpy  | Copies characters from the NULL-terminated string src to dst, NULL-terminating the result. |
| ft_strlcat  | Appends the NULL-terminated string src to the end of dst. It will append at most size - 1 bytes, NULL-terminating the result. |
| ft_toupper  | Converts lowercase letters to uppercase. |
| ft_tolower  | Converts uppercase letters to lowercase. |
| ft_strchr   | Returns a pointer to the first occurrence of c in the string pointed to by s. |
| ft_strrchr  | Returns a pointer to the last occurrence of c in the string pointed to by s. |
| ft_strncmp  | Compares at most the first n bytes of two strings s1 and s2. |
| ft_memchr   | Scans the initial occurrence of c in the first n bytes of the memory area pointed to by s. |
| ft_memcmp   | Compares the first n bytes of memory areas s1 and s2. |
| ft_strnstr  | Locates the first occurrence of the NULL-terminated string big in the string little, where not more than len characters are searched. |
| ft_atoi     | Converts the initial portion of the string pointed to by nptr to int. |
| ft_calloc   | Allocates memory for an array of nmemb elements of size bytes each and initializes the memory to zero. |
| ft_strdup   | Duplicates the string pointed to by src, including the terminating null byte, using malloc. |

### Part 2 - Additional Functions

| Function      | Description                                           |
|---------------|-------------------------------------------------------|
| ft_substr     | Returns a substring of the string s.    |
| ft_strjoin    | Returns a new string which is the result of concatenating s1 and s2.                             |
| ft_strtrim    | Returns a copy of the string s1 with the characters of set at the beggining and end removed. |
| ft_split      | Splits a string into an array of strings using a character c as a delimiter. |
| ft_itoa       | Returns a string representing the integer recieved as an argument. |
| ft_strmapi    | Applies the function f to each character of the string passing its indext as the first argument and the character itself as the second. A new string is created to store the results. |
| ft_striteri   | Applies the function f to each character of the string passing its indext as the first argument. |
| ft_putchar_fd | Outputs the character c to the specified file descriptor. |
| ft_putstr_fd  | Outputs the string s to the specified file descriptor.    |
| ft_putendl_fd | Outputs the string s to the specified file descriptor, followed by a newline. |
| ft_putnbr_fd  | Outputs the integer n to the specified file descriptor.   |

### Bonus Part

The functions bellow are using the following liked list structure:

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
| ft_lstiter      | Iterates the list lst and applies the function f to the node of each element. |
| ft_lstmap       | Iterates the list lst and applies the function f to the nodeof each element. Creates a new list resulting of the successive applications of the function f. And deletes the content if necessary|

### Resources
- [Francinette](https://github.com/xicodomingues/francinette)
- [Concepts' cheat sheet](https://github.com/agavrel/42_CheatSheet?tab=readme-ov-file#0x00--array-overflow)
- [Oceno's channel](https://www.youtube.com/@onaecO)
- 42 C-format Vscode Extension
