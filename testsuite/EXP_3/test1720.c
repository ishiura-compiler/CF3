#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -1;
int8_t x12 = -1;
uint16_t x17 = 247U;
static uint8_t x20 = 14U;
int16_t x39 = 1;
static uint16_t x41 = 450U;
int64_t t6 = -97739303979602LL;
uint64_t x57 = 3738910970255LLU;
uint32_t x60 = 1318351348U;
int32_t x63 = 39013;
int8_t x64 = 1;
int64_t x68 = -1LL;
volatile int16_t x77 = -11899;
uint64_t t10 = 1728LLU;
int64_t x96 = -4LL;
int8_t x123 = -9;
int8_t x134 = 12;
int8_t x136 = -1;
uint32_t t17 = 58U;
volatile uint16_t x146 = 3117U;
int32_t t19 = 152643;
int16_t x157 = 424;
volatile int16_t x158 = 9;
int8_t x161 = 1;
int64_t x165 = 16156115841LL;
static volatile uint8_t x167 = UINT8_MAX;
int32_t x176 = INT32_MIN;
int64_t x197 = -1LL;
int32_t x198 = INT32_MIN;
volatile uint64_t x211 = 569973093134LLU;
int32_t x216 = -1;
int32_t x221 = INT32_MAX;
uint64_t t32 = 601155LLU;
int16_t x229 = INT16_MIN;
int16_t x230 = INT16_MIN;
static uint8_t x231 = UINT8_MAX;
int32_t x254 = -1;
uint64_t x258 = 627703653LLU;
int8_t x260 = -1;
static int16_t x266 = -1;
static int64_t x270 = -1983407461443LL;
uint64_t x272 = UINT64_MAX;
volatile uint64_t t40 = 632366203390310080LLU;
int8_t x313 = 7;
volatile int64_t t44 = 52794LL;
static int32_t t45 = -8271122;
int16_t x355 = -1365;
int64_t x365 = -1LL;
static int8_t x366 = INT8_MAX;
int64_t t49 = -812741LL;
int32_t x371 = 31;
int32_t x372 = 391215;
volatile uint8_t x386 = UINT8_MAX;
static volatile int16_t x387 = -4151;
static volatile int64_t t52 = 1LL;
uint64_t x395 = 74LLU;
static int64_t x408 = INT64_MAX;
uint8_t x425 = 32U;
uint64_t t58 = 841186LLU;
volatile int64_t x453 = -1LL;
uint64_t x461 = 104412LLU;
volatile uint32_t x466 = 143525482U;
int8_t x468 = INT8_MAX;
volatile int64_t x474 = -1860LL;
int8_t x475 = 15;
static int8_t x498 = -1;
uint8_t x500 = 1U;
int32_t x509 = -1;
static volatile uint64_t t65 = 1950657388821231LLU;
int32_t x523 = -1;
volatile uint32_t x534 = UINT32_MAX;
int64_t t70 = -77806LL;
volatile int64_t x576 = INT64_MIN;
uint16_t x581 = 3154U;
int8_t x588 = 59;
static volatile int32_t x598 = -65;
uint64_t t79 = 631LLU;
int32_t x611 = 22299;
volatile uint32_t x622 = UINT32_MAX;
uint16_t x624 = UINT16_MAX;
int16_t x625 = INT16_MIN;
uint8_t x626 = 1U;
static volatile int32_t t83 = -54309783;
int32_t x640 = INT32_MIN;
volatile uint32_t t84 = 53U;
volatile int32_t t85 = 2891;
volatile int8_t x671 = -1;
int64_t x675 = -1LL;
uint8_t x693 = 3U;
static uint16_t x694 = UINT16_MAX;
volatile uint64_t t90 = 999056885916LLU;
uint64_t x703 = 118542LLU;
static volatile int8_t x713 = 1;
int8_t x714 = INT8_MAX;
static int8_t x716 = INT8_MAX;
static volatile int32_t t93 = -119193;
volatile int8_t x717 = INT8_MIN;
volatile int16_t x718 = INT16_MIN;
uint16_t x719 = 2U;
int16_t x732 = INT16_MAX;
static int64_t t97 = 42LL;
int16_t x758 = INT16_MIN;
uint32_t x760 = 103395289U;
int64_t x761 = 112365369LL;


void f0(void) {
	uint16_t x1 = 0U;
	uint16_t x2 = UINT16_MAX;
	uint8_t x4 = 2U;
	volatile int32_t t0 = 38;

	t0 = ((x1*x2)/(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 54U;
	volatile uint32_t x6 = 63U;
	static int8_t x7 = -6;
	int16_t x8 = 934;
	uint32_t t1 = 2961243U;

	t1 = ((x5*x6)/(x7&x8));

	if (t1 != 3U) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int8_t x10 = -1;
	uint64_t x11 = UINT64_MAX;
	volatile uint64_t t2 = 290163565496414384LLU;

	t2 = ((x9*x10)/(x11&x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = 163U;
	int32_t x19 = 15011897;
	static uint32_t t3 = 46461U;

	t3 = ((x17*x18)/(x19&x20));

	if (t3 != 5032U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x37 = 1U;
	uint32_t x38 = 2U;
	volatile uint64_t x40 = 3468295067435LLU;
	volatile uint64_t t4 = 14851LLU;

	t4 = ((x37*x38)/(x39&x40));

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x42 = -1;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t5 = 6622852183LLU;

	t5 = ((x41*x42)/(x43&x44));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x53 = INT8_MAX;
	int32_t x54 = -1;
	static int8_t x55 = INT8_MIN;
	static int64_t x56 = 14740470056LL;

	t6 = ((x53*x54)/(x55&x56));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x58 = 1013500780107316602LLU;
	static uint64_t x59 = 187761776463766LLU;
	volatile uint64_t t7 = 4430181518LLU;

	t7 = ((x57*x58)/(x59&x60));

	if (t7 != 397811840354LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile int32_t t8 = 37;

	t8 = ((x61*x62)/(x63&x64));

	if (t8 != 128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x65 = -1;
	static int16_t x66 = -8;
	int16_t x67 = -1;
	int64_t t9 = 4LL;

	t9 = ((x65*x66)/(x67&x68));

	if (t9 != -8LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x78 = 11313847474885958LLU;
	uint64_t x79 = UINT64_MAX;
	volatile int8_t x80 = INT8_MAX;

	t10 = ((x77*x78)/(x79&x80));

	if (t10 != 101972295165420462LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x93 = 23U;
	volatile int16_t x94 = 2;
	int16_t x95 = INT16_MIN;
	static volatile int64_t t11 = 46278LL;

	t11 = ((x93*x94)/(x95&x96));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x101 = -1LL;
	volatile uint16_t x102 = 54U;
	int16_t x103 = 76;
	int32_t x104 = -1;
	volatile int64_t t12 = -98207752LL;

	t12 = ((x101*x102)/(x103&x104));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x105 = 5U;
	int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	int32_t t13 = -903988;

	t13 = ((x105*x106)/(x107&x108));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x121 = -1;
	static int8_t x122 = -12;
	int16_t x124 = -1;
	volatile int32_t t14 = -65;

	t14 = ((x121*x122)/(x123&x124));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x125 = -1;
	static volatile int16_t x126 = -1516;
	int64_t x127 = 1051527637LL;
	int16_t x128 = -1;
	volatile int64_t t15 = 1259LL;

	t15 = ((x125*x126)/(x127&x128));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x133 = UINT32_MAX;
	static int16_t x135 = INT16_MAX;
	volatile uint32_t t16 = 16U;

	t16 = ((x133*x134)/(x135&x136));

	if (t16 != 131075U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x141 = -1;
	uint16_t x142 = UINT16_MAX;
	static uint32_t x143 = UINT32_MAX;
	volatile uint16_t x144 = 522U;

	t17 = ((x141*x142)/(x143&x144));

	if (t17 != 8227781U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x145 = 46U;
	volatile int16_t x147 = INT16_MIN;
	int32_t x148 = INT32_MIN;
	int32_t t18 = -139700;

	t18 = ((x145*x146)/(x147&x148));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x153 = 122;
	int16_t x154 = 0;
	volatile uint8_t x155 = UINT8_MAX;
	volatile int32_t x156 = INT32_MAX;

	t19 = ((x153*x154)/(x155&x156));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;
	static int64_t t20 = -31LL;

	t20 = ((x157*x158)/(x159&x160));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x162 = UINT16_MAX;
	uint16_t x163 = 5443U;
	int32_t x164 = 3536;
	volatile int32_t t21 = -2021;

	t21 = ((x161*x162)/(x163&x164));

	if (t21 != 48) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x166 = UINT64_MAX;
	volatile int8_t x168 = -1;
	uint64_t t22 = 850341981582193LLU;

	t22 = ((x165*x166)/(x167&x168));

	if (t22 != 72340172774719355LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x173 = UINT16_MAX;
	static int8_t x174 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	int32_t t23 = 115720473;

	t23 = ((x173*x174)/(x175&x176));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x177 = 13U;
	static uint64_t x178 = 28065073175061658LLU;
	uint32_t x179 = UINT32_MAX;
	volatile int16_t x180 = INT16_MIN;
	uint64_t t24 = 49634897901311414LLU;

	t24 = ((x177*x178)/(x179&x180));

	if (t24 != 84947965LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x181 = 2059U;
	int16_t x182 = 1;
	int16_t x183 = -1;
	int64_t x184 = -119473401930697LL;
	static int64_t t25 = -685LL;

	t25 = ((x181*x182)/(x183&x184));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x189 = 112U;
	int8_t x190 = -1;
	uint64_t x191 = 53456LLU;
	int16_t x192 = -1555;
	uint64_t t26 = 7080LLU;

	t26 = ((x189*x190)/(x191&x192));

	if (t26 != 345186079223606LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x199 = -1;
	int8_t x200 = -1;
	int64_t t27 = 1LL;

	t27 = ((x197*x198)/(x199&x200));

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -384;
	int32_t x203 = INT32_MIN;
	int16_t x204 = -1;
	volatile int32_t t28 = 0;

	t28 = ((x201*x202)/(x203&x204));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x209 = -1;
	volatile int8_t x210 = -35;
	uint64_t x212 = 3201381LLU;
	uint64_t t29 = 67876633755725LLU;

	t29 = ((x209*x210)/(x211&x212));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x213 = 5284865471097LLU;
	int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	uint64_t t30 = 700296659LLU;

	t30 = ((x213*x214)/(x215&x216));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x222 = UINT64_MAX;
	int8_t x223 = -1;
	int64_t x224 = INT64_MIN;
	uint64_t t31 = 308LLU;

	t31 = ((x221*x222)/(x223&x224));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x225 = 13U;
	volatile uint64_t x226 = 479LLU;
	uint32_t x227 = 4U;
	static int8_t x228 = INT8_MAX;

	t32 = ((x225*x226)/(x227&x228));

	if (t32 != 1556LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x232 = 1719LL;
	volatile int64_t t33 = -508LL;

	t33 = ((x229*x230)/(x231&x232));

	if (t33 != 5867441LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x241 = -1;
	static int64_t x242 = -1LL;
	static uint32_t x243 = UINT32_MAX;
	volatile int16_t x244 = 159;
	int64_t t34 = 21104LL;

	t34 = ((x241*x242)/(x243&x244));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x253 = 75;
	int32_t x255 = INT32_MIN;
	int16_t x256 = INT16_MIN;
	volatile int32_t t35 = -8;

	t35 = ((x253*x254)/(x255&x256));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x257 = 0U;
	int64_t x259 = INT64_MIN;
	uint64_t t36 = 9625200874537LLU;

	t36 = ((x257*x258)/(x259&x260));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x261 = -42;
	int16_t x262 = INT16_MIN;
	uint16_t x263 = UINT16_MAX;
	int16_t x264 = -889;
	volatile int32_t t37 = 422938;

	t37 = ((x261*x262)/(x263&x264));

	if (t37 != 21) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x265 = 64165787U;
	uint64_t x267 = 12128159446716737LLU;
	volatile int64_t x268 = INT64_MAX;
	volatile uint64_t t38 = 32LLU;

	t38 = ((x265*x266)/(x267&x268));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x269 = UINT64_MAX;
	static uint32_t x271 = UINT32_MAX;
	uint64_t t39 = 1LLU;

	t39 = ((x269*x270)/(x271&x272));

	if (t39 != 461LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x285 = 833124189231LLU;
	volatile int16_t x286 = INT16_MAX;
	volatile uint64_t x287 = 36022710950120LLU;
	uint64_t x288 = UINT64_MAX;

	t40 = ((x285*x286)/(x287&x288));

	if (t40 != 757LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x297 = 92U;
	int16_t x298 = INT16_MIN;
	volatile int32_t x299 = 117016715;
	static volatile uint8_t x300 = 13U;
	int32_t t41 = 21;

	t41 = ((x297*x298)/(x299&x300));

	if (t41 != -334961) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x301 = -1;
	volatile int32_t x302 = 14044839;
	int32_t x303 = -701907;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t42 = -1449715;

	t42 = ((x301*x302)/(x303&x304));

	if (t42 != -312107) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x314 = INT8_MIN;
	static int8_t x315 = 1;
	uint8_t x316 = 59U;
	volatile int32_t t43 = -254953557;

	t43 = ((x313*x314)/(x315&x316));

	if (t43 != -896) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x317 = -45502539747LL;
	volatile int8_t x318 = INT8_MAX;
	static uint16_t x319 = 24U;
	int32_t x320 = 50;

	t44 = ((x317*x318)/(x319&x320));

	if (t44 != -361176409241LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x337 = 3U;
	static int16_t x338 = INT16_MIN;
	int16_t x339 = -1;
	int8_t x340 = 25;

	t45 = ((x337*x338)/(x339&x340));

	if (t45 != -3932) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x341 = -1;
	uint16_t x342 = 2U;
	static volatile int8_t x343 = INT8_MIN;
	int16_t x344 = INT16_MIN;
	static int32_t t46 = 7;

	t46 = ((x341*x342)/(x343&x344));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x353 = 2U;
	int64_t x354 = -2674038554LL;
	static uint16_t x356 = 19317U;
	int64_t t47 = -20615LL;

	t47 = ((x353*x354)/(x355&x356));

	if (t47 != -281818LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x361 = -1;
	int8_t x362 = 4;
	uint64_t x363 = 670174074LLU;
	volatile uint64_t x364 = UINT64_MAX;
	volatile uint64_t t48 = 7749439LLU;

	t48 = ((x361*x362)/(x363&x364));

	if (t48 != 27525302439LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x367 = INT64_MAX;
	uint16_t x368 = UINT16_MAX;

	t49 = ((x365*x366)/(x367&x368));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x369 = 127053605;
	int32_t x370 = -1;
	int32_t t50 = 3;

	t50 = ((x369*x370)/(x371&x372));

	if (t50 != -8470240) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x373 = UINT16_MAX;
	int16_t x374 = 15;
	int16_t x375 = INT16_MAX;
	static int8_t x376 = INT8_MAX;
	volatile int32_t t51 = -520942;

	t51 = ((x373*x374)/(x375&x376));

	if (t51 != 7740) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x385 = 4LL;
	static int16_t x388 = -1;

	t52 = ((x385*x386)/(x387&x388));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x393 = 1;
	volatile int64_t x394 = -186LL;
	static int64_t x396 = -1LL;
	uint64_t t53 = 2389475LLU;

	t53 = ((x393*x394)/(x395&x396));

	if (t53 != 249280325320399343LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x405 = 9891U;
	volatile int64_t x406 = -357LL;
	int8_t x407 = INT8_MIN;
	int64_t t54 = 564262770475LL;

	t54 = ((x405*x406)/(x407&x408));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x426 = 953;
	int16_t x427 = -3;
	int32_t x428 = INT32_MIN;
	static int32_t t55 = -1;

	t55 = ((x425*x426)/(x427&x428));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x433 = 1264;
	volatile int32_t x434 = -1;
	static int64_t x435 = 7815LL;
	static uint64_t x436 = 98501297766LLU;
	volatile uint64_t t56 = 1021LLU;

	t56 = ((x433*x434)/(x435&x436));

	if (t56 != 11962869049098281LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x437 = 379;
	int64_t x438 = 10765540911174LL;
	int16_t x439 = INT16_MIN;
	volatile int8_t x440 = INT8_MIN;
	volatile int64_t t57 = -1459933813450830738LL;

	t57 = ((x437*x438)/(x439&x440));

	if (t57 != -124515991373LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MAX;
	static uint64_t x447 = 105LLU;
	uint16_t x448 = UINT16_MAX;

	t58 = ((x445*x446)/(x447&x448));

	if (t58 != 175683276892471765LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x454 = INT32_MIN;
	static int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;
	volatile int64_t t59 = -11559282LL;

	t59 = ((x453*x454)/(x455&x456));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x462 = INT16_MAX;
	int32_t x463 = -1;
	uint16_t x464 = 1U;
	uint64_t t60 = 1576469340241989897LLU;

	t60 = ((x461*x462)/(x463&x464));

	if (t60 != 3421268004LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x465 = -1;
	uint32_t x467 = 8548U;
	static uint32_t t61 = 15406023U;

	t61 = ((x465*x466)/(x467&x468));

	if (t61 != 41514418U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x473 = 1296U;
	uint32_t x476 = 204U;
	int64_t t62 = 25555282LL;

	t62 = ((x473*x474)/(x475&x476));

	if (t62 != -200880LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x497 = 44U;
	int16_t x499 = -1473;
	volatile uint32_t t63 = 28655083U;

	t63 = ((x497*x498)/(x499&x500));

	if (t63 != 4294967252U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x510 = INT8_MIN;
	int16_t x511 = -1;
	volatile int8_t x512 = INT8_MIN;
	volatile int32_t t64 = 1;

	t64 = ((x509*x510)/(x511&x512));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x513 = 423230LL;
	int8_t x514 = -1;
	uint64_t x515 = 831969LLU;
	volatile int8_t x516 = INT8_MIN;

	t65 = ((x513*x514)/(x515&x516));

	if (t65 != 22174978931505LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x517 = 4273;
	volatile int16_t x518 = -1;
	static uint8_t x519 = UINT8_MAX;
	volatile uint64_t x520 = 9835433268LLU;
	uint64_t t66 = 4823230LLU;

	t66 = ((x517*x518)/(x519&x520));

	if (t66 != 354745078340568218LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x521 = INT16_MIN;
	int64_t x522 = -1LL;
	int16_t x524 = -1;
	int64_t t67 = -40956275LL;

	t67 = ((x521*x522)/(x523&x524));

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x533 = 510838;
	int16_t x535 = -691;
	static int8_t x536 = -50;
	static uint32_t t68 = 905010U;

	t68 = ((x533*x534)/(x535&x536));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x541 = INT8_MIN;
	static uint64_t x542 = 7LLU;
	static int64_t x543 = INT64_MAX;
	volatile int16_t x544 = INT16_MIN;
	volatile uint64_t t69 = 48345964616683LLU;

	t69 = ((x541*x542)/(x543&x544));

	if (t69 != 2LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x545 = -1LL;
	int64_t x546 = 1673852057580430457LL;
	int32_t x547 = -2193;
	static int16_t x548 = INT16_MAX;

	t70 = ((x545*x546)/(x547&x548));

	if (t70 != -54745774573358LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x549 = UINT16_MAX;
	uint64_t x550 = UINT64_MAX;
	uint32_t x551 = 307816030U;
	int32_t x552 = 7;
	volatile uint64_t t71 = 435771LLU;

	t71 = ((x549*x550)/(x551&x552));

	if (t71 != 3074457345618247680LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x553 = UINT16_MAX;
	static uint16_t x554 = 10548U;
	int64_t x555 = -94LL;
	int64_t x556 = INT64_MIN;
	static int64_t t72 = -890106612LL;

	t72 = ((x553*x554)/(x555&x556));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x565 = 676588362885524LLU;
	static int32_t x566 = -15313179;
	volatile uint32_t x567 = UINT32_MAX;
	volatile int64_t x568 = -1950LL;
	volatile uint64_t t73 = 354LLU;

	t73 = ((x565*x566)/(x567&x568));

	if (t73 != 1478815014LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x569 = INT8_MIN;
	volatile int32_t x570 = 76;
	uint8_t x571 = UINT8_MAX;
	static volatile int32_t x572 = INT32_MAX;
	volatile int32_t t74 = -61404;

	t74 = ((x569*x570)/(x571&x572));

	if (t74 != -38) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x573 = INT16_MIN;
	volatile int16_t x574 = INT16_MIN;
	int8_t x575 = INT8_MIN;
	int64_t t75 = -1041761738LL;

	t75 = ((x573*x574)/(x575&x576));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x577 = -16;
	int8_t x578 = 2;
	int16_t x579 = INT16_MIN;
	int8_t x580 = INT8_MIN;
	int32_t t76 = -137;

	t76 = ((x577*x578)/(x579&x580));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x582 = 3U;
	int32_t x583 = -1;
	static volatile uint8_t x584 = 2U;
	static volatile int32_t t77 = 163976445;

	t77 = ((x581*x582)/(x583&x584));

	if (t77 != 4731) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x585 = 31547LLU;
	int64_t x586 = INT64_MAX;
	static uint32_t x587 = UINT32_MAX;
	volatile uint64_t t78 = 18439LLU;

	t78 = ((x585*x586)/(x587&x588));

	if (t78 != 156328339607707529LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x597 = UINT64_MAX;
	uint32_t x599 = 15U;
	volatile int8_t x600 = 3;

	t79 = ((x597*x598)/(x599&x600));

	if (t79 != 21LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x601 = 4273950LL;
	static int8_t x602 = INT8_MIN;
	uint32_t x603 = 264984U;
	uint32_t x604 = 28U;
	int64_t t80 = 283971432244092218LL;

	t80 = ((x601*x602)/(x603&x604));

	if (t80 != -22794400LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x609 = 13U;
	int32_t x610 = -1537;
	uint64_t x612 = 503659430LLU;
	static uint64_t t81 = 2187255965130908200LLU;

	t81 = ((x609*x610)/(x611&x612));

	if (t81 != 3790946172155678LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x621 = UINT32_MAX;
	volatile int64_t x623 = -1LL;
	volatile int64_t t82 = 838LL;

	t82 = ((x621*x622)/(x623&x624));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x627 = INT16_MAX;
	volatile int8_t x628 = INT8_MIN;

	t83 = ((x625*x626)/(x627&x628));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x637 = INT16_MIN;
	uint32_t x638 = 1955243454U;
	int16_t x639 = -1;

	t84 = ((x637*x638)/(x639&x640));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x641 = INT16_MIN;
	uint16_t x642 = 0U;
	static volatile int32_t x643 = 122;
	static uint8_t x644 = UINT8_MAX;

	t85 = ((x641*x642)/(x643&x644));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x669 = INT8_MIN;
	uint32_t x670 = 8249703U;
	int16_t x672 = INT16_MIN;
	uint32_t t86 = 84U;

	t86 = ((x669*x670)/(x671&x672));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x673 = -7208073LL;
	static uint64_t x674 = 280LLU;
	int64_t x676 = -1LL;
	volatile uint64_t t87 = 1884LLU;

	t87 = ((x673*x674)/(x675&x676));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x685 = 2189U;
	uint32_t x686 = UINT32_MAX;
	volatile int32_t x687 = -1;
	volatile uint16_t x688 = UINT16_MAX;
	volatile uint32_t t88 = 167726U;

	t88 = ((x685*x686)/(x687&x688));

	if (t88 != 65536U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x689 = -1;
	static int16_t x690 = INT16_MAX;
	uint16_t x691 = UINT16_MAX;
	int64_t x692 = INT64_MAX;
	int64_t t89 = -11071649LL;

	t89 = ((x689*x690)/(x691&x692));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x695 = -1LL;
	uint64_t x696 = 57300730071LLU;

	t90 = ((x693*x694)/(x695&x696));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x701 = 493363564LL;
	int8_t x702 = INT8_MAX;
	int8_t x704 = -1;
	volatile uint64_t t91 = 60754LLU;

	t91 = ((x701*x702)/(x703&x704));

	if (t91 != 528565LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x705 = 1U;
	int16_t x706 = INT16_MAX;
	int32_t x707 = -31;
	int8_t x708 = -1;
	int32_t t92 = 6;

	t92 = ((x705*x706)/(x707&x708));

	if (t92 != -1057) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x715 = 24466;

	t93 = ((x713*x714)/(x715&x716));

	if (t93 != 7) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x720 = UINT64_MAX;
	uint64_t t94 = 353535945325LLU;

	t94 = ((x717*x718)/(x719&x720));

	if (t94 != 2097152LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x725 = 20LLU;
	int32_t x726 = INT32_MAX;
	volatile int64_t x727 = -10376934483700088LL;
	uint16_t x728 = 1257U;
	volatile uint64_t t95 = 4102688LLU;

	t95 = ((x725*x726)/(x727&x728));

	if (t95 != 37025580LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x729 = 7793004332LL;
	static volatile uint8_t x730 = 18U;
	int8_t x731 = -1;
	int64_t t96 = -63132077LL;

	t96 = ((x729*x730)/(x731&x732));

	if (t96 != 4280955LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x753 = UINT16_MAX;
	volatile int16_t x754 = -1;
	int16_t x755 = -1;
	volatile int64_t x756 = INT64_MIN;

	t97 = ((x753*x754)/(x755&x756));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x757 = 5578U;
	uint16_t x759 = 2910U;
	volatile uint32_t t98 = 236U;

	t98 = ((x757*x758)/(x759&x760));

	if (t98 != 1416042U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x762 = INT16_MIN;
	int64_t x763 = -4442793582838LL;
	uint32_t x764 = 194U;
	volatile int64_t t99 = 71218917LL;

	t99 = ((x761*x762)/(x763&x764));

	if (t99 != -1840994205696LL) { NG(); } else { ; }
	
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

