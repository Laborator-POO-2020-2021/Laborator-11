#include "Tara.hpp"

int main()
{
	// Localitate obj1("Localitate 1", 23, 1000 );
	// obj1.afisare();

	// Oras obj3( "Drubeta", 50000, 4000, 1241 );
	// obj3.afisare();

	// Capitala obj2( "Sevrorin", 52000, 5000, 2241, "Spaniola" );
	// obj2.afisare();

	// Municipiu obj6( "Turnu", 70000, 20401, 3120, "Mehedinti" );
	// obj6.afisare();

	Tara **v = new Tara*[4] ;

	Localitate ** v1 = new Localitate*[5];
	v1[0] = new Localitate("Localitate 1", 230, 10000 );
	v1[1] = new Oras( "Drubaseta", 500000, 40000, 12041 );
	v1[2] = new Capitala( "Sevroasrin", 520000, 50000, 22041, "Spanioasla" );
	v1[3] = new Municipiu( "Turasnu", 700000, 200401, 31020, "Mehedfasinti" );
	v1[4] = NULL;

	Localitate ** v2 = new Localitate*[5];
	v2[0] = new Localitate("Localitate 2", 212, 130 );
	v2[1] = new Oras( "Drubaseta", 50000000, 420, 1441 );
	v2[2] = new Capitala( "Sevrorin", 51000, 5020, 5241, "Spaniola" );
	v2[3] = new Municipiu( "Turnu", 72000, 20301, 3520, "Mehedinti" );
	v2[4] = NULL;

	Localitate ** v3 = new Localitate*[5];
	v3[0] = new Localitate("Localitate 3", 223, 13000 );
	v3[1] = new Oras( "Dfsrubeta", 5002, 4300, 1441 );
	v3[2] = new Capitala( "Seadvrorin", 54000, 52000, 2341, "Saspaniola" );
	v3[3] = new Municipiu( "Tuasrnu", 74000, 23401, 3220, "Mdasehedinti" );
	v3[4] = NULL;

	Localitate ** v4 = new Localitate*[5];
	v4[0] = new Localitate("Localitate 4", 231, 100 );
	v4[1] = new Oras( "Drubetaas", 5000, 400, 121 );
	v4[2] = new Capitala( "Sevrorinfsa", 5200, 500, 241, "Spanioladas" );
	v4[3] = new Municipiu( "Tuqwernu", 7000, 2001, 310, "Mehedintiasf" );
	v4[4] = NULL;

	v[0] = new Tara (v1);
	v[1] = new Tara (v2);
	v[2] = new Tara (v3);
	v[3] = new Tara (v4);


	cout << endl <<" ~~~~ PRIMA AFISARE ~~~~ "<< endl ;

	for( int i = 0; i < 4; i++ )
		v[i] -> afisare();

	for( int i = 0; i < 4; i++)
		for( int j = i + 1; j < 4; j++ )
		{
			if( v[i] -> getLocuitori() < v[j] -> getLocuitori() )
			{
				Tara *aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}

	cout << endl <<" ~~~~ AFISARE DUPA ORDONARE ~~~~ "<< endl ;
	for( int i = 0; i < 4; i++ )
		v[i] -> afisare();

	for( int i = 0; i < 4; i++)
		for( int j = i + 1; j < 4; j++ )
		{
			if( v[i] -> getVenitmediu() < v[j] -> getVenitmediu() )
			{
				Tara *aux;
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}

	cout << endl <<" ~~~~ AFISARE DUPA ORDONARE VENITULUI ~~~~ "<< endl ;
	for( int i = 0; i < 4; i++ )
		v[i] -> afisare();


	return 0;
}