#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = INT32_MAX;
int32_t x3 = 23889638;
int32_t x12 = -1;
int16_t x27 = INT16_MAX;
static volatile uint64_t t6 = 746690627751LLU;
uint8_t x50 = 34U;
volatile uint32_t x52 = 104879U;
int64_t t7 = 1048217652077206LL;
static volatile int8_t x53 = 0;
int8_t x56 = INT8_MIN;
volatile uint64_t t8 = 558608094333447152LLU;
int16_t x66 = -1;
int64_t t9 = 583LL;
static int8_t x77 = INT8_MIN;
static uint32_t x79 = 102893614U;
static uint64_t x86 = 2227422371344LLU;
int8_t x90 = INT8_MAX;
volatile int64_t x97 = 2429925539LL;
uint16_t x99 = UINT16_MAX;
int16_t x101 = INT16_MIN;
uint16_t x102 = 3143U;
static volatile uint16_t x113 = 27279U;
int64_t x121 = INT64_MAX;
volatile int8_t x122 = 0;
int8_t x125 = -1;
int64_t t20 = -1LL;
int32_t x133 = -1;
static int64_t t21 = 672063824LL;
volatile uint64_t x158 = 768693052LLU;
uint8_t x165 = 9U;
volatile int32_t x167 = 15111;
volatile uint32_t t24 = 1532U;
int64_t x170 = -1LL;
int32_t x173 = -1;
uint16_t x174 = UINT16_MAX;
static uint64_t x175 = UINT64_MAX;
int8_t x177 = INT8_MIN;
volatile uint64_t x180 = 42393041371LLU;
volatile int64_t x190 = 820LL;
volatile int64_t t29 = -5488336293087LL;
uint16_t x212 = 32209U;
int8_t x214 = -1;
uint16_t x218 = 1U;
static uint8_t x229 = 2U;
volatile uint8_t x244 = UINT8_MAX;
int32_t t37 = 131612;
int16_t x249 = 269;
volatile int8_t x255 = INT8_MAX;
uint32_t x271 = 735056777U;
int16_t x286 = 2;
volatile int64_t t45 = 16834LL;
volatile uint64_t x316 = 33378085LLU;
uint64_t x317 = UINT64_MAX;
uint64_t t48 = 642LLU;
static int16_t x352 = INT16_MAX;
uint64_t x355 = UINT64_MAX;
volatile int64_t t55 = -22361431918557921LL;
static int64_t x397 = 28471939177711LL;
uint16_t x400 = 7670U;
static uint64_t x402 = 1521782964555013LLU;
static volatile int32_t t61 = 20;
uint64_t x417 = 740LLU;
int64_t x422 = -1LL;
int32_t x430 = 353;
volatile int32_t t65 = 1;
static uint16_t x447 = 0U;
uint8_t x462 = UINT8_MAX;
int16_t x463 = INT16_MIN;
static int16_t x465 = INT16_MIN;
volatile int64_t x470 = -1LL;
int32_t x472 = -1;
int16_t x475 = -1;
int8_t x486 = INT8_MIN;
int64_t t75 = 1225483146384LL;
uint16_t x494 = 237U;
volatile int16_t x496 = -1;
int64_t x497 = INT64_MIN;
static int32_t x504 = -1;
int32_t x520 = 16;
static volatile int64_t t79 = 30LL;
static volatile uint64_t x521 = 345857060363619012LLU;
volatile uint8_t x523 = UINT8_MAX;
uint8_t x546 = UINT8_MAX;
int16_t x553 = -1;
volatile uint16_t x554 = 7555U;
int8_t x555 = INT8_MIN;
uint32_t x558 = UINT32_MAX;
uint32_t x570 = 23U;
int16_t x572 = -2;
volatile uint64_t t89 = 41776947670LLU;
int64_t x580 = -1277440LL;
uint64_t x582 = 36398LLU;
volatile int64_t x583 = INT64_MIN;
int8_t x584 = -1;
int32_t x595 = 4427;
int16_t x598 = 24;
int32_t x601 = INT32_MIN;
int16_t x608 = INT16_MAX;
int8_t x619 = INT8_MIN;


void f0(void) {
	int16_t x2 = 7;
	uint64_t x4 = 389021357LLU;
	uint64_t t0 = 1LLU;

	t0 = (x1/((x2-x3)*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 864;
	static volatile int16_t x10 = INT16_MIN;
	int64_t x11 = -1LL;
	volatile int64_t t1 = -71532856929709LL;

	t1 = (x9/((x10-x11)*x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x13 = 7U;
	int32_t x14 = 6512942;
	uint64_t x15 = 10778LLU;
	int16_t x16 = -420;
	uint64_t t2 = 1058640168850739LLU;

	t2 = (x13/((x14-x15)*x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = INT64_MIN;
	static volatile int8_t x22 = INT8_MIN;
	int64_t x23 = 3LL;
	int8_t x24 = -1;
	static int64_t t3 = 121808055777713133LL;

	t3 = (x21/((x22-x23)*x24));

	if (t3 != -70407420128662410LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	uint32_t x28 = 11U;
	volatile uint32_t t4 = 3254U;

	t4 = (x25/((x26-x27)*x28));

	if (t4 != 1U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MAX;
	uint8_t x30 = 22U;
	static volatile int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	volatile int32_t t5 = -7317886;

	t5 = (x29/((x30-x31)*x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = UINT16_MAX;
	uint32_t x38 = 93092647U;
	uint64_t x39 = 927896LLU;
	static int64_t x40 = 1079996930032LL;

	t6 = (x37/((x38-x39)*x40));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x49 = 30391184204047LL;
	int64_t x51 = -1LL;

	t7 = (x49/((x50-x51)*x52));

	if (t7 != 8279250LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x54 = INT64_MAX;
	uint64_t x55 = 289294953614039239LLU;

	t8 = (x53/((x54-x55)*x56));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x65 = -1LL;
	uint32_t x67 = 327871U;
	uint16_t x68 = UINT16_MAX;

	t9 = (x65/((x66-x67)*x68));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x78 = 315U;
	int32_t x80 = INT32_MIN;
	volatile uint32_t t10 = 499884200U;

	t10 = (x77/((x78-x79)*x80));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x81 = INT8_MIN;
	static int8_t x82 = INT8_MAX;
	int8_t x83 = 6;
	int16_t x84 = -1;
	volatile int32_t t11 = -79631384;

	t11 = (x81/((x82-x83)*x84));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x85 = 133U;
	uint32_t x87 = 36097U;
	int32_t x88 = INT32_MIN;
	uint64_t t12 = 477302616326LLU;

	t12 = (x85/((x86-x87)*x88));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x89 = -1LL;
	uint16_t x91 = 227U;
	static volatile int8_t x92 = INT8_MAX;
	int64_t t13 = 34LL;

	t13 = (x89/((x90-x91)*x92));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int16_t x94 = 3;
	static int16_t x95 = INT16_MAX;
	uint16_t x96 = UINT16_MAX;
	uint32_t t14 = 1697038930U;

	t14 = (x93/((x94-x95)*x96));

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x98 = INT8_MIN;
	int8_t x100 = 12;
	volatile int64_t t15 = -826843113444313LL;

	t15 = (x97/((x98-x99)*x100));

	if (t15 != -3083LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x103 = INT16_MIN;
	uint8_t x104 = 25U;
	static int32_t t16 = 382626821;

	t16 = (x101/((x102-x103)*x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x114 = INT8_MAX;
	static uint64_t x115 = UINT64_MAX;
	static volatile uint16_t x116 = UINT16_MAX;
	uint64_t t17 = 3LLU;

	t17 = (x113/((x114-x115)*x116));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x117 = 17U;
	static uint32_t x118 = 615U;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = 53889U;
	uint32_t t18 = 31893130U;

	t18 = (x117/((x118-x119)*x120));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x123 = 53LLU;
	static int8_t x124 = -1;
	static volatile uint64_t t19 = 222872296137LLU;

	t19 = (x121/((x122-x123)*x124));

	if (t19 != 174025887487825958LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x126 = -922LL;
	volatile int64_t x127 = -37072982LL;
	uint32_t x128 = 15U;

	t20 = (x125/((x126-x127)*x128));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x134 = -1;
	static volatile int8_t x135 = INT8_MIN;
	int64_t x136 = -1LL;

	t21 = (x133/((x134-x135)*x136));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x137 = 0LL;
	int16_t x138 = -1;
	volatile uint64_t x139 = 56591LLU;
	static uint32_t x140 = 1U;
	uint64_t t22 = 399650LLU;

	t22 = (x137/((x138-x139)*x140));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x157 = -1;
	uint32_t x159 = UINT32_MAX;
	uint16_t x160 = UINT16_MAX;
	volatile uint64_t t23 = 36626LLU;

	t23 = (x157/((x158-x159)*x160));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x166 = 3513230U;
	volatile int16_t x168 = INT16_MIN;

	t24 = (x165/((x166-x167)*x168));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x169 = -1;
	static int8_t x171 = 3;
	static volatile int16_t x172 = 88;
	static int64_t t25 = 238570LL;

	t25 = (x169/((x170-x171)*x172));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x176 = INT64_MAX;
	volatile uint64_t t26 = 35703915945305129LLU;

	t26 = (x173/((x174-x175)*x176));

	if (t26 != 1LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x178 = INT16_MIN;
	int32_t x179 = INT32_MIN;
	static uint64_t t27 = 1706LLU;

	t27 = (x177/((x178-x179)*x180));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x181 = INT64_MAX;
	uint64_t x182 = UINT64_MAX;
	int64_t x183 = INT64_MIN;
	int32_t x184 = INT32_MIN;
	volatile uint64_t t28 = 186LLU;

	t28 = (x181/((x182-x183)*x184));

	if (t28 != 4294967295LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x189 = INT64_MIN;
	uint32_t x191 = 1555689U;
	uint32_t x192 = UINT32_MAX;

	t29 = (x189/((x190-x191)*x192));

	if (t29 != 1381LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = 13;
	int32_t x194 = -1;
	int32_t x195 = -14;
	uint64_t x196 = UINT64_MAX;
	volatile uint64_t t30 = 156369131485LLU;

	t30 = (x193/((x194-x195)*x196));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x209 = UINT8_MAX;
	int16_t x210 = INT16_MIN;
	uint8_t x211 = UINT8_MAX;
	volatile int32_t t31 = 695573;

	t31 = (x209/((x210-x211)*x212));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x213 = 10U;
	uint16_t x215 = 21716U;
	volatile int16_t x216 = INT16_MAX;
	volatile uint32_t t32 = 203812U;

	t32 = (x213/((x214-x215)*x216));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x217 = UINT8_MAX;
	int64_t x219 = -4490LL;
	int8_t x220 = INT8_MIN;
	static volatile int64_t t33 = -3334504LL;

	t33 = (x217/((x218-x219)*x220));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x221 = INT8_MIN;
	static int32_t x222 = -63672;
	int8_t x223 = INT8_MIN;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t34 = -45553;

	t34 = (x221/((x222-x223)*x224));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = 104LLU;
	int8_t x227 = INT8_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile uint64_t t35 = 0LLU;

	t35 = (x225/((x226-x227)*x228));

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x230 = 1;
	uint32_t x231 = 31U;
	volatile int16_t x232 = INT16_MAX;
	static volatile uint32_t t36 = 10705369U;

	t36 = (x229/((x230-x231)*x232));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x241 = 1720;
	uint16_t x242 = UINT16_MAX;
	int16_t x243 = 0;

	t37 = (x241/((x242-x243)*x244));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x245 = -1;
	volatile int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	int16_t x248 = -1;
	int32_t t38 = 228293900;

	t38 = (x245/((x246-x247)*x248));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x250 = UINT16_MAX;
	uint8_t x251 = UINT8_MAX;
	static int64_t x252 = -1LL;
	int64_t t39 = -85943900LL;

	t39 = (x249/((x250-x251)*x252));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x253 = 24165692LL;
	volatile int64_t x254 = -1LL;
	uint8_t x256 = 7U;
	int64_t t40 = 14914818LL;

	t40 = (x253/((x254-x255)*x256));

	if (t40 != -26970LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = -244;
	int16_t x272 = 1;
	volatile uint32_t t41 = 27794485U;

	t41 = (x269/((x270-x271)*x272));

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x277 = 26465634804326LLU;
	static int8_t x278 = INT8_MIN;
	uint16_t x279 = UINT16_MAX;
	int32_t x280 = -1;
	uint64_t t42 = 2728408623387555LLU;

	t42 = (x277/((x278-x279)*x280));

	if (t42 != 403052477LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MIN;
	uint64_t x283 = 31201180072204LLU;
	int8_t x284 = INT8_MIN;
	volatile uint64_t t43 = 2868691864589295LLU;

	t43 = (x281/((x282-x283)*x284));

	if (t43 != 4618LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x285 = -58;
	int16_t x287 = INT16_MAX;
	volatile uint32_t x288 = 7732U;
	volatile uint32_t t44 = 9391U;

	t44 = (x285/((x286-x287)*x288));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x297 = UINT16_MAX;
	int64_t x298 = -1LL;
	int32_t x299 = 3;
	int32_t x300 = INT32_MAX;

	t45 = (x297/((x298-x299)*x300));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x309 = 53U;
	int8_t x310 = INT8_MAX;
	uint64_t x311 = 26954131802547LLU;
	int16_t x312 = INT16_MIN;
	volatile uint64_t t46 = 66179345761084589LLU;

	t46 = (x309/((x310-x311)*x312));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x313 = 1;
	int8_t x314 = 2;
	int8_t x315 = 1;
	static volatile uint64_t t47 = 110088052193LLU;

	t47 = (x313/((x314-x315)*x316));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x318 = INT8_MIN;
	int16_t x319 = 5;
	uint32_t x320 = 57U;

	t48 = (x317/((x318-x319)*x320));

	if (t48 != 4294974877LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x321 = -1;
	volatile uint64_t x322 = 16194894431175782LLU;
	uint16_t x323 = 1U;
	volatile int32_t x324 = -1;
	volatile uint64_t t49 = 7031075569090LLU;

	t49 = (x321/((x322-x323)*x324));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x341 = UINT32_MAX;
	int16_t x342 = 0;
	int16_t x343 = -1;
	volatile int16_t x344 = 54;
	static uint32_t t50 = 46U;

	t50 = (x341/((x342-x343)*x344));

	if (t50 != 79536431U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x345 = -1;
	int16_t x346 = 1;
	volatile uint32_t x347 = 114612029U;
	static volatile int8_t x348 = -1;
	uint32_t t51 = 19866179U;

	t51 = (x345/((x346-x347)*x348));

	if (t51 != 37U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x349 = INT16_MAX;
	volatile int16_t x350 = -10;
	int64_t x351 = -1LL;
	int64_t t52 = 701529468153756962LL;

	t52 = (x349/((x350-x351)*x352));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x353 = INT8_MIN;
	static int32_t x354 = INT32_MIN;
	volatile uint16_t x356 = 4003U;
	volatile uint64_t t53 = 390736895LLU;

	t53 = (x353/((x354-x355)*x356));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x361 = 1U;
	int16_t x362 = INT16_MIN;
	int16_t x363 = INT16_MAX;
	static int8_t x364 = -1;
	volatile int32_t t54 = -4124;

	t54 = (x361/((x362-x363)*x364));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x365 = 0;
	uint32_t x366 = 37186U;
	static uint8_t x367 = 14U;
	int64_t x368 = -1LL;

	t55 = (x365/((x366-x367)*x368));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x369 = 188449512U;
	int8_t x370 = -1;
	int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = UINT32_MAX;
	volatile uint32_t t56 = 121649U;

	t56 = (x369/((x370-x371)*x372));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x389 = INT32_MIN;
	static volatile uint32_t x390 = 822U;
	static volatile int64_t x391 = INT64_MAX;
	volatile int16_t x392 = -1;
	volatile int64_t t57 = -1815LL;

	t57 = (x389/((x390-x391)*x392));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x398 = INT16_MIN;
	int32_t x399 = 53;
	volatile int64_t t58 = -109210666111LL;

	t58 = (x397/((x398-x399)*x400));

	if (t58 != -113101LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x401 = -1;
	volatile int32_t x403 = 916;
	volatile uint16_t x404 = UINT16_MAX;
	uint64_t t59 = 23932871512667LLU;

	t59 = (x401/((x402-x403)*x404));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x405 = 0;
	uint64_t x406 = 2LLU;
	int16_t x407 = -72;
	int16_t x408 = INT16_MIN;
	volatile uint64_t t60 = 13892666810LLU;

	t60 = (x405/((x406-x407)*x408));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x413 = 518;
	int16_t x414 = INT16_MAX;
	volatile uint16_t x415 = UINT16_MAX;
	volatile uint16_t x416 = 721U;

	t61 = (x413/((x414-x415)*x416));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x418 = 11630U;
	uint64_t x419 = 107LLU;
	int64_t x420 = INT64_MAX;
	static uint64_t t62 = 74263LLU;

	t62 = (x417/((x418-x419)*x420));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x421 = INT32_MIN;
	volatile uint16_t x423 = 27U;
	static volatile int8_t x424 = INT8_MIN;
	volatile int64_t t63 = 613811174082LL;

	t63 = (x421/((x422-x423)*x424));

	if (t63 != -599186LL) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x425 = -180557950;
	volatile uint64_t x426 = 1440761LLU;
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = 2047;
	uint64_t t64 = 739LLU;

	t64 = (x425/((x426-x427)*x428));

	if (t64 != 6255856934LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x429 = 12U;
	uint16_t x431 = UINT16_MAX;
	uint8_t x432 = 15U;

	t65 = (x429/((x430-x431)*x432));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x445 = INT16_MIN;
	int16_t x446 = 9;
	int16_t x448 = -14029;
	static volatile int32_t t66 = -1;

	t66 = (x445/((x446-x447)*x448));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x449 = -5287;
	uint64_t x450 = 1LLU;
	int32_t x451 = 28688;
	static int16_t x452 = -58;
	volatile uint64_t t67 = 3874781LLU;

	t67 = (x449/((x450-x451)*x452));

	if (t67 != 11086809761065LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x461 = -1;
	static int8_t x464 = 4;
	int32_t t68 = -1081;

	t68 = (x461/((x462-x463)*x464));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x466 = 4U;
	uint16_t x467 = UINT16_MAX;
	volatile uint32_t x468 = UINT32_MAX;
	volatile uint32_t t69 = 728U;

	t69 = (x465/((x466-x467)*x468));

	if (t69 != 65540U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x469 = 1665439764164128881LLU;
	volatile int64_t x471 = 8LL;
	static uint64_t t70 = 553350365452286LLU;

	t70 = (x469/((x470-x471)*x472));

	if (t70 != 185048862684903209LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x473 = INT64_MIN;
	static uint64_t x474 = 6702133216303434912LLU;
	volatile int8_t x476 = -1;
	static volatile uint64_t t71 = 1585171641LLU;

	t71 = (x473/((x474-x475)*x476));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x477 = INT64_MIN;
	int64_t x478 = INT64_MAX;
	int8_t x479 = INT8_MAX;
	int64_t x480 = -1LL;
	volatile int64_t t72 = -7298543868677LL;

	t72 = (x477/((x478-x479)*x480));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x481 = 11042U;
	uint8_t x482 = UINT8_MAX;
	volatile uint32_t x483 = UINT32_MAX;
	static uint64_t x484 = UINT64_MAX;
	uint64_t t73 = 65478LLU;

	t73 = (x481/((x482-x483)*x484));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x485 = INT8_MAX;
	int32_t x487 = -23;
	volatile int16_t x488 = -6919;
	static int32_t t74 = -562840509;

	t74 = (x485/((x486-x487)*x488));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x489 = -32;
	uint32_t x490 = 103U;
	uint8_t x491 = 1U;
	int64_t x492 = -1LL;

	t75 = (x489/((x490-x491)*x492));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x493 = 10083715474816LLU;
	int32_t x495 = -57;
	static uint64_t t76 = 7379287102675527LLU;

	t76 = (x493/((x494-x495)*x496));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x498 = INT64_MIN;
	int16_t x499 = -1;
	volatile uint64_t x500 = UINT64_MAX;
	uint64_t t77 = 6878658LLU;

	t77 = (x497/((x498-x499)*x500));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x501 = 1002U;
	uint8_t x502 = 16U;
	int16_t x503 = 1933;
	static int32_t t78 = -3;

	t78 = (x501/((x502-x503)*x504));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x517 = 732611357;
	volatile int32_t x518 = INT32_MIN;
	static int64_t x519 = -1LL;

	t79 = (x517/((x518-x519)*x520));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x522 = INT16_MAX;
	volatile uint8_t x524 = 1U;
	volatile uint64_t t80 = 1827244607346LLU;

	t80 = (x521/((x522-x523)*x524));

	if (t80 != 10637827890121LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x525 = 6U;
	uint16_t x526 = 3309U;
	int16_t x527 = -1;
	int16_t x528 = -3460;
	volatile int32_t t81 = 0;

	t81 = (x525/((x526-x527)*x528));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x529 = 191U;
	volatile int8_t x530 = 1;
	static volatile int32_t x531 = -40;
	int8_t x532 = -2;
	volatile int32_t t82 = -5560509;

	t82 = (x529/((x530-x531)*x532));

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x533 = 14U;
	int16_t x534 = INT16_MIN;
	static volatile int64_t x535 = -1LL;
	int64_t x536 = -1LL;
	volatile int64_t t83 = -7616736LL;

	t83 = (x533/((x534-x535)*x536));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x541 = INT8_MIN;
	volatile int8_t x542 = 29;
	volatile int16_t x543 = INT16_MAX;
	int16_t x544 = 398;
	static int32_t t84 = -34;

	t84 = (x541/((x542-x543)*x544));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x545 = -1;
	uint8_t x547 = 3U;
	int8_t x548 = -1;
	int32_t t85 = -2473;

	t85 = (x545/((x546-x547)*x548));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x556 = -1;
	int32_t t86 = 233460;

	t86 = (x553/((x554-x555)*x556));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x557 = 1U;
	volatile uint8_t x559 = 2U;
	int64_t x560 = -1LL;
	int64_t t87 = -39633054774103285LL;

	t87 = (x557/((x558-x559)*x560));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x569 = UINT32_MAX;
	int8_t x571 = 4;
	volatile uint32_t t88 = 54412U;

	t88 = (x569/((x570-x571)*x572));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x573 = -1LL;
	static volatile int8_t x574 = INT8_MIN;
	volatile uint64_t x575 = 96731971959546LLU;
	uint32_t x576 = 16181U;

	t89 = (x573/((x574-x575)*x576));

	if (t89 != 1LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x577 = 13U;
	volatile uint64_t x578 = UINT64_MAX;
	volatile int16_t x579 = INT16_MAX;
	static uint64_t t90 = 2LLU;

	t90 = (x577/((x578-x579)*x580));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x581 = UINT8_MAX;
	uint64_t t91 = 57034177LLU;

	t91 = (x581/((x582-x583)*x584));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x585 = 5U;
	int8_t x586 = INT8_MAX;
	int16_t x587 = -1;
	volatile int8_t x588 = INT8_MIN;
	static int32_t t92 = -1619748;

	t92 = (x585/((x586-x587)*x588));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x589 = INT64_MIN;
	uint8_t x590 = 0U;
	int8_t x591 = -2;
	uint64_t x592 = 157830029LLU;
	volatile uint64_t t93 = 21638LLU;

	t93 = (x589/((x590-x591)*x592));

	if (t93 != 29219319337LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x593 = 29U;
	int16_t x594 = INT16_MIN;
	int16_t x596 = -11;
	static volatile uint32_t t94 = 3U;

	t94 = (x593/((x594-x595)*x596));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x597 = -9;
	volatile uint8_t x599 = 11U;
	uint32_t x600 = 405U;
	volatile uint32_t t95 = 24671705U;

	t95 = (x597/((x598-x599)*x600));

	if (t95 != 815758U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x602 = 12;
	static uint64_t x603 = 4561586383837582929LLU;
	int64_t x604 = 2531475779LL;
	volatile uint64_t t96 = 564007LLU;

	t96 = (x601/((x602-x603)*x604));

	if (t96 != 9LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x605 = 3;
	int8_t x606 = -1;
	int16_t x607 = 3;
	int32_t t97 = 10710817;

	t97 = (x605/((x606-x607)*x608));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x613 = 919077881537910LLU;
	uint16_t x614 = UINT16_MAX;
	uint64_t x615 = 783054822480LLU;
	static int16_t x616 = -3880;
	uint64_t t98 = 233752883LLU;

	t98 = (x613/((x614-x615)*x616));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x617 = 0;
	int32_t x618 = -1;
	volatile uint16_t x620 = UINT16_MAX;
	static volatile int32_t t99 = -816733537;

	t99 = (x617/((x618-x619)*x620));

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

