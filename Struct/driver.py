import Program_struct
ten=10
p=Program_struct.Product('Bottle',ten)
print(p.getName())
p.setName('Pipe')
print(p.getName())
print(p.getQuantity())