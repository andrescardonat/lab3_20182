#ifndef LIBRO_H
#define LIBRO_H


class libro
{
        public:
            int codigo= 1234;
            char *nombrel = "Cien años de soledad";
            char *nombre_autor = "Gabriel Garcia Marquez";
            char *L = "Literatura";
            char *C = "Ciencia";
            char *G = "Geografia";
            char *A = "Arte";
            char *E = "Enciclopedia";
            char *D = "Diccionario";
            int y;
        public:


            void retornar_codigo(void);
            void leer_Nombre_libro(void);
            void leer_Nombrea(void);
            void leer_materia(void);
};

#endif // LIBRO_H
