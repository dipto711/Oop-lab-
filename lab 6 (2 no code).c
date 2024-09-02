public class Employee {
    private String name;
    private String id;
    private double salary;
    private String designation;


    public Employee(String name, String id, double salary, String designation) {
        this.name = name;
        this.id = id;
        this.salary = salary;
        this.designation = designation;
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }


    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public double getSalary() {
        return salary;
    }

    public void setSalary(double salary) {
        if (salary < 0) {
            throw new IllegalArgumentException("Salary cannot be negative");
        }
        this.salary = salary;
    }


    public String getDesignation() {
        return designation;
    }

    public void setDesignation(String designation) {
        this.designation = designation;
    }

    @Override
    public String toString() {
        return String.format("Name: %s, ID: %s, Salary: %.2f, Designation: %s", name, id, salary, designation);
    }

    public static void main(String[] args) {

        Employee employee = new Employee("Dipto", "222014077", 50000.00, "Software Engineer");
        System.out.println(employee);


        employee.setSalary(55000.00);
        System.out.println("Updated Salary: " + employee.getSalary());
    }
}
