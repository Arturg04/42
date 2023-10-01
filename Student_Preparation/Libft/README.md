# Libft

The first project at 42 programming school is called libft, and it consists of creating a C library with all the base functions that students will use in future projects.
The goal is to learn how the standard functions of C programming work by coding them from scratch and creating our very own library.




## Functions:


- [ft_atoi.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_atoi.c)

ft_atoi is a C function is used to convert a string representation of an integer into an actual value.
```
int	ft_atoi(const char *restrict nptr);
```



- [ft_bzero.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_bzero.c)

ft_bzero is a C function that sets a block of memory to zero.
```
void	ft_bzero(void *restrict src,
		unsigned int n);
```



- [ft_calloc.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_calloc.c)

ft_calloc is a C function that alloc and initialize memory.
```
void	*ft_calloc(unsigned int nmemb,
				unsigned int size);
```



- [ft_isalnum.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_isalnum.c)

ft_isalnum is a C function check if a character is a number or a letter.
```
int	ft_isalnum(int c);
```



- [ft_isalpha.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_isalpha.c)

ft_isalpha is a C function check if a character is a letter.
```
int	ft_isalpha(int c);
```



- [ft_isascii.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_isascii.c)

ft_isascii is a C function check if a character is part of the Ascii Table.
```
int	ft_isascii(int c);
```



- [ft_isdigit.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_isdigit.c)

ft_isdigit is a C function check if a character is a number.
```
int	ft_isdigit(int c);
```



- [ft_isprint.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_isprint.c)

ft_isprint is a C function check if a character is printable.
```
int	ft_isprint(int c);
```



- [ft_memccpy.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_memccpy.c)

ft_memccpy is a C function that is used to copy memory from one location to another until a specified character is encountered.
```
void	*ft_memccpy(void *restrict dest,
		const void *restrict src,
		int c,
		unsigned int n);
```



- [ft_memchr.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_memchr.c)

ft_memchr is a C function used to search for a specific byte value.
```
void	*ft_memchr(const void *restrict src,
		int c,
		unsigned int n);
```



- [ft_memcmp.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_memcmp.c)

ft_memcmp is a C function used to compare two blocks of memory.
```
int	ft_memcmp(const void *restrict str1,
		const void *restrict str2,
		unsigned int n);
```



- [ft_memcpy.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_memcpy.c)

ft_memcpy is a C function that is used to copy memory from one location to another.
```
void	*ft_memcpy(void *restrict dest,
		void const *restrict src,
		unsigned int n);
```



- [ft_memmove.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_memmove.c)

ft_memmove is a C function that is used to copy memory from one location to another but in a safer way because take in count the overlap.
```
void	*ft_memmove(void *restrict dest,
		const void *restrict src,
		unsigned int n);
```



- [ft_memset.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_memset.c)

ft_memset is a C function that is used set block of memory to a specific values.
```
void	*ft_memset(void *restrict src,
		int c,
		unsigned int n);
```



- [ft_strchr.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strchr.c)

ft_strchr is a C function used to find the first occurrence of a specific character.
```
char	*ft_strchr(const char *restrict str,
				int c);
```



- [ft_strdup.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strdup.c)

ft_strdup is a C function used to duplicate a string allocating memory for the copy.
```
char	*ft_strdup(const char *restrict str);
```



- [ft_strlcat.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strlcat.c)

ft_strlcat is a C function is a safer way to concatenating two strings taking in count the size of the destination buffer.
```
unsigned int	ft_strlcat(char *restrict dst,
					const char *restrict src,
					unsigned int size);
```



- [ft_strlcpy.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strlcpy.c)

ft_strlcpy is a C function used to copy the contente of a string to another taking in count the size of the destination buffer.
```
unsigned int	ft_strlcpy(char *restrict dest,
			const char *restrict src,
			unsigned int size);
```



- [ft_strlen.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strlen.c)

ft_strlen is a C function used to get the length of a string.
```
unsigned int	ft_strlen(const char *restrict str);
```



- [ft_strncmp.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strncmp.c)

ft_strncmp is a C function used to compare two strings and return the diference of the first byte that dont match.
```
int	ft_strncmp(const char *restrict str,
			const char *restrict cmp,
			unsigned int n);
```



- [ft_strnstr.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strnstr.c)

ft_strnstr is a C function used to search for a substring within a given string until it reach the max size.
```
char	*ft_strnstr(const char *restrict str,
				const char *restrict locate,
				unsigned int size);
```



- [ft_strrchr.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_strrchr.c)

ft_strrchr is a C function used to find the last occurrence of a specific character.
```
char	*ft_strrchr(const char *restrict str,
				int c);
```



- [ft_tolower.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_tolower.c)

ft_tolower is a C function used to convert a given uppercase character to its corresponding lowercase.
```
int	ft_tolower(int c);
```



- [ft_toupper.c](https://github.com/Arturg04/42/tree/main/Student_Preparation/Libft/srcs/ft_toupper.c)

ft_toupper is a C function used to convert a given lowercase character to its corresponding uppercase.
```
int	ft_toupper(int c);
```

### Wiki Libft


| Function:       | Source File:  | Definition:                              |
| :-------------- | :-----------: | :--------------------------------------- |
| ft_atoi         | ft_atoi.c     | Convert a string to an integer.          |
| ft_bzero        | ft_bzero.c    | Set a block of memory to zero.           |
| ft_calloc       | ft_calloc.c   | Allocate and zero-initialize memory.     |
| ft_isalnum      | ft_isalnum.c  | Check if a character is alphanumeric.    |
| ft_isalpha      | ft_isalpha.c  | Check if a character is alphabetic.     |
| ft_isascii      | ft_isascii.c  | Check if a character is in ASCII range.  |
| ft_isdigit      | ft_isdigit.c  | Check if a character is a digit.         |
| ft_isprint      | ft_isprint.c  | Check if a character is printable.       |
| ft_memccpy      | ft_memccpy.c  | Copy memory until a specified character.|
| ft_memchr       | ft_memchr.c   | Locate a character in a block of memory.|
| ft_memcpy       | ft_memcpy.c   | Copy memory from one location to another.|
| ft_memcmp       | ft_memcmp.c   | Compare two blocks of memory.           |
| ft_memmove      | ft_memmove.c  | Copy memory safely within the same block.|
| ft_memset       | ft_memset.c   | Set a block of memory to a specific value.|
| ft_strchr       | ft_strchr.c   | Locate the first occurrence of a character.|
| ft_strdup       | ft_strdup.c   | Duplicate a string in dynamically allocated memory.|
| ft_strlcat      | ft_strlcat.c  | Safely concatenate strings with size limit.|
| ft_strlcpy      | ft_strlcpy.c  | Safely copy strings with size limit.     |
| ft_strlen       | ft_strlen.c   | Calculate the length of a string.        |
| ft_strnstr      | ft_strnstr.c  | Locate a substring within a string.     |
| ft_strncmp      | ft_strncmp.c  | Compare two strings up to a specified length.|
| ft_strrchr      | ft_strrchr.c  | Locate the last occurrence of a character.|
| ft_tolower      | ft_tolower.c  | Convert a character to lowercase.       |
| ft_toupper      | ft_toupper.c  | Convert a character to uppercase.       |



## Contact

If you have any questions or would like to get in touch with me, feel free to reach out:

- Email: artur.13.goncalves@gmail.com
- LinkedIn: [Artur Gonçalves](https://www.linkedin.com/in/arturg04/)
- Instagram: [Artur Gonçalves](https://www.instagram.com/arturg04/)
- LeetCode: [Artur Gonçalves](https://www.leetcode.com/Arturg04/)

