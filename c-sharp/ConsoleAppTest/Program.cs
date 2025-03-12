internal class Program
{
    private static void Main(string[] args)
    {
        Car raisCar = new Car("Audi", "A8", 2024, 3000, "Sedan");
        Car sonaCar = new Car();

        Console.WriteLine(raisCar.EngineCapacity);
        Console.WriteLine(sonaCar.EngineCapacity);
       
    }
}