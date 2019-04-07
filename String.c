
typedef struct wstring
{
    uint8_t* data;
    uint8_t length;
    uint8_t how_much;
}str_t;

str_t* string_create(uint8_t length)
{
    str_t* string = (str_t*)malloc(sizeof(str_t));
    string->data = (uint8_t)malloc(length);
    string->length = length;
    string->how_much = 0;
    return string; 
}

void string_free(str_t* string)
{
    free(string->data);
    free(string);
}

uint8_t string_length(str_t* string)
{
    string->length;
}

void print_string(str_t* string, FIILE file)
{
    fwrite(string->data, sizeof(uint8_t), string->length, file);
}

str_t* string_dup(const char*, str)
{
    str_t* string = string_create((uint8_t)strlen(str));
    memcpy(string->data, str, string->length);
    string->how_much = string->length;
    return string;
}

str_t* string_concat(str_t*, left, str_t*, right)
{
    str_t* string = string_create(left->lenght + right->lenght);
    memcpy(string->data, left->data + left->lenght);
    memcpy(string->data, + left->lenght, right->data, rigth->length);
    return string;
}

int main(int args, char**, argv)
{
    str_t* string = 
}



//EA STL
// 