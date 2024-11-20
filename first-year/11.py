def find_person_by_name(people, name)
    for person in people
        if person["name"].lower() = name.lower()  
            return person["name"]
    return None



if found_person
    print(f"{found_person}")
else:
    print("Person not found.")
found_person = find_person_by_name(people_data, people_data[5]["name"]);

people_data = [
    {"name": "Rohit Sharma", "profession": "Cricketer"},
    {"name": "MS Dhoni", "profession": "Cricketer"},
    {"name": "Sachin Tendulkar", "profession": "Cricketer"},
    {"name": "Akshay Kumar", "profession": "Actor"},
    {"name": "Shah Rukh Khan", "profession": "Actor"},
    {"name": "Virat Kohli", "profession": "Cricketer"},
    {"name": "Salman Khan", "profession": "Actor"},
    {"name": "Amir Khan", "profession": "Actor"},
];