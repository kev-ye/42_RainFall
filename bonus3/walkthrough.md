```shell
$> ls -la
[...]
-rwsr-s---+ 1 end    users  5595 Mar  6  2016 bonus3
[...]

$> ./bonus3

$> ./bonus3 test


$> ./bonus3 test test

# program takes 1 argument, and print nothing ...
```

```shell
$> gdb -q bonus3 
(gdb) i func
[...]
0x080484f4  main
[...]

# program only calls main()

(gdb) i var
[...]

# no interesting variable ....


```