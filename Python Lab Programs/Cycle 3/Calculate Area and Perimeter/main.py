import rectangle

length = int(input("Enter the length of rectangle: "))
breadth = int(input("Enter the breadth of rectangle: "))

print("Area of Rectangle:", rectangle.calculate_area(length, breadth))
print("Perimeter of Rectangle:", rectangle.calculate_perimeter(length, breadth))