#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x11 = 68050U;
volatile int32_t t0 = 446;
int64_t x17 = -1LL;
volatile int32_t t1 = 98980;
volatile int32_t x32 = -1;
static volatile uint16_t x42 = 46U;
int8_t x50 = INT8_MAX;
int32_t x53 = 265028;
int32_t x61 = -1;
int64_t x62 = INT64_MAX;
uint16_t x64 = 1118U;
uint8_t x77 = 24U;
int64_t x86 = INT64_MIN;
static int64_t x91 = INT64_MIN;
uint8_t x95 = 63U;
volatile uint32_t x100 = 5898075U;
int16_t x104 = INT16_MIN;
int64_t x105 = -3LL;
static int8_t x110 = -40;
int32_t t22 = 1228659;
int16_t x127 = INT16_MIN;
int32_t x132 = INT32_MIN;
uint16_t x134 = 1U;
volatile uint8_t x137 = 5U;
static volatile uint64_t x140 = UINT64_MAX;
volatile int32_t t29 = 534393255;
uint32_t x150 = 602642475U;
int8_t x151 = INT8_MIN;
uint16_t x162 = 2U;
int8_t x189 = 31;
uint8_t x191 = UINT8_MAX;
volatile int32_t t37 = 34242067;
int64_t x193 = -1LL;
volatile uint8_t x197 = UINT8_MAX;
volatile int32_t t39 = -1;
int16_t x217 = INT16_MAX;
int32_t t42 = -514;
int8_t x224 = -1;
int16_t x228 = INT16_MIN;
int16_t x229 = INT16_MIN;
uint32_t x237 = UINT32_MAX;
static volatile int32_t t48 = -267708017;
int32_t x245 = -129411805;
int16_t x246 = INT16_MAX;
int32_t x255 = INT32_MIN;
int32_t t51 = -7819;
static volatile int16_t x258 = -13488;
int64_t x269 = -860623730406424LL;
uint64_t x285 = 210LLU;
uint8_t x286 = 11U;
int64_t x289 = -1LL;
int32_t t62 = 148949;
int64_t x304 = INT64_MIN;
static int64_t x308 = INT64_MIN;
static int64_t x314 = INT64_MAX;
uint8_t x316 = UINT8_MAX;
int8_t x328 = 1;
static int32_t x332 = 1059735;
int32_t t68 = -25334245;
int32_t x335 = -1;
int64_t x340 = -1015198995198930151LL;
static volatile int32_t t70 = 212;
uint32_t x343 = UINT32_MAX;
static volatile uint16_t x348 = UINT16_MAX;
static volatile int32_t t72 = -125368368;
int8_t x351 = INT8_MAX;
volatile int32_t x355 = INT32_MAX;
int32_t x365 = INT32_MIN;
uint8_t x366 = 0U;
static volatile int32_t x375 = INT32_MAX;
int32_t t76 = 260795;
volatile int16_t x378 = 15;
static int32_t x381 = -31443;
int64_t x389 = -53783601764651241LL;
volatile int32_t t80 = -10595;
int16_t x398 = INT16_MIN;
int32_t x400 = INT32_MAX;
uint64_t x409 = UINT64_MAX;
volatile int32_t x413 = 14;
int64_t x415 = -1LL;
volatile int64_t x418 = -1LL;
volatile int32_t t86 = -3563045;
uint32_t x421 = UINT32_MAX;
static volatile int32_t x422 = -1459;
volatile int64_t x423 = INT64_MIN;
uint8_t x425 = UINT8_MAX;
volatile int32_t x429 = -1;
volatile int32_t t90 = -28823;
static int32_t t91 = 501;
uint32_t x450 = 473660U;
static int32_t x452 = -3393;
uint64_t x462 = 986206LLU;
int16_t x463 = INT16_MAX;
int8_t x467 = INT8_MIN;
volatile int32_t t97 = -1;
uint8_t x473 = 4U;
int32_t t98 = -693;


void f0(void) {
	int32_t x9 = 46348250;
	uint8_t x10 = UINT8_MAX;
	uint64_t x12 = UINT64_MAX;

	t0 = ((x9-x10)<(x11%x12));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x18 = 0U;
	volatile int8_t x19 = INT8_MIN;
	static int16_t x20 = INT16_MIN;

	t1 = ((x17-x18)<(x19%x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x21 = UINT32_MAX;
	volatile uint32_t x22 = 41593190U;
	uint64_t x23 = 1014141LLU;
	int16_t x24 = 1;
	int32_t t2 = 58409303;

	t2 = ((x21-x22)<(x23%x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = -1;
	static int8_t x30 = INT8_MIN;
	volatile int8_t x31 = -3;
	static volatile int32_t t3 = -5644;

	t3 = ((x29-x30)<(x31%x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x33 = 1LL;
	volatile int32_t x34 = INT32_MIN;
	static int16_t x35 = INT16_MIN;
	uint64_t x36 = 96233897633803175LLU;
	int32_t t4 = 859;

	t4 = ((x33-x34)<(x35%x36));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -6;
	volatile int16_t x38 = 15192;
	int8_t x39 = INT8_MAX;
	volatile int64_t x40 = -2606565834LL;
	int32_t t5 = -2967103;

	t5 = ((x37-x38)<(x39%x40));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x41 = 1;
	int64_t x43 = INT64_MAX;
	int64_t x44 = 924338126589681896LL;
	volatile int32_t t6 = -3790;

	t6 = ((x41-x42)<(x43%x44));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x45 = INT32_MAX;
	volatile int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	static volatile uint64_t x48 = 429364732853393677LLU;
	int32_t t7 = 15260100;

	t7 = ((x45-x46)<(x47%x48));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x49 = -2991572;
	int16_t x51 = 8731;
	static int8_t x52 = INT8_MAX;
	int32_t t8 = 44;

	t8 = ((x49-x50)<(x51%x52));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x54 = INT8_MIN;
	uint16_t x55 = 25987U;
	int32_t x56 = -1;
	volatile int32_t t9 = -155;

	t9 = ((x53-x54)<(x55%x56));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -2995787689471LL;
	static uint32_t x58 = 405U;
	int32_t x59 = 4112973;
	uint32_t x60 = UINT32_MAX;
	volatile int32_t t10 = -129055943;

	t10 = ((x57-x58)<(x59%x60));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x63 = -10;
	static volatile int32_t t11 = 2554;

	t11 = ((x61-x62)<(x63%x64));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MAX;
	int8_t x70 = 0;
	int32_t x71 = 5091384;
	volatile int32_t x72 = -97;
	static volatile int32_t t12 = 8;

	t12 = ((x69-x70)<(x71%x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x73 = UINT8_MAX;
	int8_t x74 = -5;
	int16_t x75 = 2833;
	int64_t x76 = -1LL;
	static int32_t t13 = -32069928;

	t13 = ((x73-x74)<(x75%x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x78 = UINT64_MAX;
	static int16_t x79 = INT16_MIN;
	int8_t x80 = -8;
	volatile int32_t t14 = 0;

	t14 = ((x77-x78)<(x79%x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x81 = -49;
	static int8_t x82 = -1;
	int16_t x83 = 5;
	int16_t x84 = INT16_MIN;
	volatile int32_t t15 = -5707;

	t15 = ((x81-x82)<(x83%x84));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = INT64_MIN;
	int32_t x87 = -1544;
	int64_t x88 = INT64_MIN;
	volatile int32_t t16 = 52668653;

	t16 = ((x85-x86)<(x87%x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x89 = UINT32_MAX;
	volatile uint16_t x90 = 158U;
	uint64_t x92 = 17103LLU;
	int32_t t17 = -496;

	t17 = ((x89-x90)<(x91%x92));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	int8_t x94 = INT8_MAX;
	int32_t x96 = 5087;
	volatile int32_t t18 = 1;

	t18 = ((x93-x94)<(x95%x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = -27;
	uint32_t x98 = 228709U;
	static volatile int32_t x99 = INT32_MIN;
	int32_t t19 = -736312;

	t19 = ((x97-x98)<(x99%x100));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x101 = 1;
	uint64_t x102 = UINT64_MAX;
	int64_t x103 = -271661LL;
	int32_t t20 = -208591;

	t20 = ((x101-x102)<(x103%x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x106 = -1LL;
	int32_t x107 = INT32_MIN;
	uint64_t x108 = 3813794260002979LLU;
	volatile int32_t t21 = -847547393;

	t21 = ((x105-x106)<(x107%x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MIN;
	int16_t x111 = 3;
	volatile uint8_t x112 = UINT8_MAX;

	t22 = ((x109-x110)<(x111%x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = INT16_MIN;
	uint32_t x115 = UINT32_MAX;
	volatile uint64_t x116 = UINT64_MAX;
	int32_t t23 = 22;

	t23 = ((x113-x114)<(x115%x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = INT8_MAX;
	uint64_t x118 = UINT64_MAX;
	volatile uint32_t x119 = 448630U;
	static uint32_t x120 = UINT32_MAX;
	volatile int32_t t24 = -59070;

	t24 = ((x117-x118)<(x119%x120));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x125 = -1;
	static int64_t x126 = 209860742155769LL;
	int16_t x128 = 23;
	volatile int32_t t25 = 239026953;

	t25 = ((x125-x126)<(x127%x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x129 = -1LL;
	volatile int64_t x130 = INT64_MAX;
	uint32_t x131 = 797U;
	volatile int32_t t26 = 15427;

	t26 = ((x129-x130)<(x131%x132));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x133 = -1;
	uint16_t x135 = 3891U;
	uint32_t x136 = UINT32_MAX;
	int32_t t27 = 26;

	t27 = ((x133-x134)<(x135%x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x138 = -1;
	int64_t x139 = -503380LL;
	volatile int32_t t28 = -29;

	t28 = ((x137-x138)<(x139%x140));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -4887;
	int32_t x142 = -29;
	int16_t x143 = INT16_MIN;
	uint32_t x144 = UINT32_MAX;

	t29 = ((x141-x142)<(x143%x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = 28339043303LLU;
	int32_t x146 = -1;
	int8_t x147 = -1;
	volatile int8_t x148 = -1;
	int32_t t30 = 30;

	t30 = ((x145-x146)<(x147%x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = INT16_MAX;
	int8_t x152 = INT8_MIN;
	static int32_t t31 = 163607430;

	t31 = ((x149-x150)<(x151%x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x157 = UINT32_MAX;
	volatile int32_t x158 = INT32_MAX;
	volatile int16_t x159 = INT16_MIN;
	uint32_t x160 = 7U;
	int32_t t32 = 224908;

	t32 = ((x157-x158)<(x159%x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = 26;
	static uint32_t x163 = 12071466U;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t33 = -120318;

	t33 = ((x161-x162)<(x163%x164));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = -1466;
	static int8_t x170 = INT8_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;
	static int32_t t34 = -1;

	t34 = ((x169-x170)<(x171%x172));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x173 = 32165046488562LL;
	uint8_t x174 = 1U;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MIN;
	volatile int32_t t35 = 4323592;

	t35 = ((x173-x174)<(x175%x176));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x185 = UINT8_MAX;
	uint32_t x186 = UINT32_MAX;
	int64_t x187 = -1LL;
	int64_t x188 = INT64_MIN;
	volatile int32_t t36 = -521575;

	t36 = ((x185-x186)<(x187%x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x190 = INT64_MAX;
	volatile int16_t x192 = -1;

	t37 = ((x189-x190)<(x191%x192));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x194 = INT64_MAX;
	int64_t x195 = -1LL;
	uint8_t x196 = UINT8_MAX;
	int32_t t38 = -280;

	t38 = ((x193-x194)<(x195%x196));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x198 = 85;
	int8_t x199 = INT8_MIN;
	uint8_t x200 = UINT8_MAX;

	t39 = ((x197-x198)<(x199%x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x201 = -1LL;
	int16_t x202 = INT16_MAX;
	volatile int8_t x203 = -1;
	int64_t x204 = INT64_MIN;
	int32_t t40 = -13861;

	t40 = ((x201-x202)<(x203%x204));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x213 = UINT64_MAX;
	uint32_t x214 = UINT32_MAX;
	int16_t x215 = INT16_MIN;
	int16_t x216 = -2656;
	volatile int32_t t41 = -1352567;

	t41 = ((x213-x214)<(x215%x216));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x218 = INT16_MIN;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 1608LLU;

	t42 = ((x217-x218)<(x219%x220));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x221 = UINT64_MAX;
	int8_t x222 = 51;
	static volatile uint16_t x223 = 9030U;
	volatile int32_t t43 = 0;

	t43 = ((x221-x222)<(x223%x224));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x225 = -1;
	uint32_t x226 = 71U;
	static int16_t x227 = -1;
	volatile int32_t t44 = 130769295;

	t44 = ((x225-x226)<(x227%x228));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x230 = 86U;
	static uint64_t x231 = 3390125696LLU;
	int64_t x232 = -313LL;
	volatile int32_t t45 = -938517;

	t45 = ((x229-x230)<(x231%x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x233 = INT8_MIN;
	volatile int32_t x234 = 1;
	int8_t x235 = -2;
	int8_t x236 = 1;
	static volatile int32_t t46 = 56;

	t46 = ((x233-x234)<(x235%x236));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x238 = -82;
	int64_t x239 = -1LL;
	static uint16_t x240 = 1767U;
	volatile int32_t t47 = 14;

	t47 = ((x237-x238)<(x239%x240));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x241 = 4425629940LLU;
	uint16_t x242 = 41U;
	uint32_t x243 = 12318U;
	uint16_t x244 = 1880U;

	t48 = ((x241-x242)<(x243%x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x247 = 4U;
	volatile uint64_t x248 = 6492620LLU;
	volatile int32_t t49 = 957569;

	t49 = ((x245-x246)<(x247%x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint64_t x249 = UINT64_MAX;
	uint32_t x250 = UINT32_MAX;
	volatile int64_t x251 = INT64_MIN;
	int16_t x252 = INT16_MIN;
	int32_t t50 = -54572;

	t50 = ((x249-x250)<(x251%x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x253 = UINT8_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	int16_t x256 = INT16_MIN;

	t51 = ((x253-x254)<(x255%x256));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x257 = INT16_MIN;
	int32_t x259 = -464956;
	int64_t x260 = INT64_MAX;
	volatile int32_t t52 = 2;

	t52 = ((x257-x258)<(x259%x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = -26;
	int8_t x262 = INT8_MIN;
	int64_t x263 = 60250074LL;
	int64_t x264 = -1LL;
	int32_t t53 = 226892;

	t53 = ((x261-x262)<(x263%x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x265 = 623861LL;
	uint32_t x266 = 11065565U;
	int16_t x267 = INT16_MAX;
	volatile int64_t x268 = -1LL;
	volatile int32_t t54 = 568;

	t54 = ((x265-x266)<(x267%x268));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x270 = 13U;
	volatile uint8_t x271 = 1U;
	static int64_t x272 = INT64_MAX;
	static volatile int32_t t55 = -3;

	t55 = ((x269-x270)<(x271%x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x273 = -1;
	int64_t x274 = -1LL;
	uint8_t x275 = 15U;
	int32_t x276 = INT32_MAX;
	int32_t t56 = 137700296;

	t56 = ((x273-x274)<(x275%x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = 110802072LLU;
	volatile int8_t x278 = 0;
	int64_t x279 = INT64_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t57 = -206536;

	t57 = ((x277-x278)<(x279%x280));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = INT8_MIN;
	int64_t x282 = -463133869341LL;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = INT64_MIN;
	static int32_t t58 = 12728;

	t58 = ((x281-x282)<(x283%x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x287 = -1;
	int32_t x288 = 13;
	volatile int32_t t59 = 4010;

	t59 = ((x285-x286)<(x287%x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x290 = -1LL;
	static uint8_t x291 = 38U;
	static int8_t x292 = INT8_MIN;
	int32_t t60 = 639;

	t60 = ((x289-x290)<(x291%x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x293 = 493830U;
	int32_t x294 = -1663;
	int16_t x295 = INT16_MIN;
	int32_t x296 = -1;
	int32_t t61 = -961399288;

	t61 = ((x293-x294)<(x295%x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x297 = 208866559LLU;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MAX;

	t62 = ((x297-x298)<(x299%x300));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x301 = -20;
	int16_t x302 = -6;
	int16_t x303 = INT16_MIN;
	static int32_t t63 = 18;

	t63 = ((x301-x302)<(x303%x304));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = -1;
	volatile uint32_t x306 = UINT32_MAX;
	static volatile uint64_t x307 = 2893LLU;
	volatile int32_t t64 = 5511;

	t64 = ((x305-x306)<(x307%x308));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x313 = 95929LLU;
	int32_t x315 = -1;
	static int32_t t65 = 1;

	t65 = ((x313-x314)<(x315%x316));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = -1;
	int64_t x322 = INT64_MIN;
	int64_t x323 = -1LL;
	int16_t x324 = 15;
	volatile int32_t t66 = 123;

	t66 = ((x321-x322)<(x323%x324));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MAX;
	int32_t x327 = INT32_MAX;
	volatile int32_t t67 = 148256828;

	t67 = ((x325-x326)<(x327%x328));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x329 = UINT32_MAX;
	int32_t x330 = -585437713;
	int16_t x331 = INT16_MIN;

	t68 = ((x329-x330)<(x331%x332));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x333 = -1;
	uint64_t x334 = 929LLU;
	int16_t x336 = -2317;
	volatile int32_t t69 = 1;

	t69 = ((x333-x334)<(x335%x336));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MIN;
	int16_t x338 = INT16_MIN;
	int8_t x339 = INT8_MAX;

	t70 = ((x337-x338)<(x339%x340));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x341 = 52U;
	static int16_t x342 = INT16_MIN;
	uint16_t x344 = 165U;
	volatile int32_t t71 = 264506;

	t71 = ((x341-x342)<(x343%x344));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x345 = 9267U;
	uint16_t x346 = UINT16_MAX;
	uint32_t x347 = 126U;

	t72 = ((x345-x346)<(x347%x348));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x349 = UINT8_MAX;
	int16_t x350 = -1;
	int8_t x352 = INT8_MIN;
	static int32_t t73 = -2538;

	t73 = ((x349-x350)<(x351%x352));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x353 = 6301U;
	static uint16_t x354 = 4U;
	uint16_t x356 = 3U;
	volatile int32_t t74 = 20;

	t74 = ((x353-x354)<(x355%x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x367 = UINT16_MAX;
	static volatile int8_t x368 = INT8_MIN;
	volatile int32_t t75 = 16071;

	t75 = ((x365-x366)<(x367%x368));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x373 = 1U;
	uint16_t x374 = UINT16_MAX;
	int8_t x376 = INT8_MIN;

	t76 = ((x373-x374)<(x375%x376));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x377 = INT16_MIN;
	uint16_t x379 = 12U;
	static int64_t x380 = 834163LL;
	static volatile int32_t t77 = 260453;

	t77 = ((x377-x378)<(x379%x380));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x382 = 1U;
	int64_t x383 = INT64_MAX;
	int16_t x384 = -3231;
	static volatile int32_t t78 = 979865578;

	t78 = ((x381-x382)<(x383%x384));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x385 = 1U;
	int64_t x386 = -22450794641249LL;
	int8_t x387 = INT8_MAX;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t79 = 687300297;

	t79 = ((x385-x386)<(x387%x388));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x390 = 80950198U;
	uint32_t x391 = UINT32_MAX;
	static int16_t x392 = -1;

	t80 = ((x389-x390)<(x391%x392));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x393 = -4;
	uint64_t x394 = 67468LLU;
	int64_t x395 = -1LL;
	uint32_t x396 = UINT32_MAX;
	volatile int32_t t81 = 3;

	t81 = ((x393-x394)<(x395%x396));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x397 = 20LL;
	int16_t x399 = INT16_MAX;
	int32_t t82 = 36057;

	t82 = ((x397-x398)<(x399%x400));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = -1;
	int16_t x402 = 1;
	static int8_t x403 = INT8_MIN;
	uint16_t x404 = 342U;
	int32_t t83 = -891374;

	t83 = ((x401-x402)<(x403%x404));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x410 = -3428;
	static int8_t x411 = -7;
	int64_t x412 = 545670LL;
	volatile int32_t t84 = 413490137;

	t84 = ((x409-x410)<(x411%x412));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x414 = 2162959717428458LL;
	uint32_t x416 = 212145132U;
	volatile int32_t t85 = -10434;

	t85 = ((x413-x414)<(x415%x416));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = -1;
	static volatile uint32_t x419 = 3U;
	int64_t x420 = INT64_MIN;

	t86 = ((x417-x418)<(x419%x420));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x424 = -5;
	volatile int32_t t87 = -520929;

	t87 = ((x421-x422)<(x423%x424));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x426 = -1;
	int64_t x427 = -30643194786986861LL;
	volatile int16_t x428 = INT16_MAX;
	static int32_t t88 = -244759;

	t88 = ((x425-x426)<(x427%x428));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x430 = -198480058544LL;
	int16_t x431 = INT16_MAX;
	volatile int16_t x432 = INT16_MIN;
	int32_t t89 = -13;

	t89 = ((x429-x430)<(x431%x432));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x433 = -10289;
	int8_t x434 = -1;
	int16_t x435 = INT16_MIN;
	volatile uint32_t x436 = UINT32_MAX;

	t90 = ((x433-x434)<(x435%x436));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x437 = INT8_MIN;
	int16_t x438 = 2676;
	int8_t x439 = -1;
	int16_t x440 = -1;

	t91 = ((x437-x438)<(x439%x440));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = -656;
	int8_t x447 = -1;
	uint32_t x448 = UINT32_MAX;
	static int32_t t92 = 0;

	t92 = ((x445-x446)<(x447%x448));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x449 = 305LLU;
	static uint64_t x451 = UINT64_MAX;
	volatile int32_t t93 = 194;

	t93 = ((x449-x450)<(x451%x452));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = -16;
	volatile uint16_t x458 = 3U;
	volatile int32_t x459 = 25426366;
	static uint64_t x460 = 4875LLU;
	volatile int32_t t94 = -27;

	t94 = ((x457-x458)<(x459%x460));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x461 = -1;
	int8_t x464 = -28;
	int32_t t95 = 0;

	t95 = ((x461-x462)<(x463%x464));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x465 = UINT8_MAX;
	volatile int32_t x466 = INT32_MAX;
	static uint64_t x468 = UINT64_MAX;
	int32_t t96 = -474;

	t96 = ((x465-x466)<(x467%x468));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x469 = 1780994667U;
	static int16_t x470 = INT16_MIN;
	int8_t x471 = INT8_MAX;
	uint32_t x472 = UINT32_MAX;

	t97 = ((x469-x470)<(x471%x472));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x474 = UINT32_MAX;
	uint16_t x475 = UINT16_MAX;
	int16_t x476 = INT16_MIN;

	t98 = ((x473-x474)<(x475%x476));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x477 = 14794433;
	int32_t x478 = INT32_MAX;
	int64_t x479 = INT64_MAX;
	uint32_t x480 = 36189682U;
	int32_t t99 = 0;

	t99 = ((x477-x478)<(x479%x480));

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

