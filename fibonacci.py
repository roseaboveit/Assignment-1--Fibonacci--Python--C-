fibA = 0
fibB = 1
sum = 1
print sum
while fibB < 5000:
    sum = fibA + fibB
    if sum < 5000:
        print sum
    fibA = fibB
    fibB = sum
