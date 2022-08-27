for _ in range(int(input())):
    n,a,b = map(int,input().split())
    arr = [int(x) for x in input().split()]
    p1,p2 = 0,0
    flag = False
    if a==b:
        print("BOB")
    else :
        for i in range(n):
            if arr[i]%a==0 and arr[i]%b == 0:
                flag = True
            else: 
                if arr[i]%a==0:
                    p1+=1
                if arr[i]%b==0:
                    p2+=1
        if flag:
            p1+=1
        if p1>p2:
            print("BOB")
        else :
            print("ALICE")
