#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
volatile uint32_t x9 = 31U;
static uint32_t x10 = UINT32_MAX;
volatile int16_t x12 = INT16_MIN;
volatile int32_t t2 = 806964009;
volatile int32_t t3 = -661;
int8_t x17 = 5;
int8_t x23 = -1;
static volatile int64_t x28 = -1LL;
static volatile int32_t t6 = -36973662;
int64_t x31 = -1447LL;
int32_t t8 = -127503316;
uint16_t x42 = UINT16_MAX;
static int32_t t10 = 48347;
static int16_t x46 = INT16_MAX;
volatile uint8_t x54 = 0U;
int32_t t13 = -90;
int32_t x57 = 880937;
uint8_t x58 = UINT8_MAX;
int32_t t14 = -3990;
uint64_t x61 = UINT64_MAX;
volatile int32_t t15 = -1;
int64_t x71 = -1735860774255472LL;
int16_t x74 = 15362;
int8_t x86 = INT8_MIN;
uint8_t x87 = UINT8_MAX;
int32_t x109 = 389458;
static uint8_t x112 = 1U;
uint16_t x122 = 15365U;
int32_t x129 = -243254;
int32_t t31 = -831;
uint8_t x135 = UINT8_MAX;
volatile int64_t x136 = INT64_MAX;
static volatile int32_t t32 = 381;
int16_t x140 = INT16_MIN;
volatile int16_t x146 = INT16_MAX;
int64_t x158 = -1LL;
uint16_t x163 = 2173U;
static int32_t x173 = INT32_MAX;
volatile int64_t x176 = 292899581LL;
uint64_t x177 = 2703708683583992719LLU;
static uint64_t x180 = UINT64_MAX;
static int32_t t42 = -172;
static volatile uint16_t x188 = 238U;
int64_t x190 = INT64_MIN;
int64_t x192 = -1LL;
volatile int32_t t45 = -39;
static int16_t x196 = -1;
volatile int32_t x200 = 3;
static int32_t x202 = INT32_MIN;
volatile uint64_t x204 = UINT64_MAX;
int32_t t48 = -3;
uint32_t x208 = 82186U;
static volatile int32_t t49 = -18424;
volatile uint16_t x216 = UINT16_MAX;
static int64_t x218 = INT64_MAX;
volatile int32_t t53 = 188864;
uint32_t x225 = 63655711U;
int8_t x232 = -1;
static uint32_t x233 = 6742625U;
static uint16_t x237 = 17037U;
uint32_t x252 = 286823U;
static uint64_t x257 = 1079582784026129LLU;
static volatile int16_t x259 = 1;
uint64_t x265 = UINT64_MAX;
volatile int32_t x267 = 29586;
volatile int32_t t64 = -41;
int32_t x278 = INT32_MAX;
int64_t x286 = INT64_MIN;
static uint16_t x300 = 3587U;
uint16_t x301 = UINT16_MAX;
int8_t x306 = INT8_MIN;
static volatile int32_t x320 = 37;
int64_t x328 = INT64_MIN;
uint8_t x333 = 7U;
static int32_t x336 = INT32_MIN;
int16_t x351 = 44;
volatile int64_t x355 = 8603904LL;
static uint32_t x356 = 31U;
uint16_t x357 = 11031U;
int8_t x361 = 0;
int8_t x366 = -1;
uint8_t x373 = UINT8_MAX;
static int32_t x375 = -1;
int8_t x377 = -1;
static int32_t t89 = -1;
static int64_t x383 = INT64_MAX;
uint64_t x386 = 30210835LLU;
int16_t x389 = INT16_MIN;
static uint64_t x391 = 32976LLU;
int32_t x392 = -1;
int16_t x404 = INT16_MIN;
int32_t t96 = 219755893;
uint16_t x411 = 5984U;
int32_t x412 = INT32_MAX;
volatile int32_t t97 = 28;
static uint16_t x413 = UINT16_MAX;
uint64_t x420 = 266770221323118986LLU;


void f0(void) {
	static volatile uint32_t x1 = UINT32_MAX;
	static int64_t x3 = -1LL;
	volatile int16_t x4 = INT16_MAX;
	volatile int32_t t0 = -2525;

	t0 = ((x1|x2)<(x3/x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = -1;
	volatile uint64_t x7 = 29235LLU;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t1 = 8073;

	t1 = ((x5|x6)<(x7/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x11 = 1112U;

	t2 = ((x9|x10)<(x11/x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = 1;
	volatile uint32_t x14 = 26691U;
	static volatile uint8_t x15 = 0U;
	volatile int16_t x16 = INT16_MIN;

	t3 = ((x13|x14)<(x15/x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 556632965U;
	static int16_t x19 = INT16_MIN;
	uint16_t x20 = 3U;
	static volatile int32_t t4 = -92499;

	t4 = ((x17|x18)<(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 16247343511382LLU;
	int8_t x22 = -1;
	uint16_t x24 = UINT16_MAX;
	volatile int32_t t5 = -5;

	t5 = ((x21|x22)<(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 375230946LLU;
	uint8_t x26 = 8U;
	volatile int32_t x27 = -1;

	t6 = ((x25|x26)<(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MAX;
	volatile uint16_t x30 = 39U;
	static volatile uint8_t x32 = 41U;
	volatile int32_t t7 = 1;

	t7 = ((x29|x30)<(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 100U;
	uint16_t x34 = 22507U;
	int32_t x35 = -1;
	int16_t x36 = 10;

	t8 = ((x33|x34)<(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MAX;
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 74U;
	static int64_t x40 = 1LL;
	int32_t t9 = -3;

	t9 = ((x37|x38)<(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MAX;
	static uint16_t x43 = 942U;
	uint16_t x44 = 86U;

	t10 = ((x41|x42)<(x43/x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	int16_t x47 = -430;
	volatile int32_t x48 = -1;
	static int32_t t11 = -349727;

	t11 = ((x45|x46)<(x47/x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 2U;
	int64_t x51 = 16994350848LL;
	volatile uint64_t x52 = 76443LLU;
	volatile int32_t t12 = -9069287;

	t12 = ((x49|x50)<(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int8_t x55 = INT8_MIN;
	volatile int64_t x56 = -78274714560045076LL;

	t13 = ((x53|x54)<(x55/x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x59 = -15;
	int64_t x60 = 60LL;

	t14 = ((x57|x58)<(x59/x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = UINT8_MAX;
	static volatile int8_t x63 = INT8_MAX;
	int64_t x64 = -1LL;

	t15 = ((x61|x62)<(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = INT64_MAX;
	int64_t x67 = -1LL;
	static volatile int8_t x68 = INT8_MIN;
	int32_t t16 = -346167;

	t16 = ((x65|x66)<(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	volatile uint8_t x70 = 0U;
	uint16_t x72 = 5871U;
	int32_t t17 = -1599;

	t17 = ((x69|x70)<(x71/x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MIN;
	uint8_t x75 = 31U;
	int16_t x76 = -808;
	volatile int32_t t18 = 2;

	t18 = ((x73|x74)<(x75/x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	int8_t x78 = INT8_MAX;
	volatile uint16_t x79 = 6896U;
	int32_t x80 = INT32_MAX;
	static volatile int32_t t19 = 28083;

	t19 = ((x77|x78)<(x79/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -1;
	volatile uint16_t x88 = 11U;
	volatile int32_t t20 = 1;

	t20 = ((x85|x86)<(x87/x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = -1LL;
	int16_t x90 = INT16_MAX;
	volatile uint8_t x91 = UINT8_MAX;
	uint8_t x92 = 7U;
	static int32_t t21 = -2595219;

	t21 = ((x89|x90)<(x91/x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint32_t x94 = 925955U;
	static int8_t x95 = 1;
	static volatile int64_t x96 = -205LL;
	int32_t t22 = -560;

	t22 = ((x93|x94)<(x95/x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = -1;
	int16_t x99 = 160;
	volatile int8_t x100 = INT8_MAX;
	int32_t t23 = -1219761;

	t23 = ((x97|x98)<(x99/x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x101 = 1U;
	uint64_t x102 = 13721264585LLU;
	volatile int8_t x103 = INT8_MAX;
	int64_t x104 = -721LL;
	volatile int32_t t24 = 18720;

	t24 = ((x101|x102)<(x103/x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -1470;
	int64_t x106 = -500243039660661LL;
	uint16_t x107 = 1047U;
	static volatile uint64_t x108 = UINT64_MAX;
	volatile int32_t t25 = 261273;

	t25 = ((x105|x106)<(x107/x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x110 = 57U;
	int32_t x111 = -239;
	static int32_t t26 = -9542184;

	t26 = ((x109|x110)<(x111/x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x113 = 74U;
	uint64_t x114 = 911225593132900LLU;
	int8_t x115 = -7;
	volatile int32_t x116 = INT32_MIN;
	static volatile int32_t t27 = 2015734;

	t27 = ((x113|x114)<(x115/x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = 1101670769580384LLU;
	static int8_t x118 = -1;
	static uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 15U;
	int32_t t28 = -6320;

	t28 = ((x117|x118)<(x119/x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = INT16_MAX;
	int32_t x123 = -1;
	int64_t x124 = -1LL;
	static volatile int32_t t29 = 26636;

	t29 = ((x121|x122)<(x123/x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	static uint64_t x126 = 44841884093LLU;
	int8_t x127 = -1;
	int16_t x128 = INT16_MAX;
	int32_t t30 = -711866;

	t30 = ((x125|x126)<(x127/x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = INT64_MIN;
	volatile uint8_t x131 = 24U;
	uint16_t x132 = 160U;

	t31 = ((x129|x130)<(x131/x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = UINT32_MAX;
	int8_t x134 = -1;

	t32 = ((x133|x134)<(x135/x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x137 = -965845;
	int32_t x138 = INT32_MAX;
	uint16_t x139 = UINT16_MAX;
	static int32_t t33 = -112914;

	t33 = ((x137|x138)<(x139/x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -1;
	uint64_t x142 = 84402224279LLU;
	int64_t x143 = INT64_MIN;
	uint32_t x144 = 4777U;
	volatile int32_t t34 = -2061120;

	t34 = ((x141|x142)<(x143/x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 55LLU;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MAX;
	volatile int32_t t35 = -1554572;

	t35 = ((x145|x146)<(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MIN;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = 17U;
	uint16_t x152 = 4U;
	int32_t t36 = 0;

	t36 = ((x149|x150)<(x151/x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = -199618684795LL;
	static int8_t x159 = 0;
	int64_t x160 = -1LL;
	int32_t t37 = 63864016;

	t37 = ((x157|x158)<(x159/x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x161 = -1;
	static int8_t x162 = INT8_MIN;
	int64_t x164 = INT64_MIN;
	static int32_t t38 = 108269884;

	t38 = ((x161|x162)<(x163/x164));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x165 = -1;
	volatile int64_t x166 = INT64_MIN;
	int32_t x167 = -1;
	int8_t x168 = -47;
	int32_t t39 = -2;

	t39 = ((x165|x166)<(x167/x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x169 = UINT64_MAX;
	int32_t x170 = 683;
	int64_t x171 = -1LL;
	int32_t x172 = -1;
	int32_t t40 = -26;

	t40 = ((x169|x170)<(x171/x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x174 = 59;
	int32_t x175 = INT32_MAX;
	int32_t t41 = -27680;

	t41 = ((x173|x174)<(x175/x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x178 = INT16_MIN;
	volatile uint32_t x179 = UINT32_MAX;

	t42 = ((x177|x178)<(x179/x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = -1;
	int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MAX;
	static int32_t x184 = 13;
	volatile int32_t t43 = -418995205;

	t43 = ((x181|x182)<(x183/x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MAX;
	uint16_t x186 = 409U;
	uint32_t x187 = UINT32_MAX;
	int32_t t44 = 3;

	t44 = ((x185|x186)<(x187/x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x189 = UINT32_MAX;
	int32_t x191 = INT32_MIN;

	t45 = ((x189|x190)<(x191/x192));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	int8_t x195 = -4;
	volatile int32_t t46 = 113;

	t46 = ((x193|x194)<(x195/x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x197 = 2925U;
	int32_t x198 = -1;
	volatile uint16_t x199 = UINT16_MAX;
	volatile int32_t t47 = -5009580;

	t47 = ((x197|x198)<(x199/x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	int16_t x203 = INT16_MIN;

	t48 = ((x201|x202)<(x203/x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x205 = -1;
	volatile uint32_t x206 = 1312243U;
	int32_t x207 = -1;

	t49 = ((x205|x206)<(x207/x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = -1;
	int16_t x211 = 442;
	uint64_t x212 = 51825972175958LLU;
	int32_t t50 = 5178;

	t50 = ((x209|x210)<(x211/x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x213 = 464;
	int64_t x214 = 11895397939803936LL;
	int16_t x215 = -1;
	volatile int32_t t51 = 346;

	t51 = ((x213|x214)<(x215/x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x217 = 74674U;
	int16_t x219 = INT16_MAX;
	static uint8_t x220 = 73U;
	volatile int32_t t52 = -13984;

	t52 = ((x217|x218)<(x219/x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x221 = UINT8_MAX;
	int16_t x222 = -1;
	uint16_t x223 = 0U;
	static uint8_t x224 = 124U;

	t53 = ((x221|x222)<(x223/x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	int8_t x228 = INT8_MAX;
	volatile int32_t t54 = -29290;

	t54 = ((x225|x226)<(x227/x228));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x229 = UINT32_MAX;
	int32_t x230 = INT32_MAX;
	static uint64_t x231 = UINT64_MAX;
	volatile int32_t t55 = -1;

	t55 = ((x229|x230)<(x231/x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x234 = 37;
	volatile int16_t x235 = INT16_MAX;
	int16_t x236 = -1;
	static int32_t t56 = -59419236;

	t56 = ((x233|x234)<(x235/x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x238 = -1;
	static volatile uint16_t x239 = 14728U;
	static uint32_t x240 = 2U;
	volatile int32_t t57 = -15253770;

	t57 = ((x237|x238)<(x239/x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = 1251929209816134LL;
	int64_t x246 = -131203648LL;
	int8_t x247 = 15;
	uint8_t x248 = 44U;
	volatile int32_t t58 = -765;

	t58 = ((x245|x246)<(x247/x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x249 = 104U;
	volatile int64_t x250 = INT64_MIN;
	static int8_t x251 = 0;
	volatile int32_t t59 = -26994788;

	t59 = ((x249|x250)<(x251/x252));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x258 = -1;
	int8_t x260 = INT8_MAX;
	static volatile int32_t t60 = -74482;

	t60 = ((x257|x258)<(x259/x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -3;
	volatile int32_t x262 = -241;
	static uint8_t x263 = 5U;
	uint8_t x264 = 2U;
	int32_t t61 = -74426;

	t61 = ((x261|x262)<(x263/x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x266 = 0U;
	static volatile int32_t x268 = 410952;
	static volatile int32_t t62 = -7440053;

	t62 = ((x265|x266)<(x267/x268));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -44;
	volatile int16_t x270 = INT16_MIN;
	static uint32_t x271 = UINT32_MAX;
	uint32_t x272 = 506822U;
	int32_t t63 = -1683;

	t63 = ((x269|x270)<(x271/x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	static volatile int64_t x274 = 181393193243450LL;
	static int32_t x275 = 3;
	int32_t x276 = INT32_MAX;

	t64 = ((x273|x274)<(x275/x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x277 = UINT64_MAX;
	uint32_t x279 = 3086U;
	uint16_t x280 = 3299U;
	volatile int32_t t65 = 1;

	t65 = ((x277|x278)<(x279/x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x281 = -1;
	volatile uint16_t x282 = 3643U;
	volatile uint64_t x283 = UINT64_MAX;
	uint64_t x284 = 4018981011711LLU;
	static int32_t t66 = 0;

	t66 = ((x281|x282)<(x283/x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = INT64_MIN;
	int64_t x287 = INT64_MIN;
	volatile uint8_t x288 = UINT8_MAX;
	volatile int32_t t67 = 494474988;

	t67 = ((x285|x286)<(x287/x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = 974664500U;
	int32_t x290 = INT32_MAX;
	uint8_t x291 = 1U;
	int64_t x292 = INT64_MAX;
	volatile int32_t t68 = 8;

	t68 = ((x289|x290)<(x291/x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	int64_t x294 = 94619172190573LL;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	static int32_t t69 = -530335;

	t69 = ((x293|x294)<(x295/x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x297 = -1;
	int64_t x298 = INT64_MIN;
	volatile int32_t x299 = INT32_MIN;
	int32_t t70 = -7753;

	t70 = ((x297|x298)<(x299/x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x302 = UINT64_MAX;
	int32_t x303 = -1;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t71 = -249;

	t71 = ((x301|x302)<(x303/x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x305 = INT16_MIN;
	uint64_t x307 = 13639LLU;
	int64_t x308 = -246336345LL;
	int32_t t72 = 1;

	t72 = ((x305|x306)<(x307/x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x309 = 19128608822LLU;
	volatile uint8_t x310 = 6U;
	int8_t x311 = INT8_MAX;
	static volatile int64_t x312 = INT64_MIN;
	int32_t t73 = -34781958;

	t73 = ((x309|x310)<(x311/x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x313 = INT32_MAX;
	int32_t x314 = -2;
	int32_t x315 = -1;
	int32_t x316 = 899280642;
	static int32_t t74 = -15;

	t74 = ((x313|x314)<(x315/x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = 2;
	uint8_t x318 = 114U;
	int16_t x319 = -42;
	volatile int32_t t75 = 408076;

	t75 = ((x317|x318)<(x319/x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x321 = UINT64_MAX;
	int8_t x322 = INT8_MIN;
	static int64_t x323 = INT64_MIN;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t76 = -1285;

	t76 = ((x321|x322)<(x323/x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	static int8_t x326 = INT8_MAX;
	int64_t x327 = -1LL;
	int32_t t77 = -148612;

	t77 = ((x325|x326)<(x327/x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = -1;
	volatile int64_t x330 = -1LL;
	int16_t x331 = -110;
	int16_t x332 = INT16_MAX;
	volatile int32_t t78 = -18;

	t78 = ((x329|x330)<(x331/x332));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x334 = 1026038;
	static int8_t x335 = INT8_MAX;
	int32_t t79 = -310974;

	t79 = ((x333|x334)<(x335/x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x341 = -1;
	uint16_t x342 = UINT16_MAX;
	static int32_t x343 = INT32_MAX;
	int8_t x344 = INT8_MIN;
	int32_t t80 = 0;

	t80 = ((x341|x342)<(x343/x344));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x345 = INT64_MAX;
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = 46;
	int8_t x348 = INT8_MIN;
	int32_t t81 = -71;

	t81 = ((x345|x346)<(x347/x348));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x349 = 1U;
	uint64_t x350 = UINT64_MAX;
	int64_t x352 = INT64_MIN;
	volatile int32_t t82 = -6335975;

	t82 = ((x349|x350)<(x351/x352));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x353 = INT16_MIN;
	volatile int8_t x354 = -1;
	int32_t t83 = -29728531;

	t83 = ((x353|x354)<(x355/x356));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x358 = 442678375U;
	uint64_t x359 = 276729019400024LLU;
	uint8_t x360 = 21U;
	volatile int32_t t84 = -165167832;

	t84 = ((x357|x358)<(x359/x360));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MAX;
	int16_t x364 = -1;
	volatile int32_t t85 = -9;

	t85 = ((x361|x362)<(x363/x364));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x365 = UINT32_MAX;
	static volatile int16_t x367 = INT16_MIN;
	int32_t x368 = -7;
	volatile int32_t t86 = 358738;

	t86 = ((x365|x366)<(x367/x368));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x369 = 302U;
	uint32_t x370 = 6U;
	uint16_t x371 = UINT16_MAX;
	static volatile int32_t x372 = INT32_MAX;
	volatile int32_t t87 = 7219683;

	t87 = ((x369|x370)<(x371/x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x374 = -1;
	volatile int16_t x376 = -1;
	int32_t t88 = 4125999;

	t88 = ((x373|x374)<(x375/x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x378 = INT32_MAX;
	volatile int8_t x379 = INT8_MIN;
	uint64_t x380 = 2243LLU;

	t89 = ((x377|x378)<(x379/x380));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x381 = UINT64_MAX;
	static uint16_t x382 = 29550U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t90 = 2;

	t90 = ((x381|x382)<(x383/x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x385 = 1U;
	volatile int64_t x387 = -1LL;
	volatile int64_t x388 = 123510LL;
	int32_t t91 = 324;

	t91 = ((x385|x386)<(x387/x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x390 = INT64_MAX;
	volatile int32_t t92 = 205;

	t92 = ((x389|x390)<(x391/x392));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x393 = 3U;
	int8_t x394 = INT8_MIN;
	int16_t x395 = -62;
	int32_t x396 = -1;
	volatile int32_t t93 = 68153859;

	t93 = ((x393|x394)<(x395/x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x397 = 398733LL;
	int32_t x398 = INT32_MIN;
	int64_t x399 = INT64_MAX;
	static volatile int64_t x400 = INT64_MIN;
	volatile int32_t t94 = -1968497;

	t94 = ((x397|x398)<(x399/x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x401 = INT8_MIN;
	int32_t x402 = -1;
	uint32_t x403 = UINT32_MAX;
	volatile int32_t t95 = 3;

	t95 = ((x401|x402)<(x403/x404));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 1542U;
	static uint8_t x406 = UINT8_MAX;
	int16_t x407 = INT16_MAX;
	uint8_t x408 = 1U;

	t96 = ((x405|x406)<(x407/x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x409 = 2;
	int32_t x410 = -5870;

	t97 = ((x409|x410)<(x411/x412));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x414 = 1106406982416768LLU;
	int16_t x415 = -1;
	static uint32_t x416 = UINT32_MAX;
	volatile int32_t t98 = -2;

	t98 = ((x413|x414)<(x415/x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x417 = 16U;
	int16_t x418 = INT16_MAX;
	int64_t x419 = INT64_MIN;
	volatile int32_t t99 = -394263105;

	t99 = ((x417|x418)<(x419/x420));

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

