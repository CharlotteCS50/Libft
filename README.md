<div id="header" align="center">
  <img src="https://media.giphy.com/media/ztl9x7JlhSlU4MWD6h/giphy.gif" width="200"/>
</div>

<h1 align="center">libft</h1>

My implementation of some of the Standard C Library functions including some additional ones.

### TOC
What is libft?
What's in it?
How does it work?
How do I use the library?
How do I test it? How do I test my own implementations?
To test the code in this repo
To test your own code
Example usage
What is libft?
Libft is an individual project at 42 that requires us to re-create some standard C library functions including some additional ones that can be used later to build a library of useful functions for the rest of the program.

Disclaimer: Reinventing the wheel is bad, 42 makes us do this just so we can have a deeper understanding of data structures and basic algorithms. At 42 we're not allowed to use some standard libraries on our projects, so we have to keep growing this library with our own functions as we go farther in the program.

What's in it?
As you can see from the Project instructions, there are 3 sections:

- Libc Functions: Some of the standard C functions
- Additional functions: Useful for later projects
- Bonus Functions: Linked lists

| Libc functions | Additional functions | Bonus Functions |
| -------------- | -------------------- | --------------- |
| memset	       | ft_substr   	        | ft_lstnew	      |
| bzero	         | ft_strjoin           | ft_lstdelone	  |
| memcpy         | ft_strtrim	          | ft_lstsize      | 
| calloc         | ft_split	            | ft_lstlast      |
| memmove	       | ft_itoa	            | ft_lstclear	    |
| memchr	       | ft_striteri	        | ft_lstmap	      |
| memcmp	       | ft_strmapi		        | ft_lstadd_back	|
| strlen	       | ft_putchar_fd        | ft_lstadd_front |
| strdup	       | ft_putstr_fd         |                 |
| strlcpy	       | ft_putendl_fd        |                 |
| strlcat	       | ft_putnbr_fd         |                 |
| strchr			   | 		                  |                 |
| strrchr			   | 	                    |                 |
| strnstr			   |                      |                 |
| strncmp			   |                      |                 |
| atoi	         |                      |                 |
| isalpha		     |                      |                 |
| isdigit			   |                      |                 |
| isalnum			   |                      |                 |
| isascii			   |                      |                 |
| isprint			   |                      |                 |
| toupper			   |                      |                 |
| tolower        |                      |                 |
