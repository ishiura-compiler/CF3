#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x2 = 35952LLU;
static int64_t x3 = -1LL;
int8_t x4 = 3;
int32_t x6 = -1;
int32_t x14 = -1671;
volatile int8_t x15 = -1;
volatile uint32_t t2 = UINT32_MAX;
int8_t x27 = -2;
uint64_t t3 = UINT64_MAX;
int64_t x29 = -1LL;
volatile int8_t x31 = -4;
uint64_t x34 = 1LLU;
int8_t x38 = -42;
uint16_t x43 = 3U;
int16_t x44 = -1;
uint16_t x60 = 40U;
uint64_t x62 = 61LLU;
int64_t t14 = -124670LL;
static uint16_t x85 = 0U;
volatile int64_t x87 = INT64_MIN;
int16_t x90 = INT16_MAX;
int8_t x91 = -1;
uint64_t t18 = UINT64_MAX;
static uint8_t x106 = UINT8_MAX;
static volatile uint16_t x119 = 26123U;
uint8_t x130 = 8U;
static uint32_t x133 = 15U;
static uint8_t x166 = 30U;
int64_t x167 = INT64_MIN;
volatile uint64_t x181 = 46621142703337356LLU;
int16_t x193 = INT16_MIN;
uint64_t x195 = 3804082743850934LLU;
int64_t x199 = -7846171004LL;
volatile int32_t t37 = 17093;
uint8_t x213 = 1U;
int64_t x216 = -3269728LL;
static int16_t x234 = -1;
int8_t x236 = 1;
int16_t x246 = INT16_MIN;
uint8_t x249 = 102U;
int16_t x258 = INT16_MIN;
volatile int32_t x259 = -1;
volatile uint64_t x265 = UINT64_MAX;
uint64_t t48 = UINT64_MAX;
static uint8_t x272 = UINT8_MAX;
int64_t x283 = INT64_MAX;
volatile int32_t t52 = 6;
uint8_t x307 = UINT8_MAX;
int32_t x309 = -1;
int32_t x311 = INT32_MIN;
int64_t t55 = 8LL;
int8_t x315 = -1;
int64_t x322 = -32232731LL;
int16_t x323 = INT16_MIN;
volatile uint32_t x325 = 819254957U;
static int16_t x337 = INT16_MAX;
volatile uint16_t x342 = 3101U;
int32_t t61 = -178123979;
int16_t x348 = INT16_MIN;
uint64_t x350 = 5856050027124369894LLU;
int16_t x352 = INT16_MAX;
volatile uint64_t x356 = UINT64_MAX;
int16_t x362 = 1;
uint8_t x363 = 30U;
int64_t x368 = -5105941612269892LL;
volatile uint8_t x373 = UINT8_MAX;
uint16_t x392 = UINT16_MAX;
static volatile int16_t x411 = -1;
volatile uint16_t x412 = UINT16_MAX;
static volatile int32_t x419 = -1;
uint64_t x420 = 126468432327839LLU;
uint8_t x423 = UINT8_MAX;
int16_t x428 = INT16_MIN;
int64_t t76 = 1215557935899LL;
int16_t x435 = 0;
static int64_t x436 = INT64_MAX;
volatile int64_t t77 = INT64_MAX;
int64_t x443 = -171LL;
static volatile uint64_t t78 = UINT64_MAX;
static int8_t x446 = INT8_MAX;
int8_t x447 = INT8_MAX;
static volatile int32_t t79 = -12525;
static uint16_t x464 = 1U;
uint64_t t82 = 68116110796737264LLU;
static int16_t x467 = -36;
uint64_t t84 = 47064735580LLU;
uint8_t x486 = UINT8_MAX;
volatile uint8_t x495 = UINT8_MAX;
static volatile uint64_t t91 = 128610168999119119LLU;
int8_t x511 = INT8_MIN;
int64_t x512 = INT64_MAX;
static uint64_t t94 = UINT64_MAX;
static volatile uint64_t x547 = 6617027946184323LLU;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint64_t t0 = UINT64_MAX;

	t0 = (((x1*x2)|x3)|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	static int32_t x7 = -11115881;
	int32_t x8 = INT32_MIN;
	static uint64_t t1 = 3256556809LLU;

	t1 = (((x5*x6)|x7)|x8);

	if (t1 != 18446744073698435735LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = 875U;
	volatile int16_t x16 = INT16_MIN;

	t2 = (((x13*x14)|x15)|x16);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x25 = 41903305473047695LLU;
	static int8_t x26 = INT8_MAX;
	volatile int16_t x28 = 0;

	t3 = (((x25*x26)|x27)|x28);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x30 = 602;
	volatile uint32_t x32 = 21794U;
	int64_t t4 = -1LL;

	t4 = (((x29*x30)|x31)|x32);

	if (t4 != -2LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = -1;
	volatile uint64_t x35 = UINT64_MAX;
	uint8_t x36 = 6U;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (((x33*x34)|x35)|x36);

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = 4693;
	int64_t x39 = INT64_MIN;
	uint16_t x40 = 788U;
	volatile int64_t t6 = -133213609775049337LL;

	t6 = (((x37*x38)|x39)|x40);

	if (t6 != -196834LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = INT8_MIN;
	static int64_t x42 = -1LL;
	volatile int64_t t7 = -62002981LL;

	t7 = (((x41*x42)|x43)|x44);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x45 = UINT32_MAX;
	int8_t x46 = 51;
	uint8_t x47 = UINT8_MAX;
	uint16_t x48 = 73U;
	volatile uint32_t t8 = UINT32_MAX;

	t8 = (((x45*x46)|x47)|x48);

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MIN;
	uint16_t x55 = 19800U;
	static uint8_t x56 = 30U;
	uint64_t t9 = 651002548121121259LLU;

	t9 = (((x53*x54)|x55)|x56);

	if (t9 != 2147503454LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x57 = 16LLU;
	static int64_t x58 = 93042252082245LL;
	int32_t x59 = INT32_MIN;
	static volatile uint64_t t10 = 411602LLU;

	t10 = (((x57*x58)|x59)|x60);

	if (t10 != 18446744073275884664LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x61 = -108575781;
	volatile int16_t x63 = -4774;
	volatile int8_t x64 = INT8_MAX;
	volatile uint64_t t11 = 211128759280616LLU;

	t11 = (((x61*x62)|x63)|x64);

	if (t11 != 18446744073709547391LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -1;
	uint32_t x70 = UINT32_MAX;
	uint64_t x71 = UINT64_MAX;
	volatile int32_t x72 = INT32_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (((x69*x70)|x71)|x72);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = INT8_MAX;
	int16_t x74 = INT16_MAX;
	volatile uint8_t x75 = 0U;
	uint32_t x76 = 8U;
	uint32_t t13 = 6934743U;

	t13 = (((x73*x74)|x75)|x76);

	if (t13 != 4161417U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x77 = UINT8_MAX;
	static volatile int64_t x78 = -1LL;
	int16_t x79 = -39;
	static uint32_t x80 = 2107566U;

	t14 = (((x77*x78)|x79)|x80);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x86 = INT32_MIN;
	static uint32_t x88 = UINT32_MAX;
	static int64_t t15 = 239LL;

	t15 = (((x85*x86)|x87)|x88);

	if (t15 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 43U;
	uint64_t x92 = 73309462595LLU;
	uint64_t t16 = UINT64_MAX;

	t16 = (((x89*x90)|x91)|x92);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -1LL;
	int32_t x94 = INT32_MAX;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MIN;
	volatile int64_t t17 = 2530057795LL;

	t17 = (((x93*x94)|x95)|x96);

	if (t17 != -32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x97 = 844LLU;
	volatile uint32_t x98 = UINT32_MAX;
	static volatile int16_t x99 = -1;
	static uint8_t x100 = 6U;

	t18 = (((x97*x98)|x99)|x100);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x101 = 74290863684368588LLU;
	volatile int8_t x102 = INT8_MIN;
	static int32_t x103 = -1;
	uint8_t x104 = 1U;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x101*x102)|x103)|x104);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = UINT64_MAX;
	uint64_t x107 = 272LLU;
	int32_t x108 = -665488;
	static uint64_t t20 = 667010702987LLU;

	t20 = (((x105*x106)|x107)|x108);

	if (t20 != 18446744073709551473LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x109 = 3892163LLU;
	uint32_t x110 = UINT32_MAX;
	static int16_t x111 = -1;
	static uint64_t x112 = 248042557533239LLU;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (((x109*x110)|x111)|x112);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x117 = INT8_MIN;
	static volatile int8_t x118 = INT8_MIN;
	uint32_t x120 = 34359983U;
	uint32_t t22 = 1542385531U;

	t22 = (((x117*x118)|x119)|x120);

	if (t22 != 34369199U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x125 = 40893LLU;
	int64_t x126 = -1LL;
	volatile int8_t x127 = -1;
	int32_t x128 = 0;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x125*x126)|x127)|x128);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 43U;
	static volatile uint16_t x131 = 7057U;
	int8_t x132 = INT8_MAX;
	int32_t t24 = 0;

	t24 = (((x129*x130)|x131)|x132);

	if (t24 != 7167) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x134 = 8006U;
	int32_t x135 = INT32_MIN;
	int16_t x136 = INT16_MIN;
	uint32_t t25 = 104054322U;

	t25 = (((x133*x134)|x135)|x136);

	if (t25 != 4294956314U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x142 = 15344;
	int16_t x143 = 35;
	uint16_t x144 = 6371U;
	volatile uint64_t t26 = 3004LLU;

	t26 = (((x141*x142)|x143)|x144);

	if (t26 != 18446744073709542643LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	volatile int8_t x146 = -3;
	int16_t x147 = -1;
	uint8_t x148 = 116U;
	int32_t t27 = 29484;

	t27 = (((x145*x146)|x147)|x148);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = 4950414459947960LLU;
	uint8_t x162 = 24U;
	uint8_t x163 = 48U;
	int16_t x164 = 139;
	volatile uint64_t t28 = 1382LLU;

	t28 = (((x161*x162)|x163)|x164);

	if (t28 != 118809947038751227LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x165 = INT8_MAX;
	volatile uint16_t x168 = 13344U;
	int64_t t29 = 4370370733184LL;

	t29 = (((x165*x166)|x167)|x168);

	if (t29 != -9223372036854759710LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x177 = 7U;
	uint32_t x178 = 10537U;
	uint8_t x179 = 72U;
	int8_t x180 = -1;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = (((x177*x178)|x179)|x180);

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x182 = UINT8_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	static uint64_t t31 = 1692628395423LLU;

	t31 = (((x181*x182)|x183)|x184);

	if (t31 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x185 = 76214U;
	uint16_t x186 = UINT16_MAX;
	int8_t x187 = INT8_MIN;
	uint64_t x188 = UINT64_MAX;
	uint64_t t32 = UINT64_MAX;

	t32 = (((x185*x186)|x187)|x188);

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x189 = UINT64_MAX;
	int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	static uint8_t x192 = 104U;
	volatile uint64_t t33 = 2653242LLU;

	t33 = (((x189*x190)|x191)|x192);

	if (t33 != 9223372039002259560LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	static uint64_t t34 = 29684575241143LLU;

	t34 = (((x193*x194)|x195)|x196);

	if (t34 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x197 = 56439629087177LLU;
	int64_t x198 = 6LL;
	int16_t x200 = INT16_MIN;
	uint64_t t35 = 7782677LLU;

	t35 = (((x197*x198)|x199)|x200);

	if (t35 != 18446744073709547190LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x201 = 3149668142192LLU;
	uint8_t x202 = 43U;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (((x201*x202)|x203)|x204);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x205 = INT8_MIN;
	volatile uint16_t x206 = 8U;
	uint16_t x207 = 13U;
	int8_t x208 = -1;

	t37 = (((x205*x206)|x207)|x208);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x209 = 5201010147LL;
	int8_t x210 = -1;
	int64_t x211 = 2659973982033LL;
	int64_t x212 = INT64_MIN;
	static int64_t t38 = 1914632645271385LL;

	t38 = (((x209*x210)|x211)|x212);

	if (t38 != -603986083LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x214 = INT16_MIN;
	uint64_t x215 = UINT64_MAX;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = (((x213*x214)|x215)|x216);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x225 = INT16_MIN;
	static volatile uint8_t x226 = 45U;
	static uint8_t x227 = UINT8_MAX;
	uint32_t x228 = 446512123U;
	volatile uint32_t t40 = 6785320U;

	t40 = (((x225*x226)|x227)|x228);

	if (t40 != 4294818815U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x233 = 55U;
	uint8_t x235 = UINT8_MAX;
	static int32_t t41 = -235;

	t41 = (((x233*x234)|x235)|x236);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x237 = INT8_MIN;
	static int64_t x238 = -2500385796720736LL;
	static int64_t x239 = INT64_MAX;
	int32_t x240 = -1;
	volatile int64_t t42 = -817388571657305LL;

	t42 = (((x237*x238)|x239)|x240);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x241 = -1;
	int8_t x242 = INT8_MAX;
	uint8_t x243 = UINT8_MAX;
	uint16_t x244 = UINT16_MAX;
	int32_t t43 = 0;

	t43 = (((x241*x242)|x243)|x244);

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MIN;
	int8_t x247 = INT8_MAX;
	int64_t x248 = -1LL;
	int64_t t44 = -453LL;

	t44 = (((x245*x246)|x247)|x248);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x250 = -78218;
	int16_t x251 = -1;
	int64_t x252 = INT64_MIN;
	int64_t t45 = 6669802986LL;

	t45 = (((x249*x250)|x251)|x252);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x253 = INT8_MAX;
	uint16_t x254 = 26324U;
	int64_t x255 = -763LL;
	uint32_t x256 = 26U;
	static int64_t t46 = 977227566440LL;

	t46 = (((x253*x254)|x255)|x256);

	if (t46 != -193LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x257 = INT8_MIN;
	int64_t x260 = INT64_MAX;
	volatile int64_t t47 = -103133178373310LL;

	t47 = (((x257*x258)|x259)|x260);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x266 = -1;
	int8_t x267 = INT8_MIN;
	static int16_t x268 = -1;

	t48 = (((x265*x266)|x267)|x268);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x269 = 10U;
	static uint64_t x270 = 2037LLU;
	static int64_t x271 = INT64_MIN;
	volatile uint64_t t49 = 3172502714070371LLU;

	t49 = (((x269*x270)|x271)|x272);

	if (t49 != 9223372036854796287LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x273 = -149;
	static int32_t x274 = -1;
	static int8_t x275 = 1;
	uint16_t x276 = 924U;
	volatile int32_t t50 = 3729474;

	t50 = (((x273*x274)|x275)|x276);

	if (t50 != 925) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x281 = 1535U;
	int8_t x282 = -49;
	int16_t x284 = INT16_MAX;
	int64_t t51 = INT64_MAX;

	t51 = (((x281*x282)|x283)|x284);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = 389U;
	static volatile uint8_t x298 = 0U;
	static int16_t x299 = -11;
	static int32_t x300 = -49;

	t52 = (((x297*x298)|x299)|x300);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x301 = INT64_MIN;
	static int8_t x302 = 1;
	uint64_t x303 = UINT64_MAX;
	int32_t x304 = 57066;
	static volatile uint64_t t53 = UINT64_MAX;

	t53 = (((x301*x302)|x303)|x304);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x305 = -1381LL;
	int8_t x306 = -26;
	static uint8_t x308 = UINT8_MAX;
	volatile int64_t t54 = 87LL;

	t54 = (((x305*x306)|x307)|x308);

	if (t54 != 36095LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x310 = -1LL;
	static uint16_t x312 = 2135U;

	t55 = (((x309*x310)|x311)|x312);

	if (t55 != -2147481513LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x313 = UINT32_MAX;
	uint32_t x314 = 136929U;
	int64_t x316 = INT64_MIN;
	static volatile int64_t t56 = 187283785164295LL;

	t56 = (((x313*x314)|x315)|x316);

	if (t56 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x321 = 52;
	volatile uint8_t x324 = 25U;
	int64_t t57 = 150990582145822LL;

	t57 = (((x321*x322)|x323)|x324);

	if (t57 != -18787LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x326 = INT16_MIN;
	int64_t x327 = INT64_MIN;
	static volatile uint64_t x328 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x325*x326)|x327)|x328);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x329 = -1;
	static int16_t x330 = -1;
	uint32_t x331 = 97871957U;
	static int32_t x332 = INT32_MIN;
	uint32_t t59 = 6234360U;

	t59 = (((x329*x330)|x331)|x332);

	if (t59 != 2245355605U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x338 = 3838239621328LLU;
	int64_t x339 = INT64_MIN;
	volatile int8_t x340 = -7;
	uint64_t t60 = 8110541LLU;

	t60 = (((x337*x338)|x339)|x340);

	if (t60 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x341 = INT16_MAX;
	volatile int32_t x343 = -865;
	uint16_t x344 = 1U;

	t61 = (((x341*x342)|x343)|x344);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x345 = 0;
	int32_t x346 = 1;
	int32_t x347 = -1;
	static volatile int32_t t62 = -333652;

	t62 = (((x345*x346)|x347)|x348);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x349 = UINT8_MAX;
	static uint8_t x351 = 0U;
	uint64_t t63 = 1307531336LLU;

	t63 = (((x349*x350)|x351)|x352);

	if (t63 != 17553231019950211071LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x353 = 0;
	volatile int8_t x354 = 1;
	static int16_t x355 = INT16_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = (((x353*x354)|x355)|x356);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x357 = -4;
	int16_t x358 = 1;
	uint32_t x359 = 739821U;
	volatile uint16_t x360 = 5160U;
	volatile uint32_t t65 = 1627U;

	t65 = (((x357*x358)|x359)|x360);

	if (t65 != 4294967293U) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x361 = INT16_MIN;
	int32_t x364 = 28555;
	volatile int32_t t66 = 12;

	t66 = (((x361*x362)|x363)|x364);

	if (t66 != -4193) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = 1;
	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	int64_t t67 = -62464379LL;

	t67 = (((x365*x366)|x367)|x368);

	if (t67 != -68LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x374 = 12U;
	int8_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (((x373*x374)|x375)|x376);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x385 = 30U;
	int64_t x386 = -836127264365LL;
	uint32_t x387 = UINT32_MAX;
	int8_t x388 = 0;
	static int64_t t69 = -46365723LL;

	t69 = (((x385*x386)|x387)|x388);

	if (t69 != -25082609008641LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x389 = 1735;
	static int16_t x390 = -13668;
	volatile int16_t x391 = -2034;
	int32_t t70 = -129315353;

	t70 = (((x389*x390)|x391)|x392);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x393 = 15;
	static uint16_t x394 = UINT16_MAX;
	volatile uint64_t x395 = 33804538LLU;
	static int64_t x396 = 1972715560918LL;
	static uint64_t t71 = 14LLU;

	t71 = (((x393*x394)|x395)|x396);

	if (t71 != 1972716437503LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x401 = INT32_MIN;
	uint64_t x402 = UINT64_MAX;
	int8_t x403 = -1;
	uint32_t x404 = UINT32_MAX;
	uint64_t t72 = UINT64_MAX;

	t72 = (((x401*x402)|x403)|x404);

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int32_t t73 = 192;

	t73 = (((x409*x410)|x411)|x412);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x417 = -13;
	int8_t x418 = 0;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = (((x417*x418)|x419)|x420);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x421 = 40U;
	uint16_t x422 = 3480U;
	int32_t x424 = 1367026;
	volatile int32_t t75 = 28;

	t75 = (((x421*x422)|x423)|x424);

	if (t75 != 1499135) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x425 = -1LL;
	int32_t x426 = INT32_MIN;
	int64_t x427 = 0LL;

	t76 = (((x425*x426)|x427)|x428);

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x433 = 0;
	int16_t x434 = 927;

	t77 = (((x433*x434)|x435)|x436);

	if (t77 != INT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x441 = INT16_MAX;
	uint64_t x442 = 5606204094LLU;
	int32_t x444 = -1;

	t78 = (((x441*x442)|x443)|x444);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x445 = 3U;
	static int16_t x448 = -1;

	t79 = (((x445*x446)|x447)|x448);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x449 = INT64_MIN;
	uint64_t x450 = 62LLU;
	volatile int64_t x451 = -1LL;
	volatile uint64_t x452 = 1252347865671986LLU;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (((x449*x450)|x451)|x452);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x453 = UINT16_MAX;
	uint8_t x454 = 0U;
	static uint8_t x455 = 1U;
	int16_t x456 = INT16_MAX;
	static int32_t t81 = -4076;

	t81 = (((x453*x454)|x455)|x456);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x461 = 39;
	int64_t x462 = -1LL;
	static uint64_t x463 = 57LLU;

	t82 = (((x461*x462)|x463)|x464);

	if (t82 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x465 = 35392;
	uint16_t x466 = 1U;
	int8_t x468 = INT8_MIN;
	int32_t t83 = 6321;

	t83 = (((x465*x466)|x467)|x468);

	if (t83 != -36) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x473 = UINT64_MAX;
	int16_t x474 = -81;
	uint8_t x475 = 10U;
	volatile uint16_t x476 = 157U;

	t84 = (((x473*x474)|x475)|x476);

	if (t84 != 223LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x481 = 10U;
	int8_t x482 = -1;
	int64_t x483 = -2158213239244466LL;
	uint32_t x484 = UINT32_MAX;
	volatile int64_t t85 = 845836817262256LL;

	t85 = (((x481*x482)|x483)|x484);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint32_t x485 = 44433179U;
	int8_t x487 = -1;
	int32_t x488 = INT32_MIN;
	uint32_t t86 = UINT32_MAX;

	t86 = (((x485*x486)|x487)|x488);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x489 = UINT8_MAX;
	int16_t x490 = -707;
	static uint64_t x491 = 1144139245874251160LLU;
	uint64_t x492 = 62LLU;
	static uint64_t t87 = 1596523107LLU;

	t87 = (((x489*x490)|x491)|x492);

	if (t87 != 18446744073709502463LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x493 = 14135619385LLU;
	uint16_t x494 = 24518U;
	int32_t x496 = -1;
	uint64_t t88 = UINT64_MAX;

	t88 = (((x493*x494)|x495)|x496);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x497 = 5004606801257054LL;
	uint8_t x498 = 0U;
	static int16_t x499 = -1;
	static volatile uint16_t x500 = UINT16_MAX;
	volatile int64_t t89 = -967046871LL;

	t89 = (((x497*x498)|x499)|x500);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x501 = UINT16_MAX;
	int8_t x502 = INT8_MIN;
	uint64_t x503 = UINT64_MAX;
	static int8_t x504 = INT8_MAX;
	volatile uint64_t t90 = UINT64_MAX;

	t90 = (((x501*x502)|x503)|x504);

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x505 = 9003200742256LLU;
	int8_t x506 = INT8_MIN;
	int32_t x507 = INT32_MIN;
	static uint8_t x508 = 30U;

	t91 = (((x505*x506)|x507)|x508);

	if (t91 != 18446744072459536414LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x509 = 6268U;
	int32_t x510 = -1;
	volatile int64_t t92 = -1LL;

	t92 = (((x509*x510)|x511)|x512);

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x513 = 19431U;
	volatile int8_t x514 = 1;
	int8_t x515 = -1;
	int16_t x516 = INT16_MIN;
	int32_t t93 = -22764625;

	t93 = (((x513*x514)|x515)|x516);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x517 = 31306184LLU;
	static int16_t x518 = -1;
	int32_t x519 = INT32_MAX;
	volatile int8_t x520 = INT8_MIN;

	t94 = (((x517*x518)|x519)|x520);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x521 = 458669U;
	volatile uint64_t x522 = UINT64_MAX;
	static uint32_t x523 = 26686922U;
	uint16_t x524 = UINT16_MAX;
	volatile uint64_t t95 = UINT64_MAX;

	t95 = (((x521*x522)|x523)|x524);

	if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x525 = 120880840812LLU;
	volatile uint32_t x526 = 1U;
	int32_t x527 = -1;
	int32_t x528 = -1;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (((x525*x526)|x527)|x528);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x529 = -551200878LL;
	int32_t x530 = INT32_MIN;
	int64_t x531 = 978657LL;
	int64_t x532 = -440183750393612LL;
	volatile int64_t t97 = -101946729998651325LL;

	t97 = (((x529*x530)|x531)|x532);

	if (t97 != -141047867969803LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x533 = UINT64_MAX;
	uint8_t x534 = 2U;
	uint64_t x535 = 1709754890283LLU;
	int16_t x536 = INT16_MIN;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (((x533*x534)|x535)|x536);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x545 = 8225713694165324LLU;
	uint64_t x546 = 113537936LLU;
	volatile int16_t x548 = 124;
	static volatile uint64_t t99 = 268521180781LLU;

	t99 = (((x545*x546)|x547)|x548);

	if (t99 != 8797687549884595967LLU) { NG(); } else { ; }
	
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

