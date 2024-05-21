t = int(input())
for _ in range(t):
    s = str(input())
    if s[:2] == "12":
        print(s + " " + "PM")
    elif int(s[:2]) > 12:
        new = int(s[:2]) - 12
        if len(str(new)) < 2:
            new = str(0) + str(new)
        print(str(new) + ":" + s.split(":")[1] + " " + "PM")
    elif s[:2] == "00":
        print(str(12) + ":" + s.split(":")[1] + " " + "AM")

    else:
        print(str(s) + " " + "AM")

