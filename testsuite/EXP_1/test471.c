#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x11 = -197LL;
volatile int8_t x12 = INT8_MIN;
uint32_t x13 = 0U;
int64_t x19 = INT64_MIN;
static uint32_t x26 = 227U;
uint16_t x30 = 26U;
volatile int32_t x31 = INT32_MIN;
volatile int64_t t4 = -964664228LL;
uint64_t x48 = 739552968435LLU;
int32_t x54 = INT32_MIN;
static uint8_t x60 = 7U;
int64_t x70 = 1988LL;
int8_t x78 = 10;
static int32_t t11 = 1;
uint64_t x94 = UINT64_MAX;
volatile uint16_t x95 = UINT16_MAX;
int16_t x103 = INT16_MIN;
static int16_t x104 = -1;
uint32_t x119 = UINT32_MAX;
int16_t x120 = INT16_MIN;
uint8_t x121 = UINT8_MAX;
volatile int64_t t19 = -66043686074171709LL;
uint16_t x147 = 13461U;
static volatile uint8_t x164 = UINT8_MAX;
static int64_t x176 = INT64_MAX;
static int32_t x184 = INT32_MAX;
volatile uint8_t x203 = 8U;
static int16_t x224 = -1;
static int64_t t28 = 1350152736LL;
int8_t x244 = INT8_MIN;
static volatile uint64_t t31 = 1735120331LLU;
volatile uint32_t t32 = 98839628U;
int32_t x272 = 16070;
int16_t x277 = -159;
uint8_t x278 = 12U;
int64_t x280 = INT64_MIN;
int32_t x291 = -1;
int64_t x292 = 2LL;
uint16_t x297 = 283U;
int32_t x298 = -1;
uint8_t x307 = 17U;
volatile uint64_t x311 = UINT64_MAX;
int16_t x312 = INT16_MIN;
static int16_t x317 = INT16_MIN;
uint64_t x318 = 1162LLU;
int16_t x319 = INT16_MAX;
static volatile uint64_t t41 = 6848LLU;
uint32_t x324 = 175427U;
static int32_t x329 = -1;
static uint32_t x341 = UINT32_MAX;
uint8_t x344 = 21U;
volatile int32_t x347 = 2063;
int32_t x348 = 0;
volatile int16_t x354 = -1;
int8_t x356 = INT8_MIN;
static volatile int32_t t46 = 0;
int16_t x357 = 65;
int16_t x358 = INT16_MIN;
volatile int32_t x383 = -34;
int32_t x387 = INT32_MAX;
int64_t x399 = INT64_MIN;
int16_t x401 = INT16_MIN;
static int16_t x403 = 644;
uint64_t x407 = 1563190911521693LLU;
int64_t x410 = INT64_MIN;
int8_t x412 = INT8_MIN;
uint64_t x418 = UINT64_MAX;
volatile int16_t x430 = 0;
volatile int16_t x432 = INT16_MIN;
int32_t t59 = 247910;
int64_t x439 = INT64_MIN;
int64_t t61 = 12735673368768LL;
int32_t x441 = -1;
uint64_t x446 = 1169682287281LLU;
int32_t x448 = -1;
static volatile int64_t x449 = -762006688632947LL;
int16_t x450 = -1;
uint16_t x468 = 6347U;
uint16_t x478 = 1U;
static int16_t x486 = INT16_MIN;
int16_t x492 = -1;
volatile int64_t t72 = 4210424LL;
int64_t x509 = -346666300LL;
uint16_t x512 = 2984U;
int64_t x525 = INT64_MAX;
int8_t x528 = 1;
volatile int64_t t75 = 5992971822084354LL;
volatile int64_t x532 = INT64_MAX;
uint64_t x538 = 1304456LLU;
volatile int16_t x540 = -4525;
int16_t x547 = INT16_MIN;
int8_t x549 = INT8_MAX;
volatile uint16_t x554 = 1311U;
uint16_t x556 = 27584U;
int32_t t82 = 31503;
volatile uint64_t x565 = 323696146612LLU;
int64_t t85 = -246942538124140LL;
static int32_t x577 = 95230;
int16_t x579 = 3486;
uint32_t t88 = 16239684U;
uint16_t x586 = 2U;
int32_t x587 = INT32_MIN;
volatile uint64_t t91 = 186717833963LLU;
static uint64_t x597 = 15127LLU;
int8_t x615 = -19;
int32_t t93 = 2442670;
volatile uint16_t x627 = 2963U;
static int8_t x628 = INT8_MIN;
volatile uint64_t t95 = 6793245622419LLU;
static int32_t t96 = 1934786;
int64_t x645 = -1LL;
int16_t x647 = -18;
int64_t t97 = 8LL;
static volatile uint32_t x653 = 85261886U;


void f0(void) {
	volatile int8_t x9 = 18;
	int64_t x10 = 161219660LL;
	static int64_t t0 = 223958LL;

	t0 = (((x9*x10)&x11)*x12);

	if (t0 != -371450088448LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x14 = 342859028U;
	static volatile int64_t x15 = 1LL;
	uint8_t x16 = 17U;
	int64_t t1 = 1097597052LL;

	t1 = (((x13*x14)&x15)*x16);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = 0;
	uint32_t x18 = 311115214U;
	int64_t x20 = INT64_MIN;
	volatile int64_t t2 = -2778983771LL;

	t2 = (((x17*x18)&x19)*x20);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int32_t x27 = INT32_MAX;
	uint16_t x28 = UINT16_MAX;
	uint32_t t3 = 230U;

	t3 = (((x25*x26)&x27)*x28);

	if (t3 != 2132607203U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x29 = UINT16_MAX;
	int64_t x32 = -1LL;

	t4 = (((x29*x30)&x31)*x32);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = UINT32_MAX;
	int16_t x47 = 2;
	volatile uint64_t t5 = 552454506176789257LLU;

	t5 = (((x45*x46)&x47)*x48);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x53 = 417LLU;
	volatile int8_t x55 = INT8_MAX;
	int8_t x56 = -1;
	uint64_t t6 = 2247863656098774934LLU;

	t6 = (((x53*x54)&x55)*x56);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x57 = UINT32_MAX;
	int16_t x58 = -3772;
	int8_t x59 = -1;
	uint32_t t7 = 3U;

	t7 = (((x57*x58)&x59)*x60);

	if (t7 != 26404U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x61 = 1U;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MAX;
	int64_t t8 = 131748360405873LL;

	t8 = (((x61*x62)&x63)*x64);

	if (t8 != 140733193355265LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x71 = 3U;
	int8_t x72 = -1;
	static volatile int64_t t9 = 3137LL;

	t9 = (((x69*x70)&x71)*x72);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x73 = UINT16_MAX;
	static uint8_t x74 = 17U;
	static int16_t x75 = -215;
	volatile uint32_t x76 = UINT32_MAX;
	volatile uint32_t t10 = 173U;

	t10 = (((x73*x74)&x75)*x76);

	if (t10 != 4293853399U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x77 = -4711;
	int8_t x79 = INT8_MIN;
	int16_t x80 = 1;

	t11 = (((x77*x78)&x79)*x80);

	if (t11 != -47232) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x81 = 4308347929763051156LLU;
	int32_t x82 = 1726;
	volatile int64_t x83 = INT64_MAX;
	int64_t x84 = INT64_MAX;
	uint64_t t12 = 179890974255452867LLU;

	t12 = (((x81*x82)&x83)*x84);

	if (t12 != 16276079007632557608LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x85 = 386704686U;
	int8_t x86 = -11;
	uint64_t x87 = UINT64_MAX;
	static volatile int32_t x88 = -752613360;
	volatile uint64_t t13 = 0LLU;

	t13 = (((x85*x86)&x87)*x88);

	if (t13 != 18415724549617131616LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x93 = INT16_MIN;
	static int16_t x96 = INT16_MIN;
	static volatile uint64_t t14 = 248651LLU;

	t14 = (((x93*x94)&x95)*x96);

	if (t14 != 18446744072635809792LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x101 = 7870459382089990635LLU;
	int64_t x102 = 48346189349563LL;
	uint64_t t15 = 8137748LLU;

	t15 = (((x101*x102)&x103)*x104);

	if (t15 != 5134170378023174144LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x113 = 0;
	static volatile int16_t x114 = -1;
	int8_t x115 = INT8_MIN;
	int16_t x116 = 495;
	static int32_t t16 = 1;

	t16 = (((x113*x114)&x115)*x116);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x117 = -1;
	int32_t x118 = -1;
	uint32_t t17 = 21973U;

	t17 = (((x117*x118)&x119)*x120);

	if (t17 != 4294934528U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x122 = 7U;
	int16_t x123 = INT16_MIN;
	int16_t x124 = INT16_MIN;
	int32_t t18 = 10187714;

	t18 = (((x121*x122)&x123)*x124);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x125 = INT16_MAX;
	int64_t x126 = -29531394795336LL;
	uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;

	t19 = (((x125*x126)&x127)*x128);

	if (t19 != -7578624LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x145 = INT16_MIN;
	volatile uint8_t x146 = UINT8_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t20 = 548U;

	t20 = (((x145*x146)&x147)*x148);

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x149 = 10920095U;
	static int16_t x150 = -3336;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = UINT32_MAX;
	volatile uint32_t t21 = 5831474U;

	t21 = (((x149*x150)&x151)*x152);

	if (t21 != 2069725184U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x161 = UINT16_MAX;
	int16_t x162 = -1;
	volatile uint8_t x163 = UINT8_MAX;
	int32_t t22 = 41;

	t22 = (((x161*x162)&x163)*x164);

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x173 = UINT8_MAX;
	volatile int16_t x174 = INT16_MIN;
	static volatile uint64_t x175 = 754583LLU;
	volatile uint64_t t23 = 89LLU;

	t23 = (((x173*x174)&x175)*x176);

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = -1;
	static volatile uint16_t x183 = 5U;
	volatile uint64_t t24 = 30774846038707LLU;

	t24 = (((x181*x182)&x183)*x184);

	if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x189 = -1;
	int8_t x190 = INT8_MIN;
	static int8_t x191 = -4;
	static int8_t x192 = -15;
	volatile int32_t t25 = -13784317;

	t25 = (((x189*x190)&x191)*x192);

	if (t25 != -1920) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x201 = 91U;
	int64_t x202 = -1LL;
	int16_t x204 = 1;
	int64_t t26 = -5342369091775060LL;

	t26 = (((x201*x202)&x203)*x204);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x205 = 7U;
	uint16_t x206 = 241U;
	int32_t x207 = INT32_MAX;
	uint16_t x208 = 29U;
	int32_t t27 = -34727;

	t27 = (((x205*x206)&x207)*x208);

	if (t27 != 48923) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x221 = -49;
	int64_t x222 = -1LL;
	int64_t x223 = INT64_MIN;

	t28 = (((x221*x222)&x223)*x224);

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x229 = 1;
	int64_t x230 = -911096LL;
	uint16_t x231 = 3U;
	int64_t x232 = -1LL;
	static int64_t t29 = 730012853907614LL;

	t29 = (((x229*x230)&x231)*x232);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x241 = -946LL;
	static volatile int64_t x242 = -1LL;
	volatile uint16_t x243 = UINT16_MAX;
	volatile int64_t t30 = 3LL;

	t30 = (((x241*x242)&x243)*x244);

	if (t30 != -121088LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x261 = 67U;
	static uint64_t x262 = UINT64_MAX;
	uint64_t x263 = 6571645142531413044LLU;
	volatile int8_t x264 = INT8_MIN;

	t31 = (((x261*x262)&x263)*x264);

	if (t31 != 7379649146618504704LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x265 = -1;
	volatile uint8_t x266 = UINT8_MAX;
	int32_t x267 = INT32_MIN;
	uint32_t x268 = UINT32_MAX;

	t32 = (((x265*x266)&x267)*x268);

	if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x269 = INT8_MAX;
	int32_t x270 = 155;
	uint8_t x271 = UINT8_MAX;
	static int32_t t33 = 4;

	t33 = (((x269*x270)&x271)*x272);

	if (t33 != 3680030) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x279 = 1U;
	int64_t t34 = -488558LL;

	t34 = (((x277*x278)&x279)*x280);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x289 = INT16_MIN;
	uint8_t x290 = 3U;
	int64_t t35 = 140562LL;

	t35 = (((x289*x290)&x291)*x292);

	if (t35 != -196608LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x293 = 398408U;
	uint64_t x294 = 22362LLU;
	static volatile int16_t x295 = 66;
	static int32_t x296 = INT32_MIN;
	volatile uint64_t t36 = 4680835802818588LLU;

	t36 = (((x293*x294)&x295)*x296);

	if (t36 != 18446743936270598144LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x299 = INT64_MAX;
	uint64_t x300 = 1831280422817LLU;
	uint64_t t37 = 451247404812LLU;

	t37 = (((x297*x298)&x299)*x300);

	if (t37 != 9222853784495118597LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x305 = INT32_MIN;
	uint64_t x306 = 0LLU;
	int32_t x308 = -22;
	static uint64_t t38 = 41233793099LLU;

	t38 = (((x305*x306)&x307)*x308);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x309 = 1656176099534419382LL;
	int8_t x310 = 0;
	volatile uint64_t t39 = 0LLU;

	t39 = (((x309*x310)&x311)*x312);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x313 = -1;
	static int8_t x314 = INT8_MIN;
	volatile uint64_t x315 = 720387363196096639LLU;
	volatile int8_t x316 = INT8_MIN;
	volatile uint64_t t40 = 8970619LLU;

	t40 = (((x313*x314)&x315)*x316);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x320 = INT8_MIN;

	t41 = (((x317*x318)&x319)*x320);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x321 = 116304LLU;
	int8_t x322 = INT8_MAX;
	int8_t x323 = INT8_MAX;
	volatile uint64_t t42 = 1865609360LLU;

	t42 = (((x321*x322)&x323)*x324);

	if (t42 != 8420496LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 6U;
	uint32_t x332 = 1023U;
	uint32_t t43 = 189141U;

	t43 = (((x329*x330)&x331)*x332);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x342 = 30071;
	volatile int8_t x343 = -1;
	uint32_t t44 = 7266030U;

	t44 = (((x341*x342)&x343)*x344);

	if (t44 != 4294335805U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x345 = 49535U;
	int16_t x346 = 26;
	uint32_t t45 = 0U;

	t45 = (((x345*x346)&x347)*x348);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x353 = INT32_MAX;
	uint8_t x355 = UINT8_MAX;

	t46 = (((x353*x354)&x355)*x356);

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x359 = -140599;
	uint8_t x360 = UINT8_MAX;
	volatile int32_t t47 = 24593;

	t47 = (((x357*x358)&x359)*x360);

	if (t47 != -576552960) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x365 = 7;
	int8_t x366 = INT8_MIN;
	static volatile int32_t x367 = 3821775;
	static int64_t x368 = -345087LL;
	static int64_t t48 = -13048089LL;

	t48 = (((x365*x366)&x367)*x368);

	if (t48 != -1318817607552LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x377 = INT16_MAX;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MAX;
	volatile uint64_t x380 = 45998249418772232LLU;
	uint64_t t49 = 5145229969LLU;

	t49 = (((x377*x378)&x379)*x380);

	if (t49 != 9742512699755430912LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x381 = -982;
	volatile int8_t x382 = INT8_MIN;
	static int32_t x384 = -1;
	int32_t t50 = 104118;

	t50 = (((x381*x382)&x383)*x384);

	if (t50 != -125696) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x385 = 2030U;
	int16_t x386 = -5246;
	static volatile uint16_t x388 = 22U;
	volatile uint32_t t51 = 1688442U;

	t51 = (((x385*x386)&x387)*x388);

	if (t51 != 4060680936U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x397 = 6U;
	uint32_t x398 = 2U;
	int32_t x400 = INT32_MIN;
	volatile int64_t t52 = -79299322769583LL;

	t52 = (((x397*x398)&x399)*x400);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint64_t x402 = UINT64_MAX;
	int16_t x404 = INT16_MAX;
	uint64_t t53 = 568007849429135LLU;

	t53 = (((x401*x402)&x403)*x404);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x405 = 1873510LLU;
	int16_t x406 = 2925;
	static int32_t x408 = 133467;
	volatile uint64_t t54 = 134188771205092LLU;

	t54 = (((x405*x406)&x407)*x408);

	if (t54 != 14854515671364LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x409 = 1U;
	static volatile uint64_t x411 = UINT64_MAX;
	volatile uint64_t t55 = 1055807058140246LLU;

	t55 = (((x409*x410)&x411)*x412);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MAX;
	static volatile int64_t x415 = -14260LL;
	int64_t x416 = -1LL;
	int64_t t56 = -181LL;

	t56 = (((x413*x414)&x415)*x416);

	if (t56 != 16384LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x417 = 420247305U;
	int32_t x419 = 17;
	volatile int16_t x420 = INT16_MAX;
	volatile uint64_t t57 = 2LLU;

	t57 = (((x417*x418)&x419)*x420);

	if (t57 != 557039LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x425 = INT8_MIN;
	int8_t x426 = -1;
	static int8_t x427 = -1;
	uint8_t x428 = 45U;
	volatile int32_t t58 = -488071239;

	t58 = (((x425*x426)&x427)*x428);

	if (t58 != 5760) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x429 = -1;
	int32_t x431 = 3115787;

	t59 = (((x429*x430)&x431)*x432);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x433 = -1644022LL;
	int16_t x434 = INT16_MIN;
	static int8_t x435 = INT8_MIN;
	int8_t x436 = -1;
	int64_t t60 = -171772984962418LL;

	t60 = (((x433*x434)&x435)*x436);

	if (t60 != -53871312896LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x437 = INT8_MIN;
	int8_t x438 = INT8_MIN;
	static int16_t x440 = -1;

	t61 = (((x437*x438)&x439)*x440);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x442 = 0U;
	volatile uint8_t x443 = 10U;
	int8_t x444 = INT8_MIN;
	volatile int32_t t62 = 241;

	t62 = (((x441*x442)&x443)*x444);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x445 = UINT64_MAX;
	volatile uint32_t x447 = UINT32_MAX;
	volatile uint64_t t63 = 1151537989091LLU;

	t63 = (((x445*x446)&x447)*x448);

	if (t63 != 18446744070865767089LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x451 = INT8_MIN;
	uint8_t x452 = 9U;
	static int64_t t64 = 107589529LL;

	t64 = (((x449*x450)&x451)*x452);

	if (t64 != 6858060197695488LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x453 = -1LL;
	int8_t x454 = -51;
	int16_t x455 = 11613;
	int32_t x456 = INT32_MIN;
	volatile int64_t t65 = -62140409677435LL;

	t65 = (((x453*x454)&x455)*x456);

	if (t65 != -36507222016LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x457 = INT16_MIN;
	uint32_t x458 = 20496U;
	volatile int8_t x459 = -1;
	volatile int32_t x460 = -1;
	static uint32_t t66 = 23736726U;

	t66 = (((x457*x458)&x459)*x460);

	if (t66 != 671612928U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x465 = -3;
	uint32_t x466 = UINT32_MAX;
	static volatile int64_t x467 = INT64_MAX;
	static volatile int64_t t67 = -2081547860079943LL;

	t67 = (((x465*x466)&x467)*x468);

	if (t67 != 19041LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x469 = INT8_MIN;
	static volatile int32_t x470 = -634;
	static int8_t x471 = INT8_MAX;
	uint64_t x472 = 2LLU;
	volatile uint64_t t68 = 529093389279LLU;

	t68 = (((x469*x470)&x471)*x472);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x477 = INT32_MIN;
	uint64_t x479 = 3648770151914LLU;
	int64_t x480 = -1LL;
	static volatile uint64_t t69 = 147650392LLU;

	t69 = (((x477*x478)&x479)*x480);

	if (t69 != 18446740425134833664LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x485 = -83LL;
	static volatile uint16_t x487 = 0U;
	int32_t x488 = -1;
	int64_t t70 = -4200453129697528LL;

	t70 = (((x485*x486)&x487)*x488);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x489 = 115LLU;
	int32_t x490 = -1016604261;
	static uint8_t x491 = UINT8_MAX;
	uint64_t t71 = 133531586LLU;

	t71 = (((x489*x490)&x491)*x492);

	if (t71 != 18446744073709551455LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x493 = -1LL;
	uint32_t x494 = UINT32_MAX;
	volatile int8_t x495 = -1;
	static int8_t x496 = -3;

	t72 = (((x493*x494)&x495)*x496);

	if (t72 != 12884901885LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x510 = 49578896;
	uint32_t x511 = 406U;
	int64_t t73 = -99189724063496LL;

	t73 = (((x509*x510)&x511)*x512);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x521 = 3;
	uint32_t x522 = UINT32_MAX;
	uint16_t x523 = 859U;
	static int8_t x524 = -1;
	uint32_t t74 = 3783U;

	t74 = (((x521*x522)&x523)*x524);

	if (t74 != 4294966439U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x526 = -1;
	int8_t x527 = -1;

	t75 = (((x525*x526)&x527)*x528);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x529 = -1;
	volatile uint64_t x530 = 457390029658528LLU;
	int16_t x531 = INT16_MAX;
	static uint64_t t76 = 590805958173LLU;

	t76 = (((x529*x530)&x531)*x532);

	if (t76 != 18446744073709541792LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x533 = -1;
	int32_t x534 = 61961363;
	int32_t x535 = 12994;
	int8_t x536 = 0;
	volatile int32_t t77 = 2411;

	t77 = (((x533*x534)&x535)*x536);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x537 = UINT64_MAX;
	static volatile int16_t x539 = INT16_MIN;
	uint64_t t78 = 2615463LLU;

	t78 = (((x537*x538)&x539)*x540);

	if (t78 != 5931008000LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x545 = INT32_MIN;
	static uint32_t x546 = 93U;
	uint64_t x548 = UINT64_MAX;
	volatile uint64_t t79 = 1257779LLU;

	t79 = (((x545*x546)&x547)*x548);

	if (t79 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x550 = -1LL;
	static uint16_t x551 = UINT16_MAX;
	uint32_t x552 = 2171665U;
	static int64_t t80 = -882966751682897297LL;

	t80 = (((x549*x550)&x551)*x552);

	if (t80 != 142046435985LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x553 = 2;
	volatile uint16_t x555 = 23U;
	int32_t t81 = 192;

	t81 = (((x553*x554)&x555)*x556);

	if (t81 != 606848) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x557 = 28;
	int32_t x558 = -53;
	int16_t x559 = INT16_MIN;
	int16_t x560 = INT16_MAX;

	t82 = (((x557*x558)&x559)*x560);

	if (t82 != -1073709056) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x561 = 20753054576427LLU;
	uint16_t x562 = 30966U;
	static uint64_t x563 = 967753LLU;
	int8_t x564 = INT8_MIN;
	volatile uint64_t t83 = 49103655744983369LLU;

	t83 = (((x561*x562)&x563)*x564);

	if (t83 != 18446744073673891840LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x566 = -1;
	int16_t x567 = 2735;
	uint64_t x568 = 181785LLU;
	uint64_t t84 = 43520767666926945LLU;

	t84 = (((x565*x566)&x567)*x568);

	if (t84 != 95255340LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x569 = -59231LL;
	static int16_t x570 = -1;
	volatile uint32_t x571 = 237655U;
	static uint8_t x572 = UINT8_MAX;

	t85 = (((x569*x570)&x571)*x572);

	if (t85 != 10466985LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x573 = 0U;
	static int16_t x574 = INT16_MIN;
	uint64_t x575 = 3LLU;
	int8_t x576 = INT8_MIN;
	volatile uint64_t t86 = 321142163909141LLU;

	t86 = (((x573*x574)&x575)*x576);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x578 = 1U;
	static int8_t x580 = INT8_MAX;
	volatile int32_t t87 = 7;

	t87 = (((x577*x578)&x579)*x580);

	if (t87 != 52578) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x581 = 653954203U;
	int8_t x582 = INT8_MIN;
	int8_t x583 = INT8_MIN;
	int16_t x584 = INT16_MIN;

	t88 = (((x581*x582)&x583)*x584);

	if (t88 != 650117120U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x585 = 162912154LLU;
	int32_t x588 = INT32_MIN;
	uint64_t t89 = 472601753987097369LLU;

	t89 = (((x585*x586)&x587)*x588);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x589 = 14825;
	int8_t x590 = INT8_MIN;
	static uint16_t x591 = 33U;
	uint8_t x592 = UINT8_MAX;
	static volatile int32_t t90 = -185899;

	t90 = (((x589*x590)&x591)*x592);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x593 = 493604726151LLU;
	uint64_t x594 = 195LLU;
	static int32_t x595 = INT32_MAX;
	int64_t x596 = INT64_MAX;

	t91 = (((x593*x594)&x595)*x596);

	if (t91 != 9223372036297763371LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x598 = INT64_MIN;
	static int16_t x599 = -1;
	int64_t x600 = -1LL;
	volatile uint64_t t92 = 3LLU;

	t92 = (((x597*x598)&x599)*x600);

	if (t92 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x613 = 0;
	uint8_t x614 = 92U;
	static int8_t x616 = 8;

	t93 = (((x613*x614)&x615)*x616);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x625 = 104U;
	static int8_t x626 = -15;
	static volatile int32_t t94 = -26;

	t94 = (((x625*x626)&x627)*x628);

	if (t94 != -311296) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x633 = 8089U;
	uint64_t x634 = 6850126502533LLU;
	int64_t x635 = INT64_MAX;
	int64_t x636 = 1LL;

	t95 = (((x633*x634)&x635)*x636);

	if (t95 != 55410673278989437LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x637 = INT16_MAX;
	static uint8_t x638 = 25U;
	int16_t x639 = -1948;
	int32_t x640 = -1;

	t96 = (((x637*x638)&x639)*x640);

	if (t96 != -817252) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x646 = -1;
	int8_t x648 = 6;

	t97 = (((x645*x646)&x647)*x648);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x649 = -1;
	static int16_t x650 = -1;
	int16_t x651 = INT16_MIN;
	volatile int8_t x652 = -1;
	static volatile int32_t t98 = -223325;

	t98 = (((x649*x650)&x651)*x652);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x654 = INT8_MAX;
	int16_t x655 = -221;
	int32_t x656 = INT32_MIN;
	volatile uint32_t t99 = 106958508U;

	t99 = (((x653*x654)&x655)*x656);

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

