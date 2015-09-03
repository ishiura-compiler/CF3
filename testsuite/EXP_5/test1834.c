#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x2 = 2;
static uint64_t x8 = 0LLU;
int8_t x10 = 13;
uint8_t x13 = 19U;
int8_t x21 = -1;
static int32_t x26 = INT32_MIN;
int64_t x30 = 22LL;
int16_t x35 = -1;
uint32_t t9 = 0U;
int16_t x45 = 8833;
uint64_t x46 = 34363510965979605LLU;
uint64_t t11 = 6734493890672966824LLU;
int32_t x49 = -1;
int8_t x51 = 1;
static int32_t t12 = 4102;
int8_t x53 = INT8_MIN;
volatile int64_t t13 = -9356028303LL;
int64_t x58 = -7903408LL;
static int64_t x61 = 20287LL;
static int64_t x65 = -12833670047222LL;
static uint64_t x67 = 26LLU;
uint64_t t20 = 3598824989LLU;
static int8_t x86 = INT8_MAX;
volatile int16_t x95 = INT16_MIN;
uint64_t x105 = 1599LLU;
uint16_t x108 = 10U;
uint64_t t25 = 35128629226728895LLU;
int32_t x120 = -123720217;
int32_t x131 = 3090088;
static volatile uint32_t x132 = 5408190U;
uint64_t x138 = UINT64_MAX;
static uint64_t t31 = 8733816217209LLU;
volatile uint8_t x141 = 20U;
int16_t x143 = -1;
int8_t x144 = INT8_MIN;
volatile int64_t x154 = INT64_MIN;
uint32_t x158 = UINT32_MAX;
int64_t x160 = -1LL;
int64_t x164 = -1LL;
volatile int64_t t41 = -3LL;
int32_t x182 = 153;
int16_t x189 = -468;
int32_t x191 = 1247;
static int8_t x192 = -7;
volatile uint32_t t43 = 9330907U;
static int32_t x198 = INT32_MAX;
uint64_t x199 = 1985171LLU;
int16_t x202 = INT16_MAX;
int16_t x205 = 0;
static int8_t x206 = 55;
volatile int8_t x207 = INT8_MIN;
int8_t x210 = -1;
static int64_t x211 = INT64_MIN;
static int64_t x215 = -1LL;
volatile uint8_t x216 = 2U;
uint64_t t49 = 506108970501061LLU;
static int16_t x218 = INT16_MAX;
volatile int32_t x227 = INT32_MIN;
uint32_t t53 = 168300U;
int16_t x234 = INT16_MAX;
volatile int64_t t55 = 49095061LL;
uint32_t x244 = UINT32_MAX;
volatile int64_t t56 = -554684914777LL;
volatile int64_t x247 = -1LL;
volatile int64_t x252 = INT64_MAX;
int32_t x257 = INT32_MIN;
int64_t x258 = INT64_MIN;
int8_t x261 = INT8_MIN;
int8_t x269 = -1;
uint32_t x271 = UINT32_MAX;
int16_t x285 = INT16_MAX;
volatile int8_t x286 = -1;
uint16_t x288 = 324U;
int64_t x294 = INT64_MIN;
volatile int64_t t66 = 923647351460889148LL;
volatile int16_t x298 = -13;
static uint16_t x304 = 6259U;
uint16_t x307 = UINT16_MAX;
int32_t x308 = INT32_MIN;
int32_t t69 = 4;
int8_t x313 = INT8_MIN;
int64_t x315 = -1LL;
uint32_t x321 = 30433738U;
int64_t x327 = INT64_MIN;
int16_t x329 = INT16_MIN;
int16_t x331 = INT16_MAX;
volatile int32_t t75 = 351063;
volatile uint32_t x335 = UINT32_MAX;
int16_t x341 = INT16_MIN;
volatile int64_t x351 = INT64_MIN;
uint8_t x356 = 2U;
static int32_t x357 = 882;
uint32_t x358 = 1395646049U;
volatile uint64_t x360 = 237629973827484LLU;
volatile int64_t t83 = -96200665399379LL;
volatile uint16_t x372 = 168U;
int16_t x374 = -1;
static volatile int8_t x384 = INT8_MAX;
int32_t x388 = INT32_MIN;
int8_t x395 = INT8_MIN;
static volatile int8_t x399 = 5;
int8_t x402 = INT8_MIN;
static volatile uint16_t x410 = UINT16_MAX;
int8_t x418 = INT8_MIN;
uint32_t x419 = 95859U;
uint64_t x421 = UINT64_MAX;
uint64_t x423 = UINT64_MAX;
int64_t t99 = -3LL;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static volatile int16_t x3 = INT16_MAX;
	static uint32_t x4 = 265191521U;
	uint32_t t0 = 22U;

	t0 = (x1+((x2&x3)|x4));

	if (t0 != 2412675170U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int16_t x6 = 6;
	uint64_t x7 = 2230821928620598542LLU;
	volatile uint64_t t1 = 90LLU;

	t1 = (x5+((x6&x7)|x8));

	if (t1 != 5LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x11 = 29;
	volatile uint16_t x12 = UINT16_MAX;
	static int32_t t2 = 2186;

	t2 = (x9+((x10&x11)|x12));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 3645819338LLU;
	static int16_t x15 = INT16_MIN;
	uint8_t x16 = UINT8_MAX;
	static uint64_t t3 = 7211004501LLU;

	t3 = (x13+((x14&x15)|x16));

	if (t3 != 3645800722LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	uint32_t x18 = UINT32_MAX;
	int32_t x19 = INT32_MIN;
	static volatile int32_t x20 = INT32_MIN;
	volatile int64_t t4 = 1050394480349941LL;

	t4 = (x17+((x18&x19)|x20));

	if (t4 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x22 = INT16_MIN;
	int8_t x23 = INT8_MIN;
	uint8_t x24 = UINT8_MAX;
	int32_t t5 = -12;

	t5 = (x21+((x22&x23)|x24));

	if (t5 != -32514) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint8_t x27 = 107U;
	uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 1443721963280LLU;

	t6 = (x25+((x26&x27)|x28));

	if (t6 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 0;
	volatile int8_t x31 = 0;
	static uint32_t x32 = 1318574943U;
	volatile int64_t t7 = 16437722988650LL;

	t7 = (x29+((x30&x31)|x32));

	if (t7 != 1318574943LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = -1;
	int8_t x36 = -1;
	int32_t t8 = -242;

	t8 = (x33+((x34&x35)|x36));

	if (t8 != -129) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = 292U;
	int32_t x39 = -56;
	static volatile uint32_t x40 = UINT32_MAX;

	t9 = (x37+((x38&x39)|x40));

	if (t9 != 4294967167U) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = 0;
	int64_t x42 = -61LL;
	volatile int16_t x43 = INT16_MIN;
	volatile uint8_t x44 = UINT8_MAX;
	volatile int64_t t10 = 65084069LL;

	t10 = (x41+((x42&x43)|x44));

	if (t10 != -32513LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x47 = INT64_MIN;
	uint64_t x48 = 661785012637806882LLU;

	t11 = (x45+((x46&x47)|x48));

	if (t11 != 661785012637815715LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int16_t x50 = 511;
	uint8_t x52 = UINT8_MAX;

	t12 = (x49+((x50&x51)|x52));

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = INT16_MIN;
	volatile int16_t x55 = -1;
	static int64_t x56 = 78169867418009LL;

	t13 = (x53+((x54&x55)|x56));

	if (t13 != -1767LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 30U;
	int32_t x59 = -1;
	volatile int32_t x60 = -1;
	int64_t t14 = 728402795LL;

	t14 = (x57+((x58&x59)|x60));

	if (t14 != 29LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = 1482485;
	int16_t x63 = INT16_MAX;
	int8_t x64 = INT8_MAX;
	volatile int64_t t15 = -15575202LL;

	t15 = (x61+((x62&x63)|x64));

	if (t15 != 28222LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x66 = INT16_MIN;
	volatile int64_t x68 = INT64_MAX;
	volatile uint64_t t16 = 172025157099486LLU;

	t16 = (x65+((x66&x67)|x68));

	if (t16 != 9223359203184728585LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	uint8_t x70 = 2U;
	int16_t x71 = INT16_MIN;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t17 = 4424;

	t17 = (x69+((x70&x71)|x72));

	if (t17 != -2147483521) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int16_t x74 = INT16_MAX;
	int64_t x75 = -71058269069705962LL;
	int16_t x76 = 210;
	int64_t t18 = -1673098250LL;

	t18 = (x73+((x74&x75)|x76));

	if (t18 != 32086LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = UINT64_MAX;
	uint64_t x78 = UINT64_MAX;
	int16_t x79 = INT16_MIN;
	uint32_t x80 = 1393104U;
	volatile uint64_t t19 = 1584724927LLU;

	t19 = (x77+((x78&x79)|x80));

	if (t19 != 18446744073709535695LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 11LLU;
	volatile uint32_t x82 = 7500740U;
	int32_t x83 = 12772;
	int64_t x84 = INT64_MAX;

	t20 = (x81+((x82&x83)|x84));

	if (t20 != 9223372036854775818LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	volatile uint32_t x87 = 168688725U;
	int8_t x88 = -1;
	int64_t t21 = 55LL;

	t21 = (x85+((x86&x87)|x88));

	if (t21 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	uint16_t x90 = 66U;
	uint8_t x91 = 16U;
	int32_t x92 = -1;
	static uint32_t t22 = 6U;

	t22 = (x89+((x90&x91)|x92));

	if (t22 != 4294967294U) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x93 = INT32_MAX;
	uint32_t x94 = 21355664U;
	static volatile int32_t x96 = -1;
	volatile uint32_t t23 = 255890U;

	t23 = (x93+((x94&x95)|x96));

	if (t23 != 2147483646U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 274U;
	volatile int32_t x102 = 23;
	static int64_t x103 = INT64_MIN;
	int16_t x104 = INT16_MIN;
	int64_t t24 = -10316591370405LL;

	t24 = (x101+((x102&x103)|x104));

	if (t24 != -32494LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x106 = 0U;
	static int8_t x107 = -14;

	t25 = (x105+((x106&x107)|x108));

	if (t25 != 1609LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	volatile int16_t x110 = INT16_MAX;
	int16_t x111 = 16187;
	static uint8_t x112 = 0U;
	volatile int64_t t26 = 83LL;

	t26 = (x109+((x110&x111)|x112));

	if (t26 != -9223372036854759621LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	uint64_t x118 = 1037303632525821171LLU;
	static volatile int64_t x119 = INT64_MIN;
	volatile uint64_t t27 = 3LLU;

	t27 = (x117+((x118&x119)|x120));

	if (t27 != 18446744073585896934LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x121 = INT32_MIN;
	static int8_t x122 = INT8_MIN;
	int64_t x123 = -1LL;
	uint8_t x124 = 1U;
	static int64_t t28 = -1376913LL;

	t28 = (x121+((x122&x123)|x124));

	if (t28 != -2147483775LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MIN;
	int16_t x130 = -1;
	uint32_t t29 = 1242U;

	t29 = (x129+((x130&x131)|x132));

	if (t29 != 2155849662U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = INT16_MIN;
	volatile int8_t x135 = 1;
	static volatile int16_t x136 = INT16_MIN;
	int32_t t30 = 13101382;

	t30 = (x133+((x134&x135)|x136));

	if (t30 != -32896) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = 24;
	static volatile uint8_t x139 = 25U;
	int16_t x140 = -1;

	t31 = (x137+((x138&x139)|x140));

	if (t31 != 23LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x142 = INT32_MAX;
	volatile int32_t t32 = -7410;

	t32 = (x141+((x142&x143)|x144));

	if (t32 != 19) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x145 = 525U;
	int8_t x146 = 30;
	int32_t x147 = -31141;
	static int64_t x148 = -42434157687LL;
	static int64_t t33 = 680307LL;

	t33 = (x145+((x146&x147)|x148));

	if (t33 != -42434157144LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -1;
	static uint32_t x150 = 1U;
	uint16_t x151 = 1244U;
	int8_t x152 = INT8_MIN;
	volatile uint32_t t34 = 299972U;

	t34 = (x149+((x150&x151)|x152));

	if (t34 != 4294967167U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x153 = 88659060343315101LLU;
	volatile int8_t x155 = 12;
	static int64_t x156 = -81322LL;
	uint64_t t35 = 125706814414090LLU;

	t35 = (x153+((x154&x155)|x156));

	if (t35 != 88659060343233779LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x157 = -2;
	static int64_t x159 = INT64_MIN;
	static int64_t t36 = -10LL;

	t36 = (x157+((x158&x159)|x160));

	if (t36 != -3LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = 14;
	volatile int64_t x162 = -5522498632681700LL;
	static uint64_t x163 = 226491670LLU;
	uint64_t t37 = 808LLU;

	t37 = (x161+((x162&x163)|x164));

	if (t37 != 13LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = INT8_MIN;
	int16_t x167 = INT16_MAX;
	static int16_t x168 = -14445;
	volatile int64_t t38 = -15LL;

	t38 = (x165+((x166&x167)|x168));

	if (t38 != 9223372036854775698LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MAX;
	volatile uint32_t x171 = 3536344U;
	int32_t x172 = -37457;
	uint32_t t39 = 244315U;

	t39 = (x169+((x170&x171)|x172));

	if (t39 != 2147446270U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x173 = INT32_MAX;
	static uint64_t x174 = UINT64_MAX;
	volatile int64_t x175 = INT64_MIN;
	static int32_t x176 = 116909;
	uint64_t t40 = 15995391331LLU;

	t40 = (x173+((x174&x175)|x176));

	if (t40 != 9223372039002376364LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = 442327631433LL;
	int64_t x178 = 8006LL;
	int16_t x179 = INT16_MIN;
	static uint8_t x180 = 1U;

	t41 = (x177+((x178&x179)|x180));

	if (t41 != 442327631434LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x181 = INT64_MIN;
	static int16_t x183 = INT16_MAX;
	uint64_t x184 = 11169658025LLU;
	uint64_t t42 = 244210627LLU;

	t42 = (x181+((x182&x183)|x184));

	if (t42 != 9223372048024433849LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x190 = 46623U;

	t43 = (x189+((x190&x191)|x192));

	if (t43 != 4294966827U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x193 = -1LL;
	uint8_t x194 = 4U;
	int64_t x195 = INT64_MIN;
	int64_t x196 = -12035564662993LL;
	int64_t t44 = 133LL;

	t44 = (x193+((x194&x195)|x196));

	if (t44 != -12035564662994LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x197 = 246623080U;
	volatile int64_t x200 = -61323632878185518LL;
	uint64_t t45 = 3657284088635733167LLU;

	t45 = (x197+((x198&x199)|x200));

	if (t45 != 18385420441078662971LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	static int16_t x203 = INT16_MAX;
	int16_t x204 = 869;
	int32_t t46 = 3292;

	t46 = (x201+((x202&x203)|x204));

	if (t46 != -2147450881) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x208 = 3843U;
	static uint32_t t47 = 5U;

	t47 = (x205+((x206&x207)|x208));

	if (t47 != 3843U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 2U;
	int8_t x212 = INT8_MIN;
	static int64_t t48 = -599268555987876628LL;

	t48 = (x209+((x210&x211)|x212));

	if (t48 != -126LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x213 = 11041077716155137LLU;
	static int16_t x214 = INT16_MAX;

	t49 = (x213+((x214&x215)|x216));

	if (t49 != 11041077716187904LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	volatile uint64_t x220 = UINT64_MAX;
	static uint64_t t50 = 107LLU;

	t50 = (x217+((x218&x219)|x220));

	if (t50 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 400U;
	int64_t x222 = 962356LL;
	int32_t x223 = INT32_MIN;
	uint8_t x224 = 17U;
	static int64_t t51 = 287773LL;

	t51 = (x221+((x222&x223)|x224));

	if (t51 != 417LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = -1;
	uint32_t x226 = 31U;
	int32_t x228 = -391984;
	uint32_t t52 = 203U;

	t52 = (x225+((x226&x227)|x228));

	if (t52 != 4294575311U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = INT8_MAX;
	int8_t x230 = -1;
	int8_t x231 = INT8_MIN;
	uint32_t x232 = UINT32_MAX;

	t53 = (x229+((x230&x231)|x232));

	if (t53 != 126U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = 31U;
	uint8_t x235 = UINT8_MAX;
	volatile uint64_t x236 = UINT64_MAX;
	uint64_t t54 = 265768022800LLU;

	t54 = (x233+((x234&x235)|x236));

	if (t54 != 30LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x237 = 124U;
	static int64_t x238 = INT64_MAX;
	int32_t x239 = -457;
	volatile uint8_t x240 = UINT8_MAX;

	t55 = (x237+((x238&x239)|x240));

	if (t55 != 9223372036854775675LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = -292591420;
	int16_t x242 = 947;
	static int64_t x243 = -28142169LL;

	t56 = (x241+((x242&x243)|x244));

	if (t56 != 4002375875LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x245 = INT32_MAX;
	volatile uint8_t x246 = 6U;
	uint64_t x248 = 1279420802734410LLU;
	uint64_t t57 = 59726535337147589LLU;

	t57 = (x245+((x246&x247)|x248));

	if (t57 != 1279422950218061LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = INT32_MIN;
	int64_t x250 = INT64_MAX;
	int32_t x251 = INT32_MIN;
	static volatile int64_t t58 = -1612227804626434LL;

	t58 = (x249+((x250&x251)|x252));

	if (t58 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x259 = 3413085681928931071LL;
	uint64_t x260 = UINT64_MAX;
	static uint64_t t59 = 8101LLU;

	t59 = (x257+((x258&x259)|x260));

	if (t59 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x262 = INT32_MIN;
	int64_t x263 = INT64_MAX;
	int16_t x264 = INT16_MIN;
	int64_t t60 = -44521324348LL;

	t60 = (x261+((x262&x263)|x264));

	if (t60 != -32896LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x265 = -1;
	volatile int64_t x266 = INT64_MIN;
	volatile uint16_t x267 = UINT16_MAX;
	int64_t x268 = -1LL;
	int64_t t61 = 24664LL;

	t61 = (x265+((x266&x267)|x268));

	if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x270 = 3U;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t62 = 401743784LLU;

	t62 = (x269+((x270&x271)|x272));

	if (t62 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	volatile int64_t x282 = -1LL;
	volatile uint16_t x283 = 12U;
	volatile uint8_t x284 = 1U;
	int64_t t63 = -22174898493LL;

	t63 = (x281+((x282&x283)|x284));

	if (t63 != -2147483635LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x287 = -1;
	static volatile int32_t t64 = -304249705;

	t64 = (x285+((x286&x287)|x288));

	if (t64 != 32766) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = INT8_MIN;
	volatile int32_t x290 = INT32_MIN;
	static uint64_t x291 = 254911573863LLU;
	volatile int32_t x292 = 376;
	volatile uint64_t t65 = 29402507966LLU;

	t65 = (x289+((x290&x291)|x292));

	if (t65 != 253403070712LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x293 = 134;
	int8_t x295 = -42;
	int64_t x296 = INT64_MAX;

	t66 = (x293+((x294&x295)|x296));

	if (t66 != 133LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x297 = 385U;
	uint64_t x299 = UINT64_MAX;
	volatile int32_t x300 = -1;
	uint64_t t67 = 232538478617LLU;

	t67 = (x297+((x298&x299)|x300));

	if (t67 != 384LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x301 = INT8_MIN;
	static volatile int16_t x302 = -3341;
	int8_t x303 = INT8_MIN;
	static int32_t t68 = 2357;

	t68 = (x301+((x302&x303)|x304));

	if (t68 != -1421) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = 0;
	int8_t x306 = 14;

	t69 = (x305+((x306&x307)|x308));

	if (t69 != -2147483634) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = INT64_MAX;
	int8_t x310 = -1;
	uint16_t x311 = 10U;
	static volatile uint64_t x312 = 3404383982LLU;
	static uint64_t t70 = 1LLU;

	t70 = (x309+((x310&x311)|x312));

	if (t70 != 9223372040259159789LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x314 = -1;
	int16_t x316 = INT16_MIN;
	int64_t t71 = -7044030101351683LL;

	t71 = (x313+((x314&x315)|x316));

	if (t71 != -129LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x317 = INT8_MAX;
	int32_t x318 = INT32_MIN;
	volatile uint64_t x319 = 519LLU;
	uint32_t x320 = 74403721U;
	uint64_t t72 = 137128983944225855LLU;

	t72 = (x317+((x318&x319)|x320));

	if (t72 != 74403848LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x322 = 11;
	int8_t x323 = -7;
	uint64_t x324 = UINT64_MAX;
	volatile uint64_t t73 = 46LLU;

	t73 = (x321+((x322&x323)|x324));

	if (t73 != 30433737LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 0;
	static uint16_t x328 = 490U;
	int64_t t74 = -175481957442LL;

	t74 = (x325+((x326&x327)|x328));

	if (t74 != 362LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x330 = -14;
	static int16_t x332 = INT16_MIN;

	t75 = (x329+((x330&x331)|x332));

	if (t75 != -32782) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = 66521420U;
	int64_t x336 = INT64_MAX;
	volatile int64_t t76 = 2009LL;

	t76 = (x333+((x334&x335)|x336));

	if (t76 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x337 = 17385U;
	uint32_t x338 = 6155836U;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = INT8_MIN;
	volatile uint32_t t77 = 2U;

	t77 = (x337+((x338&x339)|x340));

	if (t77 != 17317U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x342 = -20304;
	static int64_t x343 = -117570173LL;
	static uint8_t x344 = UINT8_MAX;
	static volatile int64_t t78 = 1299374086LL;

	t78 = (x341+((x342&x343)|x344));

	if (t78 != -117604097LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x345 = INT8_MIN;
	uint64_t x346 = 3684LLU;
	volatile uint32_t x347 = 26892272U;
	volatile int32_t x348 = -1;
	static uint64_t t79 = 16133749751731LLU;

	t79 = (x345+((x346&x347)|x348));

	if (t79 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x349 = INT32_MIN;
	uint8_t x350 = UINT8_MAX;
	static int8_t x352 = INT8_MIN;
	static volatile int64_t t80 = 130303953LL;

	t80 = (x349+((x350&x351)|x352));

	if (t80 != -2147483776LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	volatile int8_t x355 = 54;
	volatile int32_t t81 = 1142823;

	t81 = (x353+((x354&x355)|x356));

	if (t81 != -32766) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x359 = -1;
	volatile uint64_t t82 = 3LLU;

	t82 = (x357+((x358&x359)|x360));

	if (t82 != 237631332934511LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x361 = 10968951;
	int64_t x362 = -1LL;
	int64_t x363 = -204591845319046LL;
	int32_t x364 = INT32_MIN;

	t83 = (x361+((x362&x363)|x364));

	if (t83 != -1067205135LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x365 = UINT16_MAX;
	static volatile uint64_t x366 = UINT64_MAX;
	int8_t x367 = -1;
	static uint8_t x368 = 37U;
	uint64_t t84 = 258816721404746LLU;

	t84 = (x365+((x366&x367)|x368));

	if (t84 != 65534LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = -1;
	int32_t x370 = -1192525;
	int32_t x371 = -3;
	int32_t t85 = -121535;

	t85 = (x369+((x370&x371)|x372));

	if (t85 != -1192520) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x373 = UINT32_MAX;
	int16_t x375 = -1;
	int64_t x376 = 24409LL;
	volatile int64_t t86 = -98944LL;

	t86 = (x373+((x374&x375)|x376));

	if (t86 != 4294967294LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = -1;
	int16_t x378 = -1;
	uint8_t x379 = 84U;
	static int32_t x380 = INT32_MIN;
	volatile int32_t t87 = -15386;

	t87 = (x377+((x378&x379)|x380));

	if (t87 != -2147483565) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x381 = INT64_MIN;
	uint64_t x382 = 2LLU;
	static volatile uint16_t x383 = 25356U;
	uint64_t t88 = 10LLU;

	t88 = (x381+((x382&x383)|x384));

	if (t88 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = 42;
	static int32_t x387 = INT32_MIN;
	volatile uint32_t t89 = 10U;

	t89 = (x385+((x386&x387)|x388));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x393 = INT16_MIN;
	int32_t x394 = 1345095;
	static volatile int32_t x396 = -1;
	int32_t t90 = -3355588;

	t90 = (x393+((x394&x395)|x396));

	if (t90 != -32769) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x397 = -1LL;
	uint32_t x398 = UINT32_MAX;
	uint64_t x400 = 1562487607LLU;
	volatile uint64_t t91 = 2870495372616LLU;

	t91 = (x397+((x398&x399)|x400));

	if (t91 != 1562487606LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x401 = INT8_MAX;
	int16_t x403 = -1;
	int64_t x404 = -1LL;
	int64_t t92 = 17460859816781558LL;

	t92 = (x401+((x402&x403)|x404));

	if (t92 != 126LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x405 = INT8_MIN;
	static int8_t x406 = INT8_MAX;
	volatile uint64_t x407 = UINT64_MAX;
	uint64_t x408 = 4993LLU;
	static volatile uint64_t t93 = 869635LLU;

	t93 = (x405+((x406&x407)|x408));

	if (t93 != 4991LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	static volatile uint64_t x411 = 380286861LLU;
	uint16_t x412 = 4106U;
	volatile uint64_t t94 = 41451420714620LLU;

	t94 = (x409+((x410&x411)|x412));

	if (t94 != 9223372036854822799LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	int16_t x414 = INT16_MAX;
	int8_t x415 = INT8_MIN;
	static uint16_t x416 = 7714U;
	static volatile int32_t t95 = 1;

	t95 = (x413+((x414&x415)|x416));

	if (t95 != -94) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = 9521846429354LL;
	int16_t x420 = -78;
	int64_t t96 = -3592163526LL;

	t96 = (x417+((x418&x419)|x420));

	if (t96 != 9526141396572LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x422 = -1;
	int64_t x424 = INT64_MAX;
	static uint64_t t97 = 775267660320003LLU;

	t97 = (x421+((x422&x423)|x424));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint32_t x425 = UINT32_MAX;
	int16_t x426 = -1;
	volatile uint8_t x427 = 9U;
	int32_t x428 = 62774;
	volatile uint32_t t98 = 328700354U;

	t98 = (x425+((x426&x427)|x428));

	if (t98 != 62782U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x429 = -21;
	int64_t x430 = -1LL;
	int32_t x431 = INT32_MIN;
	int32_t x432 = -213859;

	t99 = (x429+((x430&x431)|x432));

	if (t99 != -213880LL) { NG(); } else { ; }
	
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

