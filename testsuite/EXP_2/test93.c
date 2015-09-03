#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = 1;
int8_t x5 = INT8_MIN;
int16_t x6 = INT16_MIN;
uint32_t x8 = 570243U;
volatile uint32_t t1 = 2151275U;
int8_t x12 = -1;
int8_t x18 = INT8_MIN;
int8_t x19 = INT8_MIN;
int64_t x20 = INT64_MAX;
static int32_t x28 = -1;
int64_t x29 = INT64_MAX;
uint64_t x35 = UINT64_MAX;
static int32_t x44 = 1804712;
uint32_t x49 = 12889009U;
uint32_t x57 = 15709U;
uint16_t x58 = 1699U;
uint32_t x66 = 2109793U;
int8_t x67 = 1;
volatile int64_t x70 = 258707LL;
uint64_t x76 = 598041359LLU;
uint32_t x77 = UINT32_MAX;
uint32_t x79 = 24301204U;
int16_t x81 = INT16_MIN;
int8_t x92 = -1;
volatile int32_t t19 = 521708;
uint32_t t20 = 88U;
uint16_t x103 = 18U;
volatile int32_t t21 = 3;
int16_t x112 = -1;
uint64_t x119 = 54LLU;
int8_t x120 = INT8_MAX;
volatile int32_t t23 = 41433791;
static volatile int64_t x133 = 40031600503239LL;
uint32_t x135 = 13313U;
volatile int16_t x145 = INT16_MIN;
uint16_t x149 = UINT16_MAX;
uint8_t x154 = 66U;
int8_t x168 = INT8_MIN;
int32_t t33 = 1017739;
int32_t x172 = -8538944;
int64_t x184 = -413462253855177LL;
uint32_t x195 = 59092862U;
volatile int32_t t43 = -20159085;
static volatile int64_t x213 = -1LL;
int32_t x216 = -1;
int32_t t46 = 60511;
volatile uint16_t x242 = 2675U;
int64_t x266 = INT64_MIN;
static int8_t x268 = INT8_MAX;
volatile int32_t t51 = -61646;
int64_t x281 = -1LL;
volatile uint16_t x282 = UINT16_MAX;
volatile int64_t t54 = -7329590414242LL;
static int16_t x287 = 18;
volatile int32_t t55 = 43408759;
static uint8_t x291 = UINT8_MAX;
static int16_t x292 = -1;
int64_t x293 = INT64_MAX;
uint16_t x307 = UINT16_MAX;
volatile int32_t t59 = 15;
volatile int8_t x311 = INT8_MAX;
int16_t x322 = 5051;
volatile int16_t x338 = INT16_MIN;
int16_t x343 = INT16_MAX;
volatile uint64_t x354 = 573727412843242611LLU;
int32_t x355 = 5555062;
int32_t x356 = INT32_MAX;
int64_t x364 = -1LL;
uint16_t x382 = 259U;
static uint64_t x387 = UINT64_MAX;
volatile int32_t t71 = -2;
volatile int32_t t72 = -393928617;
static int16_t x398 = INT16_MIN;
uint32_t x423 = 14481U;
volatile int32_t x431 = -1;
volatile int32_t x435 = INT32_MAX;
int16_t x439 = -6;
volatile int32_t t81 = 13417210;
int16_t x442 = -26;
volatile uint32_t x444 = UINT32_MAX;
uint8_t x448 = UINT8_MAX;
volatile int32_t t83 = -453431;
static int8_t x449 = 3;
int8_t x458 = -1;
int16_t x459 = INT16_MIN;
static uint32_t x462 = UINT32_MAX;
int8_t x464 = -1;
volatile int32_t t87 = -69;
uint8_t x471 = UINT8_MAX;
volatile int32_t x472 = 1077;
int8_t x476 = INT8_MIN;
int32_t t91 = 54941;
static int16_t x487 = 105;
uint32_t x493 = 3U;
static volatile int8_t x496 = INT8_MIN;
uint64_t x497 = UINT64_MAX;
int8_t x506 = INT8_MAX;
uint64_t x520 = 211055LLU;
int64_t x526 = -1LL;


void f0(void) {
	int64_t x1 = -6988470LL;
	int8_t x2 = INT8_MAX;
	int8_t x3 = -1;
	int16_t x4 = -48;

	t0 = ((x1==(x2+x3))-x4);

	if (t0 != 48) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x7 = INT8_MAX;

	t1 = ((x5==(x6+x7))-x8);

	if (t1 != 4294397053U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 1U;
	static int8_t x10 = INT8_MIN;
	uint8_t x11 = 13U;
	int32_t t2 = -5750;

	t2 = ((x9==(x10+x11))-x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MAX;
	static int64_t t3 = 144538329LL;

	t3 = ((x17==(x18+x19))-x20);

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	uint64_t x27 = UINT64_MAX;
	int32_t t4 = 461513560;

	t4 = ((x25==(x26+x27))-x28);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x30 = 1U;
	int16_t x31 = -1;
	volatile uint32_t x32 = 16025585U;
	uint32_t t5 = 14U;

	t5 = ((x29==(x30+x31))-x32);

	if (t5 != 4278941711U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 8171LLU;
	int16_t x34 = 9;
	int16_t x36 = 149;
	volatile int32_t t6 = 848;

	t6 = ((x33==(x34+x35))-x36);

	if (t6 != -149) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = 869;
	int8_t x40 = -33;
	volatile int32_t t7 = 9;

	t7 = ((x37==(x38+x39))-x40);

	if (t7 != 33) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile uint8_t x42 = UINT8_MAX;
	int16_t x43 = -1;
	static volatile int32_t t8 = 57;

	t8 = ((x41==(x42+x43))-x44);

	if (t8 != -1804712) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = 45;
	uint16_t x46 = UINT16_MAX;
	int32_t x47 = INT32_MIN;
	uint32_t x48 = UINT32_MAX;
	volatile uint32_t t9 = 0U;

	t9 = ((x45==(x46+x47))-x48);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = INT8_MIN;
	int64_t x51 = -338LL;
	uint64_t x52 = 155128968286832029LLU;
	volatile uint64_t t10 = 7331LLU;

	t10 = ((x49==(x50+x51))-x52);

	if (t10 != 18291615105422719587LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = INT8_MAX;
	volatile int32_t x54 = 43;
	volatile int64_t x55 = INT64_MIN;
	static int8_t x56 = -46;
	int32_t t11 = 0;

	t11 = ((x53==(x54+x55))-x56);

	if (t11 != 46) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	static int32_t t12 = 0;

	t12 = ((x57==(x58+x59))-x60);

	if (t12 != -127) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -2837;
	volatile uint16_t x62 = UINT16_MAX;
	static int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;
	volatile int32_t t13 = 26194571;

	t13 = ((x61==(x62+x63))-x64);

	if (t13 != 32768) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	uint32_t x68 = 937785510U;
	uint32_t t14 = 11710U;

	t14 = ((x65==(x66+x67))-x68);

	if (t14 != 3357181786U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x69 = INT32_MIN;
	volatile int32_t x71 = -1;
	int32_t x72 = INT32_MAX;
	volatile int32_t t15 = -638643;

	t15 = ((x69==(x70+x71))-x72);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -686315831LL;
	volatile int8_t x74 = -1;
	int16_t x75 = INT16_MAX;
	static volatile uint64_t t16 = 303376388880623LLU;

	t16 = ((x73==(x74+x75))-x76);

	if (t16 != 18446744073111510257LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x78 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t17 = 115U;

	t17 = ((x77==(x78+x79))-x80);

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x82 = INT8_MAX;
	int8_t x83 = INT8_MIN;
	int32_t x84 = INT32_MAX;
	static int32_t t18 = -209169;

	t18 = ((x81==(x82+x83))-x84);

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -3236;
	uint64_t x90 = 214261253LLU;
	volatile uint8_t x91 = UINT8_MAX;

	t19 = ((x89==(x90+x91))-x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	int8_t x94 = -1;
	int8_t x95 = -11;
	static uint32_t x96 = UINT32_MAX;

	t20 = ((x93==(x94+x95))-x96);

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -10;
	int64_t x102 = INT64_MIN;
	int32_t x104 = -1;

	t21 = ((x101==(x102+x103))-x104);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = 358;
	uint32_t x110 = UINT32_MAX;
	static int32_t x111 = -3203305;
	int32_t t22 = 123;

	t22 = ((x109==(x110+x111))-x112);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	static volatile int64_t x118 = INT64_MIN;

	t23 = ((x117==(x118+x119))-x120);

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	int64_t x131 = INT64_MAX;
	static int8_t x132 = INT8_MIN;
	int32_t t24 = -795504620;

	t24 = ((x129==(x130+x131))-x132);

	if (t24 != 128) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x134 = INT8_MIN;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t25 = 253058;

	t25 = ((x133==(x134+x135))-x136);

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x137 = INT64_MIN;
	int16_t x138 = 47;
	static uint32_t x139 = UINT32_MAX;
	int16_t x140 = INT16_MAX;
	volatile int32_t t26 = -134126;

	t26 = ((x137==(x138+x139))-x140);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x141 = -1988735243638898646LL;
	uint16_t x142 = 1779U;
	static uint64_t x143 = 18991668105266LLU;
	uint32_t x144 = 810091U;
	static volatile uint32_t t27 = 4310U;

	t27 = ((x141==(x142+x143))-x144);

	if (t27 != 4294157205U) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x146 = 557343036482908127LLU;
	uint32_t x147 = 10024U;
	volatile int8_t x148 = INT8_MIN;
	int32_t t28 = 34198;

	t28 = ((x145==(x146+x147))-x148);

	if (t28 != 128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x150 = INT8_MAX;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t29 = -63304167;

	t29 = ((x149==(x150+x151))-x152);

	if (t29 != 32768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MAX;
	volatile uint32_t x155 = 251071U;
	int16_t x156 = INT16_MIN;
	int32_t t30 = -29810877;

	t30 = ((x153==(x154+x155))-x156);

	if (t30 != 32768) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x157 = UINT8_MAX;
	uint8_t x158 = 16U;
	int64_t x159 = 27718308732LL;
	volatile int8_t x160 = -1;
	static volatile int32_t t31 = 66;

	t31 = ((x157==(x158+x159))-x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x161 = 107U;
	uint32_t x162 = UINT32_MAX;
	static uint64_t x163 = 480LLU;
	uint32_t x164 = 1069146948U;
	volatile uint32_t t32 = 1842643U;

	t32 = ((x161==(x162+x163))-x164);

	if (t32 != 3225820348U) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x165 = UINT16_MAX;
	uint32_t x166 = UINT32_MAX;
	int32_t x167 = -1;

	t33 = ((x165==(x166+x167))-x168);

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x169 = 4U;
	int8_t x170 = -1;
	int32_t x171 = INT32_MAX;
	int32_t t34 = -264;

	t34 = ((x169==(x170+x171))-x172);

	if (t34 != 8538944) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = UINT8_MAX;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MIN;
	static volatile int16_t x176 = -1;
	int32_t t35 = 357069;

	t35 = ((x173==(x174+x175))-x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = -1;
	volatile int8_t x178 = 0;
	int16_t x179 = -1;
	uint64_t x180 = 70576504456645LLU;
	static uint64_t t36 = 378554211852804591LLU;

	t36 = ((x177==(x178+x179))-x180);

	if (t36 != 18446673497205094972LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MAX;
	static int64_t x182 = -1LL;
	static uint64_t x183 = UINT64_MAX;
	int64_t t37 = -242348LL;

	t37 = ((x181==(x182+x183))-x184);

	if (t37 != 413462253855177LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	int64_t x187 = INT64_MAX;
	int16_t x188 = 430;
	int32_t t38 = 68170;

	t38 = ((x185==(x186+x187))-x188);

	if (t38 != -430) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x189 = 302U;
	uint64_t x190 = 474633LLU;
	int16_t x191 = INT16_MAX;
	volatile int64_t x192 = 91687628LL;
	static volatile int64_t t39 = -21LL;

	t39 = ((x189==(x190+x191))-x192);

	if (t39 != -91687628LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x193 = UINT16_MAX;
	uint8_t x194 = UINT8_MAX;
	uint64_t x196 = UINT64_MAX;
	uint64_t t40 = 171953LLU;

	t40 = ((x193==(x194+x195))-x196);

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x201 = INT8_MIN;
	volatile int32_t x202 = -31;
	uint16_t x203 = 22U;
	int16_t x204 = -1;
	volatile int32_t t41 = -411572;

	t41 = ((x201==(x202+x203))-x204);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = INT32_MIN;
	static int64_t x207 = -1LL;
	int16_t x208 = INT16_MAX;
	int32_t t42 = 144;

	t42 = ((x205==(x206+x207))-x208);

	if (t42 != -32767) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = INT64_MAX;
	int64_t x210 = -1LL;
	int64_t x211 = 62LL;
	uint8_t x212 = UINT8_MAX;

	t43 = ((x209==(x210+x211))-x212);

	if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x214 = 16U;
	int16_t x215 = INT16_MIN;
	int32_t t44 = 107278;

	t44 = ((x213==(x214+x215))-x216);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = -1;
	static int8_t x226 = 0;
	int8_t x227 = INT8_MIN;
	static uint64_t x228 = 13403LLU;
	uint64_t t45 = 1611167153213491819LLU;

	t45 = ((x225==(x226+x227))-x228);

	if (t45 != 18446744073709538213LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x237 = 37;
	volatile int16_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	static int8_t x240 = INT8_MAX;

	t46 = ((x237==(x238+x239))-x240);

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x241 = 1;
	uint32_t x243 = 1U;
	uint64_t x244 = 1075094LLU;
	uint64_t t47 = 409203512900381LLU;

	t47 = ((x241==(x242+x243))-x244);

	if (t47 != 18446744073708476522LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x249 = INT8_MAX;
	int8_t x250 = INT8_MIN;
	int16_t x251 = -195;
	int16_t x252 = -1;
	volatile int32_t t48 = 253856947;

	t48 = ((x249==(x250+x251))-x252);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x257 = -4;
	static uint64_t x258 = 6782516610721799761LLU;
	int64_t x259 = INT64_MIN;
	uint8_t x260 = 1U;
	int32_t t49 = 7735316;

	t49 = ((x257==(x258+x259))-x260);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 51U;
	int32_t x263 = -23629;
	volatile int8_t x264 = INT8_MIN;
	int32_t t50 = 2;

	t50 = ((x261==(x262+x263))-x264);

	if (t50 != 128) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x265 = -1;
	int8_t x267 = INT8_MAX;

	t51 = ((x265==(x266+x267))-x268);

	if (t51 != -127) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x273 = -1;
	int16_t x274 = INT16_MIN;
	volatile uint64_t x275 = UINT64_MAX;
	volatile uint64_t x276 = UINT64_MAX;
	uint64_t t52 = 23939473482533LLU;

	t52 = ((x273==(x274+x275))-x276);

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x277 = 7229710385LLU;
	uint16_t x278 = 108U;
	static volatile uint16_t x279 = UINT16_MAX;
	volatile int8_t x280 = -1;
	int32_t t53 = 138;

	t53 = ((x277==(x278+x279))-x280);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint64_t x283 = UINT64_MAX;
	int64_t x284 = 1833352461179LL;

	t54 = ((x281==(x282+x283))-x284);

	if (t54 != -1833352461179LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = INT64_MAX;
	static uint8_t x286 = 2U;
	int16_t x288 = INT16_MAX;

	t55 = ((x285==(x286+x287))-x288);

	if (t55 != -32767) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x289 = -25;
	volatile uint64_t x290 = UINT64_MAX;
	volatile int32_t t56 = 2817;

	t56 = ((x289==(x290+x291))-x292);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x294 = INT16_MIN;
	int64_t x295 = -1LL;
	int32_t x296 = -1;
	int32_t t57 = -385797;

	t57 = ((x293==(x294+x295))-x296);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x301 = 1292U;
	static int16_t x302 = -1;
	static volatile int16_t x303 = INT16_MAX;
	static uint64_t x304 = 3LLU;
	uint64_t t58 = 405952LLU;

	t58 = ((x301==(x302+x303))-x304);

	if (t58 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x305 = INT32_MIN;
	static uint32_t x306 = 1628629073U;
	static uint16_t x308 = 5U;

	t59 = ((x305==(x306+x307))-x308);

	if (t59 != -5) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x309 = UINT8_MAX;
	volatile int8_t x310 = INT8_MIN;
	volatile int8_t x312 = INT8_MAX;
	int32_t t60 = 204841;

	t60 = ((x309==(x310+x311))-x312);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x317 = UINT16_MAX;
	int16_t x318 = -1;
	static uint64_t x319 = 85529267LLU;
	int8_t x320 = INT8_MIN;
	int32_t t61 = -623002;

	t61 = ((x317==(x318+x319))-x320);

	if (t61 != 128) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x321 = -5624;
	volatile int32_t x323 = INT32_MIN;
	volatile uint16_t x324 = 7151U;
	volatile int32_t t62 = -19747556;

	t62 = ((x321==(x322+x323))-x324);

	if (t62 != -7151) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x325 = UINT8_MAX;
	volatile int32_t x326 = INT32_MIN;
	uint32_t x327 = 24487826U;
	static uint8_t x328 = 9U;
	volatile int32_t t63 = 12291455;

	t63 = ((x325==(x326+x327))-x328);

	if (t63 != -9) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x337 = -19;
	int8_t x339 = -1;
	static volatile uint32_t x340 = 3272U;
	volatile uint32_t t64 = 14507U;

	t64 = ((x337==(x338+x339))-x340);

	if (t64 != 4294964024U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = 180633;
	volatile int16_t x342 = -1;
	int64_t x344 = 31641950LL;
	static int64_t t65 = -24748329099687954LL;

	t65 = ((x341==(x342+x343))-x344);

	if (t65 != -31641950LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x349 = -1;
	volatile int32_t x350 = -7;
	uint16_t x351 = 2U;
	volatile int8_t x352 = -1;
	int32_t t66 = -6;

	t66 = ((x349==(x350+x351))-x352);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x353 = 184LL;
	int32_t t67 = -5794;

	t67 = ((x353==(x354+x355))-x356);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	int32_t x363 = INT32_MIN;
	static int64_t t68 = -1447LL;

	t68 = ((x361==(x362+x363))-x364);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x365 = INT8_MIN;
	volatile int8_t x366 = 14;
	uint64_t x367 = 92544808291329872LLU;
	uint64_t x368 = UINT64_MAX;
	uint64_t t69 = 163609513708317629LLU;

	t69 = ((x365==(x366+x367))-x368);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x381 = 20882247LLU;
	int64_t x383 = INT64_MIN;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t70 = -236054;

	t70 = ((x381==(x382+x383))-x384);

	if (t70 != 128) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MIN;
	int32_t x388 = INT32_MAX;

	t71 = ((x385==(x386+x387))-x388);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x393 = 464U;
	int16_t x394 = -1;
	int8_t x395 = INT8_MIN;
	int32_t x396 = -1;

	t72 = ((x393==(x394+x395))-x396);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x397 = UINT64_MAX;
	int8_t x399 = INT8_MIN;
	uint8_t x400 = 13U;
	static volatile int32_t t73 = -7;

	t73 = ((x397==(x398+x399))-x400);

	if (t73 != -13) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x405 = INT32_MIN;
	static int16_t x406 = INT16_MIN;
	static volatile int8_t x407 = 0;
	int16_t x408 = INT16_MAX;
	volatile int32_t t74 = -42036573;

	t74 = ((x405==(x406+x407))-x408);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x413 = -6;
	int8_t x414 = 1;
	int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	int32_t t75 = 103;

	t75 = ((x413==(x414+x415))-x416);

	if (t75 != 32768) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x417 = UINT8_MAX;
	int16_t x418 = -952;
	uint64_t x419 = 44607739568377LLU;
	int64_t x420 = -1LL;
	volatile int64_t t76 = 5975904LL;

	t76 = ((x417==(x418+x419))-x420);

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x421 = -1382;
	uint16_t x422 = UINT16_MAX;
	static uint16_t x424 = 25U;
	int32_t t77 = -7574374;

	t77 = ((x421==(x422+x423))-x424);

	if (t77 != -25) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x425 = -1;
	uint32_t x426 = UINT32_MAX;
	uint64_t x427 = 31186017971228LLU;
	static volatile int64_t x428 = -50063378858883729LL;
	int64_t t78 = 15167LL;

	t78 = ((x425==(x426+x427))-x428);

	if (t78 != 50063378858883729LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x429 = INT64_MIN;
	static int8_t x430 = INT8_MIN;
	uint16_t x432 = 7U;
	static int32_t t79 = 297569060;

	t79 = ((x429==(x430+x431))-x432);

	if (t79 != -7) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x433 = UINT8_MAX;
	volatile uint64_t x434 = 3305317LLU;
	static int16_t x436 = INT16_MIN;
	int32_t t80 = -219;

	t80 = ((x433==(x434+x435))-x436);

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x437 = UINT64_MAX;
	static volatile int64_t x438 = -1LL;
	static uint8_t x440 = UINT8_MAX;

	t81 = ((x437==(x438+x439))-x440);

	if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x441 = 20668LLU;
	static uint16_t x443 = 478U;
	uint32_t t82 = 728833335U;

	t82 = ((x441==(x442+x443))-x444);

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x445 = INT16_MIN;
	uint32_t x446 = 246U;
	uint16_t x447 = UINT16_MAX;

	t83 = ((x445==(x446+x447))-x448);

	if (t83 != -255) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x450 = UINT16_MAX;
	uint16_t x451 = 26U;
	static int16_t x452 = INT16_MIN;
	int32_t t84 = 3;

	t84 = ((x449==(x450+x451))-x452);

	if (t84 != 32768) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x453 = 1;
	int64_t x454 = -1LL;
	uint16_t x455 = 35U;
	uint8_t x456 = UINT8_MAX;
	static volatile int32_t t85 = 86;

	t85 = ((x453==(x454+x455))-x456);

	if (t85 != -255) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x457 = 47U;
	static uint64_t x460 = 380302998307227839LLU;
	uint64_t t86 = 5793910864LLU;

	t86 = ((x457==(x458+x459))-x460);

	if (t86 != 18066441075402323777LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x461 = -3;
	volatile int16_t x463 = INT16_MAX;

	t87 = ((x461==(x462+x463))-x464);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x469 = -7726;
	int64_t x470 = -1LL;
	volatile int32_t t88 = 19;

	t88 = ((x469==(x470+x471))-x472);

	if (t88 != -1077) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x473 = 423864;
	int8_t x474 = -2;
	volatile uint16_t x475 = UINT16_MAX;
	volatile int32_t t89 = -27556;

	t89 = ((x473==(x474+x475))-x476);

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x477 = 12673LLU;
	volatile int16_t x478 = -4950;
	static uint16_t x479 = 3U;
	int64_t x480 = -250375102LL;
	volatile int64_t t90 = 3LL;

	t90 = ((x477==(x478+x479))-x480);

	if (t90 != 250375102LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x481 = INT16_MIN;
	int32_t x482 = INT32_MIN;
	int32_t x483 = INT32_MAX;
	int8_t x484 = -5;

	t91 = ((x481==(x482+x483))-x484);

	if (t91 != 5) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x485 = 1714373;
	static int8_t x486 = -7;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t92 = 741778188LLU;

	t92 = ((x485==(x486+x487))-x488);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x494 = INT8_MIN;
	int32_t x495 = -1063560598;
	int32_t t93 = 52455084;

	t93 = ((x493==(x494+x495))-x496);

	if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x498 = INT16_MIN;
	volatile int16_t x499 = INT16_MIN;
	static uint32_t x500 = 89017U;
	volatile uint32_t t94 = 4666579U;

	t94 = ((x497==(x498+x499))-x500);

	if (t94 != 4294878279U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x501 = INT64_MAX;
	volatile int32_t x502 = -1;
	uint32_t x503 = 105U;
	int8_t x504 = INT8_MIN;
	int32_t t95 = 46704;

	t95 = ((x501==(x502+x503))-x504);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x505 = -1LL;
	volatile int32_t x507 = -1;
	volatile uint16_t x508 = UINT16_MAX;
	volatile int32_t t96 = 256344448;

	t96 = ((x505==(x506+x507))-x508);

	if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x513 = -14;
	uint64_t x514 = 2803215LLU;
	int8_t x515 = INT8_MIN;
	uint32_t x516 = 5399U;
	static uint32_t t97 = 939U;

	t97 = ((x513==(x514+x515))-x516);

	if (t97 != 4294961897U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x517 = 995LLU;
	int32_t x518 = 1906;
	volatile int8_t x519 = 3;
	static volatile uint64_t t98 = 142036LLU;

	t98 = ((x517==(x518+x519))-x520);

	if (t98 != 18446744073709340561LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x525 = UINT64_MAX;
	static uint8_t x527 = 82U;
	uint16_t x528 = UINT16_MAX;
	volatile int32_t t99 = -11341170;

	t99 = ((x525==(x526+x527))-x528);

	if (t99 != -65535) { NG(); } else { ; }
	
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

