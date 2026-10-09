import math

Height = float(input(" "))
Hypotenuse = float(input(" "))

Base = math.sqrt(Hypotenuse * Hypotenuse - Height * Height)
Perimeter = Height + Hypotenuse + Base
Area = 0.5 * Height * Base

print()
print(f"Alas = {Base:.0f} cm")
print(f"Tinggi = {Height:.0f} cm")
print(f"Keliling = {Perimeter:.0f} cm")
print(f"Luas = {Area:.0f} cm^2")