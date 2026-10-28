
interface Car {
    void drive();
}

interface Bike {
    void ride();
}

// Abstract Factory
interface VehicleFactory {
    Car createCar();
    Bike createBike();
}

// Concrete Factory 1
class StandardFactory implements VehicleFactory {
    public Car createCar() {
        return () -> System.out.println("Standard car");
    }

    public Bike createBike() {
        return () -> System.out.println("Standard bike");
    }
}

// Concrete Factory 2
class LuxuryFactory implements VehicleFactory {
    public Car createCar() {
        return () -> System.out.println("Luxury car");
    }

    public Bike createBike() {
        return () -> System.out.println("Luxury bike");
    }
}

// Client
public class Main {
    public static void main(String[] args) {
        VehicleFactory factory = new StandardFactory();

        Car car = factory.createCar();
        Bike bike = factory.createBike();

        car.drive();
        bike.ride();
    }
}
