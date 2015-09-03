#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -56;
uint8_t x7 = 47U;
int32_t t1 = 35900;
int32_t t3 = -97;
uint16_t x19 = 444U;
int64_t x21 = -206279447428LL;
int32_t x22 = INT32_MIN;
volatile int32_t t6 = -94682350;
int8_t x50 = -3;
int32_t x59 = 48838;
int16_t x65 = -40;
volatile uint16_t x66 = UINT16_MAX;
static int32_t t16 = -4687;
int8_t x70 = INT8_MAX;
int64_t x83 = -1LL;
static int32_t x84 = -1;
int64_t x92 = -8120167108LL;
static int32_t t21 = 5;
int64_t x97 = INT64_MIN;
static uint64_t x98 = UINT64_MAX;
uint32_t x104 = UINT32_MAX;
uint32_t x111 = 100U;
volatile int32_t t26 = 4911;
uint32_t x119 = UINT32_MAX;
int64_t x123 = -1014406LL;
uint16_t x126 = 3382U;
static int32_t x139 = -659645;
uint32_t x141 = UINT32_MAX;
volatile int8_t x148 = INT8_MIN;
uint32_t x160 = 228220U;
volatile int32_t t36 = -7;
int64_t x162 = INT64_MIN;
static int64_t x163 = INT64_MAX;
volatile int8_t x166 = -1;
static volatile int32_t x171 = -1;
uint8_t x184 = 0U;
uint16_t x192 = 31U;
static int32_t t44 = 10961794;
uint16_t x200 = 10U;
int32_t t48 = -1;
int16_t x214 = INT16_MIN;
volatile int32_t t49 = -2748;
int16_t x218 = INT16_MAX;
uint16_t x220 = 26U;
volatile int32_t t51 = -942;
int64_t x226 = -43090028598701LL;
static int16_t x232 = INT16_MIN;
static int32_t t53 = 8543706;
int32_t x239 = INT32_MAX;
int8_t x243 = -1;
volatile uint16_t x247 = 7514U;
volatile int32_t t57 = -7;
volatile int32_t t60 = 1;
int8_t x266 = -29;
uint64_t x272 = UINT64_MAX;
int8_t x273 = -1;
static uint8_t x277 = 0U;
int8_t x288 = -1;
int64_t x307 = INT64_MIN;
uint8_t x317 = 1U;
uint16_t x321 = UINT16_MAX;
int32_t x329 = 515974073;
int32_t x338 = INT32_MIN;
volatile int32_t t78 = 269025831;
uint64_t x347 = 19647439298067LLU;
static int16_t x352 = INT16_MAX;
uint32_t x362 = UINT32_MAX;
volatile int32_t x363 = INT32_MIN;
volatile int16_t x368 = INT16_MIN;
static int8_t x369 = INT8_MIN;
int16_t x371 = INT16_MAX;
static volatile int32_t x373 = INT32_MAX;
int8_t x376 = INT8_MIN;
uint16_t x384 = 234U;
int16_t x399 = INT16_MAX;
volatile int32_t t90 = 1037024283;
static int64_t x409 = INT64_MAX;
int32_t x412 = -111604;
static uint8_t x413 = UINT8_MAX;
int64_t x420 = -3290882237899LL;
int32_t x423 = 475061;
int32_t x429 = INT32_MIN;
uint16_t x433 = 6U;
static volatile uint16_t x434 = 1U;
int16_t x435 = 9;
uint32_t x441 = UINT32_MAX;
int32_t x442 = 1542;
int8_t x443 = -1;


void f0(void) {
	uint64_t x1 = 3383709339239LLU;
	volatile int64_t x2 = -1LL;
	uint32_t x3 = UINT32_MAX;
	static int8_t x4 = 6;
	volatile int32_t t0 = -7;

	t0 = ((x1|x2)<=(x3-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	static int8_t x8 = -1;

	t1 = ((x5|x6)<=(x7-x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static int32_t x10 = INT32_MIN;
	int64_t x11 = -1LL;
	uint8_t x12 = UINT8_MAX;
	volatile int32_t t2 = -25996;

	t2 = ((x9|x10)<=(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint64_t x14 = UINT64_MAX;
	int32_t x15 = INT32_MIN;
	static uint32_t x16 = 921233026U;

	t3 = ((x13|x14)<=(x15-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MAX;
	uint8_t x18 = UINT8_MAX;
	static uint64_t x20 = 320LLU;
	volatile int32_t t4 = -174;

	t4 = ((x17|x18)<=(x19-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = 863;
	int16_t x24 = INT16_MAX;
	int32_t t5 = -1;

	t5 = ((x21|x22)<=(x23-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	int32_t x26 = INT32_MIN;
	uint8_t x27 = UINT8_MAX;
	static int8_t x28 = INT8_MIN;

	t6 = ((x25|x26)<=(x27-x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int64_t x30 = -1LL;
	volatile int32_t x31 = -1;
	volatile int16_t x32 = -2634;
	volatile int32_t t7 = -870886;

	t7 = ((x29|x30)<=(x31-x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = -8058;
	int64_t x35 = -1LL;
	int16_t x36 = -25;
	static volatile int32_t t8 = 18963041;

	t8 = ((x33|x34)<=(x35-x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 1580LLU;
	static int64_t x38 = 607565528228005LL;
	int16_t x39 = -1;
	uint16_t x40 = 8U;
	static volatile int32_t t9 = 1817438;

	t9 = ((x37|x38)<=(x39-x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int16_t x42 = INT16_MAX;
	uint8_t x43 = 12U;
	int8_t x44 = INT8_MIN;
	int32_t t10 = -1;

	t10 = ((x41|x42)<=(x43-x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -5387;
	uint32_t x46 = 16217U;
	int16_t x47 = 26;
	uint64_t x48 = 511495814LLU;
	static int32_t t11 = 0;

	t11 = ((x45|x46)<=(x47-x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 8;
	int16_t x51 = INT16_MAX;
	volatile uint8_t x52 = UINT8_MAX;
	int32_t t12 = -73;

	t12 = ((x49|x50)<=(x51-x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x54 = 577LLU;
	int32_t x55 = INT32_MIN;
	int64_t x56 = -1LL;
	volatile int32_t t13 = 2445;

	t13 = ((x53|x54)<=(x55-x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int32_t x58 = -1;
	int64_t x60 = -1LL;
	int32_t t14 = 54;

	t14 = ((x57|x58)<=(x59-x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	uint8_t x62 = 22U;
	volatile uint64_t x63 = 38827533770981737LLU;
	static int64_t x64 = INT64_MIN;
	int32_t t15 = 4;

	t15 = ((x61|x62)<=(x63-x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x67 = -1;
	int8_t x68 = INT8_MIN;

	t16 = ((x65|x66)<=(x67-x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static int32_t x71 = -1;
	uint8_t x72 = 33U;
	static int32_t t17 = 478;

	t17 = ((x69|x70)<=(x71-x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x77 = 510U;
	static volatile uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 7U;
	uint8_t x80 = 111U;
	static volatile int32_t t18 = -93939;

	t18 = ((x77|x78)<=(x79-x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x81 = 9U;
	static int32_t x82 = -280288;
	static volatile int32_t t19 = 7;

	t19 = ((x81|x82)<=(x83-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 452447744U;
	uint8_t x86 = 40U;
	int64_t x87 = 10925LL;
	int8_t x88 = INT8_MIN;
	static int32_t t20 = -109204321;

	t20 = ((x85|x86)<=(x87-x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	int8_t x90 = INT8_MIN;
	static int32_t x91 = 54;

	t21 = ((x89|x90)<=(x91-x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = UINT64_MAX;
	volatile int32_t x94 = INT32_MIN;
	volatile uint8_t x95 = 0U;
	static uint64_t x96 = 1217LLU;
	int32_t t22 = -9;

	t22 = ((x93|x94)<=(x95-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x99 = INT64_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t23 = -3337;

	t23 = ((x97|x98)<=(x99-x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x101 = 77U;
	int16_t x102 = INT16_MAX;
	int8_t x103 = -1;
	volatile int32_t t24 = -239032968;

	t24 = ((x101|x102)<=(x103-x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	static int64_t x106 = INT64_MIN;
	int8_t x107 = INT8_MIN;
	int16_t x108 = 9;
	int32_t t25 = 9;

	t25 = ((x105|x106)<=(x107-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -17;
	uint8_t x110 = 1U;
	int16_t x112 = INT16_MAX;

	t26 = ((x109|x110)<=(x111-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 53661827608112140LLU;
	uint16_t x118 = 477U;
	int64_t x120 = -1LL;
	int32_t t27 = 183;

	t27 = ((x117|x118)<=(x119-x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x121 = 13U;
	int64_t x122 = 1LL;
	uint32_t x124 = 120U;
	int32_t t28 = 128402;

	t28 = ((x121|x122)<=(x123-x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x125 = -2630422LL;
	static uint64_t x127 = 218380851590LLU;
	static int8_t x128 = INT8_MAX;
	int32_t t29 = 52970;

	t29 = ((x125|x126)<=(x127-x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x129 = 1LLU;
	int8_t x130 = -1;
	volatile int16_t x131 = -233;
	int8_t x132 = INT8_MIN;
	volatile int32_t t30 = -69;

	t30 = ((x129|x130)<=(x131-x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x133 = INT64_MAX;
	int32_t x134 = -1;
	int32_t x135 = 7689;
	static int16_t x136 = INT16_MIN;
	int32_t t31 = 1;

	t31 = ((x133|x134)<=(x135-x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = -1;
	uint32_t x138 = UINT32_MAX;
	static int16_t x140 = INT16_MAX;
	static volatile int32_t t32 = 1;

	t32 = ((x137|x138)<=(x139-x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x142 = INT32_MAX;
	int32_t x143 = INT32_MIN;
	uint16_t x144 = 0U;
	int32_t t33 = -2;

	t33 = ((x141|x142)<=(x143-x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x145 = INT16_MIN;
	int8_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	volatile int32_t t34 = 1017300;

	t34 = ((x145|x146)<=(x147-x148));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x149 = INT8_MAX;
	uint32_t x150 = 1U;
	int8_t x151 = INT8_MIN;
	volatile uint8_t x152 = 8U;
	volatile int32_t t35 = 1075;

	t35 = ((x149|x150)<=(x151-x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = -1LL;
	volatile uint32_t x158 = 40626U;
	int16_t x159 = INT16_MIN;

	t36 = ((x157|x158)<=(x159-x160));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x161 = 62;
	int16_t x164 = 5312;
	static int32_t t37 = -20;

	t37 = ((x161|x162)<=(x163-x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -817LL;
	static int8_t x167 = -11;
	uint64_t x168 = 2503LLU;
	int32_t t38 = -1281039;

	t38 = ((x165|x166)<=(x167-x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = 1690;
	int64_t x170 = -5114LL;
	int64_t x172 = -6LL;
	static volatile int32_t t39 = 40;

	t39 = ((x169|x170)<=(x171-x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 7;
	int16_t x178 = -605;
	uint8_t x179 = 124U;
	static uint16_t x180 = 2583U;
	int32_t t40 = -201;

	t40 = ((x177|x178)<=(x179-x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x181 = 1740064643224LL;
	int64_t x182 = INT64_MAX;
	int64_t x183 = -77786075421LL;
	int32_t t41 = 378392737;

	t41 = ((x181|x182)<=(x183-x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x185 = INT8_MAX;
	static volatile int64_t x186 = -1LL;
	uint32_t x187 = UINT32_MAX;
	volatile uint8_t x188 = 70U;
	static volatile int32_t t42 = -1552;

	t42 = ((x185|x186)<=(x187-x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x189 = INT16_MAX;
	volatile int8_t x190 = INT8_MIN;
	int32_t x191 = INT32_MAX;
	int32_t t43 = -199;

	t43 = ((x189|x190)<=(x191-x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x193 = 3438U;
	static uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 15U;
	int16_t x196 = INT16_MAX;

	t44 = ((x193|x194)<=(x195-x196));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = INT64_MAX;
	volatile uint32_t x198 = 25U;
	static volatile uint32_t x199 = UINT32_MAX;
	volatile int32_t t45 = -13;

	t45 = ((x197|x198)<=(x199-x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = UINT64_MAX;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MIN;
	static int32_t t46 = 694800;

	t46 = ((x201|x202)<=(x203-x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 32622766U;
	uint16_t x206 = 2031U;
	uint64_t x207 = 984138377LLU;
	uint8_t x208 = 7U;
	volatile int32_t t47 = 12561;

	t47 = ((x205|x206)<=(x207-x208));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = INT8_MIN;
	uint64_t x210 = UINT64_MAX;
	volatile uint16_t x211 = UINT16_MAX;
	volatile int16_t x212 = INT16_MIN;

	t48 = ((x209|x210)<=(x211-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x213 = -1;
	int8_t x215 = -1;
	uint8_t x216 = UINT8_MAX;

	t49 = ((x213|x214)<=(x215-x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int32_t x219 = 250;
	volatile int32_t t50 = -1081;

	t50 = ((x217|x218)<=(x219-x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = INT64_MIN;
	int8_t x223 = -7;
	int32_t x224 = -1;

	t51 = ((x221|x222)<=(x223-x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x225 = -6303;
	volatile int64_t x227 = INT64_MIN;
	uint64_t x228 = UINT64_MAX;
	volatile int32_t t52 = -40;

	t52 = ((x225|x226)<=(x227-x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x229 = INT32_MIN;
	volatile int16_t x230 = -14;
	int64_t x231 = -1LL;

	t53 = ((x229|x230)<=(x231-x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	int8_t x234 = -1;
	static int16_t x235 = INT16_MIN;
	int8_t x236 = -1;
	volatile int32_t t54 = 839865;

	t54 = ((x233|x234)<=(x235-x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MIN;
	static int8_t x238 = -1;
	int16_t x240 = INT16_MAX;
	int32_t t55 = -1;

	t55 = ((x237|x238)<=(x239-x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x241 = -918151798;
	volatile int8_t x242 = 23;
	int32_t x244 = INT32_MIN;
	volatile int32_t t56 = 210;

	t56 = ((x241|x242)<=(x243-x244));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = -1;
	int16_t x246 = 196;
	int32_t x248 = INT32_MAX;

	t57 = ((x245|x246)<=(x247-x248));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x249 = -1;
	int8_t x250 = -1;
	uint8_t x251 = 10U;
	static int32_t x252 = INT32_MAX;
	int32_t t58 = 1;

	t58 = ((x249|x250)<=(x251-x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 3U;
	int16_t x254 = INT16_MAX;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;
	volatile int32_t t59 = -5836526;

	t59 = ((x253|x254)<=(x255-x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = -1;
	int64_t x262 = 459371497LL;
	uint32_t x263 = UINT32_MAX;
	uint16_t x264 = UINT16_MAX;

	t60 = ((x261|x262)<=(x263-x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = -49;
	static uint16_t x267 = UINT16_MAX;
	uint64_t x268 = 4869LLU;
	volatile int32_t t61 = -7437394;

	t61 = ((x265|x266)<=(x267-x268));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MIN;
	int32_t x270 = 37;
	int64_t x271 = INT64_MIN;
	volatile int32_t t62 = 1;

	t62 = ((x269|x270)<=(x271-x272));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = 29734280350681206LL;
	uint64_t x275 = 758968650830952LLU;
	int64_t x276 = -181097LL;
	int32_t t63 = 1;

	t63 = ((x273|x274)<=(x275-x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x278 = -1101LL;
	int64_t x279 = INT64_MIN;
	int64_t x280 = INT64_MIN;
	volatile int32_t t64 = -25;

	t64 = ((x277|x278)<=(x279-x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x281 = UINT32_MAX;
	uint8_t x282 = 31U;
	uint32_t x283 = 1U;
	static uint8_t x284 = 0U;
	static int32_t t65 = 253;

	t65 = ((x281|x282)<=(x283-x284));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x285 = INT16_MIN;
	int64_t x286 = 74LL;
	int64_t x287 = INT64_MIN;
	static int32_t t66 = -229679391;

	t66 = ((x285|x286)<=(x287-x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MAX;
	static int32_t x291 = INT32_MIN;
	volatile int32_t x292 = -1;
	static volatile int32_t t67 = -70878163;

	t67 = ((x289|x290)<=(x291-x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x293 = UINT8_MAX;
	uint32_t x294 = 33334U;
	volatile int8_t x295 = INT8_MIN;
	static uint32_t x296 = 27284U;
	int32_t t68 = 4599776;

	t68 = ((x293|x294)<=(x295-x296));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = 4593132151281886LL;
	volatile int32_t x298 = -46903342;
	static volatile int64_t x299 = 14939242228810LL;
	static int16_t x300 = INT16_MAX;
	volatile int32_t t69 = -5611063;

	t69 = ((x297|x298)<=(x299-x300));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x301 = INT32_MIN;
	int8_t x302 = INT8_MAX;
	int8_t x303 = 56;
	int16_t x304 = INT16_MAX;
	volatile int32_t t70 = -5211626;

	t70 = ((x301|x302)<=(x303-x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	uint64_t x308 = 3998852441479020082LLU;
	volatile int32_t t71 = -157840;

	t71 = ((x305|x306)<=(x307-x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MAX;
	int8_t x314 = INT8_MAX;
	static int64_t x315 = -1LL;
	int64_t x316 = 88676LL;
	int32_t t72 = -24569454;

	t72 = ((x313|x314)<=(x315-x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x318 = 12331952915356LL;
	int8_t x319 = -1;
	static int16_t x320 = INT16_MIN;
	int32_t t73 = -11597393;

	t73 = ((x317|x318)<=(x319-x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x322 = -27702;
	int16_t x323 = INT16_MAX;
	uint16_t x324 = UINT16_MAX;
	volatile int32_t t74 = 127905245;

	t74 = ((x321|x322)<=(x323-x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 117056LLU;
	static int32_t x332 = -55930568;
	volatile int32_t t75 = -1096;

	t75 = ((x329|x330)<=(x331-x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x333 = -1;
	static int64_t x334 = INT64_MIN;
	int8_t x335 = -1;
	int64_t x336 = -1LL;
	volatile int32_t t76 = -314666530;

	t76 = ((x333|x334)<=(x335-x336));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x337 = -5LL;
	static int64_t x339 = INT64_MAX;
	int8_t x340 = 35;
	int32_t t77 = -82;

	t77 = ((x337|x338)<=(x339-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x341 = INT16_MIN;
	uint64_t x342 = 85288047LLU;
	volatile uint16_t x343 = UINT16_MAX;
	static uint16_t x344 = UINT16_MAX;

	t78 = ((x341|x342)<=(x343-x344));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x345 = 43U;
	int16_t x346 = INT16_MIN;
	uint32_t x348 = 1045U;
	int32_t t79 = -194574656;

	t79 = ((x345|x346)<=(x347-x348));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = -141;
	int8_t x351 = INT8_MAX;
	int32_t t80 = 690129011;

	t80 = ((x349|x350)<=(x351-x352));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x357 = UINT16_MAX;
	int64_t x358 = INT64_MIN;
	volatile uint8_t x359 = 85U;
	static int32_t x360 = 16720;
	int32_t t81 = 26;

	t81 = ((x357|x358)<=(x359-x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x361 = 30U;
	static int8_t x364 = -2;
	volatile int32_t t82 = 1;

	t82 = ((x361|x362)<=(x363-x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = INT64_MAX;
	static uint8_t x366 = UINT8_MAX;
	int16_t x367 = -13342;
	volatile int32_t t83 = -982768;

	t83 = ((x365|x366)<=(x367-x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x370 = INT8_MIN;
	uint16_t x372 = UINT16_MAX;
	static volatile int32_t t84 = 2;

	t84 = ((x369|x370)<=(x371-x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x374 = 3172087257092521LLU;
	volatile uint16_t x375 = 1U;
	int32_t t85 = -47281;

	t85 = ((x373|x374)<=(x375-x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x381 = UINT8_MAX;
	int8_t x382 = INT8_MAX;
	static int64_t x383 = -39131LL;
	int32_t t86 = 1221;

	t86 = ((x381|x382)<=(x383-x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = UINT32_MAX;
	uint32_t x386 = 1489U;
	int16_t x387 = 0;
	int64_t x388 = -1LL;
	volatile int32_t t87 = -66;

	t87 = ((x385|x386)<=(x387-x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = UINT8_MAX;
	int8_t x394 = INT8_MIN;
	volatile int32_t x395 = -1;
	int64_t x396 = -43243LL;
	int32_t t88 = -382748;

	t88 = ((x393|x394)<=(x395-x396));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	int32_t x400 = 914;
	int32_t t89 = -1971;

	t89 = ((x397|x398)<=(x399-x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x405 = INT8_MIN;
	static int32_t x406 = -1;
	volatile uint32_t x407 = 74626U;
	int8_t x408 = -1;

	t90 = ((x405|x406)<=(x407-x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x410 = 554638145762844LLU;
	volatile uint32_t x411 = UINT32_MAX;
	int32_t t91 = 0;

	t91 = ((x409|x410)<=(x411-x412));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x414 = -1;
	uint64_t x415 = 43031343734LLU;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t92 = -11;

	t92 = ((x413|x414)<=(x415-x416));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x417 = INT8_MAX;
	static int8_t x418 = INT8_MIN;
	uint8_t x419 = 1U;
	volatile int32_t t93 = -1903;

	t93 = ((x417|x418)<=(x419-x420));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x421 = INT32_MIN;
	int32_t x422 = INT32_MIN;
	uint16_t x424 = 7892U;
	static int32_t t94 = 0;

	t94 = ((x421|x422)<=(x423-x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x425 = INT16_MAX;
	static int64_t x426 = INT64_MAX;
	volatile uint32_t x427 = UINT32_MAX;
	uint32_t x428 = 294U;
	int32_t t95 = -119085359;

	t95 = ((x425|x426)<=(x427-x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x430 = 14U;
	uint32_t x431 = 5396926U;
	volatile int16_t x432 = INT16_MAX;
	volatile int32_t t96 = 1;

	t96 = ((x429|x430)<=(x431-x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x436 = INT8_MIN;
	static int32_t t97 = 609737518;

	t97 = ((x433|x434)<=(x435-x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x444 = -575;
	int32_t t98 = -25585;

	t98 = ((x441|x442)<=(x443-x444));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x445 = 61U;
	static int8_t x446 = 1;
	int64_t x447 = -329927617672576615LL;
	int32_t x448 = 3830;
	static volatile int32_t t99 = -3824102;

	t99 = ((x445|x446)<=(x447-x448));

	if (t99 != 0) { NG(); } else { ; }
	
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

