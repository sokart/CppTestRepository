#pragma once

template <typename T>
class MyVectorTemplate
{
	public:
		/*MyVectorTemplate();
		~MyVectorTemplate();*/
		T var;
		void someOperation(T arg) {
			cout << "---> " << arg << "\n";
		}
};

