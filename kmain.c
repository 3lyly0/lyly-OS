#define FB_BLACK 15
#define FB_WHITE 0

char *fb = (char *) 0x000B8000;

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg) {
    fb[i] = c;
    fb[i + 1] = ((fg & 0x0F) << 4) | (bg & 0x0F);
}

void kmain() {
    for (int i = 0; i < 80 * 25; i++) {
        fb_write_cell(i * 2, ' ', 0, 0);
    }



    fb_write_cell(0, 'N', FB_BLACK, FB_WHITE);
    fb_write_cell(2, 'I', FB_BLACK, FB_WHITE);
    fb_write_cell(4, 'G', FB_BLACK, FB_WHITE);
    fb_write_cell(6, 'G', FB_BLACK, FB_WHITE);
    fb_write_cell(8, 'E', FB_BLACK, FB_WHITE);
    fb_write_cell(10, 'R', FB_BLACK, FB_WHITE);
    
}
