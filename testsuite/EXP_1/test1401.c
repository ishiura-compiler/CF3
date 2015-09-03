#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x3 = INT32_MIN;
volatile int8_t x6 = -15;
int8_t x9 = -1;
int64_t x12 = INT64_MIN;
volatile int32_t t2 = 1865067;
int32_t t5 = -126046;
volatile int8_t x48 = -21;
int32_t x56 = INT32_MIN;
uint32_t x58 = 103772U;
int32_t x68 = -1;
int8_t x69 = -6;
int32_t x70 = 1;
uint8_t x72 = 1U;
uint16_t x73 = 15U;
static volatile int64_t x78 = -152LL;
static uint16_t x85 = 38U;
int16_t x89 = INT16_MIN;
int8_t x90 = INT8_MAX;
int64_t x91 = -47275099893LL;
static int64_t x99 = 2LL;
uint64_t x101 = 2933817027399281LLU;
static volatile int32_t t24 = -2999488;
int16_t x111 = INT16_MIN;
static int32_t x118 = INT32_MIN;
int32_t t28 = -142160;
int8_t x122 = INT8_MIN;
uint8_t x124 = UINT8_MAX;
uint8_t x129 = 83U;
uint64_t x138 = 13933504275245LLU;
static int32_t x140 = INT32_MIN;
uint16_t x149 = UINT16_MAX;
static volatile int32_t x155 = 240535;
int32_t x171 = INT32_MAX;
int64_t x180 = -1LL;
volatile int32_t t43 = 117;
uint32_t x181 = 2932031U;
volatile int32_t t44 = -142805067;
static int32_t x186 = INT32_MIN;
static int16_t x188 = INT16_MIN;
static int32_t x189 = INT32_MIN;
volatile int32_t t47 = 3128844;
int64_t x198 = 371396168214491LL;
static volatile int32_t t49 = 18;
static volatile int8_t x205 = 6;
uint64_t x220 = UINT64_MAX;
int32_t t53 = -490437;
int64_t x223 = INT64_MIN;
int8_t x226 = -1;
volatile int32_t x237 = 1206;
int16_t x240 = INT16_MIN;
volatile int32_t x242 = INT32_MIN;
static int64_t x244 = INT64_MAX;
volatile int64_t x258 = -7LL;
uint16_t x259 = 1U;
int8_t x268 = INT8_MAX;
volatile uint16_t x269 = 2170U;
uint32_t x272 = 217731U;
int8_t x275 = INT8_MAX;
static uint16_t x276 = 7871U;
int32_t x287 = INT32_MIN;
static volatile uint16_t x288 = 1328U;
int8_t x291 = INT8_MIN;
int32_t x295 = -14;
volatile int8_t x296 = INT8_MIN;
int64_t x306 = -1LL;
volatile uint8_t x307 = 12U;
static volatile int32_t t73 = 103;
uint32_t x310 = UINT32_MAX;
int32_t t74 = 299249170;
int8_t x313 = INT8_MAX;
volatile uint8_t x318 = UINT8_MAX;
volatile int16_t x320 = INT16_MAX;
int32_t t76 = -1239;
int32_t x326 = -3487;
uint32_t x327 = 4712U;
static uint8_t x332 = 0U;
volatile int32_t t79 = 2280;
static int8_t x346 = 2;
int16_t x354 = -7;
static volatile int32_t x362 = 938132774;
static volatile uint16_t x363 = UINT16_MAX;
static int32_t x365 = INT32_MIN;
int8_t x373 = INT8_MIN;
int8_t x376 = -1;
volatile int16_t x383 = -2;
int32_t x385 = INT32_MAX;
static volatile int32_t t92 = 29633;
int8_t x394 = 0;
int32_t t94 = -843;
uint64_t x399 = 1745131LLU;
int32_t x402 = INT32_MAX;
static uint32_t x405 = 518439234U;
int8_t x408 = -1;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	static volatile uint32_t x2 = 827641U;
	int32_t x4 = INT32_MAX;
	int32_t t0 = -2;

	t0 = (((x1<x2)/x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3853125706941276965LLU;
	static volatile int16_t x7 = INT16_MAX;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 155;

	t1 = (((x5<x6)/x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 4U;
	int16_t x11 = 2309;

	t2 = (((x9<x10)/x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile uint16_t x14 = UINT16_MAX;
	int32_t x15 = INT32_MAX;
	volatile int64_t x16 = INT64_MAX;
	volatile int32_t t3 = -15216742;

	t3 = (((x13<x14)/x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 1095U;
	uint16_t x18 = UINT16_MAX;
	uint64_t x19 = 767414111985698LLU;
	int32_t x20 = 558326;
	volatile int32_t t4 = -5034595;

	t4 = (((x17<x18)/x19)<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 26272U;
	static volatile int32_t x22 = INT32_MIN;
	int64_t x23 = 62799LL;
	uint32_t x24 = UINT32_MAX;

	t5 = (((x21<x22)/x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1954162595742LLU;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = 73494075089LLU;
	volatile uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = -122;

	t6 = (((x25<x26)/x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	volatile int16_t x30 = INT16_MAX;
	int16_t x31 = -1;
	int32_t x32 = INT32_MAX;
	volatile int32_t t7 = -1865342;

	t7 = (((x29<x30)/x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	int32_t x34 = -3;
	int32_t x35 = INT32_MIN;
	static int32_t x36 = 471;
	volatile int32_t t8 = 3330654;

	t8 = (((x33<x34)/x35)<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -40;
	int64_t x43 = -1LL;
	uint32_t x44 = 0U;
	volatile int32_t t9 = -52;

	t9 = (((x41<x42)/x43)<=x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	volatile uint64_t x46 = 4577049016521169611LLU;
	int64_t x47 = -1LL;
	volatile int32_t t10 = 443;

	t10 = (((x45<x46)/x47)<=x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MAX;
	uint16_t x51 = 9U;
	int16_t x52 = 47;
	int32_t t11 = -4832;

	t11 = (((x49<x50)/x51)<=x52);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 212174148U;
	int64_t x54 = INT64_MAX;
	static uint64_t x55 = 37988355598LLU;
	volatile int32_t t12 = 6;

	t12 = (((x53<x54)/x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = 20;
	uint64_t x59 = 99178LLU;
	int64_t x60 = -605688867LL;
	int32_t t13 = 3;

	t13 = (((x57<x58)/x59)<=x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -121;
	int8_t x62 = -1;
	static int8_t x63 = INT8_MIN;
	int8_t x64 = INT8_MAX;
	int32_t t14 = -793611;

	t14 = (((x61<x62)/x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int8_t x66 = INT8_MAX;
	int32_t x67 = 11;
	static int32_t t15 = 834318504;

	t15 = (((x65<x66)/x67)<=x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x71 = INT64_MIN;
	volatile int32_t t16 = -33334766;

	t16 = (((x69<x70)/x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = 48LLU;
	static uint16_t x75 = 15890U;
	static uint8_t x76 = 1U;
	volatile int32_t t17 = 1;

	t17 = (((x73<x74)/x75)<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 28U;
	uint16_t x79 = 2U;
	static int32_t x80 = 2988273;
	int32_t t18 = 28541711;

	t18 = (((x77<x78)/x79)<=x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -1;
	uint8_t x82 = 91U;
	uint8_t x83 = 1U;
	uint64_t x84 = UINT64_MAX;
	volatile int32_t t19 = 142717;

	t19 = (((x81<x82)/x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MIN;
	int8_t x87 = INT8_MIN;
	static volatile int64_t x88 = INT64_MIN;
	static int32_t t20 = -31;

	t20 = (((x85<x86)/x87)<=x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x92 = 2;
	int32_t t21 = -13;

	t21 = (((x89<x90)/x91)<=x92);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = INT8_MIN;
	uint32_t x94 = 6351U;
	int32_t x95 = 37735;
	uint8_t x96 = 1U;
	int32_t t22 = -3525;

	t22 = (((x93<x94)/x95)<=x96);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = 189329629;
	uint16_t x98 = 0U;
	int8_t x100 = INT8_MAX;
	static int32_t t23 = -18;

	t23 = (((x97<x98)/x99)<=x100);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x102 = UINT16_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	volatile uint32_t x104 = UINT32_MAX;

	t24 = (((x101<x102)/x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = INT32_MAX;
	uint64_t x106 = 511320510014277438LLU;
	uint64_t x107 = 27692221782LLU;
	uint8_t x108 = UINT8_MAX;
	static volatile int32_t t25 = -1;

	t25 = (((x105<x106)/x107)<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = UINT16_MAX;
	int64_t x110 = INT64_MAX;
	int16_t x112 = 2824;
	int32_t t26 = -456462673;

	t26 = (((x109<x110)/x111)<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	static int32_t x114 = -12702447;
	static int8_t x115 = 7;
	uint8_t x116 = UINT8_MAX;
	int32_t t27 = -26458;

	t27 = (((x113<x114)/x115)<=x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x117 = UINT8_MAX;
	int32_t x119 = INT32_MAX;
	volatile int64_t x120 = 884049344789LL;

	t28 = (((x117<x118)/x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x121 = UINT32_MAX;
	uint16_t x123 = 4059U;
	static int32_t t29 = -390970882;

	t29 = (((x121<x122)/x123)<=x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x125 = INT64_MIN;
	volatile int8_t x126 = -1;
	volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = UINT64_MAX;
	volatile int32_t t30 = 1;

	t30 = (((x125<x126)/x127)<=x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x130 = 831302;
	static int8_t x131 = INT8_MAX;
	static int8_t x132 = -1;
	int32_t t31 = 66534;

	t31 = (((x129<x130)/x131)<=x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = INT32_MIN;
	uint16_t x134 = UINT16_MAX;
	int16_t x135 = 114;
	static int64_t x136 = INT64_MIN;
	int32_t t32 = 14343;

	t32 = (((x133<x134)/x135)<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	int16_t x139 = 11;
	int32_t t33 = -330;

	t33 = (((x137<x138)/x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MAX;
	volatile uint64_t x144 = 252117056435755LLU;
	static volatile int32_t t34 = -16106;

	t34 = (((x141<x142)/x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = 187631611332821799LLU;
	int32_t x146 = -1;
	int8_t x147 = -9;
	int64_t x148 = INT64_MAX;
	int32_t t35 = -569;

	t35 = (((x145<x146)/x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x150 = INT16_MIN;
	int64_t x151 = 2654843211612821LL;
	int8_t x152 = -2;
	int32_t t36 = -20722568;

	t36 = (((x149<x150)/x151)<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MIN;
	static int32_t x154 = INT32_MIN;
	int8_t x156 = 35;
	int32_t t37 = 7;

	t37 = (((x153<x154)/x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint8_t x157 = 25U;
	volatile int64_t x158 = INT64_MIN;
	volatile int32_t x159 = 40268625;
	volatile int64_t x160 = INT64_MAX;
	int32_t t38 = 1;

	t38 = (((x157<x158)/x159)<=x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = -436;
	static volatile uint32_t x162 = 3U;
	int32_t x163 = INT32_MIN;
	int64_t x164 = INT64_MIN;
	volatile int32_t t39 = 4;

	t39 = (((x161<x162)/x163)<=x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 33U;
	uint64_t x166 = 280613LLU;
	uint64_t x167 = 673692LLU;
	volatile uint64_t x168 = 15110LLU;
	volatile int32_t t40 = 44;

	t40 = (((x165<x166)/x167)<=x168);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 56U;
	uint32_t x170 = 1U;
	static uint64_t x172 = 2958756222655526LLU;
	volatile int32_t t41 = -1208067;

	t41 = (((x169<x170)/x171)<=x172);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -1;
	static volatile uint64_t x174 = 2384947LLU;
	int64_t x175 = -1LL;
	uint32_t x176 = 5137784U;
	int32_t t42 = 1366293;

	t42 = (((x173<x174)/x175)<=x176);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x179 = -1;

	t43 = (((x177<x178)/x179)<=x180);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x182 = UINT16_MAX;
	int32_t x183 = -1;
	int16_t x184 = INT16_MIN;

	t44 = (((x181<x182)/x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	int64_t x187 = -1803164487530LL;
	static volatile int32_t t45 = 7;

	t45 = (((x185<x186)/x187)<=x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x190 = 0U;
	uint8_t x191 = 1U;
	int32_t x192 = INT32_MIN;
	volatile int32_t t46 = 29724;

	t46 = (((x189<x190)/x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 0LLU;
	int64_t x194 = -1LL;
	int32_t x195 = INT32_MAX;
	static int64_t x196 = -21158654282889LL;

	t47 = (((x193<x194)/x195)<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x197 = 1369866U;
	int64_t x199 = 3LL;
	int8_t x200 = INT8_MAX;
	volatile int32_t t48 = 40635;

	t48 = (((x197<x198)/x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x201 = 0U;
	int16_t x202 = -1;
	volatile int64_t x203 = 11490681895LL;
	volatile uint16_t x204 = UINT16_MAX;

	t49 = (((x201<x202)/x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x206 = UINT16_MAX;
	volatile uint8_t x207 = 11U;
	int32_t x208 = 10520;
	int32_t t50 = 620;

	t50 = (((x205<x206)/x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = 795691584549309524LL;
	int32_t x210 = INT32_MIN;
	static int16_t x211 = -1;
	int32_t x212 = 650834;
	static int32_t t51 = -1462;

	t51 = (((x209<x210)/x211)<=x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x213 = 0;
	uint16_t x214 = 8066U;
	int16_t x215 = INT16_MIN;
	static int16_t x216 = -1;
	int32_t t52 = -106159015;

	t52 = (((x213<x214)/x215)<=x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = -1LL;
	int8_t x218 = INT8_MIN;
	int64_t x219 = 2047774104630843LL;

	t53 = (((x217<x218)/x219)<=x220);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = -217794;
	int16_t x222 = INT16_MAX;
	static uint64_t x224 = 768LLU;
	int32_t t54 = -4;

	t54 = (((x221<x222)/x223)<=x224);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = -510;
	int16_t x227 = -1;
	int64_t x228 = -562480986728LL;
	int32_t t55 = -576586;

	t55 = (((x225<x226)/x227)<=x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = INT8_MAX;
	volatile int32_t x230 = 15049;
	uint64_t x231 = 24565656093LLU;
	int16_t x232 = INT16_MIN;
	int32_t t56 = -5457407;

	t56 = (((x229<x230)/x231)<=x232);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x238 = 46902U;
	static uint64_t x239 = 3LLU;
	int32_t t57 = -23;

	t57 = (((x237<x238)/x239)<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = -1;
	volatile uint32_t x243 = 1459147042U;
	int32_t t58 = -16697;

	t58 = (((x241<x242)/x243)<=x244);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	uint8_t x248 = UINT8_MAX;
	volatile int32_t t59 = 63245;

	t59 = (((x245<x246)/x247)<=x248);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x249 = INT32_MIN;
	int16_t x250 = 15446;
	static volatile uint64_t x251 = 452296LLU;
	static int32_t x252 = 71764;
	volatile int32_t t60 = -27;

	t60 = (((x249<x250)/x251)<=x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x253 = INT32_MIN;
	int16_t x254 = 0;
	static int8_t x255 = INT8_MAX;
	volatile uint8_t x256 = 1U;
	int32_t t61 = -2583201;

	t61 = (((x253<x254)/x255)<=x256);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = 1896;
	int64_t x260 = INT64_MAX;
	volatile int32_t t62 = 11734547;

	t62 = (((x257<x258)/x259)<=x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = -1LL;
	volatile int64_t x262 = INT64_MIN;
	static int16_t x263 = INT16_MIN;
	volatile int16_t x264 = -1;
	volatile int32_t t63 = 5943;

	t63 = (((x261<x262)/x263)<=x264);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	int64_t x266 = -12598301LL;
	static volatile uint64_t x267 = 32927038543502LLU;
	int32_t t64 = 77859949;

	t64 = (((x265<x266)/x267)<=x268);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x270 = 41;
	int8_t x271 = -1;
	int32_t t65 = -1518;

	t65 = (((x269<x270)/x271)<=x272);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	uint64_t x274 = UINT64_MAX;
	volatile int32_t t66 = -429246350;

	t66 = (((x273<x274)/x275)<=x276);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = 93;
	int64_t x282 = -1LL;
	int32_t x283 = 3;
	int8_t x284 = INT8_MIN;
	static int32_t t67 = 503;

	t67 = (((x281<x282)/x283)<=x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = INT64_MIN;
	int16_t x286 = -141;
	static int32_t t68 = -52717;

	t68 = (((x285<x286)/x287)<=x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MAX;
	uint32_t x290 = 3086884U;
	int64_t x292 = 1573860504009LL;
	volatile int32_t t69 = 34;

	t69 = (((x289<x290)/x291)<=x292);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = 1;
	uint8_t x294 = 1U;
	int32_t t70 = -2;

	t70 = (((x293<x294)/x295)<=x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MAX;
	uint8_t x298 = UINT8_MAX;
	static int16_t x299 = 1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t71 = -868144640;

	t71 = (((x297<x298)/x299)<=x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = INT8_MIN;
	int8_t x303 = INT8_MIN;
	static int8_t x304 = -24;
	static int32_t t72 = 24505836;

	t72 = (((x301<x302)/x303)<=x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x305 = INT16_MAX;
	static volatile uint16_t x308 = UINT16_MAX;

	t73 = (((x305<x306)/x307)<=x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = -1;
	int32_t x311 = INT32_MAX;
	uint16_t x312 = 2959U;

	t74 = (((x309<x310)/x311)<=x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x314 = INT64_MAX;
	static int8_t x315 = 1;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t75 = 439683;

	t75 = (((x313<x314)/x315)<=x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x317 = 208U;
	int8_t x319 = INT8_MAX;

	t76 = (((x317<x318)/x319)<=x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -1;
	uint8_t x322 = 41U;
	volatile uint8_t x323 = 10U;
	volatile uint8_t x324 = 16U;
	int32_t t77 = 82;

	t77 = (((x321<x322)/x323)<=x324);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x325 = -1;
	int8_t x328 = 1;
	volatile int32_t t78 = -1;

	t78 = (((x325<x326)/x327)<=x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x329 = 1511661U;
	int16_t x330 = INT16_MIN;
	static uint64_t x331 = 10352LLU;

	t79 = (((x329<x330)/x331)<=x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x333 = -7;
	int16_t x334 = INT16_MIN;
	volatile int64_t x335 = INT64_MIN;
	uint32_t x336 = UINT32_MAX;
	int32_t t80 = -1;

	t80 = (((x333<x334)/x335)<=x336);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MAX;
	int16_t x338 = INT16_MAX;
	volatile int8_t x339 = 39;
	int64_t x340 = -1LL;
	volatile int32_t t81 = -236;

	t81 = (((x337<x338)/x339)<=x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x341 = INT16_MIN;
	uint8_t x342 = UINT8_MAX;
	volatile int64_t x343 = INT64_MAX;
	static int8_t x344 = 34;
	volatile int32_t t82 = -205;

	t82 = (((x341<x342)/x343)<=x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = 2U;
	uint32_t x347 = 312676510U;
	int16_t x348 = INT16_MIN;
	static int32_t t83 = 0;

	t83 = (((x345<x346)/x347)<=x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 8058U;
	int32_t x350 = INT32_MIN;
	int16_t x351 = INT16_MAX;
	static volatile int32_t x352 = INT32_MIN;
	static int32_t t84 = 44673269;

	t84 = (((x349<x350)/x351)<=x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	uint64_t x355 = 122438850009114LLU;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t85 = -51388;

	t85 = (((x353<x354)/x355)<=x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	int64_t x359 = 152040158471846858LL;
	volatile uint32_t x360 = 156045U;
	int32_t t86 = 1581978;

	t86 = (((x357<x358)/x359)<=x360);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = 972U;
	volatile int16_t x364 = -1;
	volatile int32_t t87 = 954635612;

	t87 = (((x361<x362)/x363)<=x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x366 = UINT64_MAX;
	int16_t x367 = -1;
	int8_t x368 = -1;
	volatile int32_t t88 = -1;

	t88 = (((x365<x366)/x367)<=x368);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x374 = 7;
	static int8_t x375 = INT8_MAX;
	int32_t t89 = -462858;

	t89 = (((x373<x374)/x375)<=x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = 941890996886805039LL;
	uint16_t x378 = 22U;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	volatile int32_t t90 = -1;

	t90 = (((x377<x378)/x379)<=x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x381 = -1;
	uint16_t x382 = 7400U;
	uint16_t x384 = 1811U;
	volatile int32_t t91 = -35189;

	t91 = (((x381<x382)/x383)<=x384);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x386 = INT16_MIN;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = 23;

	t92 = (((x385<x386)/x387)<=x388);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = 133417664616362LLU;
	int32_t x390 = INT32_MAX;
	int32_t x391 = 4;
	int32_t x392 = 127543;
	int32_t t93 = -9438887;

	t93 = (((x389<x390)/x391)<=x392);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x393 = INT32_MIN;
	int32_t x395 = INT32_MIN;
	int16_t x396 = INT16_MAX;

	t94 = (((x393<x394)/x395)<=x396);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x397 = 0U;
	int8_t x398 = -1;
	static int32_t x400 = INT32_MIN;
	int32_t t95 = -1;

	t95 = (((x397<x398)/x399)<=x400);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x401 = 3U;
	int64_t x403 = -231062693LL;
	int32_t x404 = INT32_MIN;
	static int32_t t96 = -376;

	t96 = (((x401<x402)/x403)<=x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x406 = 82U;
	int64_t x407 = INT64_MAX;
	volatile int32_t t97 = -253439;

	t97 = (((x405<x406)/x407)<=x408);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x409 = UINT8_MAX;
	uint32_t x410 = 585U;
	int64_t x411 = -1LL;
	int64_t x412 = -5407759LL;
	volatile int32_t t98 = -8021;

	t98 = (((x409<x410)/x411)<=x412);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x413 = 183U;
	static uint8_t x414 = UINT8_MAX;
	uint32_t x415 = 114U;
	uint32_t x416 = UINT32_MAX;
	static volatile int32_t t99 = -73571451;

	t99 = (((x413<x414)/x415)<=x416);

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

