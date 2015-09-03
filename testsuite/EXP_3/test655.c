#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x8 = 13U;
uint64_t x12 = 506420370LLU;
int16_t x53 = 176;
int16_t x65 = INT16_MIN;
volatile int32_t t7 = 2080895;
uint16_t x74 = UINT16_MAX;
volatile int64_t x83 = 287783219122399718LL;
int64_t x135 = INT64_MIN;
volatile int64_t t17 = 19LL;
volatile int64_t x146 = -1LL;
uint64_t x161 = 13747956799853920LLU;
int64_t x163 = INT64_MAX;
int16_t x164 = -1;
static uint64_t x166 = 2533938492LLU;
int64_t t22 = -4416614269883072LL;
int8_t x182 = INT8_MAX;
uint32_t x197 = UINT32_MAX;
int32_t x198 = INT32_MIN;
uint64_t x199 = 32LLU;
uint64_t x215 = UINT64_MAX;
volatile uint8_t x226 = 14U;
int16_t x228 = -1;
static uint64_t x235 = UINT64_MAX;
volatile uint32_t x236 = 126U;
int16_t x238 = INT16_MIN;
volatile int32_t t34 = 121237;
int32_t x261 = -59;
uint32_t x262 = 88U;
uint16_t x265 = 3U;
int8_t x266 = INT8_MIN;
int32_t x273 = -1;
volatile int8_t x289 = -1;
int16_t x291 = INT16_MIN;
volatile uint32_t x292 = 24U;
int64_t t41 = -37377492LL;
static volatile int8_t x341 = INT8_MAX;
int8_t x352 = -1;
volatile int16_t x362 = INT16_MIN;
uint8_t x374 = 3U;
uint8_t x395 = UINT8_MAX;
static uint8_t x424 = 20U;
static int64_t t49 = -1066523410LL;
int16_t x442 = -1;
int32_t x445 = INT32_MIN;
static int32_t x447 = INT32_MIN;
volatile int64_t t54 = 55977LL;
int16_t x461 = -1;
uint32_t x462 = 12582312U;
int64_t x463 = INT64_MAX;
uint8_t x464 = 49U;
int64_t t55 = -3514405116LL;
uint64_t x475 = UINT64_MAX;
static int64_t x482 = INT64_MAX;
int64_t t58 = -6884LL;
int8_t x506 = INT8_MAX;
int8_t x509 = 31;
int8_t x510 = INT8_MIN;
uint64_t t61 = 498247586147558LLU;
volatile uint64_t t62 = 32161380057267LLU;
int64_t x519 = INT64_MIN;
static int64_t t63 = -490868489853653485LL;
volatile int64_t t64 = -12LL;
int16_t x553 = -1;
int8_t x570 = -1;
int32_t x579 = INT32_MIN;
static volatile uint32_t x580 = 2413U;
int64_t t67 = 32517LL;
volatile uint64_t t68 = 11445266LLU;
int16_t x591 = INT16_MIN;
volatile int64_t t69 = -1409269974LL;
int16_t x601 = -23;
int16_t x604 = INT16_MIN;
static volatile int32_t x606 = INT32_MIN;
int64_t x617 = INT64_MIN;
int32_t x618 = -980472;
volatile uint64_t t73 = 247911323LLU;
static int64_t t74 = -159484105583484LL;
volatile uint32_t t76 = 2U;
uint64_t x652 = UINT64_MAX;
int32_t x662 = INT32_MIN;
static uint32_t t78 = 160U;
volatile int64_t x680 = -12189379LL;
uint32_t x690 = 25297U;
int32_t x691 = -14812;
volatile uint32_t t81 = 50U;
static int16_t x714 = -1;
uint32_t x721 = 238616305U;
int64_t t88 = 11LL;
int32_t x726 = INT32_MIN;
volatile uint32_t t90 = 7241302U;
uint64_t x759 = UINT64_MAX;
static int64_t x775 = INT64_MAX;
int64_t x791 = 25137221849717LL;
int64_t x795 = INT64_MIN;
int64_t x796 = -21LL;
static int8_t x798 = INT8_MAX;


void f0(void) {
	static volatile uint16_t x5 = 36U;
	volatile uint8_t x6 = 1U;
	volatile uint16_t x7 = UINT16_MAX;
	static int32_t t0 = 180615;

	t0 = ((x5|x6)%(x7/x8));

	if (t0 != 37) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = INT32_MAX;
	uint32_t x10 = 950968U;
	uint64_t x11 = 415260640173663574LLU;
	uint64_t t1 = 10385231702252LLU;

	t1 = ((x9|x10)%(x11/x12));

	if (t1 != 507499695LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 22922774789LLU;
	uint16_t x14 = 1931U;
	int16_t x15 = -1747;
	int8_t x16 = INT8_MAX;
	static uint64_t t2 = 7LLU;

	t2 = ((x13|x14)%(x15/x16));

	if (t2 != 22922776463LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x45 = -60LL;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 4U;
	int64_t t3 = 762618539857126LL;

	t3 = ((x45|x46)%(x47/x48));

	if (t3 != -60LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x54 = -1;
	int64_t x55 = INT64_MAX;
	volatile uint16_t x56 = 30085U;
	static int64_t t4 = 205864135517879558LL;

	t4 = ((x53|x54)%(x55/x56));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x57 = -35747485877LL;
	static uint8_t x58 = 102U;
	static int32_t x59 = INT32_MAX;
	static int8_t x60 = -3;
	int64_t t5 = 135667087LL;

	t5 = ((x57|x58)%(x59/x60));

	if (t5 != -671919623LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = INT64_MIN;
	int32_t x68 = -27911;
	volatile int64_t t6 = -1LL;

	t6 = ((x65|x66)%(x67/x68));

	if (t6 != 4294967295LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x69 = UINT16_MAX;
	volatile int32_t x70 = -8119493;
	static volatile int32_t x71 = INT32_MIN;
	int32_t x72 = -56551;

	t7 = ((x69|x70)%(x71/x72));

	if (t7 != -10441) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x73 = -1;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = 13U;
	volatile int32_t t8 = 84429;

	t8 = ((x73|x74)%(x75/x76));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x77 = INT64_MAX;
	int64_t x78 = 358LL;
	int64_t x79 = INT64_MAX;
	int8_t x80 = INT8_MAX;
	static int64_t t9 = 1229240051LL;

	t9 = ((x77|x78)%(x79/x80));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x81 = 2029U;
	static int64_t x82 = INT64_MAX;
	volatile int8_t x84 = INT8_MIN;
	int64_t t10 = 2LL;

	t10 = ((x81|x82)%(x83/x84));

	if (t10 != 819186541625613LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x85 = INT64_MIN;
	static volatile int64_t x86 = -1LL;
	static volatile int32_t x87 = 469531;
	int32_t x88 = -1;
	int64_t t11 = 1736898104266LL;

	t11 = ((x85|x86)%(x87/x88));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x93 = 2233U;
	int32_t x94 = INT32_MIN;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = -1LL;
	static volatile int64_t t12 = -17449641099335972LL;

	t12 = ((x93|x94)%(x95/x96));

	if (t12 != -30535LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = INT8_MIN;
	int16_t x98 = INT16_MAX;
	volatile uint64_t x99 = 24183226290532865LLU;
	int64_t x100 = 2368988LL;
	static uint64_t t13 = 22541223624060321LLU;

	t13 = ((x97|x98)%(x99/x100));

	if (t13 != 991557467LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x101 = 12157U;
	int16_t x102 = INT16_MIN;
	int64_t x103 = -218265325869995LL;
	uint32_t x104 = 69137U;
	int64_t t14 = -2LL;

	t14 = ((x101|x102)%(x103/x104));

	if (t14 != 1137949334LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x105 = -1;
	uint64_t x106 = 911366LLU;
	int16_t x107 = INT16_MIN;
	uint8_t x108 = UINT8_MAX;
	uint64_t t15 = 150168253887308875LLU;

	t15 = ((x105|x106)%(x107/x108));

	if (t15 != 127LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x109 = UINT8_MAX;
	volatile int32_t x110 = INT32_MIN;
	static uint64_t x111 = UINT64_MAX;
	int16_t x112 = -1;
	volatile uint64_t t16 = 15227552503LLU;

	t16 = ((x109|x110)%(x111/x112));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x133 = INT8_MIN;
	volatile uint8_t x134 = 76U;
	volatile int64_t x136 = -638774468065176324LL;

	t17 = ((x133|x134)%(x135/x136));

	if (t17 != -10LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x141 = 123691166LL;
	static uint64_t x142 = 7141495292LLU;
	uint64_t x143 = 135LLU;
	uint8_t x144 = 3U;
	static uint64_t t18 = 316173LLU;

	t18 = ((x141|x142)%(x143/x144));

	if (t18 != 41LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x145 = INT32_MAX;
	int32_t x147 = 208;
	volatile uint8_t x148 = 20U;
	int64_t t19 = -53LL;

	t19 = ((x145|x146)%(x147/x148));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x162 = 64U;
	volatile uint64_t t20 = 837186LLU;

	t20 = ((x161|x162)%(x163/x164));

	if (t20 != 13747956799853920LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x165 = 14207U;
	int32_t x167 = 26239;
	volatile uint8_t x168 = 12U;
	uint64_t t21 = 22711LLU;

	t21 = ((x165|x166)%(x167/x168));

	if (t21 != 1643LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x169 = -1LL;
	volatile int64_t x170 = INT64_MIN;
	volatile uint16_t x171 = 16739U;
	int32_t x172 = -14969;

	t22 = ((x169|x170)%(x171/x172));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	int64_t x175 = INT64_MIN;
	int32_t x176 = 10340728;
	int64_t t23 = -2867501563896LL;

	t23 = ((x173|x174)%(x175/x176));

	if (t23 != -2147450881LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x181 = INT64_MIN;
	int32_t x183 = -1205131;
	volatile int8_t x184 = INT8_MIN;
	static int64_t t24 = -117LL;

	t24 = ((x181|x182)%(x183/x184));

	if (t24 != -8106LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x185 = -295;
	uint64_t x186 = UINT64_MAX;
	static volatile int16_t x187 = INT16_MAX;
	volatile uint16_t x188 = 339U;
	static volatile uint64_t t25 = 52082LLU;

	t25 = ((x185|x186)%(x187/x188));

	if (t25 != 63LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x200 = 19U;
	volatile uint64_t t26 = 160529LLU;

	t26 = ((x197|x198)%(x199/x200));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x205 = 557338002U;
	int8_t x206 = INT8_MIN;
	uint64_t x207 = UINT64_MAX;
	uint32_t x208 = UINT32_MAX;
	uint64_t t27 = 603826625753800419LLU;

	t27 = ((x205|x206)%(x207/x208));

	if (t27 != 4294967186LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x209 = -1;
	volatile int8_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	volatile int16_t x212 = 6;
	int32_t t28 = -3;

	t28 = ((x209|x210)%(x211/x212));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x213 = -63;
	int16_t x214 = INT16_MIN;
	uint32_t x216 = UINT32_MAX;
	uint64_t t29 = 2004019420LLU;

	t29 = ((x213|x214)%(x215/x216));

	if (t29 != 4294967235LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x225 = UINT8_MAX;
	volatile uint8_t x227 = 12U;
	volatile int32_t t30 = 1;

	t30 = ((x225|x226)%(x227/x228));

	if (t30 != 3) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x233 = 185;
	int64_t x234 = -1LL;
	static uint64_t t31 = 3787LLU;

	t31 = ((x233|x234)%(x235/x236));

	if (t31 != 15LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x237 = -476466LL;
	static int64_t x239 = INT64_MIN;
	static int32_t x240 = INT32_MIN;
	static volatile int64_t t32 = -2674LL;

	t32 = ((x237|x238)%(x239/x240));

	if (t32 != -17714LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MIN;
	volatile int32_t x251 = 194857923;
	volatile int64_t x252 = -1LL;
	volatile int64_t t33 = -154746417LL;

	t33 = ((x249|x250)%(x251/x252));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x257 = -1;
	static volatile int32_t x258 = -727874677;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -1;

	t34 = ((x257|x258)%(x259/x260));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x263 = INT8_MIN;
	uint64_t x264 = 7LLU;
	volatile uint64_t t35 = 4400364657158900311LLU;

	t35 = ((x261|x262)%(x263/x264));

	if (t35 != 4294967261LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x267 = UINT32_MAX;
	int32_t x268 = INT32_MAX;
	volatile uint32_t t36 = 8592082U;

	t36 = ((x265|x266)%(x267/x268));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x274 = INT8_MIN;
	static int32_t x275 = -12729430;
	static int16_t x276 = INT16_MIN;
	volatile int32_t t37 = -1;

	t37 = ((x273|x274)%(x275/x276));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x277 = -1;
	int64_t x278 = -33643901978LL;
	volatile int16_t x279 = INT16_MIN;
	int32_t x280 = 1;
	volatile int64_t t38 = 118521958LL;

	t38 = ((x277|x278)%(x279/x280));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x290 = 22U;
	uint32_t t39 = 14710U;

	t39 = ((x289|x290)%(x291/x292));

	if (t39 != 32775U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x317 = -173;
	int8_t x318 = INT8_MIN;
	uint16_t x319 = UINT16_MAX;
	volatile int16_t x320 = INT16_MIN;
	int32_t t40 = 15538918;

	t40 = ((x317|x318)%(x319/x320));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x333 = INT32_MIN;
	static int64_t x334 = INT64_MIN;
	int8_t x335 = 8;
	int32_t x336 = 5;

	t41 = ((x333|x334)%(x335/x336));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x342 = UINT32_MAX;
	static uint64_t x343 = 4118673567447LLU;
	volatile uint8_t x344 = UINT8_MAX;
	uint64_t t42 = 1LLU;

	t42 = ((x341|x342)%(x343/x344));

	if (t42 != 4294967295LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x349 = 6897;
	int16_t x350 = INT16_MAX;
	int8_t x351 = -1;
	static volatile int32_t t43 = 0;

	t43 = ((x349|x350)%(x351/x352));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x361 = 931U;
	int64_t x363 = INT64_MAX;
	static uint16_t x364 = 29906U;
	volatile int64_t t44 = -575078842764LL;

	t44 = ((x361|x362)%(x363/x364));

	if (t44 != -31837LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x365 = -1;
	int16_t x366 = -1;
	int64_t x367 = -68865901386127845LL;
	static int64_t x368 = -1LL;
	volatile int64_t t45 = 1LL;

	t45 = ((x365|x366)%(x367/x368));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x373 = 1892U;
	volatile uint16_t x375 = UINT16_MAX;
	int8_t x376 = 4;
	int32_t t46 = -1;

	t46 = ((x373|x374)%(x375/x376));

	if (t46 != 1895) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x393 = UINT16_MAX;
	static int8_t x394 = -1;
	uint8_t x396 = UINT8_MAX;
	volatile int32_t t47 = -77;

	t47 = ((x393|x394)%(x395/x396));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x401 = INT8_MIN;
	volatile int32_t x402 = 8530840;
	int64_t x403 = INT64_MAX;
	static uint8_t x404 = UINT8_MAX;
	volatile int64_t t48 = 808LL;

	t48 = ((x401|x402)%(x403/x404));

	if (t48 != -104LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x421 = INT64_MIN;
	int16_t x422 = INT16_MIN;
	volatile int16_t x423 = 9643;

	t49 = ((x421|x422)%(x423/x424));

	if (t49 != -474LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x429 = INT8_MAX;
	int8_t x430 = 6;
	static int16_t x431 = -1;
	volatile int64_t x432 = -1LL;
	volatile int64_t t50 = -1LL;

	t50 = ((x429|x430)%(x431/x432));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x433 = 855;
	static volatile int8_t x434 = INT8_MIN;
	uint8_t x435 = 74U;
	int8_t x436 = 1;
	int32_t t51 = -278886163;

	t51 = ((x433|x434)%(x435/x436));

	if (t51 != -41) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x441 = -3621;
	int16_t x443 = INT16_MIN;
	int16_t x444 = 115;
	volatile int32_t t52 = -1;

	t52 = ((x441|x442)%(x443/x444));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x446 = 379U;
	uint8_t x448 = 83U;
	volatile int32_t t53 = 792809;

	t53 = ((x445|x446)%(x447/x448));

	if (t53 != -25872997) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x453 = 0;
	uint16_t x454 = UINT16_MAX;
	volatile int64_t x455 = INT64_MAX;
	volatile int16_t x456 = INT16_MIN;

	t54 = ((x453|x454)%(x455/x456));

	if (t54 != 65535LL) { NG(); } else { ; }
	
}

void f55(void) {


	t55 = ((x461|x462)%(x463/x464));

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x473 = -1;
	volatile int16_t x474 = INT16_MIN;
	static volatile int8_t x476 = INT8_MIN;
	volatile uint64_t t56 = 15752287132826LLU;

	t56 = ((x473|x474)%(x475/x476));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x481 = INT16_MIN;
	static int64_t x483 = INT64_MIN;
	int8_t x484 = 6;
	volatile int64_t t57 = -3LL;

	t57 = ((x481|x482)%(x483/x484));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x485 = 2U;
	static int64_t x486 = INT64_MIN;
	uint16_t x487 = UINT16_MAX;
	int32_t x488 = -1;

	t58 = ((x485|x486)%(x487/x488));

	if (t58 != -32766LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x489 = INT8_MIN;
	uint16_t x490 = 7U;
	int32_t x491 = INT32_MIN;
	int32_t x492 = INT32_MIN;
	volatile int32_t t59 = -702;

	t59 = ((x489|x490)%(x491/x492));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x505 = UINT32_MAX;
	static uint32_t x507 = 705576459U;
	uint16_t x508 = UINT16_MAX;
	static volatile uint32_t t60 = 420082238U;

	t60 = ((x505|x506)%(x507/x508));

	if (t60 != 787U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x511 = 107114414673742558LLU;
	int16_t x512 = INT16_MAX;

	t61 = ((x509|x510)%(x511/x512));

	if (t61 != 2150398667475LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x513 = 93582198487130LLU;
	volatile int8_t x514 = INT8_MAX;
	uint8_t x515 = 22U;
	int8_t x516 = -1;

	t62 = ((x513|x514)%(x515/x516));

	if (t62 != 93582198487167LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x517 = INT64_MAX;
	int8_t x518 = INT8_MIN;
	static uint16_t x520 = 1U;

	t63 = ((x517|x518)%(x519/x520));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x541 = INT16_MAX;
	int16_t x542 = -6;
	int64_t x543 = -1LL;
	int16_t x544 = -1;

	t64 = ((x541|x542)%(x543/x544));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x554 = -1;
	uint64_t x555 = UINT64_MAX;
	static uint32_t x556 = UINT32_MAX;
	volatile uint64_t t65 = 2464LLU;

	t65 = ((x553|x554)%(x555/x556));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x569 = 7097561176906LLU;
	int32_t x571 = INT32_MIN;
	uint8_t x572 = 25U;
	uint64_t t66 = 12760500683908823LLU;

	t66 = ((x569|x570)%(x571/x572));

	if (t66 != 85899344LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x577 = 3831U;
	int64_t x578 = INT64_MIN;

	t67 = ((x577|x578)%(x579/x580));

	if (t67 != -528681LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x581 = INT64_MIN;
	int64_t x582 = INT64_MAX;
	uint64_t x583 = UINT64_MAX;
	int16_t x584 = INT16_MIN;

	t68 = ((x581|x582)%(x583/x584));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x589 = INT16_MIN;
	int64_t x590 = INT64_MAX;
	int16_t x592 = -1;

	t69 = ((x589|x590)%(x591/x592));

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x593 = INT32_MIN;
	int32_t x594 = INT32_MIN;
	uint16_t x595 = UINT16_MAX;
	int32_t x596 = 3;
	int32_t t70 = -727;

	t70 = ((x593|x594)%(x595/x596));

	if (t70 != -10923) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x602 = -1;
	static int64_t x603 = INT64_MIN;
	int64_t t71 = -1030533458346979367LL;

	t71 = ((x601|x602)%(x603/x604));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x605 = INT64_MIN;
	volatile int32_t x607 = INT32_MAX;
	uint16_t x608 = 7U;
	static int64_t t72 = 2LL;

	t72 = ((x605|x606)%(x607/x608));

	if (t72 != -2LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x619 = 235661477LLU;
	uint16_t x620 = UINT16_MAX;

	t73 = ((x617|x618)%(x619/x620));

	if (t73 != 3269LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x621 = 11U;
	int8_t x622 = -1;
	static int64_t x623 = INT64_MAX;
	static uint8_t x624 = 2U;

	t74 = ((x621|x622)%(x623/x624));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MIN;
	uint32_t x643 = UINT32_MAX;
	int16_t x644 = INT16_MIN;
	volatile int64_t t75 = 526LL;

	t75 = ((x641|x642)%(x643/x644));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x645 = UINT32_MAX;
	int32_t x646 = INT32_MAX;
	static int32_t x647 = INT32_MIN;
	int16_t x648 = -11;

	t76 = ((x645|x646)%(x647/x648));

	if (t76 != 3U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x649 = INT16_MIN;
	uint16_t x650 = 3U;
	int32_t x651 = -1;
	uint64_t t77 = 120724LLU;

	t77 = ((x649|x650)%(x651/x652));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x661 = -1;
	int8_t x663 = -1;
	volatile uint32_t x664 = 19482086U;

	t78 = ((x661|x662)%(x663/x664));

	if (t78 != 135U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x673 = 3158;
	int16_t x674 = INT16_MAX;
	volatile int16_t x675 = INT16_MIN;
	int16_t x676 = INT16_MIN;
	volatile int32_t t79 = 15316340;

	t79 = ((x673|x674)%(x675/x676));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x677 = 1U;
	int32_t x678 = -7;
	volatile int32_t x679 = INT32_MIN;
	volatile int64_t t80 = -874638648330LL;

	t80 = ((x677|x678)%(x679/x680));

	if (t80 != -7LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x689 = 0;
	uint8_t x692 = 43U;

	t81 = ((x689|x690)%(x691/x692));

	if (t81 != 25297U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x693 = -3;
	int32_t x694 = INT32_MAX;
	int64_t x695 = INT64_MIN;
	uint16_t x696 = UINT16_MAX;
	volatile int64_t t82 = 285LL;

	t82 = ((x693|x694)%(x695/x696));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x701 = 1U;
	int16_t x702 = -1;
	uint16_t x703 = 296U;
	int8_t x704 = INT8_MIN;
	static int32_t t83 = 2;

	t83 = ((x701|x702)%(x703/x704));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x705 = INT16_MAX;
	int32_t x706 = -1;
	volatile uint32_t x707 = UINT32_MAX;
	volatile int16_t x708 = 29;
	volatile uint32_t t84 = 33522U;

	t84 = ((x705|x706)%(x707/x708));

	if (t84 != 15U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x709 = INT8_MIN;
	int64_t x710 = -2483465838255896LL;
	volatile int16_t x711 = INT16_MIN;
	static int16_t x712 = INT16_MAX;
	int64_t t85 = -1052882LL;

	t85 = ((x709|x710)%(x711/x712));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x713 = INT64_MIN;
	static volatile int32_t x715 = 2945757;
	volatile uint32_t x716 = 5644U;
	int64_t t86 = 16021684LL;

	t86 = ((x713|x714)%(x715/x716));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x717 = INT8_MAX;
	int16_t x718 = -13;
	volatile uint32_t x719 = UINT32_MAX;
	static int16_t x720 = -1;
	volatile uint32_t t87 = 36U;

	t87 = ((x717|x718)%(x719/x720));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x722 = INT64_MAX;
	uint32_t x723 = UINT32_MAX;
	uint32_t x724 = 967822U;

	t88 = ((x721|x722)%(x723/x724));

	if (t88 != 3085LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x725 = 0;
	volatile int64_t x727 = -34344345510LL;
	uint16_t x728 = 100U;
	volatile int64_t t89 = 5LL;

	t89 = ((x725|x726)%(x727/x728));

	if (t89 != -86822918LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x745 = INT8_MIN;
	static uint32_t x746 = UINT32_MAX;
	int32_t x747 = INT32_MIN;
	int16_t x748 = -7;

	t90 = ((x745|x746)%(x747/x748));

	if (t90 != 3U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x749 = -110;
	static int8_t x750 = -1;
	int32_t x751 = INT32_MIN;
	static uint64_t x752 = 390037435905LLU;
	uint64_t t91 = 69415071510LLU;

	t91 = ((x749|x750)%(x751/x752));

	if (t91 != 38297401LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x753 = 39U;
	int64_t x754 = -1LL;
	int64_t x755 = INT64_MAX;
	int8_t x756 = -1;
	int64_t t92 = 153610615495971LL;

	t92 = ((x753|x754)%(x755/x756));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x757 = 167U;
	static uint32_t x758 = 0U;
	int16_t x760 = INT16_MIN;
	uint64_t t93 = 1320LLU;

	t93 = ((x757|x758)%(x759/x760));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x761 = INT32_MAX;
	int16_t x762 = INT16_MIN;
	int16_t x763 = -1;
	uint32_t x764 = UINT32_MAX;
	static volatile uint32_t t94 = 29557U;

	t94 = ((x761|x762)%(x763/x764));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x765 = 1LLU;
	static int8_t x766 = INT8_MIN;
	volatile int64_t x767 = -114045791130999569LL;
	static volatile int32_t x768 = INT32_MIN;
	static uint64_t t95 = 50862131847LLU;

	t95 = ((x765|x766)%(x767/x768));

	if (t95 != 43491259LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x773 = INT64_MIN;
	static int8_t x774 = -1;
	int8_t x776 = INT8_MIN;
	volatile int64_t t96 = 59975358LL;

	t96 = ((x773|x774)%(x775/x776));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x789 = 4U;
	int8_t x790 = INT8_MIN;
	volatile uint16_t x792 = 3352U;
	static int64_t t97 = 495956788LL;

	t97 = ((x789|x790)%(x791/x792));

	if (t97 != -124LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x793 = 120405LL;
	uint64_t x794 = 25447787099614950LLU;
	volatile uint64_t t98 = 18LLU;

	t98 = ((x793|x794)%(x795/x796));

	if (t98 != 25447787099717367LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x797 = -1;
	int64_t x799 = INT64_MIN;
	volatile int32_t x800 = INT32_MIN;
	volatile int64_t t99 = -4798581733487086LL;

	t99 = ((x797|x798)%(x799/x800));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

