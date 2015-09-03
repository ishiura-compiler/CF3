#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x14 = INT64_MAX;
uint32_t x15 = 2061U;
uint32_t x21 = 255U;
static int8_t x24 = -2;
int32_t x25 = 27917785;
static uint32_t x47 = 809U;
static uint32_t x54 = 700U;
int8_t x56 = INT8_MIN;
int32_t x102 = INT32_MAX;
static int32_t x114 = 2857;
int32_t x118 = INT32_MAX;
volatile int32_t t14 = 818040;
int8_t x142 = 0;
static int32_t x146 = INT32_MAX;
static uint32_t t16 = UINT32_MAX;
volatile int32_t x151 = INT32_MIN;
static volatile int8_t x152 = -3;
volatile int64_t x156 = 103149584381LL;
static uint64_t t18 = 1434039658103612LLU;
int16_t x161 = 24;
int8_t x165 = INT8_MAX;
int8_t x170 = -1;
volatile uint16_t x173 = 0U;
int32_t x176 = -142327743;
static volatile int8_t x184 = INT8_MIN;
int32_t t25 = -74;
static uint16_t x210 = 27U;
volatile int32_t t28 = -451;
int8_t x219 = -40;
static uint8_t x223 = 5U;
volatile uint16_t x224 = 6U;
int32_t x225 = INT32_MAX;
uint64_t x235 = 32391LLU;
uint32_t t32 = 1368650635U;
static int32_t x237 = INT32_MAX;
int64_t x270 = INT64_MAX;
static volatile uint64_t x285 = 299939929450LLU;
volatile uint64_t t38 = 92849112736303217LLU;
static int64_t x299 = INT64_MIN;
uint64_t x337 = 23974068756LLU;
int16_t x340 = INT16_MIN;
volatile uint64_t t44 = 32236643693LLU;
volatile int32_t t45 = -6;
int32_t x349 = 433469087;
uint16_t x353 = 11U;
volatile uint64_t x357 = UINT64_MAX;
int32_t t51 = 9128579;
int64_t x400 = INT64_MIN;
volatile int32_t x413 = 109485124;
int16_t x437 = INT16_MAX;
int16_t x443 = -1;
int64_t x450 = -1LL;
uint64_t x479 = 961LLU;
volatile uint32_t t60 = 840665U;
uint16_t x493 = 3332U;
int64_t x507 = -1985428616LL;
uint16_t x511 = UINT16_MAX;
uint64_t x517 = UINT64_MAX;
static volatile uint64_t t65 = UINT64_MAX;
volatile uint64_t t68 = 918842366LLU;
int16_t x550 = INT16_MIN;
int8_t x562 = -1;
static int32_t x567 = INT32_MAX;
uint16_t x571 = UINT16_MAX;
int32_t x579 = -1;
int64_t x597 = 359LL;
int64_t x600 = INT64_MAX;
volatile uint32_t t77 = 169U;
uint32_t x629 = 218220745U;
int32_t x636 = 735;
volatile uint32_t x677 = 537785022U;
uint8_t x686 = UINT8_MAX;
int16_t x687 = INT16_MAX;
uint32_t x691 = UINT32_MAX;
int64_t x693 = 3866780390575LL;
uint8_t x720 = UINT8_MAX;
int32_t t93 = 4541367;
volatile int64_t x726 = INT64_MIN;
int32_t x738 = INT32_MAX;
uint32_t t96 = 3369U;
static uint8_t x741 = 86U;
int16_t x746 = INT16_MAX;
int8_t x747 = INT8_MIN;
volatile int8_t x750 = -9;
uint64_t x751 = 15085527LLU;
int8_t x752 = INT8_MAX;
volatile uint32_t t99 = UINT32_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	int32_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	uint8_t x4 = UINT8_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = (x1>>(x2<(x3&x4)));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x13 = UINT32_MAX;
	int16_t x16 = INT16_MIN;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x13>>(x14<(x15&x16)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x17 = INT64_MAX;
	uint64_t x18 = 1567632LLU;
	volatile int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	int64_t t2 = 67900670080LL;

	t2 = (x17>>(x18<(x19&x20)));

	if (t2 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x22 = INT16_MAX;
	uint16_t x23 = UINT16_MAX;
	uint32_t t3 = 4369U;

	t3 = (x21>>(x22<(x23&x24)));

	if (t3 != 127U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	uint16_t x28 = UINT16_MAX;
	int32_t t4 = 1726792;

	t4 = (x25>>(x26<(x27&x28)));

	if (t4 != 13958892) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = 1;
	uint8_t x30 = 1U;
	int16_t x31 = INT16_MIN;
	static int16_t x32 = -1;
	static volatile int32_t t5 = 14795;

	t5 = (x29>>(x30<(x31&x32)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 1U;
	int32_t x46 = -68524;
	uint16_t x48 = 16U;
	int32_t t6 = 23;

	t6 = (x45>>(x46<(x47&x48)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x53 = INT8_MAX;
	int64_t x55 = 114511051LL;
	int32_t t7 = 962426;

	t7 = (x53>>(x54<(x55&x56)));

	if (t7 != 63) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x93 = UINT8_MAX;
	int8_t x94 = INT8_MIN;
	int8_t x95 = 0;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t8 = 23070;

	t8 = (x93>>(x94<(x95&x96)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x101 = 0U;
	uint64_t x103 = 2429446210LLU;
	static int16_t x104 = INT16_MAX;
	int32_t t9 = -443;

	t9 = (x101>>(x102<(x103&x104)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x109 = 2091LL;
	int64_t x110 = INT64_MAX;
	uint8_t x111 = UINT8_MAX;
	uint8_t x112 = 53U;
	volatile int64_t t10 = -203089332LL;

	t10 = (x109>>(x110<(x111&x112)));

	if (t10 != 2091LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x113 = 284252922903LL;
	int16_t x115 = INT16_MIN;
	uint16_t x116 = 1U;
	volatile int64_t t11 = -194693947LL;

	t11 = (x113>>(x114<(x115&x116)));

	if (t11 != 284252922903LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint8_t x117 = 3U;
	uint8_t x119 = 110U;
	uint64_t x120 = 228987672194389LLU;
	volatile int32_t t12 = -175386;

	t12 = (x117>>(x118<(x119&x120)));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x133 = 1U;
	uint64_t x134 = UINT64_MAX;
	int16_t x135 = INT16_MIN;
	volatile int32_t x136 = INT32_MIN;
	int32_t t13 = -25476137;

	t13 = (x133>>(x134<(x135&x136)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x137 = INT8_MAX;
	int8_t x138 = INT8_MIN;
	int8_t x139 = -6;
	volatile uint64_t x140 = 27LLU;

	t14 = (x137>>(x138<(x139&x140)));

	if (t14 != 127) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x141 = UINT16_MAX;
	uint8_t x143 = 56U;
	int8_t x144 = 1;
	int32_t t15 = 6;

	t15 = (x141>>(x142<(x143&x144)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x145 = UINT32_MAX;
	static int16_t x147 = -1;
	uint16_t x148 = 155U;

	t16 = (x145>>(x146<(x147&x148)));

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x149 = 4583U;
	int64_t x150 = 54LL;
	volatile uint32_t t17 = 216997421U;

	t17 = (x149>>(x150<(x151&x152)));

	if (t17 != 4583U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x153 = 0LLU;
	volatile int64_t x154 = 3620398974LL;
	static uint16_t x155 = 28U;

	t18 = (x153>>(x154<(x155&x156)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	uint64_t x164 = UINT64_MAX;
	int32_t t19 = -2389929;

	t19 = (x161>>(x162<(x163&x164)));

	if (t19 != 24) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x166 = INT16_MIN;
	volatile uint16_t x167 = 36U;
	volatile int8_t x168 = 1;
	int32_t t20 = -58244;

	t20 = (x165>>(x166<(x167&x168)));

	if (t20 != 63) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x169 = INT32_MAX;
	uint16_t x171 = 164U;
	int8_t x172 = 41;
	static volatile int32_t t21 = -1889853;

	t21 = (x169>>(x170<(x171&x172)));

	if (t21 != 1073741823) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x174 = -1LL;
	volatile int32_t x175 = INT32_MIN;
	volatile int32_t t22 = 1738189;

	t22 = (x173>>(x174<(x175&x176)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x177 = 8085308LLU;
	int32_t x178 = -1668241;
	uint64_t x179 = 18625274582LLU;
	volatile uint64_t x180 = 3456600749LLU;
	volatile uint64_t t23 = 35901990737303766LLU;

	t23 = (x177>>(x178<(x179&x180)));

	if (t23 != 8085308LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x181 = 217092129;
	uint64_t x182 = UINT64_MAX;
	static uint8_t x183 = 8U;
	static int32_t t24 = 18834;

	t24 = (x181>>(x182<(x183&x184)));

	if (t24 != 217092129) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x193 = 7U;
	uint32_t x194 = UINT32_MAX;
	static volatile int16_t x195 = 14321;
	uint64_t x196 = UINT64_MAX;

	t25 = (x193>>(x194<(x195&x196)));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x197 = 2;
	int32_t x198 = -1;
	int16_t x199 = INT16_MAX;
	volatile int64_t x200 = -1LL;
	volatile int32_t t26 = -490;

	t26 = (x197>>(x198<(x199&x200)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x209 = UINT32_MAX;
	uint32_t x211 = 62207U;
	int64_t x212 = INT64_MIN;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = (x209>>(x210<(x211&x212)));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x213 = 1799U;
	int32_t x214 = -97135926;
	int64_t x215 = 35664169230548444LL;
	int8_t x216 = INT8_MIN;

	t28 = (x213>>(x214<(x215&x216)));

	if (t28 != 899) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x217 = 0U;
	static uint8_t x218 = 1U;
	volatile int16_t x220 = 1;
	volatile int32_t t29 = 32513006;

	t29 = (x217>>(x218<(x219&x220)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x221 = 1;
	static volatile int32_t x222 = INT32_MIN;
	volatile int32_t t30 = 244;

	t30 = (x221>>(x222<(x223&x224)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x226 = -1LL;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = -1;
	volatile int32_t t31 = 45917113;

	t31 = (x225>>(x226<(x227&x228)));

	if (t31 != 1073741823) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x233 = 16161U;
	static uint8_t x234 = 10U;
	int16_t x236 = INT16_MAX;

	t32 = (x233>>(x234<(x235&x236)));

	if (t32 != 8080U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	int64_t x240 = -229054398LL;
	int32_t t33 = INT32_MAX;

	t33 = (x237>>(x238<(x239&x240)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x241 = 3U;
	int64_t x242 = INT64_MIN;
	volatile int16_t x243 = 2;
	int16_t x244 = -1;
	volatile int32_t t34 = 22208174;

	t34 = (x241>>(x242<(x243&x244)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x245 = 35122U;
	uint8_t x246 = UINT8_MAX;
	volatile uint16_t x247 = 1326U;
	int16_t x248 = 1;
	volatile uint32_t t35 = 2042U;

	t35 = (x245>>(x246<(x247&x248)));

	if (t35 != 35122U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x257 = INT8_MAX;
	volatile int32_t x258 = -8577712;
	int64_t x259 = -3996LL;
	volatile int8_t x260 = INT8_MAX;
	volatile int32_t t36 = -52;

	t36 = (x257>>(x258<(x259&x260)));

	if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x269 = 3LLU;
	static int32_t x271 = -940;
	volatile uint8_t x272 = 3U;
	uint64_t t37 = 2090158837643373895LLU;

	t37 = (x269>>(x270<(x271&x272)));

	if (t37 != 3LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x286 = -2003677;
	uint32_t x287 = UINT32_MAX;
	int64_t x288 = INT64_MAX;

	t38 = (x285>>(x286<(x287&x288)));

	if (t38 != 149969964725LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x297 = 2U;
	int32_t x298 = -1;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t39 = -151;

	t39 = (x297>>(x298<(x299&x300)));

	if (t39 != 2) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x301 = INT8_MAX;
	int32_t x302 = INT32_MIN;
	volatile uint16_t x303 = 1121U;
	volatile int16_t x304 = -14;
	volatile int32_t t40 = -13742438;

	t40 = (x301>>(x302<(x303&x304)));

	if (t40 != 63) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x305 = 492LLU;
	uint8_t x306 = 4U;
	int32_t x307 = INT32_MIN;
	int32_t x308 = 108924;
	uint64_t t41 = 51LLU;

	t41 = (x305>>(x306<(x307&x308)));

	if (t41 != 492LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x309 = 3U;
	volatile int8_t x310 = INT8_MIN;
	int32_t x311 = -943900;
	int8_t x312 = 7;
	volatile int32_t t42 = 458092;

	t42 = (x309>>(x310<(x311&x312)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x317 = 2919206824LLU;
	int64_t x318 = INT64_MAX;
	uint16_t x319 = 2076U;
	static int64_t x320 = INT64_MIN;
	uint64_t t43 = 1320992409834039LLU;

	t43 = (x317>>(x318<(x319&x320)));

	if (t43 != 2919206824LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x338 = 2565924U;
	uint16_t x339 = UINT16_MAX;

	t44 = (x337>>(x338<(x339&x340)));

	if (t44 != 23974068756LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x341 = 3U;
	static int16_t x342 = -1;
	volatile int32_t x343 = 16105051;
	uint32_t x344 = 37U;

	t45 = (x341>>(x342<(x343&x344)));

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x345 = 32418422508LL;
	volatile int16_t x346 = INT16_MIN;
	int16_t x347 = 3;
	volatile int64_t x348 = INT64_MIN;
	volatile int64_t t46 = -976952LL;

	t46 = (x345>>(x346<(x347&x348)));

	if (t46 != 16209211254LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x350 = 57754377;
	int8_t x351 = INT8_MIN;
	int32_t x352 = -1;
	volatile int32_t t47 = -876432614;

	t47 = (x349>>(x350<(x351&x352)));

	if (t47 != 433469087) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x354 = 9U;
	uint32_t x355 = UINT32_MAX;
	int64_t x356 = 30342932LL;
	int32_t t48 = 498;

	t48 = (x353>>(x354<(x355&x356)));

	if (t48 != 5) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x358 = INT64_MIN;
	int32_t x359 = -95774103;
	static int32_t x360 = 7;
	static uint64_t t49 = 2364316LLU;

	t49 = (x357>>(x358<(x359&x360)));

	if (t49 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x361 = 84U;
	volatile uint32_t x362 = 3161U;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	uint32_t t50 = 198800U;

	t50 = (x361>>(x362<(x363&x364)));

	if (t50 != 42U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x365 = 0U;
	uint8_t x366 = 0U;
	int32_t x367 = -1;
	int64_t x368 = -1LL;

	t51 = (x365>>(x366<(x367&x368)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x369 = 29876U;
	int16_t x370 = -7628;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MIN;
	volatile int32_t t52 = -270;

	t52 = (x369>>(x370<(x371&x372)));

	if (t52 != 29876) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x373 = 14208;
	static int8_t x374 = INT8_MAX;
	int32_t x375 = 699529;
	int16_t x376 = -1;
	int32_t t53 = -426587;

	t53 = (x373>>(x374<(x375&x376)));

	if (t53 != 7104) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x377 = INT32_MAX;
	static volatile int64_t x378 = -1LL;
	int16_t x379 = -753;
	int16_t x380 = 6750;
	int32_t t54 = -1;

	t54 = (x377>>(x378<(x379&x380)));

	if (t54 != 1073741823) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x397 = 415;
	int8_t x398 = INT8_MAX;
	static uint32_t x399 = 968341943U;
	volatile int32_t t55 = 523100868;

	t55 = (x397>>(x398<(x399&x400)));

	if (t55 != 415) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x414 = 23U;
	static int16_t x415 = INT16_MAX;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t56 = 48618;

	t56 = (x413>>(x414<(x415&x416)));

	if (t56 != 109485124) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x438 = -1LL;
	volatile int8_t x439 = INT8_MIN;
	int16_t x440 = INT16_MIN;
	int32_t t57 = -104;

	t57 = (x437>>(x438<(x439&x440)));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x441 = 705LLU;
	static int32_t x442 = INT32_MIN;
	int8_t x444 = 36;
	static uint64_t t58 = 6LLU;

	t58 = (x441>>(x442<(x443&x444)));

	if (t58 != 352LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x449 = 0;
	int16_t x451 = INT16_MIN;
	uint16_t x452 = UINT16_MAX;
	int32_t t59 = -1705;

	t59 = (x449>>(x450<(x451&x452)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x477 = 6195001U;
	uint16_t x478 = 20U;
	volatile int64_t x480 = -1LL;

	t60 = (x477>>(x478<(x479&x480)));

	if (t60 != 3097500U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x494 = 21363409U;
	static volatile uint8_t x495 = 9U;
	int32_t x496 = -7;
	volatile int32_t t61 = -22246163;

	t61 = (x493>>(x494<(x495&x496)));

	if (t61 != 3332) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x505 = UINT32_MAX;
	int64_t x506 = 450762LL;
	volatile int16_t x508 = -1;
	uint32_t t62 = UINT32_MAX;

	t62 = (x505>>(x506<(x507&x508)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x509 = 59681;
	int64_t x510 = INT64_MIN;
	uint64_t x512 = 69052766LLU;
	volatile int32_t t63 = -1322757;

	t63 = (x509>>(x510<(x511&x512)));

	if (t63 != 59681) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x513 = 1U;
	static int16_t x514 = INT16_MAX;
	static int32_t x515 = -1;
	int32_t x516 = INT32_MAX;
	volatile int32_t t64 = 4687799;

	t64 = (x513>>(x514<(x515&x516)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x518 = INT16_MAX;
	volatile uint32_t x519 = 383U;
	volatile uint16_t x520 = 101U;

	t65 = (x517>>(x518<(x519&x520)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x521 = 20169098137022472LLU;
	static volatile int8_t x522 = 1;
	uint8_t x523 = UINT8_MAX;
	uint32_t x524 = 376393178U;
	volatile uint64_t t66 = 450081659LLU;

	t66 = (x521>>(x522<(x523&x524)));

	if (t66 != 10084549068511236LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x529 = INT64_MAX;
	static uint64_t x530 = 1067452116988415275LLU;
	static uint32_t x531 = 56U;
	uint8_t x532 = 126U;
	volatile int64_t t67 = INT64_MAX;

	t67 = (x529>>(x530<(x531&x532)));

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x533 = 1885402099733745LLU;
	int16_t x534 = INT16_MIN;
	uint16_t x535 = UINT16_MAX;
	uint16_t x536 = 0U;

	t68 = (x533>>(x534<(x535&x536)));

	if (t68 != 942701049866872LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x537 = 14203880U;
	int16_t x538 = INT16_MIN;
	uint64_t x539 = 656067822192LLU;
	static int16_t x540 = INT16_MIN;
	uint32_t t69 = 2428166U;

	t69 = (x537>>(x538<(x539&x540)));

	if (t69 != 14203880U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x549 = 2520511LLU;
	int16_t x551 = INT16_MIN;
	int32_t x552 = -23;
	static volatile uint64_t t70 = 1820025715616LLU;

	t70 = (x549>>(x550<(x551&x552)));

	if (t70 != 2520511LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x561 = INT64_MAX;
	uint16_t x563 = 1U;
	uint64_t x564 = UINT64_MAX;
	int64_t t71 = INT64_MAX;

	t71 = (x561>>(x562<(x563&x564)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x565 = 1706;
	int16_t x566 = INT16_MAX;
	static volatile int32_t x568 = INT32_MIN;
	volatile int32_t t72 = 1;

	t72 = (x565>>(x566<(x567&x568)));

	if (t72 != 1706) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x569 = INT32_MAX;
	int64_t x570 = INT64_MIN;
	uint16_t x572 = 6U;
	static volatile int32_t t73 = -56;

	t73 = (x569>>(x570<(x571&x572)));

	if (t73 != 1073741823) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x573 = 12U;
	uint16_t x574 = 4U;
	int8_t x575 = INT8_MIN;
	int64_t x576 = INT64_MIN;
	static int32_t t74 = 328875245;

	t74 = (x573>>(x574<(x575&x576)));

	if (t74 != 12) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x577 = INT16_MAX;
	int32_t x578 = INT32_MIN;
	volatile uint8_t x580 = 18U;
	volatile int32_t t75 = -1695166;

	t75 = (x577>>(x578<(x579&x580)));

	if (t75 != 16383) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x598 = UINT32_MAX;
	int32_t x599 = -1;
	int64_t t76 = -3164715133LL;

	t76 = (x597>>(x598<(x599&x600)));

	if (t76 != 179LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x609 = 38U;
	uint32_t x610 = UINT32_MAX;
	volatile int8_t x611 = -1;
	int16_t x612 = INT16_MIN;

	t77 = (x609>>(x610<(x611&x612)));

	if (t77 != 38U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x613 = UINT8_MAX;
	volatile uint16_t x614 = 66U;
	int32_t x615 = INT32_MIN;
	int32_t x616 = INT32_MIN;
	int32_t t78 = -1763;

	t78 = (x613>>(x614<(x615&x616)));

	if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x630 = -847077527;
	int32_t x631 = 266651689;
	int64_t x632 = 135LL;
	uint32_t t79 = 455332U;

	t79 = (x629>>(x630<(x631&x632)));

	if (t79 != 109110372U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x633 = INT8_MAX;
	int16_t x634 = INT16_MAX;
	int8_t x635 = 7;
	int32_t t80 = 0;

	t80 = (x633>>(x634<(x635&x636)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x637 = INT64_MAX;
	static int8_t x638 = INT8_MAX;
	static int64_t x639 = INT64_MIN;
	volatile int32_t x640 = 515536293;
	int64_t t81 = INT64_MAX;

	t81 = (x637>>(x638<(x639&x640)));

	if (t81 != INT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x645 = INT8_MAX;
	volatile uint8_t x646 = 89U;
	uint32_t x647 = 51258U;
	static uint32_t x648 = 59U;
	volatile int32_t t82 = -79;

	t82 = (x645>>(x646<(x647&x648)));

	if (t82 != 127) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x649 = 40663365U;
	static uint8_t x650 = 20U;
	int64_t x651 = 2204379LL;
	int8_t x652 = INT8_MAX;
	static uint32_t t83 = 1119671809U;

	t83 = (x649>>(x650<(x651&x652)));

	if (t83 != 20331682U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x653 = UINT64_MAX;
	volatile int16_t x654 = -1;
	uint64_t x655 = 609085197845LLU;
	int64_t x656 = -1LL;
	uint64_t t84 = UINT64_MAX;

	t84 = (x653>>(x654<(x655&x656)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x657 = 2049353232307165806LLU;
	static int8_t x658 = -49;
	int32_t x659 = INT32_MAX;
	uint8_t x660 = 0U;
	uint64_t t85 = 150806851459457LLU;

	t85 = (x657>>(x658<(x659&x660)));

	if (t85 != 1024676616153582903LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x665 = UINT16_MAX;
	int64_t x666 = -1LL;
	volatile int32_t x667 = -1;
	int8_t x668 = 58;
	int32_t t86 = 78;

	t86 = (x665>>(x666<(x667&x668)));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x669 = 202145191149067LLU;
	static uint64_t x670 = 7436344238935157LLU;
	uint16_t x671 = UINT16_MAX;
	uint32_t x672 = 21527U;
	volatile uint64_t t87 = 36LLU;

	t87 = (x669>>(x670<(x671&x672)));

	if (t87 != 202145191149067LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x678 = INT16_MAX;
	static int16_t x679 = 11463;
	uint64_t x680 = 39354116LLU;
	volatile uint32_t t88 = 1732963U;

	t88 = (x677>>(x678<(x679&x680)));

	if (t88 != 537785022U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x685 = UINT64_MAX;
	static uint16_t x688 = 0U;
	uint64_t t89 = UINT64_MAX;

	t89 = (x685>>(x686<(x687&x688)));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x689 = 0U;
	int64_t x690 = -1LL;
	volatile int16_t x692 = INT16_MIN;
	volatile uint32_t t90 = 123316782U;

	t90 = (x689>>(x690<(x691&x692)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x694 = 1;
	int32_t x695 = -56;
	uint64_t x696 = UINT64_MAX;
	volatile int64_t t91 = 1LL;

	t91 = (x693>>(x694<(x695&x696)));

	if (t91 != 1933390195287LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x717 = 8;
	uint32_t x718 = 6U;
	static int8_t x719 = -51;
	static volatile int32_t t92 = -10363623;

	t92 = (x717>>(x718<(x719&x720)));

	if (t92 != 4) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x721 = UINT8_MAX;
	uint8_t x722 = 11U;
	static uint8_t x723 = UINT8_MAX;
	uint64_t x724 = 30LLU;

	t93 = (x721>>(x722<(x723&x724)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x725 = 3U;
	static int64_t x727 = 89247013464327732LL;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t94 = -5988733;

	t94 = (x725>>(x726<(x727&x728)));

	if (t94 != 3) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x729 = 623833;
	volatile int16_t x730 = -1;
	int64_t x731 = -53183LL;
	volatile uint64_t x732 = 46129703LLU;
	int32_t t95 = 1922654;

	t95 = (x729>>(x730<(x731&x732)));

	if (t95 != 623833) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x737 = 2U;
	int16_t x739 = -1;
	int32_t x740 = 9766262;

	t96 = (x737>>(x738<(x739&x740)));

	if (t96 != 2U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x742 = -1442836109047985300LL;
	volatile int64_t x743 = 14935728949LL;
	int8_t x744 = INT8_MIN;
	volatile int32_t t97 = -1009;

	t97 = (x741>>(x742<(x743&x744)));

	if (t97 != 43) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x745 = 76U;
	volatile int8_t x748 = INT8_MIN;
	volatile int32_t t98 = 5732;

	t98 = (x745>>(x746<(x747&x748)));

	if (t98 != 76) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x749 = UINT32_MAX;

	t99 = (x749>>(x750<(x751&x752)));

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

