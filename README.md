# Quarillax

Quarilo (**AKA** Quarillax) is an extensible search engine that implements a search algorithm, A Bump algorithm, And
Much more.

Quarilo also contains rich support for discord.js, A Discord bot gateway for queries (and/or) querying, all of it in
C++, Python, SalamanderML, And JavaScript.

## QuariloPI

The QuariloPI is an interface for requesting items from the Quarilo WebServers.

Thanks to netlify, We're proudly able to host the objects sent and recieved from Quarillax.

## Origin

Quarillax Derives from the base words,
> *query*
>
> *reel*
>
> *ask*

### Query

Query objects.

### Reel

Reel in objects using QuarriloPI

### Ask

Ask for requests & Ask to send requests.

## Quarilo Fantasy

The Quarilo team are heavy believers in Free software and 100% support the FSF (Free Software
Foundation https://fsf.org)

Quarillax Is 100% Open sourced Including CLion .IDEA, CMakeLists.txt, AND C Makefiles.

If you enjoy this project, Consider a star. Not needed.

## Resources

- CLion
- https://www.w3schools.com/
- https://www.gnu.org

# Examples

```c++
#include <quarilo/quarilo.h>



int main() 
{
	/*
	 * Initializes a query with no arguments
	 */
	
	Quarilo::Query<std::string> query;
	query.additems("Hello World!");
	query.additems("Goodbye World!");
	cout << query.get("Hello") // Returns Hello World!
	std::cout << query.get("Goodbye") << std::endl; // Returns Goodbye World!
	
}
```