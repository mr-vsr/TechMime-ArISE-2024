def ride_service(services, search):
    for service in services:
        if service.lower() == search.lower():
            return service
    return "Service not found"

ride = ride_service(ride_options, ride_options[3]);
ride_options = [, "Lyft", "Ola", "Rapido", "Uber", "Namma Yatri", "Blu Cab Services"]
print(ride);
