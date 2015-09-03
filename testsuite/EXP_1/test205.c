#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -535032;
static int8_t x14 = 1;
volatile uint16_t x20 = 3U;
int32_t t4 = -7577289;
static uint32_t x26 = 462950426U;
static uint64_t x28 = UINT64_MAX;
volatile int32_t t5 = 279446437;
int16_t x34 = INT16_MIN;
int32_t x36 = -175052;
int16_t x47 = INT16_MIN;
uint16_t x57 = UINT16_MAX;
uint8_t x58 = 4U;
int16_t x59 = -1;
volatile int16_t x60 = -1;
static int32_t x66 = INT32_MIN;
int32_t t12 = 2;
static volatile int8_t x77 = INT8_MAX;
int64_t x91 = -1LL;
uint32_t x97 = 73878213U;
int16_t x103 = INT16_MIN;
int32_t x104 = INT32_MIN;
uint32_t x125 = UINT32_MAX;
int8_t x129 = INT8_MIN;
int8_t x130 = 3;
int16_t x140 = 0;
static int32_t t23 = -98;
volatile int64_t x141 = -1LL;
int16_t x143 = -308;
uint64_t x147 = 59LLU;
int64_t x148 = -171047135781LL;
uint32_t x150 = 343U;
static int32_t x153 = -2195;
int64_t x154 = 5LL;
static uint8_t x160 = UINT8_MAX;
static uint64_t x161 = 3LLU;
volatile int32_t t29 = -25389;
uint8_t x167 = UINT8_MAX;
static int8_t x183 = INT8_MIN;
int32_t t31 = -342;
static uint32_t x194 = 43602U;
int32_t x200 = 1;
int8_t x215 = -1;
uint16_t x216 = UINT16_MAX;
volatile int64_t x224 = INT64_MIN;
int8_t x242 = -1;
int32_t x255 = 11409;
int8_t x261 = 6;
volatile uint16_t x262 = 705U;
int8_t x266 = 1;
uint8_t x267 = 16U;
uint16_t x269 = UINT16_MAX;
uint16_t x287 = UINT16_MAX;
uint16_t x291 = UINT16_MAX;
uint64_t x296 = 247011843722790265LLU;
int32_t x300 = -1;
volatile int32_t t53 = -461182464;
volatile uint64_t x306 = 4930944984350649390LLU;
volatile uint16_t x308 = 0U;
static int8_t x310 = -1;
int16_t x312 = INT16_MAX;
volatile int16_t x334 = INT16_MIN;
static int32_t t56 = 166;
static uint32_t x344 = 2U;
int16_t x350 = INT16_MIN;
uint16_t x351 = 1046U;
volatile int32_t t59 = 0;
uint64_t x353 = 29741242LLU;
int32_t x370 = 47036530;
int16_t x379 = -3;
int32_t t63 = -6;
int32_t t64 = -323839;
int16_t x388 = 28;
static uint32_t x393 = 26695U;
int32_t x395 = 226621;
volatile int32_t x399 = -1;
volatile int32_t t67 = 28;
volatile int32_t t69 = 68;
static volatile uint32_t x421 = 2U;
static uint64_t x423 = 407814931LLU;
static volatile int64_t x427 = -1LL;
static uint32_t x428 = UINT32_MAX;
volatile int32_t t72 = -191153;
int16_t x429 = -1;
int64_t x430 = -1LL;
static int64_t x431 = INT64_MIN;
static int32_t t73 = -551085;
volatile int32_t t75 = -645;
static volatile uint8_t x447 = 1U;
volatile uint64_t x448 = 52716673701261958LLU;
volatile int64_t x453 = -1LL;
int64_t x461 = -1LL;
int32_t t78 = 78511;
int32_t t79 = 45;
volatile uint64_t x470 = UINT64_MAX;
uint8_t x473 = 44U;
volatile int32_t x478 = -1;
uint32_t x493 = UINT32_MAX;
uint64_t x496 = UINT64_MAX;
volatile uint64_t x497 = 7460668615123022LLU;
volatile int32_t t87 = 34572;
int32_t x502 = INT32_MAX;
int32_t t90 = 3197;
int32_t t93 = -1689;
int16_t x550 = -1;
int16_t x551 = -3;
int32_t t95 = -20;
uint32_t x558 = UINT32_MAX;
uint64_t x566 = UINT64_MAX;
volatile int32_t t99 = 2125;


void f0(void) {
	volatile int8_t x1 = -3;
	uint16_t x2 = 23080U;
	volatile uint64_t x3 = 3077473628354580205LLU;
	volatile uint64_t x4 = 2021137970653045LLU;
	int32_t t0 = 51333;

	t0 = (((x1-x2)*x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 3013897604486767479LLU;
	int16_t x8 = INT16_MIN;

	t1 = (((x5-x6)*x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 59775U;
	static int16_t x15 = INT16_MIN;
	static uint16_t x16 = UINT16_MAX;
	int32_t t2 = -175;

	t2 = (((x13-x14)*x15)<=x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MAX;
	volatile int16_t x19 = INT16_MIN;
	volatile int32_t t3 = -101;

	t3 = (((x17-x18)*x19)<=x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	volatile int32_t x22 = -1;
	int32_t x23 = INT32_MAX;
	volatile int8_t x24 = INT8_MAX;

	t4 = (((x21-x22)*x23)<=x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = -1;
	volatile uint16_t x27 = 0U;

	t5 = (((x25-x26)*x27)<=x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -1;
	int16_t x35 = INT16_MAX;
	volatile int32_t t6 = 0;

	t6 = (((x33-x34)*x35)<=x36);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 281833U;
	static uint64_t x38 = UINT64_MAX;
	int8_t x39 = INT8_MIN;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t7 = -29742356;

	t7 = (((x37-x38)*x39)<=x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = 3710812626003680LLU;
	int16_t x42 = -545;
	int16_t x43 = -1;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t8 = 0;

	t8 = (((x41-x42)*x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = -1;
	int8_t x46 = INT8_MIN;
	int16_t x48 = -116;
	volatile int32_t t9 = 95763;

	t9 = (((x45-x46)*x47)<=x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t t10 = -1;

	t10 = (((x57-x58)*x59)<=x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x61 = 19;
	int8_t x62 = -3;
	uint64_t x63 = UINT64_MAX;
	int16_t x64 = INT16_MIN;
	int32_t t11 = 2877202;

	t11 = (((x61-x62)*x63)<=x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	int16_t x67 = -2;
	int32_t x68 = -49;

	t12 = (((x65-x66)*x67)<=x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x78 = 1;
	uint32_t x79 = 202191116U;
	int16_t x80 = -1;
	int32_t t13 = 65038;

	t13 = (((x77-x78)*x79)<=x80);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x81 = 5095;
	uint32_t x82 = 733U;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = -1;
	volatile int32_t t14 = 1431696;

	t14 = (((x81-x82)*x83)<=x84);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x85 = -1LL;
	uint32_t x86 = 460U;
	int8_t x87 = -1;
	uint8_t x88 = 19U;
	static int32_t t15 = -13622;

	t15 = (((x85-x86)*x87)<=x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 1704053371237772LLU;
	uint64_t x90 = 2060633246110168LLU;
	int16_t x92 = INT16_MAX;
	volatile int32_t t16 = -146695440;

	t16 = (((x89-x90)*x91)<=x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x93 = 7298082924858105829LLU;
	int32_t x94 = 35;
	uint32_t x95 = UINT32_MAX;
	volatile int8_t x96 = INT8_MAX;
	volatile int32_t t17 = 30;

	t17 = (((x93-x94)*x95)<=x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x98 = 83U;
	static int32_t x99 = INT32_MIN;
	volatile int8_t x100 = -1;
	volatile int32_t t18 = 980;

	t18 = (((x97-x98)*x99)<=x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x101 = -1;
	int64_t x102 = 15LL;
	volatile int32_t t19 = -70;

	t19 = (((x101-x102)*x103)<=x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x121 = -1;
	volatile int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	volatile int8_t x124 = 0;
	volatile int32_t t20 = 4177;

	t20 = (((x121-x122)*x123)<=x124);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x126 = 473152798U;
	int32_t x127 = INT32_MIN;
	uint16_t x128 = 124U;
	volatile int32_t t21 = 12045;

	t21 = (((x125-x126)*x127)<=x128);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x131 = INT8_MIN;
	int8_t x132 = INT8_MAX;
	volatile int32_t t22 = -774;

	t22 = (((x129-x130)*x131)<=x132);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = -614;
	static uint8_t x138 = 0U;
	uint64_t x139 = 24402754741LLU;

	t23 = (((x137-x138)*x139)<=x140);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x142 = UINT64_MAX;
	volatile int32_t x144 = -15699726;
	volatile int32_t t24 = -4;

	t24 = (((x141-x142)*x143)<=x144);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x145 = INT32_MIN;
	volatile uint64_t x146 = UINT64_MAX;
	volatile int32_t t25 = 159943090;

	t25 = (((x145-x146)*x147)<=x148);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x149 = UINT32_MAX;
	uint32_t x151 = 79U;
	uint8_t x152 = 0U;
	int32_t t26 = -3918;

	t26 = (((x149-x150)*x151)<=x152);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x155 = -1;
	int16_t x156 = -623;
	int32_t t27 = 345409434;

	t27 = (((x153-x154)*x155)<=x156);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x157 = 316808070188496LLU;
	static int8_t x158 = -24;
	volatile uint16_t x159 = 6U;
	volatile int32_t t28 = -302;

	t28 = (((x157-x158)*x159)<=x160);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x162 = UINT16_MAX;
	int32_t x163 = 1637;
	static int8_t x164 = INT8_MIN;

	t29 = (((x161-x162)*x163)<=x164);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = -1LL;
	int8_t x166 = INT8_MIN;
	int16_t x168 = INT16_MIN;
	int32_t t30 = -325356904;

	t30 = (((x165-x166)*x167)<=x168);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x181 = -1LL;
	int32_t x182 = -988247063;
	volatile int8_t x184 = INT8_MIN;

	t31 = (((x181-x182)*x183)<=x184);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x189 = 23;
	volatile uint64_t x190 = UINT64_MAX;
	int32_t x191 = INT32_MIN;
	uint64_t x192 = 4436011982572266345LLU;
	int32_t t32 = 2540;

	t32 = (((x189-x190)*x191)<=x192);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x193 = 27U;
	static uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 935U;
	int32_t t33 = 2018479;

	t33 = (((x193-x194)*x195)<=x196);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x197 = INT16_MIN;
	volatile int8_t x198 = 0;
	int8_t x199 = INT8_MAX;
	int32_t t34 = 7297924;

	t34 = (((x197-x198)*x199)<=x200);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x201 = 133234847117LLU;
	static int64_t x202 = INT64_MAX;
	volatile int32_t x203 = INT32_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t35 = 1778;

	t35 = (((x201-x202)*x203)<=x204);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x205 = -2;
	int64_t x206 = -1LL;
	int16_t x207 = -1;
	volatile int64_t x208 = INT64_MAX;
	int32_t t36 = 89716;

	t36 = (((x205-x206)*x207)<=x208);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x213 = 1U;
	int16_t x214 = -1;
	volatile int32_t t37 = -1;

	t37 = (((x213-x214)*x215)<=x216);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x221 = 6024823467102LLU;
	uint8_t x222 = UINT8_MAX;
	int32_t x223 = -1;
	volatile int32_t t38 = -33;

	t38 = (((x221-x222)*x223)<=x224);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x225 = INT32_MIN;
	uint64_t x226 = 1485LLU;
	uint64_t x227 = 67249682399847LLU;
	int8_t x228 = INT8_MIN;
	static int32_t t39 = -171991;

	t39 = (((x225-x226)*x227)<=x228);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x237 = INT8_MIN;
	static int16_t x238 = 127;
	volatile int8_t x239 = 3;
	int16_t x240 = INT16_MAX;
	volatile int32_t t40 = -8;

	t40 = (((x237-x238)*x239)<=x240);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x241 = 0U;
	uint64_t x243 = 938453382LLU;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t41 = 23038730;

	t41 = (((x241-x242)*x243)<=x244);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x245 = 249U;
	uint64_t x246 = 474341235800005067LLU;
	static volatile int64_t x247 = -1LL;
	static volatile int16_t x248 = -6471;
	int32_t t42 = -6;

	t42 = (((x245-x246)*x247)<=x248);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x253 = -1;
	int16_t x254 = INT16_MIN;
	static volatile uint16_t x256 = UINT16_MAX;
	volatile int32_t t43 = -1;

	t43 = (((x253-x254)*x255)<=x256);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x263 = INT8_MAX;
	volatile int8_t x264 = INT8_MIN;
	static volatile int32_t t44 = 15771;

	t44 = (((x261-x262)*x263)<=x264);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x265 = UINT16_MAX;
	static volatile int8_t x268 = INT8_MIN;
	int32_t t45 = -9010;

	t45 = (((x265-x266)*x267)<=x268);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x270 = -1;
	uint8_t x271 = UINT8_MAX;
	int32_t x272 = -1;
	int32_t t46 = -23941;

	t46 = (((x269-x270)*x271)<=x272);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x277 = UINT8_MAX;
	volatile uint64_t x278 = UINT64_MAX;
	int32_t x279 = 9422;
	static volatile int64_t x280 = INT64_MAX;
	int32_t t47 = -20;

	t47 = (((x277-x278)*x279)<=x280);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x281 = INT32_MIN;
	uint64_t x282 = UINT64_MAX;
	int32_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	volatile int32_t t48 = -103;

	t48 = (((x281-x282)*x283)<=x284);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x285 = -1LL;
	int16_t x286 = -1;
	volatile uint64_t x288 = 8137LLU;
	volatile int32_t t49 = 1;

	t49 = (((x285-x286)*x287)<=x288);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x289 = UINT8_MAX;
	volatile int8_t x290 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	int32_t t50 = 12;

	t50 = (((x289-x290)*x291)<=x292);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x293 = 84211;
	int32_t x294 = -2364757;
	uint32_t x295 = 523751705U;
	static int32_t t51 = -2026525;

	t51 = (((x293-x294)*x295)<=x296);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = INT16_MIN;
	static uint64_t x298 = 31276680418107LLU;
	static int16_t x299 = 4;
	int32_t t52 = 28331;

	t52 = (((x297-x298)*x299)<=x300);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x301 = UINT64_MAX;
	uint64_t x302 = UINT64_MAX;
	uint32_t x303 = UINT32_MAX;
	int8_t x304 = INT8_MIN;

	t53 = (((x301-x302)*x303)<=x304);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x305 = -232156;
	static volatile int32_t x307 = INT32_MIN;
	static volatile int32_t t54 = 15755035;

	t54 = (((x305-x306)*x307)<=x308);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x309 = UINT64_MAX;
	int64_t x311 = -1LL;
	volatile int32_t t55 = 161;

	t55 = (((x309-x310)*x311)<=x312);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x333 = INT16_MIN;
	static volatile int32_t x335 = 266;
	volatile uint64_t x336 = 2262LLU;

	t56 = (((x333-x334)*x335)<=x336);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x341 = 1908000275979413452LLU;
	uint16_t x342 = 2U;
	int8_t x343 = -1;
	volatile int32_t t57 = -440224;

	t57 = (((x341-x342)*x343)<=x344);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x345 = 970902292U;
	int16_t x346 = INT16_MAX;
	int16_t x347 = 201;
	static volatile uint16_t x348 = UINT16_MAX;
	volatile int32_t t58 = -892547600;

	t58 = (((x345-x346)*x347)<=x348);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint64_t x349 = UINT64_MAX;
	static int64_t x352 = -1LL;

	t59 = (((x349-x350)*x351)<=x352);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x354 = INT32_MIN;
	volatile uint32_t x355 = 993705801U;
	int64_t x356 = -1LL;
	int32_t t60 = 255119336;

	t60 = (((x353-x354)*x355)<=x356);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x357 = 21U;
	uint64_t x358 = 1833725115504LLU;
	static int64_t x359 = INT64_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t61 = 15654;

	t61 = (((x357-x358)*x359)<=x360);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x369 = 5716069119LL;
	static int64_t x371 = -1LL;
	uint32_t x372 = 5852U;
	static volatile int32_t t62 = -7;

	t62 = (((x369-x370)*x371)<=x372);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x377 = UINT16_MAX;
	volatile int16_t x378 = INT16_MIN;
	uint64_t x380 = UINT64_MAX;

	t63 = (((x377-x378)*x379)<=x380);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x381 = 1828;
	static uint8_t x382 = 111U;
	uint8_t x383 = 32U;
	volatile uint8_t x384 = 2U;

	t64 = (((x381-x382)*x383)<=x384);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x385 = INT8_MIN;
	int32_t x386 = -1;
	static int8_t x387 = INT8_MIN;
	int32_t t65 = 0;

	t65 = (((x385-x386)*x387)<=x388);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x394 = 22U;
	volatile uint64_t x396 = 471663LLU;
	int32_t t66 = 3979193;

	t66 = (((x393-x394)*x395)<=x396);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x397 = -1LL;
	uint64_t x398 = 840652740492614LLU;
	int8_t x400 = INT8_MIN;

	t67 = (((x397-x398)*x399)<=x400);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x405 = 1530698U;
	volatile int16_t x406 = INT16_MIN;
	static int32_t x407 = 410815113;
	int8_t x408 = -1;
	volatile int32_t t68 = 5;

	t68 = (((x405-x406)*x407)<=x408);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x409 = -1;
	uint16_t x410 = 1517U;
	int8_t x411 = 17;
	uint64_t x412 = 25376072361467381LLU;

	t69 = (((x409-x410)*x411)<=x412);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x413 = 732543106319678LLU;
	uint64_t x414 = 3476231391256017124LLU;
	int16_t x415 = -1;
	volatile uint16_t x416 = UINT16_MAX;
	static volatile int32_t t70 = 989500812;

	t70 = (((x413-x414)*x415)<=x416);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x422 = 5798726231794LLU;
	uint8_t x424 = 61U;
	static int32_t t71 = 65;

	t71 = (((x421-x422)*x423)<=x424);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x425 = INT32_MIN;
	int64_t x426 = INT64_MIN;

	t72 = (((x425-x426)*x427)<=x428);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x432 = INT8_MIN;

	t73 = (((x429-x430)*x431)<=x432);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x433 = INT8_MAX;
	int16_t x434 = 1;
	static int16_t x435 = INT16_MIN;
	static int64_t x436 = INT64_MIN;
	static volatile int32_t t74 = -1756365;

	t74 = (((x433-x434)*x435)<=x436);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x441 = -1;
	static int32_t x442 = -1;
	uint8_t x443 = 7U;
	int64_t x444 = INT64_MIN;

	t75 = (((x441-x442)*x443)<=x444);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x445 = UINT32_MAX;
	int16_t x446 = 928;
	int32_t t76 = 7;

	t76 = (((x445-x446)*x447)<=x448);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x454 = INT16_MIN;
	int16_t x455 = -5;
	uint64_t x456 = 13LLU;
	volatile int32_t t77 = -12075;

	t77 = (((x453-x454)*x455)<=x456);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x462 = 1;
	static volatile int32_t x463 = INT32_MIN;
	static int8_t x464 = -20;

	t78 = (((x461-x462)*x463)<=x464);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x465 = -1;
	int16_t x466 = INT16_MIN;
	static uint8_t x467 = 27U;
	int64_t x468 = INT64_MIN;

	t79 = (((x465-x466)*x467)<=x468);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x469 = INT64_MAX;
	int32_t x471 = 160537159;
	int64_t x472 = INT64_MIN;
	static int32_t t80 = -589663339;

	t80 = (((x469-x470)*x471)<=x472);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x474 = -49;
	int32_t x475 = -1;
	int8_t x476 = 12;
	static int32_t t81 = 1035949;

	t81 = (((x473-x474)*x475)<=x476);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x477 = 108256086785078LLU;
	uint8_t x479 = 1U;
	uint8_t x480 = 5U;
	volatile int32_t t82 = -375269556;

	t82 = (((x477-x478)*x479)<=x480);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x481 = -40142406630LL;
	static uint8_t x482 = 91U;
	static uint8_t x483 = 5U;
	int8_t x484 = 53;
	int32_t t83 = 2746192;

	t83 = (((x481-x482)*x483)<=x484);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x485 = UINT64_MAX;
	volatile int32_t x486 = INT32_MIN;
	volatile int32_t x487 = -1;
	int64_t x488 = -2565603362419974LL;
	volatile int32_t t84 = -59738999;

	t84 = (((x485-x486)*x487)<=x488);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x489 = 651LLU;
	volatile int8_t x490 = INT8_MAX;
	volatile uint16_t x491 = 8U;
	static uint8_t x492 = 21U;
	int32_t t85 = 529865;

	t85 = (((x489-x490)*x491)<=x492);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x494 = 184U;
	int16_t x495 = INT16_MIN;
	volatile int32_t t86 = -2;

	t86 = (((x493-x494)*x495)<=x496);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x498 = 26129LLU;
	uint16_t x499 = 732U;
	int8_t x500 = INT8_MAX;

	t87 = (((x497-x498)*x499)<=x500);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x501 = 3;
	volatile uint64_t x503 = UINT64_MAX;
	uint16_t x504 = 15809U;
	int32_t t88 = 2144;

	t88 = (((x501-x502)*x503)<=x504);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x513 = INT8_MIN;
	volatile int8_t x514 = INT8_MIN;
	static uint32_t x515 = 460U;
	int16_t x516 = INT16_MIN;
	volatile int32_t t89 = -173926;

	t89 = (((x513-x514)*x515)<=x516);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x517 = 492455930332LLU;
	uint16_t x518 = 7U;
	uint8_t x519 = 46U;
	int8_t x520 = INT8_MAX;

	t90 = (((x517-x518)*x519)<=x520);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x521 = INT8_MIN;
	volatile int8_t x522 = INT8_MIN;
	volatile uint8_t x523 = UINT8_MAX;
	static volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t91 = -950073226;

	t91 = (((x521-x522)*x523)<=x524);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x529 = INT8_MIN;
	int32_t x530 = -10;
	static uint8_t x531 = 0U;
	int64_t x532 = -1LL;
	volatile int32_t t92 = -2674;

	t92 = (((x529-x530)*x531)<=x532);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x537 = 0;
	uint64_t x538 = UINT64_MAX;
	int64_t x539 = 3917536961LL;
	int32_t x540 = INT32_MIN;

	t93 = (((x537-x538)*x539)<=x540);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x541 = UINT64_MAX;
	int64_t x542 = 273874955279LL;
	int32_t x543 = INT32_MIN;
	int64_t x544 = INT64_MIN;
	int32_t t94 = 189;

	t94 = (((x541-x542)*x543)<=x544);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x549 = 1;
	uint32_t x552 = UINT32_MAX;

	t95 = (((x549-x550)*x551)<=x552);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x553 = INT16_MAX;
	int8_t x554 = -1;
	static int64_t x555 = -1LL;
	uint16_t x556 = 563U;
	int32_t t96 = -7;

	t96 = (((x553-x554)*x555)<=x556);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x557 = INT16_MIN;
	uint8_t x559 = 4U;
	static volatile int16_t x560 = INT16_MIN;
	static volatile int32_t t97 = 2;

	t97 = (((x557-x558)*x559)<=x560);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x565 = -1LL;
	uint8_t x567 = UINT8_MAX;
	int64_t x568 = INT64_MAX;
	int32_t t98 = -84;

	t98 = (((x565-x566)*x567)<=x568);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x577 = -1;
	static uint64_t x578 = UINT64_MAX;
	uint8_t x579 = 1U;
	volatile int16_t x580 = -1;

	t99 = (((x577-x578)*x579)<=x580);

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

