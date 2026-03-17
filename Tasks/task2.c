void ToggleBit(unsigned char *reg, unsigned char bit)
{
    *reg ^= (1 << bit);
}