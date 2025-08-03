package Railway;


public class Passenger{
    private String userName;
    private int age;

    public Passenger(String userName, int age){
        this.userName = userName;
        this.age = age;
    }


    public String getUserName() {
        return this.userName;
    }

    public void setUserName(String userName) {
        this.userName = userName;
    }

    public int getAge() {
        return this.age;
    }

    public void setAge(int age) {
        this.age = age;
    }


}