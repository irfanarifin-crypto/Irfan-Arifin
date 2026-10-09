Radius = float(input(" "))
Height = float(input(" "))

Pi = 22 / 7

Volume = Pi * Radius * Radius * Height
Surface_Area = 2 * Pi * Radius * (Radius + Height)
Circumference = 2 * Pi * Radius

print()
print(f"Volume = {Volume:.2f}")
print(f"Luas = {Surface_Area:.2f}")
print(f"Keliling = {Circumference:.2f}")