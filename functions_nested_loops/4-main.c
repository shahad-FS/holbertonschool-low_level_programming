#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');   /* اختبر حرف كبير */
    _putchar(r + '0');

    r = _isalpha('o');   /* اختبر حرف صغير */
    _putchar(r + '0');

    r = _isalpha(108);   /* اختبر حرف صغير بالـ ASCII */
    _putchar(r + '0');

    r = _isalpha(';');   /* اختبر حرف غير أبجدي */
    _putchar(r + '0');

    _putchar('\n');

    return (0);
}
