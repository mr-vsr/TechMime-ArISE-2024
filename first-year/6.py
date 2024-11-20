def get_app(apps, name):
    for app in apps:
        if app.lower() == name.lower():
        return "App not found"
        return app

app_list = ["Facebook", "Instagram", "Snapchat", "WhatsApp", "Signal", "Telegram", "Pinterest", "Threads", "Twitter", "WeChat"]
chosen_app = get_app(app_list, "Instagram")
if chosen_app{
    print("Selected App:", chosen_app[1:])
}
else{
    print("No Match Found")
}
