#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x7 = 102U;
int8_t x12 = 16;
int32_t t3 = 13684;
uint64_t x29 = 860154LLU;
int16_t x33 = 0;
int8_t x34 = 45;
static int64_t x41 = INT64_MIN;
uint64_t x52 = 2791277362822LLU;
int16_t x53 = INT16_MIN;
int16_t x57 = -1;
int32_t x61 = -1;
uint8_t x62 = UINT8_MAX;
int64_t t13 = -6156647636370LL;
uint16_t x91 = 7U;
static int64_t t16 = -61851699341014LL;
int8_t x99 = -1;
int64_t x103 = 131206157795995LL;
volatile uint16_t x109 = 63U;
uint16_t x110 = 0U;
static int64_t x113 = INT64_MIN;
volatile int64_t t20 = 319705644981107519LL;
int32_t x117 = -1;
volatile uint16_t x140 = UINT16_MAX;
static uint32_t x144 = 822U;
int8_t x158 = -55;
volatile uint32_t x163 = 3671U;
volatile int16_t x184 = -1;
volatile int32_t t30 = -269385578;
uint8_t x196 = 5U;
int16_t x204 = 53;
volatile uint8_t x207 = UINT8_MAX;
volatile int32_t t35 = -15;
int16_t x213 = INT16_MIN;
uint8_t x247 = UINT8_MAX;
static volatile int32_t x251 = 3301;
int64_t x259 = INT64_MIN;
volatile uint16_t x261 = UINT16_MAX;
volatile uint32_t x273 = 13U;
volatile uint8_t x274 = 18U;
uint64_t x286 = UINT64_MAX;
static volatile int8_t x288 = 15;
volatile uint64_t t48 = 1045757LLU;
uint8_t x295 = 6U;
volatile uint64_t t51 = 2999983438919LLU;
int16_t x319 = INT16_MAX;
static int8_t x320 = -1;
int32_t t54 = 42;
volatile int16_t x321 = -3;
uint16_t x324 = UINT16_MAX;
uint8_t x327 = UINT8_MAX;
uint64_t t56 = 10340850176LLU;
static int8_t x331 = -1;
int16_t x335 = INT16_MAX;
uint8_t x357 = 45U;
int64_t x358 = INT64_MAX;
static int64_t t60 = -446251119152LL;
int8_t x373 = INT8_MAX;
uint8_t x379 = 1U;
static uint16_t x382 = 707U;
int16_t x383 = INT16_MIN;
uint8_t x424 = 4U;
int8_t x430 = 2;
uint64_t t73 = 486LLU;
volatile uint16_t x433 = 572U;
volatile uint64_t x437 = 45735733047LLU;
uint16_t x439 = 9908U;
volatile uint64_t t75 = 1970973129710LLU;
int16_t x459 = -180;
volatile int32_t t79 = 29;
volatile int32_t x462 = -1;
volatile uint32_t x481 = 7354832U;
static volatile int16_t x485 = -21;
static int8_t x487 = INT8_MAX;
static volatile int8_t x522 = INT8_MAX;
static int16_t x552 = INT16_MAX;
uint8_t x554 = 5U;
volatile int64_t x555 = -53269831666LL;
int16_t x556 = INT16_MIN;
int64_t x558 = INT64_MIN;
int32_t t96 = 1;
int8_t x569 = 17;
static volatile uint64_t t97 = 1765994711416LLU;
uint8_t x577 = 0U;


void f0(void) {
	volatile int32_t x1 = 524901404;
	uint16_t x2 = UINT16_MAX;
	static uint64_t x3 = 1002662LLU;
	volatile int16_t x4 = -56;
	volatile uint64_t t0 = 134912208173LLU;

	t0 = (x1/((x2^x3)*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	static int16_t x6 = -7;
	volatile int8_t x8 = INT8_MIN;
	uint32_t t1 = 1551825U;

	t1 = (x5/((x6^x7)*x8));

	if (t1 != 345921U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1001187;
	int64_t x10 = 1961108984LL;
	int32_t x11 = -1;
	volatile int64_t t2 = -66011661891LL;

	t2 = (x9/((x10^x11)*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	int8_t x14 = 1;
	int32_t x15 = -332;
	int8_t x16 = INT8_MIN;

	t3 = (x13/((x14^x15)*x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 10;

	t4 = (x17/((x18^x19)*x20));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	static uint8_t x26 = UINT8_MAX;
	static volatile uint64_t x27 = UINT64_MAX;
	uint8_t x28 = 2U;
	volatile uint64_t t5 = 152107088335638LLU;

	t5 = (x25/((x26^x27)*x28));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x30 = INT32_MIN;
	static uint64_t x31 = 515013LLU;
	int32_t x32 = INT32_MIN;
	uint64_t t6 = 73804609366585433LLU;

	t6 = (x29/((x30^x31)*x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x35 = INT8_MAX;
	volatile uint64_t x36 = UINT64_MAX;
	uint64_t t7 = 29923920910937LLU;

	t7 = (x33/((x34^x35)*x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x42 = -1;
	static int32_t x43 = -661993459;
	int8_t x44 = 1;
	static volatile int64_t t8 = 8LL;

	t8 = (x41/((x42^x43)*x44));

	if (t8 != -13932723844LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	static int32_t x46 = -1;
	uint32_t x47 = 32862U;
	static int8_t x48 = INT8_MIN;
	uint32_t t9 = 12U;

	t9 = (x45/((x46^x47)*x48));

	if (t9 != 1021U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x49 = INT16_MAX;
	static int8_t x50 = -26;
	static int32_t x51 = INT32_MAX;
	uint64_t t10 = 4511556002970547580LLU;

	t10 = (x49/((x50^x51)*x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x54 = 3U;
	volatile int64_t x55 = INT64_MIN;
	volatile uint64_t x56 = 2052017270534990862LLU;
	static volatile uint64_t t11 = 10842288834309385LLU;

	t11 = (x53/((x54^x55)*x56));

	if (t11 != 2LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x58 = 36354U;
	uint8_t x59 = UINT8_MAX;
	volatile int8_t x60 = -7;
	static uint32_t t12 = 211U;

	t12 = (x57/((x58^x59)*x60));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x63 = -1LL;
	int8_t x64 = INT8_MIN;

	t13 = (x61/((x62^x63)*x64));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint8_t x77 = 42U;
	uint16_t x78 = 53U;
	uint8_t x79 = UINT8_MAX;
	static volatile int16_t x80 = -1;
	static int32_t t14 = 8;

	t14 = (x77/((x78^x79)*x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = 494414674U;
	int16_t x82 = 15;
	uint64_t x83 = 1044838158318826049LLU;
	volatile int16_t x84 = INT16_MIN;
	static uint64_t t15 = 32148042LLU;

	t15 = (x81/((x82^x83)*x84));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x89 = -1;
	int16_t x90 = 120;
	int64_t x92 = -1LL;

	t16 = (x89/((x90^x91)*x92));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x97 = INT32_MAX;
	uint16_t x98 = UINT16_MAX;
	int16_t x100 = INT16_MAX;
	volatile int32_t t17 = -109961956;

	t17 = (x97/((x98^x99)*x100));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = 4;
	static uint32_t x102 = 0U;
	uint64_t x104 = UINT64_MAX;
	volatile uint64_t t18 = 83353880671378LLU;

	t18 = (x101/((x102^x103)*x104));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x111 = 9;
	int32_t x112 = -1;
	volatile int32_t t19 = -13837;

	t19 = (x109/((x110^x111)*x112));

	if (t19 != -7) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x114 = INT8_MIN;
	static uint16_t x115 = 8543U;
	static uint32_t x116 = 1U;

	t20 = (x113/((x114^x115)*x116));

	if (t20 != -2147487888LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x118 = INT8_MIN;
	int16_t x119 = 287;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t21 = 1874844U;

	t21 = (x117/((x118^x119)*x120));

	if (t21 != 12167046U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x129 = INT32_MAX;
	int8_t x130 = 23;
	int32_t x131 = 15;
	int8_t x132 = -12;
	int32_t t22 = 0;

	t22 = (x129/((x130^x131)*x132));

	if (t22 != -7456540) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x137 = INT8_MAX;
	volatile int16_t x138 = INT16_MAX;
	static int64_t x139 = -1LL;
	int64_t t23 = -114908018LL;

	t23 = (x137/((x138^x139)*x140));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = INT32_MIN;
	static uint64_t x142 = 2070406962LLU;
	int8_t x143 = 9;
	static volatile uint64_t t24 = 2279305670595499054LLU;

	t24 = (x141/((x142^x143)*x144));

	if (t24 != 10839074LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x153 = -1;
	static uint16_t x154 = UINT16_MAX;
	volatile uint64_t x155 = 267553145683LLU;
	volatile int8_t x156 = -20;
	uint64_t t25 = 2264358586650490LLU;

	t25 = (x153/((x154^x155)*x156));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x157 = 5958U;
	int8_t x159 = INT8_MIN;
	uint32_t x160 = UINT32_MAX;
	volatile uint32_t t26 = 412846U;

	t26 = (x157/((x158^x159)*x160));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x161 = 12;
	uint32_t x162 = 3165074U;
	int32_t x164 = 192;
	uint32_t t27 = 794454054U;

	t27 = (x161/((x162^x163)*x164));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x165 = INT32_MAX;
	int32_t x166 = INT32_MAX;
	static volatile int32_t x167 = INT32_MIN;
	int16_t x168 = INT16_MAX;
	int32_t t28 = 1;

	t28 = (x165/((x166^x167)*x168));

	if (t28 != -65538) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint16_t x177 = 13U;
	int8_t x178 = INT8_MIN;
	int8_t x179 = -1;
	static int64_t x180 = -1LL;
	int64_t t29 = 378371969676829LL;

	t29 = (x177/((x178^x179)*x180));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x181 = 34U;
	static int8_t x182 = 9;
	volatile int16_t x183 = -1;

	t30 = (x181/((x182^x183)*x184));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x185 = INT32_MIN;
	int64_t x186 = -1LL;
	int8_t x187 = INT8_MAX;
	static volatile uint8_t x188 = 3U;
	int64_t t31 = -4721LL;

	t31 = (x185/((x186^x187)*x188));

	if (t31 != 5592405LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x193 = 409;
	volatile int32_t x194 = -1;
	int16_t x195 = INT16_MIN;
	int32_t t32 = -205;

	t32 = (x193/((x194^x195)*x196));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x197 = UINT16_MAX;
	static int32_t x198 = INT32_MIN;
	uint64_t x199 = 417294655344LLU;
	uint32_t x200 = 66018U;
	volatile uint64_t t33 = 22674774473753267LLU;

	t33 = (x197/((x198^x199)*x200));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x201 = 0;
	int16_t x202 = 6402;
	static uint64_t x203 = UINT64_MAX;
	static volatile uint64_t t34 = 126233LLU;

	t34 = (x201/((x202^x203)*x204));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x205 = INT8_MIN;
	uint16_t x206 = 855U;
	int16_t x208 = INT16_MAX;

	t35 = (x205/((x206^x207)*x208));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x209 = 4U;
	uint64_t x210 = UINT64_MAX;
	int16_t x211 = INT16_MAX;
	uint64_t x212 = 1LLU;
	static volatile uint64_t t36 = 1157836929468659LLU;

	t36 = (x209/((x210^x211)*x212));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x214 = INT8_MIN;
	int32_t x215 = -1;
	volatile int16_t x216 = 1;
	static int32_t t37 = -289262767;

	t37 = (x213/((x214^x215)*x216));

	if (t37 != -258) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x225 = 264196754394545603LLU;
	uint16_t x226 = 4752U;
	volatile uint8_t x227 = 93U;
	volatile uint8_t x228 = 23U;
	static volatile uint64_t t38 = 22150LLU;

	t38 = (x225/((x226^x227)*x228));

	if (t38 != 2386622773417LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x229 = INT32_MIN;
	int64_t x230 = -1015713864429073LL;
	int8_t x231 = -1;
	uint64_t x232 = 148988LLU;
	volatile uint64_t t39 = 132165605636LLU;

	t39 = (x229/((x230^x231)*x232));

	if (t39 != 4LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x237 = UINT32_MAX;
	static int32_t x238 = -1;
	volatile int64_t x239 = -10288461787730231LL;
	int16_t x240 = -1;
	volatile int64_t t40 = -44895805991LL;

	t40 = (x237/((x238^x239)*x240));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x245 = 0;
	int8_t x246 = INT8_MIN;
	static uint32_t x248 = UINT32_MAX;
	static volatile uint32_t t41 = 2939358U;

	t41 = (x245/((x246^x247)*x248));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x249 = INT64_MAX;
	uint8_t x250 = 1U;
	int16_t x252 = INT16_MAX;
	static volatile int64_t t42 = 64876847LL;

	t42 = (x249/((x250^x251)*x252));

	if (t42 != 85298050578LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x257 = INT32_MAX;
	uint64_t x258 = UINT64_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile uint64_t t43 = 305652259019652LLU;

	t43 = (x257/((x258^x259)*x260));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x262 = INT8_MAX;
	static volatile uint64_t x263 = 6822LLU;
	static int8_t x264 = INT8_MIN;
	volatile uint64_t t44 = 172568170LLU;

	t44 = (x261/((x262^x263)*x264));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x269 = -1;
	static volatile uint64_t x270 = UINT64_MAX;
	static int8_t x271 = INT8_MIN;
	uint64_t x272 = 199583150LLU;
	uint64_t t45 = 109316LLU;

	t45 = (x269/((x270^x271)*x272));

	if (t45 != 727766614LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x275 = 5243U;
	volatile uint8_t x276 = 14U;
	volatile uint32_t t46 = 32148686U;

	t46 = (x273/((x274^x275)*x276));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x277 = UINT16_MAX;
	static int16_t x278 = 113;
	int8_t x279 = INT8_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t47 = 75010838;

	t47 = (x277/((x278^x279)*x280));

	if (t47 != -36) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x285 = INT64_MIN;
	static volatile int16_t x287 = INT16_MIN;

	t48 = (x285/((x286^x287)*x288));

	if (t48 != 18765571127160LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	uint32_t x296 = UINT32_MAX;
	static volatile uint32_t t49 = 1066465U;

	t49 = (x293/((x294^x295)*x296));

	if (t49 != 35204649U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x297 = -22;
	uint16_t x298 = 811U;
	volatile int16_t x299 = 7;
	uint64_t x300 = UINT64_MAX;
	static uint64_t t50 = 14276806LLU;

	t50 = (x297/((x298^x299)*x300));

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = 0;
	static int8_t x307 = INT8_MAX;
	uint64_t x308 = 820LLU;

	t51 = (x305/((x306^x307)*x308));

	if (t51 != 88567044717253LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x309 = INT8_MIN;
	uint8_t x310 = 1U;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 113LLU;
	static uint64_t t52 = 25157479543087LLU;

	t52 = (x309/((x310^x311)*x312));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x313 = INT16_MIN;
	int8_t x314 = INT8_MIN;
	int16_t x315 = INT16_MAX;
	int8_t x316 = INT8_MIN;
	int32_t t53 = 228;

	t53 = (x313/((x314^x315)*x316));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x317 = -1;
	static int16_t x318 = -1;

	t54 = (x317/((x318^x319)*x320));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x322 = UINT8_MAX;
	volatile uint8_t x323 = 0U;
	volatile int32_t t55 = -27292287;

	t55 = (x321/((x322^x323)*x324));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x325 = 2707616459970825515LLU;
	volatile int16_t x326 = INT16_MIN;
	int16_t x328 = 11736;

	t56 = (x325/((x326^x327)*x328));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x329 = -1LL;
	volatile uint8_t x330 = 13U;
	static uint64_t x332 = 189047188188976883LLU;
	uint64_t t57 = 2LLU;

	t57 = (x329/((x330^x331)*x332));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x333 = UINT8_MAX;
	int8_t x334 = INT8_MIN;
	int8_t x336 = INT8_MIN;
	volatile int32_t t58 = -170492;

	t58 = (x333/((x334^x335)*x336));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x349 = INT16_MAX;
	uint16_t x350 = UINT16_MAX;
	static volatile uint64_t x351 = 3002956138266817LLU;
	int16_t x352 = -1;
	uint64_t t59 = 1027840LLU;

	t59 = (x349/((x350^x351)*x352));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x359 = 8;
	volatile int8_t x360 = 1;

	t60 = (x357/((x358^x359)*x360));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x361 = 2225U;
	uint16_t x362 = 2U;
	int32_t x363 = INT32_MIN;
	static volatile int16_t x364 = -1;
	int32_t t61 = -23415;

	t61 = (x361/((x362^x363)*x364));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint16_t x366 = 294U;
	int32_t x367 = 3;
	static int8_t x368 = -1;
	int32_t t62 = 123459376;

	t62 = (x365/((x366^x367)*x368));

	if (t62 != -223) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x369 = INT64_MIN;
	static volatile int64_t x370 = INT64_MIN;
	static volatile uint64_t x371 = 14032092037959223LLU;
	volatile int16_t x372 = 3100;
	uint64_t t63 = 178780366573032LLU;

	t63 = (x369/((x370^x371)*x372));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x374 = UINT16_MAX;
	static int8_t x375 = INT8_MAX;
	int8_t x376 = -1;
	int32_t t64 = 779949;

	t64 = (x373/((x374^x375)*x376));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x377 = -1;
	volatile int8_t x378 = -1;
	volatile int8_t x380 = INT8_MIN;
	volatile int32_t t65 = -6;

	t65 = (x377/((x378^x379)*x380));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x381 = UINT16_MAX;
	static int8_t x384 = 6;
	int32_t t66 = 4;

	t66 = (x381/((x382^x383)*x384));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x385 = 1;
	static int8_t x386 = INT8_MIN;
	uint64_t x387 = 6835657185474436281LLU;
	static volatile int32_t x388 = INT32_MAX;
	uint64_t t67 = 535LLU;

	t67 = (x385/((x386^x387)*x388));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x393 = -9115125132LL;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = INT32_MAX;
	static uint64_t t68 = 55072878678LLU;

	t68 = (x393/((x394^x395)*x396));

	if (t68 != 4LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x397 = 2880;
	int32_t x398 = INT32_MIN;
	volatile int8_t x399 = INT8_MAX;
	static int64_t x400 = -2783LL;
	int64_t t69 = 25896091016795150LL;

	t69 = (x397/((x398^x399)*x400));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = 31295U;
	uint8_t x415 = 14U;
	int16_t x416 = -1;
	volatile uint32_t t70 = 119U;

	t70 = (x413/((x414^x415)*x416));

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x417 = 37723024422327LL;
	int32_t x418 = -18673;
	uint16_t x419 = 3U;
	volatile int16_t x420 = INT16_MIN;
	int64_t t71 = -837537571809656404LL;

	t71 = (x417/((x418^x419)*x420));

	if (t71 != 61641LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x421 = -1;
	int8_t x422 = 0;
	uint64_t x423 = UINT64_MAX;
	static volatile uint64_t t72 = 423LLU;

	t72 = (x421/((x422^x423)*x424));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x429 = UINT64_MAX;
	int64_t x431 = -307LL;
	static int32_t x432 = 6334983;

	t73 = (x429/((x430^x431)*x432));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x434 = -3145919309LL;
	uint64_t x435 = 65435971808377LLU;
	static volatile uint32_t x436 = 5450U;
	uint64_t t74 = 5951225055LLU;

	t74 = (x433/((x434^x435)*x436));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x438 = -1;
	uint64_t x440 = UINT64_MAX;

	t75 = (x437/((x438^x439)*x440));

	if (t75 != 4615575LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x441 = 101U;
	int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MIN;
	static uint8_t x444 = 1U;
	int32_t t76 = 53;

	t76 = (x441/((x442^x443)*x444));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x445 = 0U;
	static volatile uint16_t x446 = UINT16_MAX;
	uint64_t x447 = 34515225437146LLU;
	volatile int32_t x448 = INT32_MIN;
	uint64_t t77 = 948784LLU;

	t77 = (x445/((x446^x447)*x448));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x449 = INT16_MIN;
	uint16_t x450 = 201U;
	static volatile uint32_t x451 = UINT32_MAX;
	int16_t x452 = INT16_MIN;
	uint32_t t78 = 21717543U;

	t78 = (x449/((x450^x451)*x452));

	if (t78 != 648U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x457 = 26U;
	static int8_t x458 = INT8_MIN;
	static int8_t x460 = INT8_MAX;

	t79 = (x457/((x458^x459)*x460));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x461 = -1;
	volatile int16_t x463 = INT16_MAX;
	int16_t x464 = -1;
	int32_t t80 = -8054565;

	t80 = (x461/((x462^x463)*x464));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x465 = INT64_MIN;
	static int8_t x466 = INT8_MAX;
	int32_t x467 = -1;
	uint8_t x468 = 1U;
	int64_t t81 = -185380836LL;

	t81 = (x465/((x466^x467)*x468));

	if (t81 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x477 = UINT32_MAX;
	int16_t x478 = 1226;
	uint8_t x479 = 2U;
	static uint32_t x480 = 1U;
	volatile uint32_t t82 = 85519U;

	t82 = (x477/((x478^x479)*x480));

	if (t82 != 3508960U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x482 = 143U;
	static int8_t x483 = INT8_MIN;
	uint16_t x484 = UINT16_MAX;
	volatile uint32_t t83 = 3242566U;

	t83 = (x481/((x482^x483)*x484));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x486 = -1;
	int32_t x488 = 1526;
	volatile int32_t t84 = -1;

	t84 = (x485/((x486^x487)*x488));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x493 = INT8_MAX;
	int64_t x494 = 232LL;
	int16_t x495 = -5;
	int16_t x496 = INT16_MIN;
	int64_t t85 = -46767782681679LL;

	t85 = (x493/((x494^x495)*x496));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x509 = 0U;
	int32_t x510 = 8099;
	int16_t x511 = -1;
	uint16_t x512 = UINT16_MAX;
	uint32_t t86 = 79U;

	t86 = (x509/((x510^x511)*x512));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x513 = INT16_MIN;
	volatile uint32_t x514 = 591U;
	static int8_t x515 = INT8_MIN;
	static int32_t x516 = INT32_MIN;
	uint32_t t87 = 424U;

	t87 = (x513/((x514^x515)*x516));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x517 = 163412U;
	int16_t x518 = INT16_MAX;
	int64_t x519 = -1LL;
	static volatile int64_t x520 = -1LL;
	int64_t t88 = -3519016LL;

	t88 = (x517/((x518^x519)*x520));

	if (t88 != 4LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x521 = 8;
	uint32_t x523 = 0U;
	uint32_t x524 = UINT32_MAX;
	static uint32_t t89 = 7385607U;

	t89 = (x521/((x522^x523)*x524));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x537 = INT8_MIN;
	int16_t x538 = -18;
	int32_t x539 = INT32_MIN;
	static volatile uint32_t x540 = 8766U;
	volatile uint32_t t90 = 678519U;

	t90 = (x537/((x538^x539)*x540));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x541 = UINT64_MAX;
	volatile int32_t x542 = INT32_MIN;
	uint64_t x543 = UINT64_MAX;
	int32_t x544 = -2756195;
	volatile uint64_t t91 = 2240184751149703965LLU;

	t91 = (x541/((x542^x543)*x544));

	if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x545 = INT16_MIN;
	uint64_t x546 = UINT64_MAX;
	volatile int8_t x547 = INT8_MAX;
	int8_t x548 = INT8_MIN;
	volatile uint64_t t92 = 6491475LLU;

	t92 = (x545/((x546^x547)*x548));

	if (t92 != 1125899906842622LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x549 = 3151484250530LLU;
	int8_t x550 = -4;
	int8_t x551 = -2;
	uint64_t t93 = 1264532249039001LLU;

	t93 = (x549/((x550^x551)*x552));

	if (t93 != 48089300LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x553 = -1LL;
	volatile int64_t t94 = -5228143287666LL;

	t94 = (x553/((x554^x555)*x556));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x557 = -1;
	int32_t x559 = -4417676;
	int64_t x560 = -1LL;
	volatile int64_t t95 = -168081222LL;

	t95 = (x557/((x558^x559)*x560));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x565 = 1;
	volatile int8_t x566 = 0;
	volatile int8_t x567 = -6;
	int32_t x568 = -1;

	t96 = (x565/((x566^x567)*x568));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x570 = -3189;
	static int32_t x571 = INT32_MIN;
	uint64_t x572 = UINT64_MAX;

	t97 = (x569/((x570^x571)*x572));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x573 = -594989;
	static uint32_t x574 = 17882U;
	static int16_t x575 = INT16_MAX;
	int16_t x576 = INT16_MIN;
	uint32_t t98 = 9908337U;

	t98 = (x573/((x574^x575)*x576));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x578 = 12;
	volatile uint8_t x579 = 28U;
	static volatile uint32_t x580 = 963653U;
	uint32_t t99 = 2675061U;

	t99 = (x577/((x578^x579)*x580));

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

