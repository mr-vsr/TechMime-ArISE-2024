def format_name(first, last){
    if not first or not last:
        return "Invalid Name"
    return first.capitalize() + last.capitalize()
}

names = [("purn", "vasu"), ("Golden", "Jubliee"), ("Diamond", "Jubliee"), ("Admin","Block")]:
for fname, lname in names{
        print(format_name(fname, lname));
    if fname == "purn" and lname == "vasu":
}