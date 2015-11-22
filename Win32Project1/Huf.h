#ifdef HUF_EXPORTS
#define HUF_API __declspec(dllexport) 
#else
#define HUF_API __declspec(dllimport) 
#endif

#include <stdio.h>
#include <stdlib.h>

namespace Huf
{
	#define VERBOSE // If defined, prints verbose program progress when it's running...

	

	class HufAlg
	{
	private:
		unsigned short generate_code_table();
		void build_code_tree();
		void build_initial_heap();
		void compress_image();
		void compression_report();
		void get_frequency_count();
		void reheap();
		void build_decomp_tree();
		void decompress_image();
	public:
		HufAlg(void);
		HUF_API void Compress(int count, char *args[]);
		HUF_API void Decompress(int count, char *args[]);
	};
}