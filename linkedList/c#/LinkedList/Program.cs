internal class Program
{
    static void PrintList(LinkedList<int> list)
    {
        foreach (var VARIABLE in list)
        {
            Console.Write($"{VARIABLE} -> ");
        }
        Console.Write("NULL");
    }  
    public static void Main(string[] args)
    {
        var numbers = new LinkedList<int>();
        //add element 
        numbers.AddLast(10);
        numbers.AddLast(15);
        numbers.AddLast(25);
        numbers.AddFirst(1);
        
        //remove elements
        numbers.RemoveFirst();
        numbers.RemoveLast();
        
        
        
        PrintList(numbers);
        
        
        
        
    }
}