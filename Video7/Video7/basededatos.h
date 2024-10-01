#pragma once
using namespace std;
using namespace System::Data;
using namespace System;
using namespace MySql::Data::MySqlClient;

ref class basededatos
{
private:
	String^ connectionString;
	MySqlConnection^ conn;

public:
    basededatos();
    DataTable^ getData();
    void AbrirConexion();
    void CerrarConexion();

};

