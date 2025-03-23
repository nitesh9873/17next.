a={1,3,4,5,6,1}#in result repetative element not shown s
print(type(a))
print(a)
#important this syntax will create will create an empty dictionary
#and not an emty set
a={}
print(type(a))
#creating empty set 
b=set()
print(type(b))
#adding values to empty set 
b.add(4)
b.add(5)
b.add((2,1,4,6))
#b.add[2,6,4,1]value not under set because list value can be updatedlist 
#b.add({4:6})value not under dictionary because list value can be updated
print(b)