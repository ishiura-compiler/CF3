#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x3 = 127U;
int32_t t1 = 7754;
volatile int8_t x14 = 0;
volatile uint32_t x18 = UINT32_MAX;
uint64_t x24 = UINT64_MAX;
volatile int32_t t5 = -3;
volatile int8_t x35 = INT8_MIN;
int32_t t9 = -165843934;
volatile int32_t t10 = 1;
volatile int32_t t11 = -255875008;
uint32_t x59 = 1353U;
volatile int32_t t13 = 28583580;
int8_t x74 = INT8_MAX;
static int8_t x76 = -1;
volatile int32_t t17 = 450615;
int32_t t18 = 7193;
static volatile int32_t x94 = 1;
uint64_t x95 = UINT64_MAX;
int32_t t23 = 467;
static int32_t x118 = INT32_MIN;
uint8_t x120 = 15U;
uint16_t x123 = 3U;
uint32_t x135 = 7729U;
int32_t t30 = -10;
volatile int16_t x151 = INT16_MIN;
uint16_t x152 = 744U;
int16_t x160 = -1;
uint8_t x161 = 10U;
int32_t t33 = -198909367;
int8_t x170 = 1;
volatile int32_t x171 = 329966890;
int64_t x177 = INT64_MAX;
uint32_t x183 = 916468316U;
uint16_t x188 = 201U;
int8_t x189 = 9;
static uint32_t x195 = 840823992U;
uint16_t x205 = 1498U;
int16_t x210 = -1;
static int32_t x213 = INT32_MAX;
uint16_t x214 = UINT16_MAX;
int64_t x215 = -339553441LL;
uint32_t x219 = 539582827U;
static int32_t t45 = -126794369;
static int64_t x227 = -15LL;
int32_t t48 = 0;
static volatile int64_t x233 = INT64_MIN;
int16_t x239 = 9735;
static volatile int32_t t53 = -12110;
int16_t x265 = -1;
volatile int32_t x277 = INT32_MIN;
int64_t x278 = INT64_MIN;
volatile int32_t t59 = 35;
int32_t x284 = -513;
int32_t t60 = -749830;
int64_t x289 = 617665562574443LL;
volatile int32_t t63 = -229965;
uint64_t x298 = 31LLU;
int64_t x300 = INT64_MAX;
static uint32_t x304 = 12538U;
volatile int64_t x311 = -1LL;
uint32_t x317 = 45514U;
volatile int32_t x322 = 16;
int8_t x326 = -1;
volatile uint32_t x347 = 7999U;
int8_t x354 = 3;
uint8_t x362 = 22U;
uint32_t x368 = UINT32_MAX;
int32_t t77 = -403071;
int16_t x371 = -1;
static uint32_t x388 = 2139465U;
int8_t x399 = 0;
uint32_t x402 = UINT32_MAX;
uint64_t x405 = 945LLU;
static int64_t x408 = INT64_MAX;
int32_t x417 = INT32_MIN;
uint16_t x421 = 161U;
uint8_t x424 = 28U;
int64_t x431 = 477LL;
uint16_t x437 = UINT16_MAX;
uint64_t x440 = UINT64_MAX;
uint16_t x442 = UINT16_MAX;
uint32_t x445 = 62825U;
uint8_t x447 = 39U;
int8_t x455 = -1;
int32_t t95 = -59547445;
static volatile int16_t x469 = INT16_MIN;


void f0(void) {
	volatile int16_t x1 = -16058;
	uint64_t x2 = 163954031LLU;
	int32_t x4 = -1;
	int32_t t0 = 3990251;

	t0 = (x1==((x2+x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 7;
	int8_t x6 = INT8_MIN;
	int64_t x7 = 1973873597021683045LL;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5==((x6+x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 3U;
	volatile int32_t x10 = INT32_MIN;
	uint16_t x11 = 0U;
	int64_t x12 = 832681407LL;
	volatile int32_t t2 = 2224;

	t2 = (x9==((x10+x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1788U;
	static int32_t x15 = -1;
	uint16_t x16 = 1U;
	int32_t t3 = -390510886;

	t3 = (x13==((x14+x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	volatile uint16_t x19 = 11U;
	int8_t x20 = INT8_MIN;
	int32_t t4 = -100363;

	t4 = (x17==((x18+x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	volatile int64_t x22 = 129057144819160575LL;
	static int32_t x23 = -1;

	t5 = (x21==((x22+x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 1260U;
	static int64_t x30 = INT64_MIN;
	int8_t x31 = 11;
	uint64_t x32 = UINT64_MAX;
	volatile int32_t t6 = -1;

	t6 = (x29==((x30+x31)+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile int8_t x34 = INT8_MAX;
	volatile int64_t x36 = 37481609552LL;
	volatile int32_t t7 = -326;

	t7 = (x33==((x34+x35)+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = INT16_MIN;
	volatile uint32_t x38 = 1U;
	int64_t x39 = INT64_MIN;
	volatile int16_t x40 = INT16_MAX;
	int32_t t8 = 54297;

	t8 = (x37==((x38+x39)+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = INT16_MIN;
	int32_t x46 = -1;
	uint32_t x47 = 5157547U;
	uint8_t x48 = 23U;

	t9 = (x45==((x46+x47)+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = 685989LLU;
	volatile int64_t x50 = -1LL;
	int64_t x51 = INT64_MAX;
	int16_t x52 = -1;

	t10 = (x49==((x50+x51)+x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	volatile uint64_t x54 = UINT64_MAX;
	int64_t x55 = INT64_MAX;
	int8_t x56 = -1;

	t11 = (x53==((x54+x55)+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = -1;
	int32_t x58 = INT32_MAX;
	static uint64_t x60 = 323499179LLU;
	static volatile int32_t t12 = -24276;

	t12 = (x57==((x58+x59)+x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	static int8_t x62 = -1;
	uint8_t x63 = 0U;
	uint8_t x64 = UINT8_MAX;

	t13 = (x61==((x62+x63)+x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x65 = UINT16_MAX;
	int8_t x66 = INT8_MAX;
	static uint16_t x67 = UINT16_MAX;
	volatile int16_t x68 = 1;
	volatile int32_t t14 = 42;

	t14 = (x65==((x66+x67)+x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 96U;
	uint32_t x70 = 49161U;
	volatile int64_t x71 = 191803LL;
	static int32_t x72 = INT32_MAX;
	static volatile int32_t t15 = 226;

	t15 = (x69==((x70+x71)+x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = -1;
	uint8_t x75 = 32U;
	volatile int32_t t16 = -1515638;

	t16 = (x73==((x74+x75)+x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = UINT16_MAX;
	static int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MAX;
	volatile uint16_t x80 = UINT16_MAX;

	t17 = (x77==((x78+x79)+x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MAX;
	uint16_t x86 = 9U;
	static volatile int32_t x87 = 625079512;
	volatile uint64_t x88 = 6878324346733LLU;

	t18 = (x85==((x86+x87)+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = 97938993U;
	int64_t x90 = -1LL;
	uint8_t x91 = UINT8_MAX;
	volatile uint8_t x92 = 92U;
	static volatile int32_t t19 = 1413685;

	t19 = (x89==((x90+x91)+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x93 = INT8_MAX;
	int8_t x96 = -43;
	int32_t t20 = -487450;

	t20 = (x93==((x94+x95)+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MAX;
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = 584197LL;
	int32_t x100 = INT32_MAX;
	int32_t t21 = -1197;

	t21 = (x97==((x98+x99)+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = 9U;
	static uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MAX;
	int32_t x104 = 1088;
	volatile int32_t t22 = 14;

	t22 = (x101==((x102+x103)+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x109 = -1LL;
	int32_t x110 = INT32_MIN;
	uint64_t x111 = UINT64_MAX;
	volatile int64_t x112 = INT64_MIN;

	t23 = (x109==((x110+x111)+x112));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -3;
	uint16_t x114 = 6U;
	int16_t x115 = INT16_MIN;
	static int16_t x116 = INT16_MIN;
	int32_t t24 = -102660;

	t24 = (x113==((x114+x115)+x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 28;
	static int64_t x119 = -1LL;
	int32_t t25 = -59082;

	t25 = (x117==((x118+x119)+x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x121 = 14U;
	int32_t x122 = -3658;
	int64_t x124 = -1366488656303LL;
	int32_t t26 = 1067286683;

	t26 = (x121==((x122+x123)+x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = -72;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 7U;
	int32_t t27 = -53983953;

	t27 = (x125==((x126+x127)+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = -4087;
	uint32_t x130 = 143997U;
	int16_t x131 = INT16_MIN;
	static int16_t x132 = INT16_MIN;
	int32_t t28 = -159592827;

	t28 = (x129==((x130+x131)+x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x133 = UINT64_MAX;
	int8_t x134 = -1;
	int16_t x136 = INT16_MAX;
	int32_t t29 = -2172158;

	t29 = (x133==((x134+x135)+x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = 8372796760116104LL;
	static volatile int16_t x138 = INT16_MIN;
	static volatile uint8_t x139 = 4U;
	static int8_t x140 = INT8_MIN;

	t30 = (x137==((x138+x139)+x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 1478538U;
	volatile int64_t x150 = INT64_MAX;
	volatile int32_t t31 = -138219748;

	t31 = (x149==((x150+x151)+x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x157 = INT32_MAX;
	int8_t x158 = -21;
	int8_t x159 = INT8_MIN;
	static volatile int32_t t32 = 265722129;

	t32 = (x157==((x158+x159)+x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x162 = 1086U;
	int8_t x163 = -11;
	int32_t x164 = INT32_MIN;

	t33 = (x161==((x162+x163)+x164));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -235048970546668LL;
	static int32_t x166 = -250;
	uint8_t x167 = UINT8_MAX;
	int16_t x168 = INT16_MAX;
	static volatile int32_t t34 = -12945159;

	t34 = (x165==((x166+x167)+x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x169 = -1LL;
	volatile int16_t x172 = -1;
	volatile int32_t t35 = -402071;

	t35 = (x169==((x170+x171)+x172));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x178 = -1LL;
	int64_t x179 = -1LL;
	volatile int8_t x180 = INT8_MIN;
	volatile int32_t t36 = 1443591;

	t36 = (x177==((x178+x179)+x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = 31146390;
	int16_t x184 = INT16_MAX;
	volatile int32_t t37 = -10;

	t37 = (x181==((x182+x183)+x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x185 = -440777737;
	volatile int64_t x186 = -2928121831208016LL;
	uint16_t x187 = 128U;
	volatile int32_t t38 = 2414835;

	t38 = (x185==((x186+x187)+x188));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x190 = INT64_MIN;
	uint64_t x191 = 43226LLU;
	uint8_t x192 = UINT8_MAX;
	static volatile int32_t t39 = 8;

	t39 = (x189==((x190+x191)+x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x193 = 64896965271753307LLU;
	uint32_t x194 = 8669874U;
	uint32_t x196 = UINT32_MAX;
	static volatile int32_t t40 = -236841128;

	t40 = (x193==((x194+x195)+x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = -1842806192325533454LL;
	volatile int64_t x198 = INT64_MIN;
	uint16_t x199 = 19928U;
	uint32_t x200 = UINT32_MAX;
	int32_t t41 = -673;

	t41 = (x197==((x198+x199)+x200));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x206 = 2U;
	int16_t x207 = 11;
	uint32_t x208 = UINT32_MAX;
	int32_t t42 = 51869107;

	t42 = (x205==((x206+x207)+x208));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x209 = -5;
	uint64_t x211 = 3927980494LLU;
	static int16_t x212 = INT16_MIN;
	int32_t t43 = 0;

	t43 = (x209==((x210+x211)+x212));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x216 = INT8_MAX;
	int32_t t44 = -1;

	t44 = (x213==((x214+x215)+x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = -1;
	volatile uint32_t x218 = UINT32_MAX;
	int64_t x220 = INT64_MIN;

	t45 = (x217==((x218+x219)+x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x221 = 487U;
	int32_t x222 = INT32_MIN;
	static int64_t x223 = -15437196217LL;
	static int8_t x224 = -27;
	volatile int32_t t46 = -15172174;

	t46 = (x221==((x222+x223)+x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x225 = UINT16_MAX;
	uint8_t x226 = 17U;
	int16_t x228 = 0;
	volatile int32_t t47 = 2;

	t47 = (x225==((x226+x227)+x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x229 = -1;
	uint32_t x230 = 1620935134U;
	static int16_t x231 = -1;
	uint64_t x232 = 1070187954194577285LLU;

	t48 = (x229==((x230+x231)+x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x234 = UINT32_MAX;
	static int64_t x235 = INT64_MIN;
	uint64_t x236 = UINT64_MAX;
	volatile int32_t t49 = 1975;

	t49 = (x233==((x234+x235)+x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = INT32_MAX;
	uint32_t x238 = UINT32_MAX;
	volatile int16_t x240 = INT16_MIN;
	volatile int32_t t50 = 158337149;

	t50 = (x237==((x238+x239)+x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x241 = UINT16_MAX;
	static int16_t x242 = INT16_MAX;
	volatile uint32_t x243 = 1405U;
	volatile int32_t x244 = INT32_MIN;
	volatile int32_t t51 = -1586242;

	t51 = (x241==((x242+x243)+x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	int32_t x247 = 0;
	uint32_t x248 = 2933444U;
	int32_t t52 = 39463030;

	t52 = (x245==((x246+x247)+x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = -1425581908523506LL;
	int64_t x251 = 1LL;
	uint32_t x252 = 13851U;

	t53 = (x249==((x250+x251)+x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x253 = 14U;
	int32_t x254 = 10;
	static int8_t x255 = -1;
	int16_t x256 = -370;
	volatile int32_t t54 = 327919917;

	t54 = (x253==((x254+x255)+x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = -1;
	int32_t x258 = INT32_MIN;
	int32_t x259 = 3821;
	volatile int64_t x260 = -1LL;
	static volatile int32_t t55 = -2737366;

	t55 = (x257==((x258+x259)+x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = 3;
	volatile uint64_t x262 = 102695483188833349LLU;
	uint32_t x263 = 49945335U;
	volatile uint32_t x264 = 877712816U;
	int32_t t56 = -409;

	t56 = (x261==((x262+x263)+x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint32_t x266 = 21183761U;
	int8_t x267 = -1;
	uint64_t x268 = UINT64_MAX;
	int32_t t57 = -1102;

	t57 = (x265==((x266+x267)+x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = -649521LL;
	int8_t x270 = INT8_MAX;
	static uint16_t x271 = 4780U;
	int32_t x272 = 808081;
	volatile int32_t t58 = 96322658;

	t58 = (x269==((x270+x271)+x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x279 = UINT8_MAX;
	static volatile int64_t x280 = -1LL;

	t59 = (x277==((x278+x279)+x280));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x281 = -1298;
	volatile uint32_t x282 = UINT32_MAX;
	int32_t x283 = -1;

	t60 = (x281==((x282+x283)+x284));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x285 = 28536U;
	static int32_t x286 = -1;
	int8_t x287 = -1;
	int32_t x288 = -57150390;
	int32_t t61 = -3965614;

	t61 = (x285==((x286+x287)+x288));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x290 = 13687U;
	uint32_t x291 = 13072U;
	uint64_t x292 = 189LLU;
	volatile int32_t t62 = -503;

	t62 = (x289==((x290+x291)+x292));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x293 = -107;
	volatile uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 1U;
	uint8_t x296 = 36U;

	t63 = (x293==((x294+x295)+x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x297 = 54U;
	static int32_t x299 = INT32_MAX;
	int32_t t64 = 4806386;

	t64 = (x297==((x298+x299)+x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x301 = 5269896949685LL;
	volatile int16_t x302 = INT16_MIN;
	uint16_t x303 = 0U;
	volatile int32_t t65 = -531131797;

	t65 = (x301==((x302+x303)+x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x305 = 45U;
	int16_t x306 = 220;
	volatile int16_t x307 = 6773;
	volatile int32_t x308 = 2037;
	int32_t t66 = 6695;

	t66 = (x305==((x306+x307)+x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -1;
	uint64_t x310 = 8350697753356324LLU;
	static volatile int16_t x312 = INT16_MIN;
	static int32_t t67 = -7767425;

	t67 = (x309==((x310+x311)+x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = -1;
	volatile int16_t x314 = 1;
	int8_t x315 = 1;
	volatile int64_t x316 = 130LL;
	static int32_t t68 = 6;

	t68 = (x313==((x314+x315)+x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x318 = 3875U;
	int64_t x319 = -3847LL;
	int8_t x320 = -1;
	static int32_t t69 = -5168;

	t69 = (x317==((x318+x319)+x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x321 = -1;
	static uint64_t x323 = UINT64_MAX;
	static int32_t x324 = INT32_MIN;
	volatile int32_t t70 = 814686946;

	t70 = (x321==((x322+x323)+x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = INT32_MAX;
	static uint8_t x327 = UINT8_MAX;
	uint32_t x328 = 1840U;
	volatile int32_t t71 = -648370;

	t71 = (x325==((x326+x327)+x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x341 = UINT64_MAX;
	static int8_t x342 = -1;
	int8_t x343 = -1;
	static volatile int64_t x344 = INT64_MAX;
	volatile int32_t t72 = -1897294;

	t72 = (x341==((x342+x343)+x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int16_t x346 = -1;
	static int32_t x348 = 13630;
	static int32_t t73 = 1606738;

	t73 = (x345==((x346+x347)+x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x353 = -239150614;
	static int16_t x355 = INT16_MAX;
	int32_t x356 = INT32_MIN;
	volatile int32_t t74 = -208569;

	t74 = (x353==((x354+x355)+x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = -13;
	static uint32_t x359 = 453U;
	uint32_t x360 = UINT32_MAX;
	volatile int32_t t75 = 43098360;

	t75 = (x357==((x358+x359)+x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x361 = -375138713612LL;
	static uint8_t x363 = 0U;
	int8_t x364 = 53;
	int32_t t76 = -4;

	t76 = (x361==((x362+x363)+x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = -32668479;
	int16_t x367 = INT16_MAX;

	t77 = (x365==((x366+x367)+x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x369 = INT16_MIN;
	static int16_t x370 = -1;
	volatile int16_t x372 = INT16_MAX;
	int32_t t78 = 0;

	t78 = (x369==((x370+x371)+x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x373 = 14388U;
	int16_t x374 = -3;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = -1LL;
	static volatile int32_t t79 = -1;

	t79 = (x373==((x374+x375)+x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	uint32_t x383 = UINT32_MAX;
	static volatile int8_t x384 = -1;
	static int32_t t80 = 1513498;

	t80 = (x381==((x382+x383)+x384));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = -1;
	int8_t x386 = INT8_MAX;
	uint32_t x387 = 221331U;
	int32_t t81 = 206557;

	t81 = (x385==((x386+x387)+x388));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x393 = 291614U;
	int32_t x394 = 66252106;
	uint16_t x395 = 3U;
	int8_t x396 = -1;
	int32_t t82 = 284571012;

	t82 = (x393==((x394+x395)+x396));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x397 = INT8_MIN;
	static uint16_t x398 = 0U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t83 = -12784;

	t83 = (x397==((x398+x399)+x400));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x401 = UINT64_MAX;
	int8_t x403 = -1;
	uint32_t x404 = 7U;
	int32_t t84 = -5001;

	t84 = (x401==((x402+x403)+x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x406 = INT16_MIN;
	uint64_t x407 = UINT64_MAX;
	int32_t t85 = -188192018;

	t85 = (x405==((x406+x407)+x408));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x409 = UINT32_MAX;
	int32_t x410 = 194015215;
	uint64_t x411 = UINT64_MAX;
	int32_t x412 = INT32_MAX;
	static int32_t t86 = 18492851;

	t86 = (x409==((x410+x411)+x412));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x418 = -696843;
	static int16_t x419 = -1;
	volatile uint16_t x420 = UINT16_MAX;
	volatile int32_t t87 = -879476033;

	t87 = (x417==((x418+x419)+x420));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x422 = 0;
	int8_t x423 = INT8_MIN;
	int32_t t88 = -9440;

	t88 = (x421==((x422+x423)+x424));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x425 = 559541265121913LLU;
	static int8_t x426 = -1;
	int64_t x427 = INT64_MAX;
	int32_t x428 = -1;
	int32_t t89 = 813591;

	t89 = (x425==((x426+x427)+x428));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x429 = 32167;
	static volatile int32_t x430 = -10;
	volatile uint64_t x432 = UINT64_MAX;
	static int32_t t90 = -64004;

	t90 = (x429==((x430+x431)+x432));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x438 = INT8_MAX;
	static int64_t x439 = -8708088480076627LL;
	volatile int32_t t91 = 32125;

	t91 = (x437==((x438+x439)+x440));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = 156232493;
	uint16_t x443 = 23187U;
	uint64_t x444 = 270924LLU;
	volatile int32_t t92 = 2;

	t92 = (x441==((x442+x443)+x444));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x446 = 1511LL;
	uint32_t x448 = 0U;
	volatile int32_t t93 = -120396;

	t93 = (x445==((x446+x447)+x448));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = -1;
	uint64_t x450 = 7748LLU;
	volatile int32_t x451 = -1;
	int16_t x452 = -1;
	volatile int32_t t94 = -517;

	t94 = (x449==((x450+x451)+x452));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x453 = INT64_MIN;
	static int64_t x454 = INT64_MAX;
	int8_t x456 = INT8_MIN;

	t95 = (x453==((x454+x455)+x456));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MIN;
	int16_t x463 = INT16_MIN;
	uint8_t x464 = 1U;
	static volatile int32_t t96 = -15114;

	t96 = (x461==((x462+x463)+x464));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x465 = INT64_MIN;
	uint8_t x466 = 0U;
	int32_t x467 = INT32_MIN;
	uint16_t x468 = 61U;
	volatile int32_t t97 = -20268;

	t97 = (x465==((x466+x467)+x468));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x470 = 47;
	int32_t x471 = -445797;
	uint16_t x472 = 225U;
	static volatile int32_t t98 = 46;

	t98 = (x469==((x470+x471)+x472));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x473 = INT8_MIN;
	int64_t x474 = INT64_MIN;
	uint64_t x475 = UINT64_MAX;
	int16_t x476 = 19;
	volatile int32_t t99 = 1746918;

	t99 = (x473==((x474+x475)+x476));

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

