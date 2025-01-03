.globl f # this allows other files to find the function f

# f takes in two arguments:
# a0 is the value we want to evaluate f at
# a1 is the address of the "output" array (read the lab spec for more information).
# The return value should be stored in a0
f:  
    mv t0 a0
    mv t1 a1
    addi t0 t0 3

    slli t0, t0, 2 # step 1 (see above)
    add t1, t1, t0 # step 2 (see above)
    lw a0, 0(t1)   # step 3 (see above)
    # This is how you return from a function. You'll learn more about this later.
    # This should be the last line in your program.
    jr ra
