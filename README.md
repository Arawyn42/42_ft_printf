# <div align="center">⚙️ ft_printf (a [42](https://42perpignan.fr/) project) ⚙️</div>

## Grade
![drenassi's 42 ft_printf Score](grade.png)

## Introduction
**ft_printf** is the second project I did for 42 School.

This project consists in reproducing the real printf function. <br>
Our printf has to handle the following formats: %s, %d, %i, %p, %u, %x, %X.

In the bonus version of the project, it must handle more parameters, but I didn't do the bonus for this project.

## How to use ?
Clone the ft_printf repository into your program's folder:
```bash
git clone https://github.com/Arawyn42/42_ft_printf
```

The Makefile allows to create a small library to include ft_printf in another project. But like there are only 2 .c files, the best use is to paste it in the project where you want ft_printf and to add an include at the beginning of your files:

```C
#include "fr_printf.h"
```

You can also make the libftprintf.a file by typing the following command:
```bash
make && make clean
```
Then you just need to compile your program with the libftprintf.a.
