#include "Serializer.hpp"

int	main(void)
{
	Data	data;
    data.a = 55;
	uintptr_t	serializedPointerAsInt = Serializer::serialize(&data);
	Data *		deserializedPointer = Serializer::deserialize(serializedPointerAsInt);
	
	if (deserializedPointer == &data)
		std::cout << "Successful serialization and deserialization."
			<< std::endl << std::endl;
	else
		std::cout << "Failed serialization and deserialization: "
			<< std::endl << std::endl;
	std::cout << "Original " << "Data structure stored at address [" << &data << "]"
		<< "\n\t- value : " << data.a << std::endl;
	std::cout << "Pointer to data structure serialized as int: "
		<< serializedPointerAsInt << std::endl << std::endl;
	std::cout << "Deserialized " << "Data structure stored at address [" << &deserializedPointer << "]"
		<< "\n\t- value : " << deserializedPointer->a << std::endl;
	return (0);
}