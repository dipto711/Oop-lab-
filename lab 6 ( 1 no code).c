public class Person {
    private String name;
    private int age;
    private String gender;
    private String address;


    public Person(String name, int age, String gender, String address) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.address = address;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }


    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        if (age < 0) {
            throw new IllegalArgumentException("Age cannot be negative");
        }
        this.age = age;
    }


    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        if (!gender.equals("Male") && !gender.equals("Female") && !gender.equals("Other")) {
            throw new IllegalArgumentException("Gender must be 'Male', 'Female', or 'Other'");
        }
        this.gender = gender;
    }

    public String getAddress() {
        return address;
    }

    public void setAddress(String address) {
        this.address = address;
    }

    @Override
    public String toString() {
        return String.format("Name: %s, Age: %d, Gender: %s, Address: %s", name, age, gender, address);
    }

    public static void main(String[] args) {

        Person person = new Person("Dipto", 30, "Male", "Dhaka");
        System.out.println(person);


        person.setAge(31);
        System.out.println("Updated Age: " + person.getAge());
    }
}
