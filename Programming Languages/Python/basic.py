# Declaring a python variable -> implicit type
# Not ideal for debugging

integer = 500
print(integer)

# type hint: indicate the expected type of a variable
# Explicit type mention, good for debugging

integer_type: int = int(500.523)
print(integer_type)

isTrue: bool = bool(0)
print(isTrue)

# convert a character to ASCII value
valueASCII = ord('a')
print(valueASCII)
