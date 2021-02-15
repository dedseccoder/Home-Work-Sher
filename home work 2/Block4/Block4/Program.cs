using System;

namespace Block4
{
	class Program
	{
		static void Main(string[] args)
		{
			double F;
			Console.Write("Введите х: ");
			var x = Convert.ToInt32(Console.ReadLine());
			if(x < 0)
			{
				F = Math.Pow(3 * x, 2) + 2 * x - 1;
			}
			else
			{
				Console.Write("Введите a: ");
				var a = Convert.ToInt32(Console.ReadLine());
				F = a * x - 3;
			}
			Console.WriteLine("F(x) = " + F);
			Console.ReadLine();
		}
	}
}
