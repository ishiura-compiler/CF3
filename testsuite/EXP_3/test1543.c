#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -8;
volatile int32_t t0 = -243155742;
uint8_t x6 = 14U;
static int32_t t1 = 3;
uint64_t x10 = UINT64_MAX;
int32_t x15 = -1;
int16_t x24 = 50;
static int32_t x25 = -1;
uint8_t x27 = 2U;
uint32_t x31 = UINT32_MAX;
int32_t x33 = INT32_MAX;
int8_t x39 = INT8_MAX;
int64_t x43 = INT64_MIN;
uint32_t x49 = UINT32_MAX;
int8_t x53 = -1;
int16_t x66 = INT16_MIN;
int16_t x68 = 49;
static int8_t x73 = INT8_MAX;
volatile int8_t x77 = -1;
int8_t x84 = -31;
uint64_t x86 = UINT64_MAX;
uint64_t x87 = 2988859LLU;
uint16_t x90 = 89U;
static int16_t x94 = INT16_MAX;
static int32_t x95 = INT32_MAX;
volatile uint32_t x101 = 2175166U;
volatile int8_t x103 = -1;
int16_t x107 = -1;
int32_t x109 = INT32_MIN;
uint8_t x113 = 0U;
volatile uint16_t x123 = 6U;
int16_t x131 = INT16_MIN;
volatile int32_t t29 = 15818;
uint8_t x142 = UINT8_MAX;
int16_t x147 = INT16_MIN;
volatile int32_t t33 = -25;
int64_t x156 = -32456402403887LL;
int16_t x162 = INT16_MIN;
int32_t t38 = -54718151;
int16_t x173 = -1;
uint8_t x174 = 1U;
uint32_t x191 = UINT32_MAX;
int64_t x195 = INT64_MAX;
static volatile int32_t x196 = -1;
int32_t x198 = INT32_MAX;
int32_t t46 = 14531028;
volatile int32_t t48 = -2123;
int32_t x218 = INT32_MAX;
uint8_t x219 = UINT8_MAX;
volatile int32_t t52 = 846513456;
uint32_t x227 = 1213U;
volatile int32_t x233 = -11017890;
uint16_t x242 = 2U;
volatile int64_t x247 = -1LL;
int8_t x258 = INT8_MIN;
int64_t x259 = 68211362311755582LL;
uint8_t x270 = 3U;
int32_t t59 = -14;
int32_t t60 = 1;
volatile uint64_t x278 = 2955551398646LLU;
volatile int32_t t65 = -14;
volatile int8_t x306 = -1;
uint8_t x324 = 8U;
int32_t t69 = 23;
int8_t x328 = -1;
int32_t t71 = -5790;
uint16_t x335 = 60U;
int64_t x336 = -1LL;
uint8_t x338 = 0U;
int8_t x343 = INT8_MIN;
static int32_t t74 = -107510117;
volatile uint8_t x346 = 0U;
int16_t x349 = INT16_MAX;
int64_t x350 = INT64_MAX;
volatile int64_t x351 = -1LL;
uint64_t x352 = 715418LLU;
int64_t x362 = -1LL;
uint64_t x381 = 1821751888LLU;
static uint64_t x385 = UINT64_MAX;
uint64_t x387 = 503244652364LLU;
uint32_t x392 = 5U;
volatile int32_t x393 = INT32_MAX;
int64_t x395 = INT64_MIN;
volatile int8_t x399 = 7;
int32_t t88 = -15118707;
static volatile int16_t x407 = INT16_MIN;
int32_t x409 = INT32_MIN;
int64_t x416 = -1LL;
static volatile int8_t x427 = INT8_MAX;
static uint32_t x443 = UINT32_MAX;
volatile int16_t x444 = 383;
int32_t x445 = 15;
volatile uint64_t x446 = 674604847189129LLU;
int32_t t97 = -62953;
int32_t x449 = INT32_MIN;
static int64_t x452 = INT64_MIN;
static uint16_t x453 = UINT16_MAX;


void f0(void) {
	static uint32_t x1 = 2221921U;
	uint8_t x2 = 100U;
	volatile uint16_t x3 = UINT16_MAX;

	t0 = ((x1-x2)<(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	int8_t x7 = 2;
	int8_t x8 = -35;

	t1 = ((x5-x6)<(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = INT32_MAX;
	volatile int64_t x11 = -1LL;
	static uint32_t x12 = UINT32_MAX;
	int32_t t2 = 7670;

	t2 = ((x9-x10)<(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	volatile uint32_t x14 = 448107U;
	int8_t x16 = -1;
	int32_t t3 = 68;

	t3 = ((x13-x14)<(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 2;
	uint16_t x18 = UINT16_MAX;
	volatile uint32_t x19 = 51307U;
	uint32_t x20 = 1303U;
	volatile int32_t t4 = 233903;

	t4 = ((x17-x18)<(x19<=x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static uint16_t x22 = UINT16_MAX;
	int64_t x23 = INT64_MAX;
	int32_t t5 = 743494752;

	t5 = ((x21-x22)<(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = INT32_MAX;
	static int32_t x28 = -422048526;
	static int32_t t6 = 1030047;

	t6 = ((x25-x26)<(x27<=x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 188193LLU;
	volatile uint64_t x30 = UINT64_MAX;
	volatile uint16_t x32 = 2692U;
	int32_t t7 = 7566008;

	t7 = ((x29-x30)<(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint32_t x34 = 0U;
	uint64_t x35 = 125741668LLU;
	volatile uint16_t x36 = 1550U;
	int32_t t8 = -360535;

	t8 = ((x33-x34)<(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint64_t x38 = 6LLU;
	int32_t x40 = INT32_MAX;
	volatile int32_t t9 = 0;

	t9 = ((x37-x38)<(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -246;
	volatile uint32_t x42 = UINT32_MAX;
	int8_t x44 = 0;
	int32_t t10 = 161;

	t10 = ((x41-x42)<(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x46 = -2014;
	int16_t x47 = 50;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -4046;

	t11 = ((x45-x46)<(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 84550425LLU;
	int16_t x51 = INT16_MAX;
	int8_t x52 = INT8_MAX;
	static volatile int32_t t12 = -2794687;

	t12 = ((x49-x50)<(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	int64_t x55 = -1LL;
	static int8_t x56 = INT8_MIN;
	int32_t t13 = -1965;

	t13 = ((x53-x54)<(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MIN;
	uint64_t x58 = 144736990204LLU;
	volatile int8_t x59 = -1;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 765;

	t14 = ((x57-x58)<(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -26;
	int16_t x67 = -1;
	int32_t t15 = -29;

	t15 = ((x65-x66)<(x67<=x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = INT16_MIN;
	int16_t x70 = -1;
	uint16_t x71 = 481U;
	int64_t x72 = INT64_MAX;
	int32_t t16 = -103236;

	t16 = ((x69-x70)<(x71<=x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x74 = INT32_MAX;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	int32_t t17 = -3;

	t17 = ((x73-x74)<(x75<=x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x78 = INT16_MIN;
	int64_t x79 = INT64_MAX;
	uint16_t x80 = UINT16_MAX;
	int32_t t18 = 37541090;

	t18 = ((x77-x78)<(x79<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x81 = INT32_MAX;
	static uint32_t x82 = 11124986U;
	static int8_t x83 = INT8_MIN;
	int32_t t19 = -7517;

	t19 = ((x81-x82)<(x83<=x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 21U;
	int64_t x88 = -3023LL;
	volatile int32_t t20 = -80830500;

	t20 = ((x85-x86)<(x87<=x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x91 = 1;
	int32_t x92 = 828793;
	static volatile int32_t t21 = -515121075;

	t21 = ((x89-x90)<(x91<=x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint16_t x96 = 16370U;
	int32_t t22 = 62301676;

	t22 = ((x93-x94)<(x95<=x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x102 = 35952843LLU;
	int16_t x104 = -1;
	int32_t t23 = -416;

	t23 = ((x101-x102)<(x103<=x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 4754U;
	volatile int8_t x106 = INT8_MIN;
	int64_t x108 = INT64_MIN;
	int32_t t24 = 8229;

	t24 = ((x105-x106)<(x107<=x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x110 = UINT64_MAX;
	uint8_t x111 = UINT8_MAX;
	int16_t x112 = -1;
	int32_t t25 = 84160099;

	t25 = ((x109-x110)<(x111<=x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x114 = -1;
	static uint64_t x115 = 80984192742798LLU;
	int16_t x116 = -3;
	volatile int32_t t26 = 269;

	t26 = ((x113-x114)<(x115<=x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = -1;
	static int16_t x122 = INT16_MAX;
	int32_t x124 = INT32_MIN;
	int32_t t27 = -1604012;

	t27 = ((x121-x122)<(x123<=x124));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = 131U;
	int64_t x126 = -1LL;
	int64_t x127 = INT64_MIN;
	int64_t x128 = -1LL;
	volatile int32_t t28 = -154631982;

	t28 = ((x125-x126)<(x127<=x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	static volatile int16_t x130 = INT16_MAX;
	int32_t x132 = INT32_MIN;

	t29 = ((x129-x130)<(x131<=x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x133 = -1;
	int16_t x134 = INT16_MIN;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = -1;
	volatile int32_t t30 = -9;

	t30 = ((x133-x134)<(x135<=x136));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = UINT8_MAX;
	static uint32_t x138 = 3U;
	static int32_t x139 = INT32_MAX;
	static volatile int32_t x140 = 205;
	volatile int32_t t31 = -367;

	t31 = ((x137-x138)<(x139<=x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x141 = 2U;
	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;
	volatile int32_t t32 = 26810381;

	t32 = ((x141-x142)<(x143<=x144));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x145 = 10341U;
	uint32_t x146 = 86187412U;
	volatile uint32_t x148 = UINT32_MAX;

	t33 = ((x145-x146)<(x147<=x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	uint16_t x150 = 8034U;
	int8_t x151 = INT8_MIN;
	static int16_t x152 = INT16_MIN;
	static volatile int32_t t34 = -12174;

	t34 = ((x149-x150)<(x151<=x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x153 = INT32_MIN;
	static volatile int64_t x154 = 7559007021917797LL;
	uint64_t x155 = 443026728LLU;
	volatile int32_t t35 = -607;

	t35 = ((x153-x154)<(x155<=x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MAX;
	int32_t x158 = -1;
	int32_t x159 = 27;
	static uint16_t x160 = 4610U;
	int32_t t36 = 5389;

	t36 = ((x157-x158)<(x159<=x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x161 = 47877471822384LLU;
	int8_t x163 = INT8_MIN;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t37 = 50;

	t37 = ((x161-x162)<(x163<=x164));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x165 = -2339;
	int16_t x166 = INT16_MIN;
	int32_t x167 = INT32_MAX;
	int16_t x168 = -1;

	t38 = ((x165-x166)<(x167<=x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = -1LL;
	static volatile int16_t x170 = -1;
	int32_t x171 = -2938150;
	volatile int16_t x172 = 12;
	int32_t t39 = -56;

	t39 = ((x169-x170)<(x171<=x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x175 = -1;
	int32_t x176 = 419115;
	volatile int32_t t40 = 29760;

	t40 = ((x173-x174)<(x175<=x176));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x177 = 2135;
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MAX;
	static int16_t x180 = 1343;
	int32_t t41 = -1;

	t41 = ((x177-x178)<(x179<=x180));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = 1582715;
	uint8_t x182 = 13U;
	int32_t x183 = INT32_MAX;
	int8_t x184 = INT8_MAX;
	volatile int32_t t42 = -77387;

	t42 = ((x181-x182)<(x183<=x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MAX;
	static int8_t x186 = INT8_MIN;
	int8_t x187 = INT8_MAX;
	static int8_t x188 = INT8_MIN;
	volatile int32_t t43 = -290101;

	t43 = ((x185-x186)<(x187<=x188));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = -1;
	int16_t x192 = INT16_MAX;
	volatile int32_t t44 = -601;

	t44 = ((x189-x190)<(x191<=x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -22959;
	int32_t t45 = -5;

	t45 = ((x193-x194)<(x195<=x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = 0;
	volatile uint8_t x199 = 1U;
	uint8_t x200 = UINT8_MAX;

	t46 = ((x197-x198)<(x199<=x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = UINT32_MAX;
	uint32_t x202 = 403976288U;
	uint8_t x203 = UINT8_MAX;
	int32_t x204 = -15;
	static volatile int32_t t47 = 2648257;

	t47 = ((x201-x202)<(x203<=x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x205 = 1U;
	int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;

	t48 = ((x205-x206)<(x207<=x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x209 = 152429887LLU;
	int16_t x210 = -55;
	uint64_t x211 = 841357783695138LLU;
	uint16_t x212 = UINT16_MAX;
	volatile int32_t t49 = 188;

	t49 = ((x209-x210)<(x211<=x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -9;
	int64_t x214 = -1LL;
	uint8_t x215 = 7U;
	volatile int16_t x216 = INT16_MAX;
	volatile int32_t t50 = 1;

	t50 = ((x213-x214)<(x215<=x216));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = UINT64_MAX;
	volatile int16_t x220 = -1;
	volatile int32_t t51 = -4110832;

	t51 = ((x217-x218)<(x219<=x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = UINT8_MAX;
	static int8_t x222 = -3;
	uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 238U;

	t52 = ((x221-x222)<(x223<=x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 1LLU;
	int32_t x226 = INT32_MAX;
	volatile uint32_t x228 = 521344U;
	int32_t t53 = 26;

	t53 = ((x225-x226)<(x227<=x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x234 = -50;
	int16_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	volatile int32_t t54 = -21924;

	t54 = ((x233-x234)<(x235<=x236));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = UINT8_MAX;
	int16_t x243 = INT16_MIN;
	uint32_t x244 = 2121U;
	volatile int32_t t55 = 1;

	t55 = ((x241-x242)<(x243<=x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = -246632333;
	volatile int64_t x246 = INT64_MIN;
	int32_t x248 = -1;
	volatile int32_t t56 = 4377;

	t56 = ((x245-x246)<(x247<=x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x257 = INT32_MIN;
	int16_t x260 = -59;
	int32_t t57 = 802;

	t57 = ((x257-x258)<(x259<=x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x261 = INT8_MIN;
	volatile int8_t x262 = INT8_MIN;
	uint16_t x263 = 5743U;
	int32_t x264 = INT32_MIN;
	int32_t t58 = 92332;

	t58 = ((x261-x262)<(x263<=x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x269 = 43U;
	int32_t x271 = INT32_MIN;
	int16_t x272 = -1;

	t59 = ((x269-x270)<(x271<=x272));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x273 = 5U;
	uint16_t x274 = 17U;
	volatile int16_t x275 = INT16_MAX;
	volatile uint32_t x276 = 201U;

	t60 = ((x273-x274)<(x275<=x276));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x277 = 1386362LL;
	uint16_t x279 = 9U;
	static volatile int8_t x280 = INT8_MIN;
	int32_t t61 = -530051;

	t61 = ((x277-x278)<(x279<=x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	int64_t x282 = INT64_MIN;
	static int64_t x283 = -1LL;
	int32_t x284 = INT32_MIN;
	static volatile int32_t t62 = -27876937;

	t62 = ((x281-x282)<(x283<=x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = -313618250;
	int8_t x286 = -1;
	int8_t x287 = INT8_MIN;
	int32_t x288 = -13969840;
	static int32_t t63 = -5634;

	t63 = ((x285-x286)<(x287<=x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = 645039LL;
	int64_t x290 = 2013267710LL;
	int16_t x291 = -1;
	volatile int8_t x292 = INT8_MAX;
	volatile int32_t t64 = -808142;

	t64 = ((x289-x290)<(x291<=x292));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x293 = -1;
	int64_t x294 = INT64_MAX;
	uint32_t x295 = UINT32_MAX;
	int64_t x296 = -19LL;

	t65 = ((x293-x294)<(x295<=x296));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = -4;
	volatile int32_t x307 = 116;
	static int8_t x308 = INT8_MIN;
	volatile int32_t t66 = -162209;

	t66 = ((x305-x306)<(x307<=x308));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = 11U;
	int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MIN;
	int8_t x316 = INT8_MIN;
	volatile int32_t t67 = -1;

	t67 = ((x313-x314)<(x315<=x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x317 = 60913033LL;
	volatile uint8_t x318 = 7U;
	int32_t x319 = -53;
	static int32_t x320 = INT32_MAX;
	volatile int32_t t68 = -123453607;

	t68 = ((x317-x318)<(x319<=x320));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 471LLU;
	int32_t x323 = -1;

	t69 = ((x321-x322)<(x323<=x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x325 = 0LL;
	int8_t x326 = INT8_MAX;
	volatile int16_t x327 = INT16_MIN;
	int32_t t70 = -170386905;

	t70 = ((x325-x326)<(x327<=x328));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x329 = 150367862U;
	static volatile int32_t x330 = -1;
	uint16_t x331 = 185U;
	int16_t x332 = 1;

	t71 = ((x329-x330)<(x331<=x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	volatile int32_t t72 = 1321531;

	t72 = ((x333-x334)<(x335<=x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x337 = -1;
	int8_t x339 = 1;
	volatile int64_t x340 = INT64_MIN;
	volatile int32_t t73 = 0;

	t73 = ((x337-x338)<(x339<=x340));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MAX;
	volatile int16_t x344 = INT16_MIN;

	t74 = ((x341-x342)<(x343<=x344));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 5583U;
	volatile uint8_t x347 = UINT8_MAX;
	uint16_t x348 = UINT16_MAX;
	int32_t t75 = -6224;

	t75 = ((x345-x346)<(x347<=x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t t76 = 1;

	t76 = ((x349-x350)<(x351<=x352));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x357 = -1;
	int8_t x358 = -1;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = 1446LLU;
	volatile int32_t t77 = -1;

	t77 = ((x357-x358)<(x359<=x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	uint16_t x363 = UINT16_MAX;
	volatile uint64_t x364 = 9833LLU;
	int32_t t78 = -388511;

	t78 = ((x361-x362)<(x363<=x364));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = -116534607LL;
	static uint8_t x366 = 3U;
	static uint64_t x367 = 13293659LLU;
	int32_t x368 = INT32_MIN;
	static volatile int32_t t79 = 3452641;

	t79 = ((x365-x366)<(x367<=x368));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x369 = 72U;
	int32_t x370 = INT32_MAX;
	uint8_t x371 = 1U;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t80 = -97;

	t80 = ((x369-x370)<(x371<=x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = 6U;
	int64_t x374 = INT64_MAX;
	static int8_t x375 = -1;
	volatile int16_t x376 = -1;
	volatile int32_t t81 = 105;

	t81 = ((x373-x374)<(x375<=x376));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = 33874864897938334LL;
	int32_t x378 = -159273;
	volatile uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MIN;
	static int32_t t82 = 21;

	t82 = ((x377-x378)<(x379<=x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x382 = INT16_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = INT64_MIN;
	static volatile int32_t t83 = -1;

	t83 = ((x381-x382)<(x383<=x384));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x386 = INT8_MIN;
	int64_t x388 = -427LL;
	int32_t t84 = 29;

	t84 = ((x385-x386)<(x387<=x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x389 = -1;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = 0;
	int32_t t85 = 590;

	t85 = ((x389-x390)<(x391<=x392));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x394 = 0;
	static int32_t x396 = INT32_MIN;
	int32_t t86 = 126;

	t86 = ((x393-x394)<(x395<=x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x397 = INT16_MIN;
	static int16_t x398 = INT16_MIN;
	int64_t x400 = INT64_MIN;
	int32_t t87 = 2537;

	t87 = ((x397-x398)<(x399<=x400));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MAX;
	uint64_t x402 = 102274LLU;
	int64_t x403 = INT64_MAX;
	int32_t x404 = INT32_MAX;

	t88 = ((x401-x402)<(x403<=x404));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x405 = 15U;
	int8_t x406 = 7;
	int16_t x408 = -392;
	static volatile int32_t t89 = 117;

	t89 = ((x405-x406)<(x407<=x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x410 = 6817U;
	int8_t x411 = 2;
	int32_t x412 = INT32_MIN;
	static int32_t t90 = 62709;

	t90 = ((x409-x410)<(x411<=x412));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x413 = UINT16_MAX;
	int32_t x414 = -616772;
	uint8_t x415 = 0U;
	static volatile int32_t t91 = -200041946;

	t91 = ((x413-x414)<(x415<=x416));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x417 = INT32_MAX;
	static int64_t x418 = -1LL;
	int64_t x419 = INT64_MIN;
	uint8_t x420 = UINT8_MAX;
	int32_t t92 = 4840944;

	t92 = ((x417-x418)<(x419<=x420));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = 5732U;
	uint64_t x426 = UINT64_MAX;
	int16_t x428 = -806;
	int32_t t93 = -25;

	t93 = ((x425-x426)<(x427<=x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x433 = UINT32_MAX;
	uint64_t x434 = 27880609507741LLU;
	int16_t x435 = -10022;
	static int8_t x436 = INT8_MIN;
	static volatile int32_t t94 = 828727;

	t94 = ((x433-x434)<(x435<=x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x437 = INT64_MAX;
	static uint32_t x438 = 131U;
	uint16_t x439 = 7993U;
	static int32_t x440 = -10;
	static volatile int32_t t95 = 12;

	t95 = ((x437-x438)<(x439<=x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x441 = INT32_MAX;
	int64_t x442 = -37513732LL;
	volatile int32_t t96 = -1;

	t96 = ((x441-x442)<(x443<=x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x447 = INT64_MIN;
	uint8_t x448 = UINT8_MAX;

	t97 = ((x445-x446)<(x447<=x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x450 = -409;
	static volatile int64_t x451 = INT64_MAX;
	volatile int32_t t98 = 25101;

	t98 = ((x449-x450)<(x451<=x452));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x454 = INT64_MAX;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MIN;
	int32_t t99 = 151658013;

	t99 = ((x453-x454)<(x455<=x456));

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

