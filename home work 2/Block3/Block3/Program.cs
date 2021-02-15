using System;

namespace Block3
{
	class Program
	{
		static void Main(string[] args)
		{
			Console.Write("Введите значение а: ");
			var a = Convert.ToInt32(Console.ReadLine());
			Console.Write("Введите значение b: ");
			var b = Convert.ToInt32(Console.ReadLine());

			var x = (Math.Pow(Math.Sin(a), 3) - Math.Pow(Math.Tan(b), 2)) - (Math.Log(Math.Abs(a - b), Math.E));
			var y = Math.Log(Math.Abs(3 * a * b), Math.E) - ((2 * b) / 5) + (3 * Math.Cos(Math.PI * a));

			Console.WriteLine("x = " + x + "\n y = " + y);
			Console.ReadLine();
		}
	}
}
