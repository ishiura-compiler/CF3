#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x8 = UINT32_MAX;
static int64_t x9 = -555829466033187410LL;
uint64_t x20 = 20LLU;
static volatile int64_t t2 = -593793146705LL;
volatile uint16_t x29 = UINT16_MAX;
static int16_t x31 = -1;
volatile uint32_t x47 = 73U;
static int16_t x56 = -2267;
uint32_t x69 = UINT32_MAX;
volatile uint16_t x72 = UINT16_MAX;
static volatile uint8_t x73 = 2U;
static int64_t x74 = -7070859437535188LL;
int32_t t10 = -11692;
static int16_t x79 = INT16_MAX;
static uint64_t x87 = 533958942LLU;
static uint8_t x93 = 3U;
static int8_t x99 = INT8_MAX;
uint16_t x103 = 753U;
static int32_t t18 = -8;
int8_t x124 = -1;
uint16_t x128 = 482U;
volatile int32_t x129 = -1594817;
int64_t x135 = -1LL;
int32_t t23 = -31892;
int8_t x143 = INT8_MIN;
uint16_t x144 = 36U;
int32_t x145 = INT32_MIN;
int64_t x160 = INT64_MAX;
static int64_t x161 = INT64_MIN;
volatile uint16_t x165 = 8347U;
static int64_t x167 = INT64_MIN;
volatile uint16_t x177 = 0U;
static int32_t x180 = INT32_MAX;
static uint16_t x231 = 171U;
int64_t t35 = -585105042316LL;
int16_t x243 = 4737;
static int8_t x293 = INT8_MIN;
uint64_t x296 = 3933926642914255LLU;
int32_t t41 = 23012;
static volatile int32_t t43 = -279223;
int8_t x305 = 1;
uint64_t x313 = 3165384LLU;
volatile uint16_t x321 = UINT16_MAX;
int16_t x323 = 12733;
uint32_t x324 = 1332255989U;
static volatile uint32_t x326 = UINT32_MAX;
uint8_t x328 = 125U;
static int64_t t48 = -27457403164483LL;
volatile int64_t x333 = -9337792LL;
volatile int32_t t51 = 1;
uint64_t x371 = UINT64_MAX;
uint64_t x389 = UINT64_MAX;
uint64_t x390 = 101201984131490LLU;
int8_t x391 = INT8_MIN;
int64_t x394 = -55823538446352331LL;
int16_t x395 = INT16_MIN;
static int8_t x402 = INT8_MIN;
int8_t x408 = -1;
int16_t x409 = INT16_MAX;
int32_t x412 = INT32_MIN;
static int16_t x439 = INT16_MIN;
int16_t x449 = -1;
uint64_t x450 = 7073975606138872LLU;
volatile int8_t x454 = -23;
volatile int64_t t67 = -2124LL;
uint8_t x458 = UINT8_MAX;
static volatile uint8_t x475 = 51U;
int16_t x477 = INT16_MIN;
volatile int32_t x480 = INT32_MIN;
int64_t x483 = -1LL;
volatile uint64_t x487 = UINT64_MAX;
int32_t t73 = 1522379;
volatile int16_t x490 = INT16_MIN;
volatile int32_t x502 = INT32_MIN;
volatile uint32_t t77 = 256U;
int16_t x516 = INT16_MAX;
volatile int16_t x517 = INT16_MIN;
volatile int16_t x520 = -8;
volatile int32_t t80 = 184560;
int32_t x530 = INT32_MAX;
static int32_t x531 = 29;
int16_t x545 = -1;
volatile int32_t t83 = 2057;
volatile int32_t x571 = INT32_MIN;
int64_t x586 = INT64_MIN;
volatile int64_t t90 = 4360087133414LL;
int16_t x611 = -7;
static volatile int32_t x634 = INT32_MAX;
static volatile int32_t t94 = 5522482;
uint32_t x654 = 11436U;
volatile uint64_t x662 = 4058408749LLU;
volatile uint64_t x663 = 950695143LLU;
int32_t t97 = 52191207;
volatile uint32_t x671 = UINT32_MAX;
volatile int32_t t98 = 3;


void f0(void) {
	volatile int8_t x5 = INT8_MIN;
	int16_t x6 = 4;
	static uint64_t x7 = 6787495010LLU;
	int32_t t0 = 377853537;

	t0 = (x5%((x6%x7)<x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x10 = 1239724LLU;
	uint8_t x11 = UINT8_MAX;
	int16_t x12 = INT16_MIN;
	int64_t t1 = 3348641089344LL;

	t1 = (x9%((x10%x11)<x12));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -644153584LL;
	int64_t x18 = INT64_MIN;
	int8_t x19 = INT8_MIN;

	t2 = (x17%((x18%x19)<x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = 1;
	int8_t x26 = INT8_MIN;
	int64_t x27 = INT64_MIN;
	static uint8_t x28 = 15U;
	static int32_t t3 = -15815160;

	t3 = (x25%((x26%x27)<x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x30 = 16233;
	int32_t x32 = 10;
	int32_t t4 = -1989762;

	t4 = (x29%((x30%x31)<x32));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 18148U;
	uint16_t x34 = UINT16_MAX;
	volatile int64_t x35 = -1LL;
	uint8_t x36 = 33U;
	volatile int32_t t5 = 350;

	t5 = (x33%((x34%x35)<x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x45 = UINT64_MAX;
	static int32_t x46 = -9607048;
	int64_t x48 = 123906042674755LL;
	uint64_t t6 = 5682458LLU;

	t6 = (x45%((x46%x47)<x48));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = 37663694960981LLU;
	uint64_t x54 = 2051LLU;
	int8_t x55 = -1;
	volatile uint64_t t7 = 2126757533LLU;

	t7 = (x53%((x54%x55)<x56));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x61 = 457U;
	static int32_t x62 = 25376902;
	int8_t x63 = INT8_MIN;
	static uint16_t x64 = UINT16_MAX;
	volatile int32_t t8 = 4603;

	t8 = (x61%((x62%x63)<x64));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x70 = INT64_MIN;
	static int8_t x71 = -1;
	uint32_t t9 = 3342U;

	t9 = (x69%((x70%x71)<x72));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x75 = 18291654867193906LLU;
	int32_t x76 = INT32_MIN;

	t10 = (x73%((x74%x75)<x76));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x77 = -1;
	static int32_t x78 = -1;
	uint8_t x80 = 13U;
	volatile int32_t t11 = 252910;

	t11 = (x77%((x78%x79)<x80));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x85 = 29U;
	volatile int16_t x86 = INT16_MIN;
	volatile int64_t x88 = INT64_MAX;
	int32_t t12 = -18;

	t12 = (x85%((x86%x87)<x88));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x89 = 49U;
	int64_t x90 = INT64_MAX;
	static int8_t x91 = INT8_MIN;
	static int32_t x92 = INT32_MAX;
	volatile int32_t t13 = -262058;

	t13 = (x89%((x90%x91)<x92));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x94 = -21154004406LL;
	volatile int32_t x95 = INT32_MAX;
	int64_t x96 = -1LL;
	int32_t t14 = -11553;

	t14 = (x93%((x94%x95)<x96));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x97 = 562607140501381LLU;
	volatile uint64_t x98 = UINT64_MAX;
	static int8_t x100 = INT8_MIN;
	static volatile uint64_t t15 = 4817LLU;

	t15 = (x97%((x98%x99)<x100));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = 0;
	uint8_t x102 = 10U;
	volatile uint64_t x104 = 1340257623195162LLU;
	volatile int32_t t16 = -71434711;

	t16 = (x101%((x102%x103)<x104));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = INT32_MIN;
	volatile int8_t x115 = 59;
	static uint8_t x116 = UINT8_MAX;
	volatile int32_t t17 = 160621903;

	t17 = (x113%((x114%x115)<x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x117 = -4663;
	int64_t x118 = INT64_MIN;
	volatile int8_t x119 = -3;
	int16_t x120 = INT16_MAX;

	t18 = (x117%((x118%x119)<x120));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x121 = 18844437;
	int64_t x122 = 2556662697963742LL;
	uint64_t x123 = UINT64_MAX;
	int32_t t19 = 432761;

	t19 = (x121%((x122%x123)<x124));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x125 = UINT64_MAX;
	int32_t x126 = 15;
	int8_t x127 = INT8_MAX;
	uint64_t t20 = 31400189682LLU;

	t20 = (x125%((x126%x127)<x128));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x130 = INT32_MIN;
	uint32_t x131 = 162U;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t21 = -1;

	t21 = (x129%((x130%x131)<x132));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x133 = INT8_MAX;
	volatile uint8_t x134 = UINT8_MAX;
	static int32_t x136 = INT32_MAX;
	static volatile int32_t t22 = -572562954;

	t22 = (x133%((x134%x135)<x136));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x137 = INT32_MAX;
	static uint64_t x138 = 2305792919709849071LLU;
	int8_t x139 = INT8_MAX;
	int32_t x140 = -1;

	t23 = (x137%((x138%x139)<x140));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int64_t t24 = 1454LL;

	t24 = (x141%((x142%x143)<x144));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x146 = 13;
	int16_t x147 = INT16_MIN;
	uint8_t x148 = 28U;
	int32_t t25 = -2;

	t25 = (x145%((x146%x147)<x148));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x150 = 12U;
	volatile int16_t x151 = INT16_MIN;
	int64_t x152 = 1185LL;
	int32_t t26 = 24;

	t26 = (x149%((x150%x151)<x152));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = INT16_MIN;
	int64_t x158 = -1LL;
	static uint32_t x159 = 253U;
	volatile int32_t t27 = -43017839;

	t27 = (x157%((x158%x159)<x160));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x162 = 323497965U;
	static volatile uint32_t x163 = UINT32_MAX;
	int16_t x164 = -60;
	volatile int64_t t28 = -43LL;

	t28 = (x161%((x162%x163)<x164));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x166 = INT8_MIN;
	static uint32_t x168 = UINT32_MAX;
	volatile int32_t t29 = 1246;

	t29 = (x165%((x166%x167)<x168));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = INT8_MAX;
	uint64_t x174 = 7LLU;
	static int32_t x175 = INT32_MIN;
	uint64_t x176 = 12LLU;
	static volatile int32_t t30 = -287409;

	t30 = (x173%((x174%x175)<x176));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x178 = -1LL;
	volatile int64_t x179 = -1LL;
	int32_t t31 = 1;

	t31 = (x177%((x178%x179)<x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x197 = 6U;
	uint8_t x198 = 1U;
	static volatile uint64_t x199 = UINT64_MAX;
	static int64_t x200 = -1LL;
	int32_t t32 = 34;

	t32 = (x197%((x198%x199)<x200));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x209 = INT32_MAX;
	int8_t x210 = 1;
	volatile uint32_t x211 = 6U;
	uint8_t x212 = UINT8_MAX;
	int32_t t33 = 247999447;

	t33 = (x209%((x210%x211)<x212));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = -95;
	int8_t x232 = 2;
	volatile int32_t t34 = -16228;

	t34 = (x229%((x230%x231)<x232));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x233 = -1LL;
	static volatile uint8_t x234 = UINT8_MAX;
	uint16_t x235 = UINT16_MAX;
	uint64_t x236 = 440225LLU;

	t35 = (x233%((x234%x235)<x236));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x241 = 1U;
	uint32_t x242 = UINT32_MAX;
	volatile int32_t x244 = -1;
	int32_t t36 = -47791;

	t36 = (x241%((x242%x243)<x244));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MAX;
	uint64_t x252 = UINT64_MAX;
	static int32_t t37 = 57036;

	t37 = (x249%((x250%x251)<x252));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = INT64_MIN;
	static uint32_t x255 = 8U;
	volatile uint64_t x256 = UINT64_MAX;
	volatile int32_t t38 = 18005;

	t38 = (x253%((x254%x255)<x256));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x265 = -1;
	volatile int16_t x266 = 513;
	int8_t x267 = -3;
	static int16_t x268 = 576;
	volatile int32_t t39 = 50;

	t39 = (x265%((x266%x267)<x268));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MIN;
	uint32_t x279 = 13U;
	volatile uint64_t x280 = 1672402380053566LLU;
	int32_t t40 = -196836;

	t40 = (x277%((x278%x279)<x280));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = 42067LLU;

	t41 = (x293%((x294%x295)<x296));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x298 = INT64_MIN;
	volatile int32_t x299 = 92572505;
	int8_t x300 = INT8_MIN;
	uint32_t t42 = 6U;

	t42 = (x297%((x298%x299)<x300));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x301 = 106U;
	volatile int8_t x302 = INT8_MIN;
	int64_t x303 = 145061302LL;
	uint32_t x304 = 6926U;

	t43 = (x301%((x302%x303)<x304));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	static int64_t x308 = 8714LL;
	int32_t t44 = -2344;

	t44 = (x305%((x306%x307)<x308));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x314 = 1;
	static volatile uint32_t x315 = 7322U;
	uint8_t x316 = UINT8_MAX;
	uint64_t t45 = 206LLU;

	t45 = (x313%((x314%x315)<x316));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x317 = INT16_MAX;
	volatile int16_t x318 = INT16_MIN;
	int64_t x319 = 1676LL;
	uint32_t x320 = 48U;
	int32_t t46 = 41185;

	t46 = (x317%((x318%x319)<x320));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x322 = 0;
	static int32_t t47 = 16489;

	t47 = (x321%((x322%x323)<x324));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x325 = -107151LL;
	int8_t x327 = 3;

	t48 = (x325%((x326%x327)<x328));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x329 = 0;
	int32_t x330 = INT32_MAX;
	int16_t x331 = -1;
	volatile int16_t x332 = 1;
	int32_t t49 = 639;

	t49 = (x329%((x330%x331)<x332));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x334 = 249845656718LL;
	volatile int8_t x335 = -15;
	volatile int16_t x336 = INT16_MAX;
	volatile int64_t t50 = -52387898638694LL;

	t50 = (x333%((x334%x335)<x336));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x341 = 0;
	uint8_t x342 = 3U;
	volatile uint64_t x343 = UINT64_MAX;
	int16_t x344 = -1;

	t51 = (x341%((x342%x343)<x344));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x349 = -1LL;
	int16_t x350 = INT16_MIN;
	int16_t x351 = INT16_MIN;
	int64_t x352 = 883629209007424141LL;
	static int64_t t52 = 31325486LL;

	t52 = (x349%((x350%x351)<x352));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x361 = INT8_MIN;
	int8_t x362 = INT8_MAX;
	int16_t x363 = -1;
	uint16_t x364 = 2139U;
	int32_t t53 = 529382155;

	t53 = (x361%((x362%x363)<x364));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x369 = 111U;
	int16_t x370 = INT16_MAX;
	int64_t x372 = 8684013LL;
	volatile int32_t t54 = 14980753;

	t54 = (x369%((x370%x371)<x372));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x373 = 1940U;
	int8_t x374 = 18;
	int8_t x375 = -1;
	uint8_t x376 = UINT8_MAX;
	volatile uint32_t t55 = 116600413U;

	t55 = (x373%((x374%x375)<x376));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x377 = -1;
	static uint8_t x378 = UINT8_MAX;
	uint64_t x379 = 30400929714035LLU;
	int32_t x380 = 8541609;
	static int32_t t56 = -251;

	t56 = (x377%((x378%x379)<x380));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x392 = INT8_MIN;
	uint64_t t57 = 5337741529LLU;

	t57 = (x389%((x390%x391)<x392));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x393 = INT64_MIN;
	int8_t x396 = -31;
	static int64_t t58 = -390LL;

	t58 = (x393%((x394%x395)<x396));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x401 = INT16_MAX;
	int64_t x403 = INT64_MIN;
	int16_t x404 = -1;
	int32_t t59 = 220;

	t59 = (x401%((x402%x403)<x404));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x405 = 3;
	int8_t x406 = 2;
	volatile uint32_t x407 = UINT32_MAX;
	volatile int32_t t60 = -5832;

	t60 = (x405%((x406%x407)<x408));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x410 = 8558LLU;
	volatile int8_t x411 = -1;
	int32_t t61 = 26522379;

	t61 = (x409%((x410%x411)<x412));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x417 = 51774978;
	int32_t x418 = 16243;
	volatile int8_t x419 = INT8_MIN;
	uint16_t x420 = 919U;
	static volatile int32_t t62 = -198641;

	t62 = (x417%((x418%x419)<x420));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x429 = UINT8_MAX;
	int8_t x430 = INT8_MIN;
	volatile int8_t x431 = -1;
	static int8_t x432 = INT8_MAX;
	volatile int32_t t63 = 49;

	t63 = (x429%((x430%x431)<x432));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x437 = INT32_MAX;
	volatile uint64_t x438 = 32569745LLU;
	volatile int64_t x440 = -1LL;
	volatile int32_t t64 = 163104661;

	t64 = (x437%((x438%x439)<x440));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x445 = 24U;
	uint32_t x446 = 724171105U;
	volatile int64_t x447 = -11468088LL;
	uint32_t x448 = UINT32_MAX;
	int32_t t65 = 28138127;

	t65 = (x445%((x446%x447)<x448));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x451 = -37644;
	volatile uint64_t x452 = 1517506204710518472LLU;
	volatile int32_t t66 = -8137773;

	t66 = (x449%((x450%x451)<x452));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x453 = INT64_MAX;
	int64_t x455 = INT64_MIN;
	int32_t x456 = INT32_MAX;

	t67 = (x453%((x454%x455)<x456));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x457 = INT32_MIN;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = 44006LLU;
	volatile int32_t t68 = 10597;

	t68 = (x457%((x458%x459)<x460));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x469 = 5U;
	int8_t x470 = 6;
	int64_t x471 = INT64_MIN;
	uint32_t x472 = 8U;
	volatile uint32_t t69 = 73777U;

	t69 = (x469%((x470%x471)<x472));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x473 = -1;
	volatile int32_t x474 = INT32_MIN;
	volatile uint8_t x476 = 7U;
	volatile int32_t t70 = 1;

	t70 = (x473%((x474%x475)<x476));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x478 = 4498U;
	static int16_t x479 = -62;
	int32_t t71 = 1111;

	t71 = (x477%((x478%x479)<x480));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x481 = 16071U;
	static int8_t x482 = INT8_MAX;
	int8_t x484 = 2;
	uint32_t t72 = 3560U;

	t72 = (x481%((x482%x483)<x484));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x485 = -1440765;
	uint64_t x486 = UINT64_MAX;
	int16_t x488 = INT16_MIN;

	t73 = (x485%((x486%x487)<x488));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x489 = UINT8_MAX;
	int32_t x491 = INT32_MIN;
	int32_t x492 = -1;
	int32_t t74 = 147;

	t74 = (x489%((x490%x491)<x492));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x493 = INT8_MAX;
	int16_t x494 = INT16_MIN;
	uint8_t x495 = 5U;
	static volatile int16_t x496 = INT16_MAX;
	int32_t t75 = -3;

	t75 = (x493%((x494%x495)<x496));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x501 = 0;
	static volatile int64_t x503 = INT64_MAX;
	uint16_t x504 = 7U;
	static int32_t t76 = -1415;

	t76 = (x501%((x502%x503)<x504));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x505 = 10794U;
	volatile uint8_t x506 = 26U;
	int16_t x507 = INT16_MAX;
	uint16_t x508 = UINT16_MAX;

	t77 = (x505%((x506%x507)<x508));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x513 = INT8_MAX;
	static uint64_t x514 = 2071903LLU;
	volatile uint8_t x515 = 1U;
	volatile int32_t t78 = 27241732;

	t78 = (x513%((x514%x515)<x516));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x518 = -33;
	volatile uint32_t x519 = 1277856U;
	int32_t t79 = 328;

	t79 = (x517%((x518%x519)<x520));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x521 = -1;
	uint8_t x522 = 2U;
	uint32_t x523 = 2149U;
	static uint16_t x524 = 226U;

	t80 = (x521%((x522%x523)<x524));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x525 = 1;
	static uint64_t x526 = 4026767025310549LLU;
	volatile uint64_t x527 = 8805665891441LLU;
	int64_t x528 = INT64_MAX;
	volatile int32_t t81 = -1445;

	t81 = (x525%((x526%x527)<x528));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x529 = 6271554931830LLU;
	static int64_t x532 = INT64_MAX;
	volatile uint64_t t82 = 240956071170LLU;

	t82 = (x529%((x530%x531)<x532));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x546 = 4;
	static int8_t x547 = INT8_MAX;
	volatile uint32_t x548 = UINT32_MAX;

	t83 = (x545%((x546%x547)<x548));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x549 = INT64_MIN;
	volatile int8_t x550 = INT8_MIN;
	uint64_t x551 = 9360615438LLU;
	int32_t x552 = -1;
	int64_t t84 = 1019914688458723LL;

	t84 = (x549%((x550%x551)<x552));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x553 = 21108LLU;
	int32_t x554 = 13069703;
	int64_t x555 = INT64_MIN;
	static volatile uint32_t x556 = 40200200U;
	volatile uint64_t t85 = 90870941223280LLU;

	t85 = (x553%((x554%x555)<x556));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x561 = 1985U;
	volatile uint32_t x562 = 20606U;
	uint64_t x563 = UINT64_MAX;
	uint32_t x564 = 81489U;
	int32_t t86 = 699278;

	t86 = (x561%((x562%x563)<x564));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x565 = -1;
	int16_t x566 = -1;
	int16_t x567 = -3;
	uint8_t x568 = UINT8_MAX;
	volatile int32_t t87 = -10117;

	t87 = (x565%((x566%x567)<x568));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x569 = 743755360087LL;
	static uint64_t x570 = UINT64_MAX;
	volatile uint64_t x572 = UINT64_MAX;
	int64_t t88 = 8998247702632219LL;

	t88 = (x569%((x570%x571)<x572));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x585 = 4U;
	volatile int16_t x587 = 2084;
	static int32_t x588 = INT32_MAX;
	int32_t t89 = 1;

	t89 = (x585%((x586%x587)<x588));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x589 = INT64_MAX;
	int64_t x590 = INT64_MIN;
	static int8_t x591 = -1;
	int64_t x592 = INT64_MAX;

	t90 = (x589%((x590%x591)<x592));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x601 = -2;
	int8_t x602 = INT8_MIN;
	int8_t x603 = INT8_MAX;
	int8_t x604 = INT8_MAX;
	volatile int32_t t91 = 6345381;

	t91 = (x601%((x602%x603)<x604));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x609 = INT8_MAX;
	int16_t x610 = -1;
	volatile uint8_t x612 = UINT8_MAX;
	int32_t t92 = -27724229;

	t92 = (x609%((x610%x611)<x612));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x613 = 0;
	volatile int32_t x614 = 31;
	uint32_t x615 = 153631525U;
	int32_t x616 = -1;
	volatile int32_t t93 = -10;

	t93 = (x613%((x614%x615)<x616));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x633 = INT32_MAX;
	int16_t x635 = INT16_MAX;
	uint16_t x636 = 6274U;

	t94 = (x633%((x634%x635)<x636));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x645 = UINT8_MAX;
	int32_t x646 = 0;
	int32_t x647 = INT32_MAX;
	uint8_t x648 = 82U;
	static int32_t t95 = -1721;

	t95 = (x645%((x646%x647)<x648));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x653 = INT32_MIN;
	int16_t x655 = -1;
	int32_t x656 = INT32_MIN;
	volatile int32_t t96 = -207645961;

	t96 = (x653%((x654%x655)<x656));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x661 = INT8_MIN;
	int32_t x664 = INT32_MIN;

	t97 = (x661%((x662%x663)<x664));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x669 = -1;
	volatile int8_t x670 = INT8_MAX;
	int32_t x672 = -1;

	t98 = (x669%((x670%x671)<x672));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x673 = UINT8_MAX;
	uint16_t x674 = UINT16_MAX;
	volatile int16_t x675 = -1;
	volatile uint64_t x676 = 7415LLU;
	volatile int32_t t99 = -218;

	t99 = (x673%((x674%x675)<x676));

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

