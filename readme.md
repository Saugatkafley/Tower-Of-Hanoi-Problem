# Tower of Hanoi Problem
Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move the entire stack to another rod, obeying the following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
3) No disk may be placed on top of a smaller disk.

# Description of Solution.
I have implemented recursion for the solution of this problem.
Initially our aim is to transfer the disc from source peg to destination peg  using auxiliary peg (S,D,A).
If the n == 1 then we print the message .(Base condition)

Otherwise we perform recursion for source to aux using destination (S,A,D)
                        and         aux to destination using source (A,D,S).

# You are Welcome .
If this is found helpful give it a star.s