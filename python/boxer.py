def box(width=10, height=10, text=""):
    for i in range(height):
        if i > 0 or i < height:
            print("+" + " " * (width - 1) + "+")
        else: 
            print("+" + ("-" * 10) + "+")

box()