#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 31;
static volatile uint32_t x8 = 3U;
uint32_t t1 = 2061719447U;
static volatile uint32_t x16 = 1360497U;
int64_t x26 = -1LL;
static int64_t x36 = -4190653293497LL;
int64_t t8 = 51LL;
int32_t x46 = -1;
static uint8_t x59 = UINT8_MAX;
static uint16_t x64 = UINT16_MAX;
int16_t x74 = INT16_MAX;
int8_t x82 = INT8_MAX;
volatile int32_t x85 = INT32_MAX;
int16_t x94 = INT16_MAX;
int32_t t19 = -217527;
static int16_t x97 = INT16_MIN;
uint8_t x98 = UINT8_MAX;
int8_t x126 = -1;
volatile int32_t x133 = 459655912;
int8_t x156 = -1;
volatile int64_t t26 = 170836127LL;
volatile int32_t t27 = 2;
int32_t x172 = -1;
volatile int32_t t28 = 139668;
int32_t x173 = 26134793;
int8_t x178 = -12;
int16_t x179 = -1;
volatile int32_t t31 = 25802294;
int32_t x187 = INT32_MAX;
static int64_t x194 = 24210933LL;
uint32_t x195 = 4812U;
static volatile int16_t x196 = INT16_MIN;
uint32_t t34 = 12828792U;
static int64_t x197 = INT64_MIN;
int8_t x198 = -12;
volatile int64_t t35 = -6441415583LL;
uint16_t x203 = 150U;
static volatile uint32_t t37 = 476U;
volatile uint32_t t39 = 0U;
int8_t x223 = INT8_MIN;
int16_t x224 = -1;
static int16_t x226 = INT16_MIN;
volatile int8_t x254 = -1;
static volatile uint32_t x255 = UINT32_MAX;
volatile uint32_t t44 = 727841U;
volatile uint32_t x286 = 109691U;
uint16_t x295 = 21176U;
volatile uint8_t x308 = 20U;
uint32_t x311 = 1804U;
uint8_t x312 = 1U;
int8_t x328 = INT8_MIN;
static volatile uint32_t t55 = 0U;
int8_t x333 = 5;
volatile int16_t x335 = -2174;
int8_t x338 = INT8_MAX;
volatile int32_t t57 = -23;
volatile int16_t x348 = INT16_MAX;
int32_t x350 = INT32_MIN;
int16_t x352 = INT16_MAX;
static uint64_t x357 = 3510769576310LLU;
int32_t x358 = -24352625;
int16_t x360 = INT16_MIN;
int16_t x386 = INT16_MIN;
int32_t x395 = 424;
uint64_t x397 = 2342282540915815LLU;
int8_t x414 = INT8_MIN;
uint64_t x415 = UINT64_MAX;
volatile int64_t x416 = INT64_MIN;
volatile uint64_t t68 = 11047LLU;
int16_t x428 = 12;
static volatile int16_t x429 = INT16_MAX;
uint32_t x441 = 6438U;
int32_t x442 = INT32_MAX;
volatile int64_t x443 = -1LL;
static volatile uint8_t x450 = UINT8_MAX;
uint64_t t75 = 257554411654212LLU;
static int16_t x463 = INT16_MAX;
static int8_t x472 = INT8_MIN;
uint8_t x486 = 2U;
uint16_t x488 = 24315U;
int8_t x494 = INT8_MIN;
volatile uint64_t x498 = 69108685889LLU;
int16_t x502 = 1;
volatile int64_t x503 = -24LL;
int8_t x509 = INT8_MIN;
static uint64_t x511 = 338LLU;
volatile uint64_t t86 = 428597358367LLU;
volatile uint64_t x517 = 2975749758100532LLU;
volatile uint16_t x519 = UINT16_MAX;
int32_t t87 = 218037;
int64_t x528 = 135LL;
uint16_t x533 = 14U;
uint32_t x538 = 5860U;
volatile int8_t x551 = INT8_MIN;
int16_t x557 = 526;
volatile int32_t x558 = 161;
uint16_t x560 = 11U;
static int64_t x561 = 41519506LL;
uint8_t x563 = 1U;
int16_t x566 = INT16_MAX;
uint64_t x574 = 472100960769667LLU;


void f0(void) {
	int32_t x1 = -630109;
	volatile uint64_t x3 = UINT64_MAX;
	uint64_t x4 = 9965538LLU;
	uint64_t t0 = 30437400705LLU;

	t0 = ((x1==x2)%(x3*x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 123U;
	int16_t x6 = 994;
	int16_t x7 = INT16_MAX;

	t1 = ((x5==x6)%(x7*x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -3629351;

	t2 = ((x9==x10)%(x11*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x13 = 2LL;
	static volatile int32_t x14 = INT32_MIN;
	uint64_t x15 = UINT64_MAX;
	volatile uint64_t t3 = 483089LLU;

	t3 = ((x13==x14)%(x15*x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	static int32_t x18 = -184589;
	uint16_t x19 = 5266U;
	static int32_t x20 = -1;
	static int32_t t4 = -579374;

	t4 = ((x17==x18)%(x19*x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int32_t x22 = 3;
	volatile uint32_t x23 = 1U;
	volatile uint64_t x24 = 29048339932LLU;
	volatile uint64_t t5 = 46972044LLU;

	t5 = ((x21==x22)%(x23*x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int64_t x27 = 1915414454LL;
	int8_t x28 = INT8_MIN;
	volatile int64_t t6 = -845906300524610816LL;

	t6 = ((x25==x26)%(x27*x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	static volatile uint16_t x30 = UINT16_MAX;
	volatile int64_t x31 = -1LL;
	volatile uint32_t x32 = 18944U;
	int64_t t7 = 32LL;

	t7 = ((x29==x30)%(x31*x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x33 = 4;
	volatile int16_t x34 = -1;
	int16_t x35 = INT16_MIN;

	t8 = ((x33==x34)%(x35*x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = 2248796LL;
	int64_t x47 = -52580234LL;
	int32_t x48 = INT32_MIN;
	static int64_t t9 = 4080320452199965LL;

	t9 = ((x45==x46)%(x47*x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	static uint32_t x50 = UINT32_MAX;
	int8_t x51 = 1;
	volatile int64_t x52 = -668742922LL;
	static int64_t t10 = 389237LL;

	t10 = ((x49==x50)%(x51*x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x57 = UINT32_MAX;
	volatile uint32_t x58 = UINT32_MAX;
	uint64_t x60 = 270355782971LLU;
	uint64_t t11 = 4248931783398957LLU;

	t11 = ((x57==x58)%(x59*x60));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x61 = 0U;
	int8_t x62 = INT8_MIN;
	volatile uint8_t x63 = 44U;
	int32_t t12 = 447;

	t12 = ((x61==x62)%(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MAX;
	int64_t x70 = 10781387403LL;
	uint8_t x71 = UINT8_MAX;
	int32_t x72 = 3185468;
	int32_t t13 = -1003;

	t13 = ((x69==x70)%(x71*x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = INT16_MIN;
	int64_t t14 = 2261061919092022573LL;

	t14 = ((x73==x74)%(x75*x76));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x77 = INT32_MIN;
	int8_t x78 = INT8_MIN;
	uint64_t x79 = 2LLU;
	uint8_t x80 = UINT8_MAX;
	static volatile uint64_t t15 = 0LLU;

	t15 = ((x77==x78)%(x79*x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x81 = 354718LL;
	uint8_t x83 = 28U;
	uint16_t x84 = 990U;
	volatile int32_t t16 = 986;

	t16 = ((x81==x82)%(x83*x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = -1;
	static uint8_t x87 = UINT8_MAX;
	int16_t x88 = -1;
	volatile int32_t t17 = -4196858;

	t17 = ((x85==x86)%(x87*x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	uint32_t x91 = 5667U;
	static int16_t x92 = -1;
	uint32_t t18 = 3U;

	t18 = ((x89==x90)%(x91*x92));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = UINT32_MAX;
	int32_t x95 = -1;
	int32_t x96 = -1;

	t19 = ((x93==x94)%(x95*x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x99 = -2;
	static int16_t x100 = INT16_MIN;
	int32_t t20 = -105;

	t20 = ((x97==x98)%(x99*x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x113 = -323;
	uint64_t x114 = 14357255513LLU;
	uint64_t x115 = 76335172LLU;
	int64_t x116 = -1LL;
	volatile uint64_t t21 = 166776421879531LLU;

	t21 = ((x113==x114)%(x115*x116));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x121 = 0U;
	int16_t x122 = -1;
	volatile int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MAX;
	volatile int32_t t22 = -51024714;

	t22 = ((x121==x122)%(x123*x124));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x125 = 1U;
	int16_t x127 = 23;
	int8_t x128 = INT8_MIN;
	int32_t t23 = 205;

	t23 = ((x125==x126)%(x127*x128));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x134 = 4U;
	int8_t x135 = 17;
	static volatile int64_t x136 = 1924179LL;
	volatile int64_t t24 = 0LL;

	t24 = ((x133==x134)%(x135*x136));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MAX;
	int8_t x143 = -1;
	int16_t x144 = 2;
	int32_t t25 = -162554269;

	t25 = ((x141==x142)%(x143*x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x153 = 1U;
	static volatile int16_t x154 = INT16_MIN;
	int64_t x155 = 2037LL;

	t26 = ((x153==x154)%(x155*x156));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x161 = INT16_MAX;
	int16_t x162 = INT16_MAX;
	volatile uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;

	t27 = ((x161==x162)%(x163*x164));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x169 = 22U;
	int64_t x170 = -1LL;
	int8_t x171 = INT8_MAX;

	t28 = ((x169==x170)%(x171*x172));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x174 = UINT8_MAX;
	static uint64_t x175 = 56795140503818LLU;
	int16_t x176 = -1;
	volatile uint64_t t29 = 14183639267945LLU;

	t29 = ((x173==x174)%(x175*x176));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x177 = INT32_MIN;
	static volatile int64_t x180 = -1LL;
	int64_t t30 = 381009883904055651LL;

	t30 = ((x177==x178)%(x179*x180));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x181 = -6733987;
	uint32_t x182 = 7U;
	int32_t x183 = -14377;
	static volatile int32_t x184 = 7;

	t31 = ((x181==x182)%(x183*x184));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x185 = 1U;
	int32_t x186 = INT32_MIN;
	int64_t x188 = -1LL;
	volatile int64_t t32 = -95451710979239LL;

	t32 = ((x185==x186)%(x187*x188));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x189 = INT64_MAX;
	uint8_t x190 = 5U;
	int16_t x191 = 6993;
	int8_t x192 = -1;
	int32_t t33 = 27;

	t33 = ((x189==x190)%(x191*x192));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x193 = 23U;

	t34 = ((x193==x194)%(x195*x196));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x199 = -3109309481148LL;
	uint16_t x200 = UINT16_MAX;

	t35 = ((x197==x198)%(x199*x200));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = INT64_MAX;
	int8_t x202 = INT8_MIN;
	int16_t x204 = -7;
	volatile int32_t t36 = 7;

	t36 = ((x201==x202)%(x203*x204));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x205 = UINT16_MAX;
	static int64_t x206 = INT64_MIN;
	uint32_t x207 = UINT32_MAX;
	int32_t x208 = INT32_MAX;

	t37 = ((x205==x206)%(x207*x208));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x209 = INT8_MIN;
	volatile uint32_t x210 = UINT32_MAX;
	uint16_t x211 = UINT16_MAX;
	int64_t x212 = -1LL;
	int64_t t38 = -2095166426840601564LL;

	t38 = ((x209==x210)%(x211*x212));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x217 = UINT32_MAX;
	volatile int32_t x218 = 1;
	uint16_t x219 = 110U;
	uint32_t x220 = 69U;

	t39 = ((x217==x218)%(x219*x220));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x221 = -108719796537387032LL;
	uint16_t x222 = 8157U;
	volatile int32_t t40 = 3419559;

	t40 = ((x221==x222)%(x223*x224));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x225 = 1U;
	uint32_t x227 = UINT32_MAX;
	int8_t x228 = INT8_MIN;
	uint32_t t41 = 12U;

	t41 = ((x225==x226)%(x227*x228));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x229 = 0;
	uint8_t x230 = 1U;
	volatile int16_t x231 = INT16_MAX;
	int8_t x232 = -3;
	int32_t t42 = 53005;

	t42 = ((x229==x230)%(x231*x232));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x253 = 0U;
	volatile uint64_t x256 = 20LLU;
	volatile uint64_t t43 = 18435120107347LLU;

	t43 = ((x253==x254)%(x255*x256));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x257 = INT64_MAX;
	int32_t x258 = 60;
	static int16_t x259 = -62;
	uint32_t x260 = UINT32_MAX;

	t44 = ((x257==x258)%(x259*x260));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x265 = -5412457;
	uint16_t x266 = 1U;
	volatile uint64_t x267 = UINT64_MAX;
	int64_t x268 = INT64_MAX;
	static volatile uint64_t t45 = 2579523LLU;

	t45 = ((x265==x266)%(x267*x268));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x269 = 13U;
	uint32_t x270 = 326750U;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = -1;
	volatile uint32_t t46 = 5980154U;

	t46 = ((x269==x270)%(x271*x272));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x277 = 61382;
	uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 111324011473578788LLU;
	int32_t x280 = 242756;
	volatile uint64_t t47 = 73826073428LLU;

	t47 = ((x277==x278)%(x279*x280));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x285 = 92;
	uint16_t x287 = 15U;
	uint16_t x288 = UINT16_MAX;
	static volatile int32_t t48 = 204;

	t48 = ((x285==x286)%(x287*x288));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x293 = 29447916LL;
	volatile int32_t x294 = -1289;
	int32_t x296 = -2878;
	static volatile int32_t t49 = 26628;

	t49 = ((x293==x294)%(x295*x296));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x297 = INT64_MAX;
	volatile uint32_t x298 = 54285345U;
	uint16_t x299 = 5324U;
	volatile int16_t x300 = INT16_MIN;
	int32_t t50 = 1419148;

	t50 = ((x297==x298)%(x299*x300));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x301 = -34;
	static uint8_t x302 = 0U;
	int32_t x303 = -5951442;
	int8_t x304 = -1;
	static int32_t t51 = 2160203;

	t51 = ((x301==x302)%(x303*x304));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x305 = UINT16_MAX;
	uint16_t x306 = 204U;
	int16_t x307 = -1;
	volatile int32_t t52 = 27;

	t52 = ((x305==x306)%(x307*x308));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x309 = 859884331;
	uint32_t x310 = UINT32_MAX;
	volatile uint32_t t53 = 2676861U;

	t53 = ((x309==x310)%(x311*x312));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x317 = INT64_MIN;
	volatile int16_t x318 = -1;
	int32_t x319 = -1009289420;
	uint16_t x320 = 1U;
	int32_t t54 = -2944906;

	t54 = ((x317==x318)%(x319*x320));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x325 = 1U;
	int64_t x326 = INT64_MAX;
	static uint32_t x327 = UINT32_MAX;

	t55 = ((x325==x326)%(x327*x328));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x334 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t56 = 61157;

	t56 = ((x333==x334)%(x335*x336));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x337 = -131853;
	volatile int8_t x339 = INT8_MAX;
	int8_t x340 = -1;

	t57 = ((x337==x338)%(x339*x340));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x345 = 10493559U;
	static int16_t x346 = INT16_MAX;
	int64_t x347 = -6374488740749LL;
	int64_t t58 = -1LL;

	t58 = ((x345==x346)%(x347*x348));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x349 = INT8_MIN;
	int64_t x351 = -1LL;
	static int64_t t59 = 382LL;

	t59 = ((x349==x350)%(x351*x352));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x359 = 1355U;
	volatile int32_t t60 = 6;

	t60 = ((x357==x358)%(x359*x360));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x377 = INT32_MIN;
	uint16_t x378 = 103U;
	static int8_t x379 = INT8_MAX;
	int8_t x380 = INT8_MAX;
	int32_t t61 = -7;

	t61 = ((x377==x378)%(x379*x380));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x385 = UINT8_MAX;
	volatile uint64_t x387 = 1596160780LLU;
	int8_t x388 = -1;
	uint64_t t62 = 1085024001LLU;

	t62 = ((x385==x386)%(x387*x388));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x389 = -2;
	static int8_t x390 = -5;
	int64_t x391 = -1LL;
	uint16_t x392 = 9739U;
	volatile int64_t t63 = -8LL;

	t63 = ((x389==x390)%(x391*x392));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x393 = 2900401628792689061LLU;
	volatile int64_t x394 = -1LL;
	uint8_t x396 = UINT8_MAX;
	int32_t t64 = -6263149;

	t64 = ((x393==x394)%(x395*x396));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x398 = INT64_MAX;
	uint8_t x399 = 6U;
	uint8_t x400 = 44U;
	int32_t t65 = -46;

	t65 = ((x397==x398)%(x399*x400));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x405 = INT16_MIN;
	volatile int64_t x406 = INT64_MAX;
	int8_t x407 = INT8_MIN;
	int16_t x408 = -1;
	volatile int32_t t66 = -465795;

	t66 = ((x405==x406)%(x407*x408));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x409 = UINT16_MAX;
	static volatile int16_t x410 = -1;
	uint64_t x411 = 6999903962152123202LLU;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t67 = 2474446753103166LLU;

	t67 = ((x409==x410)%(x411*x412));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x413 = INT32_MAX;

	t68 = ((x413==x414)%(x415*x416));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MAX;
	volatile uint64_t x427 = 115127850LLU;
	uint64_t t69 = 3019343232258154738LLU;

	t69 = ((x425==x426)%(x427*x428));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x430 = UINT64_MAX;
	uint8_t x431 = 5U;
	int8_t x432 = -1;
	static volatile int32_t t70 = 589390;

	t70 = ((x429==x430)%(x431*x432));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x433 = INT8_MIN;
	volatile uint16_t x434 = UINT16_MAX;
	int8_t x435 = INT8_MAX;
	int8_t x436 = INT8_MIN;
	static int32_t t71 = -190755105;

	t71 = ((x433==x434)%(x435*x436));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x437 = INT8_MAX;
	int16_t x438 = 724;
	int64_t x439 = 236917513331LL;
	uint16_t x440 = 26U;
	volatile int64_t t72 = 76LL;

	t72 = ((x437==x438)%(x439*x440));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x444 = INT64_MAX;
	volatile int64_t t73 = 8156690LL;

	t73 = ((x441==x442)%(x443*x444));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x449 = 1119630U;
	int64_t x451 = 72LL;
	int32_t x452 = -2046;
	int64_t t74 = -59161433LL;

	t74 = ((x449==x450)%(x451*x452));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x453 = -9200;
	static uint16_t x454 = 519U;
	uint16_t x455 = UINT16_MAX;
	volatile uint64_t x456 = 94LLU;

	t75 = ((x453==x454)%(x455*x456));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x461 = 61U;
	volatile uint64_t x462 = 1388282637848LLU;
	int16_t x464 = INT16_MAX;
	int32_t t76 = 18407;

	t76 = ((x461==x462)%(x463*x464));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x465 = INT8_MIN;
	int64_t x466 = -1LL;
	uint16_t x467 = 6620U;
	uint8_t x468 = 30U;
	static int32_t t77 = 398;

	t77 = ((x465==x466)%(x467*x468));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x469 = UINT32_MAX;
	static uint32_t x470 = UINT32_MAX;
	static int16_t x471 = INT16_MIN;
	volatile int32_t t78 = 81731079;

	t78 = ((x469==x470)%(x471*x472));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x473 = INT32_MIN;
	int32_t x474 = -32410;
	uint64_t x475 = UINT64_MAX;
	int64_t x476 = INT64_MIN;
	static uint64_t t79 = 461808589709LLU;

	t79 = ((x473==x474)%(x475*x476));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x481 = INT64_MIN;
	static int8_t x482 = 0;
	static int8_t x483 = INT8_MIN;
	static int8_t x484 = INT8_MIN;
	static int32_t t80 = 421;

	t80 = ((x481==x482)%(x483*x484));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x485 = UINT16_MAX;
	int8_t x487 = -1;
	volatile int32_t t81 = -51077;

	t81 = ((x485==x486)%(x487*x488));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x493 = 3;
	int32_t x495 = -469327;
	volatile uint64_t x496 = 373273LLU;
	static uint64_t t82 = 6LLU;

	t82 = ((x493==x494)%(x495*x496));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int8_t x497 = INT8_MAX;
	uint8_t x499 = 13U;
	uint32_t x500 = 1685U;
	uint32_t t83 = 1502U;

	t83 = ((x497==x498)%(x499*x500));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x501 = INT16_MAX;
	uint32_t x504 = 172376U;
	int64_t t84 = -15709440638165LL;

	t84 = ((x501==x502)%(x503*x504));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x505 = 5001496557471LLU;
	uint16_t x506 = 12U;
	static int32_t x507 = INT32_MIN;
	uint64_t x508 = 14025LLU;
	volatile uint64_t t85 = 154638032885658LLU;

	t85 = ((x505==x506)%(x507*x508));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x510 = INT64_MIN;
	volatile uint8_t x512 = UINT8_MAX;

	t86 = ((x509==x510)%(x511*x512));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x518 = 20U;
	int32_t x520 = -1;

	t87 = ((x517==x518)%(x519*x520));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x525 = UINT64_MAX;
	static uint32_t x526 = 946U;
	int32_t x527 = INT32_MIN;
	volatile int64_t t88 = -91762843397743456LL;

	t88 = ((x525==x526)%(x527*x528));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x529 = -9505LL;
	uint32_t x530 = 1483847959U;
	uint8_t x531 = 13U;
	uint64_t x532 = UINT64_MAX;
	static volatile uint64_t t89 = 6328527962661LLU;

	t89 = ((x529==x530)%(x531*x532));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x534 = 406442248U;
	uint64_t x535 = 15373979LLU;
	uint64_t x536 = 4238427701114531LLU;
	volatile uint64_t t90 = 2930522973517803319LLU;

	t90 = ((x533==x534)%(x535*x536));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x537 = -5;
	static int16_t x539 = 14;
	int64_t x540 = -26809713LL;
	volatile int64_t t91 = -583LL;

	t91 = ((x537==x538)%(x539*x540));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x549 = UINT8_MAX;
	int64_t x550 = -1LL;
	uint8_t x552 = 10U;
	int32_t t92 = -1066;

	t92 = ((x549==x550)%(x551*x552));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x553 = INT64_MIN;
	int8_t x554 = INT8_MIN;
	int64_t x555 = -7769153LL;
	int64_t x556 = 155273088LL;
	int64_t t93 = -118463139LL;

	t93 = ((x553==x554)%(x555*x556));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x559 = 60U;
	volatile uint32_t t94 = 1U;

	t94 = ((x557==x558)%(x559*x560));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x562 = 549U;
	int64_t x564 = INT64_MIN;
	static int64_t t95 = 16486374539LL;

	t95 = ((x561==x562)%(x563*x564));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x565 = 741258564517932LL;
	static uint32_t x567 = UINT32_MAX;
	int16_t x568 = -543;
	uint32_t t96 = 15846193U;

	t96 = ((x565==x566)%(x567*x568));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x573 = INT32_MAX;
	static uint16_t x575 = 7967U;
	volatile int64_t x576 = -1LL;
	volatile int64_t t97 = 908575LL;

	t97 = ((x573==x574)%(x575*x576));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x577 = -1;
	int64_t x578 = -1LL;
	static uint16_t x579 = UINT16_MAX;
	uint64_t x580 = UINT64_MAX;
	uint64_t t98 = 5340577099LLU;

	t98 = ((x577==x578)%(x579*x580));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x581 = 464;
	int8_t x582 = 14;
	uint32_t x583 = UINT32_MAX;
	int16_t x584 = 371;
	uint32_t t99 = 1901863U;

	t99 = ((x581==x582)%(x583*x584));

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

