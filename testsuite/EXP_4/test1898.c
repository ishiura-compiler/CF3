#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = -1;
uint16_t x11 = 6342U;
uint8_t x16 = UINT8_MAX;
static int16_t x22 = INT16_MAX;
uint64_t x23 = 158196LLU;
int64_t x24 = -103LL;
static int64_t x25 = INT64_MIN;
int32_t x27 = INT32_MIN;
uint64_t t7 = 1249358084LLU;
int8_t x34 = -1;
uint8_t x40 = 0U;
uint32_t t9 = 27930909U;
uint64_t x56 = 89982563019317039LLU;
volatile int16_t x68 = 14;
volatile int32_t x78 = -1;
volatile int64_t x79 = 224806299034660LL;
static uint32_t x84 = 13957531U;
int16_t x85 = -1;
uint16_t x87 = UINT16_MAX;
uint64_t x88 = UINT64_MAX;
int8_t x90 = INT8_MIN;
volatile uint32_t x103 = UINT32_MAX;
uint64_t x104 = UINT64_MAX;
volatile int64_t x119 = 16618266781LL;
int64_t x123 = INT64_MIN;
uint32_t x127 = 2220U;
uint64_t x129 = 637672551526396LLU;
uint64_t t27 = 1LLU;
volatile int16_t x140 = INT16_MAX;
volatile int16_t x143 = -1;
static int16_t x147 = -1;
int8_t x161 = INT8_MAX;
static uint16_t x164 = UINT16_MAX;
static int8_t x169 = INT8_MIN;
uint16_t x170 = 0U;
int8_t x173 = -30;
static uint32_t x179 = 8U;
volatile uint32_t t36 = 9U;
int8_t x187 = -1;
int64_t x188 = -1LL;
int64_t t37 = -3975LL;
volatile int64_t t38 = 141811772381422LL;
uint64_t x197 = UINT64_MAX;
volatile int16_t x198 = -1;
int16_t x214 = -1;
static int32_t x215 = INT32_MIN;
volatile uint32_t x218 = 14U;
static uint32_t x219 = 8248U;
int16_t x233 = INT16_MAX;
static int32_t x241 = 4402076;
int16_t x252 = INT16_MIN;
int64_t x253 = -65LL;
int8_t x277 = -13;
uint64_t x278 = UINT64_MAX;
int32_t x282 = -3;
int8_t x286 = 1;
int8_t x289 = -1;
volatile int64_t x294 = -328944397496LL;
static int16_t x296 = 147;
int8_t x307 = INT8_MAX;
volatile int64_t t60 = -345LL;
uint32_t x310 = UINT32_MAX;
int8_t x312 = -1;
int64_t x316 = -679LL;
volatile int64_t t62 = 561112926077LL;
int8_t x318 = INT8_MIN;
int32_t x319 = 7356183;
static uint64_t x338 = 3920LLU;
int16_t x339 = -59;
uint32_t x347 = 2419413U;
uint32_t x348 = UINT32_MAX;
int32_t x352 = INT32_MAX;
static int16_t x361 = 9963;
int32_t x364 = INT32_MIN;
uint32_t t70 = 565U;
static int16_t x366 = 273;
int16_t x374 = INT16_MIN;
int64_t x377 = INT64_MAX;
int8_t x378 = -12;
volatile int8_t x380 = INT8_MIN;
int32_t x388 = INT32_MIN;
volatile uint64_t t75 = 95891329842713553LLU;
int16_t x389 = INT16_MIN;
int16_t x395 = 337;
volatile uint32_t t79 = 176227959U;
volatile int64_t t80 = -15345747355992LL;
int16_t x410 = INT16_MIN;
static uint64_t t81 = 1668720LLU;
static int8_t x418 = -1;
static volatile int64_t x430 = -14244686293LL;
static int64_t t84 = -1282363691688LL;
int32_t x434 = INT32_MIN;
int16_t x454 = -1;
uint8_t x461 = 30U;
uint8_t x474 = 13U;
volatile int16_t x475 = -1;
int16_t x502 = -6;
int64_t t99 = -117275906967049909LL;


void f0(void) {
	int32_t x1 = 5641;
	volatile int32_t x3 = -164143;
	volatile int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -77139490;

	t0 = (x1^(x2*(x3|x4)));

	if (t0 != 5670) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	volatile int64_t x6 = -1LL;
	uint16_t x7 = 430U;
	int64_t x8 = -1LL;
	int64_t t1 = 718672773557LL;

	t1 = (x5^(x6*(x7|x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = -1;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -105;

	t2 = (x9^(x10*(x11|x12)));

	if (t2 != -6146) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	uint32_t x14 = 32U;
	static int32_t x15 = -93735902;
	volatile uint32_t t3 = 47083768U;

	t3 = (x13^(x14*(x15|x16)));

	if (t3 != 1295425439U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	volatile int64_t x18 = -1LL;
	int16_t x19 = -1;
	int64_t x20 = -2312175954458387LL;
	int64_t t4 = 283173360846510385LL;

	t4 = (x17^(x18*(x19|x20)));

	if (t4 != 2147483646LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	volatile uint64_t t5 = 921871822267LLU;

	t5 = (x21^(x22*(x23|x24)));

	if (t5 != 9223372036854874108LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = -1;
	int8_t x28 = -1;
	int64_t t6 = -2635853786482220329LL;

	t6 = (x25^(x26*(x27|x28)));

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 2U;
	int32_t x30 = INT32_MIN;
	int64_t x31 = INT64_MIN;
	static uint64_t x32 = 1LLU;

	t7 = (x29^(x30*(x31|x32)));

	if (t7 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int64_t x35 = INT64_MAX;
	int64_t x36 = 14809902456514LL;
	static int64_t t8 = -724888LL;

	t8 = (x33^(x34*(x35|x36)));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	uint8_t x38 = 2U;
	uint32_t x39 = 0U;

	t9 = (x37^(x38*(x39|x40)));

	if (t9 != 2147483647U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 24U;
	static int16_t x46 = INT16_MIN;
	static int32_t x47 = INT32_MIN;
	static int64_t x48 = INT64_MIN;
	int64_t t10 = 254415839284LL;

	t10 = (x45^(x46*(x47|x48)));

	if (t10 != 70368744177688LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	volatile int32_t x50 = 245710;
	int16_t x51 = -1;
	uint8_t x52 = 9U;
	volatile int32_t t11 = -3998;

	t11 = (x49^(x50*(x51|x52)));

	if (t11 != 245709) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int8_t x54 = INT8_MIN;
	uint64_t x55 = 14LLU;
	uint64_t t12 = 798LLU;

	t12 = (x53^(x54*(x55|x56)));

	if (t12 != 6928976007236982655LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 924496218399957872LLU;
	int32_t x58 = 1639;
	static int16_t x59 = INT16_MIN;
	volatile uint32_t x60 = 1633533393U;
	static volatile uint64_t t13 = 2151907885112693246LLU;

	t13 = (x57^(x58*(x59|x60)));

	if (t13 != 924496217691629159LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -2;
	uint16_t x62 = 17U;
	int8_t x63 = INT8_MIN;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = 1976660;

	t14 = (x61^(x62*(x63|x64)));

	if (t14 != 17) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MIN;
	static int16_t x66 = 3163;
	uint8_t x67 = 0U;
	volatile int64_t t15 = 24091125LL;

	t15 = (x65^(x66*(x67|x68)));

	if (t15 != -9223372036854731526LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int64_t x70 = -1LL;
	static volatile int16_t x71 = INT16_MIN;
	int32_t x72 = 139;
	int64_t t16 = 5234327905LL;

	t16 = (x69^(x70*(x71|x72)));

	if (t16 != 2147451018LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = 796U;
	static volatile int64_t x80 = INT64_MIN;
	volatile int64_t t17 = -10671427167519546LL;

	t17 = (x77^(x78*(x79|x80)));

	if (t17 != 9223147230555740352LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	int64_t x82 = INT64_MIN;
	static uint64_t x83 = 969385640LLU;
	static volatile uint64_t t18 = 8520722776461LLU;

	t18 = (x81^(x82*(x83|x84)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x86 = 65921898412081LL;
	volatile uint64_t t19 = 1317785LLU;

	t19 = (x85^(x86*(x87|x88)));

	if (t19 != 65921898412080LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x89 = -1;
	int8_t x91 = 46;
	int8_t x92 = INT8_MAX;
	static int32_t t20 = 2312;

	t20 = (x89^(x90*(x91|x92)));

	if (t20 != 16255) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x101 = 10U;
	static uint8_t x102 = 31U;
	uint64_t t21 = 356306657LLU;

	t21 = (x101^(x102*(x103|x104)));

	if (t21 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x109 = INT16_MIN;
	int16_t x110 = INT16_MIN;
	int16_t x111 = INT16_MAX;
	int16_t x112 = INT16_MAX;
	int32_t t22 = -6;

	t22 = (x109^(x110*(x111|x112)));

	if (t22 != 1073676288) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 1174003U;
	uint8_t x115 = 1U;
	int8_t x116 = INT8_MIN;
	volatile int64_t t23 = 434129LL;

	t23 = (x113^(x114*(x115|x116)));

	if (t23 != -9223372032708906893LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = -3469;
	static volatile int16_t x118 = INT16_MAX;
	int16_t x120 = INT16_MIN;
	int64_t t24 = -25266521LL;

	t24 = (x117^(x118*(x119|x120)));

	if (t24 != 800140560LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 225U;
	uint64_t x122 = 5113724498139887969LLU;
	uint8_t x124 = UINT8_MAX;
	static volatile uint64_t t25 = 1103301016787238LLU;

	t25 = (x121^(x122*(x123|x124)));

	if (t25 != 3504289829148043134LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = -29;
	int64_t x126 = -1LL;
	static int32_t x128 = INT32_MAX;
	volatile int64_t t26 = 16621021450461LL;

	t26 = (x125^(x126*(x127|x128)));

	if (t26 != 2147483618LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x130 = INT32_MIN;
	static uint32_t x131 = 139062732U;
	uint8_t x132 = 45U;

	t27 = (x129^(x130*(x131|x132)));

	if (t27 != 637670404042748LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x133 = INT64_MIN;
	static int32_t x134 = -1;
	static int32_t x135 = 110195134;
	int32_t x136 = INT32_MIN;
	int64_t t28 = -1557901LL;

	t28 = (x133^(x134*(x135|x136)));

	if (t28 != -9223372034817487294LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = 14U;
	int16_t x138 = -1;
	volatile int32_t x139 = 175035;
	uint32_t t29 = 108911U;

	t29 = (x137^(x138*(x139|x140)));

	if (t29 != 4294770703U) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = INT64_MIN;
	uint8_t x142 = UINT8_MAX;
	static volatile int64_t x144 = -2710LL;
	int64_t t30 = -12654131260LL;

	t30 = (x141^(x142*(x143|x144)));

	if (t30 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x145 = 527035484310961749LLU;
	int64_t x146 = -1LL;
	uint32_t x148 = 2U;
	volatile uint64_t t31 = 191088177LLU;

	t31 = (x145^(x146*(x147|x148)));

	if (t31 != 17919708585451945556LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = 361576209;
	volatile int16_t x154 = 15954;
	int64_t x155 = -908141001697659LL;
	int32_t x156 = -1;
	volatile int64_t t32 = 152944759LL;

	t32 = (x153^(x154*(x155|x156)));

	if (t32 != -361564481LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x162 = INT16_MAX;
	int32_t x163 = -9136;
	int32_t t33 = -7087971;

	t33 = (x161^(x162*(x163|x164)));

	if (t33 != -32642) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x171 = INT64_MIN;
	int16_t x172 = -7;
	volatile int64_t t34 = -2686961LL;

	t34 = (x169^(x170*(x171|x172)));

	if (t34 != -128LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x174 = UINT64_MAX;
	static uint64_t x175 = 40242696809181LLU;
	int32_t x176 = INT32_MIN;
	volatile uint64_t t35 = 877068685463627655LLU;

	t35 = (x173^(x174*(x175|x176)));

	if (t35 != 18446744072562797249LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x177 = -1;
	uint16_t x178 = 3696U;
	volatile int16_t x180 = INT16_MIN;

	t36 = (x177^(x178*(x179|x180)));

	if (t36 != 121080959U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = -1;
	static volatile int8_t x186 = INT8_MAX;

	t37 = (x185^(x186*(x187|x188)));

	if (t37 != 126LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x193 = INT64_MIN;
	uint32_t x194 = UINT32_MAX;
	volatile int32_t x195 = -809;
	static int16_t x196 = -12;

	t38 = (x193^(x194*(x195|x196)));

	if (t38 != -9223372036854775799LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x199 = INT32_MIN;
	static volatile int16_t x200 = INT16_MIN;
	volatile uint64_t t39 = 0LLU;

	t39 = (x197^(x198*(x199|x200)));

	if (t39 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = -1;
	uint16_t x211 = 125U;
	static int16_t x212 = INT16_MIN;
	volatile int32_t t40 = 0;

	t40 = (x209^(x210*(x211|x212)));

	if (t40 != 32892) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x213 = 44245084U;
	uint32_t x216 = 819891U;
	volatile uint32_t t41 = 8U;

	t41 = (x213^(x214*(x215|x216)));

	if (t41 != 2102418705U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = 29;
	int8_t x220 = INT8_MIN;
	uint32_t t42 = 12287U;

	t42 = (x217^(x218*(x219|x220)));

	if (t42 != 4294966285U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MAX;
	int32_t x222 = INT32_MAX;
	int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MAX;
	int64_t t43 = 118994317LL;

	t43 = (x221^(x222*(x223|x224)));

	if (t43 != -2147483522LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x225 = INT16_MAX;
	static uint32_t x226 = UINT32_MAX;
	static uint16_t x227 = 21U;
	int16_t x228 = -1;
	uint32_t t44 = 442698U;

	t44 = (x225^(x226*(x227|x228)));

	if (t44 != 32766U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x234 = INT16_MIN;
	uint8_t x235 = 3U;
	static int16_t x236 = -60;
	int32_t t45 = 2465897;

	t45 = (x233^(x234*(x235|x236)));

	if (t45 != 1900543) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x242 = 60968105LLU;
	int32_t x243 = -1;
	int64_t x244 = INT64_MIN;
	static uint64_t t46 = 1519LLU;

	t46 = (x241^(x242*(x243|x244)));

	if (t46 != 18446744073644447947LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x245 = 1U;
	static int32_t x246 = INT32_MIN;
	volatile uint32_t x247 = 1004U;
	uint32_t x248 = 1969U;
	uint32_t t47 = 25U;

	t47 = (x245^(x246*(x247|x248)));

	if (t47 != 2147483649U) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x249 = INT64_MAX;
	static int32_t x250 = -533199;
	volatile int64_t x251 = -1LL;
	static int64_t t48 = 328246132LL;

	t48 = (x249^(x250*(x251|x252)));

	if (t48 != 9223372036854242608LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x254 = 104271014745LL;
	volatile int16_t x255 = -3;
	static uint16_t x256 = 1U;
	int64_t t49 = -1595027991140931048LL;

	t49 = (x253^(x254*(x255|x256)));

	if (t49 != 312813044298LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x257 = 0U;
	int8_t x258 = 4;
	int8_t x259 = INT8_MIN;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t50 = -242091;

	t50 = (x257^(x258*(x259|x260)));

	if (t50 != -4) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = 22;
	int64_t x266 = -1LL;
	static volatile uint8_t x267 = 27U;
	int64_t x268 = -1LL;
	volatile int64_t t51 = 544LL;

	t51 = (x265^(x266*(x267|x268)));

	if (t51 != 23LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x269 = 71601474U;
	volatile int8_t x270 = -1;
	volatile uint8_t x271 = UINT8_MAX;
	uint16_t x272 = UINT16_MAX;
	uint32_t t52 = 23740U;

	t52 = (x269^(x270*(x271|x272)));

	if (t52 != 4223372611U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = -1LL;
	int16_t x275 = -151;
	uint64_t x276 = 1284952LLU;
	volatile uint64_t t53 = 24558262LLU;

	t53 = (x273^(x274*(x275|x276)));

	if (t53 != 18446744073709518983LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x279 = 0;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t54 = 7LLU;

	t54 = (x277^(x278*(x279|x280)));

	if (t54 != 18446744073709518835LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x281 = UINT16_MAX;
	int8_t x283 = INT8_MIN;
	int8_t x284 = -10;
	int32_t t55 = 526477583;

	t55 = (x281^(x282*(x283|x284)));

	if (t55 != 65505) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x285 = 57U;
	uint8_t x287 = 60U;
	int32_t x288 = 487045759;
	volatile int32_t t56 = -6357801;

	t56 = (x285^(x286*(x287|x288)));

	if (t56 != 487045702) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t57 = 150002;

	t57 = (x289^(x290*(x291|x292)));

	if (t57 != -16385) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = INT16_MAX;
	uint16_t x295 = 18U;
	int64_t t58 = 219548606189752LL;

	t58 = (x293^(x294*(x295|x296)));

	if (t58 != -48354826441305LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x297 = -3642;
	int8_t x298 = INT8_MIN;
	static uint64_t x299 = 18LLU;
	uint8_t x300 = UINT8_MAX;
	volatile uint64_t t59 = 7251230LLU;

	t59 = (x297^(x298*(x299|x300)));

	if (t59 != 28998LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x305 = 0;
	static int8_t x306 = -42;
	int64_t x308 = 66451634028934LL;

	t60 = (x305^(x306*(x307|x308)));

	if (t60 != -2790968629220310LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x309 = 1390196686038885995LLU;
	int8_t x311 = -38;
	volatile uint64_t t61 = 31905491LLU;

	t61 = (x309^(x310*(x311|x312)));

	if (t61 != 1390196686038885994LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x313 = -4;
	volatile uint32_t x314 = 7U;
	int16_t x315 = -71;

	t62 = (x313^(x314*(x315|x316)));

	if (t62 != 51LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = INT32_MIN;
	uint8_t x320 = 13U;
	int32_t t63 = 1918613;

	t63 = (x317^(x318*(x319|x320)));

	if (t63 != 1205891200) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x321 = INT32_MAX;
	int8_t x322 = 1;
	uint32_t x323 = UINT32_MAX;
	uint64_t x324 = 392467177LLU;
	volatile uint64_t t64 = 64059LLU;

	t64 = (x321^(x322*(x323|x324)));

	if (t64 != 2147483648LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x325 = 1324483657LLU;
	int8_t x326 = -1;
	int16_t x327 = INT16_MIN;
	int8_t x328 = 0;
	volatile uint64_t t65 = 442013927LLU;

	t65 = (x325^(x326*(x327|x328)));

	if (t65 != 1324516425LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x329 = 1U;
	static volatile uint16_t x330 = UINT16_MAX;
	volatile int32_t x331 = 284044303;
	int8_t x332 = INT8_MIN;
	volatile int32_t t66 = -1;

	t66 = (x329^(x330*(x331|x332)));

	if (t66 != -7405456) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x337 = INT8_MIN;
	int8_t x340 = 30;
	volatile uint64_t t67 = 2114517552429292357LLU;

	t67 = (x337^(x338*(x339|x340)));

	if (t67 != 129328LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x345 = 190LL;
	uint8_t x346 = 34U;
	volatile int64_t t68 = -1LL;

	t68 = (x345^(x346*(x347|x348)));

	if (t68 != 4294967136LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x349 = -1;
	int8_t x350 = 0;
	uint16_t x351 = UINT16_MAX;
	int32_t t69 = -233974423;

	t69 = (x349^(x350*(x351|x352)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x362 = 6U;
	uint32_t x363 = 26U;

	t70 = (x361^(x362*(x363|x364)));

	if (t70 != 9847U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x365 = -1;
	uint16_t x367 = UINT16_MAX;
	uint16_t x368 = 2U;
	volatile int32_t t71 = 799;

	t71 = (x365^(x366*(x367|x368)));

	if (t71 != -17891056) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint16_t x369 = 13U;
	int16_t x370 = -268;
	uint32_t x371 = 7231U;
	uint32_t x372 = 74439741U;
	volatile uint32_t t72 = 4U;

	t72 = (x369^(x370*(x371|x372)));

	if (t72 != 1524985345U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x373 = 803421U;
	int8_t x375 = -1;
	int8_t x376 = INT8_MIN;
	uint32_t t73 = 249891U;

	t73 = (x373^(x374*(x375|x376)));

	if (t73 != 836189U) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x379 = INT64_MIN;
	volatile int64_t t74 = 3607923776LL;

	t74 = (x377^(x378*(x379|x380)));

	if (t74 != 9223372036854774271LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = 379;
	uint64_t x386 = UINT64_MAX;
	int16_t x387 = -1;

	t75 = (x385^(x386*(x387|x388)));

	if (t75 != 378LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x390 = INT16_MIN;
	int8_t x391 = INT8_MIN;
	static uint8_t x392 = UINT8_MAX;
	int32_t t76 = 2;

	t76 = (x389^(x390*(x391|x392)));

	if (t76 != -65536) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x393 = 17744837505225120LLU;
	uint16_t x394 = 177U;
	int32_t x396 = -1;
	volatile uint64_t t77 = 7195931235869050584LLU;

	t77 = (x393^(x394*(x395|x396)));

	if (t77 != 18428999236204326639LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x397 = 124U;
	volatile uint8_t x398 = 1U;
	uint64_t x399 = 12793LLU;
	int8_t x400 = INT8_MIN;
	uint64_t t78 = 1067LLU;

	t78 = (x397^(x398*(x399|x400)));

	if (t78 != 18446744073709551493LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x401 = INT32_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	uint32_t x404 = UINT32_MAX;

	t79 = (x401^(x402*(x403|x404)));

	if (t79 != 2147483902U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x405 = -1;
	int64_t x406 = 24129943869LL;
	static volatile int16_t x407 = INT16_MIN;
	int8_t x408 = -1;

	t80 = (x405^(x406*(x407|x408)));

	if (t80 != 24129943868LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = INT64_MAX;
	volatile int32_t x411 = -218688;
	uint64_t x412 = 1684851378957497882LLU;

	t81 = (x409^(x410*(x411|x412)));

	if (t81 != 9223372034169176063LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x417 = -1LL;
	int32_t x419 = -1;
	int16_t x420 = INT16_MIN;
	volatile int64_t t82 = 5236750163971LL;

	t82 = (x417^(x418*(x419|x420)));

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = -4602;
	uint8_t x422 = 3U;
	static int64_t x423 = INT64_MIN;
	int32_t x424 = -1;
	volatile int64_t t83 = 105LL;

	t83 = (x421^(x422*(x423|x424)));

	if (t83 != 4603LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x429 = INT16_MIN;
	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MIN;

	t84 = (x429^(x430*(x431|x432)));

	if (t84 != -466769880481792LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x433 = UINT16_MAX;
	static int64_t x435 = INT64_MAX;
	volatile int16_t x436 = INT16_MIN;
	int64_t t85 = 82456528779141504LL;

	t85 = (x433^(x434*(x435|x436)));

	if (t85 != 2147549183LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x437 = INT8_MIN;
	int32_t x438 = INT32_MIN;
	int32_t x439 = INT32_MAX;
	uint32_t x440 = 92846356U;
	uint32_t t86 = 85758503U;

	t86 = (x437^(x438*(x439|x440)));

	if (t86 != 2147483520U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x441 = 6U;
	static int16_t x442 = -1;
	int64_t x443 = INT64_MIN;
	volatile int16_t x444 = INT16_MIN;
	volatile int64_t t87 = 3215148583623964LL;

	t87 = (x441^(x442*(x443|x444)));

	if (t87 != 32774LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x445 = INT64_MIN;
	volatile int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	int32_t x448 = 19839446;
	int64_t t88 = -4401405795084574LL;

	t88 = (x445^(x446*(x447|x448)));

	if (t88 != -9223372034727131606LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x449 = INT64_MIN;
	static uint32_t x450 = UINT32_MAX;
	volatile uint8_t x451 = 85U;
	int8_t x452 = -1;
	static volatile int64_t t89 = -293LL;

	t89 = (x449^(x450*(x451|x452)));

	if (t89 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x453 = INT16_MIN;
	int64_t x455 = INT64_MIN;
	uint16_t x456 = UINT16_MAX;
	int64_t t90 = 459126661795LL;

	t90 = (x453^(x454*(x455|x456)));

	if (t90 != -9223372036854743039LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x457 = 768LL;
	uint32_t x458 = UINT32_MAX;
	int32_t x459 = INT32_MAX;
	volatile int64_t x460 = -1LL;
	int64_t t91 = -345035LL;

	t91 = (x457^(x458*(x459|x460)));

	if (t91 != -4294966527LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x462 = -1;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = 15;
	uint64_t t92 = 31328LLU;

	t92 = (x461^(x462*(x463|x464)));

	if (t92 != 31LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x465 = -24;
	static uint16_t x466 = 8763U;
	int16_t x467 = 1;
	volatile uint8_t x468 = 22U;
	volatile int32_t t93 = 9761;

	t93 = (x465^(x466*(x467|x468)));

	if (t93 != -201563) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x469 = 31156U;
	static int32_t x470 = INT32_MIN;
	int16_t x471 = INT16_MIN;
	int64_t x472 = INT64_MAX;
	volatile int64_t t94 = 126774LL;

	t94 = (x469^(x470*(x471|x472)));

	if (t94 != 2147514804LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x473 = INT8_MIN;
	volatile int8_t x476 = 6;
	volatile int32_t t95 = 1006;

	t95 = (x473^(x474*(x475|x476)));

	if (t95 != 115) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x477 = 203;
	int16_t x478 = INT16_MAX;
	int16_t x479 = 4713;
	int8_t x480 = INT8_MIN;
	static volatile int32_t t96 = -198;

	t96 = (x477^(x478*(x479|x480)));

	if (t96 != -753444) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x493 = INT32_MIN;
	int16_t x494 = -1;
	int32_t x495 = INT32_MAX;
	int64_t x496 = INT64_MAX;
	int64_t t97 = -703104789572157LL;

	t97 = (x493^(x494*(x495|x496)));

	if (t97 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x497 = INT64_MAX;
	int8_t x498 = INT8_MAX;
	uint32_t x499 = UINT32_MAX;
	int16_t x500 = INT16_MIN;
	volatile int64_t t98 = 63966851LL;

	t98 = (x497^(x498*(x499|x500)));

	if (t98 != 9223372032559808638LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x501 = INT64_MIN;
	volatile int32_t x503 = -1;
	volatile uint8_t x504 = UINT8_MAX;

	t99 = (x501^(x502*(x503|x504)));

	if (t99 != -9223372036854775802LL) { NG(); } else { ; }
	
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

