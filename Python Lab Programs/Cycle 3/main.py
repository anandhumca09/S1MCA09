from graphics.rectangle import calculate_area, calculate_perimeter
from graphics.circle import circle_area, circle_perimeter
from graphics._3D_graphics.cuboid import calculate_surface_area as cuboid_surface_area, calculate_volume as cuboid_volume
from graphics._3D_graphics.sphere import calculate_surface_area as sphere_surface_area, calculate_volume as sphere_volume

# Rectangle
length = int(input("Enter the length of rectangle: "))
breadth = int(input("Enter the breadth of rectangle: "))

print("Area of Rectangle:", calculate_area(length, breadth))
print("Perimeter of Rectangle:", calculate_perimeter(length, breadth))


# Circle
radius = float(input("\nEnter the radius of circle: "))

print("Area of Circle:", circle_area(radius))
print("Circumference of Circle:", circle_perimeter(radius))


# Cuboid
length = float(input("\nEnter the length of cuboid: "))
breadth = float(input("Enter the breadth of cuboid: "))
height = float(input("Enter the height of cuboid: "))

print("Surface Area of Cuboid:", cuboid_surface_area(length, breadth, height))
print("Volume of Cuboid:", cuboid_volume(length, breadth, height))


# Sphere
radius = float(input("\nEnter the radius of sphere: "))

print("Surface Area of Sphere:", sphere_surface_area(radius))
print("Volume of Sphere:", sphere_volume(radius))