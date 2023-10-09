#python
n=int(input("enter length of array "))
array=list([])
for i in range (0,n):
	array[i]=int(input("enter element"))
for i in range (0,n,2):
	print(array[i]*2)