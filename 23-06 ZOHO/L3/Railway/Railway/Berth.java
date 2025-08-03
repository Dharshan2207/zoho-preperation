package Railway;

public class Berth {
    private String type;
    private int number;
    private boolean available;
    public Passenger passenger;
    private String pnrNumber;

    public Berth(String type, int number){
        this.type = type;
        this.number = number;
        this.available = true;
    }

    public void displayDetails() {
        String pnrStr = available ? "--------" : String.valueOf(pnrNumber);
        String nameStr = available ? "----" : passenger.getUserName();
        String ageStr = available ? "----" : String.valueOf(passenger.getAge());
        String statusStr = available ? "AVL" : "Not AVL";

        System.out.printf(" %-12s %-8s %-8s %-10s %-8s %-4s\n",
            pnrStr, number, type, statusStr, nameStr, ageStr);
    }
    public boolean isAvalable(){
        return available;
    }


    public String getType() {
        return this.type;
    }

    public void setType(String type) {
        this.type = type;
    }

    public int getNumber() {
        return this.number;
    }

    public void setNumber(int number) {
        this.number = number;
    }

    public boolean isAvailable() {
        return this.available;
    }

    public boolean getAvailable() {
        return this.available;
    }

    public void setAvailable(boolean available) {
        this.available = available;
    }

    public Passenger getPassenger() {
        return this.passenger;
    }

    public void setPassenger(Passenger passenger) {
        this.passenger = passenger;
    }

    public String getPnrNumber() {
        return this.pnrNumber;
    }

    public void setPnrNumber(String pnrNumber) {
        this.pnrNumber = pnrNumber;
    }

}
