#!usr/bin/ruby

puts "Enter a string to modify"
str = gets
oldstr = str


str = str.gsub(/^f/, 'gh')
str = str.gsub(/sh$/, 'ti')
str = str.gsub(/(?!^i)(?!i$)i/, 'o')

puts "Old output: " + oldstr
puts "New output: " + str