
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

uint16_t x7 = UINT16_MAX;
int32_t t1 = 15;
uint64_t x12 = UINT64_MAX;
static int32_t x13 = 1;
int64_t x17 = INT64_MAX;
static volatile int8_t x25 = -1;
int32_t x39 = INT32_MIN;
static uint8_t x42 = 3U;
int64_t x44 = -32668816941290LL;
int8_t x47 = 3;
uint64_t x48 = UINT64_MAX;
static uint64_t t9 = 1LLU;
volatile int64_t x55 = -634877LL;
static uint32_t x57 = UINT32_MAX;
uint16_t x58 = UINT16_MAX;
volatile int64_t t12 = INT64_MAX;
static int64_t x65 = -60522724LL;
int64_t t13 = 1839599702047LL;
static uint8_t x91 = 11U;
uint64_t x97 = 128725LLU;
volatile int32_t t19 = 1;
volatile uint64_t x114 = UINT64_MAX;
uint8_t x115 = UINT8_MAX;
uint32_t x116 = UINT32_MAX;
static uint32_t x142 = 194610U;
int8_t x145 = -1;
int32_t x152 = INT32_MAX;
uint64_t x153 = UINT64_MAX;
volatile uint32_t x155 = 1704U;
static uint64_t t27 = UINT64_MAX;
int16_t x157 = -1;
volatile int32_t t28 = 1312916;
int16_t x162 = -1;
int16_t x163 = INT16_MIN;
uint8_t x170 = 17U;
uint64_t x174 = 1815129LLU;
int32_t x177 = 125;
int64_t t34 = 58466615193358LL;
int64_t x185 = -3735564407LL;
uint32_t x186 = 8425559U;
int16_t x193 = INT16_MIN;
uint8_t x198 = 113U;
volatile int16_t x199 = -1;
static int16_t x206 = INT16_MIN;
volatile int64_t t39 = -3912520939198624LL;
uint16_t x221 = 1686U;
static int8_t x222 = INT8_MAX;
static uint32_t x226 = 459008U;
static uint16_t x229 = 533U;
int8_t x230 = -1;
static int64_t t45 = -261505356LL;
int16_t x234 = 77;
volatile uint64_t t46 = 3724246019447472LLU;
int8_t x239 = INT8_MIN;
volatile uint8_t x248 = UINT8_MAX;
static int16_t x250 = 1;
int64_t x251 = 1817986LL;
static int64_t x252 = INT64_MIN;
volatile uint32_t x254 = 18161U;
uint32_t t50 = 6418U;
uint16_t x259 = 19200U;
int32_t x262 = -74795;
uint64_t x264 = 1253126637LLU;
uint64_t t52 = 321114200890LLU;
int64_t x268 = 405LL;
uint64_t x276 = 97215215041502640LLU;
volatile int8_t x281 = INT8_MAX;
int16_t x282 = 2268;
static uint64_t t55 = 0LLU;
volatile uint64_t t56 = 13337704247LLU;
int8_t x289 = INT8_MIN;
uint64_t x291 = 58566883112813879LLU;
uint64_t t60 = 710088196943959123LLU;
int16_t x306 = INT16_MIN;
uint64_t x319 = 16251LLU;
uint64_t t64 = UINT64_MAX;
int32_t x321 = -1;
int16_t x323 = 10240;
static int32_t t65 = -4015;
int16_t x331 = -1;
static int8_t x375 = INT8_MAX;
static int32_t x384 = -1;
uint8_t x385 = 110U;
int8_t x387 = INT8_MIN;
static int8_t x390 = -1;
static uint8_t x399 = UINT8_MAX;
volatile uint32_t x400 = 46U;
static volatile int64_t t79 = -1081331911681LL;
static uint64_t x406 = 1LLU;
uint32_t x415 = 52441601U;
uint16_t x421 = 3U;
uint64_t x430 = UINT64_MAX;
int32_t x434 = 112414187;
int8_t x435 = INT8_MIN;
volatile int32_t x442 = -1;
volatile int32_t x452 = -1;
int32_t x453 = -555384;
uint32_t x462 = 12973U;
int64_t x470 = -1LL;
volatile int32_t x476 = INT32_MIN;
volatile int64_t x479 = -744LL;
volatile uint64_t x481 = 23787410151494373LLU;
int32_t x483 = -1;
static uint64_t x488 = UINT64_MAX;
uint64_t x491 = 745801562134834LLU;
static int64_t x492 = INT64_MAX;
uint16_t x493 = UINT16_MAX;
int16_t x497 = INT16_MIN;
uint64_t x502 = UINT64_MAX;
uint64_t x509 = 21501423684583205LLU;
int8_t x510 = INT8_MAX;
int32_t x511 = INT32_MIN;
int16_t x515 = -1;
int64_t x517 = -1LL;
volatile int64_t t105 = 250183835028LL;
volatile int64_t t106 = -130314560510286LL;
int32_t x525 = -462464820;
int32_t x526 = -67;
volatile int64_t x528 = INT64_MIN;
uint8_t x533 = UINT8_MAX;
uint32_t x544 = 299U;
volatile int8_t x581 = INT8_MAX;
uint16_t x583 = UINT16_MAX;
volatile uint32_t x585 = UINT32_MAX;
uint16_t x588 = 1U;
uint16_t x595 = 86U;
int16_t x615 = 2281;
static uint32_t x622 = 1937557U;
volatile uint64_t x623 = 734124450804559634LLU;
int16_t x626 = -314;
int16_t x627 = -1;
int16_t x635 = INT16_MIN;
int8_t x639 = 1;
int32_t t131 = -1664;
uint64_t x645 = 7480LLU;
static int64_t x647 = -32383586LL;
static uint16_t x648 = 8U;
int32_t x649 = INT32_MAX;
int32_t x652 = INT32_MIN;
uint16_t x661 = 1U;
volatile int32_t x664 = INT32_MIN;
volatile uint16_t x665 = 7U;
int8_t x666 = 4;
volatile int64_t x674 = -33687LL;
volatile int64_t t138 = 179LL;
volatile int8_t x678 = INT8_MIN;
static uint32_t x681 = UINT32_MAX;
uint64_t t140 = 10209156489LLU;
uint64_t t141 = 0LLU;
static uint16_t x689 = UINT16_MAX;
int64_t x704 = -382337570766936303LL;
int16_t x712 = INT16_MIN;
static uint64_t t146 = 3363176883919LLU;
int64_t t147 = INT64_MAX;
uint16_t x719 = UINT16_MAX;
int64_t x726 = -1LL;
static volatile int8_t x729 = INT8_MIN;
volatile uint16_t x736 = UINT16_MAX;
static int8_t x738 = 24;
static uint32_t x740 = UINT32_MAX;
int16_t x751 = INT16_MAX;
int32_t x758 = 1;
volatile uint64_t t156 = 316LLU;
static volatile int16_t x767 = INT16_MIN;
volatile uint32_t x769 = 336U;
uint8_t x770 = 1U;
volatile int64_t t158 = 2821LL;
int16_t x773 = -269;
int64_t x776 = INT64_MIN;
int32_t x792 = INT32_MIN;
static int64_t t164 = 55761LL;
uint64_t x810 = 12908459LLU;
uint32_t x813 = 214U;
static uint32_t t168 = 12764U;
volatile int8_t x822 = INT8_MAX;
int16_t x824 = INT16_MIN;
static int16_t x832 = -93;
volatile uint64_t t178 = 2696LLU;
int16_t x863 = 1369;
int64_t x867 = 92102460097129261LL;
static volatile uint64_t x873 = 960805LLU;
volatile int8_t x875 = INT8_MIN;
uint64_t t182 = 559644LLU;
int8_t x884 = INT8_MIN;
uint64_t t183 = 31882471264361LLU;
volatile uint8_t x886 = 7U;
uint64_t x889 = 697LLU;
static int16_t x891 = INT16_MIN;
static int16_t x893 = INT16_MAX;
uint8_t x894 = 2U;
uint8_t x896 = UINT8_MAX;
static uint64_t x897 = 4204771052578205393LLU;
uint64_t x900 = 118265119436061LLU;
uint16_t x901 = UINT16_MAX;
int32_t x902 = -450737;
int32_t t189 = -12;
int64_t x910 = -143376590093140469LL;
uint16_t x912 = UINT16_MAX;
uint16_t x914 = 2U;
volatile int8_t x916 = INT8_MAX;
uint8_t x917 = 5U;
int64_t x918 = -153145664939120LL;
int64_t x928 = 21412464LL;
int16_t x929 = -1;
volatile uint16_t x934 = 44U;
volatile uint64_t t196 = UINT64_MAX;
int16_t x949 = INT16_MIN;


void f0(void) {
    	int8_t x1 = 16;
	int32_t x2 = -1;
	int8_t x3 = -1;
	int32_t x4 = -1;
	int32_t t0 = -4983;

    t0 = (x1-(x2*(x3/x4)));

    if (t0 != 17) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	static int32_t x6 = -1;
	int32_t x8 = INT32_MIN;

    t1 = (x5-(x6*(x7/x8)));

    if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -29;
	static volatile uint16_t x10 = 14455U;
	volatile int32_t x11 = -1;
	volatile uint64_t t2 = 1400485686LLU;

    t2 = (x9-(x10*(x11/x12)));

    if (t2 != 18446744073709537132LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile int32_t x14 = 13;
	int32_t x15 = -171967605;
	int64_t x16 = 258239538LL;
	int64_t t3 = 2225186390916020LL;

    t3 = (x13-(x14*(x15/x16)));

    if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = UINT8_MAX;
	volatile int8_t x19 = -1;
	static int32_t x20 = INT32_MIN;
	volatile int64_t t4 = INT64_MAX;

    t4 = (x17-(x18*(x19/x20)));

    if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x26 = 1U;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t5 = 0;

    t5 = (x25-(x26*(x27/x28)));

    if (t5 != -16777217) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x33 = INT64_MAX;
	int64_t x34 = INT64_MIN;
	uint16_t x35 = 829U;
	int32_t x36 = 1007050073;
	static volatile int64_t t6 = INT64_MAX;

    t6 = (x33-(x34*(x35/x36)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 14929U;
	static int32_t x38 = INT32_MAX;
	uint32_t x40 = 1120U;
	volatile uint32_t t7 = 217551U;

    t7 = (x37-(x38*(x39/x40)));

    if (t7 != 1932325U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint64_t x41 = 10LLU;
	uint64_t x43 = UINT64_MAX;
	static volatile uint64_t t8 = 6359239903LLU;

    t8 = (x41-(x42*(x43/x44)));

    if (t8 != 7LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x45 = -1197223;
	static int32_t x46 = -1;

    t9 = (x45-(x46*(x47/x48)));

    if (t9 != 18446744073708354393LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint32_t x53 = UINT32_MAX;
	uint64_t x54 = UINT64_MAX;
	static int16_t x56 = -1;
	volatile uint64_t t10 = 1616252LLU;

    t10 = (x53-(x54*(x55/x56)));

    if (t10 != 4295602172LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x59 = INT16_MAX;
	volatile int8_t x60 = -13;
	volatile uint32_t t11 = 421202554U;

    t11 = (x57-(x58*(x59/x60)));

    if (t11 != 165148199U) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x61 = INT64_MAX;
	uint32_t x62 = 71U;
	static int8_t x63 = 1;
	uint32_t x64 = 20565851U;

    t12 = (x61-(x62*(x63/x64)));

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x66 = -10;
	int8_t x67 = 0;
	int64_t x68 = INT64_MAX;

    t13 = (x65-(x66*(x67/x68)));

    if (t13 != -60522724LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x85 = INT16_MAX;
	uint8_t x86 = 88U;
	int16_t x87 = INT16_MIN;
	int32_t x88 = -515377;
	int32_t t14 = 13;

    t14 = (x85-(x86*(x87/x88)));

    if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x89 = -1;
	int8_t x90 = 34;
	int8_t x92 = INT8_MIN;
	int32_t t15 = 2947;

    t15 = (x89-(x90*(x91/x92)));

    if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x98 = 611U;
	int8_t x99 = 10;
	int8_t x100 = -1;
	uint64_t t16 = 38982LLU;

    t16 = (x97-(x98*(x99/x100)));

    if (t16 != 134835LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint32_t x101 = 211627273U;
	uint64_t x102 = 68LLU;
	int8_t x103 = INT8_MIN;
	int16_t x104 = INT16_MIN;
	uint64_t t17 = 98265721736LLU;

    t17 = (x101-(x102*(x103/x104)));

    if (t17 != 211627273LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x105 = -8;
	volatile uint8_t x106 = UINT8_MAX;
	volatile uint32_t x107 = UINT32_MAX;
	static volatile uint64_t x108 = 1LLU;
	static uint64_t t18 = 3126LLU;

    t18 = (x105-(x106*(x107/x108)));

    if (t18 != 18446742978492891383LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x109 = INT8_MIN;
	int8_t x110 = 2;
	int32_t x111 = 123688;
	static int32_t x112 = -900;

    t19 = (x109-(x110*(x111/x112)));

    if (t19 != 146) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x113 = INT8_MAX;
	uint64_t t20 = 166181660368870831LLU;

    t20 = (x113-(x114*(x115/x116)));

    if (t20 != 127LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int8_t x121 = INT8_MIN;
	volatile uint16_t x122 = 7U;
	uint8_t x123 = UINT8_MAX;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t21 = 523469;

    t21 = (x121-(x122*(x123/x124)));

    if (t21 != -121) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x125 = 15U;
	int16_t x126 = -1;
	int32_t x127 = 0;
	int8_t x128 = INT8_MIN;
	static volatile int32_t t22 = -2898;

    t22 = (x125-(x126*(x127/x128)));

    if (t22 != 15) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x137 = INT32_MIN;
	int32_t x138 = -47483;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	static volatile int64_t t23 = -494890997LL;

    t23 = (x137-(x138*(x139/x140)));

    if (t23 != -2147436165LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static int8_t x141 = -1;
	static volatile uint8_t x143 = 4U;
	uint16_t x144 = 178U;
	static volatile uint32_t t24 = UINT32_MAX;

    t24 = (x141-(x142*(x143/x144)));

    if (t24 != UINT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int16_t x146 = -25;
	uint16_t x147 = 0U;
	volatile int32_t x148 = INT32_MAX;
	static volatile int32_t t25 = -52115055;

    t25 = (x145-(x146*(x147/x148)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x149 = INT64_MIN;
	int8_t x150 = -1;
	int32_t x151 = 1;
	static int64_t t26 = INT64_MIN;

    t26 = (x149-(x150*(x151/x152)));

    if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x154 = 1291U;
	int64_t x156 = INT64_MIN;

    t27 = (x153-(x154*(x155/x156)));

    if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
    	static int16_t x158 = -1;
	volatile uint16_t x159 = 17U;
	volatile uint16_t x160 = 276U;

    t28 = (x157-(x158*(x159/x160)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint32_t x161 = 12970802U;
	uint8_t x164 = 80U;
	uint32_t t29 = 3672U;

    t29 = (x161-(x162*(x163/x164)));

    if (t29 != 12970393U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x165 = -27LL;
	uint8_t x166 = 2U;
	int32_t x167 = INT32_MIN;
	volatile uint64_t x168 = 1151009725220267157LLU;
	static uint64_t t30 = 1189LLU;

    t30 = (x165-(x166*(x167/x168)));

    if (t30 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x169 = INT32_MAX;
	int8_t x171 = -1;
	static int8_t x172 = INT8_MIN;
	int32_t t31 = INT32_MAX;

    t31 = (x169-(x170*(x171/x172)));

    if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = -1;
	static volatile uint8_t x175 = UINT8_MAX;
	static int8_t x176 = INT8_MAX;
	uint64_t t32 = 15317431511LLU;

    t32 = (x173-(x174*(x175/x176)));

    if (t32 != 18446744073705921357LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	int32_t x180 = INT32_MAX;
	volatile int32_t t33 = 1;

    t33 = (x177-(x178*(x179/x180)));

    if (t33 != 125) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x181 = 595822177736LL;
	int32_t x182 = -1;
	static uint8_t x183 = UINT8_MAX;
	int16_t x184 = -376;

    t34 = (x181-(x182*(x183/x184)));

    if (t34 != 595822177736LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x187 = INT8_MAX;
	static volatile int64_t x188 = INT64_MIN;
	volatile int64_t t35 = 1LL;

    t35 = (x185-(x186*(x187/x188)));

    if (t35 != -3735564407LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x194 = 37807411332LL;
	uint32_t x195 = 57458U;
	int8_t x196 = INT8_MAX;
	int64_t t36 = 111LL;

    t36 = (x193-(x194*(x195/x196)));

    if (t36 != -17088949954832LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x197 = INT16_MIN;
	int8_t x200 = INT8_MAX;
	int32_t t37 = 63466;

    t37 = (x197-(x198*(x199/x200)));

    if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x201 = UINT8_MAX;
	static int32_t x202 = -1;
	static volatile int64_t x203 = 651LL;
	uint8_t x204 = 1U;
	int64_t t38 = -9572LL;

    t38 = (x201-(x202*(x203/x204)));

    if (t38 != 906LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x205 = -5066;
	static volatile int64_t x207 = INT64_MIN;
	static volatile uint32_t x208 = UINT32_MAX;

    t39 = (x205-(x206*(x207/x208)));

    if (t39 != -70368744182730LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x209 = INT64_MIN;
	uint32_t x210 = 69744011U;
	volatile int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MIN;
	volatile int64_t t40 = INT64_MIN;

    t40 = (x209-(x210*(x211/x212)));

    if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x213 = 6432995U;
	uint16_t x214 = 2U;
	uint64_t x215 = 249155049835670734LLU;
	int32_t x216 = INT32_MIN;
	static volatile uint64_t t41 = 118LLU;

    t41 = (x213-(x214*(x215/x216)));

    if (t41 != 6432995LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int64_t x217 = -1386959161029480LL;
	static uint32_t x218 = UINT32_MAX;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = UINT16_MAX;
	volatile int64_t t42 = -12372LL;

    t42 = (x217-(x218*(x219/x220)));

    if (t42 != -1386959161029480LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x223 = 1U;
	int16_t x224 = -1;
	int32_t t43 = 1;

    t43 = (x221-(x222*(x223/x224)));

    if (t43 != 1813) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x225 = INT16_MIN;
	static int8_t x227 = -1;
	int64_t x228 = -84580595LL;
	volatile int64_t t44 = 780604592LL;

    t44 = (x225-(x226*(x227/x228)));

    if (t44 != -32768LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x231 = INT64_MIN;
	static int8_t x232 = INT8_MIN;

    t45 = (x229-(x230*(x231/x232)));

    if (t45 != 72057594037928469LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x233 = 5452941289LLU;
	int32_t x235 = INT32_MAX;
	uint16_t x236 = 351U;

    t46 = (x233-(x234*(x235/x236)));

    if (t46 != 4981840890LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint8_t x237 = 1U;
	uint64_t x238 = 746125146LLU;
	int16_t x240 = -297;
	uint64_t t47 = 312LLU;

    t47 = (x237-(x238*(x239/x240)));

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x245 = 161995520565679LL;
	volatile int8_t x246 = INT8_MIN;
	int64_t x247 = INT64_MAX;
	volatile int64_t t48 = -4LL;

    t48 = (x245-(x246*(x247/x248)));

    if (t48 != 4629933057157472687LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x249 = INT32_MAX;
	volatile int64_t t49 = -66605970LL;

    t49 = (x249-(x250*(x251/x252)));

    if (t49 != 2147483647LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x253 = 2152U;
	int16_t x255 = INT16_MIN;
	volatile int16_t x256 = -1;

    t50 = (x253-(x254*(x255/x256)));

    if (t50 != 3699869800U) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x257 = 7U;
	volatile uint8_t x258 = 7U;
	static uint16_t x260 = 9348U;
	int32_t t51 = 1465267;

    t51 = (x257-(x258*(x259/x260)));

    if (t51 != -7) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int64_t x261 = -12351LL;
	int32_t x263 = INT32_MAX;

    t52 = (x261-(x262*(x263/x264)));

    if (t52 != 62444LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x265 = UINT8_MAX;
	static uint64_t x266 = 455263LLU;
	int16_t x267 = INT16_MIN;
	volatile uint64_t t53 = 9603811LLU;

    t53 = (x265-(x266*(x267/x268)));

    if (t53 != 36421295LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x273 = INT32_MIN;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MAX;
	uint64_t t54 = 49LLU;

    t54 = (x273-(x274*(x275/x276)));

    if (t54 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x283 = 119430266157434LLU;
	static int8_t x284 = INT8_MAX;

    t55 = (x281-(x282*(x283/x284)));

    if (t55 != 18444611256043055723LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x285 = INT32_MAX;
	int32_t x286 = INT32_MIN;
	uint64_t x287 = 125651885192LLU;
	static int32_t x288 = INT32_MIN;

    t56 = (x285-(x286*(x287/x288)));

    if (t56 != 2147483647LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x290 = 5560179U;
	static int8_t x292 = INT8_MIN;
	volatile uint64_t t57 = 256670109287171LLU;

    t57 = (x289-(x290*(x291/x292)));

    if (t57 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x293 = UINT64_MAX;
	uint32_t x294 = UINT32_MAX;
	static uint16_t x295 = 2840U;
	int16_t x296 = INT16_MIN;
	static uint64_t t58 = UINT64_MAX;

    t58 = (x293-(x294*(x295/x296)));

    if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
    	static volatile uint8_t x297 = 12U;
	int16_t x298 = INT16_MIN;
	int32_t x299 = INT32_MAX;
	int32_t x300 = 190635;
	int32_t t59 = 3625;

    t59 = (x297-(x298*(x299/x300)));

    if (t59 != 369098764) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MAX;
	uint64_t x303 = 52419687084LLU;
	static int32_t x304 = 15;

    t60 = (x301-(x302*(x303/x304)));

    if (t60 != 18446629564650459436LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	int16_t x307 = INT16_MIN;
	int32_t x308 = 25560;
	int32_t t61 = 7466503;

    t61 = (x305-(x306*(x307/x308)));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x309 = INT8_MAX;
	static int32_t x310 = 0;
	uint64_t x311 = UINT64_MAX;
	uint16_t x312 = 10U;
	volatile uint64_t t62 = 8072687LLU;

    t62 = (x309-(x310*(x311/x312)));

    if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x313 = UINT16_MAX;
	int64_t x314 = -1LL;
	uint32_t x315 = 56641943U;
	int8_t x316 = INT8_MIN;
	volatile int64_t t63 = 3LL;

    t63 = (x313-(x314*(x315/x316)));

    if (t63 != 65535LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x317 = -1;
	int16_t x318 = INT16_MAX;
	volatile uint64_t x320 = UINT64_MAX;

    t64 = (x317-(x318*(x319/x320)));

    if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x322 = 1631;
	static int32_t x324 = INT32_MAX;

    t65 = (x321-(x322*(x323/x324)));

    if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x329 = 183037;
	int64_t x330 = -1LL;
	int8_t x332 = INT8_MIN;
	int64_t t66 = -261787395909533LL;

    t66 = (x329-(x330*(x331/x332)));

    if (t66 != 183037LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x337 = INT64_MIN;
	static int64_t x338 = INT64_MIN;
	uint64_t x339 = UINT64_MAX;
	static volatile int64_t x340 = INT64_MAX;
	uint64_t t67 = 205970806LLU;

    t67 = (x337-(x338*(x339/x340)));

    if (t67 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x345 = INT32_MAX;
	int64_t x346 = -62522503426476824LL;
	uint64_t x347 = 150314168LLU;
	volatile uint32_t x348 = 7742120U;
	uint64_t t68 = 68526437622731LLU;

    t68 = (x345-(x346*(x347/x348)));

    if (t68 != 1187927567250543303LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x353 = 999LLU;
	int32_t x354 = -1;
	volatile uint8_t x355 = UINT8_MAX;
	uint64_t x356 = 2661899944LLU;
	volatile uint64_t t69 = 89586004445980363LLU;

    t69 = (x353-(x354*(x355/x356)));

    if (t69 != 999LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x361 = -1;
	int8_t x362 = INT8_MAX;
	volatile int8_t x363 = -35;
	int32_t x364 = 140822;
	volatile int32_t t70 = 49999405;

    t70 = (x361-(x362*(x363/x364)));

    if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MAX;
	int32_t x367 = -1;
	static int8_t x368 = INT8_MIN;
	static volatile int32_t t71 = 28;

    t71 = (x365-(x366*(x367/x368)));

    if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
    	int64_t x369 = -14LL;
	volatile int64_t x370 = INT64_MAX;
	int64_t x371 = -1LL;
	int16_t x372 = 842;
	volatile int64_t t72 = -607LL;

    t72 = (x369-(x370*(x371/x372)));

    if (t72 != -14LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x373 = 9U;
	volatile uint64_t x374 = 49LLU;
	int16_t x376 = -1;
	volatile uint64_t t73 = 598248730773074LLU;

    t73 = (x373-(x374*(x375/x376)));

    if (t73 != 6232LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x377 = UINT64_MAX;
	static int8_t x378 = INT8_MIN;
	uint32_t x379 = 24U;
	int64_t x380 = INT64_MAX;
	uint64_t t74 = UINT64_MAX;

    t74 = (x377-(x378*(x379/x380)));

    if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint16_t x381 = UINT16_MAX;
	static int64_t x382 = 5378978975579LL;
	int16_t x383 = INT16_MIN;
	volatile int64_t t75 = -30515672LL;

    t75 = (x381-(x382*(x383/x384)));

    if (t75 != -176258383071707137LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x386 = 1U;
	static volatile int16_t x388 = -1;
	static int32_t t76 = -5300120;

    t76 = (x385-(x386*(x387/x388)));

    if (t76 != -18) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x389 = 13;
	int32_t x391 = INT32_MIN;
	volatile int16_t x392 = -39;
	volatile int32_t t77 = 18999055;

    t77 = (x389-(x390*(x391/x392)));

    if (t77 != 55063696) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x393 = -1LL;
	int8_t x394 = 15;
	static uint64_t x395 = UINT64_MAX;
	uint64_t x396 = 55LLU;
	uint64_t t78 = 60617372664290871LLU;

    t78 = (x393-(x394*(x395/x396)));

    if (t78 != 13415813871788764815LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x397 = -236810LL;
	int16_t x398 = -109;

    t79 = (x397-(x398*(x399/x400)));

    if (t79 != -4295203561LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x405 = 4600050LLU;
	int8_t x407 = -6;
	volatile int8_t x408 = INT8_MIN;
	volatile uint64_t t80 = 44237372855870LLU;

    t80 = (x405-(x406*(x407/x408)));

    if (t80 != 4600050LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint8_t x409 = 1U;
	int16_t x410 = -2;
	int32_t x411 = INT32_MIN;
	static uint8_t x412 = 14U;
	volatile int32_t t81 = -139502;

    t81 = (x409-(x410*(x411/x412)));

    if (t81 != -306783377) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x413 = UINT16_MAX;
	static uint64_t x414 = 57920700164LLU;
	int16_t x416 = -10327;
	uint64_t t82 = 14271191LLU;

    t82 = (x413-(x414*(x415/x416)));

    if (t82 != 65535LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x422 = 113487813LLU;
	int8_t x423 = INT8_MIN;
	static int16_t x424 = INT16_MIN;
	uint64_t t83 = 446LLU;

    t83 = (x421-(x422*(x423/x424)));

    if (t83 != 3LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x425 = INT16_MIN;
	static int16_t x426 = INT16_MIN;
	int8_t x427 = INT8_MIN;
	int32_t x428 = INT32_MIN;
	int32_t t84 = 65;

    t84 = (x425-(x426*(x427/x428)));

    if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x429 = INT64_MAX;
	int8_t x431 = 2;
	int32_t x432 = -1;
	volatile uint64_t t85 = 65669067LLU;

    t85 = (x429-(x430*(x431/x432)));

    if (t85 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x433 = INT32_MIN;
	int64_t x436 = INT64_MIN;
	int64_t t86 = -1019768154719399LL;

    t86 = (x433-(x434*(x435/x436)));

    if (t86 != -2147483648LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int64_t x437 = -1LL;
	int64_t x438 = INT64_MAX;
	uint64_t x439 = 19349809LLU;
	int64_t x440 = 5226613822LL;
	volatile uint64_t t87 = UINT64_MAX;

    t87 = (x437-(x438*(x439/x440)));

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	static int32_t x441 = -74751557;
	static volatile int32_t x443 = INT32_MAX;
	volatile uint64_t x444 = 4LLU;
	static volatile uint64_t t88 = 17759325LLU;

    t88 = (x441-(x442*(x443/x444)));

    if (t88 != 462119354LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static int16_t x445 = 1;
	uint8_t x446 = 10U;
	int8_t x447 = 50;
	uint32_t x448 = 127311U;
	uint32_t t89 = 1U;

    t89 = (x445-(x446*(x447/x448)));

    if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x449 = 36642U;
	volatile int16_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	uint32_t t90 = 165U;

    t90 = (x449-(x450*(x451/x452)));

    if (t90 != 36643U) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint16_t x454 = 10U;
	int64_t x455 = -1LL;
	volatile int8_t x456 = INT8_MIN;
	volatile int64_t t91 = -437555LL;

    t91 = (x453-(x454*(x455/x456)));

    if (t91 != -555384LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x457 = 0;
	int32_t x458 = INT32_MIN;
	uint8_t x459 = 107U;
	int32_t x460 = INT32_MIN;
	static volatile int32_t t92 = 19233198;

    t92 = (x457-(x458*(x459/x460)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x461 = -12;
	uint16_t x463 = 26794U;
	volatile int64_t x464 = -37832959927487453LL;
	volatile int64_t t93 = -838793063062119697LL;

    t93 = (x461-(x462*(x463/x464)));

    if (t93 != -12LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int8_t x469 = INT8_MIN;
	int8_t x471 = -1;
	volatile int16_t x472 = INT16_MAX;
	volatile int64_t t94 = -11478456LL;

    t94 = (x469-(x470*(x471/x472)));

    if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint64_t x473 = 87018LLU;
	int16_t x474 = INT16_MAX;
	int32_t x475 = -742958431;
	volatile uint64_t t95 = 24983520048LLU;

    t95 = (x473-(x474*(x475/x476)));

    if (t95 != 87018LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x477 = INT16_MIN;
	uint8_t x478 = 2U;
	static int16_t x480 = -1;
	volatile int64_t t96 = 49070449LL;

    t96 = (x477-(x478*(x479/x480)));

    if (t96 != -34256LL) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x482 = 9U;
	static int16_t x484 = INT16_MIN;
	uint64_t t97 = 62206575LLU;

    t97 = (x481-(x482*(x483/x484)));

    if (t97 != 23787410151494373LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x485 = -1;
	uint8_t x486 = 5U;
	static int32_t x487 = 504;
	uint64_t t98 = UINT64_MAX;

    t98 = (x485-(x486*(x487/x488)));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static int8_t x489 = INT8_MAX;
	static int64_t x490 = -1LL;
	volatile uint64_t t99 = 1904635LLU;

    t99 = (x489-(x490*(x491/x492)));

    if (t99 != 127LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x494 = 3524U;
	volatile int32_t x495 = -1;
	int8_t x496 = -1;
	uint32_t t100 = 14055141U;

    t100 = (x493-(x494*(x495/x496)));

    if (t100 != 62011U) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint32_t x498 = 170460241U;
	int8_t x499 = 2;
	volatile uint16_t x500 = 3U;
	volatile uint32_t t101 = 121060U;

    t101 = (x497-(x498*(x499/x500)));

    if (t101 != 4294934528U) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint32_t x501 = 63505U;
	static uint16_t x503 = 2U;
	int8_t x504 = INT8_MAX;
	uint64_t t102 = 620549168544333841LLU;

    t102 = (x501-(x502*(x503/x504)));

    if (t102 != 63505LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint64_t x512 = UINT64_MAX;
	uint64_t t103 = 465972407908LLU;

    t103 = (x509-(x510*(x511/x512)));

    if (t103 != 21501423684583205LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x513 = -1;
	int64_t x514 = 83925485LL;
	int64_t x516 = INT64_MAX;
	volatile int64_t t104 = -3755398LL;

    t104 = (x513-(x514*(x515/x516)));

    if (t104 != -1LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x518 = 0U;
	int32_t x519 = INT32_MIN;
	int8_t x520 = INT8_MIN;

    t105 = (x517-(x518*(x519/x520)));

    if (t105 != -1LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x521 = -1;
	uint8_t x522 = 9U;
	int64_t x523 = 0LL;
	volatile int8_t x524 = 21;

    t106 = (x521-(x522*(x523/x524)));

    if (t106 != -1LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x527 = INT32_MIN;
	int64_t t107 = 3034065794895810LL;

    t107 = (x525-(x526*(x527/x528)));

    if (t107 != -462464820LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x534 = 6896;
	int32_t x535 = INT32_MAX;
	int64_t x536 = 178157LL;
	int64_t t108 = 15111508397233LL;

    t108 = (x533-(x534*(x535/x536)));

    if (t108 != -83117233LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x537 = 0U;
	int16_t x538 = -462;
	static int16_t x539 = -1;
	uint8_t x540 = UINT8_MAX;
	static volatile int32_t t109 = -2;

    t109 = (x537-(x538*(x539/x540)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x541 = INT64_MAX;
	int64_t x542 = 11LL;
	static int32_t x543 = -1;
	static int64_t t110 = 708LL;

    t110 = (x541-(x542*(x543/x544)));

    if (t110 != 9223372036696766978LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x545 = INT32_MAX;
	int64_t x546 = -1LL;
	uint64_t x547 = 113038661894LLU;
	static int32_t x548 = INT32_MIN;
	static uint64_t t111 = 282LLU;

    t111 = (x545-(x546*(x547/x548)));

    if (t111 != 2147483647LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x553 = INT16_MAX;
	uint32_t x554 = 45625644U;
	uint64_t x555 = 25017561123592LLU;
	uint64_t x556 = 64267928759991LLU;
	uint64_t t112 = 1661029152913LLU;

    t112 = (x553-(x554*(x555/x556)));

    if (t112 != 32767LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	static volatile int64_t x561 = INT64_MAX;
	int32_t x562 = INT32_MIN;
	int64_t x563 = -1LL;
	int32_t x564 = INT32_MAX;
	static int64_t t113 = INT64_MAX;

    t113 = (x561-(x562*(x563/x564)));

    if (t113 != INT64_MAX) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x569 = INT8_MAX;
	int8_t x570 = -3;
	int8_t x571 = -32;
	uint64_t x572 = UINT64_MAX;
	uint64_t t114 = 61206240328366332LLU;

    t114 = (x569-(x570*(x571/x572)));

    if (t114 != 127LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x577 = -1;
	static uint8_t x578 = 17U;
	uint64_t x579 = UINT64_MAX;
	volatile int8_t x580 = INT8_MAX;
	uint64_t t115 = 126134LLU;

    t115 = (x577-(x578*(x579/x580)));

    if (t115 != 15977494866992525021LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x582 = INT32_MIN;
	volatile int64_t x584 = INT64_MIN;
	volatile int64_t t116 = 331800871447192LL;

    t116 = (x581-(x582*(x583/x584)));

    if (t116 != 127LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x586 = INT16_MAX;
	volatile int64_t x587 = 212962317654040LL;
	volatile int64_t t117 = -23LL;

    t117 = (x585-(x586*(x587/x588)));

    if (t117 != -6978136258274961385LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x589 = INT16_MAX;
	int16_t x590 = -1;
	volatile uint8_t x591 = UINT8_MAX;
	static int32_t x592 = 36279138;
	static volatile int32_t t118 = -1751;

    t118 = (x589-(x590*(x591/x592)));

    if (t118 != 32767) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x593 = 7;
	static int64_t x594 = -629994116803755775LL;
	int16_t x596 = INT16_MIN;
	static volatile int64_t t119 = -913705138LL;

    t119 = (x593-(x594*(x595/x596)));

    if (t119 != 7LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x597 = 4U;
	uint16_t x598 = 155U;
	int16_t x599 = -1;
	uint64_t x600 = 1984745223LLU;
	uint64_t t120 = 17673390587867LLU;

    t120 = (x597-(x598*(x599/x600)));

    if (t120 != 18446742633098788015LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x601 = 2U;
	int32_t x602 = INT32_MIN;
	int32_t x603 = 62869244;
	uint32_t x604 = 16731975U;
	uint32_t t121 = 44064792U;

    t121 = (x601-(x602*(x603/x604)));

    if (t121 != 2147483650U) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int64_t x605 = INT64_MAX;
	volatile int16_t x606 = INT16_MIN;
	static uint32_t x607 = 233423U;
	static uint64_t x608 = 6528LLU;
	volatile uint64_t t122 = 291168750LLU;

    t122 = (x605-(x606*(x607/x608)));

    if (t122 != 9223372036855922687LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x609 = INT16_MAX;
	int8_t x610 = -1;
	int16_t x611 = 893;
	int32_t x612 = INT32_MIN;
	volatile int32_t t123 = 28;

    t123 = (x609-(x610*(x611/x612)));

    if (t123 != 32767) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x613 = 11;
	volatile int8_t x614 = INT8_MAX;
	int64_t x616 = INT64_MIN;
	volatile int64_t t124 = -23231654260LL;

    t124 = (x613-(x614*(x615/x616)));

    if (t124 != 11LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x617 = UINT64_MAX;
	uint16_t x618 = UINT16_MAX;
	uint64_t x619 = UINT64_MAX;
	uint64_t x620 = UINT64_MAX;
	volatile uint64_t t125 = 3759LLU;

    t125 = (x617-(x618*(x619/x620)));

    if (t125 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x621 = INT32_MIN;
	int64_t x624 = -10981746357112LL;
	volatile uint64_t t126 = 25641LLU;

    t126 = (x621-(x622*(x623/x624)));

    if (t126 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x625 = -2044;
	uint64_t x628 = 426192311432LLU;
	uint64_t t127 = 14726510241LLU;

    t127 = (x625-(x626*(x627/x628)));

    if (t127 != 13590758220LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x629 = -1;
	uint8_t x630 = 8U;
	uint16_t x631 = 20209U;
	uint16_t x632 = 3650U;
	int32_t t128 = 50373465;

    t128 = (x629-(x630*(x631/x632)));

    if (t128 != -41) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x634 = -1;
	static int64_t x636 = INT64_MIN;
	volatile int64_t t129 = INT64_MIN;

    t129 = (x633-(x634*(x635/x636)));

    if (t129 != INT64_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x637 = 2518983;
	int32_t x638 = INT32_MIN;
	int64_t x640 = INT64_MIN;
	static int64_t t130 = 6LL;

    t130 = (x637-(x638*(x639/x640)));

    if (t130 != 2518983LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x641 = UINT16_MAX;
	int8_t x642 = -21;
	static int16_t x643 = INT16_MIN;
	int32_t x644 = INT32_MIN;

    t131 = (x641-(x642*(x643/x644)));

    if (t131 != 65535) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x646 = -1;
	uint64_t t132 = 5789954LLU;

    t132 = (x645-(x646*(x647/x648)));

    if (t132 != 18446744073705511148LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint8_t x650 = UINT8_MAX;
	int8_t x651 = INT8_MAX;
	int32_t t133 = INT32_MAX;

    t133 = (x649-(x650*(x651/x652)));

    if (t133 != INT32_MAX) { NG(); } else { ; }
	
}

void f134(void) {
    	uint64_t x653 = 0LLU;
	int8_t x654 = -15;
	int64_t x655 = INT64_MIN;
	uint16_t x656 = 135U;
	volatile uint64_t t134 = 323LLU;

    t134 = (x653-(x654*(x655/x656)));

    if (t134 != 17421924958503465421LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x657 = 59U;
	int8_t x658 = -1;
	volatile uint64_t x659 = UINT64_MAX;
	static int64_t x660 = INT64_MIN;
	uint64_t t135 = 858640369716851424LLU;

    t135 = (x657-(x658*(x659/x660)));

    if (t135 != 60LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x662 = -1;
	int64_t x663 = INT64_MIN;
	volatile int64_t t136 = -1LL;

    t136 = (x661-(x662*(x663/x664)));

    if (t136 != 4294967297LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x667 = UINT64_MAX;
	static uint32_t x668 = 25603U;
	uint64_t t137 = 106988303657345LLU;

    t137 = (x665-(x666*(x667/x668)));

    if (t137 != 18443862107678428779LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x673 = -1710858279LL;
	volatile int8_t x675 = INT8_MIN;
	int64_t x676 = 2389782863290673810LL;

    t138 = (x673-(x674*(x675/x676)));

    if (t138 != -1710858279LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x677 = INT16_MIN;
	int16_t x679 = INT16_MAX;
	static int32_t x680 = INT32_MIN;
	int32_t t139 = 54767790;

    t139 = (x677-(x678*(x679/x680)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	uint64_t x682 = 2LLU;
	uint8_t x683 = UINT8_MAX;
	volatile int16_t x684 = -4;

    t140 = (x681-(x682*(x683/x684)));

    if (t140 != 4294967421LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static int16_t x685 = -431;
	uint64_t x686 = UINT64_MAX;
	int64_t x687 = -4420724668141915LL;
	volatile int16_t x688 = 3341;

    t141 = (x685-(x686*(x687/x688)));

    if (t141 != 18446742750535451173LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x690 = 4173663938029426LLU;
	uint32_t x691 = UINT32_MAX;
	int16_t x692 = INT16_MIN;
	volatile uint64_t t142 = 45LLU;

    t142 = (x689-(x690*(x691/x692)));

    if (t142 != 18442570409771587725LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	static int8_t x693 = INT8_MIN;
	volatile int32_t x694 = INT32_MIN;
	static int16_t x695 = -1;
	static int32_t x696 = 2397150;
	static volatile int32_t t143 = 424;

    t143 = (x693-(x694*(x695/x696)));

    if (t143 != -128) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x701 = -186LL;
	static int32_t x702 = INT32_MAX;
	int16_t x703 = INT16_MIN;
	int64_t t144 = 32239335LL;

    t144 = (x701-(x702*(x703/x704)));

    if (t144 != -186LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint8_t x705 = 3U;
	volatile uint16_t x706 = 145U;
	int16_t x707 = INT16_MIN;
	int64_t x708 = 39352169LL;
	int64_t t145 = 2001LL;

    t145 = (x705-(x706*(x707/x708)));

    if (t145 != 3LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x709 = 3U;
	volatile uint64_t x710 = 15784335561LLU;
	static volatile int32_t x711 = INT32_MIN;

    t146 = (x709-(x710*(x711/x712)));

    if (t146 != 18445709631494225923LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x713 = INT64_MAX;
	int32_t x714 = INT32_MAX;
	uint8_t x715 = 21U;
	int8_t x716 = 41;

    t147 = (x713-(x714*(x715/x716)));

    if (t147 != INT64_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x717 = INT64_MIN;
	int32_t x718 = INT32_MAX;
	int16_t x720 = INT16_MIN;
	int64_t t148 = 1726054566633LL;

    t148 = (x717-(x718*(x719/x720)));

    if (t148 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x721 = 499U;
	uint8_t x722 = 1U;
	static uint64_t x723 = 233186607952558332LLU;
	uint8_t x724 = 9U;
	uint64_t t149 = 97137810848956LLU;

    t149 = (x721-(x722*(x723/x724)));

    if (t149 != 18420834450603712301LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint64_t x725 = UINT64_MAX;
	volatile int8_t x727 = INT8_MIN;
	int8_t x728 = INT8_MIN;
	volatile uint64_t t150 = 136212579040987LLU;

    t150 = (x725-(x726*(x727/x728)));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x730 = INT8_MAX;
	static uint64_t x731 = 61760814LLU;
	volatile uint16_t x732 = 10941U;
	uint64_t t151 = 11LLU;

    t151 = (x729-(x730*(x731/x732)));

    if (t151 != 18446744073708834700LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x733 = -1;
	uint64_t x734 = 1719515LLU;
	int64_t x735 = INT64_MIN;
	uint64_t t152 = 79153619LLU;

    t152 = (x733-(x734*(x735/x736)));

    if (t152 != 2196242017777713151LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x737 = INT32_MAX;
	static int16_t x739 = INT16_MIN;
	volatile uint32_t t153 = 17089U;

    t153 = (x737-(x738*(x739/x740)));

    if (t153 != 2147483647U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x745 = 35;
	int64_t x746 = INT64_MIN;
	static uint16_t x747 = 3U;
	uint32_t x748 = 872U;
	volatile int64_t t154 = -1LL;

    t154 = (x745-(x746*(x747/x748)));

    if (t154 != 35LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x749 = 13914LLU;
	uint32_t x750 = 475554716U;
	uint32_t x752 = UINT32_MAX;
	volatile uint64_t t155 = 1443968475900049LLU;

    t155 = (x749-(x750*(x751/x752)));

    if (t155 != 13914LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x757 = 246U;
	uint32_t x759 = 40U;
	uint64_t x760 = 847204LLU;

    t156 = (x757-(x758*(x759/x760)));

    if (t156 != 246LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x765 = INT64_MIN;
	int16_t x766 = -1;
	static int16_t x768 = INT16_MIN;
	volatile int64_t t157 = -64LL;

    t157 = (x765-(x766*(x767/x768)));

    if (t157 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x771 = -1LL;
	uint16_t x772 = 6760U;

    t158 = (x769-(x770*(x771/x772)));

    if (t158 != 336LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x774 = INT32_MAX;
	static int8_t x775 = 1;
	volatile int64_t t159 = 118434117192172LL;

    t159 = (x773-(x774*(x775/x776)));

    if (t159 != -269LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x777 = INT16_MAX;
	uint16_t x778 = UINT16_MAX;
	uint32_t x779 = 28U;
	uint8_t x780 = 44U;
	static uint32_t t160 = 7U;

    t160 = (x777-(x778*(x779/x780)));

    if (t160 != 32767U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x781 = 91U;
	int8_t x782 = INT8_MAX;
	int8_t x783 = INT8_MIN;
	int16_t x784 = -59;
	int32_t t161 = 73134497;

    t161 = (x781-(x782*(x783/x784)));

    if (t161 != -163) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x785 = INT32_MIN;
	uint16_t x786 = 14125U;
	volatile int64_t x787 = INT64_MIN;
	static uint32_t x788 = UINT32_MAX;
	int64_t t162 = -384536676338948768LL;

    t162 = (x785-(x786*(x787/x788)));

    if (t162 != 30331059044352LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x789 = UINT16_MAX;
	int8_t x790 = INT8_MIN;
	int32_t x791 = -1;
	volatile int32_t t163 = 2557;

    t163 = (x789-(x790*(x791/x792)));

    if (t163 != 65535) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x797 = -1;
	static int32_t x798 = INT32_MIN;
	int64_t x799 = -101724907999730LL;
	int32_t x800 = INT32_MIN;

    t164 = (x797-(x798*(x799/x800)));

    if (t164 != 101724152922111LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x801 = 4938U;
	uint8_t x802 = UINT8_MAX;
	uint32_t x803 = UINT32_MAX;
	static uint16_t x804 = 438U;
	volatile uint32_t t165 = 52746U;

    t165 = (x801-(x802*(x803/x804)));

    if (t165 != 1794477679U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x805 = 0;
	int16_t x806 = 14481;
	uint8_t x807 = UINT8_MAX;
	uint8_t x808 = 3U;
	int32_t t166 = -2010;

    t166 = (x805-(x806*(x807/x808)));

    if (t166 != -1230885) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x809 = -399170039466105LL;
	static int8_t x811 = 0;
	int16_t x812 = -722;
	static volatile uint64_t t167 = 226923098LLU;

    t167 = (x809-(x810*(x811/x812)));

    if (t167 != 18446344903670085511LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x814 = INT8_MIN;
	uint16_t x815 = 3452U;
	uint16_t x816 = 8441U;

    t168 = (x813-(x814*(x815/x816)));

    if (t168 != 214U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x817 = 72259927U;
	volatile uint32_t x818 = 23476U;
	int64_t x819 = 1048LL;
	int64_t x820 = INT64_MAX;
	int64_t t169 = -25862543LL;

    t169 = (x817-(x818*(x819/x820)));

    if (t169 != 72259927LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x821 = INT16_MIN;
	uint16_t x823 = 61U;
	volatile int32_t t170 = -13;

    t170 = (x821-(x822*(x823/x824)));

    if (t170 != -32768) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x825 = 4792385U;
	uint32_t x826 = 0U;
	int32_t x827 = INT32_MIN;
	int8_t x828 = INT8_MAX;
	volatile uint32_t t171 = 86U;

    t171 = (x825-(x826*(x827/x828)));

    if (t171 != 4792385U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x829 = -7;
	volatile uint16_t x830 = UINT16_MAX;
	int8_t x831 = INT8_MIN;
	static volatile int32_t t172 = 1410884;

    t172 = (x829-(x830*(x831/x832)));

    if (t172 != -65542) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x833 = INT32_MAX;
	uint32_t x834 = UINT32_MAX;
	uint64_t x835 = UINT64_MAX;
	static volatile int8_t x836 = 4;
	static volatile uint64_t t173 = 127725352648LLU;

    t173 = (x833-(x834*(x835/x836)));

    if (t173 != 4611686024869838846LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x837 = INT64_MAX;
	int16_t x838 = -1;
	int8_t x839 = INT8_MAX;
	int64_t x840 = 5734647313LL;
	volatile int64_t t174 = INT64_MAX;

    t174 = (x837-(x838*(x839/x840)));

    if (t174 != INT64_MAX) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x841 = -1;
	int16_t x842 = INT16_MIN;
	static int32_t x843 = -2;
	uint8_t x844 = 25U;
	volatile int32_t t175 = -574;

    t175 = (x841-(x842*(x843/x844)));

    if (t175 != -1) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x845 = -7826343;
	uint16_t x846 = 1U;
	static int64_t x847 = INT64_MAX;
	int64_t x848 = -25087230LL;
	volatile int64_t t176 = 16895231203LL;

    t176 = (x845-(x846*(x847/x848)));

    if (t176 != 367644243528LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x853 = INT16_MIN;
	volatile int8_t x854 = 7;
	uint32_t x855 = UINT32_MAX;
	int32_t x856 = INT32_MIN;
	uint32_t t177 = 257288614U;

    t177 = (x853-(x854*(x855/x856)));

    if (t177 != 4294934521U) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x857 = INT16_MAX;
	int64_t x858 = -173679259LL;
	uint16_t x859 = 1224U;
	volatile uint64_t x860 = 3896803348224274LLU;

    t178 = (x857-(x858*(x859/x860)));

    if (t178 != 32767LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x861 = INT16_MIN;
	int8_t x862 = INT8_MIN;
	int32_t x864 = 3211;
	static volatile int32_t t179 = 3100993;

    t179 = (x861-(x862*(x863/x864)));

    if (t179 != -32768) { NG(); } else { ; }
	
}

void f180(void) {
    	static int8_t x865 = 0;
	int8_t x866 = INT8_MAX;
	static int8_t x868 = INT8_MIN;
	static int64_t t180 = -3267802927LL;

    t180 = (x865-(x866*(x867/x868)));

    if (t180 != 91382909627620394LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x869 = UINT8_MAX;
	int16_t x870 = -7;
	uint32_t x871 = 2980U;
	volatile uint16_t x872 = 32U;
	volatile uint32_t t181 = 555328U;

    t181 = (x869-(x870*(x871/x872)));

    if (t181 != 906U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x874 = 66556471U;
	static volatile int32_t x876 = 2;

    t182 = (x873-(x874*(x875/x876)));

    if (t182 != 18446744073675159269LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x881 = INT32_MAX;
	uint32_t x882 = 28U;
	uint64_t x883 = UINT64_MAX;

    t183 = (x881-(x882*(x883/x884)));

    if (t183 != 2147483619LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x885 = 1;
	volatile int8_t x887 = INT8_MAX;
	uint16_t x888 = 3565U;
	volatile int32_t t184 = -13288;

    t184 = (x885-(x886*(x887/x888)));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	static int16_t x890 = -1;
	volatile int16_t x892 = INT16_MAX;
	uint64_t t185 = 5142132342936265866LLU;

    t185 = (x889-(x890*(x891/x892)));

    if (t185 != 696LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x895 = INT64_MIN;
	int64_t t186 = -2226254224LL;

    t186 = (x893-(x894*(x895/x896)));

    if (t186 != 72340172838109439LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x898 = 16U;
	static int8_t x899 = -1;
	volatile uint64_t t187 = 1LLU;

    t187 = (x897-(x898*(x899/x900)));

    if (t187 != 4204771052575709761LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x903 = 7U;
	static uint32_t x904 = 309828U;
	volatile uint32_t t188 = 929U;

    t188 = (x901-(x902*(x903/x904)));

    if (t188 != 65535U) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x905 = INT16_MIN;
	int32_t x906 = INT32_MIN;
	uint16_t x907 = 1U;
	volatile int16_t x908 = 10813;

    t189 = (x905-(x906*(x907/x908)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x909 = UINT8_MAX;
	static int8_t x911 = -1;
	int64_t t190 = 10569559012712128LL;

    t190 = (x909-(x910*(x911/x912)));

    if (t190 != 255LL) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x913 = 119625U;
	volatile int16_t x915 = -33;
	volatile uint32_t t191 = 777U;

    t191 = (x913-(x914*(x915/x916)));

    if (t191 != 119625U) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x919 = -1;
	uint64_t x920 = 1071LLU;
	volatile uint64_t t192 = 5075515959550734899LLU;

    t192 = (x917-(x918*(x919/x920)));

    if (t192 != 12177233114146909877LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x925 = -11LL;
	int64_t x926 = INT64_MIN;
	volatile uint16_t x927 = UINT16_MAX;
	volatile int64_t t193 = -44972LL;

    t193 = (x925-(x926*(x927/x928)));

    if (t193 != -11LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x930 = INT8_MAX;
	int64_t x931 = -3195LL;
	static int8_t x932 = INT8_MAX;
	volatile int64_t t194 = 25768746733157346LL;

    t194 = (x929-(x930*(x931/x932)));

    if (t194 != 3174LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x933 = INT64_MIN;
	volatile int16_t x935 = 80;
	static int16_t x936 = INT16_MIN;
	int64_t t195 = INT64_MIN;

    t195 = (x933-(x934*(x935/x936)));

    if (t195 != INT64_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x937 = -1LL;
	volatile int64_t x938 = -128415839LL;
	static uint64_t x939 = 10LLU;
	int64_t x940 = INT64_MIN;

    t196 = (x937-(x938*(x939/x940)));

    if (t196 != UINT64_MAX) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x941 = INT32_MIN;
	uint8_t x942 = 19U;
	static int32_t x943 = -1;
	static int8_t x944 = INT8_MAX;
	int32_t t197 = INT32_MIN;

    t197 = (x941-(x942*(x943/x944)));

    if (t197 != INT32_MIN) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x945 = 194;
	int8_t x946 = INT8_MIN;
	int32_t x947 = 0;
	uint32_t x948 = UINT32_MAX;
	uint32_t t198 = 2U;

    t198 = (x945-(x946*(x947/x948)));

    if (t198 != 194U) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x950 = UINT64_MAX;
	uint16_t x951 = UINT16_MAX;
	uint16_t x952 = UINT16_MAX;
	volatile uint64_t t199 = 27361522940414LLU;

    t199 = (x949-(x950*(x951/x952)));

    if (t199 != 18446744073709518849LLU) { NG(); } else { ; }
	
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

