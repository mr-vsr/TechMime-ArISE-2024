def ride_service(services, search):
    for service in services:
        if service.lower() == search.lower():
            return service
    return "Service not found"

ride = ride_service(ride_options, "UBER")
ride_options = ["Uber", "Lyft", "Ola", "Rapido", "Namma Yatri", "Blu Cab Services"]
print(ride);
