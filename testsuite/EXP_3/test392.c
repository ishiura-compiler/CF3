#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x1 = INT64_MIN;
uint32_t x4 = 1U;
uint32_t x5 = 526558636U;
static uint16_t x21 = UINT16_MAX;
int32_t x37 = -1;
int8_t x40 = -1;
volatile int32_t t8 = 19484713;
volatile int64_t t9 = 214931132LL;
int8_t x49 = INT8_MAX;
int64_t x54 = INT64_MIN;
static uint16_t x64 = UINT16_MAX;
int32_t t12 = 88211747;
int16_t x71 = 6;
uint32_t x81 = UINT32_MAX;
volatile uint64_t t15 = 1505021542838097LLU;
uint16_t x94 = UINT16_MAX;
uint32_t x105 = 1337929U;
int16_t x111 = INT16_MAX;
int16_t x140 = INT16_MIN;
volatile int16_t x153 = 4313;
int8_t x154 = INT8_MAX;
volatile int32_t t27 = 57178;
int16_t x177 = -1;
static int64_t x178 = INT64_MIN;
static uint32_t x180 = 137442U;
int64_t t29 = -14544663777LL;
int64_t x193 = INT64_MIN;
volatile int64_t x194 = -1LL;
int32_t x199 = INT32_MIN;
static int32_t x201 = INT32_MIN;
volatile uint8_t x207 = 12U;
int16_t x214 = -1;
uint8_t x227 = 10U;
int64_t t39 = 15596LL;
static int16_t x229 = -3;
int64_t x233 = INT64_MIN;
static int32_t x247 = -1;
uint32_t x255 = 2467U;
uint16_t x257 = 23821U;
static uint32_t t45 = 1150045U;
int32_t x261 = -614;
uint32_t x262 = 3U;
int8_t x263 = 9;
static volatile int32_t x266 = INT32_MIN;
int32_t t48 = -49137098;
uint32_t x278 = 61U;
int8_t x284 = INT8_MAX;
volatile int64_t x286 = INT64_MAX;
uint8_t x287 = 31U;
int8_t x288 = INT8_MAX;
volatile int8_t x291 = INT8_MAX;
volatile int32_t x300 = INT32_MIN;
volatile int8_t x302 = -23;
static uint64_t x303 = 33361334867053318LLU;
int32_t x305 = 64923;
int64_t t56 = -97014581522917417LL;
volatile int32_t x317 = 413361978;
int16_t x318 = -164;
volatile int32_t x319 = 244973;
static int32_t t59 = 538989588;
static int32_t x323 = -13591;
int64_t x324 = -112354534480739LL;
uint32_t x330 = 1U;
uint64_t t62 = 475688765744432082LLU;
static int32_t x333 = INT32_MIN;
int8_t x334 = INT8_MIN;
uint8_t x341 = UINT8_MAX;
volatile uint64_t t64 = 106517214359LLU;
static volatile int32_t t65 = 2580;
int16_t x369 = -1;
int8_t x372 = -25;
volatile int8_t x375 = INT8_MIN;
uint64_t t73 = 30LLU;
int64_t x406 = INT64_MAX;
int8_t x408 = 1;
volatile uint32_t x410 = 9215U;
static int8_t x416 = INT8_MIN;
int32_t x420 = -1;
static int8_t x436 = INT8_MAX;
uint32_t x444 = UINT32_MAX;
int16_t x445 = INT16_MIN;
static volatile int32_t t82 = 966359851;
int16_t x449 = INT16_MIN;
static volatile int32_t x459 = INT32_MIN;
static uint32_t x461 = 585737488U;
volatile uint64_t t85 = 14060LLU;
int16_t x467 = -1;
volatile int64_t t86 = 318863484LL;
int16_t x473 = -2;
static int64_t x506 = 754830573119LL;
int8_t x516 = -1;
static volatile int64_t x517 = INT64_MIN;
uint8_t x519 = UINT8_MAX;
volatile uint64_t x524 = UINT64_MAX;
static volatile int64_t t98 = 4LL;
uint8_t x546 = 2U;
int32_t x547 = -175338;
static uint32_t t99 = 802U;


void f0(void) {
	volatile uint32_t x2 = 226816U;
	int32_t x3 = INT32_MIN;
	int64_t t0 = 4883718613363913LL;

	t0 = ((x1%x2)-(x3*x4));

	if (t0 != -2147620864LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x6 = 61U;
	uint16_t x7 = 21508U;
	volatile uint8_t x8 = 7U;
	volatile uint32_t t1 = 124098499U;

	t1 = ((x5%x6)-(x7*x8));

	if (t1 != 4294816788U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x10 = 4U;
	int16_t x11 = -400;
	int64_t x12 = -686262LL;
	static int64_t t2 = -1606217003069848085LL;

	t2 = ((x9%x10)-(x11*x12));

	if (t2 != -274504801LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint8_t x14 = 3U;
	uint32_t x15 = 136805304U;
	static int32_t x16 = INT32_MIN;
	uint32_t t3 = 8764360U;

	t3 = ((x13%x14)-(x15*x16));

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int64_t x17 = 5469162516880LL;
	uint8_t x18 = 72U;
	uint8_t x19 = UINT8_MAX;
	static uint8_t x20 = UINT8_MAX;
	int64_t t4 = 138371906266LL;

	t4 = ((x17%x18)-(x19*x20));

	if (t4 != -65009LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x22 = INT64_MAX;
	uint16_t x23 = 868U;
	uint64_t x24 = UINT64_MAX;
	static uint64_t t5 = 71LLU;

	t5 = ((x21%x22)-(x23*x24));

	if (t5 != 66403LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = -3298LL;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 0U;
	volatile uint8_t x28 = 11U;
	volatile uint64_t t6 = 1289595676947496248LLU;

	t6 = ((x25%x26)-(x27*x28));

	if (t6 != 18446744073709548318LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = 1;
	int8_t x30 = -1;
	volatile int16_t x31 = 99;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 34897032;

	t7 = ((x29%x30)-(x31*x32));

	if (t7 != -3243933) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x38 = 3;
	volatile uint16_t x39 = 45U;

	t8 = ((x37%x38)-(x39*x40));

	if (t8 != 44) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = -1;
	static int64_t x42 = -1LL;
	int16_t x43 = -416;
	uint8_t x44 = 4U;

	t9 = ((x41%x42)-(x43*x44));

	if (t9 != 1664LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x50 = UINT32_MAX;
	static uint8_t x51 = 1U;
	volatile int64_t x52 = INT64_MAX;
	static int64_t t10 = -17726580677378241LL;

	t10 = ((x49%x50)-(x51*x52));

	if (t10 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x53 = -1;
	static int64_t x55 = -1LL;
	int32_t x56 = 3;
	volatile int64_t t11 = -5497LL;

	t11 = ((x53%x54)-(x55*x56));

	if (t11 != 2LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = -1;
	int8_t x62 = -5;
	int32_t x63 = -921;

	t12 = ((x61%x62)-(x63*x64));

	if (t12 != 60357734) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = 4;
	int64_t x70 = INT64_MIN;
	volatile uint64_t x72 = 638445221LLU;
	static uint64_t t13 = 162524064LLU;

	t13 = ((x69%x70)-(x71*x72));

	if (t13 != 18446744069878880294LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -2;
	uint32_t x78 = UINT32_MAX;
	static uint64_t x79 = 1694LLU;
	int8_t x80 = INT8_MIN;
	volatile uint64_t t14 = 6853LLU;

	t14 = ((x77%x78)-(x79*x80));

	if (t14 != 4295184126LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = INT8_MIN;
	int8_t x84 = INT8_MIN;

	t15 = ((x81%x82)-(x83*x84));

	if (t15 != 4294950911LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x85 = 243U;
	int64_t x86 = -2LL;
	int8_t x87 = INT8_MIN;
	volatile int32_t x88 = -1;
	static volatile int64_t t16 = -90716658395LL;

	t16 = ((x85%x86)-(x87*x88));

	if (t16 != -127LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x93 = UINT16_MAX;
	uint16_t x95 = 113U;
	int16_t x96 = INT16_MIN;
	volatile int32_t t17 = -1944;

	t17 = ((x93%x94)-(x95*x96));

	if (t17 != 3702784) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x97 = 4027406816444528LL;
	int16_t x98 = INT16_MIN;
	volatile int64_t x99 = 17543070514886848LL;
	uint64_t x100 = 95630026510LLU;
	uint64_t t18 = 40393617011LLU;

	t18 = ((x97%x98)-(x99*x100));

	if (t18 != 6466427186501232112LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = 6027U;
	int16_t x103 = -6003;
	int8_t x104 = -1;
	volatile int32_t t19 = -1;

	t19 = ((x101%x102)-(x103*x104));

	if (t19 != -8636) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x106 = 63U;
	static int64_t x107 = -1LL;
	static int8_t x108 = INT8_MIN;
	volatile int64_t t20 = -635600172150028611LL;

	t20 = ((x105%x106)-(x107*x108));

	if (t20 != -67LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = -215266;
	volatile int32_t x110 = -628;
	static volatile uint8_t x112 = UINT8_MAX;
	static volatile int32_t t21 = -3;

	t21 = ((x109%x110)-(x111*x112));

	if (t21 != -8356075) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static uint64_t x119 = 8930191465743LLU;
	int8_t x120 = INT8_MIN;
	volatile uint64_t t22 = 1137LLU;

	t22 = ((x117%x118)-(x119*x120));

	if (t22 != 1143064507615103LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x125 = INT8_MIN;
	static int32_t x126 = INT32_MAX;
	uint8_t x127 = 1U;
	volatile uint16_t x128 = UINT16_MAX;
	volatile int32_t t23 = -1732;

	t23 = ((x125%x126)-(x127*x128));

	if (t23 != -65663) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x133 = -4472;
	volatile int32_t x134 = INT32_MIN;
	int16_t x135 = 0;
	uint8_t x136 = 3U;
	int32_t t24 = -29406029;

	t24 = ((x133%x134)-(x135*x136));

	if (t24 != -4472) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x137 = 7214827939LLU;
	static int64_t x138 = -530730312201060LL;
	volatile int8_t x139 = INT8_MIN;
	uint64_t t25 = 363899125LLU;

	t25 = ((x137%x138)-(x139*x140));

	if (t25 != 7210633635LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x149 = 26U;
	volatile int64_t x150 = INT64_MIN;
	volatile int64_t x151 = 1227459037LL;
	volatile uint8_t x152 = UINT8_MAX;
	int64_t t26 = 14121759033138094LL;

	t26 = ((x149%x150)-(x151*x152));

	if (t26 != -313002054409LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x155 = INT16_MIN;
	int8_t x156 = INT8_MIN;

	t27 = ((x153%x154)-(x155*x156));

	if (t27 != -4194182) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x169 = INT8_MIN;
	uint64_t x170 = 20368716LLU;
	uint64_t x171 = UINT64_MAX;
	int64_t x172 = INT64_MIN;
	uint64_t t28 = 36195907469489501LLU;

	t28 = ((x169%x170)-(x171*x172));

	if (t28 != 9223372036872942040LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x179 = INT16_MIN;

	t29 = ((x177%x178)-(x179*x180));

	if (t29 != -4086235137LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x181 = INT16_MIN;
	uint64_t x182 = UINT64_MAX;
	volatile int64_t x183 = 2809578866706475LL;
	int64_t x184 = 1LL;
	volatile uint64_t t30 = 961461446LLU;

	t30 = ((x181%x182)-(x183*x184));

	if (t30 != 18443934494842812373LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x185 = INT16_MAX;
	static int32_t x186 = 403771;
	volatile uint32_t x187 = UINT32_MAX;
	int8_t x188 = 1;
	static volatile uint32_t t31 = 34609486U;

	t31 = ((x185%x186)-(x187*x188));

	if (t31 != 32768U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x195 = INT16_MAX;
	volatile int8_t x196 = 21;
	int64_t t32 = 8LL;

	t32 = ((x193%x194)-(x195*x196));

	if (t32 != -688107LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x197 = 2372620637798LLU;
	int64_t x198 = INT64_MIN;
	uint64_t x200 = 51293848300935833LLU;
	volatile uint64_t t33 = 99400317066LLU;

	t33 = ((x197%x198)-(x199*x200));

	if (t33 != 15821690251370681958LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x202 = INT32_MIN;
	int64_t x203 = -1LL;
	volatile uint16_t x204 = UINT16_MAX;
	volatile int64_t t34 = 4504021362743901369LL;

	t34 = ((x201%x202)-(x203*x204));

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x205 = INT8_MAX;
	volatile int8_t x206 = INT8_MIN;
	int8_t x208 = -1;
	volatile int32_t t35 = 216955626;

	t35 = ((x205%x206)-(x207*x208));

	if (t35 != 139) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x209 = INT16_MIN;
	int16_t x210 = -1;
	static uint64_t x211 = UINT64_MAX;
	volatile int32_t x212 = -13258;
	volatile uint64_t t36 = 372870821324275LLU;

	t36 = ((x209%x210)-(x211*x212));

	if (t36 != 18446744073709538358LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x213 = INT32_MIN;
	static int8_t x215 = -52;
	static int8_t x216 = INT8_MAX;
	volatile int32_t t37 = -189900;

	t37 = ((x213%x214)-(x215*x216));

	if (t37 != 6604) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x221 = INT16_MIN;
	static volatile int16_t x222 = 34;
	static int16_t x223 = 3307;
	static int8_t x224 = 40;
	volatile int32_t t38 = 5622083;

	t38 = ((x221%x222)-(x223*x224));

	if (t38 != -132306) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x225 = -1LL;
	int8_t x226 = -1;
	int8_t x228 = 0;

	t39 = ((x225%x226)-(x227*x228));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x230 = 709U;
	int16_t x231 = -1;
	static int16_t x232 = 0;
	uint32_t t40 = 22U;

	t40 = ((x229%x230)-(x231*x232));

	if (t40 != 564U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x234 = 9883758LL;
	int16_t x235 = INT16_MIN;
	static int16_t x236 = 100;
	int64_t t41 = -2900630492643128LL;

	t41 = ((x233%x234)-(x235*x236));

	if (t41 != -1870806LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	uint16_t x243 = UINT16_MAX;
	static int8_t x244 = 2;
	volatile uint32_t t42 = 2035196U;

	t42 = ((x241%x242)-(x243*x244));

	if (t42 != 4294868993U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x245 = UINT16_MAX;
	int64_t x246 = -3724025570840515452LL;
	uint16_t x248 = 25778U;
	int64_t t43 = 187100575760040LL;

	t43 = ((x245%x246)-(x247*x248));

	if (t43 != 91313LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x253 = 436;
	int32_t x254 = INT32_MIN;
	uint16_t x256 = 18610U;
	static uint32_t t44 = 126303723U;

	t44 = ((x253%x254)-(x255*x256));

	if (t44 != 4249056862U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x258 = INT8_MAX;
	int16_t x259 = -13;
	volatile uint32_t x260 = 690U;

	t45 = ((x257%x258)-(x259*x260));

	if (t45 != 9042U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x264 = -1303;
	uint32_t t46 = 30608403U;

	t46 = ((x261%x262)-(x263*x264));

	if (t46 != 11729U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x265 = INT32_MAX;
	uint32_t x267 = 1980080U;
	int8_t x268 = -1;
	uint32_t t47 = 1U;

	t47 = ((x265%x266)-(x267*x268));

	if (t47 != 2149463727U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x269 = UINT8_MAX;
	volatile int8_t x270 = INT8_MIN;
	int16_t x271 = 12217;
	int8_t x272 = INT8_MIN;

	t48 = ((x269%x270)-(x271*x272));

	if (t48 != 1563903) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x277 = INT16_MIN;
	int16_t x279 = INT16_MAX;
	volatile int16_t x280 = -35;
	volatile uint32_t t49 = 151U;

	t49 = ((x277%x278)-(x279*x280));

	if (t49 != 1146891U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = -1LL;
	volatile int8_t x283 = -31;
	volatile int64_t t50 = 163LL;

	t50 = ((x281%x282)-(x283*x284));

	if (t50 != 3937LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x285 = 12493300011052LL;
	int64_t t51 = -3LL;

	t51 = ((x285%x286)-(x287*x288));

	if (t51 != 12493300007115LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x289 = INT8_MAX;
	static uint32_t x290 = 8870U;
	int16_t x292 = INT16_MIN;
	static volatile uint32_t t52 = 29746583U;

	t52 = ((x289%x290)-(x291*x292));

	if (t52 != 4161663U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x293 = -3;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = 13030U;
	uint8_t x296 = 29U;
	uint32_t t53 = 27453U;

	t53 = ((x293%x294)-(x295*x296));

	if (t53 != 4294589423U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x297 = -1;
	static uint8_t x298 = UINT8_MAX;
	volatile uint8_t x299 = 0U;
	int32_t t54 = -336589;

	t54 = ((x297%x298)-(x299*x300));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x301 = INT8_MIN;
	int16_t x304 = 495;
	static uint64_t t55 = 411856178417LLU;

	t55 = ((x301%x302)-(x303*x304));

	if (t55 != 1932883314518159193LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x306 = INT32_MIN;
	int64_t x307 = -10LL;
	uint8_t x308 = 34U;

	t56 = ((x305%x306)-(x307*x308));

	if (t56 != 65263LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x309 = 0;
	int64_t x310 = INT64_MIN;
	uint32_t x311 = 125U;
	uint32_t x312 = 43248912U;
	static volatile int64_t t57 = -64267692534028819LL;

	t57 = ((x309%x310)-(x311*x312));

	if (t57 != -1111146704LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x313 = INT8_MAX;
	volatile int64_t x314 = -876433179LL;
	uint8_t x315 = 58U;
	static int16_t x316 = INT16_MIN;
	volatile int64_t t58 = 0LL;

	t58 = ((x313%x314)-(x315*x316));

	if (t58 != 1900671LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x320 = 1U;

	t59 = ((x317%x318)-(x319*x320));

	if (t59 != -244831) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x321 = -3325;
	uint64_t x322 = UINT64_MAX;
	volatile uint64_t t60 = 53575695404619LLU;

	t60 = ((x321%x322)-(x323*x324));

	if (t60 != 16919733595581824542LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x325 = 15U;
	int16_t x326 = -755;
	int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MIN;
	volatile int32_t t61 = -3;

	t61 = ((x325%x326)-(x327*x328));

	if (t61 != 16271) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x331 = 2048LLU;
	int64_t x332 = -1LL;

	t62 = ((x329%x330)-(x331*x332));

	if (t62 != 2048LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x335 = -1849;
	uint32_t x336 = 1497255U;
	uint32_t t63 = 31308U;

	t63 = ((x333%x334)-(x335*x336));

	if (t63 != 2768424495U) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	uint64_t x344 = 27908LLU;

	t64 = ((x341%x342)-(x343*x344));

	if (t64 != 914489471LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x345 = INT16_MAX;
	int8_t x346 = 6;
	int16_t x347 = INT16_MAX;
	static int32_t x348 = -61734;

	t65 = ((x345%x346)-(x347*x348));

	if (t65 != 2022837979) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x349 = 394U;
	int16_t x350 = -1;
	int64_t x351 = INT64_MAX;
	volatile int16_t x352 = -1;
	volatile int64_t t66 = INT64_MAX;

	t66 = ((x349%x350)-(x351*x352));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x370 = -124;
	int64_t x371 = 491110563LL;
	volatile int64_t t67 = -49910375988285629LL;

	t67 = ((x369%x370)-(x371*x372));

	if (t67 != 12277764074LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x373 = UINT32_MAX;
	uint8_t x374 = 12U;
	uint32_t x376 = 118634U;
	uint32_t t68 = 15999U;

	t68 = ((x373%x374)-(x375*x376));

	if (t68 != 15185155U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x381 = UINT64_MAX;
	volatile int32_t x382 = INT32_MIN;
	volatile uint32_t x383 = 9U;
	uint16_t x384 = 245U;
	volatile uint64_t t69 = 12LLU;

	t69 = ((x381%x382)-(x383*x384));

	if (t69 != 2147481442LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x385 = -1;
	int8_t x386 = -1;
	static volatile int64_t x387 = 483778892LL;
	uint8_t x388 = UINT8_MAX;
	static int64_t t70 = -249553626LL;

	t70 = ((x385%x386)-(x387*x388));

	if (t70 != -123363617460LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x389 = 35U;
	static int32_t x390 = -1;
	uint16_t x391 = 335U;
	static volatile int8_t x392 = 0;
	volatile uint32_t t71 = 903U;

	t71 = ((x389%x390)-(x391*x392));

	if (t71 != 35U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x393 = -1;
	int8_t x394 = INT8_MIN;
	volatile uint32_t x395 = 545278684U;
	int32_t x396 = -4893;
	static volatile uint32_t t72 = 598U;

	t72 = ((x393%x394)-(x395*x396));

	if (t72 != 873909995U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x401 = -1;
	volatile uint32_t x402 = 20702095U;
	int64_t x403 = INT64_MIN;
	static uint64_t x404 = 37LLU;

	t73 = ((x401%x402)-(x403*x404));

	if (t73 != 9223372036864409438LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x405 = INT8_MIN;
	int8_t x407 = INT8_MIN;
	volatile int64_t t74 = -5LL;

	t74 = ((x405%x406)-(x407*x408));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = 404267;
	static int32_t x411 = -1;
	static volatile uint64_t x412 = UINT64_MAX;
	uint64_t t75 = 17266920447973289LLU;

	t75 = ((x409%x410)-(x411*x412));

	if (t75 != 8021LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x413 = 80047843U;
	int32_t x414 = INT32_MIN;
	uint32_t x415 = UINT32_MAX;
	uint32_t t76 = 803U;

	t76 = ((x413%x414)-(x415*x416));

	if (t76 != 80047715U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x417 = INT16_MAX;
	int16_t x418 = INT16_MIN;
	uint8_t x419 = 1U;
	int32_t t77 = -58;

	t77 = ((x417%x418)-(x419*x420));

	if (t77 != 32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x421 = UINT8_MAX;
	uint32_t x422 = UINT32_MAX;
	static int16_t x423 = INT16_MIN;
	uint64_t x424 = 19LLU;
	volatile uint64_t t78 = 12LLU;

	t78 = ((x421%x422)-(x423*x424));

	if (t78 != 622847LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x429 = -1;
	int32_t x430 = 210000;
	int32_t x431 = -336;
	static int32_t x432 = -1;
	static volatile int32_t t79 = 1327;

	t79 = ((x429%x430)-(x431*x432));

	if (t79 != -337) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x433 = UINT8_MAX;
	int32_t x434 = 267431;
	uint16_t x435 = 608U;
	int32_t t80 = -66486;

	t80 = ((x433%x434)-(x435*x436));

	if (t80 != -76961) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = 33LL;
	volatile uint32_t x442 = 11711500U;
	int16_t x443 = -245;
	int64_t t81 = -994240433495524836LL;

	t81 = ((x441%x442)-(x443*x444));

	if (t81 != -212LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x446 = INT8_MIN;
	int8_t x447 = 3;
	static int16_t x448 = 9657;

	t82 = ((x445%x446)-(x447*x448));

	if (t82 != -28971) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x450 = INT32_MIN;
	uint8_t x451 = UINT8_MAX;
	int8_t x452 = INT8_MIN;
	int32_t t83 = -87;

	t83 = ((x449%x450)-(x451*x452));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x457 = INT64_MIN;
	int8_t x458 = INT8_MIN;
	uint32_t x460 = 834492594U;
	static volatile int64_t t84 = -24545747799521LL;

	t84 = ((x457%x458)-(x459*x460));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x462 = 8556535611844625449LLU;
	volatile int8_t x463 = INT8_MIN;
	int16_t x464 = 11691;

	t85 = ((x461%x462)-(x463*x464));

	if (t85 != 587233936LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x465 = -2051950174217818527LL;
	volatile int32_t x466 = 1;
	volatile int32_t x468 = -1;

	t86 = ((x465%x466)-(x467*x468));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x469 = 23U;
	static int8_t x470 = -1;
	volatile int8_t x471 = -3;
	uint32_t x472 = UINT32_MAX;
	uint32_t t87 = 9U;

	t87 = ((x469%x470)-(x471*x472));

	if (t87 != 4294967293U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x474 = UINT8_MAX;
	int16_t x475 = INT16_MIN;
	uint64_t x476 = UINT64_MAX;
	uint64_t t88 = 77871LLU;

	t88 = ((x473%x474)-(x475*x476));

	if (t88 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x481 = INT16_MIN;
	volatile uint16_t x482 = UINT16_MAX;
	static volatile uint32_t x483 = 0U;
	volatile int32_t x484 = -8;
	volatile uint32_t t89 = 32718U;

	t89 = ((x481%x482)-(x483*x484));

	if (t89 != 4294934528U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x489 = INT16_MAX;
	volatile int8_t x490 = -23;
	static volatile int64_t x491 = 3443821412458854509LL;
	static int8_t x492 = -1;
	volatile int64_t t90 = -1676LL;

	t90 = ((x489%x490)-(x491*x492));

	if (t90 != 3443821412458854524LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x493 = 216U;
	int8_t x494 = 6;
	uint8_t x495 = UINT8_MAX;
	int8_t x496 = INT8_MIN;
	static volatile uint32_t t91 = 1659013380U;

	t91 = ((x493%x494)-(x495*x496));

	if (t91 != 32640U) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x505 = INT32_MIN;
	int8_t x507 = -1;
	int16_t x508 = INT16_MAX;
	int64_t t92 = -8100814531LL;

	t92 = ((x505%x506)-(x507*x508));

	if (t92 != -2147450881LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x513 = 258324482LLU;
	static int64_t x514 = INT64_MIN;
	static volatile int8_t x515 = INT8_MAX;
	uint64_t t93 = 1539730070LLU;

	t93 = ((x513%x514)-(x515*x516));

	if (t93 != 258324609LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x518 = -1LL;
	uint8_t x520 = 31U;
	int64_t t94 = -12863LL;

	t94 = ((x517%x518)-(x519*x520));

	if (t94 != -7905LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x521 = INT64_MIN;
	int32_t x522 = INT32_MAX;
	static int8_t x523 = INT8_MIN;
	uint64_t t95 = 80LLU;

	t95 = ((x521%x522)-(x523*x524));

	if (t95 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x525 = UINT16_MAX;
	volatile int16_t x526 = INT16_MAX;
	int32_t x527 = INT32_MIN;
	uint32_t x528 = 17357301U;
	uint32_t t96 = 4316U;

	t96 = ((x525%x526)-(x527*x528));

	if (t96 != 2147483649U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x529 = INT32_MAX;
	int64_t x530 = INT64_MIN;
	uint64_t x531 = 70870790131519LLU;
	static volatile uint16_t x532 = UINT16_MAX;
	uint64_t t97 = 310559935944LLU;

	t97 = ((x529%x530)-(x531*x532));

	if (t97 != 13802226844587937598LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x541 = 3U;
	static int64_t x542 = INT64_MIN;
	uint8_t x543 = UINT8_MAX;
	uint8_t x544 = 1U;

	t98 = ((x541%x542)-(x543*x544));

	if (t98 != -252LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x545 = 8308388U;
	static volatile uint8_t x548 = 1U;

	t99 = ((x545%x546)-(x547*x548));

	if (t99 != 175338U) { NG(); } else { ; }
	
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

