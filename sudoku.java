import java.util.Scanner;

public class sudoku {
	static int sudoku[][] = new int[9][9];
	
	public static void main(String arg[]) {
		Scanner sc = new Scanner(System.in);

		String nums;
		int sum = 0;

		for (int n = 0; n < 50; n++) {
			nums = sc.next();
			nums = sc.next();
			for (int i = 0; i < 9; i++) {
				nums = sc.next();
				for (int j = 0; j < 9; j++)
					sudoku[i][j] = Integer.parseInt(nums.charAt(j) + "");
			}

			solveit();

			nums = "";
			for (int j = 0; j < 3; j++)
				nums += sudoku[0][j];

			sum += Integer.parseInt(nums);
		}
		System.out.println(sum);
	}

	public static boolean checker(int n, int nRow, int nCol)
	{	
		for(int i = 0; i < 9; i++)
			if(sudoku[nRow][i] == n)
				return false;
		
		for(int i = 0; i < 9; i++)
			if(sudoku[i][nCol] == n)
				return false;
		
		int bRow = nRow - (nRow % 3);
		int bCol = nCol - (nCol % 3);
		
		for(int i = bRow; i < bRow + 3; i++)
			for(int j = bCol; j < bCol + 3; j++)
				if(sudoku[i][j] == n)
					return false;
				
		return true;
	}
	
	public static int[] pos()
	{
		int loc[] = new int[2];
		
		loc[0] = -1;
		loc[1] = -1;
		
		for(int i = 0; i < 9; i++)
			for(int j = 0; j < 9; j++)
				if(sudoku[i][j] == 0){
					loc[0] = i;
					loc[1] = j;
					return loc;
				}
		
		return loc;
	}
	
	public static boolean solveit()
	{
		int pos[] = pos();
		
		if(pos[0] ==  -1  && pos[1] == -1)
			return true;
		
		for(int i = 1; i <=9; i++)
		{
			if(checker(i,pos[0],pos[1]))
			{
				sudoku[pos[0]][pos[1]] = i;
				if(solveit())
					return true;
				sudoku[pos[0]][pos[1]] = 0;
			}
		}
		return false;
	}
}
