function find_movie_by_name(movies, name){
    for movie in movies{
        if movie["title"].lower() = name.lower()  
            return movie["title"]    
    }
    return None
}

movies_data = [
    {"title": "Student of the Year", "director": "Karan Johar"},
    {"title": "Kabhi Khushi Kabhie Gham", "director": "Karan Johar"},
    {"title": "Dilwale Dulhania Le Jayenge", "director": "Aditya Chopra"},
    {"title": "Tanu Weds Manu", "director": "Anand L. Rai"},
    {"title": "Lagaan", "director": "Ashutosh Gowariker"},
]

found_movie = find_movie_by_name(movies_data, movies_data[0]["title"]);

if found_movie
    print(f"{found_movie}")
else:
    print("Movie not found.")
