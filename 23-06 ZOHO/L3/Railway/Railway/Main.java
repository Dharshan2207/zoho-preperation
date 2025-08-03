package Railway;

public class Main {
    public static void main(String[] args) {

        TrainSystem irctc = new TrainSystem();

        Coach coach1 = new Coach();
        Train train = new Train("Pandiyan express", 3983, "Chennai", "Madurai");
        train.addCoach(coach1);

        coach1.addCabin();
        coach1.addCabin();
        coach1.addCabin();
        coach1.addCabin();
        coach1.addCabin();

        Coach coach2 = new Coach();
        train.addCoach(coach2);

        coach2.addCabin();
        coach2.addCabin();
        coach2.addCabin();
        coach2.addCabin();

        train.displayAllCoaches();
        irctc.addTrain(train);


        Passenger p1 = new Passenger("Alice", 20);
        Passenger p2 = new Passenger("Bob", 4);
        Passenger p3 = new Passenger("Charlie", 30);
        Passenger p4 = new Passenger("David",78);
        Passenger p5 = new Passenger("Emilio",64);

        irctc.bookTickets(p1, p2, p3, p4, train);
        irctc.bookTickets(p5, train);


        train.displayAllCoaches();

    }
}
