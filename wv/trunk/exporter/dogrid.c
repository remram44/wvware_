/* */

void wvPutDOGRID(DOGRID *dog,wvStream *fd)
{
	U16 temp16 = (U16)0;

	write_16ubit(fd, dog->xaGrid);
	write_16ubit(fd, dog->yaGrid);
	write_16ubit(fd, dog->dxaGrid);
	write_16ubit(fd, dog->dyaGrid);

	temp16 |= dog->dyGridDisplay;
	temp16 |= dog->fTurnItOff << 7;
	temp16 |= dog->dxGridDisplay << 8;
	temp16 |= dog->fFollowMargins << 15;

	write_16ubit(fd, temp16);
}