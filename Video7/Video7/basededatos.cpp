#include "pch.h"
#include "basededatos.h"

basededatos::basededatos() {
    this->connectionString = "datasource=localhost; username=root; password=; database=prueba;";
    this->conn = gcnew MySqlConnection(this->connectionString);
}

void basededatos::AbrirConexion()
{
    this->conn->Open();
}

void basededatos::CerrarConexion()
{
    this->conn->Close();
}

DataTable^ basededatos::getData()
{
    String^ sql = "select * from persona";
    MySqlCommand^ cursor = gcnew MySqlCommand(sql, this->conn);
    MySqlDataAdapter^ data = gcnew MySqlDataAdapter(cursor);
    DataTable^ tabla = gcnew DataTable();
    data->Fill(tabla);
    return tabla;
}
