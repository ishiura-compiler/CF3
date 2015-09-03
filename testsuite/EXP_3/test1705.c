#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x14 = UINT8_MAX;
uint64_t x17 = 42739887926LLU;
volatile uint64_t x19 = UINT64_MAX;
int16_t x21 = -7;
int32_t t3 = -1;
static volatile int8_t x25 = 0;
uint64_t x27 = 6497723852594609971LLU;
static int16_t x29 = INT16_MAX;
volatile uint32_t t5 = 2993738U;
volatile uint32_t t7 = 1682954U;
int64_t x45 = -1LL;
int64_t x47 = -1LL;
volatile int64_t x51 = -1LL;
int64_t x52 = -1LL;
int32_t t12 = -1070340987;
static uint64_t x76 = UINT64_MAX;
static volatile uint64_t t13 = 215035009310LLU;
int32_t x78 = -1;
uint8_t x82 = 47U;
int64_t x87 = -11LL;
volatile uint32_t x92 = UINT32_MAX;
int32_t x102 = INT32_MIN;
uint16_t x103 = UINT16_MAX;
volatile int64_t t19 = 5518842230LL;
uint64_t x109 = 1234868LLU;
volatile int16_t x110 = INT16_MAX;
volatile int32_t x115 = INT32_MIN;
volatile int64_t t22 = -280006443LL;
int64_t x120 = -4251136985866092LL;
volatile uint32_t x121 = 9U;
volatile uint32_t t24 = 5742482U;
int32_t x131 = INT32_MAX;
int32_t x134 = INT32_MIN;
volatile int16_t x141 = INT16_MAX;
uint32_t x142 = 2023U;
int8_t x145 = INT8_MIN;
uint32_t x150 = 229471267U;
static volatile uint64_t t30 = 218656219146LLU;
int64_t x163 = 1934373LL;
volatile int16_t x167 = INT16_MAX;
static uint32_t x180 = 166525288U;
int32_t x182 = INT32_MIN;
int64_t x186 = 1568390395278LL;
static int8_t x187 = INT8_MIN;
int16_t x188 = 1;
uint32_t x204 = 870U;
volatile int64_t t39 = 222574401044384LL;
int16_t x205 = -1;
volatile int64_t x208 = -1LL;
int32_t x211 = -1;
int32_t x212 = -1;
volatile uint32_t t42 = 1687295964U;
int64_t x217 = -1LL;
static int64_t x222 = 2204589288731694LL;
int64_t x232 = INT64_MIN;
static volatile uint32_t x238 = 265384565U;
volatile uint16_t x246 = 0U;
int16_t x256 = INT16_MIN;
int32_t t49 = -26;
uint32_t x273 = 239U;
int64_t x277 = INT64_MAX;
uint64_t t53 = 7279606706LLU;
int64_t x281 = -1006529LL;
int8_t x282 = -1;
int64_t x291 = INT64_MIN;
volatile int32_t x296 = -7312;
uint32_t x301 = UINT32_MAX;
volatile int64_t x303 = INT64_MIN;
uint64_t x308 = 997167702058581222LLU;
volatile int64_t t61 = 0LL;
int32_t x315 = -1;
int64_t t62 = -26022LL;
int8_t x319 = 1;
uint32_t x332 = 915484723U;
uint32_t x335 = 2022081331U;
uint64_t x344 = UINT64_MAX;
uint32_t x348 = UINT32_MAX;
static int32_t x352 = 3032998;
static volatile uint32_t t69 = 205372U;
int32_t x364 = -15667;
volatile uint64_t t72 = 0LLU;
int64_t x370 = -1LL;
int16_t x375 = -306;
volatile int64_t x378 = -1LL;
int64_t x384 = -1LL;
volatile uint32_t x385 = 11331U;
static uint16_t x390 = 87U;
static uint64_t x397 = 414LLU;
int32_t x399 = INT32_MIN;
volatile int32_t x414 = INT32_MIN;
int16_t x419 = 12508;
int64_t x424 = INT64_MIN;
static int32_t x426 = INT32_MAX;
static int32_t x427 = INT32_MIN;
uint32_t t85 = 414708410U;
int16_t x431 = INT16_MIN;
int16_t x432 = INT16_MAX;
int16_t x433 = INT16_MIN;
static volatile uint32_t x434 = UINT32_MAX;
static uint32_t t87 = 5U;
int8_t x437 = INT8_MIN;
int32_t x439 = -1;
uint64_t x444 = 51644LLU;
int32_t x445 = INT32_MIN;
uint64_t x457 = UINT64_MAX;
static int8_t x460 = INT8_MIN;
volatile int64_t x462 = INT64_MAX;
int16_t x465 = INT16_MAX;
static int16_t x467 = 93;
static volatile int32_t t96 = -9;
int32_t x473 = -1;
volatile uint64_t t97 = 6536215839825LLU;
volatile int8_t x488 = INT8_MIN;
static volatile int32_t t99 = -2;


void f0(void) {
	int64_t x1 = -7911188197137265LL;
	uint32_t x2 = 743U;
	uint8_t x3 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	static volatile int64_t t0 = 158LL;

	t0 = ((x1-x2)-(x3&x4));

	if (t0 != -7911188197138008LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x13 = INT64_MAX;
	uint8_t x15 = 1U;
	uint32_t x16 = UINT32_MAX;
	volatile int64_t t1 = 12LL;

	t1 = ((x13-x14)-(x15&x16));

	if (t1 != 9223372036854775551LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x18 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	uint64_t t2 = 123556LLU;

	t2 = ((x17-x18)-(x19&x20));

	if (t2 != 47034855222LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x22 = UINT16_MAX;
	volatile int8_t x23 = INT8_MAX;
	int16_t x24 = INT16_MIN;

	t3 = ((x21-x22)-(x23&x24));

	if (t3 != -65542) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x26 = UINT64_MAX;
	uint16_t x28 = UINT16_MAX;
	uint64_t t4 = 1690LLU;

	t4 = ((x25-x26)-(x27&x28));

	if (t4 != 18446744073709486286LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x30 = UINT32_MAX;
	static volatile int32_t x31 = INT32_MAX;
	int32_t x32 = INT32_MIN;

	t5 = ((x29-x30)-(x31&x32));

	if (t5 != 32768U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = INT16_MIN;
	uint16_t x34 = 1U;
	int64_t x35 = INT64_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t6 = 1LL;

	t6 = ((x33-x34)-(x35&x36));

	if (t6 != -32769LL) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x37 = UINT8_MAX;
	int16_t x38 = INT16_MIN;
	static int8_t x39 = -1;
	static uint32_t x40 = UINT32_MAX;

	t7 = ((x37-x38)-(x39&x40));

	if (t7 != 33024U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x41 = 4U;
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = -1;
	int32_t x44 = -1;
	volatile uint32_t t8 = 415U;

	t8 = ((x41-x42)-(x43&x44));

	if (t8 != 4294967046U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = INT64_MIN;
	volatile int8_t x48 = 16;
	int64_t t9 = -1084058410834824071LL;

	t9 = ((x45-x46)-(x47&x48));

	if (t9 != 9223372036854775791LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x49 = -2;
	int8_t x50 = -1;
	volatile int64_t t10 = 50060329LL;

	t10 = ((x49-x50)-(x51&x52));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	volatile int16_t x54 = -1;
	static int8_t x55 = 0;
	int16_t x56 = -1;
	int32_t t11 = -526604;

	t11 = ((x53-x54)-(x55&x56));

	if (t11 != 32768) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x65 = -60;
	int16_t x66 = 15;
	uint16_t x67 = UINT16_MAX;
	int32_t x68 = INT32_MIN;

	t12 = ((x65-x66)-(x67&x68));

	if (t12 != -75) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x73 = 167LLU;
	volatile int8_t x74 = -45;
	int16_t x75 = -1;

	t13 = ((x73-x74)-(x75&x76));

	if (t13 != 213LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x77 = -1;
	uint32_t x79 = 219158914U;
	volatile int16_t x80 = -1;
	volatile uint32_t t14 = 4285484U;

	t14 = ((x77-x78)-(x79&x80));

	if (t14 != 4075808382U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x81 = UINT8_MAX;
	uint64_t x83 = UINT64_MAX;
	static int64_t x84 = -1LL;
	volatile uint64_t t15 = 31748301237154LLU;

	t15 = ((x81-x82)-(x83&x84));

	if (t15 != 209LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x85 = -1;
	volatile uint32_t x86 = 539770870U;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t16 = 3LLU;

	t16 = ((x85-x86)-(x87&x88));

	if (t16 != 3755196436LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	uint8_t x90 = UINT8_MAX;
	uint8_t x91 = 44U;
	volatile uint64_t t17 = 0LLU;

	t17 = ((x89-x90)-(x91&x92));

	if (t17 != 18446744073709551316LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x93 = UINT8_MAX;
	int16_t x94 = INT16_MIN;
	static int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MAX;
	volatile int64_t t18 = 46270LL;

	t18 = ((x93-x94)-(x95&x96));

	if (t18 != -9223372036854710017LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -1;
	volatile int64_t x104 = INT64_MAX;

	t19 = ((x101-x102)-(x103&x104));

	if (t19 != 2147418112LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 0LLU;
	static uint32_t x106 = UINT32_MAX;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	volatile uint64_t t20 = 26130598842479LLU;

	t20 = ((x105-x106)-(x107&x108));

	if (t20 != 18446744069414617089LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x111 = 15;
	static int16_t x112 = 14511;
	volatile uint64_t t21 = 1992LLU;

	t21 = ((x109-x110)-(x111&x112));

	if (t21 != 1202086LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x113 = INT32_MIN;
	volatile uint32_t x114 = 328819U;
	volatile int64_t x116 = -1LL;

	t22 = ((x113-x114)-(x115&x116));

	if (t22 != 4294638477LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MIN;
	uint16_t x118 = 247U;
	int16_t x119 = INT16_MAX;
	static volatile int64_t t23 = -274543032991557LL;

	t23 = ((x117-x118)-(x119&x120));

	if (t23 != -25099LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x122 = UINT16_MAX;
	static int16_t x123 = -1;
	int16_t x124 = 7;

	t24 = ((x121-x122)-(x123&x124));

	if (t24 != 4294901763U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -47301944;
	uint64_t x127 = 2429LLU;
	volatile int8_t x128 = INT8_MIN;
	volatile uint64_t t25 = 505LLU;

	t25 = ((x125-x126)-(x127&x128));

	if (t25 != 47299512LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = 452U;
	volatile int16_t x130 = INT16_MIN;
	volatile uint16_t x132 = 21U;
	volatile int32_t t26 = 31330408;

	t26 = ((x129-x130)-(x131&x132));

	if (t26 != 33199) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x133 = INT64_MIN;
	uint8_t x135 = 49U;
	int32_t x136 = 1792;
	int64_t t27 = 46444518964LL;

	t27 = ((x133-x134)-(x135&x136));

	if (t27 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x143 = 11;
	static int64_t x144 = -1LL;
	int64_t t28 = -108416LL;

	t28 = ((x141-x142)-(x143&x144));

	if (t28 != 30733LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x146 = INT64_MIN;
	volatile int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MAX;
	volatile int64_t t29 = 3479601LL;

	t29 = ((x145-x146)-(x147&x148));

	if (t29 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x151 = INT32_MIN;
	int8_t x152 = INT8_MAX;

	t30 = ((x149-x150)-(x151&x152));

	if (t30 != 18446744073480080348LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x153 = -1;
	uint64_t x154 = 11738696214LLU;
	volatile int64_t x155 = 18465917330330LL;
	static uint64_t x156 = 390066523LLU;
	uint64_t t31 = 3LLU;

	t31 = ((x153-x154)-(x155&x156));

	if (t31 != 18446744061866955983LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = -1;
	static int8_t x158 = -2;
	int8_t x159 = 0;
	volatile uint64_t x160 = UINT64_MAX;
	uint64_t t32 = 39LLU;

	t32 = ((x157-x158)-(x159&x160));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = -7645;
	uint64_t x162 = UINT64_MAX;
	int64_t x164 = 11385LL;
	volatile uint64_t t33 = 270958159905718300LLU;

	t33 = ((x161-x162)-(x163&x164));

	if (t33 != 18446744073709542915LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x165 = -132539715746541LL;
	int8_t x166 = INT8_MIN;
	int64_t x168 = -1LL;
	static volatile int64_t t34 = 117454312551LL;

	t34 = ((x165-x166)-(x167&x168));

	if (t34 != -132539715779180LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x177 = 138LLU;
	uint8_t x178 = 125U;
	volatile uint8_t x179 = 2U;
	volatile uint64_t t35 = 62072052512730384LLU;

	t35 = ((x177-x178)-(x179&x180));

	if (t35 != 13LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x181 = -1;
	volatile uint16_t x183 = 0U;
	static int32_t x184 = -382481;
	volatile int32_t t36 = INT32_MAX;

	t36 = ((x181-x182)-(x183&x184));

	if (t36 != INT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x185 = -44;
	volatile int64_t t37 = 5880513794535LL;

	t37 = ((x185-x186)-(x187&x188));

	if (t37 != -1568390395322LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MAX;
	uint16_t x194 = 5867U;
	uint64_t x195 = 552857878373392137LLU;
	int16_t x196 = -1;
	volatile uint64_t t38 = 399LLU;

	t38 = ((x193-x194)-(x195&x196));

	if (t38 != 17893886195336153739LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x201 = 255812U;
	static volatile uint8_t x202 = 6U;
	static int64_t x203 = INT64_MIN;

	t39 = ((x201-x202)-(x203&x204));

	if (t39 != 255806LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x206 = INT8_MIN;
	volatile int16_t x207 = INT16_MAX;
	int64_t t40 = -39LL;

	t40 = ((x205-x206)-(x207&x208));

	if (t40 != -32640LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	volatile int32_t t41 = -75340;

	t41 = ((x209-x210)-(x211&x212));

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = INT16_MIN;
	uint8_t x215 = UINT8_MAX;
	uint32_t x216 = 108854U;

	t42 = ((x213-x214)-(x215&x216));

	if (t42 != 32586U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x218 = INT16_MIN;
	volatile int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MIN;
	volatile int64_t t43 = -35LL;

	t43 = ((x217-x218)-(x219&x220));

	if (t43 != 32767LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = -1;
	volatile uint64_t x223 = 156506LLU;
	int32_t x224 = 62795;
	volatile uint64_t t44 = 4274750429017LLU;

	t44 = ((x221-x222)-(x223&x224));

	if (t44 != 18444539484420795015LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MIN;
	uint64_t x226 = 467314827728479LLU;
	uint64_t x227 = 7526LLU;
	uint64_t x228 = 0LLU;
	static volatile uint64_t t45 = 55291491524LLU;

	t45 = ((x225-x226)-(x227&x228));

	if (t45 != 18446276758881790369LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x229 = -1;
	int32_t x230 = 1904375;
	static uint32_t x231 = 8437727U;
	int64_t t46 = -499865457434LL;

	t46 = ((x229-x230)-(x231&x232));

	if (t46 != -1904376LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = INT32_MIN;
	uint8_t x239 = UINT8_MAX;
	static volatile uint8_t x240 = UINT8_MAX;
	uint32_t t47 = 2U;

	t47 = ((x237-x238)-(x239&x240));

	if (t47 != 1882098828U) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x245 = UINT8_MAX;
	int8_t x247 = INT8_MAX;
	static uint32_t x248 = UINT32_MAX;
	volatile uint32_t t48 = 157796U;

	t48 = ((x245-x246)-(x247&x248));

	if (t48 != 128U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = INT8_MAX;
	uint8_t x254 = 43U;
	volatile int16_t x255 = INT16_MAX;

	t49 = ((x253-x254)-(x255&x256));

	if (t49 != 84) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x261 = 395338067;
	volatile uint64_t x262 = 153321LLU;
	int32_t x263 = 167321;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t50 = 2464722761626732LLU;

	t50 = ((x261-x262)-(x263&x264));

	if (t50 != 395017450LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x269 = -1;
	static int8_t x270 = INT8_MIN;
	int32_t x271 = INT32_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t51 = 304602;

	t51 = ((x269-x270)-(x271&x272));

	if (t51 != -2147483520) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x274 = UINT16_MAX;
	uint8_t x275 = UINT8_MAX;
	uint64_t x276 = 136932686089187LLU;
	volatile uint64_t t52 = 9559513638818LLU;

	t52 = ((x273-x274)-(x275&x276));

	if (t52 != 4294901773LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x278 = UINT16_MAX;
	uint64_t x279 = UINT64_MAX;
	volatile int8_t x280 = 0;

	t53 = ((x277-x278)-(x279&x280));

	if (t53 != 9223372036854710272LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x283 = INT8_MAX;
	volatile int64_t x284 = INT64_MIN;
	int64_t t54 = 33687006385675LL;

	t54 = ((x281-x282)-(x283&x284));

	if (t54 != -1006528LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x285 = -449393525560126451LL;
	int16_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	volatile int8_t x288 = -1;
	static int64_t t55 = 21083102468414608LL;

	t55 = ((x285-x286)-(x287&x288));

	if (t55 != -449393525560126322LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x289 = INT32_MIN;
	uint64_t x290 = UINT64_MAX;
	int32_t x292 = INT32_MIN;
	uint64_t t56 = 1007830860021863300LLU;

	t56 = ((x289-x290)-(x291&x292));

	if (t56 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x293 = 54976332187726322LLU;
	uint32_t x294 = 131427316U;
	static int32_t x295 = -1;
	static uint64_t t57 = 1653537LLU;

	t57 = ((x293-x294)-(x295&x296));

	if (t57 != 54976332056306318LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = -41093849;
	int32_t x299 = 0;
	static int8_t x300 = INT8_MIN;
	volatile int64_t t58 = -55739LL;

	t58 = ((x297-x298)-(x299&x300));

	if (t58 != -9223372036813681959LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x302 = -1;
	uint32_t x304 = UINT32_MAX;
	int64_t t59 = 7355LL;

	t59 = ((x301-x302)-(x303&x304));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x305 = 6715U;
	uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MIN;
	volatile uint64_t t60 = 39LLU;

	t60 = ((x305-x306)-(x307&x308));

	if (t60 != 17449576373373901116LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x309 = INT64_MIN;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	volatile uint16_t x312 = 2U;

	t61 = ((x309-x310)-(x311&x312));

	if (t61 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x313 = -31208290777LL;
	static volatile int16_t x314 = INT16_MIN;
	volatile int32_t x316 = -1;

	t62 = ((x313-x314)-(x315&x316));

	if (t62 != -31208258008LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x317 = INT8_MIN;
	int32_t x318 = -296057422;
	static uint32_t x320 = 421928U;
	volatile uint32_t t63 = 606U;

	t63 = ((x317-x318)-(x319&x320));

	if (t63 != 296057294U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x321 = INT16_MIN;
	volatile int64_t x322 = -4347505284880060559LL;
	uint8_t x323 = UINT8_MAX;
	int8_t x324 = INT8_MAX;
	volatile int64_t t64 = -10299142052559LL;

	t64 = ((x321-x322)-(x323&x324));

	if (t64 != 4347505284880027664LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x329 = 2LL;
	uint8_t x330 = 1U;
	volatile int16_t x331 = INT16_MIN;
	volatile int64_t t65 = 53787LL;

	t65 = ((x329-x330)-(x331&x332));

	if (t65 != -915472383LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x333 = 7412U;
	int16_t x334 = -1;
	int8_t x336 = INT8_MIN;
	volatile uint32_t t66 = 21134U;

	t66 = ((x333-x334)-(x335&x336));

	if (t66 != 2272893429U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x341 = 10U;
	volatile uint16_t x342 = 673U;
	int8_t x343 = -1;
	static uint64_t t67 = 6808591410187771717LLU;

	t67 = ((x341-x342)-(x343&x344));

	if (t67 != 18446744073709550954LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = 12;
	int8_t x346 = -3;
	int16_t x347 = -15607;
	uint32_t t68 = 94U;

	t68 = ((x345-x346)-(x347&x348));

	if (t68 != 15622U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x349 = INT32_MIN;
	static uint32_t x350 = UINT32_MAX;
	volatile int32_t x351 = INT32_MAX;

	t69 = ((x349-x350)-(x351&x352));

	if (t69 != 2144450651U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x353 = 1507LLU;
	int64_t x354 = 247906626LL;
	volatile int32_t x355 = INT32_MIN;
	uint32_t x356 = 149770772U;
	uint64_t t70 = 330271LLU;

	t70 = ((x353-x354)-(x355&x356));

	if (t70 != 18446744073461646497LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = UINT8_MAX;
	volatile uint64_t t71 = 5052437790428LLU;

	t71 = ((x357-x358)-(x359&x360));

	if (t71 != 18446744073709551234LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint8_t x362 = UINT8_MAX;
	volatile uint8_t x363 = 2U;

	t72 = ((x361-x362)-(x363&x364));

	if (t72 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x369 = 25U;
	volatile uint8_t x371 = UINT8_MAX;
	static int16_t x372 = INT16_MAX;
	static volatile int64_t t73 = -6LL;

	t73 = ((x369-x370)-(x371&x372));

	if (t73 != -229LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = INT8_MIN;
	uint64_t x374 = UINT64_MAX;
	static int16_t x376 = INT16_MIN;
	volatile uint64_t t74 = 11734302700410601LLU;

	t74 = ((x373-x374)-(x375&x376));

	if (t74 != 32641LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x379 = 1U;
	volatile int8_t x380 = INT8_MAX;
	volatile int64_t t75 = -341282LL;

	t75 = ((x377-x378)-(x379&x380));

	if (t75 != -128LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x381 = 54U;
	volatile int16_t x382 = INT16_MAX;
	int32_t x383 = -9454504;
	int64_t t76 = -605466233427LL;

	t76 = ((x381-x382)-(x383&x384));

	if (t76 != 9421791LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x386 = 3368;
	volatile uint8_t x387 = 87U;
	static uint64_t x388 = 2135527067471LLU;
	volatile uint64_t t77 = 368219584778253LLU;

	t77 = ((x385-x386)-(x387&x388));

	if (t77 != 7892LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x389 = 35;
	uint64_t x391 = 29131822304LLU;
	int16_t x392 = INT16_MIN;
	uint64_t t78 = 17589924339242933LLU;

	t78 = ((x389-x390)-(x391&x392));

	if (t78 != 18446744044577750988LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x393 = 1U;
	uint32_t x394 = 19913330U;
	volatile int32_t x395 = INT32_MAX;
	volatile int8_t x396 = INT8_MAX;
	static volatile uint32_t t79 = 1U;

	t79 = ((x393-x394)-(x395&x396));

	if (t79 != 4275053840U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x398 = 58U;
	static volatile uint16_t x400 = 19300U;
	static uint64_t t80 = 695892372LLU;

	t80 = ((x397-x398)-(x399&x400));

	if (t80 != 356LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x405 = -1;
	int64_t x406 = 31453751520793LL;
	uint8_t x407 = UINT8_MAX;
	int64_t x408 = INT64_MAX;
	static int64_t t81 = -6658855848290298LL;

	t81 = ((x405-x406)-(x407&x408));

	if (t81 != -31453751521049LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x413 = -1;
	int8_t x415 = 58;
	int16_t x416 = INT16_MIN;
	int32_t t82 = INT32_MAX;

	t82 = ((x413-x414)-(x415&x416));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x417 = INT16_MAX;
	int16_t x418 = INT16_MIN;
	uint32_t x420 = 56686U;
	uint32_t t83 = 32784952U;

	t83 = ((x417-x418)-(x419&x420));

	if (t83 != 61363U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x421 = 8U;
	int16_t x422 = -1;
	int16_t x423 = 3;
	volatile int64_t t84 = -19008749257LL;

	t84 = ((x421-x422)-(x423&x424));

	if (t84 != 9LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x425 = UINT32_MAX;
	static int32_t x428 = -4;

	t85 = ((x425-x426)-(x427&x428));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x429 = INT32_MAX;
	uint64_t x430 = 28041LLU;
	uint64_t t86 = 322362516188252379LLU;

	t86 = ((x429-x430)-(x431&x432));

	if (t86 != 2147455606LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int16_t x435 = 0;
	int8_t x436 = -17;

	t87 = ((x433-x434)-(x435&x436));

	if (t87 != 4294934529U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x438 = 13;
	int8_t x440 = -1;
	volatile int32_t t88 = 12;

	t88 = ((x437-x438)-(x439&x440));

	if (t88 != -140) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x441 = -592401LL;
	uint64_t x442 = 73LLU;
	volatile uint32_t x443 = 576720U;
	volatile uint64_t t89 = 8624LLU;

	t89 = ((x441-x442)-(x443&x444));

	if (t89 != 18446744073708907798LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x446 = -1;
	static volatile uint32_t x447 = 119747037U;
	int32_t x448 = INT32_MIN;
	volatile uint32_t t90 = 0U;

	t90 = ((x445-x446)-(x447&x448));

	if (t90 != 2147483649U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x449 = UINT8_MAX;
	uint16_t x450 = UINT16_MAX;
	int64_t x451 = -1LL;
	int16_t x452 = INT16_MIN;
	volatile int64_t t91 = -13341312183LL;

	t91 = ((x449-x450)-(x451&x452));

	if (t91 != -32512LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x453 = INT16_MIN;
	volatile uint32_t x454 = 17840633U;
	static int16_t x455 = -139;
	uint8_t x456 = UINT8_MAX;
	static uint32_t t92 = 37579811U;

	t92 = ((x453-x454)-(x455&x456));

	if (t92 != 4277093778U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x458 = UINT32_MAX;
	static int8_t x459 = -1;
	uint64_t t93 = 187720771LLU;

	t93 = ((x457-x458)-(x459&x460));

	if (t93 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x461 = 435U;
	int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	int64_t t94 = -332134LL;

	t94 = ((x461-x462)-(x463&x464));

	if (t94 != -9223372034707291724LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x466 = INT8_MIN;
	uint8_t x468 = 7U;
	volatile int32_t t95 = 357014;

	t95 = ((x465-x466)-(x467&x468));

	if (t95 != 32890) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x469 = INT32_MAX;
	uint16_t x470 = UINT16_MAX;
	int16_t x471 = -1877;
	static volatile int8_t x472 = 0;

	t96 = ((x469-x470)-(x471&x472));

	if (t96 != 2147418112) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x474 = 2U;
	volatile uint64_t x475 = 461110104281023496LLU;
	static uint8_t x476 = UINT8_MAX;

	t97 = ((x473-x474)-(x475&x476));

	if (t97 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x477 = UINT64_MAX;
	int64_t x478 = INT64_MAX;
	int32_t x479 = -60882;
	static int32_t x480 = INT32_MIN;
	uint64_t t98 = 19565040945482233LLU;

	t98 = ((x477-x478)-(x479&x480));

	if (t98 != 9223372039002259456LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x485 = INT16_MIN;
	int16_t x486 = -1;
	uint16_t x487 = 118U;

	t99 = ((x485-x486)-(x487&x488));

	if (t99 != -32767) { NG(); } else { ; }
	
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

