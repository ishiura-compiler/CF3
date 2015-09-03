#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = -61;
int8_t x17 = -1;
uint64_t x18 = UINT64_MAX;
static int8_t x20 = -1;
uint32_t t7 = 229355718U;
volatile int8_t x33 = 0;
int32_t x37 = INT32_MAX;
uint16_t x51 = 736U;
int32_t t14 = 56234;
int64_t t15 = -234LL;
static uint16_t x66 = 2653U;
static int32_t x71 = 8;
int8_t x73 = -1;
volatile int8_t x75 = INT8_MIN;
uint8_t x76 = 114U;
static int32_t x81 = -1;
volatile int32_t x82 = 2;
int32_t t20 = -3;
int8_t x85 = 29;
volatile int64_t x86 = -1LL;
int64_t x91 = -1LL;
int32_t t23 = 149;
static uint32_t x98 = 63U;
uint8_t x100 = 109U;
static uint16_t x102 = 3U;
static volatile uint64_t t25 = 4592367488769LLU;
volatile int64_t x115 = -1LL;
volatile uint32_t t26 = 87788U;
int32_t x119 = INT32_MAX;
int8_t x123 = -21;
volatile int16_t x124 = -1;
volatile uint64_t x130 = UINT64_MAX;
volatile int32_t x132 = INT32_MAX;
volatile uint32_t x138 = UINT32_MAX;
int32_t t32 = -2;
int16_t x145 = 14847;
static uint16_t x167 = 59U;
uint16_t x168 = UINT16_MAX;
static int32_t t36 = -1557;
static volatile int32_t x171 = INT32_MIN;
static volatile int64_t x182 = INT64_MIN;
volatile int32_t t40 = 599711;
uint16_t x185 = 2U;
uint16_t x186 = 4U;
volatile uint32_t t41 = 189098U;
uint32_t x189 = 247796772U;
static int16_t x192 = INT16_MIN;
int64_t x194 = 9144231915LL;
volatile int32_t t44 = -31;
volatile uint64_t x202 = 3940684928962LLU;
int16_t x208 = INT16_MIN;
volatile int64_t x211 = 225586LL;
volatile uint8_t x213 = 0U;
static int16_t x215 = 6;
uint64_t x220 = 16347511047301LLU;
static uint64_t x226 = 4LLU;
static int64_t x227 = INT64_MIN;
static int32_t x231 = INT32_MIN;
static uint16_t x246 = 367U;
static uint16_t x255 = UINT16_MAX;
uint32_t x256 = UINT32_MAX;
volatile int32_t t56 = 56648;
volatile uint32_t t58 = 22202811U;
static int16_t x270 = 978;
static volatile int32_t t59 = 119906716;
volatile uint64_t x273 = 4720174819857LLU;
static int8_t x276 = INT8_MAX;
int32_t t60 = 0;
uint32_t x277 = 1329U;
uint32_t t61 = 3U;
int32_t t63 = 264418;
uint64_t x317 = 55330342814684708LLU;
int64_t x319 = -389494504203723LL;
int16_t x325 = 0;
static int32_t x326 = INT32_MAX;
static int32_t x334 = INT32_MIN;
int16_t x336 = 508;
int64_t x337 = 3192LL;
int8_t x339 = INT8_MIN;
static uint64_t x341 = UINT64_MAX;
volatile uint16_t x342 = 1419U;
int16_t x345 = 184;
uint64_t x346 = 237689646LLU;
uint16_t x348 = UINT16_MAX;
int32_t x349 = 88792998;
static int32_t x351 = INT32_MAX;
uint8_t x352 = UINT8_MAX;
volatile int32_t t76 = -2;
volatile int16_t x356 = 858;
static int64_t x359 = -68573380641177LL;
uint8_t x361 = 0U;
static int64_t x364 = INT64_MIN;
int64_t x367 = -206LL;
static volatile int8_t x370 = INT8_MIN;
static int64_t x382 = -168031LL;
static uint64_t x384 = 23056018475LLU;
uint64_t t83 = 32446423923LLU;
volatile uint64_t x391 = 52023109049LLU;
static volatile int32_t t84 = 249107;
uint32_t x396 = 9645163U;
int8_t x419 = INT8_MIN;
uint8_t x423 = 45U;
int64_t x437 = -1LL;
uint64_t x445 = 2210316048347812001LLU;
volatile uint16_t x446 = 195U;
volatile int64_t t96 = 0LL;
int64_t x449 = INT64_MIN;
int16_t x450 = 1068;
int16_t x455 = INT16_MIN;
int32_t t98 = -1;
uint16_t x458 = UINT16_MAX;


void f0(void) {
	volatile uint64_t x1 = UINT64_MAX;
	int64_t x2 = INT64_MIN;
	int8_t x3 = INT8_MAX;
	volatile uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 16150312U;

	t0 = (((x1+x2)<x3)%x4);

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -1;
	int8_t x6 = 53;
	volatile int64_t x7 = -1LL;
	int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -235450611;

	t1 = (((x5+x6)<x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	int16_t x10 = INT16_MIN;
	int16_t x11 = INT16_MAX;
	int32_t t2 = -477973710;

	t2 = (((x9+x10)<x11)%x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int64_t x14 = -749242LL;
	uint64_t x15 = 199122371670111550LLU;
	uint8_t x16 = UINT8_MAX;
	static volatile int32_t t3 = -36;

	t3 = (((x13+x14)<x15)%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x19 = INT8_MIN;
	volatile int32_t t4 = -32316526;

	t4 = (((x17+x18)<x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 7U;
	uint8_t x22 = 63U;
	volatile uint64_t x23 = UINT64_MAX;
	uint16_t x24 = UINT16_MAX;
	int32_t t5 = 37475;

	t5 = (((x21+x22)<x23)%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = UINT16_MAX;
	static int16_t x26 = INT16_MIN;
	static volatile int32_t x27 = INT32_MIN;
	uint8_t x28 = 52U;
	static volatile int32_t t6 = -31105;

	t6 = (((x25+x26)<x27)%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	int8_t x30 = -3;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = UINT32_MAX;

	t7 = (((x29+x30)<x31)%x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MAX;
	static uint64_t x35 = UINT64_MAX;
	int32_t x36 = -1;
	static volatile int32_t t8 = 23;

	t8 = (((x33+x34)<x35)%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MIN;
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;
	static int64_t t9 = -156594LL;

	t9 = (((x37+x38)<x39)%x40);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	int8_t x42 = INT8_MAX;
	int8_t x43 = 1;
	volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t10 = 315;

	t10 = (((x41+x42)<x43)%x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	uint8_t x46 = 56U;
	int8_t x47 = -1;
	int8_t x48 = INT8_MIN;
	int32_t t11 = 247721;

	t11 = (((x45+x46)<x47)%x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -7902;
	int32_t x50 = 340;
	int64_t x52 = 465298525146821312LL;
	int64_t t12 = 11143213152LL;

	t12 = (((x49+x50)<x51)%x52);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	static int64_t x54 = 36295705044607638LL;
	uint32_t x55 = 1243734782U;
	static uint8_t x56 = UINT8_MAX;
	static int32_t t13 = -1450;

	t13 = (((x53+x54)<x55)%x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = -1;
	uint16_t x59 = 198U;
	int32_t x60 = INT32_MAX;

	t14 = (((x57+x58)<x59)%x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 1U;
	int16_t x62 = INT16_MIN;
	static uint8_t x63 = UINT8_MAX;
	int64_t x64 = 10715467513196713LL;

	t15 = (((x61+x62)<x63)%x64);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	static uint64_t x67 = UINT64_MAX;
	uint32_t x68 = 127481U;
	uint32_t t16 = 3U;

	t16 = (((x65+x66)<x67)%x68);

	if (t16 != 1U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	static int32_t x70 = -1;
	uint64_t x72 = 7087679LLU;
	volatile uint64_t t17 = 2787721807LLU;

	t17 = (((x69+x70)<x71)%x72);

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = 0;
	int32_t t18 = 1004;

	t18 = (((x73+x74)<x75)%x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MAX;
	volatile int64_t x79 = INT64_MIN;
	static int32_t x80 = INT32_MIN;
	int32_t t19 = 2539;

	t19 = (((x77+x78)<x79)%x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint8_t x83 = 1U;
	static int8_t x84 = INT8_MAX;

	t20 = (((x81+x82)<x83)%x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x87 = 1U;
	volatile int16_t x88 = -30;
	int32_t t21 = 47253;

	t21 = (((x85+x86)<x87)%x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static int16_t x90 = 0;
	volatile uint16_t x92 = UINT16_MAX;
	int32_t t22 = -5;

	t22 = (((x89+x90)<x91)%x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile uint8_t x94 = 8U;
	volatile int16_t x95 = -1;
	int16_t x96 = -86;

	t23 = (((x93+x94)<x95)%x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -45085;
	volatile int8_t x99 = INT8_MIN;
	static volatile int32_t t24 = 914958;

	t24 = (((x97+x98)<x99)%x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	uint64_t x103 = 355LLU;
	volatile uint64_t x104 = 81465201668LLU;

	t25 = (((x101+x102)<x103)%x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x113 = UINT64_MAX;
	int32_t x114 = -1;
	uint32_t x116 = UINT32_MAX;

	t26 = (((x113+x114)<x115)%x116);

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = 3746197086579LL;
	static volatile uint32_t x118 = 295723194U;
	int8_t x120 = -1;
	int32_t t27 = 8084909;

	t27 = (((x117+x118)<x119)%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint8_t x121 = 52U;
	volatile uint32_t x122 = 8345927U;
	int32_t t28 = 13999;

	t28 = (((x121+x122)<x123)%x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = 7111172634059LL;
	volatile int8_t x131 = INT8_MAX;
	static int32_t t29 = 2;

	t29 = (((x129+x130)<x131)%x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 66U;
	static uint16_t x134 = 3U;
	int16_t x135 = 274;
	uint64_t x136 = 39299753808LLU;
	volatile uint64_t t30 = 3365845184LLU;

	t30 = (((x133+x134)<x135)%x136);

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x137 = 1205U;
	int64_t x139 = 7330998149821LL;
	uint32_t x140 = 3918U;
	uint32_t t31 = 5U;

	t31 = (((x137+x138)<x139)%x140);

	if (t31 != 1U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x141 = INT16_MIN;
	uint16_t x142 = 9U;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MIN;

	t32 = (((x141+x142)<x143)%x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x146 = UINT8_MAX;
	uint64_t x147 = 20423LLU;
	uint8_t x148 = 1U;
	volatile int32_t t33 = 5;

	t33 = (((x145+x146)<x147)%x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x153 = INT16_MAX;
	volatile int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	volatile int32_t x156 = INT32_MIN;
	volatile int32_t t34 = -77;

	t34 = (((x153+x154)<x155)%x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x157 = 0;
	int8_t x158 = INT8_MIN;
	volatile int32_t x159 = INT32_MAX;
	int32_t x160 = -18685445;
	int32_t t35 = -35584;

	t35 = (((x157+x158)<x159)%x160);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x165 = 1710111U;
	static int64_t x166 = -1LL;

	t36 = (((x165+x166)<x167)%x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	uint16_t x170 = UINT16_MAX;
	int64_t x172 = INT64_MIN;
	int64_t t37 = -210782853LL;

	t37 = (((x169+x170)<x171)%x172);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = -1;
	int16_t x174 = INT16_MAX;
	int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t38 = -1974;

	t38 = (((x173+x174)<x175)%x176);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 3223U;
	int32_t x178 = 1019;
	uint64_t x179 = 46003142LLU;
	volatile uint64_t x180 = 11LLU;
	uint64_t t39 = 349152699LLU;

	t39 = (((x177+x178)<x179)%x180);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x181 = UINT32_MAX;
	static int8_t x183 = INT8_MAX;
	int32_t x184 = -1;

	t40 = (((x181+x182)<x183)%x184);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x187 = 0;
	uint32_t x188 = 4U;

	t41 = (((x185+x186)<x187)%x188);

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x190 = UINT8_MAX;
	int16_t x191 = -1;
	int32_t t42 = 129;

	t42 = (((x189+x190)<x191)%x192);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x193 = 4;
	static uint64_t x195 = 34LLU;
	int64_t x196 = INT64_MIN;
	static int64_t t43 = -12073523482093378LL;

	t43 = (((x193+x194)<x195)%x196);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x197 = INT8_MAX;
	int8_t x198 = 1;
	volatile uint16_t x199 = 0U;
	uint8_t x200 = 30U;

	t44 = (((x197+x198)<x199)%x200);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	uint64_t x203 = UINT64_MAX;
	uint32_t x204 = 46754084U;
	volatile uint32_t t45 = 1821136U;

	t45 = (((x201+x202)<x203)%x204);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x205 = 1U;
	static volatile int32_t x206 = INT32_MIN;
	uint64_t x207 = 15228971346LLU;
	int32_t t46 = -771;

	t46 = (((x205+x206)<x207)%x208);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x209 = INT64_MAX;
	int32_t x210 = INT32_MIN;
	int16_t x212 = -1;
	volatile int32_t t47 = -92;

	t47 = (((x209+x210)<x211)%x212);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x214 = INT16_MAX;
	int16_t x216 = -1;
	volatile int32_t t48 = 6;

	t48 = (((x213+x214)<x215)%x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = 81;
	static int8_t x218 = INT8_MIN;
	int64_t x219 = -39513407LL;
	volatile uint64_t t49 = 17LLU;

	t49 = (((x217+x218)<x219)%x220);

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x221 = 15730U;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -1600;
	static volatile int64_t x224 = -31717133906917LL;
	static int64_t t50 = -54LL;

	t50 = (((x221+x222)<x223)%x224);

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x225 = UINT8_MAX;
	uint64_t x228 = 130424206998265449LLU;
	static volatile uint64_t t51 = 128066355932678442LLU;

	t51 = (((x225+x226)<x227)%x228);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x229 = 601U;
	int16_t x230 = -1;
	int8_t x232 = INT8_MIN;
	volatile int32_t t52 = 1;

	t52 = (((x229+x230)<x231)%x232);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = INT32_MAX;
	int8_t x238 = INT8_MIN;
	uint64_t x239 = 29027LLU;
	int8_t x240 = INT8_MAX;
	int32_t t53 = -42783516;

	t53 = (((x237+x238)<x239)%x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x245 = -1LL;
	uint8_t x247 = 118U;
	static uint32_t x248 = UINT32_MAX;
	uint32_t t54 = 30U;

	t54 = (((x245+x246)<x247)%x248);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = UINT64_MAX;
	static volatile uint32_t t55 = 5866260U;

	t55 = (((x253+x254)<x255)%x256);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = INT64_MIN;
	static volatile int16_t x258 = 0;
	uint8_t x259 = 7U;
	int32_t x260 = -1811;

	t56 = (((x257+x258)<x259)%x260);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = INT32_MAX;
	static int16_t x262 = -14;
	uint8_t x263 = 0U;
	int64_t x264 = INT64_MIN;
	int64_t t57 = 1369176LL;

	t57 = (((x261+x262)<x263)%x264);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = 1986271;
	uint32_t x267 = 5U;
	uint32_t x268 = UINT32_MAX;

	t58 = (((x265+x266)<x267)%x268);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x269 = 133983581910180651LLU;
	static uint8_t x271 = 13U;
	int32_t x272 = INT32_MIN;

	t59 = (((x269+x270)<x271)%x272);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x274 = 814828805789504LLU;
	int32_t x275 = 30874;

	t60 = (((x273+x274)<x275)%x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x278 = 8115344679LL;
	int16_t x279 = 456;
	uint32_t x280 = UINT32_MAX;

	t61 = (((x277+x278)<x279)%x280);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x281 = 63667474085072LLU;
	volatile int32_t x282 = 99;
	uint64_t x283 = UINT64_MAX;
	int8_t x284 = INT8_MIN;
	int32_t t62 = 41341286;

	t62 = (((x281+x282)<x283)%x284);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x285 = INT8_MAX;
	int32_t x286 = 0;
	uint64_t x287 = 542289281578490756LLU;
	int16_t x288 = INT16_MIN;

	t63 = (((x285+x286)<x287)%x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x289 = INT64_MIN;
	uint8_t x290 = UINT8_MAX;
	static uint32_t x291 = 1469173U;
	int64_t x292 = INT64_MIN;
	volatile int64_t t64 = 0LL;

	t64 = (((x289+x290)<x291)%x292);

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x293 = INT16_MIN;
	uint64_t x294 = 8370400932LLU;
	volatile int8_t x295 = INT8_MIN;
	static int8_t x296 = -1;
	volatile int32_t t65 = -3;

	t65 = (((x293+x294)<x295)%x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x297 = INT8_MAX;
	uint32_t x298 = 1U;
	static volatile int64_t x299 = INT64_MAX;
	volatile int8_t x300 = -1;
	volatile int32_t t66 = 515746;

	t66 = (((x297+x298)<x299)%x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x305 = INT32_MIN;
	static int8_t x306 = 14;
	volatile int16_t x307 = 772;
	static volatile int16_t x308 = INT16_MIN;
	static volatile int32_t t67 = 78109935;

	t67 = (((x305+x306)<x307)%x308);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = 0LL;
	int16_t x314 = -103;
	volatile uint32_t x315 = UINT32_MAX;
	volatile uint64_t x316 = 820LLU;
	uint64_t t68 = 1103LLU;

	t68 = (((x313+x314)<x315)%x316);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x318 = 263671;
	int16_t x320 = INT16_MIN;
	int32_t t69 = -541;

	t69 = (((x317+x318)<x319)%x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x321 = 1144U;
	volatile int8_t x322 = -1;
	static volatile uint8_t x323 = 7U;
	int16_t x324 = -1;
	static volatile int32_t t70 = 2368;

	t70 = (((x321+x322)<x323)%x324);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x327 = INT64_MIN;
	int8_t x328 = INT8_MIN;
	static volatile int32_t t71 = 49583;

	t71 = (((x325+x326)<x327)%x328);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x333 = INT8_MAX;
	int64_t x335 = INT64_MAX;
	int32_t t72 = 0;

	t72 = (((x333+x334)<x335)%x336);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x338 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	static volatile int32_t t73 = 1135;

	t73 = (((x337+x338)<x339)%x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x343 = -1;
	int32_t x344 = INT32_MIN;
	int32_t t74 = 56;

	t74 = (((x341+x342)<x343)%x344);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x347 = UINT8_MAX;
	int32_t t75 = 11794103;

	t75 = (((x345+x346)<x347)%x348);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x350 = 27780099711047248LL;

	t76 = (((x349+x350)<x351)%x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x353 = INT64_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x355 = -26613388231607LL;
	int32_t t77 = -17052895;

	t77 = (((x353+x354)<x355)%x356);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x357 = 9820590LLU;
	int16_t x358 = 4589;
	int64_t x360 = -519202163785LL;
	volatile int64_t t78 = -26453366130925LL;

	t78 = (((x357+x358)<x359)%x360);

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x362 = 9826;
	static int32_t x363 = -1;
	static int64_t t79 = 184780333LL;

	t79 = (((x361+x362)<x363)%x364);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x365 = 0;
	static uint16_t x366 = 9524U;
	uint16_t x368 = UINT16_MAX;
	int32_t t80 = 0;

	t80 = (((x365+x366)<x367)%x368);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x369 = UINT8_MAX;
	int32_t x371 = INT32_MIN;
	volatile int16_t x372 = INT16_MIN;
	static volatile int32_t t81 = -35510797;

	t81 = (((x369+x370)<x371)%x372);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = 1950;
	static int16_t x374 = -2239;
	volatile int16_t x375 = INT16_MIN;
	uint64_t x376 = 19581059666694219LLU;
	volatile uint64_t t82 = 5129LLU;

	t82 = (((x373+x374)<x375)%x376);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x381 = INT8_MIN;
	volatile int64_t x383 = -1LL;

	t83 = (((x381+x382)<x383)%x384);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x389 = 0U;
	int64_t x390 = -2257925767LL;
	int32_t x392 = INT32_MIN;

	t84 = (((x389+x390)<x391)%x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x393 = INT32_MIN;
	volatile uint64_t x394 = 0LLU;
	int32_t x395 = -1;
	volatile uint32_t t85 = 1846775U;

	t85 = (((x393+x394)<x395)%x396);

	if (t85 != 1U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = -3;
	int16_t x402 = INT16_MIN;
	uint8_t x403 = UINT8_MAX;
	uint16_t x404 = UINT16_MAX;
	int32_t t86 = 9497;

	t86 = (((x401+x402)<x403)%x404);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x405 = UINT32_MAX;
	int64_t x406 = 2206334040LL;
	int32_t x407 = 1516038;
	int64_t x408 = INT64_MIN;
	static volatile int64_t t87 = 58694LL;

	t87 = (((x405+x406)<x407)%x408);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x409 = UINT32_MAX;
	int64_t x410 = INT64_MIN;
	static uint64_t x411 = UINT64_MAX;
	int64_t x412 = -12293906608760LL;
	volatile int64_t t88 = -38LL;

	t88 = (((x409+x410)<x411)%x412);

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x413 = -942;
	uint64_t x414 = 27031LLU;
	int64_t x415 = 7273LL;
	volatile uint32_t x416 = 554U;
	volatile uint32_t t89 = 3057544U;

	t89 = (((x413+x414)<x415)%x416);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = -828441;
	uint8_t x418 = 58U;
	int32_t x420 = 12984460;
	volatile int32_t t90 = 546275;

	t90 = (((x417+x418)<x419)%x420);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = INT16_MIN;
	uint64_t x422 = UINT64_MAX;
	int8_t x424 = -42;
	static volatile int32_t t91 = -3037715;

	t91 = (((x421+x422)<x423)%x424);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = UINT32_MAX;
	int32_t x426 = INT32_MAX;
	int32_t x427 = INT32_MIN;
	static volatile int8_t x428 = 2;
	int32_t t92 = 0;

	t92 = (((x425+x426)<x427)%x428);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x433 = -43;
	static int32_t x434 = 14;
	uint32_t x435 = 1506542433U;
	int64_t x436 = -1LL;
	static volatile int64_t t93 = 3932729440338269LL;

	t93 = (((x433+x434)<x435)%x436);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x438 = -1;
	int64_t x439 = -1LL;
	int8_t x440 = -6;
	static int32_t t94 = 612059222;

	t94 = (((x437+x438)<x439)%x440);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x441 = INT8_MAX;
	int8_t x442 = INT8_MAX;
	uint32_t x443 = UINT32_MAX;
	volatile int64_t x444 = INT64_MIN;
	volatile int64_t t95 = -15735821591091248LL;

	t95 = (((x441+x442)<x443)%x444);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x447 = INT16_MIN;
	static volatile int64_t x448 = INT64_MIN;

	t96 = (((x445+x446)<x447)%x448);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x451 = -1LL;
	int16_t x452 = INT16_MIN;
	static int32_t t97 = 120471;

	t97 = (((x449+x450)<x451)%x452);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MIN;
	int64_t x454 = -783069282952LL;
	volatile int32_t x456 = INT32_MIN;

	t98 = (((x453+x454)<x455)%x456);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x457 = -1;
	int8_t x459 = INT8_MIN;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t99 = 451791U;

	t99 = (((x457+x458)<x459)%x460);

	if (t99 != 0U) { NG(); } else { ; }
	
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

