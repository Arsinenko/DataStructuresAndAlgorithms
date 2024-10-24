namespace queues;

abstract class Program
{
    static void Display(Queue<int> queue)
    {
        foreach (var variable in queue)
        {
            Console.WriteLine(variable);
        }
    }
    static void Main(string[] args)
    {
        Queue<int> queue = new Queue<int>();
        
        queue.Enqueue(1);
        queue.Enqueue(2);
        queue.Enqueue(3);
        Display(queue);
        
        queue.Dequeue();
        Console.WriteLine(queue.Peek());
        
        
        queue.Clear();
        Console.WriteLine(queue.Count);
    }
}