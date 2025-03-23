myDict={
    "fast":"in a quick manner",
    "jha":"the learner",
    "marks": [4,2,1],
    "anotherdict":{'jha':'player'}
}
print(myDict.keys())#print the keys of dictionary
print(list(myDict.keys()))
print(myDict.values())#
print(myDict.items())#print the (key, value)
print(myDict)
updateDict={
    "nitesh":"student",
    "nhi":"ji",
    "jha":"dance"
}
myDict.update(updateDict)
print(myDict)
print(myDict.get("harry2")) #return none
print(myDict["harry2"]) 
