
interface Notification {
    void send(String message);
}

// Concrete Component
class EmailNotification implements Notification {
    @Override
    public void send(String message) {
        System.out.println("Sending EMAIL: " + message);
    }
}

// Base Decorator
abstract class NotificationDecorator implements Notification {
    protected final Notification notification;

    public NotificationDecorator(Notification notification) {
        this.notification = notification;
    }
}

// Concrete Decorator
class SMSDecorator extends NotificationDecorator {

    public SMSDecorator(Notification notification) {
        super(notification);
    }

    @Override
    public void send(String message) {
        notification.send(message);
        System.out.println("Sending SMS: " + message);
    }
}

// Concrete Decorator
class LoggingDecorator extends NotificationDecorator {

    public LoggingDecorator(Notification notification) {
        super(notification);
    }

    @Override
    public void send(String message) {
        System.out.println("LOG: Notification requested");
        notification.send(message);
    }
}

// Client
public class Main {
    public static void main(String[] args) {

        Notification notification =
                new EmailNotification();

        notification = new SMSDecorator(notification);
        notification = new LoggingDecorator(notification);

        notification.send("Your order has shipped!");
    }
}
