# OOP Exercises – VŠFS

Dias Nurgaliyev 39994

## Scope

- Exercise 1: all 5 tasks
- Exercise 2: all 5 tasks
- Exercise 3: all 5 tasks
- Exercise 4: tasks 1 and 2
- Exercise 5: tasks 1 and 2
- Exercise 6: tasks 1 and 2

## Exercise 1 – Introduction to OOP (5/5)

1. Class `Zvire`: `zaludek`, methods `jez`, `vymesuj`, `zije`
2. Access modifier experiment (`public`)
3. Extended `Zvire` with `stari()` (age increases when feeding)
4. Class `Student` with subject records, credit, exam attempts
5. Methods: `getZnamka`, `pocetSplnenych`, `prumerZnamek`, `vypis`

## Exercise 2 – References, pointers, constructors (5/5)

1. `Zvire` rewritten as `struct` with references/pointers
2. `Student` rewritten as `struct` with references/pointers
3. `SortMin()` for sorting three values in ascending order
4. Copy constructor for `Zvire` and `Student`
5. Dynamic name storage for `Zvire` and `Student` (constructor + setter)

## Exercise 3 – Operator overloading (5/5)

1. `KomplexniCislo`: addition, subtraction, multiplication
2. Get/Set for real and imaginary parts
3. Constructors and operators: `=`, `+`, `-`, `*`, `+=`, `-=`, `*=`
4. `new`/`delete` allocations in `Student` and `Zvire`
5. Copy constructor and `operator=` for `Student` and `Zvire`

## Exercise 4 – Destructors (2 tasks)

1. `Str`: destructor, copy constructor, `operator=` for `Str` and `char*`
2. `LongInt`: destructor, copy constructor, `operator=` for `LongInt` and `int`

## Exercise 5 – Smart strings (2 tasks)

1. `Str` and `LongInt` improved with `copy()` and `clear()`
2. `Str`: operators `+` and `+=` for `Str + Str`

## Exercise 6 – Inheritance (2 tasks)

1. Classes `Savec`, `Ptak`, `Ryba` derived from `Zvire`
2. Enum fields: `PocetPrstu`, `BarvaPeri`, `SlanostVody`

## Build and run

```bash
cd "/home/dias/CPP Zadani"

# Exercise 1
g++ zadani_1/main.cpp zadani_1/zvire.cpp zadani_1/student.cpp -o out && ./out

# Exercise 2
g++ zadani_2/main.cpp zadani_2/zvire.cpp zadani_2/student.cpp zadani_2/sortmin.cpp -o out && ./out

# Exercise 3
g++ zadani_3/main.cpp zadani_3/komplexni.cpp zadani_3/zvire.cpp zadani_3/student.cpp -o out && ./out

# Exercise 4
g++ zadani_4/main.cpp zadani_4/str.cpp zadani_4/longint.cpp -o out && ./out

# Exercise 5
g++ zadani_5/main.cpp zadani_5/str.cpp zadani_5/longint.cpp -o out && ./out

# Exercise 6
g++ zadani_6/main.cpp zadani_6/zvire.cpp zadani_6/savec.cpp zadani_6/ptak.cpp zadani_6/ryba.cpp -o out && ./out
```
