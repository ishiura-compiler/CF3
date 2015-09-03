#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 295U;
static int16_t x5 = -1;
uint32_t x8 = 14U;
static volatile int32_t t1 = 2065533;
uint8_t x16 = 5U;
static int8_t x19 = INT8_MAX;
int8_t x22 = INT8_MAX;
int32_t t6 = 163943;
uint32_t x29 = UINT32_MAX;
int16_t x38 = INT16_MIN;
static volatile int64_t x41 = -4060615875LL;
int64_t x42 = INT64_MAX;
uint16_t x45 = 21U;
volatile uint8_t x51 = 1U;
volatile int16_t x56 = -679;
uint64_t x57 = 31846LLU;
volatile int32_t t14 = 39709044;
volatile int32_t t15 = 137;
int32_t t16 = -1;
volatile uint64_t x69 = UINT64_MAX;
uint32_t x71 = 43U;
volatile int16_t x72 = INT16_MAX;
int16_t x73 = INT16_MIN;
static int64_t x76 = INT64_MIN;
static int8_t x78 = 2;
volatile int32_t t21 = -180;
static uint32_t x92 = 3U;
static volatile int32_t t22 = 276530;
uint64_t x94 = 14067011896085LLU;
static volatile int32_t t23 = 1;
int16_t x98 = INT16_MIN;
int8_t x101 = INT8_MIN;
static int16_t x108 = INT16_MIN;
volatile int32_t x111 = -115275056;
int32_t x115 = -748;
static uint64_t x129 = 2365661081928048733LLU;
int16_t x131 = -187;
int64_t x133 = -1LL;
int32_t x141 = INT32_MIN;
uint32_t x143 = 170365U;
int16_t x144 = -1;
static volatile uint16_t x153 = UINT16_MAX;
uint64_t x154 = UINT64_MAX;
int32_t t38 = -5850;
int8_t x157 = INT8_MAX;
int32_t x158 = INT32_MAX;
int64_t x161 = INT64_MAX;
volatile int16_t x163 = INT16_MIN;
int64_t x164 = INT64_MAX;
int32_t x167 = INT32_MAX;
uint32_t x175 = UINT32_MAX;
uint64_t x190 = 1515676LLU;
static volatile int32_t t47 = -32;
static int32_t t48 = -1215767;
static int32_t x198 = INT32_MAX;
uint64_t x199 = 8983328LLU;
volatile int32_t t49 = -1885476;
uint16_t x203 = UINT16_MAX;
static int32_t x205 = -239972;
int64_t x209 = INT64_MAX;
int64_t x211 = INT64_MIN;
int32_t x222 = -1;
static uint16_t x228 = 1503U;
int32_t x229 = INT32_MIN;
uint32_t x230 = 62753U;
int32_t x231 = 82;
int64_t x232 = INT64_MAX;
static volatile int32_t x234 = INT32_MIN;
volatile int32_t t58 = -33569823;
volatile int16_t x240 = INT16_MIN;
uint64_t x244 = 2013116334600306469LLU;
int16_t x246 = 366;
volatile int32_t t61 = -1;
int32_t x249 = 16526512;
uint32_t x250 = 1159344773U;
volatile int32_t t62 = 19534;
volatile int32_t t63 = -102525033;
int32_t x260 = INT32_MAX;
int64_t x261 = -1LL;
int8_t x263 = -1;
static volatile int32_t t65 = -10520;
int16_t x265 = 1301;
static uint32_t x275 = 0U;
static int64_t x287 = INT64_MAX;
uint32_t x290 = 7794U;
static int64_t x292 = INT64_MIN;
static uint64_t x294 = 4293123185888LLU;
int8_t x299 = INT8_MIN;
volatile int32_t t74 = 3;
int32_t x303 = -5;
uint8_t x308 = UINT8_MAX;
int16_t x310 = 10;
int8_t x313 = INT8_MIN;
static int32_t x315 = INT32_MAX;
volatile uint64_t x317 = 21526268308519LLU;
int64_t x320 = INT64_MAX;
uint32_t x321 = UINT32_MAX;
volatile uint64_t x322 = 59052429317165053LLU;
int64_t x324 = -1243866733LL;
int32_t t80 = -1145;
uint16_t x329 = 382U;
static volatile uint32_t x331 = 4750U;
volatile int32_t t83 = -1;
static uint32_t x348 = 2822U;
uint16_t x349 = 0U;
static uint8_t x351 = UINT8_MAX;
volatile int32_t t87 = 0;
static int32_t x367 = 745822;
static int32_t x374 = INT32_MIN;
int8_t x376 = -27;
int32_t t93 = 212718;
int32_t x379 = -377;
int64_t x380 = -1LL;
uint32_t x382 = 12298U;
uint64_t x383 = 35602542LLU;
uint64_t x392 = 990971248116141LLU;
volatile int32_t t97 = 48549210;
static int64_t x395 = INT64_MAX;
int8_t x396 = INT8_MAX;
static int8_t x397 = INT8_MIN;


void f0(void) {
	int64_t x2 = -1LL;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = INT8_MIN;
	static int32_t t0 = -589836470;

	t0 = ((x1<x2)==(x3==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x6 = 137U;
	uint64_t x7 = 3873038593367210LLU;

	t1 = ((x5<x6)==(x7==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -14090LL;
	uint64_t x10 = 186553590201800494LLU;
	static int32_t x11 = INT32_MAX;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = 516;

	t2 = ((x9<x10)==(x11==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x14 = 369;
	volatile uint32_t x15 = UINT32_MAX;
	volatile int32_t t3 = 2490;

	t3 = ((x13<x14)==(x15==x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	uint64_t x20 = 28994LLU;
	volatile int32_t t4 = 45908;

	t4 = ((x17<x18)==(x19==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x21 = -1049;
	static volatile uint8_t x23 = UINT8_MAX;
	uint64_t x24 = UINT64_MAX;
	volatile int32_t t5 = -209407;

	t5 = ((x21<x22)==(x23==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 6123442;
	int8_t x26 = -1;
	int64_t x27 = INT64_MAX;
	int32_t x28 = INT32_MAX;

	t6 = ((x25<x26)==(x27==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = UINT8_MAX;
	uint8_t x31 = 2U;
	int8_t x32 = 1;
	int32_t t7 = -15009;

	t7 = ((x29<x30)==(x31==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 61;
	static int8_t x34 = -1;
	uint32_t x35 = 1612967433U;
	volatile uint32_t x36 = 107U;
	int32_t t8 = -3491;

	t8 = ((x33<x34)==(x35==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	int16_t x39 = -1;
	static volatile uint32_t x40 = 1U;
	int32_t t9 = -754823770;

	t9 = ((x37<x38)==(x39==x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x43 = -1;
	uint64_t x44 = 11333LLU;
	static volatile int32_t t10 = -3004240;

	t10 = ((x41<x42)==(x43==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x46 = -7;
	int16_t x47 = 15916;
	volatile int8_t x48 = -23;
	volatile int32_t t11 = 143575638;

	t11 = ((x45<x46)==(x47==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MIN;
	static int64_t x50 = INT64_MIN;
	uint8_t x52 = 1U;
	volatile int32_t t12 = -31291;

	t12 = ((x49<x50)==(x51==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int16_t x54 = INT16_MAX;
	static int64_t x55 = -1LL;
	int32_t t13 = 0;

	t13 = ((x53<x54)==(x55==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = 1;
	uint8_t x59 = 0U;
	static int8_t x60 = INT8_MAX;

	t14 = ((x57<x58)==(x59==x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 1;
	volatile uint8_t x62 = UINT8_MAX;
	volatile int64_t x63 = INT64_MIN;
	int32_t x64 = 673067195;

	t15 = ((x61<x62)==(x63==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 1;
	volatile uint64_t x66 = 9LLU;
	int64_t x67 = -3LL;
	uint32_t x68 = UINT32_MAX;

	t16 = ((x65<x66)==(x67==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = INT16_MIN;
	volatile int32_t t17 = 4;

	t17 = ((x69<x70)==(x71==x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x74 = INT16_MAX;
	int8_t x75 = INT8_MAX;
	volatile int32_t t18 = 102170;

	t18 = ((x73<x74)==(x75==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = UINT64_MAX;
	static uint32_t x79 = 106445833U;
	static int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 6920391;

	t19 = ((x77<x78)==(x79==x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MIN;
	volatile int16_t x83 = -33;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -2327;

	t20 = ((x81<x82)==(x83==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 0LLU;
	int16_t x86 = -7979;
	int32_t x87 = -101;
	volatile int16_t x88 = INT16_MAX;

	t21 = ((x85<x86)==(x87==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MAX;
	volatile int16_t x90 = -1;
	volatile uint16_t x91 = UINT16_MAX;

	t22 = ((x89<x90)==(x91==x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = INT32_MIN;
	int16_t x95 = INT16_MAX;
	uint16_t x96 = 100U;

	t23 = ((x93<x94)==(x95==x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 7559U;
	int32_t x99 = -46;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -5076697;

	t24 = ((x97<x98)==(x99==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -8;
	volatile int32_t x103 = -1;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = -167556;

	t25 = ((x101<x102)==(x103==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x105 = INT32_MIN;
	static int16_t x106 = 125;
	int32_t x107 = INT32_MIN;
	int32_t t26 = 64501869;

	t26 = ((x105<x106)==(x107==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -3;
	uint32_t x110 = 59U;
	static uint32_t x112 = 312745U;
	int32_t t27 = -11625;

	t27 = ((x109<x110)==(x111==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	uint32_t x114 = UINT32_MAX;
	uint8_t x116 = 0U;
	volatile int32_t t28 = -7;

	t28 = ((x113<x114)==(x115==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = -4;
	uint8_t x118 = 61U;
	int8_t x119 = -1;
	volatile int64_t x120 = -1LL;
	volatile int32_t t29 = 12194;

	t29 = ((x117<x118)==(x119==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -27;
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -17;
	uint16_t x124 = 100U;
	int32_t t30 = -4989;

	t30 = ((x121<x122)==(x123==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	static volatile int16_t x126 = 1413;
	int64_t x127 = INT64_MAX;
	int64_t x128 = INT64_MIN;
	int32_t t31 = 115;

	t31 = ((x125<x126)==(x127==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x130 = INT16_MIN;
	volatile int16_t x132 = -1;
	volatile int32_t t32 = -241;

	t32 = ((x129<x130)==(x131==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 730U;
	uint64_t x135 = 483936LLU;
	volatile int64_t x136 = 61373061LL;
	int32_t t33 = -3291466;

	t33 = ((x133<x134)==(x135==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = 28U;
	volatile uint32_t x138 = 172U;
	uint8_t x139 = 15U;
	volatile uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = -30305559;

	t34 = ((x137<x138)==(x139==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	volatile int32_t t35 = 11;

	t35 = ((x141<x142)==(x143==x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 37U;
	uint32_t x146 = UINT32_MAX;
	int16_t x147 = INT16_MAX;
	static int32_t x148 = -1;
	int32_t t36 = 48;

	t36 = ((x145<x146)==(x147==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = 548257811121508LLU;
	static volatile int32_t t37 = -63018448;

	t37 = ((x149<x150)==(x151==x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x155 = 60963;
	uint64_t x156 = 4506574273530479LLU;

	t38 = ((x153<x154)==(x155==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x159 = -78;
	uint8_t x160 = 4U;
	int32_t t39 = -27122700;

	t39 = ((x157<x158)==(x159==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x162 = INT16_MIN;
	static int32_t t40 = -5364674;

	t40 = ((x161<x162)==(x163==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x165 = INT16_MIN;
	static int16_t x166 = INT16_MAX;
	volatile uint64_t x168 = 15359034699LLU;
	volatile int32_t t41 = 105139;

	t41 = ((x165<x166)==(x167==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 0;
	volatile uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MAX;
	uint8_t x172 = 0U;
	volatile int32_t t42 = -6311967;

	t42 = ((x169<x170)==(x171==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	volatile uint8_t x174 = UINT8_MAX;
	uint32_t x176 = 87U;
	int32_t t43 = 264750750;

	t43 = ((x173<x174)==(x175==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x177 = UINT8_MAX;
	uint64_t x178 = 5320621061250429LLU;
	uint64_t x179 = 3223211LLU;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -914;

	t44 = ((x177<x178)==(x179==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x181 = UINT32_MAX;
	static volatile int16_t x182 = INT16_MIN;
	static uint8_t x183 = 127U;
	int32_t x184 = -268819973;
	volatile int32_t t45 = 175247;

	t45 = ((x181<x182)==(x183==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	int32_t x186 = -295076266;
	volatile int64_t x187 = INT64_MAX;
	uint16_t x188 = 297U;
	static int32_t t46 = -229819173;

	t46 = ((x185<x186)==(x187==x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 14U;
	int32_t x191 = INT32_MAX;
	static int16_t x192 = -1;

	t47 = ((x189<x190)==(x191==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile uint64_t x194 = 628538LLU;
	int64_t x195 = INT64_MIN;
	static int16_t x196 = INT16_MAX;

	t48 = ((x193<x194)==(x195==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 54U;
	uint8_t x200 = 23U;

	t49 = ((x197<x198)==(x199==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = 228711U;
	uint16_t x202 = 1877U;
	volatile int32_t x204 = -183245;
	static int32_t t50 = 2392;

	t50 = ((x201<x202)==(x203==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x206 = 859U;
	int32_t x207 = -99685;
	int8_t x208 = -1;
	volatile int32_t t51 = -142;

	t51 = ((x205<x206)==(x207==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -1088881782395229LL;
	int8_t x212 = -1;
	int32_t t52 = -738004;

	t52 = ((x209<x210)==(x211==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	static int32_t x214 = INT32_MAX;
	uint8_t x215 = 84U;
	volatile int16_t x216 = INT16_MIN;
	volatile int32_t t53 = 1183236;

	t53 = ((x213<x214)==(x215==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	int32_t x218 = -1;
	static int32_t x219 = INT32_MAX;
	uint64_t x220 = 8LLU;
	static volatile int32_t t54 = 2378;

	t54 = ((x217<x218)==(x219==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	uint8_t x223 = 48U;
	int64_t x224 = -1LL;
	static volatile int32_t t55 = 112176414;

	t55 = ((x221<x222)==(x223==x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	static volatile int32_t t56 = 416;

	t56 = ((x225<x226)==(x227==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t t57 = 575;

	t57 = ((x229<x230)==(x231==x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int8_t x235 = 8;
	static uint8_t x236 = 7U;

	t58 = ((x233<x234)==(x235==x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = 487729115490750734LL;
	uint16_t x238 = 1U;
	static uint8_t x239 = 111U;
	int32_t t59 = -2;

	t59 = ((x237<x238)==(x239==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = -1;
	int64_t x243 = 15651952918003115LL;
	volatile int32_t t60 = 8138925;

	t60 = ((x241<x242)==(x243==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x245 = INT32_MIN;
	volatile int16_t x247 = -1;
	int64_t x248 = INT64_MAX;

	t61 = ((x245<x246)==(x247==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x251 = INT64_MAX;
	static int64_t x252 = INT64_MAX;

	t62 = ((x249<x250)==(x251==x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = INT32_MIN;
	int64_t x254 = 258977478LL;
	volatile int32_t x255 = INT32_MAX;
	uint8_t x256 = 23U;

	t63 = ((x253<x254)==(x255==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x257 = INT32_MAX;
	int32_t x258 = INT32_MIN;
	volatile int32_t x259 = -126323;
	static int32_t t64 = 2305228;

	t64 = ((x257<x258)==(x259==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	int64_t x264 = -33797641LL;

	t65 = ((x261<x262)==(x263==x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x266 = 192U;
	volatile int16_t x267 = -1;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -1;

	t66 = ((x265<x266)==(x267==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 10508U;
	int8_t x270 = 26;
	int64_t x271 = INT64_MAX;
	uint8_t x272 = 29U;
	volatile int32_t t67 = 193;

	t67 = ((x269<x270)==(x271==x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	static int16_t x274 = INT16_MIN;
	uint16_t x276 = 233U;
	int32_t t68 = -463005;

	t68 = ((x273<x274)==(x275==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 3U;
	int16_t x278 = 734;
	int32_t x279 = INT32_MIN;
	static int32_t x280 = INT32_MIN;
	static volatile int32_t t69 = 5949437;

	t69 = ((x277<x278)==(x279==x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = -1;
	int32_t x282 = 14660512;
	int32_t x283 = INT32_MIN;
	static volatile int16_t x284 = INT16_MAX;
	int32_t t70 = -94926;

	t70 = ((x281<x282)==(x283==x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = 25998U;
	uint32_t x286 = 1U;
	int16_t x288 = 122;
	volatile int32_t t71 = -291;

	t71 = ((x285<x286)==(x287==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -1;
	static int8_t x291 = INT8_MAX;
	int32_t t72 = 7;

	t72 = ((x289<x290)==(x291==x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	volatile int8_t x295 = INT8_MAX;
	uint64_t x296 = 0LLU;
	int32_t t73 = 296437885;

	t73 = ((x293<x294)==(x295==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	int8_t x298 = INT8_MIN;
	int8_t x300 = 1;

	t74 = ((x297<x298)==(x299==x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = INT64_MAX;
	int8_t x302 = -1;
	int8_t x304 = -1;
	int32_t t75 = -271515870;

	t75 = ((x301<x302)==(x303==x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -4;
	static int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	int32_t t76 = -14115744;

	t76 = ((x305<x306)==(x307==x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint32_t x311 = UINT32_MAX;
	volatile int8_t x312 = INT8_MAX;
	int32_t t77 = 1;

	t77 = ((x309<x310)==(x311==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x314 = INT16_MAX;
	int8_t x316 = -43;
	int32_t t78 = -96145;

	t78 = ((x313<x314)==(x315==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x318 = -1;
	uint32_t x319 = 2362528U;
	static int32_t t79 = 708762;

	t79 = ((x317<x318)==(x319==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = -1;

	t80 = ((x321<x322)==(x323==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint16_t x326 = 870U;
	int16_t x327 = -16269;
	uint16_t x328 = 238U;
	static int32_t t81 = 27240300;

	t81 = ((x325<x326)==(x327==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x330 = -1;
	uint32_t x332 = UINT32_MAX;
	int32_t t82 = -2;

	t82 = ((x329<x330)==(x331==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = -1;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = 9412697;

	t83 = ((x333<x334)==(x335==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = -1;
	int32_t x338 = 38;
	volatile int16_t x339 = -1;
	uint64_t x340 = 6231917984LLU;
	volatile int32_t t84 = 10;

	t84 = ((x337<x338)==(x339==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = INT8_MIN;
	int64_t x342 = -489839524016LL;
	uint64_t x343 = UINT64_MAX;
	int64_t x344 = 22765592LL;
	volatile int32_t t85 = -90499;

	t85 = ((x341<x342)==(x343==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 588744664U;
	static int8_t x346 = -1;
	int8_t x347 = INT8_MIN;
	int32_t t86 = 1;

	t86 = ((x345<x346)==(x347==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = 56432597433LL;
	volatile int16_t x352 = INT16_MIN;

	t87 = ((x349<x350)==(x351==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = INT16_MAX;
	uint16_t x354 = 183U;
	static volatile int64_t x355 = -70868037LL;
	int32_t x356 = INT32_MIN;
	volatile int32_t t88 = 168;

	t88 = ((x353<x354)==(x355==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -165660167762536137LL;
	int32_t x358 = -1;
	int32_t x359 = -306717;
	uint64_t x360 = 119LLU;
	int32_t t89 = -778275722;

	t89 = ((x357<x358)==(x359==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = 3;
	int8_t x362 = INT8_MIN;
	static int16_t x363 = INT16_MIN;
	static int64_t x364 = INT64_MIN;
	volatile int32_t t90 = -883;

	t90 = ((x361<x362)==(x363==x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1U;
	static uint16_t x366 = 7U;
	int16_t x368 = 392;
	int32_t t91 = 617208526;

	t91 = ((x365<x366)==(x367==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -187627;
	int32_t x370 = INT32_MAX;
	int16_t x371 = -13;
	static volatile int16_t x372 = -1;
	volatile int32_t t92 = -1;

	t92 = ((x369<x370)==(x371==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static int64_t x375 = INT64_MIN;

	t93 = ((x373<x374)==(x375==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x377 = 52400U;
	uint64_t x378 = 35415820319301149LLU;
	volatile int32_t t94 = -62085;

	t94 = ((x377<x378)==(x379==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t95 = 208581399;

	t95 = ((x381<x382)==(x383==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MIN;
	volatile uint16_t x386 = 0U;
	uint16_t x387 = UINT16_MAX;
	int8_t x388 = INT8_MAX;
	volatile int32_t t96 = -14;

	t96 = ((x385<x386)==(x387==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int16_t x390 = -1;
	int64_t x391 = INT64_MAX;

	t97 = ((x389<x390)==(x391==x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	volatile int64_t x394 = INT64_MAX;
	int32_t t98 = 88119;

	t98 = ((x393<x394)==(x395==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 1964944U;
	int64_t x399 = -1832471675264093159LL;
	int8_t x400 = INT8_MIN;
	volatile int32_t t99 = 357879;

	t99 = ((x397<x398)==(x399==x400));

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

