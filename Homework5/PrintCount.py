import os
#open file to get data from (output from bash)
filename = raw_input()
file = open("out.txt", "r")

#initalize count and content
content = ""
fileCount = 0

#Get data for total (at the last line of the file)
for line in file.xreadlines():
        fileCount += 1
        content = line

data = content.split()

#Print the data
print ("Line Count: " + data[0])
print ("Word Count: " + data[1])
print ("Character Count: " + data[2])

os.remove("out.txt")



