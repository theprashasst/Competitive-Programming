import sys
input = sys.stdin.read


def solve ():
    data=input().strip().split()
    n= int(data[0])
    k= int(data[1])
    q= int(data[2])
    idx=3
    temp=[0]*(200002)
    arr=[0]*(200002)
    
    for i in range(n):
        a,b=int(data[idx]), int(data[idx+1])
        temp[a] += 1
        temp[b+1] -= 1

        idx+=2
    # print(temp[90:100])  # Debugging line to check the temp array
    for i in range(1,len(temp)):
        temp[i] += temp[i-1]
        if temp[i] >=k:
            arr[i] = 1
    
    # print(temp[90:100])  # Debugging line to check the arr array
    for i in range(1, len(arr)):
        arr[i] += arr[i-1]
    # print(arr[90:100])  # Debugging line to check the arr array


    
    for i in range(q):
        a,b=int(data[idx]), int(data[idx+1])
        idx+=2
        # print(a,b)
        out = arr[b]- arr[a-1] if a>0 else arr[b]
        # print(a,b)
        print(out)



    # for i in range(q):


    

        
        

    



def main():
    solve()
if __name__ == "__main__":
    main()
    



