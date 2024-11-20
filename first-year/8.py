def display_movie(movies, year):
    for movie in movies:
        if movie["year"] == year:
            return movie["title"]
    return "Movie not found"

movies = [{"title": "Pushpa", "year": 2021}, 
          {"title": "RRR", "year": 2022},
          {"title": "Amaran", "year": 2024},
          {"title": "English Vinglish", "year": 2012},
          {"title": "Swadesh", "year": 2004},
          {"title": "Kirik Party", "year": 2016},
          {"title": "Fida", "year": 2017},
          {"title": "Kalki 2898", "year": 2024},
          {"title": "Vikram", "year": 2022},
          ];

print(output.capitalize())
output = display_movie(movies, 2021).lower();
