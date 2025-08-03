package Railway;

import java.util.*;

public class Train {
    ArrayList<Coach> coaches = new ArrayList<>();
    ArrayList<Booking> bookings = new ArrayList<>();
    private String trainName;
    private long trainNumber;

    private int totalCoachesAvailable;

    private String from;
    private String to;

    public Train(String trainName, long trainNumber, String from, String to){
        this.totalCoachesAvailable = 0;
        this.trainName = trainName;
        this.trainNumber = trainNumber;
        this.from = from;
        this.to = to;
    }
    public void addCoach(Coach coach){
        this.coaches.add(coach);
        coach.setCoachNumber("S" + (totalCoachesAvailable + 1));
        totalCoachesAvailable++;
    }

    public void displayAllCoaches(){
        System.out.println("   PNR  " + " Number   " + "Berth   " +"Available?  " +"Name    " + "Age");

        for(Coach coach : coaches){
            System.out.println("-----------------------" + coach.getCoachNumber() + "-----------------------");
            System.out.println();
            coach.displayCoach();
            System.out.println();
        }
    }

    public Berth searchSeats(){
        Berth berth = null;
        for(Coach coach : coaches){
            berth = coach.searchCabin();
            if (berth != null) return berth;
        }
        return null;
    }

    public Berth searchSpecialSeats(){
        Berth berth = null;
        for(Coach coach : coaches){
            berth = coach.searchSpecialCabin();
            if (berth != null) return berth;
        }
        return null;
    }
    
    public void displayTrain(){
        System.out.println("Train name : " + this.trainName);
        System.out.println("Train Number : " + this.trainNumber);
        System.out.println("Total coaches available : " + this.totalCoachesAvailable);
        System.out.println(this.from + " --> " + this.to);
    }



}
