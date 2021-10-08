class Program
{
	static void Main(string[] args)
	{
		//declarando as variaveis 
		Estudante[] vect = new Estudante[10];

		Console.WriteLine("Quantos quartos serão alugados");
		int n = int.Parce(Console.ReadLine());

		//atributos 
		for (int i = 1; i <= n; i++)
		{
			Console.WriteLine();
			Console.WriteLine($"Hospede #{i}");
			Console.WriteLine("Nome");
			string nome = Console.ReadLine();
			Console.WriteLine("Email");
			string email = Console.ReadLine();
			Console.WriteLine("Quarto:");
			int quarto = int.Parse(Console.ReadLine());
			vect[quarto] = new Estudante(nome, email);

		}

		Console.WriteLine();
		Console.WriteLine("Quartos ocupados: ");

		for (int i = 0; i < 10; i++)
		{
			if (vect[i] != null)
			{
				Console.WritwLine(i + ": + vect[i}");
			}
		}
	}
};

