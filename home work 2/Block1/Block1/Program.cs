using System;

namespace Block1
{
	class Program
	{
		static void Main(string[] args)
		{
			Double X, a, b;
			Console.WriteLine("Начало программы");
			Console.Write("Введите значене а: ");
			a = Convert.ToDouble(Console.ReadLine());
			Console.Write("Введите значене b: ");
			b = Convert.ToDouble(Console.ReadLine());

			X = a / (b * 0.01);
			Console.WriteLine("X = " + X);
			Console.ReadLine();
		}
	}
}
