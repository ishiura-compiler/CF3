#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = INT16_MIN;
static volatile uint64_t t0 = 31785LLU;
int8_t x35 = INT8_MAX;
uint32_t x37 = 25391283U;
uint32_t x38 = UINT32_MAX;
int64_t x46 = -213652194827012985LL;
int16_t x52 = INT16_MAX;
static uint32_t t7 = 7753U;
volatile uint8_t x62 = 5U;
int16_t x68 = -1;
int32_t t12 = 4129;
static int32_t t13 = 1;
int16_t x87 = INT16_MAX;
static uint16_t x93 = 7012U;
int32_t t16 = 66555730;
volatile uint32_t x105 = 185556U;
volatile uint64_t t17 = 87455794LLU;
volatile uint64_t t18 = 19105796565000275LLU;
uint16_t x126 = 0U;
volatile int32_t t21 = 54759;
uint64_t x130 = 25923956LLU;
volatile int16_t x132 = INT16_MAX;
uint16_t x133 = 96U;
uint64_t x135 = 4LLU;
static int64_t x136 = 134414LL;
uint64_t x138 = 1843114615583109LLU;
int64_t x141 = 6LL;
volatile int16_t x176 = INT16_MIN;
uint64_t x181 = 21388LLU;
uint8_t x190 = 17U;
static uint32_t x195 = UINT32_MAX;
volatile uint32_t t34 = 202141667U;
int64_t x206 = -511276081072968LL;
int8_t x208 = -1;
uint64_t t37 = 9363140973729651LLU;
uint16_t x249 = UINT16_MAX;
volatile int8_t x253 = 1;
volatile int32_t t41 = -1305763;
uint16_t x265 = UINT16_MAX;
volatile uint64_t x266 = 1406852514LLU;
int8_t x267 = INT8_MAX;
int16_t x331 = INT16_MIN;
static uint64_t x335 = 440LLU;
int8_t x336 = INT8_MIN;
uint64_t t50 = 0LLU;
volatile uint64_t t51 = 121843LLU;
int64_t x363 = INT64_MIN;
int8_t x373 = INT8_MIN;
uint32_t x376 = 10U;
uint16_t x382 = UINT16_MAX;
static uint16_t x393 = 11212U;
int32_t t59 = -774;
uint16_t x398 = 9150U;
int32_t x400 = INT32_MIN;
int64_t x407 = 116399LL;
static int32_t x408 = -9;
volatile int64_t t61 = 717968653LL;
uint32_t x412 = 899253731U;
volatile int32_t t63 = -15028;
int64_t x428 = INT64_MAX;
int16_t x430 = -1;
uint16_t x448 = 68U;
static uint64_t t68 = 77333760LLU;
uint64_t x454 = UINT64_MAX;
static uint64_t t69 = 199361364LLU;
int8_t x460 = INT8_MAX;
volatile int8_t x473 = -4;
volatile int32_t x486 = -1;
int32_t x487 = INT32_MIN;
static int64_t x502 = 131657889166993LL;
int32_t x504 = -6;
static int16_t x525 = INT16_MAX;
static uint8_t x531 = UINT8_MAX;
int16_t x532 = 2160;
uint32_t x535 = 5610U;
uint32_t x550 = 12472964U;
volatile int64_t t85 = 50038543292722264LL;
int64_t x565 = -17048741664952LL;
int16_t x566 = -1;
volatile int16_t x572 = 43;
volatile uint8_t x588 = UINT8_MAX;
uint16_t x589 = 2U;
int16_t x617 = -829;
static int64_t x619 = -1LL;
volatile uint64_t t94 = 1912447LLU;
int8_t x626 = INT8_MAX;
volatile uint32_t x630 = UINT32_MAX;
volatile int8_t x631 = INT8_MIN;
volatile uint64_t x633 = UINT64_MAX;
uint16_t x637 = UINT16_MAX;
volatile uint32_t t99 = 342104U;


void f0(void) {
	static uint64_t x14 = 79033481LLU;
	int32_t x15 = -1;
	volatile uint8_t x16 = 20U;

	t0 = ((x13*x14)%(x15+x16));

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x17 = INT16_MAX;
	uint32_t x18 = 7U;
	int16_t x19 = INT16_MIN;
	static uint8_t x20 = 0U;
	static uint32_t t1 = 1U;

	t1 = ((x17*x18)%(x19+x20));

	if (t1 != 229369U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x25 = INT8_MAX;
	int16_t x26 = INT16_MIN;
	int8_t x27 = 15;
	uint16_t x28 = 1U;
	static int32_t t2 = -683101;

	t2 = ((x25*x26)%(x27+x28));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x33 = -1;
	int64_t x34 = 3LL;
	int8_t x36 = -1;
	volatile int64_t t3 = 42643071000140507LL;

	t3 = ((x33*x34)%(x35+x36));

	if (t3 != -3LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x39 = 1574U;
	uint8_t x40 = UINT8_MAX;
	uint32_t t4 = 18U;

	t4 = ((x37*x38)%(x39+x40));

	if (t4 != 480U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x41 = -1;
	int8_t x42 = -1;
	int32_t x43 = -1;
	static uint8_t x44 = 67U;
	int32_t t5 = 1;

	t5 = ((x41*x42)%(x43+x44));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x45 = 0;
	uint64_t x47 = 21674935967LLU;
	volatile uint64_t x48 = 1799792178928447447LLU;
	volatile uint64_t t6 = 4663348LLU;

	t6 = ((x45*x46)%(x47+x48));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x49 = 209U;
	int32_t x50 = INT32_MIN;
	static int16_t x51 = -8466;

	t7 = ((x49*x50)%(x51+x52));

	if (t7 != 4278U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x53 = INT8_MIN;
	uint8_t x54 = 3U;
	int8_t x55 = 11;
	int8_t x56 = -1;
	int32_t t8 = -49;

	t8 = ((x53*x54)%(x55+x56));

	if (t8 != -4) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x61 = 104U;
	volatile uint64_t x63 = UINT64_MAX;
	volatile uint8_t x64 = UINT8_MAX;
	uint64_t t9 = 20LLU;

	t9 = ((x61*x62)%(x63+x64));

	if (t9 != 12LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint32_t x65 = 854U;
	static int32_t x66 = INT32_MAX;
	uint8_t x67 = UINT8_MAX;
	static uint32_t t10 = 374U;

	t10 = ((x65*x66)%(x67+x68));

	if (t10 != 178U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x73 = UINT32_MAX;
	uint64_t x74 = 85565765617886771LLU;
	int64_t x75 = 3568848892327LL;
	static int8_t x76 = -1;
	uint64_t t11 = 5668488292LLU;

	t11 = ((x73*x74)%(x75+x76));

	if (t11 != 379006888271LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x77 = 0U;
	static int8_t x78 = -1;
	int16_t x79 = 111;
	static int32_t x80 = 29831;

	t12 = ((x77*x78)%(x79+x80));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x81 = UINT8_MAX;
	static volatile uint16_t x82 = 65U;
	uint16_t x83 = 1545U;
	int32_t x84 = INT32_MIN;

	t13 = ((x81*x82)%(x83+x84));

	if (t13 != 16575) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x85 = 1381U;
	static int8_t x86 = -15;
	volatile int64_t x88 = INT64_MIN;
	volatile int64_t t14 = 1027LL;

	t14 = ((x85*x86)%(x87+x88));

	if (t14 != -20715LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MAX;
	volatile uint32_t x90 = UINT32_MAX;
	volatile int32_t x91 = INT32_MAX;
	int16_t x92 = -1;
	volatile uint32_t t15 = 1059740624U;

	t15 = ((x89*x90)%(x91+x92));

	if (t15 != 3U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x94 = INT16_MAX;
	int32_t x95 = -1925878;
	uint8_t x96 = UINT8_MAX;

	t16 = ((x93*x94)%(x95+x96));

	if (t16 != 613067) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x106 = UINT16_MAX;
	volatile int8_t x107 = -1;
	static uint64_t x108 = UINT64_MAX;

	t17 = ((x105*x106)%(x107+x108));

	if (t17 != 3570477868LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = INT32_MIN;
	uint64_t x114 = UINT64_MAX;
	uint64_t x115 = 128751276690LLU;
	int16_t x116 = INT16_MIN;

	t18 = ((x113*x114)%(x115+x116));

	if (t18 != 2147483648LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = INT8_MIN;
	int8_t x118 = INT8_MIN;
	int32_t x119 = 29797;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t19 = 23LLU;

	t19 = ((x117*x118)%(x119+x120));

	if (t19 != 16384LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = INT8_MAX;
	int64_t x122 = -32948LL;
	int32_t x123 = 617013122;
	int64_t x124 = 181697LL;
	volatile int64_t t20 = 32561770268LL;

	t20 = ((x121*x122)%(x123+x124));

	if (t20 != -4184396LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x125 = INT32_MIN;
	int16_t x127 = -11;
	int16_t x128 = -63;

	t21 = ((x125*x126)%(x127+x128));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x129 = INT32_MAX;
	uint32_t x131 = 52883798U;
	static volatile uint64_t t22 = 1LLU;

	t22 = ((x129*x130)%(x131+x132));

	if (t22 != 5981477LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x134 = 2U;
	static volatile uint64_t t23 = 32788LLU;

	t23 = ((x133*x134)%(x135+x136));

	if (t23 != 192LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x137 = 24092LLU;
	static int16_t x139 = -1;
	int16_t x140 = INT16_MIN;
	volatile uint64_t t24 = 63765895675LLU;

	t24 = ((x137*x138)%(x139+x140));

	if (t24 != 7510829171209158796LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x142 = INT8_MIN;
	static uint8_t x143 = UINT8_MAX;
	int64_t x144 = -82991140779114009LL;
	volatile int64_t t25 = 1816982888112679LL;

	t25 = ((x141*x142)%(x143+x144));

	if (t25 != -768LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x145 = UINT32_MAX;
	static int32_t x146 = INT32_MIN;
	int64_t x147 = -1753908LL;
	int32_t x148 = INT32_MIN;
	int64_t t26 = 2709254047433787121LL;

	t26 = ((x145*x146)%(x147+x148));

	if (t26 != 2147483648LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x165 = 109U;
	int32_t x166 = 170282;
	uint32_t x167 = 79116521U;
	uint32_t x168 = 13517U;
	uint32_t t27 = 35558U;

	t27 = ((x165*x166)%(x167+x168));

	if (t27 != 18560738U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x169 = 52;
	static int32_t x170 = -13417;
	volatile int32_t x171 = -1;
	uint64_t x172 = UINT64_MAX;
	uint64_t t28 = 94311392759996552LLU;

	t28 = ((x169*x170)%(x171+x172));

	if (t28 != 18446744073708853932LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x173 = 1U;
	uint8_t x174 = 50U;
	int32_t x175 = 631;
	int32_t t29 = -62;

	t29 = ((x173*x174)%(x175+x176));

	if (t29 != 50) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x177 = -13;
	uint8_t x178 = UINT8_MAX;
	static int16_t x179 = -16104;
	volatile int8_t x180 = INT8_MAX;
	static int32_t t30 = -2;

	t30 = ((x177*x178)%(x179+x180));

	if (t30 != -3315) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x182 = INT32_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	uint16_t x184 = 13267U;
	uint64_t t31 = 88859223342867LLU;

	t31 = ((x181*x182)%(x183+x184));

	if (t31 != 28332LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x185 = 7U;
	volatile int64_t x186 = -1LL;
	int8_t x187 = 1;
	static uint64_t x188 = 0LLU;
	uint64_t t32 = 2075053080LLU;

	t32 = ((x185*x186)%(x187+x188));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x189 = 49U;
	int32_t x191 = 4019698;
	uint16_t x192 = 252U;
	int32_t t33 = 335;

	t33 = ((x189*x190)%(x191+x192));

	if (t33 != 833) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x193 = 58754927U;
	static uint32_t x194 = UINT32_MAX;
	static volatile int8_t x196 = INT8_MIN;

	t34 = ((x193*x194)%(x195+x196));

	if (t34 != 4236212369U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x197 = 85804990U;
	int16_t x198 = 24;
	uint8_t x199 = 55U;
	volatile int8_t x200 = INT8_MIN;
	volatile uint32_t t35 = 7051838U;

	t35 = ((x197*x198)%(x199+x200));

	if (t35 != 2059319760U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x205 = INT8_MIN;
	int8_t x207 = -55;
	int64_t t36 = -7081LL;

	t36 = ((x205*x206)%(x207+x208));

	if (t36 != 16LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x213 = 45358252563816047LLU;
	volatile int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MIN;
	static volatile uint32_t x216 = 437U;

	t37 = ((x213*x214)%(x215+x216));

	if (t37 != 5760498075604637969LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x217 = -28913;
	volatile int16_t x218 = -2934;
	uint8_t x219 = UINT8_MAX;
	uint16_t x220 = 25U;
	int32_t t38 = -77397838;

	t38 = ((x217*x218)%(x219+x220));

	if (t38 != 262) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x225 = UINT32_MAX;
	int32_t x226 = INT32_MAX;
	int8_t x227 = INT8_MIN;
	int8_t x228 = INT8_MIN;
	uint32_t t39 = 1522730U;

	t39 = ((x225*x226)%(x227+x228));

	if (t39 != 2147483649U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x250 = 673;
	int32_t x251 = 33715314;
	static volatile uint16_t x252 = 26259U;
	volatile int32_t t40 = 0;

	t40 = ((x249*x250)%(x251+x252));

	if (t40 != 10363482) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x254 = 39;
	static volatile int32_t x255 = 28443975;
	volatile int8_t x256 = -3;

	t41 = ((x253*x254)%(x255+x256));

	if (t41 != 39) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x257 = 31054U;
	int8_t x258 = INT8_MAX;
	volatile int64_t x259 = -1LL;
	uint64_t x260 = 269857046885LLU;
	volatile uint64_t t42 = 109081565822456LLU;

	t42 = ((x257*x258)%(x259+x260));

	if (t42 != 3943858LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x261 = UINT32_MAX;
	volatile int8_t x262 = INT8_MIN;
	volatile int8_t x263 = INT8_MIN;
	volatile int16_t x264 = 3;
	uint32_t t43 = 841U;

	t43 = ((x261*x262)%(x263+x264));

	if (t43 != 128U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x268 = 258453U;
	static uint64_t t44 = 3859457670748LLU;

	t44 = ((x265*x266)%(x267+x268));

	if (t44 != 204950LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x277 = 1U;
	uint64_t x278 = 3583045649929LLU;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 3U;
	uint64_t t45 = 63279067500028667LLU;

	t45 = ((x277*x278)%(x279+x280));

	if (t45 != 3583045649929LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x297 = 59U;
	volatile int8_t x298 = INT8_MIN;
	uint64_t x299 = 1205873309874823718LLU;
	int32_t x300 = INT32_MIN;
	uint64_t t46 = 420758900066589LLU;

	t46 = ((x297*x298)%(x299+x300));

	if (t46 != 358644457799443014LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x313 = INT16_MAX;
	uint64_t x314 = 6659339357758LLU;
	static int64_t x315 = 811293846102935LL;
	int16_t x316 = -856;
	uint64_t t47 = 19397438080068LLU;

	t47 = ((x313*x314)%(x315+x316));

	if (t47 != 779821980299214LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x329 = UINT64_MAX;
	int16_t x330 = -85;
	static uint8_t x332 = 0U;
	static volatile uint64_t t48 = 61LLU;

	t48 = ((x329*x330)%(x331+x332));

	if (t48 != 85LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x333 = INT16_MIN;
	int64_t x334 = -87278831865LL;
	static volatile uint64_t t49 = 12615537LLU;

	t49 = ((x333*x334)%(x335+x336));

	if (t49 != 240LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x345 = -14;
	uint64_t x346 = UINT64_MAX;
	int8_t x347 = -1;
	int32_t x348 = 672337116;

	t50 = ((x345*x346)%(x347+x348));

	if (t50 != 14LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = INT16_MIN;
	volatile uint64_t x351 = UINT64_MAX;
	volatile uint8_t x352 = 13U;

	t51 = ((x349*x350)%(x351+x352));

	if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x353 = 0U;
	int8_t x354 = -1;
	int8_t x355 = -1;
	uint16_t x356 = UINT16_MAX;
	int32_t t52 = -190;

	t52 = ((x353*x354)%(x355+x356));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x361 = 9;
	uint8_t x362 = 17U;
	volatile uint8_t x364 = UINT8_MAX;
	int64_t t53 = -110074322642357LL;

	t53 = ((x361*x362)%(x363+x364));

	if (t53 != 153LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x369 = 11891176880848LLU;
	static uint8_t x370 = 1U;
	int32_t x371 = 7;
	volatile int64_t x372 = 44066466414455LL;
	volatile uint64_t t54 = 269924399823396180LLU;

	t54 = ((x369*x370)%(x371+x372));

	if (t54 != 11891176880848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x374 = INT8_MIN;
	int16_t x375 = -108;
	static uint32_t t55 = 13U;

	t55 = ((x373*x374)%(x375+x376));

	if (t55 != 16384U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x377 = -28LL;
	int8_t x378 = -1;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -422;
	static volatile int64_t t56 = 187164683423LL;

	t56 = ((x377*x378)%(x379+x380));

	if (t56 != 28LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x381 = INT16_MAX;
	uint64_t x383 = 58683LLU;
	static int64_t x384 = 111LL;
	volatile uint64_t t57 = 67246452433LLU;

	t57 = ((x381*x382)%(x383+x384));

	if (t57 != 52083LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x385 = -1;
	int32_t x386 = -4152843;
	int32_t x387 = -1881;
	uint32_t x388 = UINT32_MAX;
	uint32_t t58 = 365383655U;

	t58 = ((x385*x386)%(x387+x388));

	if (t58 != 4152843U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x394 = -1;
	int8_t x395 = INT8_MAX;
	int8_t x396 = -1;

	t59 = ((x393*x394)%(x395+x396));

	if (t59 != -124) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x397 = INT8_MAX;
	uint32_t x399 = 10419482U;
	uint32_t t60 = 74U;

	t60 = ((x397*x398)%(x399+x400));

	if (t60 != 1162050U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x405 = INT64_MIN;
	uint8_t x406 = 0U;

	t61 = ((x405*x406)%(x407+x408));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x409 = 11868965U;
	int8_t x410 = -1;
	static volatile int8_t x411 = INT8_MIN;
	uint32_t t62 = 3682529U;

	t62 = ((x409*x410)%(x411+x412));

	if (t62 != 686083919U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x413 = -1;
	int32_t x414 = 819035912;
	uint16_t x415 = 2314U;
	int32_t x416 = 146387535;

	t63 = ((x413*x414)%(x415+x416));

	if (t63 != -87086667) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = INT16_MIN;
	int16_t x419 = -38;
	int8_t x420 = INT8_MAX;
	int32_t t64 = -1911894;

	t64 = ((x417*x418)%(x419+x420));

	if (t64 != 78) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x421 = INT16_MIN;
	volatile uint16_t x422 = UINT16_MAX;
	volatile int8_t x423 = -10;
	int64_t x424 = -1LL;
	volatile int64_t t65 = -2LL;

	t65 = ((x421*x422)%(x423+x424));

	if (t65 != -3LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x425 = INT16_MIN;
	uint8_t x426 = UINT8_MAX;
	volatile int8_t x427 = INT8_MIN;
	volatile int64_t t66 = 187720245LL;

	t66 = ((x425*x426)%(x427+x428));

	if (t66 != -8355840LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x429 = INT8_MIN;
	volatile int32_t x431 = INT32_MIN;
	int32_t x432 = 2233417;
	volatile int32_t t67 = 0;

	t67 = ((x429*x430)%(x431+x432));

	if (t67 != 128) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x445 = -14LL;
	uint64_t x446 = UINT64_MAX;
	int32_t x447 = 435;

	t68 = ((x445*x446)%(x447+x448));

	if (t68 != 14LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x453 = -1LL;
	int32_t x455 = -743838085;
	uint8_t x456 = 92U;

	t69 = ((x453*x454)%(x455+x456));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x457 = INT16_MIN;
	int32_t x458 = -1;
	uint64_t x459 = UINT64_MAX;
	volatile uint64_t t70 = 3020050LLU;

	t70 = ((x457*x458)%(x459+x460));

	if (t70 != 8LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x461 = INT8_MIN;
	int64_t x462 = 61894460366223841LL;
	int64_t x463 = INT64_MIN;
	static volatile int8_t x464 = 2;
	int64_t t71 = -295783832295LL;

	t71 = ((x461*x462)%(x463+x464));

	if (t71 != -7922490926876651648LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x465 = 448724595265LLU;
	volatile uint16_t x466 = 3U;
	uint64_t x467 = 0LLU;
	uint32_t x468 = 3257U;
	uint64_t t72 = 9081826981083LLU;

	t72 = ((x465*x466)%(x467+x468));

	if (t72 != 866LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x469 = 380LL;
	int32_t x470 = 2470012;
	uint16_t x471 = 94U;
	static int64_t x472 = -117984731301481461LL;
	volatile int64_t t73 = -430401927LL;

	t73 = ((x469*x470)%(x471+x472));

	if (t73 != 938604560LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x474 = 537078806364712LLU;
	uint32_t x475 = 64384U;
	volatile int64_t x476 = INT64_MIN;
	volatile uint64_t t74 = 538706924592209LLU;

	t74 = ((x473*x474)%(x475+x476));

	if (t74 != 9221223721629252576LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x481 = 0U;
	uint8_t x482 = UINT8_MAX;
	uint32_t x483 = 2629148U;
	uint32_t x484 = 2311416U;
	uint32_t t75 = 172193U;

	t75 = ((x481*x482)%(x483+x484));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x485 = 10;
	uint64_t x488 = UINT64_MAX;
	volatile uint64_t t76 = 9618LLU;

	t76 = ((x485*x486)%(x487+x488));

	if (t76 != 2147483639LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x493 = 11181U;
	uint8_t x494 = 28U;
	uint16_t x495 = UINT16_MAX;
	static uint16_t x496 = 16U;
	volatile int32_t t77 = -351;

	t77 = ((x493*x494)%(x495+x496));

	if (t77 != 50864) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x501 = INT8_MIN;
	int8_t x503 = INT8_MIN;
	volatile int64_t t78 = -1LL;

	t78 = ((x501*x502)%(x503+x504));

	if (t78 != -100LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x505 = INT8_MIN;
	uint64_t x506 = 4312587424513339LLU;
	uint64_t x507 = UINT64_MAX;
	int32_t x508 = 53769152;
	volatile uint64_t t79 = 85LLU;

	t79 = ((x505*x506)%(x507+x508));

	if (t79 != 35692826LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x517 = INT8_MIN;
	uint8_t x518 = 2U;
	static int8_t x519 = -10;
	int64_t x520 = 4001301110991LL;
	volatile int64_t t80 = 37847687861LL;

	t80 = ((x517*x518)%(x519+x520));

	if (t80 != -256LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x526 = 30U;
	uint16_t x527 = 2U;
	uint32_t x528 = UINT32_MAX;
	uint32_t t81 = 12421U;

	t81 = ((x525*x526)%(x527+x528));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x529 = UINT32_MAX;
	int16_t x530 = 2660;
	volatile uint32_t t82 = 217588U;

	t82 = ((x529*x530)%(x531+x532));

	if (t82 != 641U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x533 = -1;
	volatile int64_t x534 = -1LL;
	int32_t x536 = -243;
	static volatile int64_t t83 = -3LL;

	t83 = ((x533*x534)%(x535+x536));

	if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x537 = UINT16_MAX;
	int8_t x538 = INT8_MIN;
	int32_t x539 = -15665639;
	volatile int16_t x540 = INT16_MIN;
	int32_t t84 = 1076;

	t84 = ((x537*x538)%(x539+x540));

	if (t84 != -8388480) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x549 = 3096U;
	int64_t x551 = INT64_MIN;
	int64_t x552 = INT64_MAX;

	t85 = ((x549*x550)%(x551+x552));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x557 = -13459;
	volatile uint8_t x558 = 22U;
	int64_t x559 = -5LL;
	int8_t x560 = INT8_MIN;
	volatile int64_t t86 = 230572957576782585LL;

	t86 = ((x557*x558)%(x559+x560));

	if (t86 != -40LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x567 = 243U;
	uint32_t x568 = 60067035U;
	volatile int64_t t87 = 184244243606033469LL;

	t87 = ((x565*x566)%(x567+x568));

	if (t87 != 26352046LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x569 = 456165618005736LLU;
	int32_t x570 = INT32_MIN;
	volatile int64_t x571 = -1LL;
	static volatile uint64_t t88 = 7537912482977LLU;

	t88 = ((x569*x570)%(x571+x572));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x585 = 5378943447LLU;
	int8_t x586 = INT8_MIN;
	volatile uint32_t x587 = 24953U;
	volatile uint64_t t89 = 76451197615077LLU;

	t89 = ((x585*x586)%(x587+x588));

	if (t89 != 20520LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x590 = -1;
	uint16_t x591 = 0U;
	uint8_t x592 = UINT8_MAX;
	volatile int32_t t90 = 6;

	t90 = ((x589*x590)%(x591+x592));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x601 = 2361U;
	uint16_t x602 = 6U;
	volatile uint64_t x603 = 75470505419438997LLU;
	int8_t x604 = INT8_MIN;
	volatile uint64_t t91 = 53LLU;

	t91 = ((x601*x602)%(x603+x604));

	if (t91 != 14166LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x609 = UINT16_MAX;
	uint32_t x610 = 9014166U;
	uint64_t x611 = 213268255766LLU;
	volatile int8_t x612 = INT8_MIN;
	volatile uint64_t t92 = 1LLU;

	t92 = ((x609*x610)%(x611+x612));

	if (t92 != 2332849258LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x613 = INT8_MIN;
	int64_t x614 = -1773046LL;
	int64_t x615 = INT64_MAX;
	uint64_t x616 = 1629730089983LLU;
	volatile uint64_t t93 = 1084586687291691LLU;

	t93 = ((x613*x614)%(x615+x616));

	if (t93 != 226949888LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x618 = 157;
	uint64_t x620 = 140383937560024LLU;

	t94 = ((x617*x618)%(x619+x620));

	if (t94 != 13910447279217LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x621 = 1043939632LLU;
	static int32_t x622 = INT32_MIN;
	volatile int16_t x623 = 2498;
	int64_t x624 = -757LL;
	volatile uint64_t t95 = 6LLU;

	t95 = ((x621*x622)%(x623+x624));

	if (t95 != 1482LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x625 = -1LL;
	volatile int16_t x627 = -1;
	int16_t x628 = -1;
	volatile int64_t t96 = 0LL;

	t96 = ((x625*x626)%(x627+x628));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x629 = 0;
	static int8_t x632 = INT8_MAX;
	uint32_t t97 = 1763812480U;

	t97 = ((x629*x630)%(x631+x632));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x634 = -112310783;
	static int16_t x635 = -1;
	int32_t x636 = -1090330;
	volatile uint64_t t98 = 15957023452319LLU;

	t98 = ((x633*x634)%(x635+x636));

	if (t98 != 112310783LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x638 = -1;
	uint32_t x639 = 173503644U;
	uint16_t x640 = 10110U;

	t99 = ((x637*x638)%(x639+x640));

	if (t99 != 130571665U) { NG(); } else { ; }
	
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

