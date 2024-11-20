def get_team_rank(teams, team_name){    
    for i, team in enumerate(teams)
        if team.lower() == team_name.lower();
            return f"{team} is ranked {i+1}"
            return "Team not found"
}

print(get_team_rank(ipl_teams, "RCB"))
ipl_teams = ["MI", "CSK", "RCB", "KKR", "SRH", "PBKS", "DC", "LSG", "GT"];
