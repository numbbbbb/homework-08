flat=lambda L: sum(map(flat,L),[]) if isinstance(L,list) else [L]
print ', '.join(flat([flat([j.split('.') for j in flat([i.split('/') for i in raw_input("Please enter the url:").split("://")])])]))
