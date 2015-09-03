#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -17129LL;
int32_t x17 = -1;
int16_t x20 = -1582;
static int8_t x30 = 11;
static volatile uint64_t t5 = 953950LLU;
static int32_t x43 = 523;
int8_t x49 = INT8_MAX;
uint16_t x54 = UINT16_MAX;
static volatile int8_t x58 = -8;
int8_t x64 = -5;
volatile int64_t x65 = -1LL;
static int16_t x71 = INT16_MIN;
int64_t t14 = -362LL;
static uint8_t x84 = 9U;
uint64_t t18 = 23004LLU;
int16_t x105 = INT16_MIN;
static volatile int64_t x107 = 98LL;
volatile uint32_t x117 = 3U;
int64_t x128 = -62LL;
int64_t t25 = -37693708110LL;
volatile int64_t x129 = INT64_MAX;
int32_t x131 = INT32_MAX;
int64_t x155 = INT64_MAX;
static uint64_t x159 = 2453403421LLU;
static int16_t x160 = INT16_MAX;
uint8_t x165 = UINT8_MAX;
uint8_t x169 = 127U;
uint64_t x175 = UINT64_MAX;
static uint16_t x176 = UINT16_MAX;
int16_t x180 = 40;
int32_t x186 = INT32_MIN;
static int16_t x188 = INT16_MIN;
uint64_t t37 = 2848528461LLU;
uint64_t x193 = 115115LLU;
int16_t x210 = INT16_MIN;
volatile uint64_t x211 = 532076LLU;
int64_t x231 = -479325079LL;
static volatile int16_t x232 = INT16_MIN;
static volatile uint64_t t46 = 13437701267LLU;
uint8_t x234 = UINT8_MAX;
static volatile int64_t x237 = INT64_MIN;
int16_t x239 = -464;
static volatile int32_t x244 = 65469;
volatile int32_t t49 = 2765;
int8_t x248 = INT8_MIN;
uint16_t x250 = 328U;
static int16_t x252 = 14;
int32_t x256 = INT32_MIN;
volatile uint16_t x261 = 4U;
int8_t x264 = INT8_MAX;
volatile int32_t t54 = -593540878;
volatile uint32_t x265 = UINT32_MAX;
int8_t x271 = -22;
int32_t x275 = INT32_MAX;
int64_t x278 = -1970199LL;
uint32_t x280 = 495597U;
volatile uint64_t t59 = 1450456654LLU;
int64_t t60 = -3LL;
static int64_t x289 = -1LL;
uint64_t x295 = 16782633220515LLU;
static volatile int32_t t63 = -140;
static volatile int16_t x306 = 19;
volatile int64_t x311 = INT64_MAX;
volatile int64_t t65 = -29963476374LL;
volatile uint8_t x315 = 60U;
int64_t x321 = -1LL;
int64_t x324 = INT64_MAX;
int8_t x329 = INT8_MAX;
uint8_t x336 = UINT8_MAX;
int32_t x343 = INT32_MIN;
int8_t x344 = 33;
volatile int32_t x349 = -7472;
static volatile int8_t x350 = -1;
static volatile uint64_t t73 = 116735297LLU;
volatile int16_t x354 = 1580;
uint64_t t78 = 32157403284LLU;
uint32_t x392 = 66965646U;
int32_t x393 = INT32_MIN;
int8_t x395 = INT8_MAX;
int16_t x400 = INT16_MAX;
uint8_t x407 = UINT8_MAX;
volatile int32_t x412 = INT32_MIN;
volatile int8_t x417 = -1;
volatile uint16_t x427 = 13397U;
volatile int32_t t89 = -41;
volatile uint16_t x431 = 24632U;
volatile int64_t x432 = INT64_MAX;
uint64_t x433 = 26837528560LLU;
volatile int16_t x434 = 3049;
uint16_t x435 = UINT16_MAX;
static uint32_t x437 = 7243260U;
static int8_t x441 = INT8_MAX;
static uint64_t x443 = UINT64_MAX;
static uint32_t x452 = 257561U;
int32_t t95 = 409;
volatile int64_t x460 = 1071645659LL;
int32_t x467 = INT32_MIN;
int8_t x470 = INT8_MIN;
int32_t x471 = INT32_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint16_t x2 = 1U;
	int8_t x3 = INT8_MIN;
	uint32_t x4 = 28264U;
	static uint32_t t0 = 51U;

	t0 = ((x1+x2)-(x3/x4));

	if (t0 != 2147331691U) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 122985230382LL;
	volatile int16_t x6 = 0;
	uint16_t x7 = 5780U;
	uint16_t x8 = UINT16_MAX;

	t1 = ((x5+x6)-(x7/x8));

	if (t1 != 122985230382LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 16LLU;
	int32_t x14 = -1;
	static int64_t x15 = -1LL;
	int64_t x16 = INT64_MIN;
	volatile uint64_t t2 = 274635300542058LLU;

	t2 = ((x13+x14)-(x15/x16));

	if (t2 != 15LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x18 = UINT32_MAX;
	uint8_t x19 = 1U;
	volatile uint32_t t3 = 334U;

	t3 = ((x17+x18)-(x19/x20));

	if (t3 != 4294967294U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x25 = 0U;
	uint64_t x26 = 163LLU;
	uint8_t x27 = UINT8_MAX;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t4 = 5449249089LLU;

	t4 = ((x25+x26)-(x27/x28));

	if (t4 != 163LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 4040935606897893LLU;
	uint32_t x31 = 11918U;
	uint64_t x32 = 123LLU;

	t5 = ((x29+x30)-(x31/x32));

	if (t5 != 4040935606897808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x37 = UINT32_MAX;
	volatile int64_t x38 = -1LL;
	uint64_t x39 = 1112754LLU;
	static int32_t x40 = INT32_MAX;
	uint64_t t6 = 34836LLU;

	t6 = ((x37+x38)-(x39/x40));

	if (t6 != 4294967294LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = UINT64_MAX;
	static int16_t x42 = 1;
	uint16_t x44 = UINT16_MAX;
	static uint64_t t7 = 504158LLU;

	t7 = ((x41+x42)-(x43/x44));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = 316768668439295LL;
	uint16_t x46 = 36U;
	static uint32_t x47 = 133648383U;
	uint16_t x48 = 610U;
	static volatile int64_t t8 = 15798050LL;

	t8 = ((x45+x46)-(x47/x48));

	if (t8 != 316768668220236LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x50 = INT16_MAX;
	uint16_t x51 = 14U;
	int64_t x52 = INT64_MIN;
	int64_t t9 = 59LL;

	t9 = ((x49+x50)-(x51/x52));

	if (t9 != 32894LL) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x53 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	volatile uint8_t x56 = UINT8_MAX;
	int32_t t10 = -20;

	t10 = ((x53+x54)-(x55/x56));

	if (t10 != 65918) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MAX;
	static int16_t x59 = -11;
	int8_t x60 = -2;
	volatile int32_t t11 = 14385;

	t11 = ((x57+x58)-(x59/x60));

	if (t11 != 114) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = 28142980;
	uint32_t x62 = UINT32_MAX;
	int8_t x63 = 17;
	uint32_t t12 = 18240826U;

	t12 = ((x61+x62)-(x63/x64));

	if (t12 != 28142982U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x66 = -1;
	int32_t x67 = INT32_MAX;
	int16_t x68 = 1690;
	volatile int64_t t13 = -17970888169524LL;

	t13 = ((x65+x66)-(x67/x68));

	if (t13 != -1270702LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x69 = INT16_MIN;
	int16_t x70 = -1;
	int64_t x72 = 2178024000458LL;

	t14 = ((x69+x70)-(x71/x72));

	if (t14 != -32769LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = INT16_MIN;
	volatile uint32_t x82 = 1412985U;
	uint32_t x83 = UINT32_MAX;
	uint32_t t15 = 6164577U;

	t15 = ((x81+x82)-(x83/x84));

	if (t15 != 3819128925U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x85 = -1LL;
	volatile int16_t x86 = INT16_MAX;
	int16_t x87 = -1;
	volatile int32_t x88 = -46325;
	static int64_t t16 = 9762701609605LL;

	t16 = ((x85+x86)-(x87/x88));

	if (t16 != 32766LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = -1LL;
	int32_t x90 = INT32_MIN;
	volatile int16_t x91 = 1;
	static uint64_t x92 = 1991LLU;
	volatile uint64_t t17 = 415054660271LLU;

	t17 = ((x89+x90)-(x91/x92));

	if (t17 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -1;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = -1;
	volatile uint64_t x96 = 69LLU;

	t18 = ((x93+x94)-(x95/x96));

	if (t18 != 18179399956699268514LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x97 = INT8_MAX;
	int64_t x98 = INT64_MIN;
	int64_t x99 = INT64_MIN;
	uint32_t x100 = 4149U;
	volatile int64_t t19 = -5820LL;

	t19 = ((x97+x98)-(x99/x100));

	if (t19 != -9221149001897712588LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x106 = INT16_MIN;
	int16_t x108 = INT16_MIN;
	volatile int64_t t20 = 292220295913LL;

	t20 = ((x105+x106)-(x107/x108));

	if (t20 != -65536LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x109 = INT64_MIN;
	int8_t x110 = INT8_MAX;
	int8_t x111 = -1;
	int8_t x112 = INT8_MIN;
	int64_t t21 = 257021045LL;

	t21 = ((x109+x110)-(x111/x112));

	if (t21 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = INT32_MIN;
	int64_t x114 = 115020144786910224LL;
	int32_t x115 = -62035306;
	volatile int32_t x116 = -1;
	volatile int64_t t22 = -11214100683461LL;

	t22 = ((x113+x114)-(x115/x116));

	if (t22 != 115020142577391270LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	int64_t x120 = 9LL;
	volatile int64_t t23 = -508858278380827663LL;

	t23 = ((x117+x118)-(x119/x120));

	if (t23 != 2147487291LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 82863661U;
	int8_t x123 = -1;
	uint8_t x124 = UINT8_MAX;
	static uint32_t t24 = 24992U;

	t24 = ((x121+x122)-(x123/x124));

	if (t24 != 2230347309U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x125 = 141811966U;
	static uint8_t x126 = 1U;
	int16_t x127 = -2;

	t25 = ((x125+x126)-(x127/x128));

	if (t25 != 141811967LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x130 = INT64_MIN;
	int32_t x132 = INT32_MAX;
	int64_t t26 = -1LL;

	t26 = ((x129+x130)-(x131/x132));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x137 = INT16_MIN;
	volatile int32_t x138 = 407;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = INT32_MIN;
	volatile uint64_t t27 = 525568681LLU;

	t27 = ((x137+x138)-(x139/x140));

	if (t27 != 18446744073709519254LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = UINT8_MAX;
	static volatile uint16_t x146 = 57U;
	static int64_t x147 = INT64_MIN;
	int64_t x148 = INT64_MIN;
	int64_t t28 = -5843573466LL;

	t28 = ((x145+x146)-(x147/x148));

	if (t28 != 311LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = 13;
	volatile int8_t x154 = INT8_MIN;
	volatile uint64_t x156 = 28742699127749890LLU;
	uint64_t t29 = 5199976LLU;

	t29 = ((x153+x154)-(x155/x156));

	if (t29 != 18446744073709551181LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x157 = 908U;
	static uint16_t x158 = 0U;
	uint64_t t30 = 257375762751613LLU;

	t30 = ((x157+x158)-(x159/x160));

	if (t30 != 18446744073709477650LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x161 = -1;
	uint32_t x162 = 1974U;
	static uint16_t x163 = UINT16_MAX;
	volatile int8_t x164 = INT8_MAX;
	uint32_t t31 = 63U;

	t31 = ((x161+x162)-(x163/x164));

	if (t31 != 1457U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x166 = 726816105196LL;
	uint16_t x167 = 232U;
	static uint32_t x168 = 3083447U;
	int64_t t32 = -257046091978LL;

	t32 = ((x165+x166)-(x167/x168));

	if (t32 != 726816105451LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x170 = -141609205673694508LL;
	uint64_t x171 = 62338036427154LLU;
	uint64_t x172 = 7LLU;
	uint64_t t33 = 69856LLU;

	t33 = ((x169+x170)-(x171/x172));

	if (t33 != 18305125962602081928LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = 66U;
	uint64_t t34 = 212501864020348LLU;

	t34 = ((x173+x174)-(x175/x176));

	if (t34 != 9223090557583032385LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x177 = UINT16_MAX;
	static volatile uint32_t x178 = 24U;
	int16_t x179 = INT16_MIN;
	uint32_t t35 = 1272210U;

	t35 = ((x177+x178)-(x179/x180));

	if (t35 != 66378U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = INT16_MAX;
	uint64_t x182 = 9083438LLU;
	int8_t x183 = -4;
	volatile int64_t x184 = -1LL;
	uint64_t t36 = 7803536265LLU;

	t36 = ((x181+x182)-(x183/x184));

	if (t36 != 9116201LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x185 = 766074558240489047LLU;
	uint16_t x187 = 19236U;

	t37 = ((x185+x186)-(x187/x188));

	if (t37 != 766074556093005399LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x189 = INT8_MIN;
	volatile int64_t x190 = -82844LL;
	uint64_t x191 = 0LLU;
	static uint32_t x192 = 303U;
	volatile uint64_t t38 = 958843436LLU;

	t38 = ((x189+x190)-(x191/x192));

	if (t38 != 18446744073709468644LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x194 = -1;
	static int64_t x195 = INT64_MIN;
	uint16_t x196 = 5435U;
	uint64_t t39 = 142604108175366531LLU;

	t39 = ((x193+x194)-(x195/x196));

	if (t39 != 1697032573593453LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x197 = 188U;
	uint32_t x198 = 1241U;
	int16_t x199 = 415;
	static int8_t x200 = -3;
	static volatile uint32_t t40 = 788026U;

	t40 = ((x197+x198)-(x199/x200));

	if (t40 != 1567U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x201 = INT64_MIN;
	uint32_t x202 = UINT32_MAX;
	static int32_t x203 = 7261;
	int16_t x204 = INT16_MIN;
	static volatile int64_t t41 = 1828112645138144LL;

	t41 = ((x201+x202)-(x203/x204));

	if (t41 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x205 = -10181;
	int32_t x206 = 269797393;
	int8_t x207 = -1;
	int64_t x208 = -1LL;
	volatile int64_t t42 = -4149868514010009LL;

	t42 = ((x205+x206)-(x207/x208));

	if (t42 != 269787211LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -13236330060623574LL;
	static uint16_t x212 = 1026U;
	static uint64_t t43 = 500LLU;

	t43 = ((x209+x210)-(x211/x212));

	if (t43 != 18433507743648894756LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x213 = 1;
	uint64_t x214 = 7618805775LLU;
	static uint16_t x215 = 7U;
	uint32_t x216 = UINT32_MAX;
	volatile uint64_t t44 = 1070206764LLU;

	t44 = ((x213+x214)-(x215/x216));

	if (t44 != 7618805776LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x225 = INT8_MIN;
	int8_t x226 = INT8_MIN;
	static uint32_t x227 = 0U;
	int8_t x228 = INT8_MIN;
	uint32_t t45 = 26659U;

	t45 = ((x225+x226)-(x227/x228));

	if (t45 != 4294967040U) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = UINT64_MAX;
	uint8_t x230 = 14U;

	t46 = ((x229+x230)-(x231/x232));

	if (t46 != 18446744073709537002LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x233 = -1;
	uint64_t x235 = 629LLU;
	uint8_t x236 = UINT8_MAX;
	uint64_t t47 = 4440250300460609LLU;

	t47 = ((x233+x234)-(x235/x236));

	if (t47 != 252LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x238 = 242780794249471LL;
	int64_t x240 = 93LL;
	int64_t t48 = 738LL;

	t48 = ((x237+x238)-(x239/x240));

	if (t48 != -9223129256060526333LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x241 = INT8_MAX;
	static volatile int16_t x242 = INT16_MIN;
	uint8_t x243 = UINT8_MAX;

	t49 = ((x241+x242)-(x243/x244));

	if (t49 != -32641) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 6U;
	static volatile int32_t t50 = 10;

	t50 = ((x245+x246)-(x247/x248));

	if (t50 != -32896) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x249 = -1;
	static volatile uint64_t x251 = 5519613971LLU;
	volatile uint64_t t51 = 4327925396919053LLU;

	t51 = ((x249+x250)-(x251/x252));

	if (t51 != 18446744073315293803LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x253 = -2902;
	volatile int64_t x254 = INT64_MAX;
	uint32_t x255 = UINT32_MAX;
	static int64_t t52 = 41790953224941LL;

	t52 = ((x253+x254)-(x255/x256));

	if (t52 != 9223372036854772904LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x257 = 1U;
	int16_t x258 = INT16_MIN;
	volatile int32_t x259 = INT32_MAX;
	uint16_t x260 = 5359U;
	int32_t t53 = 3562;

	t53 = ((x257+x258)-(x259/x260));

	if (t53 != -433491) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MAX;

	t54 = ((x261+x262)-(x263/x264));

	if (t54 != -32765) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x266 = INT16_MIN;
	int32_t x267 = -177;
	int32_t x268 = INT32_MAX;
	volatile uint32_t t55 = 29U;

	t55 = ((x265+x266)-(x267/x268));

	if (t55 != 4294934527U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = INT32_MIN;
	uint8_t x270 = 1U;
	static int64_t x272 = -7873749174931LL;
	volatile int64_t t56 = 1LL;

	t56 = ((x269+x270)-(x271/x272));

	if (t56 != -2147483647LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	int16_t x276 = -13;
	volatile int32_t t57 = 316;

	t57 = ((x273+x274)-(x275/x276));

	if (t57 != 165158153) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = 75LLU;
	volatile int8_t x279 = INT8_MIN;
	volatile uint64_t t58 = 434LLU;

	t58 = ((x277+x278)-(x279/x280));

	if (t58 != 18446744073707572826LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x281 = -1;
	int32_t x282 = -1;
	static uint64_t x283 = 1764138262LLU;
	int16_t x284 = -1;

	t59 = ((x281+x282)-(x283/x284));

	if (t59 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MAX;
	static int64_t x286 = -1LL;
	static volatile int16_t x287 = -3;
	volatile uint16_t x288 = UINT16_MAX;

	t60 = ((x285+x286)-(x287/x288));

	if (t60 != 2147483646LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x290 = INT8_MAX;
	int16_t x291 = INT16_MIN;
	uint16_t x292 = 219U;
	volatile int64_t t61 = 3365060741916785LL;

	t61 = ((x289+x290)-(x291/x292));

	if (t61 != 275LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x293 = 4238;
	uint32_t x294 = 8U;
	uint32_t x296 = UINT32_MAX;
	volatile uint64_t t62 = 311088290012881311LLU;

	t62 = ((x293+x294)-(x295/x296));

	if (t62 != 339LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x297 = INT8_MAX;
	int8_t x298 = INT8_MIN;
	int8_t x299 = -1;
	static volatile int32_t x300 = -65005357;

	t63 = ((x297+x298)-(x299/x300));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x305 = 0U;
	int32_t x307 = -287443450;
	int16_t x308 = 767;
	int32_t t64 = 3;

	t64 = ((x305+x306)-(x307/x308));

	if (t64 != 374782) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = -1;
	int32_t x310 = -1;
	int32_t x312 = INT32_MIN;

	t65 = ((x309+x310)-(x311/x312));

	if (t65 != 4294967293LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = 6716646832LLU;
	int8_t x314 = INT8_MIN;
	static volatile int16_t x316 = -1;
	uint64_t t66 = 128188LLU;

	t66 = ((x313+x314)-(x315/x316));

	if (t66 != 6716646764LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x317 = UINT64_MAX;
	uint64_t x318 = UINT64_MAX;
	volatile int8_t x319 = -1;
	static volatile uint16_t x320 = 5987U;
	volatile uint64_t t67 = 125111534045391945LLU;

	t67 = ((x317+x318)-(x319/x320));

	if (t67 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x322 = -1LL;
	volatile uint16_t x323 = UINT16_MAX;
	volatile int64_t t68 = -16128LL;

	t68 = ((x321+x322)-(x323/x324));

	if (t68 != -2LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x330 = 0U;
	int64_t x331 = INT64_MIN;
	static int8_t x332 = 9;
	int64_t t69 = 4807503929336LL;

	t69 = ((x329+x330)-(x331/x332));

	if (t69 != 1024819115206086327LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = 14730925578LLU;
	static volatile uint16_t x335 = UINT16_MAX;
	uint64_t t70 = 305594028LLU;

	t70 = ((x333+x334)-(x335/x336));

	if (t70 != 14730925193LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x341 = UINT64_MAX;
	int32_t x342 = INT32_MIN;
	volatile uint64_t t71 = 248302752494LLU;

	t71 = ((x341+x342)-(x343/x344));

	if (t71 != 18446744071627143229LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x345 = 1U;
	int32_t x346 = INT32_MIN;
	static int64_t x347 = -1LL;
	volatile uint64_t x348 = UINT64_MAX;
	volatile uint64_t t72 = 183841LLU;

	t72 = ((x345+x346)-(x347/x348));

	if (t72 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x351 = 45513044203984LLU;
	int8_t x352 = INT8_MIN;

	t73 = ((x349+x350)-(x351/x352));

	if (t73 != 18446744073709544143LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = INT8_MIN;
	int16_t x355 = -1;
	uint32_t x356 = 102U;
	uint32_t t74 = 622272379U;

	t74 = ((x353+x354)-(x355/x356));

	if (t74 != 4252861226U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x357 = INT64_MAX;
	uint8_t x358 = 0U;
	int64_t x359 = 514337655LL;
	uint8_t x360 = 64U;
	static volatile int64_t t75 = 5296538393LL;

	t75 = ((x357+x358)-(x359/x360));

	if (t75 != 9223372036846739282LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = 1U;
	volatile int64_t x362 = 397334091LL;
	int64_t x363 = INT64_MAX;
	uint16_t x364 = 1U;
	static volatile int64_t t76 = -421325736351327482LL;

	t76 = ((x361+x362)-(x363/x364));

	if (t76 != -9223372036457441715LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x377 = 96847796532LLU;
	static int64_t x378 = 439622852LL;
	int32_t x379 = -138239;
	volatile uint8_t x380 = UINT8_MAX;
	uint64_t t77 = 206681210249LLU;

	t77 = ((x377+x378)-(x379/x380));

	if (t77 != 97287419926LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x381 = UINT64_MAX;
	uint8_t x382 = 7U;
	int32_t x383 = 2711;
	int16_t x384 = INT16_MIN;

	t78 = ((x381+x382)-(x383/x384));

	if (t78 != 6LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x385 = 7;
	int8_t x386 = INT8_MIN;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = 3057009210LLU;
	uint64_t t79 = 1933210714243LLU;

	t79 = ((x385+x386)-(x387/x388));

	if (t79 != 18446744067675305994LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -160359424;
	int64_t x390 = INT64_MAX;
	static int8_t x391 = -1;
	volatile int64_t t80 = 18146LL;

	t80 = ((x389+x390)-(x391/x392));

	if (t80 != 9223372036694416319LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x394 = 1788630680LL;
	uint64_t x396 = 219014782LLU;
	volatile uint64_t t81 = 12LLU;

	t81 = ((x393+x394)-(x395/x396));

	if (t81 != 18446744073350698648LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x397 = 4342;
	int8_t x398 = INT8_MIN;
	int64_t x399 = INT64_MIN;
	static volatile int64_t t82 = -23140LL;

	t82 = ((x397+x398)-(x399/x400));

	if (t82 != 281483566911614LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x401 = INT8_MIN;
	volatile uint64_t x402 = 266LLU;
	int16_t x403 = -1;
	int32_t x404 = INT32_MAX;
	uint64_t t83 = 28278LLU;

	t83 = ((x401+x402)-(x403/x404));

	if (t83 != 138LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x405 = INT16_MAX;
	volatile uint16_t x406 = 1468U;
	uint32_t x408 = UINT32_MAX;
	uint32_t t84 = 21U;

	t84 = ((x405+x406)-(x407/x408));

	if (t84 != 34235U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x409 = -1LL;
	volatile int16_t x410 = -1;
	static int8_t x411 = INT8_MIN;
	static volatile int64_t t85 = -238399186LL;

	t85 = ((x409+x410)-(x411/x412));

	if (t85 != -2LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x413 = -784;
	static int64_t x414 = 19977886120691900LL;
	int16_t x415 = INT16_MAX;
	int64_t x416 = INT64_MIN;
	static int64_t t86 = 5LL;

	t86 = ((x413+x414)-(x415/x416));

	if (t86 != 19977886120691116LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x418 = -1LL;
	volatile int64_t x419 = INT64_MIN;
	uint32_t x420 = 29715U;
	int64_t t87 = -27050855423LL;

	t87 = ((x417+x418)-(x419/x420));

	if (t87 != 310394482142174LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x421 = 30483123638LL;
	uint16_t x422 = UINT16_MAX;
	volatile int32_t x423 = INT32_MAX;
	int8_t x424 = 59;
	volatile int64_t t88 = 285960LL;

	t88 = ((x421+x422)-(x423/x424));

	if (t88 != 30446791146LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x425 = INT32_MIN;
	uint16_t x426 = 20U;
	int16_t x428 = -1;

	t89 = ((x425+x426)-(x427/x428));

	if (t89 != -2147470231) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x429 = 76862524011384LLU;
	int64_t x430 = INT64_MIN;
	static uint64_t t90 = 2979209251212622LLU;

	t90 = ((x429+x430)-(x431/x432));

	if (t90 != 9223448899378787192LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x436 = UINT32_MAX;
	uint64_t t91 = 2426207037117LLU;

	t91 = ((x433+x434)-(x435/x436));

	if (t91 != 26837531609LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x438 = -49;
	static uint32_t x439 = 87223673U;
	int8_t x440 = INT8_MIN;
	volatile uint32_t t92 = 80855803U;

	t92 = ((x437+x438)-(x439/x440));

	if (t92 != 7243211U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x442 = -1;
	int16_t x444 = INT16_MAX;
	uint64_t t93 = 3515184LLU;

	t93 = ((x441+x442)-(x443/x444));

	if (t93 != 18446181106575736942LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = 7;
	int8_t x450 = -1;
	static int32_t x451 = INT32_MIN;
	uint32_t t94 = 6U;

	t94 = ((x449+x450)-(x451/x452));

	if (t94 != 4294958965U) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x453 = INT16_MAX;
	int8_t x454 = 6;
	static int8_t x455 = INT8_MIN;
	volatile int32_t x456 = -1;

	t95 = ((x453+x454)-(x455/x456));

	if (t95 != 32645) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x457 = -1LL;
	volatile int32_t x458 = INT32_MIN;
	volatile uint64_t x459 = 33591958711016253LLU;
	uint64_t t96 = 679189769515798LLU;

	t96 = ((x457+x458)-(x459/x460));

	if (t96 != 18446744071530721824LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x461 = 5701U;
	int8_t x462 = INT8_MAX;
	uint8_t x463 = 1U;
	uint64_t x464 = UINT64_MAX;
	uint64_t t97 = 83532167761025LLU;

	t97 = ((x461+x462)-(x463/x464));

	if (t97 != 5828LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x465 = INT16_MIN;
	int16_t x466 = 20;
	volatile uint32_t x468 = 385U;
	uint32_t t98 = 93U;

	t98 = ((x465+x466)-(x467/x468));

	if (t98 != 4289356669U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x469 = -1LL;
	uint16_t x472 = UINT16_MAX;
	static int64_t t99 = -223701LL;

	t99 = ((x469+x470)-(x471/x472));

	if (t99 != -32897LL) { NG(); } else { ; }
	
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

