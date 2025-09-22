#Hackerrank problem find runner_up
if _name_ == '_main_':
    n = int(input())
    arr = map(int, input().split())
    print(sorted(list(set(arr)))[-2])

#Hackerrank Problem Print Function
if __name__ == '__main__':
    n = int(input())
    Answer=""
    for i in range(1,n+1):
        Answer += str(i)
    print (Answer)

#Hackerrank problem String split and join
def split_and_join(line):
    string_line=line.split(" ")
    line="-".join(string_line)
    return line

if __name__ == '__main__':
