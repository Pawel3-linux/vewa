typedef bool isNonNull;
namespace vewa
{
	class Window
	{
		private:
			HWND hwnd;

		public:
			isNonNull create(char * className, char * windowName, DWORD dwStyle, int x, int y, int width, int height, HWND parent, HMENU menu, HISNTANCE instance, LPVOID lpParam)
			{
				hwnd = CreateWindow();
				if (!hwnd)
					return false;
				else
					return true;
			}
	}
};
