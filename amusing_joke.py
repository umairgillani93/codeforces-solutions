def amusing_joke(guest, host, pile):
    guest_host = str(guest) + str(host)
    gh_dict = {}
    for i in guest_host:
        if i in gh_dict:
            gh_dict[i] += 1
        else:
            gh_dict[i] = 1

    for j in pile:
        if j in gh_dict:
            gh_dict[j] -= 1
        else:
            gh_dict[j] = 1 

    for k in gh_dict:
        if gh_dict[k] != 0:
            return 'NO'

    return 'YES'

if __name__ == '__main__':
    guest = str(input())
    host = str(input())
    pile = str(input())

    print(amusing_joke(guest, host, pile))
