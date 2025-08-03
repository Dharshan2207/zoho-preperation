package Railway;

import java.util.ArrayList;

public class TrainSystem {
    ArrayList<Passenger> passengers = new ArrayList<>();
    Train[] trains = new Train[2];
    ArrayList<Booking> bookings = new ArrayList<>();


    public int trainsAvailable = 0;

    public void addTrain(Train train){
        trains[trainsAvailable] = train;
        trainsAvailable++;
    }


    public void searchAndBook(Train train, ArrayList<Berth> berths, Passenger p){
        Berth berth;
        if(p.getAge() >= 50){
            berth = train.searchSpecialSeats();
        }
        else{
            berth = train.searchSeats();
        }

        if(berth == null){
            System.out.println("No seats available now");
        }
        else{
            System.out.println(berth.getNumber() + " " + berth.getType() + " booked for " + p.getUserName());
            berth.setAvailable(false);
            berth.passenger = p;
            berths.add(berth);
        } 
    }

    public void bookTickets(Passenger p1, Train train){
        ArrayList<Berth> berths = new ArrayList<>();
        if(p1.getAge() >= 5){
            System.out.println("Child cannot travel alone.");
        }
        else{
             searchAndBook(train, berths, p1);
        }

        Booking booking = new Booking(berths);
        bookings.add(booking);
    }
    public void bookTickets(Passenger p1, Passenger p2, Train train){
        ArrayList<Berth> berths = new ArrayList<>();
        if(p1.getAge() >= 5){
            searchAndBook(train, berths, p1);
        }
        if(p2.getAge() >= 5){
            searchAndBook(train, berths, p2);
        }

        
        Booking booking = new Booking(berths);
        bookings.add(booking);
    }
    public void bookTickets(Passenger p1, Passenger p2, Passenger p3, Train train){
        ArrayList<Berth> berths = new ArrayList<>();
        if(p1.getAge() >= 5){
            searchAndBook(train, berths, p1);
        }
        if(p2.getAge() >= 5){
            searchAndBook(train, berths, p2);
        }
        if(p3.getAge() >= 5){
            searchAndBook(train, berths, p3);
        }

        
        Booking booking = new Booking(berths);
        bookings.add(booking);

    }
    public void bookTickets(Passenger p1, Passenger p2, Passenger p3, Passenger p4, Train train){
        ArrayList<Berth> berths = new ArrayList<>();
        if(p1.getAge() >= 5){
            searchAndBook(train, berths, p1);
        }
        if(p2.getAge() >= 5){
            searchAndBook(train, berths, p2);
        }
        if(p3.getAge() >= 5){
            searchAndBook(train, berths, p3);
        }
        if(p4.getAge() >= 5){
            searchAndBook(train, berths, p4);
        }


        
        Booking booking = new Booking(berths);
        bookings.add(booking);

    }
    public void cancelTickets(){

    }

    public void displayAllBookings(){

    }
}
