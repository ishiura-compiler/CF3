#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x84 = INT32_MIN;
volatile uint32_t x191 = 2U;
volatile int32_t t4 = -1447500;
volatile int8_t x197 = INT8_MAX;
volatile uint64_t x253 = 556LLU;
static uint8_t x267 = 1U;
volatile int32_t t8 = 7407846;
static int64_t x270 = INT64_MIN;
int32_t t9 = -6489309;
int32_t t11 = 6;
static volatile uint16_t x394 = 8297U;
uint64_t x425 = 272826628656813922LLU;
uint16_t x427 = 4U;
volatile uint16_t x491 = 28U;
uint8_t x495 = 2U;
uint32_t x496 = 17335U;
uint32_t x671 = 0U;
int32_t x722 = INT32_MIN;
static int32_t x781 = INT32_MIN;
volatile int32_t t23 = -173514026;
int16_t x809 = 8589;
uint16_t x811 = 31U;
uint8_t x905 = 8U;
uint8_t x959 = 44U;
int32_t t31 = 2368325;
int64_t x1093 = -1LL;
int8_t x1096 = INT8_MAX;
uint64_t x1173 = 509059986471935LLU;
int16_t x1378 = INT16_MIN;
static uint32_t x1429 = 472057U;
volatile int32_t t39 = 5412157;
volatile uint64_t x1463 = 55LLU;
volatile int64_t x1528 = -1LL;
volatile int32_t t41 = 147;
int64_t x1542 = INT64_MIN;
int64_t x1544 = INT64_MIN;
int32_t x1637 = INT32_MIN;
volatile int8_t x1639 = 1;
uint16_t x1655 = 0U;
static volatile int32_t x1710 = INT32_MIN;
int32_t t47 = 1;
volatile uint8_t x1886 = UINT8_MAX;
volatile int8_t x1888 = INT8_MIN;
int32_t t49 = -19283651;
uint8_t x1895 = 7U;
volatile int32_t t50 = -1049709;
int32_t t51 = 68;
static int16_t x1912 = INT16_MIN;
int64_t x1972 = INT64_MAX;
volatile uint16_t x1989 = 0U;
static uint32_t x2004 = 5254296U;
int64_t x2044 = INT64_MAX;
volatile uint8_t x2165 = 26U;
uint16_t x2168 = 3U;
int32_t t59 = 27120384;
volatile uint32_t x2201 = 6131078U;
int32_t t60 = 77;
int32_t t61 = 427;
int8_t x2281 = -1;
int32_t t62 = 2196484;
volatile int64_t x2289 = 26283LL;
volatile int16_t x2294 = 59;
int32_t x2321 = -3;
int64_t x2322 = 9582439204LL;
volatile int8_t x2391 = 0;
uint64_t x2410 = 1536501278LLU;
int32_t t68 = -570;
int64_t x2485 = -36071853LL;
int32_t x2501 = INT32_MIN;
uint8_t x2503 = 8U;
int32_t t70 = 1;
static int32_t x2513 = -12;
int32_t t71 = 22968985;
uint16_t x2546 = 29994U;
int8_t x2569 = -1;
volatile int8_t x2655 = 22;
volatile int16_t x2673 = -1;
static volatile int32_t t78 = -6322;
volatile int64_t x2680 = -1LL;
static volatile int32_t t79 = 30501;
uint64_t x2799 = 51LLU;
uint8_t x2831 = 8U;
int64_t x3018 = 2432426059LL;
int32_t t84 = -40468;
volatile int32_t t86 = 12646673;
uint16_t x3127 = 61U;
static int32_t x3128 = INT32_MAX;
int32_t x3174 = -323244;
int8_t x3199 = 1;
int32_t t93 = -351925645;
int32_t x3213 = 1586;
int8_t x3216 = INT8_MIN;
static int32_t t94 = 2018737;
static volatile int16_t x3227 = 11;
volatile int32_t x3320 = 812;
volatile int32_t t96 = 22333;
int64_t x3333 = INT64_MIN;
static uint8_t x3335 = 36U;
volatile int32_t t98 = 19260649;


void f0(void) {
	static int16_t x53 = 341;
	int16_t x54 = 9;
	int8_t x55 = 2;
	int64_t x56 = -1LL;
	int32_t t0 = -31545;

	t0 = (((x53/x54)>>x55)<x56);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x81 = 17U;
	volatile uint32_t x82 = 1U;
	static volatile uint8_t x83 = 2U;
	volatile int32_t t1 = 14;

	t1 = (((x81/x82)>>x83)<x84);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x93 = -2595185;
	int16_t x94 = -1;
	uint8_t x95 = 3U;
	int16_t x96 = -1;
	volatile int32_t t2 = -1835;

	t2 = (((x93/x94)>>x95)<x96);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x169 = 1251083825LLU;
	int32_t x170 = -5606979;
	uint8_t x171 = 2U;
	uint64_t x172 = UINT64_MAX;
	volatile int32_t t3 = -1466467;

	t3 = (((x169/x170)>>x171)<x172);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x189 = 3641134833768450LLU;
	uint8_t x190 = 1U;
	int32_t x192 = -22384;

	t4 = (((x189/x190)>>x191)<x192);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x193 = -1;
	int32_t x194 = -15723;
	uint8_t x195 = 1U;
	static uint8_t x196 = UINT8_MAX;
	volatile int32_t t5 = 0;

	t5 = (((x193/x194)>>x195)<x196);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x198 = INT32_MIN;
	uint32_t x199 = 4U;
	uint64_t x200 = 9LLU;
	static volatile int32_t t6 = 629320;

	t6 = (((x197/x198)>>x199)<x200);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x254 = INT64_MIN;
	uint16_t x255 = 51U;
	int64_t x256 = INT64_MIN;
	volatile int32_t t7 = -9450;

	t7 = (((x253/x254)>>x255)<x256);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x265 = -1;
	int32_t x266 = INT32_MIN;
	int16_t x268 = INT16_MIN;

	t8 = (((x265/x266)>>x267)<x268);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x269 = INT64_MAX;
	int8_t x271 = 10;
	static volatile uint64_t x272 = 14LLU;

	t9 = (((x269/x270)>>x271)<x272);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x333 = -29058;
	uint64_t x334 = 149LLU;
	int8_t x335 = 1;
	int32_t x336 = -1;
	volatile int32_t t10 = -186470623;

	t10 = (((x333/x334)>>x335)<x336);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x373 = 64640LLU;
	int8_t x374 = INT8_MAX;
	uint32_t x375 = 2U;
	static uint8_t x376 = 43U;

	t11 = (((x373/x374)>>x375)<x376);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x393 = 6258127U;
	volatile int8_t x395 = 1;
	int32_t x396 = INT32_MIN;
	static int32_t t12 = 45;

	t12 = (((x393/x394)>>x395)<x396);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x426 = 25;
	volatile int8_t x428 = -41;
	int32_t t13 = -231722543;

	t13 = (((x425/x426)>>x427)<x428);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x473 = 13818;
	int64_t x474 = 12298LL;
	uint32_t x475 = 0U;
	static int8_t x476 = INT8_MIN;
	static volatile int32_t t14 = 271;

	t14 = (((x473/x474)>>x475)<x476);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x489 = INT64_MAX;
	static uint64_t x490 = 6275LLU;
	static int64_t x492 = 18019LL;
	int32_t t15 = 24069;

	t15 = (((x489/x490)>>x491)<x492);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x493 = -964638;
	int8_t x494 = INT8_MIN;
	int32_t t16 = -516;

	t16 = (((x493/x494)>>x495)<x496);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x557 = 10U;
	static uint64_t x558 = UINT64_MAX;
	uint8_t x559 = 3U;
	int16_t x560 = INT16_MIN;
	int32_t t17 = -21259;

	t17 = (((x557/x558)>>x559)<x560);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x669 = -1;
	static int8_t x670 = INT8_MIN;
	uint64_t x672 = 493LLU;
	volatile int32_t t18 = 71925589;

	t18 = (((x669/x670)>>x671)<x672);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x673 = -1LL;
	int64_t x674 = INT64_MAX;
	int8_t x675 = 2;
	int8_t x676 = INT8_MIN;
	volatile int32_t t19 = 12195606;

	t19 = (((x673/x674)>>x675)<x676);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x721 = 18;
	uint16_t x723 = 0U;
	int32_t x724 = -1;
	static volatile int32_t t20 = -769101;

	t20 = (((x721/x722)>>x723)<x724);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x725 = INT16_MAX;
	uint8_t x726 = UINT8_MAX;
	static int8_t x727 = 4;
	uint32_t x728 = 503311241U;
	int32_t t21 = -241083346;

	t21 = (((x725/x726)>>x727)<x728);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x773 = INT8_MIN;
	volatile uint16_t x774 = UINT16_MAX;
	uint8_t x775 = 14U;
	int8_t x776 = INT8_MIN;
	volatile int32_t t22 = 0;

	t22 = (((x773/x774)>>x775)<x776);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x782 = INT64_MIN;
	static uint8_t x783 = 5U;
	int32_t x784 = INT32_MAX;

	t23 = (((x781/x782)>>x783)<x784);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x785 = INT16_MAX;
	int32_t x786 = INT32_MIN;
	int8_t x787 = 0;
	int32_t x788 = -7537;
	volatile int32_t t24 = 15920593;

	t24 = (((x785/x786)>>x787)<x788);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x810 = UINT16_MAX;
	int8_t x812 = INT8_MIN;
	volatile int32_t t25 = 4350148;

	t25 = (((x809/x810)>>x811)<x812);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x813 = INT16_MIN;
	int32_t x814 = INT32_MIN;
	uint8_t x815 = 0U;
	volatile int16_t x816 = INT16_MIN;
	static int32_t t26 = -191505495;

	t26 = (((x813/x814)>>x815)<x816);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x906 = UINT16_MAX;
	uint16_t x907 = 1U;
	static int64_t x908 = 106LL;
	volatile int32_t t27 = 1008562;

	t27 = (((x905/x906)>>x907)<x908);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x937 = INT16_MIN;
	static uint32_t x938 = 13U;
	uint8_t x939 = 0U;
	uint64_t x940 = 2LLU;
	int32_t t28 = -5157;

	t28 = (((x937/x938)>>x939)<x940);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x957 = -331325531831433LL;
	volatile int16_t x958 = INT16_MIN;
	static int16_t x960 = -1;
	static int32_t t29 = -570626;

	t29 = (((x957/x958)>>x959)<x960);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x973 = -1344019088LL;
	int64_t x974 = -60733563LL;
	static volatile uint8_t x975 = 3U;
	int32_t x976 = INT32_MAX;
	int32_t t30 = 0;

	t30 = (((x973/x974)>>x975)<x976);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x1025 = -1LL;
	int32_t x1026 = INT32_MAX;
	volatile uint32_t x1027 = 7U;
	int64_t x1028 = -110832LL;

	t31 = (((x1025/x1026)>>x1027)<x1028);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x1094 = -128;
	static uint8_t x1095 = 5U;
	volatile int32_t t32 = 5237;

	t32 = (((x1093/x1094)>>x1095)<x1096);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x1174 = 45U;
	int8_t x1175 = 35;
	static int8_t x1176 = INT8_MIN;
	volatile int32_t t33 = -4715;

	t33 = (((x1173/x1174)>>x1175)<x1176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x1209 = UINT64_MAX;
	int8_t x1210 = 1;
	int32_t x1211 = 0;
	int32_t x1212 = -1;
	int32_t t34 = 1430787;

	t34 = (((x1209/x1210)>>x1211)<x1212);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x1345 = INT16_MIN;
	int32_t x1346 = -100336256;
	static int8_t x1347 = 0;
	static int32_t x1348 = 13318;
	volatile int32_t t35 = 506136574;

	t35 = (((x1345/x1346)>>x1347)<x1348);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x1377 = 3U;
	uint16_t x1379 = 0U;
	static volatile int8_t x1380 = -50;
	int32_t t36 = 1;

	t36 = (((x1377/x1378)>>x1379)<x1380);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x1409 = 1U;
	volatile uint32_t x1410 = UINT32_MAX;
	static uint8_t x1411 = 15U;
	volatile int16_t x1412 = -835;
	static int32_t t37 = 0;

	t37 = (((x1409/x1410)>>x1411)<x1412);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x1421 = INT32_MIN;
	int32_t x1422 = -254658043;
	int16_t x1423 = 1;
	int64_t x1424 = 31947923574140LL;
	int32_t t38 = 30;

	t38 = (((x1421/x1422)>>x1423)<x1424);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x1430 = -2456;
	volatile uint32_t x1431 = 0U;
	int8_t x1432 = 0;

	t39 = (((x1429/x1430)>>x1431)<x1432);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x1461 = INT32_MAX;
	volatile int64_t x1462 = INT64_MIN;
	volatile int8_t x1464 = 59;
	int32_t t40 = 369370;

	t40 = (((x1461/x1462)>>x1463)<x1464);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1525 = 561U;
	int64_t x1526 = INT64_MIN;
	uint16_t x1527 = 10U;

	t41 = (((x1525/x1526)>>x1527)<x1528);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x1541 = INT64_MIN;
	uint8_t x1543 = 23U;
	volatile int32_t t42 = -72;

	t42 = (((x1541/x1542)>>x1543)<x1544);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x1617 = 15291U;
	static int16_t x1618 = INT16_MIN;
	uint16_t x1619 = 29U;
	int8_t x1620 = -13;
	volatile int32_t t43 = -889758;

	t43 = (((x1617/x1618)>>x1619)<x1620);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x1638 = UINT32_MAX;
	static int32_t x1640 = INT32_MIN;
	volatile int32_t t44 = -270023234;

	t44 = (((x1637/x1638)>>x1639)<x1640);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x1653 = INT8_MIN;
	static uint32_t x1654 = 6U;
	int8_t x1656 = 1;
	int32_t t45 = 9;

	t45 = (((x1653/x1654)>>x1655)<x1656);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x1709 = 731U;
	volatile int32_t x1711 = 1;
	int16_t x1712 = -1;
	static int32_t t46 = -5646;

	t46 = (((x1709/x1710)>>x1711)<x1712);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x1745 = INT32_MAX;
	int64_t x1746 = INT64_MIN;
	static volatile int16_t x1747 = 25;
	int16_t x1748 = INT16_MIN;

	t47 = (((x1745/x1746)>>x1747)<x1748);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x1837 = INT64_MIN;
	uint64_t x1838 = 1079908359035375LLU;
	static uint32_t x1839 = 35U;
	volatile int64_t x1840 = INT64_MAX;
	int32_t t48 = -3;

	t48 = (((x1837/x1838)>>x1839)<x1840);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x1885 = INT8_MAX;
	uint8_t x1887 = 4U;

	t49 = (((x1885/x1886)>>x1887)<x1888);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x1893 = 1U;
	uint8_t x1894 = UINT8_MAX;
	int16_t x1896 = -1;

	t50 = (((x1893/x1894)>>x1895)<x1896);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x1905 = -20;
	int8_t x1906 = -1;
	int8_t x1907 = 25;
	volatile uint8_t x1908 = 9U;

	t51 = (((x1905/x1906)>>x1907)<x1908);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x1909 = -1;
	volatile uint16_t x1910 = 1310U;
	uint8_t x1911 = 6U;
	int32_t t52 = 4409;

	t52 = (((x1909/x1910)>>x1911)<x1912);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x1969 = 6808044LLU;
	volatile int8_t x1970 = -1;
	uint8_t x1971 = 3U;
	int32_t t53 = 7966320;

	t53 = (((x1969/x1970)>>x1971)<x1972);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x1990 = 5U;
	static int32_t x1991 = 5;
	uint64_t x1992 = UINT64_MAX;
	int32_t t54 = 26;

	t54 = (((x1989/x1990)>>x1991)<x1992);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x2001 = 917U;
	uint64_t x2002 = 75437939282LLU;
	int16_t x2003 = 0;
	int32_t t55 = -493;

	t55 = (((x2001/x2002)>>x2003)<x2004);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x2041 = 128193339028841246LLU;
	static int8_t x2042 = -2;
	uint8_t x2043 = 25U;
	int32_t t56 = -57;

	t56 = (((x2041/x2042)>>x2043)<x2044);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x2049 = 1;
	int16_t x2050 = INT16_MAX;
	uint16_t x2051 = 1U;
	static int8_t x2052 = INT8_MIN;
	int32_t t57 = 108997798;

	t57 = (((x2049/x2050)>>x2051)<x2052);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x2149 = 8346208LLU;
	volatile int32_t x2150 = 32;
	static uint8_t x2151 = 4U;
	static volatile int32_t x2152 = INT32_MIN;
	volatile int32_t t58 = 3502;

	t58 = (((x2149/x2150)>>x2151)<x2152);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x2166 = INT16_MIN;
	uint8_t x2167 = 2U;

	t59 = (((x2165/x2166)>>x2167)<x2168);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x2202 = 9LLU;
	uint16_t x2203 = 22U;
	int64_t x2204 = -2140LL;

	t60 = (((x2201/x2202)>>x2203)<x2204);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x2229 = 1U;
	uint8_t x2230 = 1U;
	int16_t x2231 = 0;
	int64_t x2232 = INT64_MIN;

	t61 = (((x2229/x2230)>>x2231)<x2232);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x2282 = INT8_MIN;
	uint16_t x2283 = 0U;
	uint8_t x2284 = UINT8_MAX;

	t62 = (((x2281/x2282)>>x2283)<x2284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x2290 = INT8_MAX;
	volatile int8_t x2291 = 14;
	int8_t x2292 = INT8_MIN;
	static int32_t t63 = -608006;

	t63 = (((x2289/x2290)>>x2291)<x2292);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x2293 = 117U;
	uint32_t x2295 = 4U;
	int64_t x2296 = INT64_MAX;
	int32_t t64 = 3;

	t64 = (((x2293/x2294)>>x2295)<x2296);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x2323 = 1LLU;
	int8_t x2324 = INT8_MAX;
	int32_t t65 = 205349;

	t65 = (((x2321/x2322)>>x2323)<x2324);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x2381 = INT8_MAX;
	uint8_t x2382 = 23U;
	int16_t x2383 = 10;
	static int8_t x2384 = -5;
	volatile int32_t t66 = 1;

	t66 = (((x2381/x2382)>>x2383)<x2384);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x2389 = 7520136075896919LLU;
	volatile uint8_t x2390 = 1U;
	int8_t x2392 = 3;
	int32_t t67 = 52401238;

	t67 = (((x2389/x2390)>>x2391)<x2392);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x2409 = INT32_MAX;
	volatile uint8_t x2411 = 4U;
	uint64_t x2412 = 34022LLU;

	t68 = (((x2409/x2410)>>x2411)<x2412);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x2486 = INT64_MAX;
	static int8_t x2487 = 36;
	int16_t x2488 = INT16_MIN;
	volatile int32_t t69 = -4;

	t69 = (((x2485/x2486)>>x2487)<x2488);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x2502 = INT32_MIN;
	uint64_t x2504 = UINT64_MAX;

	t70 = (((x2501/x2502)>>x2503)<x2504);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x2514 = INT8_MAX;
	uint64_t x2515 = 7LLU;
	static int64_t x2516 = 2098606568689084LL;

	t71 = (((x2513/x2514)>>x2515)<x2516);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x2521 = 572488229U;
	static int32_t x2522 = -1;
	volatile int8_t x2523 = 0;
	volatile uint8_t x2524 = UINT8_MAX;
	int32_t t72 = -47322;

	t72 = (((x2521/x2522)>>x2523)<x2524);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x2545 = -1;
	uint16_t x2547 = 27U;
	volatile int8_t x2548 = INT8_MAX;
	int32_t t73 = -3507;

	t73 = (((x2545/x2546)>>x2547)<x2548);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x2570 = INT64_MIN;
	int16_t x2571 = 0;
	int8_t x2572 = -4;
	static volatile int32_t t74 = 51569350;

	t74 = (((x2569/x2570)>>x2571)<x2572);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x2617 = UINT8_MAX;
	uint64_t x2618 = 237351789658LLU;
	uint16_t x2619 = 12U;
	uint8_t x2620 = 31U;
	volatile int32_t t75 = -5368389;

	t75 = (((x2617/x2618)>>x2619)<x2620);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x2621 = 3442;
	uint16_t x2622 = UINT16_MAX;
	uint8_t x2623 = 11U;
	static uint64_t x2624 = 2151925163LLU;
	int32_t t76 = -4061728;

	t76 = (((x2621/x2622)>>x2623)<x2624);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x2653 = 440;
	static int32_t x2654 = INT32_MAX;
	static uint16_t x2656 = 9U;
	volatile int32_t t77 = -3;

	t77 = (((x2653/x2654)>>x2655)<x2656);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x2674 = -210550864;
	int8_t x2675 = 4;
	uint16_t x2676 = 406U;

	t78 = (((x2673/x2674)>>x2675)<x2676);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x2677 = -7;
	int16_t x2678 = INT16_MIN;
	uint32_t x2679 = 23U;

	t79 = (((x2677/x2678)>>x2679)<x2680);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x2773 = -1;
	int32_t x2774 = INT32_MAX;
	static uint8_t x2775 = 1U;
	volatile int64_t x2776 = -7451LL;
	int32_t t80 = 3;

	t80 = (((x2773/x2774)>>x2775)<x2776);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x2797 = INT8_MAX;
	static uint64_t x2798 = 10LLU;
	int8_t x2800 = INT8_MAX;
	static int32_t t81 = 833;

	t81 = (((x2797/x2798)>>x2799)<x2800);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x2829 = 37120145034LLU;
	uint64_t x2830 = UINT64_MAX;
	static volatile uint8_t x2832 = 80U;
	int32_t t82 = -11818756;

	t82 = (((x2829/x2830)>>x2831)<x2832);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x2901 = -1LL;
	int16_t x2902 = INT16_MIN;
	int8_t x2903 = 4;
	static int8_t x2904 = -1;
	int32_t t83 = -1;

	t83 = (((x2901/x2902)>>x2903)<x2904);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x3017 = UINT16_MAX;
	uint8_t x3019 = 5U;
	int16_t x3020 = -31;

	t84 = (((x3017/x3018)>>x3019)<x3020);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x3021 = 447268029LLU;
	int16_t x3022 = -418;
	uint16_t x3023 = 23U;
	int8_t x3024 = -1;
	int32_t t85 = -225;

	t85 = (((x3021/x3022)>>x3023)<x3024);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x3049 = INT32_MIN;
	int8_t x3050 = -9;
	volatile uint8_t x3051 = 2U;
	uint8_t x3052 = UINT8_MAX;

	t86 = (((x3049/x3050)>>x3051)<x3052);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3117 = INT16_MAX;
	int32_t x3118 = INT32_MIN;
	static int8_t x3119 = 14;
	static volatile int16_t x3120 = INT16_MAX;
	int32_t t87 = 5816262;

	t87 = (((x3117/x3118)>>x3119)<x3120);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x3121 = INT8_MIN;
	int8_t x3122 = -2;
	static int8_t x3123 = 0;
	int32_t x3124 = -233538997;
	int32_t t88 = 1;

	t88 = (((x3121/x3122)>>x3123)<x3124);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x3125 = UINT64_MAX;
	int8_t x3126 = INT8_MIN;
	volatile int32_t t89 = 358919;

	t89 = (((x3125/x3126)>>x3127)<x3128);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x3141 = -1;
	static uint64_t x3142 = 12383416227062LLU;
	uint8_t x3143 = 12U;
	int16_t x3144 = -3;
	volatile int32_t t90 = -27994;

	t90 = (((x3141/x3142)>>x3143)<x3144);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x3161 = INT8_MAX;
	uint64_t x3162 = 3251LLU;
	uint8_t x3163 = 14U;
	int64_t x3164 = -83056986872120023LL;
	int32_t t91 = -399142888;

	t91 = (((x3161/x3162)>>x3163)<x3164);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x3173 = -1;
	uint8_t x3175 = 0U;
	volatile uint8_t x3176 = 3U;
	static int32_t t92 = -997730818;

	t92 = (((x3173/x3174)>>x3175)<x3176);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x3197 = -1;
	static int32_t x3198 = -1;
	uint32_t x3200 = 186808111U;

	t93 = (((x3197/x3198)>>x3199)<x3200);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x3214 = INT64_MIN;
	volatile int16_t x3215 = 59;

	t94 = (((x3213/x3214)>>x3215)<x3216);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x3225 = 2000309U;
	uint64_t x3226 = 1244599405975934317LLU;
	static int32_t x3228 = INT32_MIN;
	int32_t t95 = -651577;

	t95 = (((x3225/x3226)>>x3227)<x3228);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x3317 = 0U;
	int64_t x3318 = INT64_MIN;
	int16_t x3319 = 1;

	t96 = (((x3317/x3318)>>x3319)<x3320);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x3334 = -57;
	static int64_t x3336 = -1LL;
	int32_t t97 = -1689680;

	t97 = (((x3333/x3334)>>x3335)<x3336);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x3369 = 53LLU;
	static int64_t x3370 = -2322288231LL;
	uint8_t x3371 = 20U;
	int32_t x3372 = INT32_MIN;

	t98 = (((x3369/x3370)>>x3371)<x3372);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x3405 = 580190099442963LLU;
	uint64_t x3406 = UINT64_MAX;
	uint8_t x3407 = 1U;
	int16_t x3408 = INT16_MIN;
	volatile int32_t t99 = -798912;

	t99 = (((x3405/x3406)>>x3407)<x3408);

	if (t99 != 1) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

