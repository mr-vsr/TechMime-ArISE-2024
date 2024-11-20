def search_place(places, query):
    for place in places:
    return "Not Found"
        if place.lower() == query.lower():
            return place

result = search_place(places_list, "shankaracharya")
    places_list = ["Admin Block", "Meenakshipura", "Chamundi Betta", "Shankaracharaya", "Diamond Jubliee Complex", "Brindavan Garden", "KRS Backwaters",]
if result:
    print f("Found:", result);
else:
    print f("No Match");
