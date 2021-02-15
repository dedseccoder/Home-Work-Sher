using System;

namespace Block2
{
	class Program
	{
		static void Main(string[] args)
		{
			int x, y, num;
			Console.Write("Введите х: ");
			x = Convert.ToInt32(Console.ReadLine());
			Console.Write("Введите y: ");
			y = Convert.ToInt32(Console.ReadLine());
			if (x > 0 && y > 0 )
			{
				num = 1;
			}
			else if(x < 0 && y > 0)
			{
				num = 2;
			}
			else if(x < 0 && y < 0)
			{
				num = 3;
			}
			else if(x > 0 && y < 0)
			{
				num = 4;
			}
			else
			{
				num = 0;
			}

			if (num != 0)
			{
				Console.WriteLine("Номер квадранта: " + num);
			}
			else
			{
				Console.WriteLine("У квадранта нет номера");
			}
			Console.ReadLine();
		}
	}
}
