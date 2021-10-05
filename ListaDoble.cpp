#include"ListaDoble.h";


void ListaDoble::insertar(ListaDoble*& nue, int i) {
	struct ListaDoble* nuevo = new ListaDoble;
	nuevo->dato = i;
	nuevo->ant = nullptr;
	nuevo->sig = nue;
	nue = nuevo;
}



void ListaDoble::imprimir(ListaDoble* nue) {
	ListaDoble* aux = nue;
	while (aux != nullptr) {
		cout << aux->dato << endl;
		aux = aux->sig;
	}
}

void ListaDoble::eliminar(struct ListaDoble*& head, struct ListaDoble* ptr) {



	if (head->sig == nullptr) {
		cout << "No se pudo eliminar" << endl;
	}
	else {
		if (head->sig->sig == nullptr) {
			head->sig = nullptr;
		}
		else {
			ptr = head->sig;
			head->sig = ptr->sig;
			ptr->sig->ant = head;
			delete(ptr);
		}
	}
}
	int search(ListaDoble**head_ref, int x)
	{
		ListaDoble* temp = *head_ref;
		int pos = 0;
		while (temp->dato != x && temp->sig != NULL) 
		{
			pos++;
			temp = temp->sig;
		}
		if (temp->dato != x)
		{
			return -1;
		}

		return (pos + 1);
	}



