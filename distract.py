string = "AAAAZAAAAA"
new_string = []


for i in range(len(string)-1):
    if string[i] == string[i+1]:
        continue
    else:
        new_string.append(string[i])

print(new_string)


