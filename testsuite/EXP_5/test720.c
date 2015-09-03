#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -12629056433400LL;
int64_t x5 = INT64_MIN;
int16_t x8 = INT16_MAX;
volatile int64_t x11 = INT64_MIN;
volatile int32_t x12 = -1;
static uint32_t x36 = 17539U;
int16_t x40 = -11;
volatile int16_t x54 = INT16_MIN;
static volatile uint16_t x55 = 3304U;
static int32_t x56 = -1;
int32_t x84 = 4;
uint32_t x89 = 7U;
static int8_t x110 = -1;
volatile int64_t t13 = 138LL;
int8_t x169 = -1;
static int64_t x195 = -765752813137201959LL;
int64_t t16 = -63LL;
static int64_t x214 = INT64_MAX;
static int64_t x215 = INT64_MIN;
int64_t t17 = -1965145796070LL;
uint32_t x218 = 5U;
int64_t x219 = 15563548LL;
volatile int64_t t18 = 29850348LL;
int32_t x243 = -5;
int32_t t19 = -773816;
int32_t x249 = -829154144;
static int64_t x270 = -9864045230512125LL;
uint8_t x321 = 1U;
int64_t x323 = INT64_MIN;
int8_t x356 = 1;
static volatile int32_t x367 = INT32_MAX;
volatile int16_t x370 = INT16_MIN;
volatile uint16_t x371 = 17340U;
int16_t x390 = -4503;
volatile uint32_t t31 = 67968487U;
int32_t t33 = -15389873;
int8_t x428 = -1;
static uint32_t t34 = 3225894U;
int16_t x502 = INT16_MIN;
int16_t x503 = 3360;
static uint64_t t41 = 7286696LLU;
int8_t x562 = 4;
int8_t x575 = INT8_MIN;
static volatile uint64_t t50 = 17379364921196LLU;
int32_t x638 = INT32_MIN;
uint64_t x639 = 10892LLU;
volatile int32_t x659 = -820393;
int32_t x663 = 18596;
uint8_t x716 = 7U;
int16_t x728 = 3;
uint64_t t57 = 3400156LLU;
static volatile uint8_t x739 = 21U;
int8_t x748 = INT8_MIN;
int32_t t61 = -1;
int64_t x807 = INT64_MIN;
int64_t t63 = -576081850519448LL;
volatile uint32_t x828 = 3U;
uint64_t t65 = 50584504169LLU;
int64_t t66 = 3043972863491586401LL;
int64_t x890 = 68381322205LL;
volatile uint32_t x891 = 1991790U;
static int64_t t67 = 1191333229427909LL;
int32_t x940 = INT32_MIN;
static uint32_t x956 = 47537U;
volatile int64_t x987 = -39689505194LL;
int8_t x1057 = -5;
static volatile int8_t x1060 = -4;
int64_t x1066 = -115992267LL;
int16_t x1097 = INT16_MAX;
int16_t x1098 = INT16_MIN;
int32_t t80 = 9095701;
int8_t x1104 = INT8_MIN;
volatile uint32_t t81 = 7U;
int64_t x1127 = INT64_MAX;
static int8_t x1141 = INT8_MIN;
static uint16_t x1144 = 34U;
int32_t x1153 = 118;
int8_t x1154 = INT8_MIN;
int64_t x1155 = -542LL;
int16_t x1156 = -1;
volatile int64_t x1249 = -1579694965930375568LL;
volatile int16_t x1250 = -1;
int8_t x1252 = -1;
static uint64_t x1275 = 46416953LLU;
int64_t x1305 = 517778491LL;
volatile int32_t x1306 = -1;
int64_t x1308 = -1LL;
int64_t x1309 = INT64_MIN;
uint16_t x1310 = 27111U;
volatile int16_t x1338 = INT16_MAX;
uint32_t x1367 = UINT32_MAX;
volatile int64_t t97 = -299005051LL;
int16_t x1379 = INT16_MAX;


void f0(void) {
	static int64_t x1 = -1LL;
	uint32_t x2 = 27477U;
	int64_t x3 = -1650359127436LL;
	static int16_t x4 = -1;

	t0 = (x1%((x2%x3)/x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 208462522U;
	int8_t x7 = -1;
	volatile int64_t t1 = 7591LL;

	t1 = (x5%((x6%x7)/x8));

	if (t1 != -1024LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -158LL;
	uint16_t x10 = 13798U;
	static volatile int64_t t2 = -1210508832921878577LL;

	t2 = (x9%((x10%x11)/x12));

	if (t2 != -158LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = INT32_MAX;
	static int32_t x34 = -830637;
	uint8_t x35 = 2U;
	uint32_t t3 = 2936098U;

	t3 = (x33%((x34%x35)/x36));

	if (t3 != 130927U) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x37 = INT16_MAX;
	static int64_t x38 = INT64_MAX;
	int8_t x39 = INT8_MIN;
	int64_t t4 = -420479063LL;

	t4 = (x37%((x38%x39)/x40));

	if (t4 != 9LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x53 = 1LL;
	static volatile int64_t t5 = -13756222098063407LL;

	t5 = (x53%((x54%x55)/x56));

	if (t5 != 1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x77 = -1;
	uint64_t x78 = 638468217418821155LLU;
	int8_t x79 = -1;
	int64_t x80 = 60LL;
	volatile uint64_t t6 = 54662075344LLU;

	t6 = (x77%((x78%x79)/x80));

	if (t6 != 5653727262601599LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x81 = UINT8_MAX;
	uint64_t x82 = 3042793100201044945LLU;
	int64_t x83 = INT64_MIN;
	volatile uint64_t t7 = 1588704817793095LLU;

	t7 = (x81%((x82%x83)/x84));

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x90 = 80000LLU;
	int16_t x91 = 1323;
	int8_t x92 = 1;
	static volatile uint64_t t8 = 232672712923390340LLU;

	t8 = (x89%((x90%x91)/x92));

	if (t8 != 7LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x97 = -1LL;
	int32_t x98 = INT32_MAX;
	uint32_t x99 = 5548U;
	int64_t x100 = 1243LL;
	static volatile int64_t t9 = 118LL;

	t9 = (x97%((x98%x99)/x100));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x101 = INT64_MIN;
	uint32_t x102 = UINT32_MAX;
	uint16_t x103 = 76U;
	int8_t x104 = 3;
	static int64_t t10 = 0LL;

	t10 = (x101%((x102%x103)/x104));

	if (t10 != -8LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x109 = INT8_MAX;
	volatile int32_t x111 = INT32_MAX;
	uint32_t x112 = UINT32_MAX;
	uint32_t t11 = 666975504U;

	t11 = (x109%((x110%x111)/x112));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x113 = 118;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	static int8_t x116 = -9;
	int64_t t12 = -485571LL;

	t12 = (x113%((x114%x115)/x116));

	if (t12 != 118LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x121 = -337776LL;
	int16_t x122 = 291;
	static int16_t x123 = INT16_MAX;
	volatile int32_t x124 = -1;

	t13 = (x121%((x122%x123)/x124));

	if (t13 != -216LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x129 = 27348319817002116LL;
	volatile int32_t x130 = 1;
	static uint8_t x131 = UINT8_MAX;
	int8_t x132 = -1;
	int64_t t14 = 96777371111480LL;

	t14 = (x129%((x130%x131)/x132));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x170 = -53;
	int32_t x171 = 255;
	volatile uint16_t x172 = 5U;
	static int32_t t15 = -26;

	t15 = (x169%((x170%x171)/x172));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x193 = INT16_MAX;
	int16_t x194 = INT16_MIN;
	static int8_t x196 = 2;

	t16 = (x193%((x194%x195)/x196));

	if (t16 != 16383LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x213 = INT8_MAX;
	int32_t x216 = -5605746;

	t17 = (x213%((x214%x215)/x216));

	if (t17 != 127LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x217 = -5058470;
	int8_t x220 = 5;

	t18 = (x217%((x218%x219)/x220));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x241 = -5;
	int16_t x242 = INT16_MIN;
	int32_t x244 = -1;

	t19 = (x241%((x242%x243)/x244));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x245 = 89032;
	static volatile int8_t x246 = -1;
	int16_t x247 = -9;
	uint64_t x248 = 1LLU;
	volatile uint64_t t20 = 2LLU;

	t20 = (x245%((x246%x247)/x248));

	if (t20 != 89032LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x250 = 1866U;
	volatile int64_t x251 = INT64_MAX;
	int8_t x252 = INT8_MIN;
	int64_t t21 = 100922753LL;

	t21 = (x249%((x250%x251)/x252));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x269 = INT32_MAX;
	int64_t x271 = INT64_MAX;
	int64_t x272 = -5789666500205LL;
	static int64_t t22 = -380LL;

	t22 = (x269%((x270%x271)/x272));

	if (t22 != 647LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x277 = UINT32_MAX;
	uint32_t x278 = 511U;
	static uint32_t x279 = 1921180639U;
	static volatile uint16_t x280 = 11U;
	volatile uint32_t t23 = 2U;

	t23 = (x277%((x278%x279)/x280));

	if (t23 != 11U) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x322 = -5177LL;
	volatile int16_t x324 = 505;
	int64_t t24 = -633LL;

	t24 = (x321%((x322%x323)/x324));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x333 = INT8_MAX;
	int8_t x334 = INT8_MAX;
	int64_t x335 = INT64_MIN;
	int8_t x336 = INT8_MAX;
	int64_t t25 = -2LL;

	t25 = (x333%((x334%x335)/x336));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x337 = INT8_MIN;
	static int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	static int8_t x340 = -9;
	int64_t t26 = 3162LL;

	t26 = (x337%((x338%x339)/x340));

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x353 = 28273U;
	static int16_t x354 = 13;
	int32_t x355 = INT32_MIN;
	volatile int32_t t27 = -7;

	t27 = (x353%((x354%x355)/x356));

	if (t27 != 11) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x365 = 15;
	static int64_t x366 = 417410391771931LL;
	uint8_t x368 = 56U;
	static int64_t t28 = 1673011LL;

	t28 = (x365%((x366%x367)/x368));

	if (t28 != 15LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x369 = 17488417U;
	int16_t x372 = -1;
	uint32_t t29 = 2025635915U;

	t29 = (x369%((x370%x371)/x372));

	if (t29 != 8493U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x385 = -313;
	uint64_t x386 = 134448707619819LLU;
	static int32_t x387 = INT32_MIN;
	uint32_t x388 = 10088975U;
	uint64_t t30 = 881LLU;

	t30 = (x385%((x386%x387)/x388));

	if (t30 != 12635703LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x389 = 130408138;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = 2607210U;

	t31 = (x389%((x390%x391)/x392));

	if (t31 != 325U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x401 = INT16_MIN;
	volatile uint64_t x402 = UINT64_MAX;
	int8_t x403 = INT8_MAX;
	uint8_t x404 = 1U;
	uint64_t t32 = 1LLU;

	t32 = (x401%((x402%x403)/x404));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x413 = -20981654;
	volatile int8_t x414 = INT8_MAX;
	static int8_t x415 = INT8_MIN;
	int8_t x416 = 2;

	t33 = (x413%((x414%x415)/x416));

	if (t33 != -8) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x425 = 12521U;
	int8_t x426 = -1;
	volatile uint16_t x427 = UINT16_MAX;

	t34 = (x425%((x426%x427)/x428));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x465 = INT64_MIN;
	int32_t x466 = INT32_MIN;
	int16_t x467 = 3336;
	uint8_t x468 = 119U;
	int64_t t35 = -240LL;

	t35 = (x465%((x466%x467)/x468));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x469 = 27LLU;
	static int8_t x470 = INT8_MIN;
	int32_t x471 = INT32_MAX;
	uint64_t x472 = 4977824685LLU;
	uint64_t t36 = 8310933079433445764LLU;

	t36 = (x469%((x470%x471)/x472));

	if (t36 != 27LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x473 = INT16_MIN;
	int16_t x474 = -13537;
	int16_t x475 = INT16_MIN;
	static uint8_t x476 = 6U;
	int32_t t37 = -205124;

	t37 = (x473%((x474%x475)/x476));

	if (t37 != -1184) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x485 = -1;
	int32_t x486 = 103323;
	static uint32_t x487 = 78U;
	static int8_t x488 = 6;
	uint32_t t38 = 92545171U;

	t38 = (x485%((x486%x487)/x488));

	if (t38 != 7U) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x501 = -1239;
	static uint32_t x504 = 95U;
	uint32_t t39 = 2139U;

	t39 = (x501%((x502%x503)/x504));

	if (t39 != 1332U) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x509 = -1LL;
	volatile int8_t x510 = INT8_MAX;
	int16_t x511 = INT16_MIN;
	uint32_t x512 = 10U;
	volatile int64_t t40 = 13783087898LL;

	t40 = (x509%((x510%x511)/x512));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x521 = 0;
	volatile int16_t x522 = -156;
	volatile int16_t x523 = INT16_MAX;
	uint64_t x524 = 2059669298633946103LLU;

	t41 = (x521%((x522%x523)/x524));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x525 = INT64_MAX;
	static int64_t x526 = INT64_MAX;
	volatile int16_t x527 = -11323;
	int16_t x528 = -1;
	int64_t t42 = 5973415190273LL;

	t42 = (x525%((x526%x527)/x528));

	if (t42 != 1204LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x529 = -33;
	volatile int64_t x530 = 6480635358380339LL;
	uint32_t x531 = 14555639U;
	int16_t x532 = -8486;
	static volatile int64_t t43 = 59069LL;

	t43 = (x529%((x530%x531)/x532));

	if (t43 != -33LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x541 = INT8_MIN;
	int8_t x542 = INT8_MIN;
	static volatile int64_t x543 = INT64_MIN;
	volatile uint8_t x544 = 13U;
	volatile int64_t t44 = 25442526119555LL;

	t44 = (x541%((x542%x543)/x544));

	if (t44 != -2LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x561 = 1809474158309LLU;
	uint32_t x563 = 93U;
	uint16_t x564 = 3U;
	volatile uint64_t t45 = 158LLU;

	t45 = (x561%((x562%x563)/x564));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x573 = INT16_MIN;
	uint64_t x574 = 233646742LLU;
	int8_t x576 = 44;
	static volatile uint64_t t46 = 40565870729LLU;

	t46 = (x573%((x574%x575)/x576));

	if (t46 != 3439493LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x585 = 110864LLU;
	int32_t x586 = -45534;
	int16_t x587 = INT16_MIN;
	static int64_t x588 = -1LL;
	static uint64_t t47 = 25190095339284LLU;

	t47 = (x585%((x586%x587)/x588));

	if (t47 != 8736LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x601 = -926019167088LL;
	int32_t x602 = INT32_MIN;
	uint64_t x603 = UINT64_MAX;
	int32_t x604 = INT32_MAX;
	volatile uint64_t t48 = 14575758LLU;

	t48 = (x601%((x602%x603)/x604));

	if (t48 != 3841252823LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x621 = 3;
	int16_t x622 = -3468;
	int32_t x623 = -42700588;
	uint32_t x624 = 104561448U;
	static volatile uint32_t t49 = 171326U;

	t49 = (x621%((x622%x623)/x624));

	if (t49 != 3U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x629 = INT32_MAX;
	int8_t x630 = INT8_MIN;
	static uint64_t x631 = 874191191505775840LLU;
	uint8_t x632 = 26U;

	t50 = (x629%((x630%x631)/x632));

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x637 = -1;
	uint8_t x640 = UINT8_MAX;
	uint64_t t51 = 40669889LLU;

	t51 = (x637%((x638%x639)/x640));

	if (t51 != 3LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x657 = 2139U;
	static int32_t x658 = -24;
	int16_t x660 = -1;
	volatile int32_t t52 = -428;

	t52 = (x657%((x658%x659)/x660));

	if (t52 != 3) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x661 = 5000572843584447LL;
	int32_t x662 = -1;
	volatile int64_t x664 = -1LL;
	int64_t t53 = -112357129LL;

	t53 = (x661%((x662%x663)/x664));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x681 = -1LL;
	int8_t x682 = INT8_MIN;
	int64_t x683 = INT64_MIN;
	int64_t x684 = -4LL;
	volatile int64_t t54 = -1783188LL;

	t54 = (x681%((x682%x683)/x684));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x713 = UINT8_MAX;
	int64_t x714 = INT64_MAX;
	int32_t x715 = INT32_MIN;
	volatile int64_t t55 = 5LL;

	t55 = (x713%((x714%x715)/x716));

	if (t55 != 255LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x717 = UINT32_MAX;
	int8_t x718 = INT8_MIN;
	volatile uint32_t x719 = UINT32_MAX;
	int32_t x720 = INT32_MIN;
	uint32_t t56 = 577420692U;

	t56 = (x717%((x718%x719)/x720));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x725 = 475893923918478340LLU;
	uint8_t x726 = 15U;
	uint16_t x727 = UINT16_MAX;

	t57 = (x725%((x726%x727)/x728));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x729 = -1;
	volatile int16_t x730 = 2603;
	int16_t x731 = INT16_MIN;
	int32_t x732 = -20;
	volatile int32_t t58 = 2927;

	t58 = (x729%((x730%x731)/x732));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x737 = 5U;
	int16_t x738 = -27;
	int8_t x740 = 5;
	volatile uint32_t t59 = 2936794U;

	t59 = (x737%((x738%x739)/x740));

	if (t59 != 5U) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x745 = -2;
	static volatile int32_t x746 = INT32_MAX;
	volatile int32_t x747 = -1970245;
	int32_t t60 = 68006;

	t60 = (x745%((x746%x747)/x748));

	if (t60 != -2) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x765 = -1;
	int8_t x766 = INT8_MIN;
	uint16_t x767 = 524U;
	int8_t x768 = 15;

	t61 = (x765%((x766%x767)/x768));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x785 = -49;
	volatile int64_t x786 = -1LL;
	static uint8_t x787 = UINT8_MAX;
	volatile int32_t x788 = -1;
	volatile int64_t t62 = -13LL;

	t62 = (x785%((x786%x787)/x788));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x805 = 6U;
	volatile int16_t x806 = INT16_MIN;
	uint16_t x808 = 7U;

	t63 = (x805%((x806%x807)/x808));

	if (t63 != 6LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MAX;
	int16_t x827 = INT16_MIN;
	volatile uint32_t t64 = 96124U;

	t64 = (x825%((x826%x827)/x828));

	if (t64 != 14U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x849 = 15U;
	int16_t x850 = -1;
	static uint64_t x851 = 15974100250721LLU;
	int32_t x852 = 109;

	t65 = (x849%((x850%x851)/x852));

	if (t65 != 15LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x881 = -155LL;
	int64_t x882 = INT64_MIN;
	static uint16_t x883 = 2884U;
	volatile uint8_t x884 = 64U;

	t66 = (x881%((x882%x883)/x884));

	if (t66 != -11LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x889 = INT64_MAX;
	volatile int16_t x892 = INT16_MAX;

	t67 = (x889%((x890%x891)/x892));

	if (t67 != 7LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x897 = INT64_MIN;
	int64_t x898 = 387632023794116LL;
	volatile int32_t x899 = INT32_MAX;
	uint8_t x900 = UINT8_MAX;
	int64_t t68 = -11LL;

	t68 = (x897%((x898%x899)/x900));

	if (t68 != -756071LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x909 = 31679U;
	uint64_t x910 = UINT64_MAX;
	uint32_t x911 = 321553U;
	static int8_t x912 = 23;
	uint64_t t69 = 106107931985LLU;

	t69 = (x909%((x910%x911)/x912));

	if (t69 != 5489LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x917 = 31U;
	int64_t x918 = 6818619LL;
	volatile int64_t x919 = INT64_MIN;
	int16_t x920 = INT16_MIN;
	int64_t t70 = 2316542LL;

	t70 = (x917%((x918%x919)/x920));

	if (t70 != 31LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x937 = INT32_MIN;
	int64_t x938 = INT64_MAX;
	static int64_t x939 = -284898957475475231LL;
	volatile int64_t t71 = 0LL;

	t71 = (x937%((x938%x939)/x940));

	if (t71 != -12877390LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x953 = 87831LLU;
	int8_t x954 = INT8_MIN;
	uint16_t x955 = UINT16_MAX;
	uint64_t t72 = 12216233LLU;

	t72 = (x953%((x954%x955)/x956));

	if (t72 != 87831LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x985 = 0U;
	int32_t x986 = INT32_MIN;
	int8_t x988 = -1;
	int64_t t73 = 4127549364200535LL;

	t73 = (x985%((x986%x987)/x988));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x1013 = INT64_MIN;
	static volatile int8_t x1014 = -1;
	int8_t x1015 = INT8_MIN;
	static int64_t x1016 = -1LL;
	int64_t t74 = -4196639441LL;

	t74 = (x1013%((x1014%x1015)/x1016));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x1045 = UINT16_MAX;
	int32_t x1046 = -1;
	int8_t x1047 = 19;
	uint64_t x1048 = 7LLU;
	volatile uint64_t t75 = 12983995652LLU;

	t75 = (x1045%((x1046%x1047)/x1048));

	if (t75 != 65535LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1058 = INT64_MIN;
	int16_t x1059 = INT16_MAX;
	int64_t t76 = 227660909LL;

	t76 = (x1057%((x1058%x1059)/x1060));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x1061 = UINT8_MAX;
	int64_t x1062 = 106570260225245LL;
	volatile int32_t x1063 = INT32_MIN;
	uint16_t x1064 = UINT16_MAX;
	volatile int64_t t77 = 48016LL;

	t77 = (x1061%((x1062%x1063)/x1064));

	if (t77 != 255LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x1065 = 4U;
	int16_t x1067 = INT16_MAX;
	static volatile uint8_t x1068 = 67U;
	volatile int64_t t78 = 12844508867LL;

	t78 = (x1065%((x1066%x1067)/x1068));

	if (t78 != 4LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x1089 = 14U;
	int8_t x1090 = -14;
	uint32_t x1091 = UINT32_MAX;
	int64_t x1092 = -1LL;
	static int64_t t79 = -193780LL;

	t79 = (x1089%((x1090%x1091)/x1092));

	if (t79 != 14LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x1099 = UINT16_MAX;
	int8_t x1100 = -1;

	t80 = (x1097%((x1098%x1099)/x1100));

	if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1101 = UINT32_MAX;
	int32_t x1102 = INT32_MAX;
	int16_t x1103 = INT16_MIN;

	t81 = (x1101%((x1102%x1103)/x1104));

	if (t81 != 254U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x1125 = UINT8_MAX;
	int8_t x1126 = INT8_MIN;
	volatile int64_t x1128 = -1LL;
	int64_t t82 = 313852LL;

	t82 = (x1125%((x1126%x1127)/x1128));

	if (t82 != 127LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x1142 = INT64_MIN;
	int16_t x1143 = 8749;
	int64_t t83 = -12LL;

	t83 = (x1141%((x1142%x1143)/x1144));

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t t84 = 251583828044995670LL;

	t84 = (x1153%((x1154%x1155)/x1156));

	if (t84 != 118LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x1165 = -1;
	int64_t x1166 = 72712770160013144LL;
	int16_t x1167 = INT16_MIN;
	int8_t x1168 = 10;
	int64_t t85 = 294999887118877713LL;

	t85 = (x1165%((x1166%x1167)/x1168));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1241 = INT8_MIN;
	int8_t x1242 = -20;
	static volatile int32_t x1243 = 13468792;
	uint8_t x1244 = 8U;
	volatile int32_t t86 = -33;

	t86 = (x1241%((x1242%x1243)/x1244));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x1251 = -66303142973LL;
	volatile int64_t t87 = -48371LL;

	t87 = (x1249%((x1250%x1251)/x1252));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x1265 = 3U;
	volatile int16_t x1266 = INT16_MIN;
	static int32_t x1267 = INT32_MAX;
	static int8_t x1268 = 38;
	volatile int32_t t88 = 3;

	t88 = (x1265%((x1266%x1267)/x1268));

	if (t88 != 3) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x1273 = 2842237307859876942LL;
	static uint64_t x1274 = UINT64_MAX;
	static uint16_t x1276 = 29848U;
	static uint64_t t89 = 1LLU;

	t89 = (x1273%((x1274%x1275)/x1276));

	if (t89 != 54LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x1293 = 485LLU;
	volatile uint32_t x1294 = UINT32_MAX;
	int16_t x1295 = INT16_MIN;
	static int8_t x1296 = 6;
	uint64_t t90 = 51238LLU;

	t90 = (x1293%((x1294%x1295)/x1296));

	if (t90 != 485LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x1307 = INT16_MAX;
	int64_t t91 = 671279036LL;

	t91 = (x1305%((x1306%x1307)/x1308));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x1311 = 7658513232801LLU;
	uint8_t x1312 = UINT8_MAX;
	uint64_t t92 = 18210428LLU;

	t92 = (x1309%((x1310%x1311)/x1312));

	if (t92 != 34LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x1317 = 528193940;
	int32_t x1318 = INT32_MAX;
	int8_t x1319 = INT8_MIN;
	uint8_t x1320 = 3U;
	int32_t t93 = 1;

	t93 = (x1317%((x1318%x1319)/x1320));

	if (t93 != 8) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x1321 = INT16_MIN;
	int64_t x1322 = -2863772050088942021LL;
	static int64_t x1323 = INT64_MIN;
	uint32_t x1324 = 482509U;
	static int64_t t94 = 16LL;

	t94 = (x1321%((x1322%x1323)/x1324));

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1325 = -19;
	uint32_t x1326 = 46404225U;
	uint64_t x1327 = 4323450140406LLU;
	int8_t x1328 = INT8_MAX;
	volatile uint64_t t95 = 12698292446546653LLU;

	t95 = (x1325%((x1326%x1327)/x1328));

	if (t95 != 228434LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1337 = -15144;
	uint32_t x1339 = UINT32_MAX;
	uint8_t x1340 = 87U;
	uint32_t t96 = 16340694U;

	t96 = (x1337%((x1338%x1339)/x1340));

	if (t96 != 32U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x1365 = -1LL;
	int32_t x1366 = INT32_MAX;
	uint8_t x1368 = 29U;

	t97 = (x1365%((x1366%x1367)/x1368));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x1369 = INT64_MAX;
	int64_t x1370 = INT64_MAX;
	static int64_t x1371 = INT64_MIN;
	int8_t x1372 = -1;
	volatile int64_t t98 = -432LL;

	t98 = (x1369%((x1370%x1371)/x1372));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x1377 = INT64_MAX;
	static int64_t x1378 = 1065608399768585718LL;
	static volatile uint16_t x1380 = 16U;
	volatile int64_t t99 = -206193213LL;

	t99 = (x1377%((x1378%x1379)/x1380));

	if (t99 != 7LL) { NG(); } else { ; }
	
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

