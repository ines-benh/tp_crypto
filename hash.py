import hashlib 
import random 



hash_var = '0000000000000000000ffdd712a852e0d4234e6b'

name = str(input("NOM & PRENOM :"))
count =0

while True:
	tmp_name = f'{name}-{count}'
	count    = count + 1
	tmp_hash = hashlib.sha1(tmp_name.encode('utf-8')).hexdigest()
	print( count, '| hash of name :',tmp_hash, '|' ,hash_var)
	if tmp_hash <= hash_var:
		break

	