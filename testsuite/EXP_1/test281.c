#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x2 = 0U;
int8_t x3 = 1;
static volatile uint8_t x9 = 11U;
int32_t t1 = 64178364;
static volatile uint64_t x13 = 657599003294LLU;
volatile int64_t x21 = -1LL;
int64_t x27 = 2150823188481LL;
volatile int32_t t5 = -40068717;
static uint8_t x29 = UINT8_MAX;
uint32_t x31 = UINT32_MAX;
uint32_t x34 = UINT32_MAX;
int8_t x54 = INT8_MIN;
volatile int32_t t8 = 81348484;
int32_t t9 = 1;
static int8_t x66 = INT8_MIN;
volatile uint32_t x67 = 3632967U;
int16_t x79 = INT16_MIN;
uint8_t x93 = 4U;
volatile int32_t t16 = 4;
int32_t x104 = -42231;
volatile int32_t t19 = 74040;
static uint8_t x111 = 22U;
uint16_t x119 = 111U;
int8_t x129 = -15;
volatile int32_t t24 = -3572931;
uint16_t x138 = UINT16_MAX;
int32_t t26 = -919628964;
int32_t x142 = INT32_MIN;
volatile int32_t t28 = -995798468;
uint32_t x150 = 64947259U;
int64_t x162 = INT64_MIN;
uint8_t x183 = 14U;
static volatile int64_t x186 = 428135531LL;
int64_t x188 = INT64_MIN;
volatile int32_t t36 = -3687242;
static volatile int32_t t37 = -1;
int16_t x193 = 4;
int8_t x208 = INT8_MIN;
int32_t x209 = -1;
int8_t x218 = -1;
uint16_t x219 = 182U;
uint32_t x220 = UINT32_MAX;
int16_t x225 = INT16_MIN;
uint32_t x226 = UINT32_MAX;
int16_t x231 = INT16_MIN;
int64_t x232 = -54LL;
volatile int64_t x238 = -1LL;
int32_t x239 = -1;
int64_t x240 = INT64_MAX;
uint16_t x242 = UINT16_MAX;
int64_t x243 = INT64_MIN;
static int8_t x252 = -3;
int8_t x254 = -1;
int16_t x257 = INT16_MIN;
volatile uint32_t x268 = 203517U;
volatile int32_t t53 = -1;
uint32_t x270 = 259190U;
static int16_t x298 = INT16_MIN;
static volatile int32_t t59 = 29475993;
uint32_t x302 = 23U;
static uint64_t x318 = 3912LLU;
int64_t x331 = INT64_MIN;
uint16_t x334 = 41U;
uint64_t x337 = 127969937LLU;
static uint8_t x338 = 6U;
volatile int64_t x339 = INT64_MIN;
int32_t t67 = -309;
int8_t x346 = -1;
static volatile int32_t t71 = 5074;
volatile uint8_t x359 = 2U;
int32_t t72 = -1;
int64_t x361 = INT64_MAX;
static int8_t x362 = INT8_MAX;
uint32_t x369 = 6U;
int32_t t75 = -12542;
int64_t x380 = 656207LL;
int32_t t77 = -362988;
uint64_t x390 = 19911198133392509LLU;
static uint16_t x397 = 6741U;
volatile int32_t x398 = 24920876;
volatile int32_t x399 = 1;
int64_t x401 = 6230529551390750LL;
volatile int64_t x404 = -13656673839LL;
static int32_t t82 = -5889458;
volatile int64_t x406 = -6496LL;
int8_t x409 = 1;
static int32_t x420 = -1;
int32_t x430 = INT32_MAX;
static volatile uint64_t x434 = 1905755LLU;
int32_t x435 = INT32_MIN;
volatile int8_t x437 = INT8_MAX;
volatile uint32_t x446 = 507620U;
int32_t x450 = -1;
static volatile int64_t x454 = -380LL;
uint8_t x465 = UINT8_MAX;
volatile int64_t x471 = INT64_MAX;
volatile int32_t t97 = -1405;
int32_t x482 = INT32_MIN;
int32_t x485 = -1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = -389;

	t0 = (((x1-x2)<x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x10 = 4U;
	static int16_t x11 = INT16_MAX;
	int64_t x12 = INT64_MIN;

	t1 = (((x9-x10)<x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x14 = UINT64_MAX;
	uint64_t x15 = UINT64_MAX;
	volatile int8_t x16 = -1;
	volatile int32_t t2 = 15449265;

	t2 = (((x13-x14)<x15)==x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 2391LLU;
	uint32_t x18 = 1U;
	int64_t x19 = 9445592139261460LL;
	int64_t x20 = 1583591487LL;
	volatile int32_t t3 = 2;

	t3 = (((x17-x18)<x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	int64_t x23 = 190887107LL;
	volatile int64_t x24 = -157944458479797LL;
	volatile int32_t t4 = 733115374;

	t4 = (((x21-x22)<x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	volatile uint32_t x28 = 867U;

	t5 = (((x25-x26)<x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = INT16_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t6 = 97468374;

	t6 = (((x29-x30)<x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x33 = UINT32_MAX;
	volatile uint32_t x35 = 1333U;
	int16_t x36 = 6;
	volatile int32_t t7 = -461602929;

	t7 = (((x33-x34)<x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x53 = -1;
	int32_t x55 = INT32_MIN;
	uint32_t x56 = 11024455U;

	t8 = (((x53-x54)<x55)==x56);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x57 = UINT16_MAX;
	static uint64_t x58 = UINT64_MAX;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MIN;

	t9 = (((x57-x58)<x59)==x60);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = 2LL;
	static volatile int16_t x62 = -25;
	volatile int32_t x63 = INT32_MIN;
	uint8_t x64 = 0U;
	int32_t t10 = 3937993;

	t10 = (((x61-x62)<x63)==x64);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 7790U;
	int16_t x68 = INT16_MIN;
	int32_t t11 = -138;

	t11 = (((x65-x66)<x67)==x68);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x73 = 779U;
	int32_t x74 = -1;
	int64_t x75 = INT64_MIN;
	int8_t x76 = -1;
	static volatile int32_t t12 = -46;

	t12 = (((x73-x74)<x75)==x76);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 25621897LL;
	int8_t x78 = 14;
	uint32_t x80 = UINT32_MAX;
	int32_t t13 = 0;

	t13 = (((x77-x78)<x79)==x80);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = INT16_MIN;
	volatile int32_t x82 = INT32_MIN;
	volatile int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t14 = 1;

	t14 = (((x81-x82)<x83)==x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = -1;
	static int64_t x86 = -1LL;
	uint16_t x87 = UINT16_MAX;
	static int8_t x88 = INT8_MAX;
	int32_t t15 = 737900;

	t15 = (((x85-x86)<x87)==x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x94 = UINT32_MAX;
	static volatile int16_t x95 = INT16_MIN;
	static int16_t x96 = INT16_MIN;

	t16 = (((x93-x94)<x95)==x96);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x97 = 780;
	int8_t x98 = 0;
	static int8_t x99 = INT8_MAX;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t17 = -780;

	t17 = (((x97-x98)<x99)==x100);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x101 = 19993U;
	volatile int32_t x102 = INT32_MAX;
	int16_t x103 = -481;
	int32_t t18 = 2432240;

	t18 = (((x101-x102)<x103)==x104);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x105 = INT16_MIN;
	static uint32_t x106 = 2486U;
	int32_t x107 = -1;
	int32_t x108 = 1;

	t19 = (((x105-x106)<x107)==x108);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x109 = 230U;
	uint8_t x110 = 1U;
	uint64_t x112 = 7903566597LLU;
	volatile int32_t t20 = -839846;

	t20 = (((x109-x110)<x111)==x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x113 = -2;
	int32_t x114 = INT32_MIN;
	int8_t x115 = 6;
	volatile int32_t x116 = INT32_MAX;
	static int32_t t21 = -607183198;

	t21 = (((x113-x114)<x115)==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x117 = INT8_MAX;
	uint64_t x118 = UINT64_MAX;
	int32_t x120 = -1;
	volatile int32_t t22 = -1;

	t22 = (((x117-x118)<x119)==x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = 1;
	int64_t x122 = -443499636721LL;
	int8_t x123 = -1;
	volatile int64_t x124 = INT64_MIN;
	volatile int32_t t23 = -22696;

	t23 = (((x121-x122)<x123)==x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x130 = 18U;
	int8_t x131 = INT8_MIN;
	static int64_t x132 = INT64_MIN;

	t24 = (((x129-x130)<x131)==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = INT16_MAX;
	uint8_t x134 = 0U;
	uint32_t x135 = 1587U;
	static uint8_t x136 = UINT8_MAX;
	int32_t t25 = 582070;

	t25 = (((x133-x134)<x135)==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = 14835;
	static int64_t x139 = 4636140927LL;
	int16_t x140 = INT16_MAX;

	t26 = (((x137-x138)<x139)==x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = INT8_MIN;
	volatile int32_t x143 = INT32_MAX;
	int16_t x144 = 5;
	int32_t t27 = -1323703;

	t27 = (((x141-x142)<x143)==x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int8_t x146 = -1;
	uint8_t x147 = UINT8_MAX;
	static int8_t x148 = -20;

	t28 = (((x145-x146)<x147)==x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x149 = -2194;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = INT64_MAX;
	volatile int32_t t29 = 29;

	t29 = (((x149-x150)<x151)==x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = INT8_MIN;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = -241;
	uint32_t x160 = 133906338U;
	volatile int32_t t30 = -7587;

	t30 = (((x157-x158)<x159)==x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = -1LL;
	volatile uint32_t x163 = UINT32_MAX;
	volatile uint64_t x164 = UINT64_MAX;
	int32_t t31 = 15145892;

	t31 = (((x161-x162)<x163)==x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = 0LL;
	uint8_t x166 = 0U;
	int16_t x167 = INT16_MIN;
	static int16_t x168 = -2;
	volatile int32_t t32 = 1683;

	t32 = (((x165-x166)<x167)==x168);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x169 = UINT16_MAX;
	uint8_t x170 = 1U;
	int8_t x171 = INT8_MAX;
	int64_t x172 = 168LL;
	volatile int32_t t33 = 1856;

	t33 = (((x169-x170)<x171)==x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x177 = -579571;
	int64_t x178 = INT64_MIN;
	int8_t x179 = -8;
	static int16_t x180 = INT16_MAX;
	int32_t t34 = -916594;

	t34 = (((x177-x178)<x179)==x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x181 = 7U;
	int64_t x182 = -1LL;
	int8_t x184 = -1;
	volatile int32_t t35 = -5;

	t35 = (((x181-x182)<x183)==x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x185 = 28U;
	uint8_t x187 = 3U;

	t36 = (((x185-x186)<x187)==x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x189 = 10806444463922304LLU;
	int32_t x190 = -62;
	int8_t x191 = INT8_MAX;
	int32_t x192 = INT32_MAX;

	t37 = (((x189-x190)<x191)==x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x194 = 111669033411LL;
	uint8_t x195 = UINT8_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t38 = -464874983;

	t38 = (((x193-x194)<x195)==x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	int64_t x199 = 271256811392030LL;
	int8_t x200 = INT8_MIN;
	int32_t t39 = 7;

	t39 = (((x197-x198)<x199)==x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x205 = INT64_MAX;
	volatile uint8_t x206 = 1U;
	static int16_t x207 = INT16_MIN;
	int32_t t40 = -4379;

	t40 = (((x205-x206)<x207)==x208);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x210 = INT16_MIN;
	uint16_t x211 = 84U;
	int16_t x212 = 4;
	static volatile int32_t t41 = 60;

	t41 = (((x209-x210)<x211)==x212);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x213 = 371633241811748LLU;
	volatile int32_t x214 = INT32_MIN;
	uint64_t x215 = 83LLU;
	int64_t x216 = -242853131710LL;
	int32_t t42 = 490813;

	t42 = (((x213-x214)<x215)==x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = INT16_MAX;
	int32_t t43 = 56470;

	t43 = (((x217-x218)<x219)==x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x227 = 164989LLU;
	uint8_t x228 = UINT8_MAX;
	int32_t t44 = -2;

	t44 = (((x225-x226)<x227)==x228);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x229 = 21U;
	uint8_t x230 = 4U;
	volatile int32_t t45 = -64017;

	t45 = (((x229-x230)<x231)==x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x237 = 3856;
	int32_t t46 = 501251;

	t46 = (((x237-x238)<x239)==x240);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x241 = 4U;
	int8_t x244 = -1;
	int32_t t47 = 7582;

	t47 = (((x241-x242)<x243)==x244);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = 2123146;
	int32_t x246 = -1;
	static int32_t x247 = INT32_MIN;
	uint32_t x248 = UINT32_MAX;
	static volatile int32_t t48 = 6628742;

	t48 = (((x245-x246)<x247)==x248);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x249 = 1LLU;
	uint64_t x250 = 631338LLU;
	int8_t x251 = INT8_MAX;
	static volatile int32_t t49 = -594790;

	t49 = (((x249-x250)<x251)==x252);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x253 = 81U;
	int8_t x255 = INT8_MIN;
	int16_t x256 = -502;
	static int32_t t50 = -2;

	t50 = (((x253-x254)<x255)==x256);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x258 = UINT64_MAX;
	uint16_t x259 = 62U;
	uint64_t x260 = 52091045LLU;
	volatile int32_t t51 = -12622374;

	t51 = (((x257-x258)<x259)==x260);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = -2;
	volatile int64_t x262 = INT64_MIN;
	int32_t x263 = INT32_MIN;
	volatile uint16_t x264 = 7572U;
	volatile int32_t t52 = -1964948;

	t52 = (((x261-x262)<x263)==x264);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = INT8_MAX;
	uint32_t x266 = 526402908U;
	int16_t x267 = INT16_MAX;

	t53 = (((x265-x266)<x267)==x268);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x269 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	uint64_t x272 = 499888197897LLU;
	static int32_t t54 = 63199;

	t54 = (((x269-x270)<x271)==x272);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x273 = -14;
	uint16_t x274 = 61U;
	volatile uint8_t x275 = 7U;
	volatile int32_t x276 = -1;
	volatile int32_t t55 = 1633;

	t55 = (((x273-x274)<x275)==x276);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x277 = 54804U;
	uint32_t x278 = 0U;
	int32_t x279 = INT32_MIN;
	volatile int8_t x280 = 1;
	volatile int32_t t56 = -15483;

	t56 = (((x277-x278)<x279)==x280);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x281 = -1;
	static int32_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int64_t x284 = INT64_MAX;
	volatile int32_t t57 = 14;

	t57 = (((x281-x282)<x283)==x284);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x293 = INT32_MIN;
	int8_t x294 = -1;
	volatile uint64_t x295 = 97053LLU;
	int8_t x296 = INT8_MIN;
	static int32_t t58 = -139;

	t58 = (((x293-x294)<x295)==x296);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x297 = -1;
	static volatile uint32_t x299 = 2U;
	int16_t x300 = 90;

	t59 = (((x297-x298)<x299)==x300);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x301 = -1LL;
	static uint32_t x303 = 11804046U;
	int32_t x304 = INT32_MIN;
	int32_t t60 = -338846;

	t60 = (((x301-x302)<x303)==x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	volatile int8_t x311 = 3;
	static int64_t x312 = -1LL;
	static volatile int32_t t61 = -3;

	t61 = (((x309-x310)<x311)==x312);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x317 = 5U;
	static uint32_t x319 = 843031468U;
	uint8_t x320 = 77U;
	int32_t t62 = 5;

	t62 = (((x317-x318)<x319)==x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x321 = -43;
	int8_t x322 = -2;
	static uint32_t x323 = 177544U;
	int32_t x324 = -529540611;
	int32_t t63 = -34739;

	t63 = (((x321-x322)<x323)==x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x325 = -3;
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	static uint16_t x328 = 506U;
	static int32_t t64 = 2212932;

	t64 = (((x325-x326)<x327)==x328);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x329 = INT8_MIN;
	int8_t x330 = 0;
	int16_t x332 = 0;
	int32_t t65 = 3;

	t65 = (((x329-x330)<x331)==x332);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x333 = -11;
	volatile uint32_t x335 = 1144822U;
	int8_t x336 = -1;
	int32_t t66 = -2050589;

	t66 = (((x333-x334)<x335)==x336);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x340 = 2889LLU;

	t67 = (((x337-x338)<x339)==x340);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x341 = -1;
	volatile uint32_t x342 = 153U;
	static volatile int8_t x343 = INT8_MIN;
	int16_t x344 = -1;
	volatile int32_t t68 = -77;

	t68 = (((x341-x342)<x343)==x344);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = 1;
	uint8_t x347 = 37U;
	int8_t x348 = INT8_MAX;
	volatile int32_t t69 = -964;

	t69 = (((x345-x346)<x347)==x348);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x349 = 98002U;
	uint16_t x350 = 7U;
	int32_t x351 = 1;
	uint32_t x352 = 52U;
	int32_t t70 = 391484553;

	t70 = (((x349-x350)<x351)==x352);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x353 = -1LL;
	volatile uint16_t x354 = 3897U;
	int16_t x355 = 2860;
	int64_t x356 = INT64_MIN;

	t71 = (((x353-x354)<x355)==x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x357 = 0U;
	int16_t x358 = -5159;
	uint64_t x360 = 753987LLU;

	t72 = (((x357-x358)<x359)==x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x363 = -1;
	static volatile int16_t x364 = 17;
	volatile int32_t t73 = -56813;

	t73 = (((x361-x362)<x363)==x364);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x365 = INT32_MIN;
	volatile int16_t x366 = INT16_MIN;
	uint8_t x367 = 18U;
	int32_t x368 = -2173;
	volatile int32_t t74 = -78916;

	t74 = (((x365-x366)<x367)==x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	int8_t x372 = INT8_MIN;

	t75 = (((x369-x370)<x371)==x372);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = INT64_MIN;
	static volatile int64_t x374 = -14173198626LL;
	int8_t x375 = -1;
	uint8_t x376 = 14U;
	int32_t t76 = -7;

	t76 = (((x373-x374)<x375)==x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x377 = -1;
	static int16_t x378 = INT16_MIN;
	static volatile int64_t x379 = -194624017562089328LL;

	t77 = (((x377-x378)<x379)==x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x381 = -1;
	uint64_t x382 = 13591264LLU;
	int16_t x383 = -1;
	int32_t x384 = 7;
	static volatile int32_t t78 = -528776775;

	t78 = (((x381-x382)<x383)==x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x389 = -14;
	uint8_t x391 = UINT8_MAX;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t79 = -298956833;

	t79 = (((x389-x390)<x391)==x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = INT16_MIN;
	uint64_t x394 = UINT64_MAX;
	static int32_t x395 = 0;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t80 = -3437;

	t80 = (((x393-x394)<x395)==x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x400 = -1;
	static int32_t t81 = 0;

	t81 = (((x397-x398)<x399)==x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x402 = INT8_MAX;
	int16_t x403 = 339;

	t82 = (((x401-x402)<x403)==x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x405 = INT32_MAX;
	int32_t x407 = -1;
	volatile uint16_t x408 = 584U;
	int32_t t83 = -42;

	t83 = (((x405-x406)<x407)==x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x410 = -1;
	int8_t x411 = -5;
	int16_t x412 = INT16_MIN;
	volatile int32_t t84 = -27873;

	t84 = (((x409-x410)<x411)==x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x417 = INT32_MAX;
	uint8_t x418 = 5U;
	volatile int32_t x419 = INT32_MIN;
	volatile int32_t t85 = -105114382;

	t85 = (((x417-x418)<x419)==x420);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x425 = 27216LL;
	volatile int8_t x426 = INT8_MAX;
	int64_t x427 = INT64_MIN;
	int16_t x428 = INT16_MIN;
	static volatile int32_t t86 = -111;

	t86 = (((x425-x426)<x427)==x428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x429 = 7U;
	static int32_t x431 = -18;
	volatile int8_t x432 = 0;
	int32_t t87 = -7623646;

	t87 = (((x429-x430)<x431)==x432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x433 = -141;
	int8_t x436 = INT8_MIN;
	static volatile int32_t t88 = -1153532;

	t88 = (((x433-x434)<x435)==x436);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x438 = INT16_MAX;
	int8_t x439 = INT8_MIN;
	uint32_t x440 = 83556U;
	volatile int32_t t89 = 348;

	t89 = (((x437-x438)<x439)==x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x445 = 83U;
	uint32_t x447 = 1U;
	int16_t x448 = -1;
	static volatile int32_t t90 = 3;

	t90 = (((x445-x446)<x447)==x448);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x449 = -30;
	uint16_t x451 = 12U;
	uint16_t x452 = 5883U;
	int32_t t91 = -1;

	t91 = (((x449-x450)<x451)==x452);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x453 = INT16_MAX;
	int16_t x455 = -1;
	volatile int16_t x456 = INT16_MIN;
	int32_t t92 = -825;

	t92 = (((x453-x454)<x455)==x456);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x461 = -1;
	uint8_t x462 = UINT8_MAX;
	int32_t x463 = -1;
	int64_t x464 = -1LL;
	volatile int32_t t93 = 403347842;

	t93 = (((x461-x462)<x463)==x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x466 = -1;
	int64_t x467 = INT64_MIN;
	static int32_t x468 = -1207678;
	volatile int32_t t94 = 770738;

	t94 = (((x465-x466)<x467)==x468);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x469 = -7084LL;
	uint32_t x470 = 432837U;
	volatile uint64_t x472 = UINT64_MAX;
	volatile int32_t t95 = -181020485;

	t95 = (((x469-x470)<x471)==x472);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x473 = 3303104352191213115LLU;
	static int8_t x474 = 13;
	volatile int8_t x475 = -30;
	uint32_t x476 = 1644465U;
	int32_t t96 = -162070;

	t96 = (((x473-x474)<x475)==x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x477 = -56;
	uint64_t x478 = 608767454LLU;
	int8_t x479 = -23;
	int64_t x480 = -1LL;

	t97 = (((x477-x478)<x479)==x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x481 = -1;
	int32_t x483 = INT32_MIN;
	static int64_t x484 = INT64_MAX;
	static volatile int32_t t98 = -2;

	t98 = (((x481-x482)<x483)==x484);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x486 = 0U;
	uint64_t x487 = UINT64_MAX;
	static int32_t x488 = -1;
	volatile int32_t t99 = -931852835;

	t99 = (((x485-x486)<x487)==x488);

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

