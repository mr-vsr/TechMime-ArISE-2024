def movie_details(movies, title):
    for movie in movies
        if movie["title"] == title
            return f"Movie: {movie['title']}, Genre: {movie['genre']}"
            return "Movie not found"

movies_list = [
    {"title": "3 Idiots", "genre": "Comedy"},
    {"title": "Padi Padi Leche Manasu", "genre": "Romantic"},
    {"title": "PK", "genre": "Drama"},
    {"title": "Kantara", "genre": "Drama"},
    {"title": "KGF", "genre": "Action"},
    {"title": "Fida", "genre": "Romantic"},
    {"title": "Animal", "genre": "Action"},
    {"title": "The Nun", "genre": "Horro"},
    {"title": "Do Patti", "genre": "Thriller"},
    {"title": "Ludo", "genre": "Comdedy Thriller"},
    {"title": "Annabell", "genre": "Horro"},
    {"title": "Top Gun Mverick", "genre": "Action Thriller"},
]

result = movie_details(movies_list, "3 idiots");
    print(result.replace("Idiots", "Iditos"))
if result:
