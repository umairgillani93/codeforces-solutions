def bit_pp():
    
    n = int(input())
    result = 0
    statements = []
    
    for i in range(n):
        statement = str(input())
        statements.append(statement)
        
    for j in range(len(statements)):
        if '++' in statements[j]:
            result += 1
        else:
            result -= 1
            
    return result

if __name__ == '__main__':
    print(bit_pp())
