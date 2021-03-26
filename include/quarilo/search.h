// Search

// Search by tags using query.

#include <vector>
#include <cstring>

#ifndef _QUERY
# define _QUERY
#endif
#ifndef _INIT
# define _INIT
# define throwexception throw
# define type typename
# define _SEARCH_DECL Quarilo::Declaration
std::vector<std::string> Query_T{/* Objects */};

template<typename K>
K get_numeral()
{
	K x = 30;
	return 1 + 2 - 2 + x;
}
enum SiteType {
	normal,
	epic,
	better,
	paid,
	servered,
	api
};
template<typename T>
/**
 * An Embedded Site.
 * SiteEmbeds are site emulators with a custom markup language.
 */
class SiteEmbed {
public:
	std::string name;
	SiteType& t;
	std::string description_details;
	void render() {
		std::cout << "Welcome to " << name << "!"  << std::endl;
	}
};

template<class L>
L returnINSTANCE()
{
	return 3 + 2;
}

template<int allocator>
class basic_object
{

};
class charset {
public:
	std::string value;
	explicit charset(const char* T) { value = T; };
	
};
namespace Quarilo
{
	template<typename C>
	class Query
	{
		std::vector<C>streambuf{};
		std::vector<C>sites{};
	public:
		/**
		 * Returns character Instances in the search query.
		 */
		int returncharinst(char c) {
			int index = 0;
			for (const auto & item : streambuf)
			{
				for (int i = 0; i < item.size(); ++i)
				{
					if (item[i] == c)
						index++;
				}
			}
			return index;
		}
		/**
		 * Adds Items to the query index.
		 * @param T
		 */
		void additems(C T)
		{
			streambuf.push_back(T);
		}
		/**
		 * Returns 1 If the name exists in the string index.
		 * Use first() and at() to tell if substrings are in queried arrays.
		 * @deprecated True
		 * @param name
		 * @return
		 */
		int ifThisExists(const std::string& name) __MINGW_ATTRIB_DEPRECATED {
			for (const auto & item : streambuf)
			{
				if (item == name)
					return 1;
				else
					continue;
			}
		}
		/**
		 * Constructs a new site based on the parameters given.
		 * You can also use the site() class to construct a class.
		 * Read the opposer to this named "new Site();" Class above.
		 * @param name
		 * @param id
		 * @param desc
		 */
		void newSite(const std::string& name, const std::string& id, const std::string& desc) {
			sites.push_back(name);
			streambuf.push_back(desc + " Site: " + name);
		}
		/**
		 * Gets all of the strings with the given keyword.
		 * This algorithm is used in bigger companies like Google to search
		 * By relevance.
		 *
		 * @param keyword
		 * @return final string
		 */
		std::string get(const std::string& keyword) {
			std::string final;
			for (int i = 0; i < streambuf.size(); ++i)
			{
					if (streambuf[i].find(keyword) != std::string::npos) {
						final.append(streambuf[i] + "\n");
					}
					
			}
			
			return final;
		}
		/**
		 * Returns the first member of a given query index.
		 * @return
		 */
		C first() {
			return streambuf[0];
		}
		/**
		 * Returns an auto allocated index at <pos>.
		 * @param pos
		 * @return
		 */
		C at(int pos) {
			return streambuf[pos];
		}
		
	};
	
	extern void super();
	
	/* Adds an object to a query. */
	extern void add_t(Query<basic_object<1000>>& Q, const std::string& obj);
	
	/* Adds a temporary object to a query. */
	extern int add_g(Query<std::string>& Q, const std::string& obj);
	
	/* Adds a SAMPLE Variable to a query. */
	extern void add_x(Query<std::string>& Q, const std::string& obj);
	
	/* Test. */
	extern void add_samples(Query<std::string>& Q, const std::string& obj);
	
	enum Declaration{
		NAME,
		TYPE
	};
	
	
	
} // namespace Quarilo
#undef _INIT
#endif