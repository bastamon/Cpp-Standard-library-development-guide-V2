#include <iostream>
#include <limits>
using namespace std;
void main()
{
//denorm_min
	cout<<"The smallest nonzero denormalized value(float). "<<"object is: "<<numeric_limits<float>::denorm_min()<<endl;
	cout<<"The smallest nonzero denormalized value(float). "<<"object is: "<<numeric_limits<int>::denorm_min()<<endl;
	cout<<"The smallest nonzero denormalized value(float). "<<"object is: "<<numeric_limits<double>::denorm_min()<<endl;
	//舍入为零
	cout<<"The smallest nonzero denormalized value(float). "<<"object is: "<<numeric_limits<float>::denorm_min()/2<<endl;
	cout<<"The smallest nonzero denormalized value(float). "<<"object is: "<<numeric_limits<int>::denorm_min()/2<<endl;
	cout<<"The smallest nonzero denormalized value(float). "<<"object is: "<<numeric_limits<double>::denorm_min()/2<<endl;
//digits
	cout<<"digits(float): "<<numeric_limits<float>::digits<<endl;
	cout<<"digits(double): "<<numeric_limits<double>::digits<<endl;
	cout<<"digits(int): "<<numeric_limits<int>::digits<<endl;
	cout<<"digits(_int64): "<<numeric_limits<_int64>::digits<<endl;
//epsilon
	cout<<"epsilon(float): "<<numeric_limits<float>::epsilon()<<endl;
	cout<<"epsilon(double): "<<numeric_limits<double>::epsilon()<<endl;
	cout<<"epsilon(int): "<<numeric_limits<int>::epsilon()<<endl;
	cout<<"epsilon(long double): "<<numeric_limits<long double>::epsilon()<<endl;
//has_denorm
	cout<<"has_denorm(float): "<<numeric_limits<float>::has_denorm<<endl;
	cout<<"has_denorm(double): "<<numeric_limits<double>::has_denorm<<endl;
	cout<<"has_denorm(int): "<<numeric_limits<long int>::has_denorm<<endl;
//has_denorm_loss
	cout<<"has_denorm_loss(float): "<<numeric_limits<float>::has_denorm_loss<<endl;
	cout<<"has_denorm_loss(double): "<<numeric_limits<double>::has_denorm_loss<<endl;
	cout<<"has_denorm_loss(int): "<<numeric_limits<long int>::has_denorm_loss<<endl;
//has_infinity
   cout << "Whether float objects have infinity: "<< numeric_limits<float>::has_infinity<< endl;
   cout << "Whether double objects have infinity: "<< numeric_limits<double>::has_infinity<< endl;
   cout << "Whether long int objects have infinity: " << numeric_limits<long int>::has_infinity<< endl;
//has_quiet_NaN
   cout << "Whether float objects have quiet_NaN: "<< numeric_limits<float>::has_quiet_NaN << endl;
   cout << "Whether double objects have quiet_NaN: "<< numeric_limits<double>::has_quiet_NaN << endl;
   cout << "Whether long int objects have quiet_NaN: " << numeric_limits<long int>::has_quiet_NaN << endl;
//has_signaling_NaN
   cout << "Whether float objects have a signaling_NaN: "<< numeric_limits<float>::has_signaling_NaN << endl;
   cout << "Whether double objects have a signaling_NaN: "<< numeric_limits<double>::has_signaling_NaN << endl;
   cout << "Whether long int objects have a signaling_NaN: "<< numeric_limits<long int>::has_signaling_NaN<< endl;
//infinity()
   cout << "The infinity for type float is: "<< numeric_limits<float>::infinity( ) <<endl;
   cout << "The infinity for type double is: "<< numeric_limits<double>::infinity( ) <<endl;
   cout << "The infinity for type long double is: "<< numeric_limits<long double>::infinity( ) <<endl;
//is_bounded
   cout << "Whether float objects have bounded set (是否是有界的): "<< numeric_limits<float>::is_bounded<< endl;
   cout << "Whether double objects have bounded set (是否是有界的) : "<< numeric_limits<double>::is_bounded<< endl;
   cout << "Whether long int objects have bounded set (是否是有界的) : "<< numeric_limits<long int>::is_bounded<< endl;
   cout << "Whether unsigned char objects have bounded set (是否是有界的) : "<< numeric_limits<unsigned char>::is_bounded<< endl;
//is_exact
   cout << "Whether free  of rounding errors(float): "<< numeric_limits<float>::is_exact<< endl;
   cout << "Whether free  of rounding errors(float): "<< numeric_limits<double>::is_exact<< endl;
   cout << "Whether free  of rounding errors(float): "<< numeric_limits<long int>::is_exact<< endl;
   cout << "Whether free  of rounding errors(float): "<< numeric_limits<unsigned char>::is_exact<< endl;
//is_iec559
   cout << "Whether conform to iec559 standards (float)(是否遵从iec559标准.): "<< numeric_limits<float>::is_iec559<< endl;
   cout << "Whether conform to iec559 standards (double)(是否遵从iec559标准.): "<< numeric_limits<float>::is_iec559<< endl;
   cout << "Whether conform to iec559 standards (int)(是否遵从iec559标准.): "<< numeric_limits<float>::is_iec559<< endl;
   cout << "Whether conform to iec559 standards (unsigned char)(是否遵从iec559标准.): "<< numeric_limits<float>::is_iec559<< endl;
//is_integer
   cout << "Whether has an integral representation: "<< numeric_limits<float>::is_integer<< endl;
   cout << "Whether has an integral representation: "<< numeric_limits<double>::is_integer<< endl;
   cout << "Whether has an integral representation: " << numeric_limits<int>::is_integer << endl;
   cout << "Whether has an integral representation: "<< numeric_limits<unsigned char>::is_integer<< endl;
//is_modulo
   cout << "Whether has a modulo representation: "<< numeric_limits<float>::is_modulo<< endl;
   cout << "Whether has a modulo representation: "<< numeric_limits<double>::is_modulo<< endl;
   cout << "Whether has a modulo representation: "<< numeric_limits<signed char>::is_modulo<< endl;
   cout << "Whether has a modulo representation: "<< numeric_limits<unsigned char>::is_modulo<< endl;
//is_signed
   cout << "Whether be a signed representation: "<< numeric_limits<float>::is_signed << endl;
   cout << "Whether be a signed representation: "<< numeric_limits<double>::is_signed << endl;
   cout << "Whether be a signed representation: " << numeric_limits<signed char>::is_signed << endl;
   cout << "Whether be a signed representation: "<< numeric_limits<unsigned char>::is_signed << endl;
//is_specialized
   cout << "Whether be an explicit "<< "specialization in the class: "<< numeric_limits<float>::is_specialized<< endl;
   cout << "Whether be an explicit " << "specialization in the class: " << numeric_limits<float*>::is_specialized << endl;
   cout << "Whether be an explicit "<<"specialization in the class: "<<numeric_limits<int>::is_specialized<< endl;
   cout << "Whether be an explicit "<< "specialization in the class: " << numeric_limits<int*>::is_specialized<< endl;
//max
   cout << "The maximum value for type float is:  "<< numeric_limits<float>::max( )<< endl;
   cout << "The maximum value for type double is:  "<< numeric_limits<double>::max( )<< endl;
   cout << "The maximum value for type float is:  "<< numeric_limits<int>::max( )<< endl;
   cout << "The maximum value for type short int is:  " << numeric_limits<short int>::max( )<< endl;
//max_exponent
   cout<<"The default radix is : "<<numeric_limits<int>::radix<<endl;
   cout << "The maximum radix-based exponent for type float is:  "<< numeric_limits<float>::max_exponent<< endl;
   cout << "The maximum radix-based exponent for type double is:  "<< numeric_limits<double>::max_exponent<< endl;
   cout << "The maximum radix-based exponent for type long double is:  " << numeric_limits<long double>::max_exponent<< endl;
   cout << "The maximum radix-based exponent for type int is:  " << numeric_limits<int>::max_exponent<< endl;
//max_exponent10
   cout<<"The default radix is : "<<numeric_limits<int>::radix<<endl;
   cout << "The maximum base 10 exponent for type float is:  "<< numeric_limits<float>::max_exponent10 << endl;
   cout << "The maximum base 10 exponent for type double is:  "<< numeric_limits<double>::max_exponent10 << endl;
   cout << "The maximum base 10 exponent for type long double is:  "<< numeric_limits<long double>::max_exponent10 << endl;
//min
   cout << "The minimum value for type float is:  "<< numeric_limits<float>::min( )<< endl;
   cout << "The minimum value for type double is:  "<< numeric_limits<double>::min( )<< endl;
   cout << "The minimum value for type float is:  "<< numeric_limits<int>::min( )<< endl;
   cout << "The minimum value for type short int is:  "<< numeric_limits<short int>::min( )<< endl;
//min_exponent
   cout << "The minimum radix-based exponent for type float is:  "<< numeric_limits<int>::min_exponent<< endl;
   cout << "The minimum radix-based exponent for type float is:  "<< numeric_limits<float>::min_exponent<< endl;
   cout << "The minimum radix-based exponent for type double is:  "<< numeric_limits<double>::min_exponent<< endl;
   cout << "The minimum radix-based exponent for type long double is:  "<< numeric_limits<long double>::min_exponent<< endl;
//min_exponent10
   cout << "The minimum base 10 exponent for type float is: "<< numeric_limits<int>::min_exponent10<< endl;
   cout << "The minimum base 10 exponent for type float is:  "<< numeric_limits<float>::min_exponent10 << endl;
   cout << "The minimum base 10 exponent for type double is:  "<< numeric_limits<double>::min_exponent10<< endl;
   cout << "The minimum base 10 exponent for type long double is:  "<< numeric_limits<long double>::min_exponent10<< endl;
//quiet_NaN
   cout << "The quiet NaN for type float is:  "<< numeric_limits<float>::quiet_NaN( )<< endl;
   cout << "The quiet NaN for type int is:  " << numeric_limits<int>::quiet_NaN( )<< endl;
   cout << "The quiet NaN for type long double is:  "<< numeric_limits<double>::quiet_NaN( )<< endl;
//radix
   cout << "The base for type float is:  "<< numeric_limits<float>::radix << endl;
   cout << "The base for type int is:  " << numeric_limits<int>::radix << endl;
   cout << "The base for type long double is:  " << numeric_limits<long double>::radix << endl;
//round_error
   cout << "The maximum rounding error for type float is:  "<< numeric_limits<float>::round_error( )<< endl;
   cout << "The maximum rounding error for type int is:  " << numeric_limits<int>::round_error( )<< endl;
   cout << "The maximum rounding error for type double is:  "<< numeric_limits<double>::round_error( )<< endl;
//round_style  
   cout << "The rounding style for a double type is: " << numeric_limits<double>::round_style << endl;
   cout << "The rounding style for a double type is now: " << numeric_limits<float>::round_style << endl;
   cout << "The rounding style for an int type is: " << numeric_limits<int>::round_style << endl;
//signaling_NaN
   cout << "The signaling NaN for type float is:  "<< numeric_limits<float>::signaling_NaN( )<< endl;
   cout << "The signaling NaN for type int is:  "<< numeric_limits<int>::signaling_NaN( )<< endl;
   cout << "The signaling NaN for type double is:  "<< numeric_limits<double>::signaling_NaN( )<< endl;
//tinyness_before
   cout << "Whether float types can detect tinyness before rounding: "<< numeric_limits<float>::tinyness_before<< endl;
   cout << "Whether double types can detect tinyness before rounding: "<< numeric_limits<double>::tinyness_before<< endl;
   cout << "Whether long int types can detect tinyness before rounding: "<< numeric_limits<long int>::tinyness_before<< endl;
   cout << "Whether unsigned char types can detect tinyness before rounding: "<< numeric_limits<unsigned char>::tinyness_before<< endl;
//traps
   cout << "Whether float types have implemented trapping: "<< numeric_limits<float>::traps<< endl;
   cout << "Whether double types have implemented trapping: "<< numeric_limits<double>::traps<< endl;
   cout << "Whether long int types have implemented trapping: "<< numeric_limits<long int>::traps<< endl;
   cout << "Whether unsigned char types have implemented trapping: "<< numeric_limits<unsigned char>::traps<< endl;
}