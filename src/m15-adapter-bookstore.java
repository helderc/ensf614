// Our own domain class
// Note: Java 16+ 
// A record is a special kind of immutable data class
// Ref: https://docs.oracle.com/en/java/javase/17/language/records.html
record Book(String isbn, String title, String author, double price) {}

// Target: what the bookstore app expects
interface BookCatalog {
    Book findByIsbn(String isbn);
}

// Adaptee: the publisher's system (can't modify)
class PublisherApi {
    // returns "title;author;priceInCents", or null if not found
    public String fetchRecord(String code) {
        if (code.equals("9780132350884")) 
            return "Clean Code;Robert C. Martin;3999";
        return null;
    }
}

// Adapter: converts the publisher's format into our Book
class PublisherCatalogAdapter implements BookCatalog {
    private final PublisherApi api;

    public PublisherCatalogAdapter(PublisherApi api) {
        this.api = api;
    }

    @Override
    public Book findByIsbn(String isbn) {
        String raw = api.fetchRecord(isbn);
        if (raw == null) 
            return null;

        String[] parts = raw.split(";");
        double price = Integer.parseInt(parts[2]) / 100.0;   // cents -> dollars
        return new Book(isbn, parts[0], parts[1], price);
    }
}

// Client: only knows BookCatalog
// class BookstoreApp...
// for running purposes it must be:
class Main {
    public static void main(String[] args) {
        BookCatalog catalog = new PublisherCatalogAdapter(new PublisherApi());

        Book b = catalog.findByIsbn("9780132350884");
        System.out.println(b.title() + " by " + b.author() + " - $" + b.price());
        // Clean Code by Robert C. Martin - $39.99
    }
}