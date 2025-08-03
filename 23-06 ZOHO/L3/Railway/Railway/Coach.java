package Railway;

import java.util.ArrayList;


public class Coach {
    ArrayList<Cabin> cabins = new ArrayList<>();

    private String coachNumber;
    private int totalCabins;

    private int seatNumber;

    public Coach(){
        this.seatNumber = 1;
        this.totalCabins = 0;
    }

    public void addCabin(){
        Cabin cabin = new Cabin(seatNumber);
        seatNumber += 8;
        cabins.add(cabin);
        this.totalCabins++;
    }
    public void removeCabin(){

    }

    public void displayCoach(){
        for(Cabin cabin : cabins){
            cabin.displayCabin();
        }
        System.out.println();
    }

    public Berth searchCabin(){
        Berth berth =  null;
        for(Cabin cabin : cabins){
            if(!cabin.isCabinFull()){
                berth = cabin.searchBerth();
                if (berth != null) return berth;
            }
        }
        return null;
    }

    public Berth searchSpecialCabin(){
        Berth lbBerth =  null;
        for(Cabin cabin : cabins){
            if(!cabin.isCabinFull()){
                lbBerth = cabin.searchSpecialBerth();
                if (lbBerth != null) return lbBerth;
            }
        }

        Berth anyBerth = null;
        for(Cabin cabin : cabins){
            anyBerth = cabin.searchAny();
            if (anyBerth != null) {
                return anyBerth;
            }
        }

        return null;
    }

    public ArrayList<Cabin> getCabins() {
        return this.cabins;
    }

    public void setCabins(ArrayList<Cabin> cabins) {
        this.cabins = cabins;
    }

    public String getCoachNumber() {
        return this.coachNumber;
    }

    public void setCoachNumber(String coachNumber) {
        this.coachNumber = coachNumber;
    }

    public int getTotalCabins() {
        return this.totalCabins;
    }

    public void setTotalCabins(int totalCabins) {
        this.totalCabins = totalCabins;
    }

    public int getSeatNumber() {
        return this.seatNumber;
    }

    public void setSeatNumber(int seatNumber) {
        this.seatNumber = seatNumber;
    }




}
