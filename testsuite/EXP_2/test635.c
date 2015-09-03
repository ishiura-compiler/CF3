#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int16_t x5 = INT16_MIN;
volatile uint16_t x7 = UINT16_MAX;
volatile int8_t x9 = -2;
static volatile uint64_t t2 = 5788585483676LLU;
int64_t x19 = -1LL;
volatile int32_t t4 = -1;
int16_t x25 = -6;
uint8_t x28 = 16U;
int16_t x36 = INT16_MIN;
int16_t x41 = 0;
int16_t x53 = INT16_MAX;
int64_t x55 = -1LL;
uint16_t x58 = 26U;
int8_t x66 = 38;
static volatile int8_t x67 = -1;
static int64_t x69 = INT64_MAX;
int16_t x75 = -1;
volatile int32_t t18 = -241;
static volatile int64_t x78 = INT64_MAX;
int64_t x80 = INT64_MIN;
int32_t x92 = INT32_MIN;
volatile int32_t t22 = -399057364;
int16_t x96 = INT16_MIN;
volatile uint8_t x97 = 115U;
int8_t x98 = INT8_MIN;
uint32_t x107 = UINT32_MAX;
volatile int16_t x110 = INT16_MIN;
volatile int32_t t27 = -312;
int32_t x113 = -1936;
static int8_t x115 = -1;
int64_t x117 = 5188400LL;
static int8_t x121 = -1;
volatile int32_t x129 = INT32_MAX;
int64_t x131 = INT64_MAX;
volatile int32_t t32 = 675053;
int32_t x139 = -1;
static int64_t x142 = 793416995LL;
static int64_t x144 = INT64_MAX;
static uint64_t x152 = 67527581LLU;
volatile int8_t x153 = -57;
uint64_t x161 = 608658152LLU;
int16_t x164 = 2;
uint8_t x166 = 10U;
volatile int64_t t39 = -37676LL;
volatile int16_t x171 = INT16_MIN;
int16_t x173 = 6;
int64_t x176 = INT64_MIN;
volatile int16_t x178 = -1;
volatile int32_t t42 = -1;
volatile int32_t t44 = -330298283;
uint16_t x192 = 17953U;
volatile int64_t x194 = 5612LL;
uint8_t x195 = UINT8_MAX;
int32_t t48 = 57761074;
uint64_t x216 = UINT64_MAX;
int64_t x224 = INT64_MAX;
int8_t x232 = -2;
int16_t x236 = -85;
int16_t x238 = INT16_MIN;
volatile int32_t x248 = INT32_MAX;
static uint32_t x260 = 5292121U;
int32_t t62 = -107;
static volatile uint32_t x269 = 30020446U;
int8_t x275 = INT8_MIN;
static int64_t t64 = 501864243LL;
int8_t x277 = INT8_MIN;
int64_t x278 = INT64_MIN;
int8_t x284 = -23;
int16_t x287 = INT16_MIN;
static volatile int32_t t67 = -111092;
static volatile int64_t x290 = -6350922LL;
int8_t x298 = 6;
int64_t x300 = 755943948623185LL;
volatile int32_t x315 = INT32_MAX;
uint32_t x316 = 0U;
volatile int8_t x319 = INT8_MIN;
static int16_t x324 = -10147;
volatile int32_t t77 = 939736555;
static uint16_t x343 = 613U;
volatile int32_t x346 = -20324867;
int64_t x347 = -113LL;
static uint64_t x349 = UINT64_MAX;
static int32_t x350 = INT32_MAX;
int32_t t83 = 1;
int32_t x353 = INT32_MIN;
int8_t x355 = -1;
uint16_t x361 = 145U;
int32_t x369 = 264;
static int64_t x370 = INT64_MAX;
int64_t t88 = 12700901LL;
uint16_t x383 = 22396U;
int16_t x385 = -1;
int8_t x386 = -1;
volatile int16_t x387 = -1;
static int64_t t93 = 2056174LL;
volatile uint32_t t95 = 59828U;
static volatile uint8_t x402 = 1U;
uint16_t x415 = UINT16_MAX;
int32_t x422 = INT32_MIN;


void f0(void) {
	static uint8_t x2 = 75U;
	static uint32_t x3 = UINT32_MAX;
	int16_t x4 = -15;
	int32_t t0 = 0;

	t0 = ((x1<=(x2/x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = UINT64_MAX;
	int32_t x8 = 217930409;
	volatile int32_t t1 = 86848;

	t1 = ((x5<=(x6/x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	int32_t x11 = INT32_MIN;
	uint64_t x12 = 737LLU;

	t2 = ((x9<=(x10/x11))&x12);

	if (t2 != 1LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 5127667436LLU;
	uint16_t x14 = 778U;
	int8_t x15 = INT8_MIN;
	int64_t x16 = INT64_MAX;
	volatile int64_t t3 = -38267250184125LL;

	t3 = ((x13<=(x14/x15))&x16);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -36;
	volatile uint64_t x18 = 105296363LLU;
	static int16_t x20 = INT16_MIN;

	t4 = ((x17<=(x18/x19))&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = 1;
	uint8_t x22 = 69U;
	volatile int16_t x23 = -6509;
	int32_t x24 = INT32_MAX;
	static volatile int32_t t5 = 13996287;

	t5 = ((x21<=(x22/x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	int64_t x27 = -1LL;
	int32_t t6 = -249940080;

	t6 = ((x25<=(x26/x27))&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = -45;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	int16_t x32 = 1939;
	volatile int32_t t7 = 14;

	t7 = ((x29<=(x30/x31))&x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -18861506460LL;
	static int8_t x34 = INT8_MAX;
	volatile int64_t x35 = -1LL;
	volatile int32_t t8 = 79500;

	t8 = ((x33<=(x34/x35))&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -1;
	static uint8_t x38 = 25U;
	int64_t x39 = INT64_MIN;
	int16_t x40 = 5553;
	int32_t t9 = -111242;

	t9 = ((x37<=(x38/x39))&x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = INT32_MIN;
	uint64_t x43 = 5078108864LLU;
	int32_t x44 = -1;
	static int32_t t10 = 247777;

	t10 = ((x41<=(x42/x43))&x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	uint8_t x46 = 84U;
	int8_t x47 = 6;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 20361;

	t11 = ((x45<=(x46/x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 277U;
	int16_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	volatile int32_t x52 = 55;
	int32_t t12 = -1021185;

	t12 = ((x49<=(x50/x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 3U;
	int8_t x56 = INT8_MAX;
	int32_t t13 = 15398911;

	t13 = ((x53<=(x54/x55))&x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint16_t x59 = 13797U;
	uint32_t x60 = 603850696U;
	static volatile uint32_t t14 = 1986961U;

	t14 = ((x57<=(x58/x59))&x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = 21;
	int8_t x63 = INT8_MAX;
	int8_t x64 = -1;
	volatile int32_t t15 = -86185995;

	t15 = ((x61<=(x62/x63))&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = INT32_MIN;
	uint64_t x68 = 3578LLU;
	uint64_t t16 = 14719510605362LLU;

	t16 = ((x65<=(x66/x67))&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x70 = INT8_MAX;
	uint16_t x71 = 288U;
	uint32_t x72 = 5501600U;
	volatile uint32_t t17 = 7783U;

	t17 = ((x69<=(x70/x71))&x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = INT16_MAX;
	uint32_t x74 = 11329U;
	int16_t x76 = -1;

	t18 = ((x73<=(x74/x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = UINT8_MAX;
	int64_t x79 = -1LL;
	int64_t t19 = -1048002144846268869LL;

	t19 = ((x77<=(x78/x79))&x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 43;
	volatile int32_t x82 = -1;
	static volatile uint8_t x83 = 1U;
	static int32_t x84 = -1;
	volatile int32_t t20 = 29;

	t20 = ((x81<=(x82/x83))&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	uint32_t x86 = 22954U;
	int16_t x87 = -1;
	static uint64_t x88 = 1216753342186284LLU;
	volatile uint64_t t21 = 949441159611LLU;

	t21 = ((x85<=(x86/x87))&x88);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 4;
	static uint8_t x90 = 21U;
	volatile uint32_t x91 = UINT32_MAX;

	t22 = ((x89<=(x90/x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	int32_t x94 = -3;
	int64_t x95 = -5877758895707657LL;
	volatile int32_t t23 = -160362297;

	t23 = ((x93<=(x94/x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x99 = 14850LLU;
	static int64_t x100 = -1LL;
	volatile int64_t t24 = 5LL;

	t24 = ((x97<=(x98/x99))&x100);

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 143464153498754382LLU;
	static int32_t x102 = INT32_MIN;
	int32_t x103 = -28068;
	volatile uint16_t x104 = UINT16_MAX;
	int32_t t25 = 9593;

	t25 = ((x101<=(x102/x103))&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int64_t x106 = INT64_MIN;
	volatile uint32_t x108 = 19645768U;
	uint32_t t26 = 127301U;

	t26 = ((x105<=(x106/x107))&x108);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = -1;
	volatile uint8_t x111 = 5U;
	static volatile uint16_t x112 = UINT16_MAX;

	t27 = ((x109<=(x110/x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = -1LL;
	uint8_t x116 = 84U;
	volatile int32_t t28 = 104292;

	t28 = ((x113<=(x114/x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 536840605960017715LLU;
	volatile int16_t x119 = 15907;
	int8_t x120 = 1;
	int32_t t29 = -542828284;

	t29 = ((x117<=(x118/x119))&x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = 253562LLU;
	volatile int64_t x123 = INT64_MIN;
	uint64_t x124 = 13623295812779LLU;
	volatile uint64_t t30 = 13659856898LLU;

	t30 = ((x121<=(x122/x123))&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x130 = UINT16_MAX;
	uint64_t x132 = 5LLU;
	static volatile uint64_t t31 = 123858485289907860LLU;

	t31 = ((x129<=(x130/x131))&x132);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x133 = -1LL;
	int64_t x134 = 61117168898142790LL;
	uint8_t x135 = UINT8_MAX;
	static int8_t x136 = INT8_MIN;

	t32 = ((x133<=(x134/x135))&x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x137 = -1LL;
	int32_t x138 = -1;
	static uint32_t x140 = 124921109U;
	volatile uint32_t t33 = 1021843489U;

	t33 = ((x137<=(x138/x139))&x140);

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	uint32_t x143 = UINT32_MAX;
	int64_t t34 = 35987LL;

	t34 = ((x141<=(x142/x143))&x144);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = -1LL;
	uint64_t x150 = 675LLU;
	volatile int64_t x151 = INT64_MAX;
	volatile uint64_t t35 = 7871267490444288683LLU;

	t35 = ((x149<=(x150/x151))&x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x154 = -172601423112LL;
	volatile int16_t x155 = INT16_MIN;
	uint16_t x156 = 11218U;
	int32_t t36 = 598;

	t36 = ((x153<=(x154/x155))&x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x157 = 295778092159LLU;
	uint32_t x158 = 30577U;
	uint16_t x159 = UINT16_MAX;
	volatile int16_t x160 = INT16_MIN;
	int32_t t37 = -216212929;

	t37 = ((x157<=(x158/x159))&x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x162 = UINT8_MAX;
	uint32_t x163 = UINT32_MAX;
	int32_t t38 = -1;

	t38 = ((x161<=(x162/x163))&x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MAX;
	uint8_t x167 = 13U;
	volatile int64_t x168 = 50LL;

	t39 = ((x165<=(x166/x167))&x168);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = 1137U;
	uint8_t x170 = UINT8_MAX;
	int32_t x172 = INT32_MIN;
	volatile int32_t t40 = -11206;

	t40 = ((x169<=(x170/x171))&x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint8_t x174 = 3U;
	volatile uint16_t x175 = 371U;
	static volatile int64_t t41 = -7284LL;

	t41 = ((x173<=(x174/x175))&x176);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x177 = 19U;
	uint32_t x179 = UINT32_MAX;
	int32_t x180 = 1;

	t42 = ((x177<=(x178/x179))&x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = 5;
	static int8_t x183 = INT8_MIN;
	static int32_t x184 = INT32_MAX;
	int32_t t43 = 2606861;

	t43 = ((x181<=(x182/x183))&x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = 1;
	int64_t x186 = -21646639337647LL;
	uint16_t x187 = UINT16_MAX;
	volatile int8_t x188 = INT8_MIN;

	t44 = ((x185<=(x186/x187))&x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x189 = INT32_MIN;
	int16_t x190 = 29;
	int16_t x191 = -1473;
	volatile int32_t t45 = 1690580;

	t45 = ((x189<=(x190/x191))&x192);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 165297176LLU;
	static uint64_t x196 = 1287313428LLU;
	volatile uint64_t t46 = 26537151014075461LLU;

	t46 = ((x193<=(x194/x195))&x196);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	static volatile int16_t x199 = 13557;
	volatile int8_t x200 = -2;
	int32_t t47 = -83609;

	t47 = ((x197<=(x198/x199))&x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x201 = INT8_MIN;
	uint16_t x202 = UINT16_MAX;
	int16_t x203 = -1;
	uint8_t x204 = UINT8_MAX;

	t48 = ((x201<=(x202/x203))&x204);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x205 = 2757U;
	int64_t x206 = -1LL;
	volatile int16_t x207 = -99;
	int16_t x208 = INT16_MIN;
	volatile int32_t t49 = 451;

	t49 = ((x205<=(x206/x207))&x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = -1;
	static uint64_t x214 = 305472576229958092LLU;
	int32_t x215 = INT32_MAX;
	uint64_t t50 = 1698LLU;

	t50 = ((x213<=(x214/x215))&x216);

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint32_t x217 = 535U;
	int32_t x218 = -160;
	static volatile int64_t x219 = INT64_MAX;
	uint64_t x220 = 619576LLU;
	static uint64_t t51 = 29LLU;

	t51 = ((x217<=(x218/x219))&x220);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x221 = 826LLU;
	volatile int16_t x222 = INT16_MIN;
	static uint32_t x223 = 3683U;
	volatile int64_t t52 = 1LL;

	t52 = ((x221<=(x222/x223))&x224);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 204066316854035LLU;
	static uint8_t x226 = 0U;
	int8_t x227 = -1;
	volatile int64_t x228 = INT64_MIN;
	volatile int64_t t53 = 819513627202LL;

	t53 = ((x225<=(x226/x227))&x228);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x229 = 1U;
	static volatile int64_t x230 = -632955636480LL;
	int16_t x231 = INT16_MIN;
	volatile int32_t t54 = -14071;

	t54 = ((x229<=(x230/x231))&x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x233 = 0U;
	uint16_t x234 = 1800U;
	static volatile int16_t x235 = INT16_MIN;
	volatile int32_t t55 = 27463078;

	t55 = ((x233<=(x234/x235))&x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile uint64_t x237 = 19254LLU;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -1LL;
	int64_t t56 = 1LL;

	t56 = ((x237<=(x238/x239))&x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x241 = UINT8_MAX;
	static int64_t x242 = INT64_MAX;
	uint8_t x243 = 63U;
	uint8_t x244 = 8U;
	int32_t t57 = 1;

	t57 = ((x241<=(x242/x243))&x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = 10010785618LL;
	int32_t x246 = INT32_MAX;
	volatile int64_t x247 = 1934609706419233LL;
	static int32_t t58 = -137429;

	t58 = ((x245<=(x246/x247))&x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x249 = INT32_MAX;
	uint64_t x250 = 3LLU;
	int8_t x251 = -1;
	static uint16_t x252 = 0U;
	static volatile int32_t t59 = -4833408;

	t59 = ((x249<=(x250/x251))&x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = 0;
	int64_t x254 = -12LL;
	uint8_t x255 = 10U;
	int16_t x256 = INT16_MAX;
	int32_t t60 = 6883;

	t60 = ((x253<=(x254/x255))&x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = -958415957831LL;
	uint32_t x258 = 221115U;
	volatile int16_t x259 = 393;
	uint32_t t61 = 4498511U;

	t61 = ((x257<=(x258/x259))&x260);

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x261 = -1;
	static int64_t x262 = -1LL;
	uint16_t x263 = 6U;
	int32_t x264 = 31164;

	t62 = ((x261<=(x262/x263))&x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x270 = 10;
	volatile uint16_t x271 = 24U;
	static uint32_t x272 = 1719310U;
	volatile uint32_t t63 = 3U;

	t63 = ((x269<=(x270/x271))&x272);

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -70323401LL;
	int16_t x274 = INT16_MIN;
	volatile int64_t x276 = INT64_MIN;

	t64 = ((x273<=(x274/x275))&x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x279 = UINT64_MAX;
	uint16_t x280 = 12320U;
	int32_t t65 = 517205080;

	t65 = ((x277<=(x278/x279))&x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x281 = -1;
	int32_t x282 = INT32_MIN;
	static uint64_t x283 = UINT64_MAX;
	int32_t t66 = 0;

	t66 = ((x281<=(x282/x283))&x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x285 = -1;
	uint64_t x286 = UINT64_MAX;
	int32_t x288 = INT32_MIN;

	t67 = ((x285<=(x286/x287))&x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x289 = -1;
	uint32_t x291 = 43633U;
	volatile int32_t x292 = -7201585;
	volatile int32_t t68 = 1257547;

	t68 = ((x289<=(x290/x291))&x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x293 = -1;
	static int64_t x294 = 195877756967663LL;
	int8_t x295 = INT8_MAX;
	volatile uint8_t x296 = 1U;
	static int32_t t69 = -1;

	t69 = ((x293<=(x294/x295))&x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x297 = 2743LLU;
	uint32_t x299 = 48438U;
	volatile int64_t t70 = 2566218823798882LL;

	t70 = ((x297<=(x298/x299))&x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x301 = UINT8_MAX;
	uint16_t x302 = 2317U;
	int64_t x303 = INT64_MAX;
	static uint8_t x304 = UINT8_MAX;
	volatile int32_t t71 = -6;

	t71 = ((x301<=(x302/x303))&x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x305 = -21586LL;
	int32_t x306 = -1;
	int64_t x307 = INT64_MIN;
	int16_t x308 = INT16_MAX;
	int32_t t72 = 11;

	t72 = ((x305<=(x306/x307))&x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x309 = 14U;
	int64_t x310 = 134836693831989LL;
	static int16_t x311 = INT16_MIN;
	int64_t x312 = INT64_MAX;
	int64_t t73 = -7427276887LL;

	t73 = ((x309<=(x310/x311))&x312);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x313 = INT16_MIN;
	volatile uint64_t x314 = 76732035427068LLU;
	static uint32_t t74 = 3817U;

	t74 = ((x313<=(x314/x315))&x316);

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x317 = INT64_MIN;
	static uint16_t x318 = 2965U;
	volatile uint32_t x320 = 477651U;
	uint32_t t75 = 15638U;

	t75 = ((x317<=(x318/x319))&x320);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x321 = INT32_MIN;
	static volatile uint8_t x322 = 118U;
	int32_t x323 = -11251;
	volatile int32_t t76 = 1959;

	t76 = ((x321<=(x322/x323))&x324);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x325 = INT32_MAX;
	int32_t x326 = INT32_MIN;
	static int8_t x327 = INT8_MIN;
	int32_t x328 = -3393738;

	t77 = ((x325<=(x326/x327))&x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x329 = -1;
	int32_t x330 = INT32_MAX;
	uint16_t x331 = UINT16_MAX;
	uint8_t x332 = 101U;
	int32_t t78 = 952;

	t78 = ((x329<=(x330/x331))&x332);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x333 = INT32_MIN;
	static int16_t x334 = -15519;
	uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MAX;
	int32_t t79 = -2550199;

	t79 = ((x333<=(x334/x335))&x336);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x337 = 15U;
	int32_t x338 = -1;
	uint64_t x339 = 37692334898264LLU;
	volatile uint16_t x340 = 1158U;
	int32_t t80 = 182;

	t80 = ((x337<=(x338/x339))&x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MAX;
	uint16_t x342 = 793U;
	static volatile uint32_t x344 = 258U;
	uint32_t t81 = 3U;

	t81 = ((x341<=(x342/x343))&x344);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x345 = 30U;
	int8_t x348 = INT8_MIN;
	int32_t t82 = -4;

	t82 = ((x345<=(x346/x347))&x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x351 = -16532LL;
	int8_t x352 = 1;

	t83 = ((x349<=(x350/x351))&x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x354 = INT8_MAX;
	int8_t x356 = INT8_MAX;
	static volatile int32_t t84 = -104;

	t84 = ((x353<=(x354/x355))&x356);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = 40762620LL;
	uint8_t x358 = 3U;
	int8_t x359 = INT8_MAX;
	int8_t x360 = INT8_MAX;
	volatile int32_t t85 = 1753;

	t85 = ((x357<=(x358/x359))&x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x362 = INT16_MIN;
	int16_t x363 = -1;
	int16_t x364 = -7454;
	volatile int32_t t86 = -1;

	t86 = ((x361<=(x362/x363))&x364);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x365 = UINT32_MAX;
	int64_t x366 = INT64_MAX;
	volatile uint32_t x367 = UINT32_MAX;
	int32_t x368 = INT32_MIN;
	int32_t t87 = 10216290;

	t87 = ((x365<=(x366/x367))&x368);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x371 = 3911;
	int64_t x372 = -1LL;

	t88 = ((x369<=(x370/x371))&x372);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x373 = INT16_MIN;
	volatile uint16_t x374 = 4U;
	int64_t x375 = 594LL;
	int8_t x376 = INT8_MIN;
	volatile int32_t t89 = -3763472;

	t89 = ((x373<=(x374/x375))&x376);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x377 = 29029783;
	uint64_t x378 = 18LLU;
	int16_t x379 = -1;
	int8_t x380 = INT8_MAX;
	int32_t t90 = -2424948;

	t90 = ((x377<=(x378/x379))&x380);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x381 = INT32_MAX;
	uint16_t x382 = 0U;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t91 = 2925351;

	t91 = ((x381<=(x382/x383))&x384);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x388 = INT64_MIN;
	int64_t t92 = -14LL;

	t92 = ((x385<=(x386/x387))&x388);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x389 = INT16_MAX;
	static int8_t x390 = INT8_MIN;
	int32_t x391 = -1;
	int64_t x392 = -2116870464287102761LL;

	t93 = ((x389<=(x390/x391))&x392);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x393 = UINT32_MAX;
	volatile int8_t x394 = 1;
	int16_t x395 = -1;
	uint8_t x396 = 2U;
	int32_t t94 = -89851837;

	t94 = ((x393<=(x394/x395))&x396);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = -1;
	volatile int8_t x398 = INT8_MAX;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = UINT32_MAX;

	t95 = ((x397<=(x398/x399))&x400);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x401 = 26;
	int8_t x403 = INT8_MIN;
	int16_t x404 = 0;
	volatile int32_t t96 = -223;

	t96 = ((x401<=(x402/x403))&x404);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x413 = UINT64_MAX;
	static uint32_t x414 = 5227U;
	uint8_t x416 = 122U;
	static volatile int32_t t97 = -45826684;

	t97 = ((x413<=(x414/x415))&x416);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x417 = 1U;
	int64_t x418 = INT64_MAX;
	volatile int16_t x419 = INT16_MIN;
	volatile uint64_t x420 = UINT64_MAX;
	static volatile uint64_t t98 = 12373235435018174LLU;

	t98 = ((x417<=(x418/x419))&x420);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x421 = INT8_MIN;
	int16_t x423 = INT16_MIN;
	static int8_t x424 = INT8_MIN;
	int32_t t99 = 3;

	t99 = ((x421<=(x422/x423))&x424);

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

