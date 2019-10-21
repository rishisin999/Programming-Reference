"""
Simple used of the passlib library to use a sha512 hasher to encrypt passwords
"""
from passlib.hash import sha512_crypt
plaintext_password = input("Enter password to be hashed: " )
hashed_password = sha512_crypt.hash(plaintext_password)

print("Hashed password: " + hashed_password)

"""
When retrieving hash passwords from a database, use 
sha512_crypt.verify(entered_password, retreived_password_hash) 
to verify password(returns a boolean)
"""
