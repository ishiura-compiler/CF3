#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x17 = 27791253272072636LL;
uint32_t x18 = 272864463U;
uint64_t x27 = 120295807967LLU;
int32_t t2 = -21;
static int32_t t3 = 519;
uint16_t x34 = 55U;
static volatile int32_t x35 = INT32_MIN;
uint8_t x38 = 4U;
volatile int8_t x46 = INT8_MIN;
int64_t x75 = -14689678LL;
static int64_t x76 = -664LL;
static int64_t x80 = INT64_MAX;
uint16_t x82 = 43U;
volatile int16_t x89 = INT16_MIN;
volatile uint8_t x109 = UINT8_MAX;
int32_t x112 = INT32_MAX;
uint64_t x146 = 334570507509LLU;
static int16_t x147 = INT16_MAX;
static uint64_t x148 = 1815LLU;
volatile int32_t t22 = 355447;
int64_t x149 = -141348402LL;
uint8_t x161 = UINT8_MAX;
static uint32_t x162 = 5828U;
static uint32_t x165 = UINT32_MAX;
static volatile uint8_t x167 = UINT8_MAX;
static int32_t x170 = 124265407;
int32_t t27 = 77120542;
int16_t x178 = -24;
uint32_t x179 = 104227539U;
volatile int32_t t29 = 1176;
volatile int32_t t31 = 847854;
int16_t x189 = INT16_MIN;
static int64_t x192 = INT64_MIN;
volatile int32_t t32 = -166;
uint8_t x200 = 7U;
int32_t t34 = 313;
int32_t x202 = INT32_MAX;
int32_t t35 = -151074;
volatile int16_t x205 = 902;
int64_t x207 = INT64_MIN;
int64_t x214 = INT64_MIN;
uint64_t x215 = 5510937LLU;
static int16_t x216 = INT16_MAX;
static uint64_t x220 = 69908LLU;
uint64_t x224 = 60LLU;
volatile int32_t t40 = 0;
int8_t x232 = INT8_MIN;
volatile int32_t t42 = 3822;
volatile uint8_t x237 = 3U;
volatile int8_t x248 = INT8_MAX;
volatile uint16_t x249 = 3437U;
uint16_t x250 = 3U;
uint16_t x253 = 13091U;
static uint32_t x255 = UINT32_MAX;
uint16_t x264 = 3617U;
volatile int32_t t49 = 938;
static volatile uint8_t x265 = UINT8_MAX;
volatile int32_t x279 = INT32_MIN;
int32_t t52 = -262144;
uint64_t x287 = 54100LLU;
int64_t x307 = 1492295LL;
static int32_t x311 = 3483;
static uint32_t x317 = UINT32_MAX;
int16_t x320 = INT16_MAX;
static uint8_t x325 = 14U;
uint16_t x326 = 14U;
static int32_t x344 = INT32_MIN;
int32_t t64 = 993416554;
volatile int8_t x347 = INT8_MIN;
int32_t x352 = -45239344;
int32_t x353 = -12473;
uint32_t x354 = UINT32_MAX;
volatile int32_t t67 = -2478;
static uint8_t x359 = 60U;
uint16_t x373 = 8U;
volatile uint16_t x374 = UINT16_MAX;
volatile int32_t t70 = 2264530;
volatile int64_t x390 = INT64_MIN;
volatile int32_t x396 = INT32_MAX;
static int8_t x397 = -1;
volatile uint8_t x399 = 10U;
int8_t x405 = INT8_MAX;
int8_t x406 = 3;
int32_t x408 = INT32_MIN;
volatile int32_t x410 = INT32_MIN;
int32_t t78 = 2201;
static uint8_t x421 = UINT8_MAX;
volatile uint64_t x447 = 16898249788057994LLU;
int16_t x461 = INT16_MIN;
int16_t x469 = 6;
volatile int32_t t87 = 565543764;
static int8_t x474 = INT8_MAX;
int16_t x475 = INT16_MAX;
volatile int16_t x476 = 2044;
int32_t t88 = 7928531;
uint64_t x479 = UINT64_MAX;
int32_t x482 = -73450885;
uint8_t x483 = 39U;
volatile int32_t t90 = 0;
int64_t x485 = INT64_MAX;
int16_t x486 = INT16_MIN;
volatile int8_t x493 = 1;
int8_t x494 = INT8_MIN;
static int32_t x496 = INT32_MIN;
int32_t t92 = -407;
int8_t x497 = -1;
static uint32_t x501 = 0U;
int16_t x504 = INT16_MAX;
int32_t x513 = INT32_MAX;
volatile int32_t t97 = 3250;
static volatile int32_t x521 = -730968;
uint64_t x526 = UINT64_MAX;


void f0(void) {
	uint32_t x19 = 38944230U;
	volatile int8_t x20 = INT8_MIN;
	static volatile int32_t t0 = 170939;

	t0 = ((x17%(x18%x19))<x20);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x21 = 6U;
	uint32_t x22 = 2569U;
	int32_t x23 = 495;
	static uint32_t x24 = 35U;
	volatile int32_t t1 = 188;

	t1 = ((x21%(x22%x23))<x24);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x25 = INT16_MIN;
	static int8_t x26 = 1;
	static int16_t x28 = INT16_MAX;

	t2 = ((x25%(x26%x27))<x28);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x29 = INT64_MIN;
	volatile int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MAX;

	t3 = ((x29%(x30%x31))<x32);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MIN;
	uint8_t x36 = 1U;
	static volatile int32_t t4 = 4749366;

	t4 = ((x33%(x34%x35))<x36);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MAX;
	uint8_t x39 = UINT8_MAX;
	static uint64_t x40 = UINT64_MAX;
	volatile int32_t t5 = -71974;

	t5 = ((x37%(x38%x39))<x40);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MIN;
	static volatile int64_t x43 = 88708130278LL;
	int32_t x44 = -22432931;
	int32_t t6 = 3956918;

	t6 = ((x41%(x42%x43))<x44);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x45 = INT8_MIN;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = 2618893695222LLU;
	volatile int32_t t7 = -208913552;

	t7 = ((x45%(x46%x47))<x48);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = INT32_MIN;
	volatile int64_t x66 = INT64_MAX;
	uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 5334104U;
	int32_t t8 = 88739672;

	t8 = ((x65%(x66%x67))<x68);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x73 = 31309U;
	int8_t x74 = INT8_MAX;
	int32_t t9 = -11646;

	t9 = ((x73%(x74%x75))<x76);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x77 = 3523644;
	int16_t x78 = -1;
	uint16_t x79 = 3006U;
	volatile int32_t t10 = -62865094;

	t10 = ((x77%(x78%x79))<x80);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x81 = INT16_MIN;
	int64_t x83 = INT64_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t11 = 8;

	t11 = ((x81%(x82%x83))<x84);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x90 = INT32_MAX;
	int32_t x91 = 10;
	uint32_t x92 = 375U;
	volatile int32_t t12 = 0;

	t12 = ((x89%(x90%x91))<x92);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int8_t x94 = -1;
	int64_t x95 = -1819838LL;
	int32_t x96 = -1;
	volatile int32_t t13 = -2079585;

	t13 = ((x93%(x94%x95))<x96);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x98 = -1;
	int16_t x99 = INT16_MIN;
	int64_t x100 = INT64_MAX;
	volatile int32_t t14 = -8;

	t14 = ((x97%(x98%x99))<x100);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	volatile uint32_t x103 = UINT32_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile int32_t t15 = -44;

	t15 = ((x101%(x102%x103))<x104);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x110 = INT64_MAX;
	volatile uint64_t x111 = 22507LLU;
	int32_t t16 = 24375;

	t16 = ((x109%(x110%x111))<x112);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x113 = 42889320;
	static volatile uint16_t x114 = UINT16_MAX;
	int32_t x115 = INT32_MIN;
	int32_t x116 = INT32_MIN;
	volatile int32_t t17 = -59556;

	t17 = ((x113%(x114%x115))<x116);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x121 = UINT64_MAX;
	uint32_t x122 = 218U;
	volatile int16_t x123 = -1;
	static int8_t x124 = INT8_MIN;
	volatile int32_t t18 = -223495589;

	t18 = ((x121%(x122%x123))<x124);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x129 = 1U;
	static uint16_t x130 = UINT16_MAX;
	uint8_t x131 = 4U;
	volatile int32_t x132 = INT32_MIN;
	static int32_t t19 = -22;

	t19 = ((x129%(x130%x131))<x132);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x133 = 11U;
	int64_t x134 = 805756976125189LL;
	int32_t x135 = INT32_MIN;
	volatile int32_t x136 = -3255;
	volatile int32_t t20 = 1;

	t20 = ((x133%(x134%x135))<x136);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x137 = -1LL;
	static uint16_t x138 = 3U;
	static int64_t x139 = 1185848621996134876LL;
	static volatile int32_t x140 = -1;
	int32_t t21 = 100970;

	t21 = ((x137%(x138%x139))<x140);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x145 = -99013;

	t22 = ((x145%(x146%x147))<x148);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x150 = 56;
	uint64_t x151 = UINT64_MAX;
	uint16_t x152 = 0U;
	int32_t t23 = 6118;

	t23 = ((x149%(x150%x151))<x152);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x153 = INT64_MAX;
	int8_t x154 = -1;
	static uint16_t x155 = 27U;
	int32_t x156 = -2129;
	static volatile int32_t t24 = -490639;

	t24 = ((x153%(x154%x155))<x156);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x163 = -132;
	volatile int8_t x164 = -7;
	int32_t t25 = 1012;

	t25 = ((x161%(x162%x163))<x164);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x166 = INT32_MAX;
	int32_t x168 = -1;
	volatile int32_t t26 = 22536713;

	t26 = ((x165%(x166%x167))<x168);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x169 = 52389U;
	int16_t x171 = 10928;
	static volatile uint16_t x172 = 324U;

	t27 = ((x169%(x170%x171))<x172);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x173 = 109189LL;
	int64_t x174 = INT64_MIN;
	volatile uint16_t x175 = 832U;
	int32_t x176 = INT32_MIN;
	volatile int32_t t28 = 12781;

	t28 = ((x173%(x174%x175))<x176);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x177 = INT32_MIN;
	int16_t x180 = -1;

	t29 = ((x177%(x178%x179))<x180);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x181 = 3U;
	int64_t x182 = -1LL;
	static int64_t x183 = 111864926LL;
	int64_t x184 = INT64_MIN;
	static int32_t t30 = -261754630;

	t30 = ((x181%(x182%x183))<x184);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = INT8_MAX;
	uint8_t x186 = UINT8_MAX;
	uint32_t x187 = 235U;
	int16_t x188 = INT16_MAX;

	t31 = ((x185%(x186%x187))<x188);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x190 = INT64_MAX;
	int8_t x191 = INT8_MIN;

	t32 = ((x189%(x190%x191))<x192);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = 1421;
	int8_t x195 = INT8_MIN;
	int32_t x196 = INT32_MIN;
	static int32_t t33 = -764;

	t33 = ((x193%(x194%x195))<x196);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = 177783270889763062LLU;
	int32_t x199 = 3673694;

	t34 = ((x197%(x198%x199))<x200);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x201 = INT8_MAX;
	static int8_t x203 = INT8_MAX;
	int16_t x204 = INT16_MIN;

	t35 = ((x201%(x202%x203))<x204);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x206 = INT8_MAX;
	static volatile uint32_t x208 = UINT32_MAX;
	int32_t t36 = -100;

	t36 = ((x205%(x206%x207))<x208);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x209 = -1;
	volatile uint32_t x210 = 4570202U;
	int64_t x211 = -3532498137218LL;
	int64_t x212 = INT64_MAX;
	static volatile int32_t t37 = 26;

	t37 = ((x209%(x210%x211))<x212);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x213 = -1;
	int32_t t38 = 0;

	t38 = ((x213%(x214%x215))<x216);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = 24U;
	int8_t x219 = INT8_MIN;
	int32_t t39 = -80;

	t39 = ((x217%(x218%x219))<x220);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x221 = 809U;
	uint64_t x222 = 544888301LLU;
	uint64_t x223 = UINT64_MAX;

	t40 = ((x221%(x222%x223))<x224);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x229 = 58930LLU;
	static int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	volatile int32_t t41 = -958026;

	t41 = ((x229%(x230%x231))<x232);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x233 = -1LL;
	static int64_t x234 = INT64_MIN;
	int16_t x235 = -3323;
	static int64_t x236 = -1LL;

	t42 = ((x233%(x234%x235))<x236);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x238 = INT64_MAX;
	uint8_t x239 = UINT8_MAX;
	volatile uint8_t x240 = UINT8_MAX;
	int32_t t43 = 3;

	t43 = ((x237%(x238%x239))<x240);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x241 = -1365074LL;
	uint16_t x242 = UINT16_MAX;
	uint64_t x243 = 3275LLU;
	uint32_t x244 = 1U;
	volatile int32_t t44 = 227464;

	t44 = ((x241%(x242%x243))<x244);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x245 = 28U;
	int32_t x246 = INT32_MAX;
	volatile uint32_t x247 = 55023093U;
	int32_t t45 = -1043685788;

	t45 = ((x245%(x246%x247))<x248);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x251 = UINT16_MAX;
	uint32_t x252 = 1522952881U;
	int32_t t46 = -26;

	t46 = ((x249%(x250%x251))<x252);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x254 = 55U;
	uint32_t x256 = UINT32_MAX;
	int32_t t47 = 1;

	t47 = ((x253%(x254%x255))<x256);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x257 = INT16_MIN;
	static volatile int16_t x258 = -1;
	uint64_t x259 = 1754LLU;
	uint32_t x260 = 1541U;
	volatile int32_t t48 = 941;

	t48 = ((x257%(x258%x259))<x260);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x261 = 3608U;
	static volatile int16_t x262 = INT16_MAX;
	int64_t x263 = INT64_MAX;

	t49 = ((x261%(x262%x263))<x264);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x266 = INT32_MAX;
	int16_t x267 = INT16_MAX;
	int8_t x268 = INT8_MIN;
	volatile int32_t t50 = 2389211;

	t50 = ((x265%(x266%x267))<x268);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x269 = INT64_MAX;
	uint32_t x270 = UINT32_MAX;
	static volatile int8_t x271 = INT8_MIN;
	uint8_t x272 = UINT8_MAX;
	int32_t t51 = 0;

	t51 = ((x269%(x270%x271))<x272);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x277 = INT64_MAX;
	static int16_t x278 = INT16_MIN;
	int32_t x280 = INT32_MAX;

	t52 = ((x277%(x278%x279))<x280);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x281 = -1;
	int32_t x282 = -2450;
	int32_t x283 = -6375201;
	int16_t x284 = INT16_MAX;
	static volatile int32_t t53 = -1615365;

	t53 = ((x281%(x282%x283))<x284);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x285 = INT64_MAX;
	uint64_t x286 = UINT64_MAX;
	int8_t x288 = -3;
	static volatile int32_t t54 = 58637;

	t54 = ((x285%(x286%x287))<x288);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x297 = 251785816931LLU;
	volatile int64_t x298 = -1LL;
	static volatile int32_t x299 = -28;
	int16_t x300 = 24;
	static int32_t t55 = -5454;

	t55 = ((x297%(x298%x299))<x300);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x301 = INT16_MIN;
	uint64_t x302 = 29594218977017669LLU;
	static volatile int64_t x303 = 2020292947926LL;
	uint16_t x304 = 135U;
	static volatile int32_t t56 = -1283;

	t56 = ((x301%(x302%x303))<x304);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x305 = UINT8_MAX;
	int16_t x306 = 438;
	int32_t x308 = INT32_MIN;
	volatile int32_t t57 = 126812;

	t57 = ((x305%(x306%x307))<x308);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = INT64_MIN;
	volatile int16_t x310 = INT16_MAX;
	static int64_t x312 = -11417616LL;
	volatile int32_t t58 = -235550921;

	t58 = ((x309%(x310%x311))<x312);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int8_t x314 = 6;
	static uint16_t x315 = UINT16_MAX;
	static uint64_t x316 = 8239389698473LLU;
	int32_t t59 = 149667;

	t59 = ((x313%(x314%x315))<x316);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x318 = 53U;
	int32_t x319 = INT32_MAX;
	static int32_t t60 = -253264;

	t60 = ((x317%(x318%x319))<x320);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x321 = -1;
	uint32_t x322 = 40U;
	int64_t x323 = INT64_MIN;
	int64_t x324 = INT64_MAX;
	int32_t t61 = 7079;

	t61 = ((x321%(x322%x323))<x324);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x327 = -178;
	uint32_t x328 = 10989476U;
	int32_t t62 = -246895352;

	t62 = ((x325%(x326%x327))<x328);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x337 = 7565829623705LLU;
	int16_t x338 = INT16_MIN;
	int16_t x339 = -33;
	int32_t x340 = INT32_MIN;
	volatile int32_t t63 = -311881460;

	t63 = ((x337%(x338%x339))<x340);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = 17;
	static int64_t x343 = INT64_MIN;

	t64 = ((x341%(x342%x343))<x344);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x345 = 12U;
	static int64_t x346 = 1LL;
	int32_t x348 = INT32_MAX;
	static volatile int32_t t65 = -119981223;

	t65 = ((x345%(x346%x347))<x348);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x349 = UINT64_MAX;
	static volatile uint64_t x350 = 95330283971801709LLU;
	static uint16_t x351 = 7513U;
	volatile int32_t t66 = 4464949;

	t66 = ((x349%(x350%x351))<x352);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x355 = -192423760;
	volatile int64_t x356 = -952402LL;

	t67 = ((x353%(x354%x355))<x356);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x357 = 276512469594607LL;
	static int16_t x358 = INT16_MIN;
	static volatile uint32_t x360 = 386606092U;
	int32_t t68 = 2776;

	t68 = ((x357%(x358%x359))<x360);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x375 = -752684;
	int32_t x376 = INT32_MIN;
	int32_t t69 = -141543;

	t69 = ((x373%(x374%x375))<x376);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x377 = 6459432LLU;
	int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MAX;
	static int64_t x380 = -312933759173615517LL;

	t70 = ((x377%(x378%x379))<x380);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x381 = INT16_MAX;
	uint8_t x382 = 24U;
	volatile uint64_t x383 = 464524953040973525LLU;
	static volatile uint8_t x384 = UINT8_MAX;
	static volatile int32_t t71 = 73012;

	t71 = ((x381%(x382%x383))<x384);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x385 = -231;
	static int32_t x386 = INT32_MAX;
	int16_t x387 = -2943;
	volatile uint16_t x388 = 65U;
	volatile int32_t t72 = 7564;

	t72 = ((x385%(x386%x387))<x388);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x389 = INT64_MAX;
	int16_t x391 = -1824;
	int16_t x392 = -1;
	int32_t t73 = 522787;

	t73 = ((x389%(x390%x391))<x392);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x393 = INT32_MIN;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = -3;
	static volatile int32_t t74 = 178;

	t74 = ((x393%(x394%x395))<x396);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x398 = 2110154LLU;
	uint64_t x400 = 295029700244475904LLU;
	int32_t t75 = 0;

	t75 = ((x397%(x398%x399))<x400);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x407 = 28194LL;
	volatile int32_t t76 = 3;

	t76 = ((x405%(x406%x407))<x408);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x409 = 1;
	uint64_t x411 = 5411219140LLU;
	uint32_t x412 = UINT32_MAX;
	int32_t t77 = 4948;

	t77 = ((x409%(x410%x411))<x412);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x417 = 3620U;
	int16_t x418 = INT16_MAX;
	volatile int16_t x419 = 1142;
	uint8_t x420 = 109U;

	t78 = ((x417%(x418%x419))<x420);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x422 = -96;
	static uint32_t x423 = 668U;
	static int8_t x424 = INT8_MAX;
	volatile int32_t t79 = 94730;

	t79 = ((x421%(x422%x423))<x424);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x425 = UINT8_MAX;
	int16_t x426 = INT16_MIN;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = -7;
	int32_t t80 = 74987901;

	t80 = ((x425%(x426%x427))<x428);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x429 = INT32_MAX;
	int8_t x430 = -4;
	volatile int64_t x431 = INT64_MAX;
	uint8_t x432 = UINT8_MAX;
	static int32_t t81 = -1285;

	t81 = ((x429%(x430%x431))<x432);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x441 = 1;
	volatile int32_t x442 = INT32_MAX;
	int64_t x443 = INT64_MIN;
	static volatile int8_t x444 = -6;
	int32_t t82 = 4;

	t82 = ((x441%(x442%x443))<x444);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x445 = INT16_MAX;
	static int16_t x446 = INT16_MIN;
	int16_t x448 = -1;
	volatile int32_t t83 = 26895361;

	t83 = ((x445%(x446%x447))<x448);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x449 = UINT16_MAX;
	int64_t x450 = INT64_MIN;
	uint64_t x451 = 11675815958827314LLU;
	uint32_t x452 = UINT32_MAX;
	int32_t t84 = -62353;

	t84 = ((x449%(x450%x451))<x452);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x462 = INT16_MIN;
	int8_t x463 = INT8_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t85 = 41;

	t85 = ((x461%(x462%x463))<x464);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x465 = 866559324U;
	uint16_t x466 = UINT16_MAX;
	uint16_t x467 = 6U;
	uint64_t x468 = 34441701505542LLU;
	volatile int32_t t86 = 0;

	t86 = ((x465%(x466%x467))<x468);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x470 = 1036942972521414LLU;
	uint64_t x471 = 75LLU;
	static int8_t x472 = -1;

	t87 = ((x469%(x470%x471))<x472);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x473 = UINT16_MAX;

	t88 = ((x473%(x474%x475))<x476);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x477 = -8;
	int32_t x478 = INT32_MIN;
	uint16_t x480 = UINT16_MAX;
	static int32_t t89 = 1543066;

	t89 = ((x477%(x478%x479))<x480);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x481 = 52176732631442317LLU;
	int8_t x484 = INT8_MIN;

	t90 = ((x481%(x482%x483))<x484);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x487 = UINT16_MAX;
	uint32_t x488 = 2019493169U;
	static volatile int32_t t91 = -48331;

	t91 = ((x485%(x486%x487))<x488);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x495 = INT64_MIN;

	t92 = ((x493%(x494%x495))<x496);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x498 = -1;
	int8_t x499 = 18;
	static int16_t x500 = -1;
	volatile int32_t t93 = -16353946;

	t93 = ((x497%(x498%x499))<x500);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x502 = 11U;
	int64_t x503 = INT64_MIN;
	int32_t t94 = -12580;

	t94 = ((x501%(x502%x503))<x504);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x505 = 5954273258548LL;
	int64_t x506 = 880593611LL;
	static uint32_t x507 = UINT32_MAX;
	int16_t x508 = -7576;
	static int32_t t95 = -73114;

	t95 = ((x505%(x506%x507))<x508);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x514 = 3;
	int64_t x515 = -640290173256LL;
	static volatile uint8_t x516 = 7U;
	static int32_t t96 = -1707;

	t96 = ((x513%(x514%x515))<x516);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x517 = 3006U;
	static int16_t x518 = INT16_MIN;
	static uint16_t x519 = 730U;
	int8_t x520 = -41;

	t97 = ((x517%(x518%x519))<x520);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x522 = 2926U;
	static uint64_t x523 = 8287489087714248603LLU;
	int16_t x524 = INT16_MIN;
	volatile int32_t t98 = 76;

	t98 = ((x521%(x522%x523))<x524);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x525 = INT32_MAX;
	static uint64_t x527 = 98LLU;
	uint32_t x528 = 121244061U;
	int32_t t99 = 2;

	t99 = ((x525%(x526%x527))<x528);

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

