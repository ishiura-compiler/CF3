#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 248U;
volatile int64_t x6 = INT64_MIN;
int8_t x8 = -43;
volatile int16_t x15 = -1;
static int32_t x16 = INT32_MIN;
int32_t x17 = INT32_MAX;
int16_t x18 = INT16_MIN;
static uint16_t x19 = 2069U;
static int8_t x20 = INT8_MIN;
volatile int32_t t4 = -3347;
volatile int64_t x28 = INT64_MIN;
uint64_t x32 = 139770104082242LLU;
static int8_t x41 = INT8_MAX;
volatile int32_t x43 = -31078238;
int32_t x50 = INT32_MAX;
uint32_t x52 = 13335U;
uint32_t t11 = 22019888U;
static uint16_t x54 = 11U;
int8_t x56 = 54;
volatile int32_t t12 = 8897211;
int32_t x61 = -1;
int8_t x65 = 1;
volatile uint16_t x66 = 1U;
int8_t x73 = 0;
volatile uint8_t x74 = 5U;
int16_t x75 = INT16_MAX;
int8_t x76 = INT8_MIN;
static int32_t t15 = 378;
uint32_t x78 = 69818900U;
volatile uint16_t x79 = 2U;
volatile uint32_t x80 = 2540915U;
int32_t x81 = -1;
volatile int8_t x84 = 22;
volatile int64_t t20 = -342329152296089LL;
static uint8_t x102 = 3U;
static volatile int8_t x111 = INT8_MIN;
int16_t x112 = INT16_MIN;
uint64_t t22 = 2642503168037907250LLU;
int32_t x114 = INT32_MIN;
int32_t t24 = 1908;
uint64_t x130 = 138343396648818LLU;
int32_t x131 = INT32_MAX;
uint8_t x142 = 45U;
uint32_t t29 = 11070693U;
int64_t x145 = 72321LL;
static volatile uint32_t x147 = 6733517U;
static int8_t x152 = -4;
int64_t x153 = -35388486248132870LL;
volatile uint64_t x154 = 625464LLU;
volatile uint16_t x157 = UINT16_MAX;
int64_t t34 = 3753587948LL;
static int16_t x170 = 69;
static int16_t x171 = 106;
static int64_t x181 = INT64_MAX;
static volatile int64_t t38 = -206819873LL;
int64_t x203 = 773711629552LL;
volatile int64_t x204 = 1891941907788709949LL;
uint64_t x207 = 47872756LLU;
static uint16_t x209 = 3901U;
int8_t x212 = INT8_MIN;
int16_t x213 = INT16_MIN;
int64_t x222 = INT64_MIN;
uint16_t x227 = UINT16_MAX;
static volatile uint16_t x228 = UINT16_MAX;
int64_t x229 = INT64_MAX;
int64_t x230 = 10980357LL;
int32_t x259 = INT32_MAX;
volatile uint32_t t50 = 199812031U;
volatile int64_t x261 = -994781789280060510LL;
static int16_t x264 = INT16_MIN;
volatile int16_t x267 = INT16_MIN;
uint8_t x270 = UINT8_MAX;
int32_t x277 = -378;
uint8_t x282 = 7U;
volatile uint16_t x289 = 56U;
int8_t x295 = INT8_MAX;
uint8_t x296 = 33U;
int32_t t58 = 11;
uint64_t x297 = UINT64_MAX;
int64_t x301 = INT64_MIN;
uint32_t x305 = UINT32_MAX;
int8_t x307 = INT8_MIN;
int16_t x309 = INT16_MIN;
uint64_t t62 = 2112LLU;
int16_t x321 = INT16_MAX;
int8_t x324 = INT8_MIN;
int8_t x332 = -1;
int16_t x343 = 4;
uint64_t x344 = UINT64_MAX;
int16_t x349 = -1;
int64_t x350 = INT64_MAX;
static int32_t x355 = INT32_MIN;
int64_t x357 = -1LL;
volatile int64_t t72 = 3172310317LL;
int8_t x366 = -1;
int64_t x367 = -772199LL;
int16_t x368 = -208;
int64_t t74 = -41LL;
int8_t x373 = 3;
int16_t x374 = -1;
uint32_t x376 = 15154024U;
int64_t x378 = -512LL;
static uint64_t x385 = UINT64_MAX;
volatile uint64_t t77 = 22LLU;
int64_t x397 = 357357LL;
uint16_t x405 = UINT16_MAX;
int64_t t81 = 885514015209739265LL;
uint8_t x426 = 4U;
int32_t x427 = -27057897;
static uint64_t x443 = 116674843803LLU;
static int16_t x445 = INT16_MAX;
volatile int8_t x447 = -6;
uint32_t t85 = 91280U;
int16_t x453 = -666;
uint8_t x459 = UINT8_MAX;
volatile int32_t x464 = INT32_MAX;
int16_t x479 = 6381;
uint8_t x495 = 82U;
uint8_t x508 = 1U;
int8_t x511 = INT8_MIN;
static uint32_t x516 = 67071504U;
uint8_t x521 = UINT8_MAX;
int32_t x524 = INT32_MAX;


void f0(void) {
	uint16_t x1 = 1786U;
	uint64_t x2 = UINT64_MAX;
	static uint8_t x4 = UINT8_MAX;
	uint64_t t0 = 7176891644067299LLU;

	t0 = ((x1&x2)/(x3&x4));

	if (t0 != 7LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	int64_t t1 = -498730263728LL;

	t1 = ((x5&x6)/(x7&x8));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int64_t x14 = 292157913483LL;
	int64_t t2 = -100LL;

	t2 = ((x13&x14)/(x15&x16));

	if (t2 != -136LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t t3 = 48;

	t3 = ((x17&x18)/(x19&x20));

	if (t3 != 1048560) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MAX;
	int16_t x22 = 2;
	int8_t x23 = INT8_MAX;
	uint16_t x24 = 1434U;

	t4 = ((x21&x22)/(x23&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -11;
	int64_t x26 = INT64_MAX;
	int8_t x27 = -38;
	static int64_t t5 = 1994408LL;

	t5 = ((x25&x26)/(x27&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 0;
	uint64_t x30 = 188793LLU;
	uint8_t x31 = 39U;
	volatile uint64_t t6 = 20212946278028LLU;

	t6 = ((x29&x30)/(x31&x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	uint8_t x34 = 10U;
	volatile uint32_t x35 = 10U;
	int64_t x36 = -1LL;
	int64_t t7 = -3302650617471618LL;

	t7 = ((x33&x34)/(x35&x36));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	uint8_t x38 = 19U;
	uint64_t x39 = UINT64_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	volatile uint64_t t8 = 11413807142432LLU;

	t8 = ((x37&x38)/(x39&x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x42 = 3;
	uint8_t x44 = UINT8_MAX;
	int32_t t9 = -792;

	t9 = ((x41&x42)/(x43&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MAX;
	int8_t x48 = -1;
	uint64_t t10 = 14LLU;

	t10 = ((x45&x46)/(x47&x48));

	if (t10 != 281483566907400LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int32_t x49 = -42;
	int8_t x51 = INT8_MIN;

	t11 = ((x49&x50)/(x51&x52));

	if (t11 != 161319U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MAX;
	static uint16_t x55 = 44U;

	t12 = ((x53&x54)/(x55&x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x62 = INT8_MIN;
	int8_t x63 = -5;
	volatile uint32_t x64 = 30046U;
	volatile uint32_t t13 = 964437U;

	t13 = ((x61&x62)/(x63&x64));

	if (t13 != 142965U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x67 = UINT64_MAX;
	static int8_t x68 = INT8_MIN;
	uint64_t t14 = 106825119423LLU;

	t14 = ((x65&x66)/(x67&x68));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {


	t15 = ((x73&x74)/(x75&x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x77 = 1085LLU;
	uint64_t t16 = 6242659771LLU;

	t16 = ((x77&x78)/(x79&x80));

	if (t16 != 10LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = -776502031630204555LL;
	int8_t x83 = -1;
	volatile int64_t t17 = -35690666045919LL;

	t17 = ((x81&x82)/(x83&x84));

	if (t17 != -35295546892282025LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = INT16_MIN;
	static int32_t x86 = 96;
	int32_t x87 = -190;
	uint16_t x88 = UINT16_MAX;
	volatile int32_t t18 = -762576;

	t18 = ((x85&x86)/(x87&x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x89 = 51;
	uint64_t x90 = 278168LLU;
	int8_t x91 = INT8_MIN;
	static volatile uint32_t x92 = 6829U;
	uint64_t t19 = 155203LLU;

	t19 = ((x89&x90)/(x91&x92));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = -14933569LL;
	uint32_t x98 = 7017479U;
	int16_t x99 = INT16_MAX;
	int8_t x100 = INT8_MIN;

	t20 = ((x97&x98)/(x99&x100));

	if (t20 != 16LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 1;
	int32_t x103 = -1;
	int16_t x104 = INT16_MIN;
	volatile int32_t t21 = -239407;

	t21 = ((x101&x102)/(x103&x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	static uint64_t x110 = 248527LLU;

	t22 = ((x109&x110)/(x111&x112));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = INT16_MAX;
	int64_t x115 = INT64_MIN;
	int16_t x116 = -1;
	int64_t t23 = -393LL;

	t23 = ((x113&x114)/(x115&x116));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = INT16_MIN;
	static int32_t x118 = INT32_MAX;
	uint8_t x119 = 8U;
	int32_t x120 = -2556387;

	t24 = ((x117&x118)/(x119&x120));

	if (t24 != 268431360) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x125 = INT64_MAX;
	static uint32_t x126 = UINT32_MAX;
	volatile uint32_t x127 = 371548U;
	int8_t x128 = 16;
	volatile int64_t t25 = 662975694983874LL;

	t25 = ((x125&x126)/(x127&x128));

	if (t25 != 268435455LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x129 = INT16_MAX;
	uint32_t x132 = 52U;
	uint64_t t26 = 1077797LLU;

	t26 = ((x129&x130)/(x131&x132));

	if (t26 != 194LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x133 = -4;
	int8_t x134 = -1;
	int8_t x135 = INT8_MIN;
	int8_t x136 = INT8_MIN;
	volatile int32_t t27 = 80;

	t27 = ((x133&x134)/(x135&x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x137 = 0U;
	int64_t x138 = -1LL;
	int16_t x139 = -5;
	uint16_t x140 = UINT16_MAX;
	static volatile int64_t t28 = 201371648660811LL;

	t28 = ((x137&x138)/(x139&x140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -2;
	static uint8_t x143 = 1U;
	static uint32_t x144 = 1294875385U;

	t29 = ((x141&x142)/(x143&x144));

	if (t29 != 44U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x146 = UINT8_MAX;
	volatile int8_t x148 = INT8_MIN;
	static int64_t t30 = 15LL;

	t30 = ((x145&x146)/(x147&x148));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = -1LL;
	uint16_t x150 = 148U;
	int32_t x151 = 9825;
	volatile int64_t t31 = -3887539871398168185LL;

	t31 = ((x149&x150)/(x151&x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x155 = 14LL;
	int32_t x156 = 83653316;
	static volatile uint64_t t32 = 114614354LLU;

	t32 = ((x153&x154)/(x155&x156));

	if (t32 != 139918LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x158 = -1;
	int16_t x159 = INT16_MAX;
	int32_t x160 = -1;
	int32_t t33 = -24826;

	t33 = ((x157&x158)/(x159&x160));

	if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x161 = 1U;
	int8_t x162 = INT8_MIN;
	static int64_t x163 = -883460LL;
	volatile int16_t x164 = INT16_MIN;

	t34 = ((x161&x162)/(x163&x164));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 2U;
	static int16_t x166 = INT16_MIN;
	int32_t x167 = -1;
	volatile int16_t x168 = INT16_MIN;
	volatile int32_t t35 = 12915;

	t35 = ((x165&x166)/(x167&x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = INT32_MIN;
	int8_t x172 = -3;
	volatile int32_t t36 = -13;

	t36 = ((x169&x170)/(x171&x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	uint32_t x179 = UINT32_MAX;
	static uint16_t x180 = 30U;
	uint32_t t37 = 2U;

	t37 = ((x177&x178)/(x179&x180));

	if (t37 != 71582788U) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x182 = 20U;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -1;

	t38 = ((x181&x182)/(x183&x184));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x201 = 0U;
	static int16_t x202 = -5;
	volatile int64_t t39 = -1673172LL;

	t39 = ((x201&x202)/(x203&x204));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x205 = INT64_MAX;
	static int8_t x206 = INT8_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile uint64_t t40 = 226640451043LLU;

	t40 = ((x205&x206)/(x207&x208));

	if (t40 != 192664321161LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x210 = 829395155LLU;
	volatile uint16_t x211 = UINT16_MAX;
	volatile uint64_t t41 = 930626LLU;

	t41 = ((x209&x210)/(x211&x212));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x214 = 19769U;
	static int64_t x215 = -1LL;
	uint8_t x216 = 2U;
	int64_t t42 = -899LL;

	t42 = ((x213&x214)/(x215&x216));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = UINT32_MAX;
	volatile uint64_t x218 = UINT64_MAX;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = 89734394;
	volatile uint64_t t43 = 14700332424981LLU;

	t43 = ((x217&x218)/(x219&x220));

	if (t43 != 47LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x221 = 7;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MIN;
	int64_t t44 = 335695229LL;

	t44 = ((x221&x222)/(x223&x224));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x225 = INT32_MAX;
	uint32_t x226 = UINT32_MAX;
	volatile uint32_t t45 = 472818249U;

	t45 = ((x225&x226)/(x227&x228));

	if (t45 != 32768U) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x231 = 31LL;
	uint16_t x232 = UINT16_MAX;
	volatile int64_t t46 = -786757077091171LL;

	t46 = ((x229&x230)/(x231&x232));

	if (t46 != 354205LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x233 = 320496347LLU;
	int32_t x234 = -1;
	volatile uint32_t x235 = 103960170U;
	volatile int16_t x236 = INT16_MIN;
	uint64_t t47 = 3572404562011LLU;

	t47 = ((x233&x234)/(x235&x236));

	if (t47 != 3LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x245 = 3858479LL;
	volatile int32_t x246 = 6;
	static uint16_t x247 = 992U;
	int16_t x248 = 9939;
	volatile int64_t t48 = 2225LL;

	t48 = ((x245&x246)/(x247&x248));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = 9667U;
	uint8_t x254 = 28U;
	int8_t x255 = -1;
	static int64_t x256 = -58302319LL;
	int64_t t49 = 0LL;

	t49 = ((x253&x254)/(x255&x256));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = -1;
	uint32_t x258 = 11U;
	int16_t x260 = 2120;

	t50 = ((x257&x258)/(x259&x260));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x262 = -625;
	int8_t x263 = -1;
	volatile int64_t t51 = -103LL;

	t51 = ((x261&x262)/(x263&x264));

	if (t51 != 30358330971681LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = INT16_MAX;
	volatile int32_t x266 = 24;
	int32_t x268 = -1;
	static int32_t t52 = 11963;

	t52 = ((x265&x266)/(x267&x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x269 = -1;
	int16_t x271 = 3785;
	int8_t x272 = INT8_MIN;
	volatile int32_t t53 = 71910;

	t53 = ((x269&x270)/(x271&x272));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x278 = -1LL;
	int16_t x279 = -17;
	int16_t x280 = -3;
	volatile int64_t t54 = -172283152232LL;

	t54 = ((x277&x278)/(x279&x280));

	if (t54 != 19LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x281 = 22U;
	int16_t x283 = INT16_MAX;
	static int32_t x284 = -1;
	int32_t t55 = -12132538;

	t55 = ((x281&x282)/(x283&x284));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x285 = -1;
	int64_t x286 = INT64_MIN;
	volatile uint8_t x287 = UINT8_MAX;
	int64_t x288 = -1LL;
	int64_t t56 = 28757437638745113LL;

	t56 = ((x285&x286)/(x287&x288));

	if (t56 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x290 = UINT8_MAX;
	static uint16_t x291 = 3U;
	static int16_t x292 = -1;
	int32_t t57 = -237826745;

	t57 = ((x289&x290)/(x291&x292));

	if (t57 != 18) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = -1;
	static int16_t x294 = INT16_MAX;

	t58 = ((x293&x294)/(x295&x296));

	if (t58 != 992) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x298 = 3U;
	int8_t x299 = -3;
	int16_t x300 = -380;
	volatile uint64_t t59 = 13448640029427LLU;

	t59 = ((x297&x298)/(x299&x300));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x302 = 6158U;
	int64_t x303 = -76361559182267287LL;
	static int32_t x304 = -133478059;
	int64_t t60 = -143614753485LL;

	t60 = ((x301&x302)/(x303&x304));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x306 = -1;
	static int32_t x308 = -16;
	static uint32_t t61 = 10292U;

	t61 = ((x305&x306)/(x307&x308));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x310 = 818U;
	uint64_t x311 = 22597014977LLU;
	int16_t x312 = INT16_MAX;

	t62 = ((x309&x310)/(x311&x312));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x317 = 2;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = -1921745310139426LL;
	int16_t x320 = INT16_MIN;
	volatile int64_t t63 = 2816632506049096910LL;

	t63 = ((x317&x318)/(x319&x320));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x322 = 317U;
	int64_t x323 = -6LL;
	volatile int64_t t64 = -1047166735LL;

	t64 = ((x321&x322)/(x323&x324));

	if (t64 != -2LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 479434U;
	int64_t x327 = 11LL;
	uint32_t x328 = 9U;
	volatile int64_t t65 = 255394527LL;

	t65 = ((x325&x326)/(x327&x328));

	if (t65 != 53270LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = 2;
	uint16_t x330 = 882U;
	int16_t x331 = INT16_MAX;
	volatile int32_t t66 = 5825948;

	t66 = ((x329&x330)/(x331&x332));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x337 = 1U;
	int16_t x338 = -1;
	int64_t x339 = INT64_MAX;
	volatile uint32_t x340 = 769U;
	volatile int64_t t67 = -441806LL;

	t67 = ((x337&x338)/(x339&x340));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x341 = -1LL;
	volatile int64_t x342 = -1523771724320LL;
	uint64_t t68 = 58619258926687124LLU;

	t68 = ((x341&x342)/(x343&x344));

	if (t68 != 4611685637484456824LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = 73;
	int32_t x346 = INT32_MAX;
	uint16_t x347 = UINT16_MAX;
	uint64_t x348 = UINT64_MAX;
	uint64_t t69 = 3253218839979LLU;

	t69 = ((x345&x346)/(x347&x348));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x351 = -1;
	int64_t x352 = INT64_MAX;
	volatile int64_t t70 = 38568LL;

	t70 = ((x349&x350)/(x351&x352));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	int64_t x356 = -1LL;
	volatile int64_t t71 = -209LL;

	t71 = ((x353&x354)/(x355&x356));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x358 = -1;
	int8_t x359 = INT8_MIN;
	volatile int32_t x360 = INT32_MIN;

	t72 = ((x357&x358)/(x359&x360));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint16_t x361 = UINT16_MAX;
	int32_t x362 = 230643388;
	volatile int32_t x363 = INT32_MIN;
	int32_t x364 = INT32_MIN;
	int32_t t73 = 1692513;

	t73 = ((x361&x362)/(x363&x364));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x365 = INT16_MAX;

	t74 = ((x365&x366)/(x367&x368));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x375 = INT8_MIN;
	uint32_t t75 = 178784928U;

	t75 = ((x373&x374)/(x375&x376));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x379 = -1LL;
	uint64_t x380 = 1789941274893336169LLU;
	uint64_t t76 = 0LLU;

	t76 = ((x377&x378)/(x379&x380));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x386 = -1;
	static volatile uint64_t x387 = UINT64_MAX;
	uint32_t x388 = 10330U;

	t77 = ((x385&x386)/(x387&x388));

	if (t77 != 1785744828045455LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x389 = INT64_MIN;
	static int32_t x390 = 35;
	int64_t x391 = 2163384134048054682LL;
	int64_t x392 = INT64_MAX;
	static volatile int64_t t78 = 536149857LL;

	t78 = ((x389&x390)/(x391&x392));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x398 = -1155;
	int64_t x399 = -1LL;
	static uint64_t x400 = 6831263196LLU;
	volatile uint64_t t79 = 59786629106LLU;

	t79 = ((x397&x398)/(x399&x400));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x406 = INT16_MIN;
	uint8_t x407 = 45U;
	int64_t x408 = 3826794657889LL;
	static volatile int64_t t80 = 59913957240LL;

	t80 = ((x405&x406)/(x407&x408));

	if (t80 != 992LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x417 = UINT8_MAX;
	int16_t x418 = 64;
	static int64_t x419 = INT64_MAX;
	int16_t x420 = INT16_MIN;

	t81 = ((x417&x418)/(x419&x420));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x425 = INT64_MAX;
	uint64_t x428 = 10889870954418971LLU;
	volatile uint64_t t82 = 7361LLU;

	t82 = ((x425&x426)/(x427&x428));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x433 = INT16_MIN;
	volatile int64_t x434 = INT64_MAX;
	int16_t x435 = -3;
	int32_t x436 = -1;
	int64_t t83 = -400784589LL;

	t83 = ((x433&x434)/(x435&x436));

	if (t83 != -3074457345618247680LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x441 = 49;
	volatile int64_t x442 = INT64_MIN;
	int32_t x444 = 6;
	uint64_t t84 = 1202202LLU;

	t84 = ((x441&x442)/(x443&x444));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x446 = 303718265U;
	int8_t x448 = -1;

	t85 = ((x445&x446)/(x447&x448));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x454 = UINT16_MAX;
	volatile int16_t x455 = -1;
	int64_t x456 = INT64_MIN;
	volatile int64_t t86 = -32348918633LL;

	t86 = ((x453&x454)/(x455&x456));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x457 = -1;
	static uint64_t x458 = 23083LLU;
	volatile uint32_t x460 = UINT32_MAX;
	volatile uint64_t t87 = 1833727899463846245LLU;

	t87 = ((x457&x458)/(x459&x460));

	if (t87 != 90LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x461 = -1;
	volatile int64_t x462 = INT64_MAX;
	static volatile int32_t x463 = -1;
	int64_t t88 = 2355469LL;

	t88 = ((x461&x462)/(x463&x464));

	if (t88 != 4294967298LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x465 = UINT64_MAX;
	static int8_t x466 = 33;
	int8_t x467 = -1;
	static int8_t x468 = 56;
	uint64_t t89 = 14421737LLU;

	t89 = ((x465&x466)/(x467&x468));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = INT32_MAX;
	int64_t x470 = -1LL;
	uint32_t x471 = 9929U;
	volatile int64_t x472 = 1481281778782792465LL;
	volatile int64_t t90 = -3720891LL;

	t90 = ((x469&x470)/(x471&x472));

	if (t90 != 246695LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x477 = -1;
	volatile int8_t x478 = INT8_MIN;
	int32_t x480 = -433436149;
	int32_t t91 = 53298311;

	t91 = ((x477&x478)/(x479&x480));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x489 = INT32_MIN;
	static volatile uint64_t x490 = UINT64_MAX;
	uint64_t x491 = 973866116408325LLU;
	int32_t x492 = INT32_MAX;
	volatile uint64_t t92 = 522856295LLU;

	t92 = ((x489&x490)/(x491&x492));

	if (t92 != 11461925255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x493 = 3;
	static volatile uint64_t x494 = 93700712LLU;
	int64_t x496 = -1LL;
	uint64_t t93 = 4749013369872LLU;

	t93 = ((x493&x494)/(x495&x496));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x497 = INT16_MIN;
	uint8_t x498 = 0U;
	int64_t x499 = 1873578614819660LL;
	volatile int8_t x500 = INT8_MIN;
	int64_t t94 = -199LL;

	t94 = ((x497&x498)/(x499&x500));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x501 = 63;
	int32_t x502 = -17071;
	static int8_t x503 = INT8_MAX;
	uint16_t x504 = 801U;
	static volatile int32_t t95 = -6775039;

	t95 = ((x501&x502)/(x503&x504));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x505 = INT64_MAX;
	volatile int32_t x506 = -1;
	int16_t x507 = -1;
	volatile int64_t t96 = INT64_MAX;

	t96 = ((x505&x506)/(x507&x508));

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x509 = INT32_MAX;
	int64_t x510 = INT64_MAX;
	uint16_t x512 = 1016U;
	int64_t t97 = -16317384LL;

	t97 = ((x509&x510)/(x511&x512));

	if (t97 != 2396745LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x513 = UINT8_MAX;
	int32_t x514 = -1;
	uint16_t x515 = 91U;
	static uint32_t t98 = 401370738U;

	t98 = ((x513&x514)/(x515&x516));

	if (t98 != 15U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x522 = 21U;
	uint64_t x523 = 6848297181LLU;
	static volatile uint64_t t99 = 13099LLU;

	t99 = ((x521&x522)/(x523&x524));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

