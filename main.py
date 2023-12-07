def InversionArr(arr,begin,end):
    while begin < end :
        temp=arr[begin]
        arr[begin]=arr[end]
        arr[end]=temp
        begin+=1
        end-=1
    return arr

arr=[4,5,6,7,8, 9,8,7]
#    0,1,2,3,4, 5,6,7
#    9,8,7  4,5,6,7,8
#inverse list
print(arr)
InversionArr(arr,0,len(arr)-1)
InversionArr(arr,0,2)
InversionArr(arr,3,len(arr)-1)
print(arr)

def changestr(str):
    str += ' plus postfix'
    return str
def changestr_Bad(str):
    str += ' plus postfix'

str='none'
str=changestr_Bad(str)
print(str)

str='none'
str=changestr(str)
print(str,end=" ")

print('today is %sday %d %d'%('mon',10,27))
print('today is {}day {}month {}day'.format('mon',10,27))
print('today is {1}day {2}month {0}day'.format('mon',10,27))