# C - Search Algorithms

## Resources

#### Read or watch:

* [Search algorithm](https://intranet.alxswe.com/rltoken/ap2kuRv8qrUMyQ0-MY3EXw)
* [Space complexity (1)](https://intranet.alxswe.com/rltoken/QK9ENdoTyqGs0d4_M3XE3g)
## Learning Objectives

### General

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs
## Tasks

| Task | File |
| ---- | ---- |
| 0. Linear search | [0-linear.c](./0-linear.c) |
| 1. Binary search | [1-binary.c](./1-binary.c) |
| 2. Big O #0 | [2-O](./2-O) |
| 3. Big O #1 | [3-O](./3-O) |
| 4. Big O #2 | [4-O](./4-O) |
| 5. Big O #3 | [5-O](./5-O) |
| 6. Big O #4 | [6-O](./6-O) |
| 7. Jump search | [100-jump.c](./100-jump.c) |
| 8. Big O #5 | [101-O](./101-O) |
| 9. Interpolation search | [102-interpolation.c](./102-interpolation.c) |
| 10. Exponential search | [103-exponential.c](./103-exponential.c) |
| 11. Advanced binary search | [104-advanced_binary.c](./104-advanced_binary.c) |
| 12. Jump search in a singly linked list | [105-jump_list.c](./105-jump_list.c) |
| 13. Linear search in a skip list | [106-linear_skip.c](./106-linear_skip.c) |
| 14. Big O #6 | [107-O](./107-O) |
| 15. Big O #7 | [108-O](./108-O) |

### Usage:
0. Linear search
function that searches for a value in an array of integers using the [Linear search algorithm](https://intranet.alxswe.com/rltoken/17RKhbmvh_u4ebCwaSxCxg)
wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
wilfried@0x1E-search_algorithms$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1

1. Binary search
function that searches for a value in a sorted array of integers using the [Binary search algorithm](https://intranet.alxswe.com/rltoken/SnveFJhSDE7o8bEx-kGGpA)

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
wilfried@0x1E-search_algorithms$ ./1-binary 
Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 0, 1, 2, 3
Searching in array: 2, 3
Found 2 at index: 2

Searching in array: 0, 1, 2, 3, 4
Searching in array: 3, 4
Searching in array: 4
Found 5 at index: -1

Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
Searching in array: 5, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1

2. Big O #0
time complexity (worst case) of a linear search in an array of size n

3. Big O #1
the space complexity (worst case) of an iterative linear search algorithm in an array of size n

4. Big O #2
the time complexity (worst case) of a binary search in an array of size n

5. Big O #3
the space complexity (worst case) of a binary search in an array of size n

6. Big O #4
the space complexity of this function / algorithm:

int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}

7. Jump search
function that searches for a value in a sorted array of integers using the [Jump search algorithm](https://intranet.alxswe.com/rltoken/1Op40kSYMN23JsOu6F3P1A)

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 100-main.c 100-jump.c -lm -o 100-jump
wilfried@0x1E-search_algorithms$ ./100-jump 
Value checked array[0] = [0]
Value checked array[3] = [3]
Value found between indexes [3] and [6]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [5]
Value checked array[6] = [6]
Found 6 at index: 6

Value checked array[0] = [0]
Value found between indexes [0] and [3]
Value checked array[0] = [0]
Value checked array[1] = [1]
Found 1 at index: 1

Value checked array[0] = [0]
Value checked array[3] = [3]
Value checked array[6] = [6]
Value checked array[9] = [9]
Value found between indexes [9] and [12]
Value checked array[9] = [9]
Found 999 at index: -1

8. Big O #5
the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)

9. Interpolation search
function that searches for a value in a sorted array of integers using the [Interpolation search algorithm](https://intranet.alxswe.com/rltoken/cswpABHiyyRmGrPkzsMTyw)

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 102-main.c 102-interpolation.c -o 102-interpolation
wilfried@0x1E-search_algorithms$ ./102-interpolation 
Value checked array[6] = [2]
Value checked array[7] = [3]
Found 3 at index: 7

Value checked array[14] = [7]
Found 7 at index: 14

Value checked array[2109] is out of range
Found 999 at index: -1

10. Exponential search
a function that searches for a value in a sorted array of integers using the [Exponential search algorithm](https://intranet.alxswe.com/rltoken/J7wng_ddosamvEkFl0ekqA)

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 103-main.c 103-exponential.c -o 103-exponential
wilfried@0x1E-search_algorithms$ ./103-exponential 
Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Found 62 at index: 13

Value checked array[1] = [1]
Value checked array[2] = [2]
Value found between indexes [2] and [4]
Searching in array: 2, 3, 4
Found 3 at index: 3

Value checked array[1] = [1]
Value checked array[2] = [2]
Value checked array[4] = [4]
Value checked array[8] = [18]
Value found between indexes [8] and [15]
Searching in array: 18, 19, 23, 54, 61, 62, 76, 99
Searching in array: 61, 62, 76, 99
Searching in array: 76, 99
Searching in array: 99
Found 999 at index: -1

11. Advanced binary search
solves this problem of the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array).

a function that searches for a value in a sorted array of integers.

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 104-main.c 104-advanced_binary.c -o 104-advanced_binary
wilfried@0x1E-search_algorithms$ ./104-advanced_binary
Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Found 8 at index: 8

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 0, 1, 2, 5, 5
Searching in array: 5, 5
Found 5 at index: 3

Searching in array: 0, 1, 2, 5, 5, 6, 6, 7, 8, 9
Searching in array: 6, 6, 7, 8, 9
Searching in array: 8, 9
Searching in array: 9
Found 999 at index: -1

12. Jump search in a singly linked list
a function that searches for a value in a sorted list of integers using the Jump search algorithm.

NOTE: [You can find here](https://intranet.alxswe.com/rltoken/7EwC08L6K_vQyI2wknLvnQ) the functions used in the example.

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 105-main.c 105-jump_list.c listint/*.c -lm -o 105-jump
wilfried@0x1E-search_algorithms$ ./105-jump 
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value found between indexes [8] and [12]
Value checked at index [8] = [18]
Value checked at index [9] = [19]
Value checked at index [10] = [23]
Value checked at index [11] = [53]
Found 53 at index: 11

Value checked at index [4] = [4]
Value found between indexes [0] and [4]
Value checked at index [0] = [0]
Value checked at index [1] = [1]
Value checked at index [2] = [2]
Found 2 at index: 2

Value checked at index [4] = [4]
Value checked at index [8] = [18]
Value checked at index [12] = [61]
Value checked at index [15] = [99]
Value found between indexes [12] and [15]
Value checked at index [12] = [61]
Value checked at index [13] = [62]
Value checked at index [14] = [76]
Value checked at index [15] = [99]
Found 999 at index: (nil)

13. Linear search in a skip list

a function that searches for a value in a sorted skip list of integers.

looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t) (see example below).

Please define the following data structure in your search_algos.h header file:
```
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```
NOTE: [You can find here](https://intranet.alxswe.com/rltoken/Br9jXygWf5gbgGxZI45ukA) the functions used in the example. 

wilfried@0x1E-search_algorithms$ gcc -Wall -Wextra -Werror -pedantic -std=gnu89 106-main.c 106-linear_skip.c skiplist/*.c -lm -o 106-linear
wilfried@0x1E-search_algorithms$ ./106-linear 
List :
Index[0] = [0]
Index[1] = [1]
Index[2] = [2]
Index[3] = [3]
Index[4] = [4]
Index[5] = [7]
Index[6] = [12]
Index[7] = [15]
Index[8] = [18]
Index[9] = [19]
Index[10] = [23]
Index[11] = [53]
Index[12] = [61]
Index[13] = [62]
Index[14] = [76]
Index[15] = [99]

Express lane :
Index[0] = [0]
Index[4] = [4]
Index[8] = [18]
Index[12] = [61]

Value checked at index [4] = [4]...

14. Big O #6
the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n

15. Big O #7
the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)
