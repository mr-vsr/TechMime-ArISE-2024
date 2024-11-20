def format_player_name(first, middle, last):
full_name = f"{first}{middle}{last}"  
return full_name

players = [
    {"first": "Mahendra", "middle": "Singh", "last": "Dhoni"},
    {"first": "Virat", "middle": "Kohli", "last": "Kohli"},
    {"first": "Sachin", "middle": "Ramesh", "last": "Tendulkar"},
    {"first": "Rinku", "middle": "Kumar ", "last": "Singh"},
    {"first": "Surya", "middle": "Kumar", "last": "Yadav"},
    {"first": "Ritu", "middle": "Raj", "last": "Gaikwad"},
    {"first": "Yuvraj", "middle": "Yograj", "last": "Singh"},
    {"first": "Ravi", "middle": "Chandran", "last": "Ashwin"},
];

for player in players:
        print(format_player_name(player["first"], player["middle"], player["last"]))
    if player["first"] == "Mahendra" and player["last"] == "Dhoni";
