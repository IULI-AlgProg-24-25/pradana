// Class is the template of an object
// Object is the instantiation of a class
// Class has: data/field and behavior/action/function/method
public class Car
{
    // data/fields
    private string _brand;
    private string _model;
    private int _year;
    private int _engineCapacity;
    private string _bodyType;

    //properties
    public string Brand
    {
        set { _brand = value; }
        get { return _brand; }
    }

    public string Model
    {
        set { _model = value; }
        get { return _model; }
    }

    public int EngineCapacity
    {
        set { _engineCapacity = value; }
        get { return _engineCapacity; }
    }

    public string BodyType
    {
        set { _bodyType = value; }
        get { return _bodyType; }
    }

    public int Year
    {
        set { _year = value; }
        get { return _year; }
    }

    // constructor
    public Car(string brand, string model, int year, int engineCapacity, string bodyType)
    {
        _brand = brand;
        _model = model;
        _year = year;
        _engineCapacity = engineCapacity;
        _bodyType = bodyType;
    }

    public Car()
    {
        
    }


    // behaviors/functions
    public string Drive(bool isReverse)
    {
        if (isReverse)
        {
            return "Car starts reversing...";
        }
        else
        {
            return "Car starts moving forward...";
        }
    }

    public string Brake()
    {
        return "Car is slowing down...";
    }    

    public string Turn(string direction)
    {
        return $"Car is turning {direction}";
    }
}