void wvPutWKB(WKB *item,wvStream *fd)
         {
         U16 temp16 = (U16)0;

         write_16ubit(fd, (U16)item->fn);
         write_16ubit(fd, item->grfwkb);
         write_16ubit(fd, (U16)item->lvl);

         temp16 |= item->fnpt;
         temp16 |= item->fnpd << 4;
         write_16ubit(fd, temp16);
         
         write_16ubit(fd, item->doc);
         }