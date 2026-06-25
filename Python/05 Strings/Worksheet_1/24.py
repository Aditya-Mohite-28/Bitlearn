def restore_ip_addresses(s):
    res = []
    n = len(s)
    
    for i in range(1, min(4, n)):
        for j in range(i + 1, min(i + 4, n)):
            for k in range(j + 1, min(j + 4, n)):
                part1, part2, part3, part4 = s[:i], s[i:j], s[j:k], s[k:]
                if not part4 or len(part4) > 3:
                    continue
                
                valid = True
                for part in (part1, part2, part3, part4):
                    if (len(part) > 1 and part[0] == '0') or int(part) > 255:
                        valid = False
                        break
                if valid:
                    res.append(f"{part1}.{part2}.{part3}.{part4}")
    return res

print(restore_ip_addresses("25525511135"))