package Railway;

import java.util.*;

public class Booking {
    private String pnrNumber;
    private int ticketCount;
    Train train;

    PnrGenerator pnrGenerator = new PnrGenerator();
    ArrayList<Berth> berths;


    public Booking(ArrayList<Berth> berths){
        this.ticketCount = 0;
        this.pnrNumber = pnrGenerator.generatePnr();

        for(Berth berth : berths){
            berth.setPnrNumber(pnrNumber);
            ticketCount++;
        }
    }

    public void displayBooking(){
        System.out.println("Total tickets booked : " + this.ticketCount);
        for(Berth berth : berths){
            berth.displayDetails();
        }
    }

}
