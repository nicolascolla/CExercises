# CExercises

Simple exercises in C making use of [libcs50](https://github.com/cs50/libcs50).

### mario

Creates a Super Mario-style pyramid with a requested height between 1 and 8:

```
$ ./mario
Height: 5
    #
   ##
  ###
 ####
#####
```

**Building instructions**

```
$ gcc -o mario mario.c -lcs50
```



### cents

![](coins.jpg)

[Greedy algorithm](https://en.wikipedia.org/wiki/Greedy_algorithm) that calculates the optimal number of coins for a given number of US cents:

```
$ ./cents
Number of cents: 475869
19040
```

**Building instructions**

```
$ gcc -o cents cents.c -lcs50
```



### scrabble

Determines which Scrabble word is worth more, using the value of every letter in the game (case insensitive):

| A    | B    | C    | D    | E    | F    | G    | H    | I    | J    | K    | L    | M    | N    | O    | P    | Q    | R    | S    | T    | U    | V    | W    | X    | Y    | Z    |
| ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- | ---- |
| 1    | 3    | 3    | 2    | 1    | 4    | 2    | 4    | 1    | 8    | 5    | 1    | 3    | 1    | 1    | 3    | 10   | 1    | 1    | 1    | 1    | 4    | 4    | 8    | 4    | 10   |

```
$ ./scrabble
Player 1: Elephant
Player 2: smartphone
Player 2 wins!
```

**Building instructions**

```
$ gcc -o scrabble scrabble.c -lcs50
```



### readability

Determines the reading level of a given text following the [Coleman-Liau formula](https://en.wikipedia.org/wiki/Coleman%E2%80%93Liau_index) (assuming no double spaces / double punctuation marks):

```
$ ./readability 
Text: The Coleman–Liau index is a readability test designed by Meri Coleman and T. L. Liau to gauge the understandability of a text. Like the Flesch–Kincaid Grade Level, Gunning fog index, SMOG index, and Automated Readability Index, its output approximates the U.S. grade level thought necessary to comprehend the text.
Grade 11
```

**Building instructions**

```
$ gcc -o readability readability.c -lcs50 -lm
```



### caesar

Simple implementation of the [Caesar cipher algorithm](https://en.wikipedia.org/wiki/Caesar_cipher). Provides usage instructions when used incorrectly:

```
$ ./caesar 5
plaintext: Hello, world!
ciphertext: Mjqqt, btwqi!
```

Provides usage instructions after an error:

```
$ ./caesar
Usage: ./caesar key

$ ./caesar NotAPositiveNumber
Usage: ./caesar key

$ ./caesar -2
Usage: ./caesar key

$ ./caesar 5 7
Usage: ./caesar key
```

**Building instructions**

```
$ gcc -o caesar caesar.c -lcs50
```



### triangle

Takes three real numbers representing the lengths of the three sides of a triangle and determines whether they are capable of making a triangle:

```
$ ./triangle
First side of the triangle: 4
Second side of the triangle: 5
Third side of the triangle: 0
NOT a valid triangle!

$ ./triangle
First side of the triangle: 2
Second side of the triangle: 2
Third side of the triangle: 2
Valid triangle
```

**Building instructions**

```
$ gcc -o triangle triangle.c -lcs50
```



### ascii

Converts a space-separated list of decimal numbers to its ASCII equivalent:

```
$ ./ascii 72 101 108 108 111 44 32 119 111 114 108 100 33 
Hello, world!
```

**Building instructions**

```
$ gcc -o ascii ascii.c
```

