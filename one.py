def find_favorite(food_items, favorite)
    for item in food_items
        if item == favorite
        return f"{item}"
    return "Favorite food not found";

food_list = ["Burger", "Pasta", "Pizza", "Noodles"];
output = find_favorite(food_list, "Pizza")
print f(output.upper())