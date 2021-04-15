# uuid4
A tiny C library for generating [uuid4](http://www.ietf.org/rfc/rfc4122.txt)
strings.

### Usage
[uuid.c](uuid.c?raw=1) and [uuid.h](src/uuid.h?raw=1) should be
dropped into an existing project. The library contains one function
to generate a uuid v4 string.

```c
char *buf = uuid_generate(buf);
printf("%s\n", buf);
```

