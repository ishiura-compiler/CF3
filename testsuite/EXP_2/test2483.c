
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 8U;
volatile int8_t x6 = INT8_MIN;
volatile int32_t t3 = 1015;
static int64_t x19 = INT64_MIN;
int16_t x31 = -1;
int8_t x34 = -25;
uint8_t x35 = UINT8_MAX;
int32_t t8 = 1444;
uint8_t x37 = 1U;
int16_t x42 = INT16_MIN;
uint8_t x45 = 1U;
volatile int16_t x46 = INT16_MAX;
static uint16_t x47 = 2514U;
int16_t x48 = INT16_MIN;
static int32_t x50 = INT32_MIN;
static int32_t t12 = 85645;
volatile int8_t x59 = INT8_MAX;
uint8_t x61 = 53U;
static volatile int32_t t15 = -20312831;
static volatile int32_t t17 = 0;
int32_t x74 = INT32_MIN;
int32_t x75 = INT32_MAX;
int32_t t18 = -10257609;
int64_t t19 = 4908LL;
int8_t x83 = -10;
int64_t x84 = INT64_MIN;
volatile int64_t t20 = -295554816116LL;
static uint64_t x103 = UINT64_MAX;
int64_t x106 = 147703219349753LL;
uint8_t x112 = 91U;
uint32_t x114 = 25717282U;
volatile int64_t x116 = INT64_MIN;
volatile int64_t x118 = INT64_MAX;
uint32_t x141 = UINT32_MAX;
int8_t x142 = 29;
uint64_t x143 = 12LLU;
static int16_t x144 = INT16_MIN;
static int8_t x146 = INT8_MIN;
int8_t x147 = INT8_MAX;
static volatile int64_t x148 = 3153924923407225619LL;
int8_t x149 = -49;
int64_t x152 = -1LL;
volatile uint64_t x162 = 1071601471LLU;
int32_t t40 = 123889;
int32_t t41 = 32608306;
uint32_t x170 = UINT32_MAX;
int32_t x178 = INT32_MIN;
volatile int32_t x187 = INT32_MIN;
static int32_t x193 = -1;
int64_t x202 = INT64_MIN;
int32_t t50 = -215771;
static uint64_t x214 = UINT64_MAX;
static volatile int16_t x222 = 601;
volatile int32_t t54 = 129667;
int32_t x230 = INT32_MIN;
volatile uint32_t x241 = 833609043U;
volatile uint8_t x244 = UINT8_MAX;
int64_t x249 = INT64_MIN;
int16_t x254 = -563;
int32_t x255 = -1;
int64_t x257 = -1LL;
static volatile uint8_t x261 = 1U;
static volatile int32_t x264 = -12;
int16_t x266 = INT16_MIN;
volatile int32_t t66 = -5405;
uint16_t x282 = UINT16_MAX;
static int64_t t67 = -3307639289303LL;
int32_t x286 = INT32_MIN;
int64_t x288 = -1LL;
int64_t x290 = 282397535671983384LL;
int64_t x294 = INT64_MAX;
static int32_t x299 = INT32_MIN;
int8_t x300 = INT8_MIN;
uint32_t x304 = 194385694U;
uint8_t x307 = 38U;
int8_t x312 = 53;
int32_t t74 = 0;
uint64_t t75 = 226148908306087421LLU;
int64_t x319 = INT64_MAX;
int16_t x320 = 31;
int16_t x324 = 3;
uint16_t x333 = 0U;
static volatile int32_t x335 = INT32_MAX;
volatile uint16_t x336 = 8565U;
uint32_t x338 = 458U;
static volatile uint8_t x342 = 0U;
int8_t x347 = INT8_MIN;
int64_t t83 = -29598448443330LL;
int8_t x349 = -1;
int64_t x355 = INT64_MAX;
int16_t x358 = -1619;
static volatile uint64_t x362 = UINT64_MAX;
int32_t t89 = 35;
int64_t x375 = INT64_MAX;
volatile int32_t x376 = INT32_MIN;
static int64_t x378 = INT64_MIN;
static int8_t x381 = INT8_MIN;
volatile int32_t t93 = -185008;
int8_t x389 = INT8_MIN;
static uint64_t x393 = 272577216761LLU;
int64_t x396 = INT64_MIN;
volatile int64_t x398 = INT64_MIN;
uint16_t x400 = 4U;
volatile int32_t t96 = -559272508;
static int16_t x403 = INT16_MAX;
static uint16_t x410 = 537U;
uint64_t t99 = 628LLU;
uint16_t x417 = 11606U;
int32_t x418 = INT32_MAX;
int16_t x419 = INT16_MIN;
uint8_t x422 = 2U;
volatile int8_t x423 = INT8_MAX;
int64_t x437 = -1LL;
volatile int32_t t106 = 402598;
int32_t t107 = -1;
static int32_t x448 = -1;
volatile int32_t t108 = 132667;
volatile int64_t x453 = -84LL;
int64_t x454 = INT64_MIN;
static uint8_t x456 = 3U;
int16_t x469 = -1;
int8_t x472 = INT8_MIN;
static uint32_t x496 = 2064767080U;
int32_t x500 = INT32_MAX;
static int32_t t121 = -43;
static int64_t x503 = INT64_MAX;
int32_t t122 = -6177342;
uint8_t x505 = UINT8_MAX;
int64_t x508 = INT64_MAX;
static int16_t x518 = -5;
uint32_t x520 = 207166785U;
static int8_t x525 = INT8_MIN;
int16_t x535 = 43;
int16_t x540 = -20;
int8_t x541 = INT8_MAX;
int32_t x545 = -666;
int32_t x546 = INT32_MAX;
int32_t t133 = -109177798;
int32_t x551 = INT32_MAX;
static uint64_t x579 = 3530711720LLU;
int32_t x580 = INT32_MAX;
int16_t x588 = INT16_MIN;
int8_t x589 = 1;
uint8_t x593 = 3U;
uint64_t t145 = 11340LLU;
int32_t x603 = INT32_MAX;
int32_t x604 = 271;
volatile int16_t x607 = 645;
int64_t x609 = INT64_MIN;
uint64_t x611 = 2991LLU;
int16_t x612 = INT16_MAX;
volatile uint8_t x615 = UINT8_MAX;
uint64_t t150 = 274327457452946LLU;
int8_t x618 = INT8_MAX;
volatile int32_t t151 = -159;
volatile int16_t x632 = -10;
int64_t t156 = 1LL;
int8_t x644 = INT8_MIN;
static uint16_t x648 = 120U;
int32_t x651 = INT32_MIN;
uint32_t x658 = 431010U;
static int64_t x661 = -161LL;
uint8_t x675 = 35U;
uint64_t x679 = 1533819LLU;
static int8_t x696 = 5;
int64_t x700 = -1LL;
uint32_t x701 = 175537111U;
int32_t t170 = 4595;
int32_t x707 = -1501;
static int32_t t171 = -25;
uint64_t x710 = 47903970867240LLU;
static volatile int8_t x717 = -1;
uint64_t x720 = UINT64_MAX;
int32_t x726 = -1;
static int32_t t176 = -5527;
volatile int64_t x729 = -1LL;
uint8_t x740 = 1U;
int64_t x741 = -3726246995LL;
int64_t x742 = -1LL;
static int16_t x746 = 9;
static int32_t t181 = 23;
int64_t x757 = INT64_MAX;
int64_t x768 = INT64_MAX;
volatile int16_t x769 = INT16_MIN;
volatile uint16_t x770 = UINT16_MAX;
static int64_t t188 = -289545354077LL;
int32_t t189 = 1803;
uint64_t x783 = 331731509515787LLU;
static int64_t x786 = INT64_MAX;
static uint64_t x787 = UINT64_MAX;
static int16_t x789 = INT16_MIN;
volatile int64_t x803 = INT64_MAX;
int64_t x808 = INT64_MAX;
int16_t x816 = INT16_MAX;
volatile uint64_t x821 = 17225746160042104LLU;
int16_t x822 = INT16_MIN;


void f0(void) {
    	int64_t x1 = -1LL;
	int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 7531370;

    t0 = ((x1<=(x2|x3))%x4);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x7 = 0;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 23988;

    t1 = ((x5<=(x6|x7))%x8);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	static int16_t x9 = INT16_MIN;
	volatile int16_t x10 = INT16_MAX;
	int8_t x11 = 0;
	static int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -1;

    t2 = ((x9<=(x10|x11))%x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MAX;
	volatile uint8_t x16 = 3U;

    t3 = ((x13<=(x14|x15))%x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	volatile int8_t x18 = -12;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 21541;

    t4 = ((x17<=(x18|x19))%x20);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x21 = -301LL;
	int8_t x22 = -1;
	int16_t x23 = INT16_MIN;
	volatile uint64_t x24 = 6407356923969008746LLU;
	volatile uint64_t t5 = 2297620009443129650LLU;

    t5 = ((x21<=(x22|x23))%x24);

    if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = -1;
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = -1;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 298;

    t6 = ((x25<=(x26|x27))%x28);

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MIN;
	int16_t x32 = 1920;
	volatile int32_t t7 = -713118;

    t7 = ((x29<=(x30|x31))%x32);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MIN;
	int16_t x36 = -7088;

    t8 = ((x33<=(x34|x35))%x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x38 = INT64_MAX;
	int32_t x39 = INT32_MAX;
	int8_t x40 = INT8_MAX;
	volatile int32_t t9 = -1;

    t9 = ((x37<=(x38|x39))%x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x41 = 2;
	int64_t x43 = INT64_MIN;
	int16_t x44 = 124;
	static volatile int32_t t10 = 406474555;

    t10 = ((x41<=(x42|x43))%x44);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile int32_t t11 = -1223;

    t11 = ((x45<=(x46|x47))%x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = -2;
	static int16_t x51 = INT16_MIN;
	int32_t x52 = -1;

    t12 = ((x49<=(x50|x51))%x52);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x53 = 10085707528354866LLU;
	int16_t x54 = INT16_MAX;
	uint8_t x55 = UINT8_MAX;
	int16_t x56 = INT16_MAX;
	int32_t t13 = -436;

    t13 = ((x53<=(x54|x55))%x56);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	int64_t x60 = INT64_MIN;
	int64_t t14 = 392489987495LL;

    t14 = ((x57<=(x58|x59))%x60);

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x62 = INT16_MAX;
	uint32_t x63 = 304187U;
	static int32_t x64 = INT32_MIN;

    t15 = ((x61<=(x62|x63))%x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int16_t x65 = 120;
	int16_t x66 = INT16_MAX;
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = UINT32_MAX;
	static uint32_t t16 = 2887068U;

    t16 = ((x65<=(x66|x67))%x68);

    if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = 55129940644622002LL;
	uint32_t x70 = 31652U;
	int16_t x71 = 0;
	int32_t x72 = INT32_MIN;

    t17 = ((x69<=(x70|x71))%x72);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -32119;
	int8_t x76 = INT8_MIN;

    t18 = ((x73<=(x74|x75))%x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	static uint32_t x78 = 1516U;
	int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MIN;

    t19 = ((x77<=(x78|x79))%x80);

    if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = INT64_MIN;
	uint16_t x82 = UINT16_MAX;

    t20 = ((x81<=(x82|x83))%x84);

    if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile int8_t x85 = 18;
	static int16_t x86 = INT16_MIN;
	static int64_t x87 = -1LL;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 8;

    t21 = ((x85<=(x86|x87))%x88);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MAX;
	int64_t x90 = INT64_MAX;
	int16_t x91 = 754;
	int16_t x92 = -135;
	int32_t t22 = 40420124;

    t22 = ((x89<=(x90|x91))%x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x93 = -2;
	int8_t x94 = INT8_MIN;
	int64_t x95 = INT64_MIN;
	int8_t x96 = INT8_MAX;
	int32_t t23 = 243;

    t23 = ((x93<=(x94|x95))%x96);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 3567U;
	uint32_t x98 = UINT32_MAX;
	volatile int8_t x99 = INT8_MIN;
	volatile int32_t x100 = -1;
	volatile int32_t t24 = 120137;

    t24 = ((x97<=(x98|x99))%x100);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x101 = INT16_MAX;
	volatile int32_t x102 = INT32_MIN;
	uint64_t x104 = UINT64_MAX;
	static uint64_t t25 = 21LLU;

    t25 = ((x101<=(x102|x103))%x104);

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x105 = -1;
	volatile uint32_t x107 = 123139357U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t26 = 461;

    t26 = ((x105<=(x106|x107))%x108);

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x109 = -1;
	static volatile int32_t x110 = -5690;
	volatile int32_t x111 = INT32_MIN;
	volatile int32_t t27 = 64057568;

    t27 = ((x109<=(x110|x111))%x112);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x113 = -1;
	static int64_t x115 = INT64_MIN;
	volatile int64_t t28 = -86648699365206LL;

    t28 = ((x113<=(x114|x115))%x116);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint64_t x117 = 615LLU;
	int16_t x119 = INT16_MIN;
	int32_t x120 = INT32_MIN;
	volatile int32_t t29 = 486693274;

    t29 = ((x117<=(x118|x119))%x120);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	int32_t x123 = INT32_MIN;
	static int64_t x124 = INT64_MIN;
	int64_t t30 = -2005190136453963LL;

    t30 = ((x121<=(x122|x123))%x124);

    if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x125 = INT32_MIN;
	uint8_t x126 = 2U;
	int32_t x127 = INT32_MIN;
	uint32_t x128 = 189U;
	uint32_t t31 = 525550U;

    t31 = ((x125<=(x126|x127))%x128);

    if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x129 = -1LL;
	int16_t x130 = -4430;
	volatile uint16_t x131 = UINT16_MAX;
	int8_t x132 = INT8_MAX;
	static int32_t t32 = -1693;

    t32 = ((x129<=(x130|x131))%x132);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x133 = INT16_MIN;
	uint16_t x134 = 103U;
	int16_t x135 = INT16_MIN;
	int32_t x136 = 237437;
	volatile int32_t t33 = -21;

    t33 = ((x133<=(x134|x135))%x136);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	static int64_t x137 = INT64_MIN;
	uint8_t x138 = 0U;
	volatile int8_t x139 = INT8_MIN;
	volatile int8_t x140 = INT8_MIN;
	int32_t t34 = -14524;

    t34 = ((x137<=(x138|x139))%x140);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t t35 = 320608;

    t35 = ((x141<=(x142|x143))%x144);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x145 = -1LL;
	int64_t t36 = -17687619465LL;

    t36 = ((x145<=(x146|x147))%x148);

    if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x150 = 164232475;
	int16_t x151 = INT16_MAX;
	int64_t t37 = 26538687408LL;

    t37 = ((x149<=(x150|x151))%x152);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x153 = UINT8_MAX;
	static int16_t x154 = -1;
	static int16_t x155 = INT16_MIN;
	static uint8_t x156 = UINT8_MAX;
	volatile int32_t t38 = 3132;

    t38 = ((x153<=(x154|x155))%x156);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x157 = 1;
	static int64_t x158 = 97253362129LL;
	static int64_t x159 = INT64_MIN;
	static int64_t x160 = INT64_MAX;
	volatile int64_t t39 = -51478527LL;

    t39 = ((x157<=(x158|x159))%x160);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x161 = INT8_MAX;
	static uint8_t x163 = 0U;
	int32_t x164 = -1;

    t40 = ((x161<=(x162|x163))%x164);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x165 = INT16_MIN;
	volatile int64_t x166 = -274LL;
	uint16_t x167 = 15U;
	int16_t x168 = INT16_MAX;

    t41 = ((x165<=(x166|x167))%x168);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x169 = INT8_MIN;
	volatile int64_t x171 = -1489655LL;
	uint64_t x172 = UINT64_MAX;
	volatile uint64_t t42 = 9046365072429749716LLU;

    t42 = ((x169<=(x170|x171))%x172);

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x173 = 282684299573867LLU;
	uint64_t x174 = 4203866200439294418LLU;
	volatile int16_t x175 = -15806;
	static uint16_t x176 = 267U;
	int32_t t43 = -138;

    t43 = ((x173<=(x174|x175))%x176);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x177 = -1LL;
	int16_t x179 = 357;
	uint16_t x180 = 33U;
	int32_t t44 = 316342447;

    t44 = ((x177<=(x178|x179))%x180);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x185 = INT32_MAX;
	uint32_t x186 = UINT32_MAX;
	uint32_t x188 = 12423052U;
	uint32_t t45 = 5492U;

    t45 = ((x185<=(x186|x187))%x188);

    if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x189 = 12;
	static uint64_t x190 = 1LLU;
	int16_t x191 = INT16_MAX;
	int64_t x192 = INT64_MIN;
	volatile int64_t t46 = -503507090344LL;

    t46 = ((x189<=(x190|x191))%x192);

    if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x194 = -66259510;
	uint64_t x195 = UINT64_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t47 = 0;

    t47 = ((x193<=(x194|x195))%x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = 27U;
	static int32_t x198 = INT32_MAX;
	int8_t x199 = INT8_MIN;
	static int8_t x200 = -11;
	volatile int32_t t48 = -130057712;

    t48 = ((x197<=(x198|x199))%x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint16_t x201 = 466U;
	int16_t x203 = -1;
	int16_t x204 = INT16_MIN;
	volatile int32_t t49 = -1;

    t49 = ((x201<=(x202|x203))%x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int64_t x205 = INT64_MAX;
	uint64_t x206 = 4494705582725LLU;
	int64_t x207 = -1LL;
	static volatile int8_t x208 = -1;

    t50 = ((x205<=(x206|x207))%x208);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x209 = -1;
	int16_t x210 = -1;
	int8_t x211 = INT8_MIN;
	int8_t x212 = INT8_MIN;
	int32_t t51 = -5147;

    t51 = ((x209<=(x210|x211))%x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static int64_t x213 = INT64_MIN;
	uint8_t x215 = UINT8_MAX;
	uint8_t x216 = 13U;
	int32_t t52 = 11478;

    t52 = ((x213<=(x214|x215))%x216);

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x217 = 1852978846U;
	uint8_t x218 = 0U;
	uint64_t x219 = UINT64_MAX;
	static uint32_t x220 = 13U;
	static uint32_t t53 = 700U;

    t53 = ((x217<=(x218|x219))%x220);

    if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x221 = 7292;
	uint32_t x223 = 251745U;
	int32_t x224 = -189;

    t54 = ((x221<=(x222|x223))%x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x229 = 5U;
	int64_t x231 = INT64_MIN;
	uint8_t x232 = 63U;
	int32_t t55 = 133;

    t55 = ((x229<=(x230|x231))%x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x233 = -1;
	static volatile int64_t x234 = INT64_MAX;
	int8_t x235 = 30;
	static uint32_t x236 = 1U;
	uint32_t t56 = 7278086U;

    t56 = ((x233<=(x234|x235))%x236);

    if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	volatile int32_t t57 = -363701418;

    t57 = ((x241<=(x242|x243))%x244);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x245 = -1LL;
	static int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = 2172U;
	uint32_t x248 = 150486U;
	static volatile uint32_t t58 = 94104099U;

    t58 = ((x245<=(x246|x247))%x248);

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x250 = -51148LL;
	uint32_t x251 = UINT32_MAX;
	uint64_t x252 = 3248300037492489680LLU;
	volatile uint64_t t59 = 1565LLU;

    t59 = ((x249<=(x250|x251))%x252);

    if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x253 = 6U;
	int32_t x256 = INT32_MIN;
	int32_t t60 = 5;

    t60 = ((x253<=(x254|x255))%x256);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x258 = -1;
	uint32_t x259 = 10U;
	int16_t x260 = 3440;
	volatile int32_t t61 = -797;

    t61 = ((x257<=(x258|x259))%x260);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint8_t x262 = UINT8_MAX;
	int8_t x263 = INT8_MIN;
	volatile int32_t t62 = 0;

    t62 = ((x261<=(x262|x263))%x264);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x265 = INT8_MAX;
	uint8_t x267 = UINT8_MAX;
	volatile int16_t x268 = -6;
	static volatile int32_t t63 = 151562;

    t63 = ((x265<=(x266|x267))%x268);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x269 = -1;
	int32_t x270 = -1;
	int16_t x271 = 0;
	uint16_t x272 = UINT16_MAX;
	int32_t t64 = -204156234;

    t64 = ((x269<=(x270|x271))%x272);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x273 = 162526549;
	int64_t x274 = 378813LL;
	volatile int16_t x275 = 1159;
	uint16_t x276 = 46U;
	volatile int32_t t65 = -32;

    t65 = ((x273<=(x274|x275))%x276);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x277 = INT64_MAX;
	int32_t x278 = -60280300;
	int8_t x279 = 2;
	int8_t x280 = 7;

    t66 = ((x277<=(x278|x279))%x280);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x281 = -35874LL;
	volatile int64_t x283 = -1LL;
	volatile int64_t x284 = -387360010LL;

    t67 = ((x281<=(x282|x283))%x284);

    if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x285 = 168U;
	volatile int64_t x287 = INT64_MIN;
	int64_t t68 = -26LL;

    t68 = ((x285<=(x286|x287))%x288);

    if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x289 = UINT8_MAX;
	int64_t x291 = INT64_MAX;
	volatile uint8_t x292 = 3U;
	int32_t t69 = 238924;

    t69 = ((x289<=(x290|x291))%x292);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int64_t x293 = INT64_MIN;
	volatile int64_t x295 = 22507234LL;
	volatile int16_t x296 = 2;
	volatile int32_t t70 = -222;

    t70 = ((x293<=(x294|x295))%x296);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint8_t x297 = UINT8_MAX;
	int32_t x298 = INT32_MIN;
	volatile int32_t t71 = 2920;

    t71 = ((x297<=(x298|x299))%x300);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static int32_t x301 = -1;
	int16_t x302 = INT16_MAX;
	static uint64_t x303 = UINT64_MAX;
	static uint32_t t72 = 3U;

    t72 = ((x301<=(x302|x303))%x304);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x305 = INT64_MIN;
	uint32_t x306 = UINT32_MAX;
	volatile uint8_t x308 = UINT8_MAX;
	int32_t t73 = 14989582;

    t73 = ((x305<=(x306|x307))%x308);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x309 = INT32_MAX;
	static uint8_t x310 = 18U;
	int32_t x311 = INT32_MIN;

    t74 = ((x309<=(x310|x311))%x312);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x313 = -1;
	int16_t x314 = -5686;
	int32_t x315 = -1;
	volatile uint64_t x316 = UINT64_MAX;

    t75 = ((x313<=(x314|x315))%x316);

    if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x317 = 32687431412060761LLU;
	volatile uint16_t x318 = UINT16_MAX;
	volatile int32_t t76 = -221;

    t76 = ((x317<=(x318|x319))%x320);

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x321 = -22712579;
	int8_t x322 = -1;
	int32_t x323 = INT32_MIN;
	volatile int32_t t77 = -660;

    t77 = ((x321<=(x322|x323))%x324);

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	uint16_t x325 = 8559U;
	static volatile int16_t x326 = INT16_MAX;
	volatile uint8_t x327 = UINT8_MAX;
	static int64_t x328 = -1LL;
	int64_t t78 = -691060617LL;

    t78 = ((x325<=(x326|x327))%x328);

    if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint16_t x329 = 21U;
	volatile int32_t x330 = INT32_MAX;
	int64_t x331 = 10592076971602LL;
	uint64_t x332 = UINT64_MAX;
	static uint64_t t79 = 359844596158288LLU;

    t79 = ((x329<=(x330|x331))%x332);

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x334 = UINT64_MAX;
	int32_t t80 = -27015484;

    t80 = ((x333<=(x334|x335))%x336);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x337 = UINT16_MAX;
	int32_t x339 = INT32_MIN;
	int16_t x340 = INT16_MIN;
	static int32_t t81 = 14;

    t81 = ((x337<=(x338|x339))%x340);

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x341 = 64031U;
	uint8_t x343 = UINT8_MAX;
	int64_t x344 = -1LL;
	volatile int64_t t82 = 10735LL;

    t82 = ((x341<=(x342|x343))%x344);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x345 = -1LL;
	uint8_t x346 = 5U;
	int64_t x348 = INT64_MAX;

    t83 = ((x345<=(x346|x347))%x348);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x350 = 936LLU;
	volatile int32_t x351 = INT32_MAX;
	uint8_t x352 = UINT8_MAX;
	int32_t t84 = 1022417;

    t84 = ((x349<=(x350|x351))%x352);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x353 = -1678;
	int8_t x354 = INT8_MAX;
	uint32_t x356 = UINT32_MAX;
	uint32_t t85 = 374584U;

    t85 = ((x353<=(x354|x355))%x356);

    if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x357 = -1;
	int8_t x359 = -1;
	static volatile int32_t x360 = INT32_MIN;
	static volatile int32_t t86 = -26288;

    t86 = ((x357<=(x358|x359))%x360);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint64_t x361 = 4535117195552600309LLU;
	static volatile int16_t x363 = -411;
	int8_t x364 = INT8_MIN;
	int32_t t87 = 823621568;

    t87 = ((x361<=(x362|x363))%x364);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x365 = INT64_MIN;
	static volatile int16_t x366 = -1;
	static uint64_t x367 = UINT64_MAX;
	volatile int32_t x368 = INT32_MIN;
	int32_t t88 = 86013861;

    t88 = ((x365<=(x366|x367))%x368);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int8_t x369 = INT8_MAX;
	int64_t x370 = INT64_MAX;
	int32_t x371 = INT32_MIN;
	int32_t x372 = 16594016;

    t89 = ((x369<=(x370|x371))%x372);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x373 = -1;
	int8_t x374 = -11;
	int32_t t90 = 0;

    t90 = ((x373<=(x374|x375))%x376);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x377 = INT8_MAX;
	uint8_t x379 = 9U;
	int16_t x380 = INT16_MIN;
	volatile int32_t t91 = 824;

    t91 = ((x377<=(x378|x379))%x380);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x382 = 5117645;
	uint32_t x383 = UINT32_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t92 = -578365;

    t92 = ((x381<=(x382|x383))%x384);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x385 = INT8_MIN;
	int64_t x386 = INT64_MAX;
	int32_t x387 = INT32_MIN;
	volatile int32_t x388 = INT32_MIN;

    t93 = ((x385<=(x386|x387))%x388);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x390 = 2278319;
	volatile uint64_t x391 = UINT64_MAX;
	int32_t x392 = INT32_MIN;
	volatile int32_t t94 = 224;

    t94 = ((x389<=(x390|x391))%x392);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x394 = 14528858U;
	int16_t x395 = INT16_MIN;
	int64_t t95 = 413865238276183LL;

    t95 = ((x393<=(x394|x395))%x396);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x397 = INT8_MAX;
	int64_t x399 = -164793572630983LL;

    t96 = ((x397<=(x398|x399))%x400);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x401 = 595137480U;
	static uint32_t x402 = UINT32_MAX;
	volatile int32_t x404 = 3978;
	volatile int32_t t97 = -1;

    t97 = ((x401<=(x402|x403))%x404);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x405 = INT16_MIN;
	static int16_t x406 = 179;
	uint8_t x407 = 14U;
	int64_t x408 = INT64_MAX;
	static int64_t t98 = -17LL;

    t98 = ((x405<=(x406|x407))%x408);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x409 = 85U;
	int8_t x411 = INT8_MIN;
	static volatile uint64_t x412 = UINT64_MAX;

    t99 = ((x409<=(x410|x411))%x412);

    if (t99 != 0LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x413 = 12LLU;
	volatile uint64_t x414 = UINT64_MAX;
	volatile int8_t x415 = 16;
	static int8_t x416 = INT8_MIN;
	volatile int32_t t100 = 16341;

    t100 = ((x413<=(x414|x415))%x416);

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t101 = 936161504U;

    t101 = ((x417<=(x418|x419))%x420);

    if (t101 != 0U) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x421 = -1;
	uint16_t x424 = 2337U;
	volatile int32_t t102 = 14596038;

    t102 = ((x421<=(x422|x423))%x424);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x425 = UINT64_MAX;
	int16_t x426 = INT16_MAX;
	volatile uint64_t x427 = 1352LLU;
	volatile uint16_t x428 = 187U;
	int32_t t103 = 134936135;

    t103 = ((x425<=(x426|x427))%x428);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x429 = INT16_MIN;
	int64_t x430 = INT64_MAX;
	int8_t x431 = -1;
	static int8_t x432 = -1;
	int32_t t104 = 19;

    t104 = ((x429<=(x430|x431))%x432);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x433 = INT64_MAX;
	static int8_t x434 = -1;
	volatile int8_t x435 = 1;
	uint8_t x436 = UINT8_MAX;
	volatile int32_t t105 = 2588941;

    t105 = ((x433<=(x434|x435))%x436);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x438 = 15LLU;
	uint64_t x439 = 2136LLU;
	int16_t x440 = -213;

    t106 = ((x437<=(x438|x439))%x440);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x441 = -1;
	uint64_t x442 = 4LLU;
	int64_t x443 = 28LL;
	int32_t x444 = INT32_MIN;

    t107 = ((x441<=(x442|x443))%x444);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x445 = UINT32_MAX;
	int64_t x446 = INT64_MAX;
	uint16_t x447 = 656U;

    t108 = ((x445<=(x446|x447))%x448);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x449 = 1LL;
	int64_t x450 = -10360430182022935LL;
	uint8_t x451 = UINT8_MAX;
	int8_t x452 = -1;
	int32_t t109 = -28496983;

    t109 = ((x449<=(x450|x451))%x452);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x455 = 2U;
	volatile int32_t t110 = -23962;

    t110 = ((x453<=(x454|x455))%x456);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x457 = 147666319LL;
	uint8_t x458 = 11U;
	volatile uint64_t x459 = 463606506203LLU;
	int64_t x460 = 129234246034LL;
	volatile int64_t t111 = -31664853354441LL;

    t111 = ((x457<=(x458|x459))%x460);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x461 = INT64_MAX;
	uint32_t x462 = 805933509U;
	static volatile int16_t x463 = 57;
	volatile uint64_t x464 = UINT64_MAX;
	volatile uint64_t t112 = 1650322514LLU;

    t112 = ((x461<=(x462|x463))%x464);

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x465 = -1;
	int8_t x466 = INT8_MIN;
	volatile int8_t x467 = INT8_MIN;
	int32_t x468 = INT32_MAX;
	volatile int32_t t113 = -23;

    t113 = ((x465<=(x466|x467))%x468);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x470 = -1;
	int8_t x471 = 12;
	volatile int32_t t114 = 109186538;

    t114 = ((x469<=(x470|x471))%x472);

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x473 = INT32_MIN;
	int64_t x474 = INT64_MAX;
	uint16_t x475 = UINT16_MAX;
	volatile int8_t x476 = INT8_MIN;
	static int32_t t115 = -1221285;

    t115 = ((x473<=(x474|x475))%x476);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x477 = INT64_MIN;
	int8_t x478 = 45;
	int8_t x479 = -1;
	volatile int32_t x480 = 250;
	int32_t t116 = 90327;

    t116 = ((x477<=(x478|x479))%x480);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	static volatile uint16_t x481 = 382U;
	int32_t x482 = INT32_MIN;
	int32_t x483 = -1;
	volatile int8_t x484 = INT8_MAX;
	int32_t t117 = -93761045;

    t117 = ((x481<=(x482|x483))%x484);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint64_t x485 = 360171792LLU;
	static int16_t x486 = 1;
	volatile int32_t x487 = -1;
	int32_t x488 = INT32_MAX;
	volatile int32_t t118 = 1937762;

    t118 = ((x485<=(x486|x487))%x488);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x489 = INT64_MAX;
	static int64_t x490 = INT64_MIN;
	int32_t x491 = 84166;
	int64_t x492 = 331982271324368618LL;
	int64_t t119 = -2519629LL;

    t119 = ((x489<=(x490|x491))%x492);

    if (t119 != 0LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile int16_t x493 = INT16_MAX;
	uint8_t x494 = 73U;
	int64_t x495 = -350LL;
	uint32_t t120 = 145345U;

    t120 = ((x493<=(x494|x495))%x496);

    if (t120 != 0U) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x497 = INT32_MAX;
	volatile int8_t x498 = INT8_MIN;
	volatile int8_t x499 = INT8_MIN;

    t121 = ((x497<=(x498|x499))%x500);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int64_t x501 = INT64_MAX;
	volatile int8_t x502 = -1;
	int8_t x504 = INT8_MAX;

    t122 = ((x501<=(x502|x503))%x504);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x506 = INT64_MAX;
	uint8_t x507 = UINT8_MAX;
	volatile int64_t t123 = -1LL;

    t123 = ((x505<=(x506|x507))%x508);

    if (t123 != 1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x509 = 110U;
	volatile uint64_t x510 = 45LLU;
	uint8_t x511 = 3U;
	static int32_t x512 = -1;
	volatile int32_t t124 = -4172123;

    t124 = ((x509<=(x510|x511))%x512);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x513 = -1;
	uint8_t x514 = 4U;
	static volatile int32_t x515 = INT32_MIN;
	int64_t x516 = INT64_MIN;
	volatile int64_t t125 = 6115025448LL;

    t125 = ((x513<=(x514|x515))%x516);

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x517 = INT16_MAX;
	static int16_t x519 = 1;
	volatile uint32_t t126 = 39U;

    t126 = ((x517<=(x518|x519))%x520);

    if (t126 != 0U) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x521 = INT8_MIN;
	int32_t x522 = -351;
	int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MAX;
	int64_t t127 = -3LL;

    t127 = ((x521<=(x522|x523))%x524);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x526 = -21;
	volatile int16_t x527 = 485;
	int32_t x528 = -1;
	volatile int32_t t128 = 102;

    t128 = ((x525<=(x526|x527))%x528);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x529 = 234265734566LLU;
	volatile uint32_t x530 = 10472U;
	uint32_t x531 = UINT32_MAX;
	int8_t x532 = INT8_MAX;
	static int32_t t129 = -350524;

    t129 = ((x529<=(x530|x531))%x532);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x533 = INT64_MAX;
	int64_t x534 = INT64_MIN;
	uint16_t x536 = 498U;
	volatile int32_t t130 = -702083369;

    t130 = ((x533<=(x534|x535))%x536);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x537 = INT32_MIN;
	int32_t x538 = -1;
	static int16_t x539 = -1;
	volatile int32_t t131 = 25098;

    t131 = ((x537<=(x538|x539))%x540);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x542 = INT8_MIN;
	volatile int64_t x543 = -1LL;
	static int8_t x544 = INT8_MIN;
	int32_t t132 = -598198;

    t132 = ((x541<=(x542|x543))%x544);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x547 = -3805;
	int16_t x548 = INT16_MIN;

    t133 = ((x545<=(x546|x547))%x548);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile int32_t x549 = INT32_MAX;
	volatile int32_t x550 = 210060;
	uint32_t x552 = UINT32_MAX;
	volatile uint32_t t134 = 1394U;

    t134 = ((x549<=(x550|x551))%x552);

    if (t134 != 1U) { NG(); } else { ; }
	
}

void f135(void) {
    	static volatile uint16_t x553 = UINT16_MAX;
	int32_t x554 = -1;
	int32_t x555 = 31050982;
	static volatile int16_t x556 = INT16_MIN;
	volatile int32_t t135 = -180;

    t135 = ((x553<=(x554|x555))%x556);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x557 = 90956U;
	uint8_t x558 = UINT8_MAX;
	uint64_t x559 = 527021079629405LLU;
	int64_t x560 = INT64_MIN;
	volatile int64_t t136 = -2660894876337LL;

    t136 = ((x557<=(x558|x559))%x560);

    if (t136 != 1LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x561 = INT8_MAX;
	static int8_t x562 = INT8_MAX;
	uint64_t x563 = 3800LLU;
	int32_t x564 = -1;
	volatile int32_t t137 = -360820888;

    t137 = ((x561<=(x562|x563))%x564);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x566 = -1;
	static int16_t x567 = INT16_MIN;
	int32_t x568 = -4;
	int32_t t138 = 75;

    t138 = ((x565<=(x566|x567))%x568);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x569 = -1;
	volatile int64_t x570 = INT64_MIN;
	int32_t x571 = INT32_MIN;
	int16_t x572 = INT16_MIN;
	int32_t t139 = -1;

    t139 = ((x569<=(x570|x571))%x572);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x573 = 47608803659LLU;
	int32_t x574 = INT32_MIN;
	uint16_t x575 = 3646U;
	volatile int64_t x576 = INT64_MAX;
	volatile int64_t t140 = -4559805280210247LL;

    t140 = ((x573<=(x574|x575))%x576);

    if (t140 != 1LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int8_t x577 = 1;
	uint64_t x578 = 223414LLU;
	int32_t t141 = -14;

    t141 = ((x577<=(x578|x579))%x580);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x581 = INT64_MIN;
	int16_t x582 = INT16_MAX;
	int32_t x583 = -1;
	int16_t x584 = INT16_MIN;
	int32_t t142 = 11;

    t142 = ((x581<=(x582|x583))%x584);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x585 = 2070U;
	int8_t x586 = INT8_MAX;
	uint8_t x587 = 2U;
	static int32_t t143 = 242809854;

    t143 = ((x585<=(x586|x587))%x588);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x590 = 11432573576986LLU;
	uint64_t x591 = 1714066191816552LLU;
	uint32_t x592 = 4U;
	uint32_t t144 = 177481567U;

    t144 = ((x589<=(x590|x591))%x592);

    if (t144 != 1U) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x594 = 170U;
	uint64_t x595 = UINT64_MAX;
	uint64_t x596 = 60296810LLU;

    t145 = ((x593<=(x594|x595))%x596);

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x597 = INT8_MIN;
	volatile uint32_t x598 = 2734U;
	volatile int64_t x599 = INT64_MAX;
	volatile uint32_t x600 = 15232805U;
	volatile uint32_t t146 = 353851U;

    t146 = ((x597<=(x598|x599))%x600);

    if (t146 != 1U) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x601 = INT8_MAX;
	int64_t x602 = INT64_MIN;
	volatile int32_t t147 = -64846375;

    t147 = ((x601<=(x602|x603))%x604);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = INT16_MIN;
	static uint64_t x606 = 1102743720LLU;
	static uint8_t x608 = UINT8_MAX;
	int32_t t148 = 5;

    t148 = ((x605<=(x606|x607))%x608);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x610 = INT16_MIN;
	int32_t t149 = 126;

    t149 = ((x609<=(x610|x611))%x612);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x613 = INT16_MIN;
	int8_t x614 = -1;
	uint64_t x616 = UINT64_MAX;

    t150 = ((x613<=(x614|x615))%x616);

    if (t150 != 1LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x617 = 12345949U;
	volatile int8_t x619 = 24;
	uint16_t x620 = 17U;

    t151 = ((x617<=(x618|x619))%x620);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x621 = -42241293364416LL;
	int8_t x622 = 0;
	uint64_t x623 = 347900LLU;
	uint16_t x624 = UINT16_MAX;
	volatile int32_t t152 = 96014559;

    t152 = ((x621<=(x622|x623))%x624);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x625 = UINT64_MAX;
	volatile int8_t x626 = INT8_MAX;
	int16_t x627 = -1;
	uint64_t x628 = 7789LLU;
	uint64_t t153 = 238LLU;

    t153 = ((x625<=(x626|x627))%x628);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x629 = UINT8_MAX;
	volatile int8_t x630 = -1;
	int16_t x631 = INT16_MAX;
	int32_t t154 = -1249962;

    t154 = ((x629<=(x630|x631))%x632);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x633 = 287U;
	int32_t x634 = -235327;
	volatile int8_t x635 = 10;
	volatile int8_t x636 = INT8_MAX;
	volatile int32_t t155 = 533696;

    t155 = ((x633<=(x634|x635))%x636);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int64_t x637 = INT64_MIN;
	volatile uint64_t x638 = 390587LLU;
	int16_t x639 = -1;
	int64_t x640 = -251556897258654876LL;

    t156 = ((x637<=(x638|x639))%x640);

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x641 = INT32_MAX;
	uint8_t x642 = 16U;
	int64_t x643 = -1109873894LL;
	int32_t t157 = -1;

    t157 = ((x641<=(x642|x643))%x644);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x645 = -1119846147606LL;
	uint8_t x646 = 105U;
	int8_t x647 = 29;
	volatile int32_t t158 = 28126;

    t158 = ((x645<=(x646|x647))%x648);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x649 = INT8_MIN;
	uint16_t x650 = UINT16_MAX;
	uint32_t x652 = UINT32_MAX;
	uint32_t t159 = 6U;

    t159 = ((x649<=(x650|x651))%x652);

    if (t159 != 0U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x657 = UINT64_MAX;
	uint64_t x659 = UINT64_MAX;
	int16_t x660 = 183;
	static int32_t t160 = -182;

    t160 = ((x657<=(x658|x659))%x660);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x662 = -10;
	uint32_t x663 = UINT32_MAX;
	uint32_t x664 = 22364628U;
	volatile uint32_t t161 = 960647778U;

    t161 = ((x661<=(x662|x663))%x664);

    if (t161 != 1U) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int64_t x665 = INT64_MIN;
	volatile uint64_t x666 = 1737029805902020355LLU;
	int32_t x667 = INT32_MAX;
	uint8_t x668 = 2U;
	static int32_t t162 = -357987;

    t162 = ((x665<=(x666|x667))%x668);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x669 = INT8_MIN;
	static int8_t x670 = INT8_MAX;
	int16_t x671 = INT16_MIN;
	uint16_t x672 = 625U;
	int32_t t163 = -393315;

    t163 = ((x669<=(x670|x671))%x672);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x673 = INT16_MAX;
	uint16_t x674 = UINT16_MAX;
	uint64_t x676 = 19176035400264649LLU;
	volatile uint64_t t164 = 396098396244747LLU;

    t164 = ((x673<=(x674|x675))%x676);

    if (t164 != 1LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static volatile int16_t x677 = INT16_MAX;
	int64_t x678 = -1LL;
	static volatile int32_t x680 = INT32_MIN;
	int32_t t165 = -44537125;

    t165 = ((x677<=(x678|x679))%x680);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint8_t x681 = 22U;
	uint16_t x682 = 89U;
	volatile uint16_t x683 = UINT16_MAX;
	uint16_t x684 = 12U;
	volatile int32_t t166 = 58;

    t166 = ((x681<=(x682|x683))%x684);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x685 = INT16_MIN;
	uint16_t x686 = UINT16_MAX;
	uint16_t x687 = 1U;
	int32_t x688 = -1;
	volatile int32_t t167 = -533707762;

    t167 = ((x685<=(x686|x687))%x688);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int8_t x693 = -1;
	int16_t x694 = INT16_MAX;
	static volatile int32_t x695 = 79256941;
	volatile int32_t t168 = -89566;

    t168 = ((x693<=(x694|x695))%x696);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x697 = INT32_MIN;
	uint64_t x698 = 1032674752491LLU;
	int64_t x699 = -55377121481762LL;
	int64_t t169 = -1931033LL;

    t169 = ((x697<=(x698|x699))%x700);

    if (t169 != 0LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x702 = -1LL;
	int8_t x703 = INT8_MAX;
	int16_t x704 = INT16_MIN;

    t170 = ((x701<=(x702|x703))%x704);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x705 = -1;
	int8_t x706 = INT8_MIN;
	static volatile int8_t x708 = INT8_MIN;

    t171 = ((x705<=(x706|x707))%x708);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x709 = INT16_MIN;
	uint16_t x711 = UINT16_MAX;
	int16_t x712 = -1;
	static int32_t t172 = -4963559;

    t172 = ((x709<=(x710|x711))%x712);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x713 = INT16_MIN;
	int16_t x714 = -1;
	int8_t x715 = INT8_MIN;
	static uint64_t x716 = UINT64_MAX;
	volatile uint64_t t173 = 93488128LLU;

    t173 = ((x713<=(x714|x715))%x716);

    if (t173 != 1LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x718 = INT16_MAX;
	static int16_t x719 = -1;
	volatile uint64_t t174 = 7913209745923639003LLU;

    t174 = ((x717<=(x718|x719))%x720);

    if (t174 != 1LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x721 = -1;
	int64_t x722 = 55643442LL;
	uint16_t x723 = 1U;
	int8_t x724 = INT8_MIN;
	static int32_t t175 = 59;

    t175 = ((x721<=(x722|x723))%x724);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x725 = 61490692U;
	uint64_t x727 = 25949526482374LLU;
	volatile int8_t x728 = INT8_MIN;

    t176 = ((x725<=(x726|x727))%x728);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x730 = INT16_MIN;
	static int8_t x731 = 0;
	int32_t x732 = -1;
	volatile int32_t t177 = 200029;

    t177 = ((x729<=(x730|x731))%x732);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x733 = 172;
	volatile int8_t x734 = INT8_MIN;
	int32_t x735 = 3813362;
	uint16_t x736 = 15657U;
	int32_t t178 = -77;

    t178 = ((x733<=(x734|x735))%x736);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x737 = 899420418961973130LL;
	volatile int64_t x738 = 108383060324336LL;
	uint32_t x739 = 2U;
	int32_t t179 = -122;

    t179 = ((x737<=(x738|x739))%x740);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x743 = 122805066LLU;
	static uint32_t x744 = UINT32_MAX;
	uint32_t t180 = 240632990U;

    t180 = ((x741<=(x742|x743))%x744);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x745 = UINT8_MAX;
	int8_t x747 = 1;
	int32_t x748 = 149237203;

    t181 = ((x745<=(x746|x747))%x748);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int16_t x749 = INT16_MIN;
	static volatile uint32_t x750 = 15U;
	uint16_t x751 = 0U;
	int32_t x752 = INT32_MIN;
	int32_t t182 = 590043681;

    t182 = ((x749<=(x750|x751))%x752);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x753 = -1LL;
	int8_t x754 = 1;
	static volatile int8_t x755 = 13;
	int64_t x756 = 200377LL;
	volatile int64_t t183 = 1962270LL;

    t183 = ((x753<=(x754|x755))%x756);

    if (t183 != 1LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x758 = UINT64_MAX;
	int16_t x759 = -169;
	static volatile uint8_t x760 = 4U;
	volatile int32_t t184 = -3;

    t184 = ((x757<=(x758|x759))%x760);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x761 = INT64_MIN;
	uint64_t x762 = UINT64_MAX;
	static int8_t x763 = 59;
	uint8_t x764 = 3U;
	int32_t t185 = 1645765;

    t185 = ((x761<=(x762|x763))%x764);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x765 = 0U;
	int64_t x766 = -22847195987LL;
	int32_t x767 = INT32_MIN;
	volatile int64_t t186 = 547658374893023LL;

    t186 = ((x765<=(x766|x767))%x768);

    if (t186 != 0LL) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint64_t x771 = 271303039449071LLU;
	uint32_t x772 = 918961269U;
	volatile uint32_t t187 = 476U;

    t187 = ((x769<=(x770|x771))%x772);

    if (t187 != 0U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint8_t x773 = 3U;
	uint32_t x774 = 27802U;
	static int8_t x775 = -1;
	int64_t x776 = INT64_MIN;

    t188 = ((x773<=(x774|x775))%x776);

    if (t188 != 1LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int32_t x777 = 7223459;
	static int64_t x778 = INT64_MIN;
	uint32_t x779 = 76U;
	uint16_t x780 = 2121U;

    t189 = ((x777<=(x778|x779))%x780);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x781 = INT64_MIN;
	uint64_t x782 = UINT64_MAX;
	uint64_t x784 = UINT64_MAX;
	uint64_t t190 = 9823784039LLU;

    t190 = ((x781<=(x782|x783))%x784);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x785 = 361U;
	int16_t x788 = INT16_MAX;
	static volatile int32_t t191 = -125974415;

    t191 = ((x785<=(x786|x787))%x788);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint16_t x790 = 114U;
	int64_t x791 = INT64_MIN;
	int8_t x792 = INT8_MIN;
	volatile int32_t t192 = -28184270;

    t192 = ((x789<=(x790|x791))%x792);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x793 = INT8_MAX;
	uint8_t x794 = 28U;
	static int8_t x795 = INT8_MAX;
	volatile int16_t x796 = INT16_MIN;
	int32_t t193 = -29;

    t193 = ((x793<=(x794|x795))%x796);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x797 = INT8_MIN;
	int32_t x798 = INT32_MIN;
	uint32_t x799 = 10270U;
	int16_t x800 = INT16_MAX;
	volatile int32_t t194 = -31;

    t194 = ((x797<=(x798|x799))%x800);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x801 = UINT16_MAX;
	int32_t x802 = -5620804;
	static volatile uint64_t x804 = UINT64_MAX;
	volatile uint64_t t195 = 2LLU;

    t195 = ((x801<=(x802|x803))%x804);

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint64_t x805 = UINT64_MAX;
	uint32_t x806 = 61752733U;
	int8_t x807 = -3;
	int64_t t196 = 4LL;

    t196 = ((x805<=(x806|x807))%x808);

    if (t196 != 0LL) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x813 = INT16_MIN;
	int64_t x814 = -765512LL;
	int32_t x815 = -30;
	int32_t t197 = -29;

    t197 = ((x813<=(x814|x815))%x816);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x817 = INT8_MAX;
	static volatile uint64_t x818 = 460857LLU;
	int64_t x819 = 1LL;
	uint32_t x820 = UINT32_MAX;
	volatile uint32_t t198 = 15U;

    t198 = ((x817<=(x818|x819))%x820);

    if (t198 != 1U) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x823 = 7U;
	int64_t x824 = INT64_MAX;
	int64_t t199 = 1LL;

    t199 = ((x821<=(x822|x823))%x824);

    if (t199 != 1LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

