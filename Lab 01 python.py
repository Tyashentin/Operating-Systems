N = 11;
arrFirst = [];
for i in range(1, N+1):
    arrFirst.append(i);
arrSecond = [2,5,7,8];
print("First Array: ");
print(arrFirst)
print("Second Array: ");
print(arrSecond)
print ("Result:");
flag = 0;
for i in range(0, N):
    flag = 0;
    for j in range(0, 3):
        if (arrFirst[i] == arrSecond[j]):
            flag = 1;
    if (flag == 0):
        print (arrFirst[i]);
