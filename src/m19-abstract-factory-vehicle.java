
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

// Concrete Products: Standard family
class StandardCar implements Car {
    public void drive() {
        System.out.println("Driving a standard car.");
    }
}

class StandardBike implements Bike {
    public void ride() {
        System.out.println("Riding a standard bike.");
    }
}

// Concrete Products: Luxury family
class LuxuryCar implements Car {
    public void drive() {
        System.out.println("Driving a luxury car.");
    }
}

class LuxuryBike implements Bike {
    public void ride() {
        System.out.println("Riding a luxury bike.");
    }
}

// Concrete Factory: Standard family
class StandardFactory implements VehicleFactory {
    public Car createCar() {
        return new StandardCar();
    }

    public Bike createBike() {
        return new StandardBike();
    }
}

// Concrete Factory: Luxury family
class LuxuryFactory implements VehicleFactory {
    public Car createCar() {
        return new LuxuryCar();
    }

    public Bike createBike() {
        return new LuxuryBike();
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
