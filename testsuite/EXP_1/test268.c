#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x22 = 89387198683789035LLU;
volatile int32_t x24 = 43818;
uint64_t x26 = 124662358404342LLU;
static uint32_t x28 = 8U;
static int8_t x30 = -1;
int16_t x31 = -4;
int32_t t6 = 3561919;
volatile int32_t x34 = 211852;
static int32_t t7 = 1357;
int32_t x38 = -1;
static int64_t x44 = INT64_MAX;
static int32_t x46 = -1049631488;
static volatile int32_t t10 = -11146;
static int8_t x51 = INT8_MAX;
int64_t x52 = -1LL;
int64_t x64 = INT64_MIN;
volatile uint8_t x73 = 26U;
int16_t x78 = INT16_MIN;
int32_t x79 = 3290550;
volatile int32_t t17 = -5;
volatile int64_t x81 = -374630762LL;
uint16_t x89 = 43U;
int64_t x90 = 123268643LL;
volatile int32_t x92 = 14143689;
static int32_t t19 = -10;
uint16_t x93 = 511U;
int8_t x95 = INT8_MIN;
static volatile int32_t t20 = 3;
static int64_t x99 = INT64_MAX;
int64_t x116 = INT64_MIN;
volatile int32_t t26 = 105;
static int8_t x131 = INT8_MIN;
static uint64_t x135 = UINT64_MAX;
volatile int32_t t30 = 103989532;
uint16_t x142 = 3U;
static volatile int32_t x153 = INT32_MAX;
static uint32_t x154 = 29621U;
int8_t x156 = INT8_MIN;
volatile int32_t t33 = -899;
static uint8_t x157 = 1U;
static int16_t x160 = 2222;
static int32_t t34 = -12555;
int32_t t35 = -46553;
int8_t x165 = 41;
int8_t x173 = 3;
uint64_t x176 = 3333186LLU;
volatile uint16_t x186 = UINT16_MAX;
int8_t x191 = -29;
int32_t t40 = 13187532;
int32_t x194 = -33187;
int64_t x200 = INT64_MAX;
volatile int32_t t42 = -12621086;
static volatile int8_t x201 = INT8_MIN;
uint32_t x203 = 48738915U;
int32_t t43 = -1;
static int64_t x207 = -1LL;
volatile int32_t t45 = 39270302;
volatile int64_t x217 = -11409407386760LL;
int8_t x219 = INT8_MIN;
uint64_t x220 = 854734LLU;
uint16_t x221 = 29487U;
static volatile int32_t t47 = 29;
uint32_t x237 = 143227476U;
static uint64_t x239 = UINT64_MAX;
uint16_t x243 = 49U;
int8_t x253 = INT8_MAX;
uint8_t x259 = 4U;
volatile int32_t t54 = -2;
volatile int16_t x264 = 350;
volatile int32_t t58 = -2;
int64_t x277 = -1LL;
int8_t x280 = -1;
int64_t x286 = -1LL;
static uint64_t x289 = 1LLU;
uint8_t x301 = 18U;
int8_t x302 = INT8_MAX;
int32_t x309 = INT32_MIN;
int16_t x324 = 31;
int8_t x326 = 0;
uint16_t x328 = UINT16_MAX;
volatile int32_t t71 = -5;
int64_t x329 = -363723982886LL;
int64_t x331 = INT64_MAX;
volatile int16_t x333 = -1;
static volatile int16_t x339 = 45;
volatile int32_t t74 = -8117091;
int8_t x341 = INT8_MAX;
volatile int32_t t76 = -13;
static int16_t x355 = 73;
uint16_t x364 = UINT16_MAX;
int32_t t81 = -411930;
int64_t x378 = 223LL;
int8_t x380 = INT8_MAX;
static int32_t t82 = 29;
int64_t x381 = INT64_MIN;
volatile int32_t t83 = -5;
static volatile int16_t x385 = INT16_MAX;
uint8_t x386 = 86U;
volatile int32_t t86 = -2735874;
static int32_t x406 = 1001670372;
uint32_t x411 = UINT32_MAX;
int16_t x412 = INT16_MIN;
int16_t x421 = 1;
uint8_t x429 = UINT8_MAX;
volatile int8_t x432 = 32;
uint32_t x442 = 320U;
uint32_t x443 = UINT32_MAX;
static int32_t t96 = 10;
int32_t x445 = 24974;
volatile int32_t t97 = -53544617;


void f0(void) {
	uint8_t x1 = 60U;
	int8_t x2 = INT8_MIN;
	int16_t x3 = -3;
	uint8_t x4 = 0U;
	int32_t t0 = 18629564;

	t0 = (((x1-x2)==x3)==x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 25685530967856LLU;
	int16_t x6 = INT16_MIN;
	uint8_t x7 = 0U;
	uint8_t x8 = 55U;
	volatile int32_t t1 = 1;

	t1 = (((x5-x6)==x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MIN;
	int8_t x11 = -1;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -6491;

	t2 = (((x9-x10)==x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x17 = 1U;
	int64_t x18 = -1LL;
	static int16_t x19 = 0;
	volatile int16_t x20 = INT16_MIN;
	int32_t t3 = 864;

	t3 = (((x17-x18)==x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x21 = UINT16_MAX;
	int8_t x23 = 0;
	volatile int32_t t4 = -16058;

	t4 = (((x21-x22)==x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -1;
	int64_t x27 = INT64_MIN;
	static volatile int32_t t5 = 27255;

	t5 = (((x25-x26)==x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int32_t x32 = INT32_MIN;

	t6 = (((x29-x30)==x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int32_t x35 = -452721199;
	int16_t x36 = -1;

	t7 = (((x33-x34)==x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	uint16_t x39 = 40U;
	uint32_t x40 = 3362910U;
	int32_t t8 = 782739858;

	t8 = (((x37-x38)==x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile int16_t x42 = INT16_MIN;
	int64_t x43 = -1LL;
	int32_t t9 = -3200214;

	t9 = (((x41-x42)==x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MIN;
	int8_t x47 = 47;
	static int64_t x48 = INT64_MIN;

	t10 = (((x45-x46)==x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 23U;
	int32_t x50 = 5019654;
	int32_t t11 = -212;

	t11 = (((x49-x50)==x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 85U;
	volatile int64_t x54 = INT64_MAX;
	uint16_t x55 = 5597U;
	uint8_t x56 = 12U;
	volatile int32_t t12 = 5351534;

	t12 = (((x53-x54)==x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = -1;
	static uint8_t x62 = 24U;
	int16_t x63 = 4092;
	volatile int32_t t13 = 181;

	t13 = (((x61-x62)==x63)==x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int16_t x66 = INT16_MIN;
	uint16_t x67 = UINT16_MAX;
	static uint16_t x68 = UINT16_MAX;
	volatile int32_t t14 = 0;

	t14 = (((x65-x66)==x67)==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = -1;
	volatile uint32_t x70 = 350634711U;
	int32_t x71 = -1;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t15 = 167949835;

	t15 = (((x69-x70)==x71)==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = INT8_MIN;
	volatile int8_t x75 = -1;
	int32_t x76 = 2048;
	volatile int32_t t16 = 20296705;

	t16 = (((x73-x74)==x75)==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x77 = 5105751;
	int16_t x80 = INT16_MIN;

	t17 = (((x77-x78)==x79)==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x82 = INT32_MIN;
	uint8_t x83 = 34U;
	volatile int32_t x84 = -1;
	int32_t t18 = -111613705;

	t18 = (((x81-x82)==x83)==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x91 = UINT8_MAX;

	t19 = (((x89-x90)==x91)==x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x94 = 23;
	volatile int64_t x96 = INT64_MAX;

	t20 = (((x93-x94)==x95)==x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x97 = INT16_MIN;
	int64_t x98 = 33913026605LL;
	int16_t x100 = INT16_MIN;
	int32_t t21 = 0;

	t21 = (((x97-x98)==x99)==x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = 518228938U;
	static volatile int8_t x104 = -1;
	int32_t t22 = 326;

	t22 = (((x101-x102)==x103)==x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x105 = -10;
	volatile uint8_t x106 = 2U;
	uint32_t x107 = 3241U;
	int16_t x108 = -1219;
	volatile int32_t t23 = -152714;

	t23 = (((x105-x106)==x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x109 = 1;
	uint8_t x110 = UINT8_MAX;
	uint64_t x111 = 93932258428806LLU;
	int32_t x112 = -2059115;
	int32_t t24 = -603;

	t24 = (((x109-x110)==x111)==x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x114 = 7U;
	volatile int16_t x115 = INT16_MAX;
	volatile int32_t t25 = 69635;

	t25 = (((x113-x114)==x115)==x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x117 = 1887528LL;
	static uint16_t x118 = 6793U;
	int64_t x119 = -1LL;
	int64_t x120 = INT64_MIN;

	t26 = (((x117-x118)==x119)==x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 100;
	volatile int16_t x126 = -1;
	int32_t x127 = INT32_MIN;
	int16_t x128 = -1;
	volatile int32_t t27 = 70336;

	t27 = (((x125-x126)==x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x129 = INT64_MIN;
	static int64_t x130 = INT64_MIN;
	int16_t x132 = 94;
	static int32_t t28 = 28104;

	t28 = (((x129-x130)==x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = -1;
	int16_t x134 = INT16_MAX;
	uint8_t x136 = UINT8_MAX;
	volatile int32_t t29 = 2587803;

	t29 = (((x133-x134)==x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	int64_t x138 = -62093925LL;
	int8_t x139 = -1;
	volatile int16_t x140 = INT16_MAX;

	t30 = (((x137-x138)==x139)==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x141 = 0U;
	static uint8_t x143 = UINT8_MAX;
	static int32_t x144 = INT32_MAX;
	static int32_t t31 = 295;

	t31 = (((x141-x142)==x143)==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = -1;
	uint64_t x146 = 4172LLU;
	int64_t x147 = 38239529LL;
	int16_t x148 = -1;
	volatile int32_t t32 = 1366;

	t32 = (((x145-x146)==x147)==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x155 = -1LL;

	t33 = (((x153-x154)==x155)==x156);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x158 = -710;
	volatile int16_t x159 = -5;

	t34 = (((x157-x158)==x159)==x160);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MIN;
	static uint64_t x162 = 1563919LLU;
	int32_t x163 = 22;
	static int32_t x164 = 252475;

	t35 = (((x161-x162)==x163)==x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	static volatile int32_t x168 = 802;
	volatile int32_t t36 = 0;

	t36 = (((x165-x166)==x167)==x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = -1;
	volatile int64_t x175 = INT64_MIN;
	int32_t t37 = -485233;

	t37 = (((x173-x174)==x175)==x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x177 = UINT16_MAX;
	int16_t x178 = INT16_MAX;
	uint32_t x179 = 59985237U;
	static uint64_t x180 = UINT64_MAX;
	volatile int32_t t38 = -50607779;

	t38 = (((x177-x178)==x179)==x180);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = 26;
	volatile int64_t x187 = 607708LL;
	static int32_t x188 = INT32_MIN;
	int32_t t39 = -25994916;

	t39 = (((x185-x186)==x187)==x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x189 = INT16_MAX;
	int64_t x190 = -1776LL;
	int16_t x192 = INT16_MAX;

	t40 = (((x189-x190)==x191)==x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x193 = INT32_MIN;
	uint32_t x195 = UINT32_MAX;
	static uint16_t x196 = UINT16_MAX;
	volatile int32_t t41 = -603945;

	t41 = (((x193-x194)==x195)==x196);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x197 = INT32_MIN;
	int32_t x198 = -1;
	int16_t x199 = -1;

	t42 = (((x197-x198)==x199)==x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x202 = 10U;
	uint8_t x204 = UINT8_MAX;

	t43 = (((x201-x202)==x203)==x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -5;
	int32_t x206 = INT32_MIN;
	uint32_t x208 = 9366455U;
	int32_t t44 = 451;

	t44 = (((x205-x206)==x207)==x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x213 = 52U;
	int64_t x214 = -587LL;
	volatile int8_t x215 = INT8_MIN;
	int64_t x216 = INT64_MIN;

	t45 = (((x213-x214)==x215)==x216);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x218 = -1;
	static volatile int32_t t46 = 869013;

	t46 = (((x217-x218)==x219)==x220);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x222 = INT8_MIN;
	static int64_t x223 = -27802897LL;
	uint16_t x224 = 3814U;

	t47 = (((x221-x222)==x223)==x224);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = 93988;
	int64_t x226 = INT64_MAX;
	int64_t x227 = -1LL;
	static int16_t x228 = -210;
	int32_t t48 = -24496;

	t48 = (((x225-x226)==x227)==x228);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x233 = 45U;
	static int64_t x234 = -2976054449332LL;
	volatile uint32_t x235 = 106683U;
	static uint16_t x236 = 840U;
	static volatile int32_t t49 = 26;

	t49 = (((x233-x234)==x235)==x236);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x238 = 394912;
	volatile uint16_t x240 = 12632U;
	int32_t t50 = -7;

	t50 = (((x237-x238)==x239)==x240);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x241 = 0LL;
	static uint16_t x242 = 6910U;
	int8_t x244 = INT8_MIN;
	int32_t t51 = -3563;

	t51 = (((x241-x242)==x243)==x244);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x245 = INT16_MIN;
	uint64_t x246 = 10044842268617171LLU;
	static uint32_t x247 = UINT32_MAX;
	int8_t x248 = -2;
	static int32_t t52 = -15070;

	t52 = (((x245-x246)==x247)==x248);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x254 = 2U;
	volatile int32_t x255 = 1;
	volatile int8_t x256 = -1;
	static int32_t t53 = 1;

	t53 = (((x253-x254)==x255)==x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x257 = 303U;
	uint8_t x258 = UINT8_MAX;
	int32_t x260 = INT32_MIN;

	t54 = (((x257-x258)==x259)==x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x261 = UINT32_MAX;
	int32_t x262 = -1;
	volatile int64_t x263 = 320825068888391LL;
	int32_t t55 = -1736;

	t55 = (((x261-x262)==x263)==x264);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x265 = 31827522517800LLU;
	static int32_t x266 = INT32_MAX;
	int64_t x267 = 192LL;
	int64_t x268 = INT64_MIN;
	int32_t t56 = 3569;

	t56 = (((x265-x266)==x267)==x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = -1LL;
	static int8_t x271 = -23;
	static int64_t x272 = 670969828LL;
	int32_t t57 = -175;

	t57 = (((x269-x270)==x271)==x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x273 = INT8_MAX;
	static int16_t x274 = INT16_MIN;
	int8_t x275 = -1;
	static int8_t x276 = INT8_MIN;

	t58 = (((x273-x274)==x275)==x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x278 = INT16_MIN;
	int64_t x279 = INT64_MIN;
	volatile int32_t t59 = 5346;

	t59 = (((x277-x278)==x279)==x280);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x281 = 401180649410136LL;
	int16_t x282 = INT16_MAX;
	int16_t x283 = 25;
	int16_t x284 = INT16_MIN;
	static int32_t t60 = -8992;

	t60 = (((x281-x282)==x283)==x284);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x285 = -1LL;
	int8_t x287 = 15;
	int8_t x288 = INT8_MAX;
	static int32_t t61 = -5;

	t61 = (((x285-x286)==x287)==x288);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x290 = 62;
	int8_t x291 = -1;
	int64_t x292 = -1LL;
	static volatile int32_t t62 = -25;

	t62 = (((x289-x290)==x291)==x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x293 = 3U;
	volatile int64_t x294 = INT64_MAX;
	volatile int16_t x295 = -261;
	static uint64_t x296 = 22537540779049220LLU;
	static int32_t t63 = -261053874;

	t63 = (((x293-x294)==x295)==x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = INT16_MIN;
	int32_t x299 = -269401;
	uint32_t x300 = UINT32_MAX;
	static int32_t t64 = -1;

	t64 = (((x297-x298)==x299)==x300);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x303 = INT64_MAX;
	static int64_t x304 = INT64_MIN;
	static volatile int32_t t65 = 82481873;

	t65 = (((x301-x302)==x303)==x304);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = -1LL;
	int64_t x306 = INT64_MIN;
	int8_t x307 = INT8_MIN;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t66 = 709916;

	t66 = (((x305-x306)==x307)==x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x310 = INT32_MIN;
	uint32_t x311 = 2505U;
	static uint32_t x312 = UINT32_MAX;
	int32_t t67 = 0;

	t67 = (((x309-x310)==x311)==x312);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x313 = 34U;
	static int32_t x314 = 65839258;
	int16_t x315 = INT16_MAX;
	uint16_t x316 = 6U;
	static int32_t t68 = 20;

	t68 = (((x313-x314)==x315)==x316);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x317 = 1;
	int8_t x318 = INT8_MAX;
	int8_t x319 = INT8_MAX;
	int64_t x320 = 192913594LL;
	int32_t t69 = -6241910;

	t69 = (((x317-x318)==x319)==x320);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x321 = UINT16_MAX;
	int16_t x322 = -5;
	int32_t x323 = INT32_MIN;
	int32_t t70 = -10533;

	t70 = (((x321-x322)==x323)==x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x325 = INT16_MIN;
	uint64_t x327 = 5LLU;

	t71 = (((x325-x326)==x327)==x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x330 = 94U;
	uint16_t x332 = 325U;
	int32_t t72 = -641832;

	t72 = (((x329-x330)==x331)==x332);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MIN;
	int32_t x336 = INT32_MIN;
	volatile int32_t t73 = -1529126;

	t73 = (((x333-x334)==x335)==x336);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = 1209LL;
	int32_t x338 = INT32_MIN;
	int16_t x340 = -1;

	t74 = (((x337-x338)==x339)==x340);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x342 = 221U;
	uint16_t x343 = 1U;
	int8_t x344 = 9;
	volatile int32_t t75 = -389753;

	t75 = (((x341-x342)==x343)==x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -1;
	static int8_t x346 = INT8_MIN;
	uint16_t x347 = 748U;
	int64_t x348 = INT64_MAX;

	t76 = (((x345-x346)==x347)==x348);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x349 = INT32_MIN;
	static uint64_t x350 = 2449152786593411LLU;
	static volatile int64_t x351 = -96421990LL;
	uint32_t x352 = 2256815U;
	int32_t t77 = 250078;

	t77 = (((x349-x350)==x351)==x352);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = 18268767562904LL;
	int64_t x354 = -1LL;
	int32_t x356 = INT32_MIN;
	volatile int32_t t78 = 11;

	t78 = (((x353-x354)==x355)==x356);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = -1;
	uint64_t x359 = 3LLU;
	volatile int64_t x360 = -6946144682089030LL;
	volatile int32_t t79 = -1;

	t79 = (((x357-x358)==x359)==x360);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x361 = 0U;
	int8_t x362 = -1;
	uint16_t x363 = 147U;
	volatile int32_t t80 = -1;

	t80 = (((x361-x362)==x363)==x364);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int64_t x370 = 49498015856594525LL;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = UINT64_MAX;

	t81 = (((x369-x370)==x371)==x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x377 = 1119568920898979LLU;
	int16_t x379 = INT16_MAX;

	t82 = (((x377-x378)==x379)==x380);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x382 = -1;
	int16_t x383 = -1;
	uint32_t x384 = 204041115U;

	t83 = (((x381-x382)==x383)==x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x387 = -1;
	int8_t x388 = -1;
	int32_t t84 = 2;

	t84 = (((x385-x386)==x387)==x388);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x393 = 6;
	uint8_t x394 = 72U;
	volatile int32_t x395 = INT32_MIN;
	volatile uint16_t x396 = 288U;
	int32_t t85 = -57065903;

	t85 = (((x393-x394)==x395)==x396);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int32_t x397 = INT32_MIN;
	static int64_t x398 = 1130LL;
	volatile int32_t x399 = -1;
	uint8_t x400 = 14U;

	t86 = (((x397-x398)==x399)==x400);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x401 = 11271U;
	uint8_t x402 = UINT8_MAX;
	int64_t x403 = -1LL;
	int32_t x404 = INT32_MAX;
	int32_t t87 = 38;

	t87 = (((x401-x402)==x403)==x404);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x405 = 12U;
	volatile int8_t x407 = 6;
	int32_t x408 = -1;
	int32_t t88 = 64895924;

	t88 = (((x405-x406)==x407)==x408);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x409 = 118U;
	int32_t x410 = INT32_MAX;
	volatile int32_t t89 = 9271246;

	t89 = (((x409-x410)==x411)==x412);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = -1;
	uint32_t x418 = 213048509U;
	volatile int16_t x419 = -2;
	uint8_t x420 = 0U;
	int32_t t90 = 3315389;

	t90 = (((x417-x418)==x419)==x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x422 = -23;
	uint8_t x423 = 3U;
	volatile uint64_t x424 = 5080558542594LLU;
	volatile int32_t t91 = 7;

	t91 = (((x421-x422)==x423)==x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = -2570564042739LL;
	int8_t x426 = 0;
	volatile int32_t x427 = INT32_MAX;
	int32_t x428 = INT32_MIN;
	static volatile int32_t t92 = 5;

	t92 = (((x425-x426)==x427)==x428);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x430 = 22265784U;
	uint64_t x431 = 34003095478LLU;
	volatile int32_t t93 = 12410;

	t93 = (((x429-x430)==x431)==x432);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x433 = 801U;
	static int8_t x434 = INT8_MIN;
	volatile int32_t x435 = INT32_MIN;
	volatile int8_t x436 = INT8_MIN;
	int32_t t94 = -12167;

	t94 = (((x433-x434)==x435)==x436);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x437 = -1;
	int16_t x438 = -347;
	volatile int16_t x439 = 1;
	uint8_t x440 = 76U;
	volatile int32_t t95 = 28702659;

	t95 = (((x437-x438)==x439)==x440);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x441 = 100842884948213LLU;
	int8_t x444 = 0;

	t96 = (((x441-x442)==x443)==x444);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x446 = INT64_MAX;
	uint64_t x447 = UINT64_MAX;
	uint8_t x448 = UINT8_MAX;

	t97 = (((x445-x446)==x447)==x448);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = -4111;
	static int8_t x450 = -1;
	uint8_t x451 = UINT8_MAX;
	volatile uint64_t x452 = 1747282LLU;
	int32_t t98 = -136408;

	t98 = (((x449-x450)==x451)==x452);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x453 = -3346789;
	uint64_t x454 = UINT64_MAX;
	static volatile int8_t x455 = INT8_MIN;
	volatile int8_t x456 = INT8_MAX;
	volatile int32_t t99 = -1836;

	t99 = (((x453-x454)==x455)==x456);

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

