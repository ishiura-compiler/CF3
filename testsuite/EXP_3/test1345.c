#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MIN;
uint16_t x9 = 41U;
int16_t x34 = INT16_MIN;
int32_t t4 = 470321273;
int32_t x41 = -196261;
volatile int32_t x55 = INT32_MIN;
uint32_t x57 = UINT32_MAX;
uint32_t t8 = 2U;
uint16_t x67 = 1U;
int32_t x90 = INT32_MIN;
static uint16_t x95 = 7U;
uint8_t x96 = UINT8_MAX;
volatile int16_t x109 = INT16_MAX;
int32_t t14 = 1;
uint8_t x115 = 82U;
int16_t x118 = -15607;
int8_t x146 = INT8_MIN;
int32_t x153 = INT32_MAX;
uint8_t x155 = 23U;
int64_t x169 = INT64_MAX;
static int32_t x178 = INT32_MIN;
uint8_t x188 = 25U;
volatile uint32_t t27 = 129897659U;
uint32_t x189 = 2602U;
uint16_t x190 = 30134U;
uint8_t x191 = UINT8_MAX;
int8_t x198 = INT8_MIN;
static uint32_t x208 = 205U;
uint32_t x212 = 5059396U;
static volatile int64_t t33 = 4025417LL;
int16_t x220 = -15;
static int64_t x221 = -1LL;
int32_t x222 = -29489914;
int64_t x224 = INT64_MAX;
uint64_t x235 = 1781LLU;
uint64_t x236 = 186669358070LLU;
static uint64_t x255 = UINT64_MAX;
int8_t x275 = INT8_MIN;
volatile uint64_t t42 = 206LLU;
volatile uint64_t x279 = 293LLU;
static volatile uint64_t t43 = 271872232840LLU;
static int64_t x283 = INT64_MAX;
int16_t x287 = INT16_MIN;
int8_t x289 = INT8_MIN;
int8_t x291 = -31;
int16_t x294 = INT16_MAX;
volatile uint32_t t48 = 0U;
int64_t x319 = 64606147LL;
uint64_t x327 = 3LLU;
uint64_t x328 = UINT64_MAX;
volatile uint64_t t51 = 762648LLU;
uint32_t x331 = UINT32_MAX;
int64_t x339 = -52LL;
int64_t x342 = INT64_MAX;
volatile int64_t x343 = -670273LL;
int8_t x346 = INT8_MIN;
volatile int64_t x348 = 430886673019LL;
int64_t x353 = INT64_MAX;
volatile uint8_t x359 = 2U;
int64_t t57 = -898347668017269869LL;
int64_t x371 = -1LL;
int16_t x378 = 1;
volatile uint64_t t61 = 633928741197LLU;
int16_t x386 = INT16_MIN;
uint16_t x393 = UINT16_MAX;
uint16_t x394 = UINT16_MAX;
uint64_t x395 = 24504918632593LLU;
int32_t t63 = -2174339;
int32_t x410 = -157327782;
int32_t t64 = 1;
volatile int32_t x418 = INT32_MAX;
uint16_t x424 = 86U;
volatile uint16_t x427 = 1U;
static int8_t x428 = INT8_MAX;
volatile int32_t t67 = 1524;
uint8_t x429 = 1U;
volatile uint16_t x430 = 0U;
int64_t x449 = INT64_MIN;
volatile int8_t x455 = -46;
uint8_t x460 = 3U;
uint16_t x467 = 72U;
int8_t x472 = 13;
uint64_t t76 = 6LLU;
uint32_t x486 = 13656666U;
static uint32_t x488 = 32344237U;
volatile uint32_t x492 = 241654587U;
uint64_t t81 = 1282620484913LLU;
uint32_t x546 = 1599319U;
int64_t t89 = -792047456LL;
volatile uint8_t x563 = 13U;
volatile uint64_t x568 = UINT64_MAX;
volatile uint32_t t92 = 1031532437U;
int8_t x573 = 4;
uint8_t x574 = 18U;
uint8_t x582 = 0U;
uint32_t x585 = 1265U;
int32_t x600 = -3164;
volatile int32_t t97 = -119130058;
int64_t x608 = -8370879481984LL;


void f0(void) {
	int16_t x1 = -14;
	static int64_t x2 = INT64_MIN;
	static int8_t x4 = -1;
	volatile int64_t t0 = 2511599157813221697LL;

	t0 = ((x1^x2)<<(x3==x4));

	if (t0 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x10 = 0;
	uint64_t x11 = UINT64_MAX;
	int64_t x12 = -2801309616734341LL;
	volatile int32_t t1 = -342259588;

	t1 = ((x9^x10)<<(x11==x12));

	if (t1 != 41) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x13 = UINT32_MAX;
	int16_t x14 = -1;
	uint8_t x15 = 39U;
	int64_t x16 = 2122456390684201256LL;
	volatile uint32_t t2 = 285681U;

	t2 = ((x13^x14)<<(x15==x16));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x25 = 1381809U;
	static uint64_t x26 = 2133969679761309857LLU;
	int64_t x27 = -1LL;
	int16_t x28 = 236;
	uint64_t t3 = 466580694071869080LLU;

	t3 = ((x25^x26)<<(x27==x28));

	if (t3 != 2133969679762691344LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = INT32_MIN;
	int32_t x35 = INT32_MIN;
	int8_t x36 = 21;

	t4 = ((x33^x34)<<(x35==x36));

	if (t4 != 2147450880) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x42 = INT32_MIN;
	volatile int32_t x43 = -379;
	int16_t x44 = -1;
	int32_t t5 = 339293300;

	t5 = ((x41^x42)<<(x43==x44));

	if (t5 != 2147287387) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = -1;
	int64_t x46 = INT64_MIN;
	static uint8_t x47 = 1U;
	int32_t x48 = INT32_MIN;
	volatile int64_t t6 = INT64_MAX;

	t6 = ((x45^x46)<<(x47==x48));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x53 = 4LL;
	static uint32_t x54 = 1460684726U;
	volatile uint32_t x56 = 94070U;
	volatile int64_t t7 = 213958756173258681LL;

	t7 = ((x53^x54)<<(x55==x56));

	if (t7 != 1460684722LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x58 = INT32_MIN;
	uint16_t x59 = UINT16_MAX;
	volatile uint8_t x60 = UINT8_MAX;

	t8 = ((x57^x58)<<(x59==x60));

	if (t8 != 2147483647U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x65 = 8U;
	uint16_t x66 = 1891U;
	uint16_t x68 = 172U;
	static volatile int32_t t9 = -1;

	t9 = ((x65^x66)<<(x67==x68));

	if (t9 != 1899) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x81 = INT32_MAX;
	uint32_t x82 = 2281266U;
	uint16_t x83 = UINT16_MAX;
	volatile int16_t x84 = -1;
	static uint32_t t10 = 173638U;

	t10 = ((x81^x82)<<(x83==x84));

	if (t10 != 2145202381U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x89 = 7541663959LLU;
	int64_t x91 = 0LL;
	volatile int16_t x92 = -11;
	static uint64_t t11 = 156811685LLU;

	t11 = ((x89^x90)<<(x91==x92));

	if (t11 != 18446744066218830039LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x93 = UINT8_MAX;
	uint32_t x94 = UINT32_MAX;
	volatile uint32_t t12 = 7919572U;

	t12 = ((x93^x94)<<(x95==x96));

	if (t12 != 4294967040U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MIN;
	int64_t x103 = 1LL;
	int64_t x104 = -1LL;
	int32_t t13 = 2536996;

	t13 = ((x101^x102)<<(x103==x104));

	if (t13 != 2147483520) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x110 = 29;
	int64_t x111 = -1LL;
	volatile uint16_t x112 = 7U;

	t14 = ((x109^x110)<<(x111==x112));

	if (t14 != 32738) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x113 = UINT32_MAX;
	int16_t x114 = 2;
	volatile int64_t x116 = 696687051LL;
	volatile uint32_t t15 = 1556309350U;

	t15 = ((x113^x114)<<(x115==x116));

	if (t15 != 4294967293U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x117 = -257926247365257LL;
	int64_t x119 = INT64_MIN;
	volatile int16_t x120 = INT16_MIN;
	volatile int64_t t16 = -1876LL;

	t16 = ((x117^x118)<<(x119==x120));

	if (t16 != 257926247351934LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	static volatile int8_t x123 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;
	static uint32_t t17 = 322937U;

	t17 = ((x121^x122)<<(x123==x124));

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x133 = INT32_MIN;
	int64_t x134 = INT64_MIN;
	volatile int64_t x135 = 781517570LL;
	static volatile uint8_t x136 = UINT8_MAX;
	volatile int64_t t18 = -728337807004918LL;

	t18 = ((x133^x134)<<(x135==x136));

	if (t18 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x137 = INT16_MIN;
	int32_t x138 = INT32_MIN;
	uint8_t x139 = UINT8_MAX;
	uint16_t x140 = UINT16_MAX;
	int32_t t19 = 15846463;

	t19 = ((x137^x138)<<(x139==x140));

	if (t19 != 2147450880) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x141 = INT64_MIN;
	int32_t x142 = INT32_MIN;
	int64_t x143 = -1LL;
	uint32_t x144 = 1457380606U;
	static int64_t t20 = -140371790891344591LL;

	t20 = ((x141^x142)<<(x143==x144));

	if (t20 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x145 = -1;
	int8_t x147 = INT8_MIN;
	uint16_t x148 = 972U;
	volatile int32_t t21 = 60353575;

	t21 = ((x145^x146)<<(x147==x148));

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x154 = UINT16_MAX;
	int16_t x156 = -1;
	int32_t t22 = -7923;

	t22 = ((x153^x154)<<(x155==x156));

	if (t22 != 2147418112) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x157 = -2386772354086300LL;
	int32_t x158 = INT32_MIN;
	volatile uint32_t x159 = UINT32_MAX;
	volatile int64_t x160 = INT64_MIN;
	int64_t t23 = -2LL;

	t23 = ((x157^x158)<<(x159==x160));

	if (t23 != 2386772410288740LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x161 = UINT16_MAX;
	static int16_t x162 = 1;
	static uint64_t x163 = 2LLU;
	uint8_t x164 = 5U;
	volatile int32_t t24 = 0;

	t24 = ((x161^x162)<<(x163==x164));

	if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x170 = 1U;
	int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MIN;
	volatile int64_t t25 = 100877739LL;

	t25 = ((x169^x170)<<(x171==x172));

	if (t25 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x177 = -36;
	uint8_t x179 = UINT8_MAX;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t26 = 1073088495;

	t26 = ((x177^x178)<<(x179==x180));

	if (t26 != 2147483612) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x186 = 1U;
	int64_t x187 = 8603288278196LL;

	t27 = ((x185^x186)<<(x187==x188));

	if (t27 != 4294967169U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x192 = INT16_MIN;
	uint32_t t28 = 187988U;

	t28 = ((x189^x190)<<(x191==x192));

	if (t28 != 32668U) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = UINT16_MAX;
	uint16_t x194 = UINT16_MAX;
	static uint64_t x195 = 2268568107494288LLU;
	uint16_t x196 = 4U;
	int32_t t29 = -3371;

	t29 = ((x193^x194)<<(x195==x196));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x197 = INT32_MIN;
	static int16_t x199 = INT16_MIN;
	volatile int32_t x200 = -1;
	static int32_t t30 = -2;

	t30 = ((x197^x198)<<(x199==x200));

	if (t30 != 2147483520) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x205 = INT32_MAX;
	uint32_t x206 = 875U;
	int64_t x207 = INT64_MIN;
	volatile uint32_t t31 = 6209711U;

	t31 = ((x205^x206)<<(x207==x208));

	if (t31 != 2147482772U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -1;
	volatile int8_t x211 = -11;
	volatile int32_t t32 = 8464;

	t32 = ((x209^x210)<<(x211==x212));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x213 = 54946789406LL;
	static volatile int32_t x214 = 133;
	int64_t x215 = -1LL;
	int32_t x216 = -1;

	t33 = ((x213^x214)<<(x215==x216));

	if (t33 != 109893579062LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x217 = INT32_MIN;
	int8_t x218 = -19;
	uint32_t x219 = 216239U;
	int32_t t34 = 7;

	t34 = ((x217^x218)<<(x219==x220));

	if (t34 != 2147483629) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x223 = INT32_MIN;
	int64_t t35 = 7680023604031LL;

	t35 = ((x221^x222)<<(x223==x224));

	if (t35 != 29489913LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x225 = UINT64_MAX;
	int16_t x226 = INT16_MIN;
	static volatile int32_t x227 = -1;
	int8_t x228 = INT8_MIN;
	uint64_t t36 = 73327961LLU;

	t36 = ((x225^x226)<<(x227==x228));

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x233 = 0;
	static uint64_t x234 = UINT64_MAX;
	uint64_t t37 = UINT64_MAX;

	t37 = ((x233^x234)<<(x235==x236));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x237 = 505LL;
	int64_t x238 = INT64_MAX;
	int16_t x239 = -1;
	uint32_t x240 = 305992U;
	int64_t t38 = 3621625687909LL;

	t38 = ((x237^x238)<<(x239==x240));

	if (t38 != 9223372036854775302LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x241 = 3100U;
	int64_t x242 = INT64_MAX;
	volatile uint32_t x243 = 5292876U;
	uint32_t x244 = 530521822U;
	int64_t t39 = -17218279102349LL;

	t39 = ((x241^x242)<<(x243==x244));

	if (t39 != 9223372036854772707LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x253 = -1;
	int16_t x254 = -81;
	volatile int64_t x256 = 27770246115LL;
	int32_t t40 = -35;

	t40 = ((x253^x254)<<(x255==x256));

	if (t40 != 80) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x261 = INT64_MAX;
	static int64_t x262 = INT64_MAX;
	int64_t x263 = INT64_MAX;
	static int8_t x264 = 0;
	volatile int64_t t41 = 59583192022789LL;

	t41 = ((x261^x262)<<(x263==x264));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x273 = 8564066972862765LLU;
	uint64_t x274 = 6240197823LLU;
	static int32_t x276 = INT32_MAX;

	t42 = ((x273^x274)<<(x275==x276));

	if (t42 != 8564062953788818LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x277 = UINT64_MAX;
	int8_t x278 = INT8_MIN;
	uint32_t x280 = UINT32_MAX;

	t43 = ((x277^x278)<<(x279==x280));

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x281 = -7;
	static int8_t x282 = INT8_MIN;
	volatile int16_t x284 = INT16_MAX;
	static int32_t t44 = -123043;

	t44 = ((x281^x282)<<(x283==x284));

	if (t44 != 121) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x285 = 240LLU;
	volatile int64_t x286 = -1178306097240889466LL;
	uint8_t x288 = UINT8_MAX;
	uint64_t t45 = 6127240LLU;

	t45 = ((x285^x286)<<(x287==x288));

	if (t45 != 17268437976468662134LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x290 = 11690LLU;
	volatile int8_t x292 = 0;
	uint64_t t46 = 273643LLU;

	t46 = ((x289^x290)<<(x291==x292));

	if (t46 != 18446744073709539882LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x293 = INT32_MAX;
	int16_t x295 = INT16_MAX;
	static uint64_t x296 = 549013927207LLU;
	volatile int32_t t47 = 1;

	t47 = ((x293^x294)<<(x295==x296));

	if (t47 != 2147450880) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x301 = UINT32_MAX;
	static int32_t x302 = -37;
	int32_t x303 = INT32_MAX;
	static int32_t x304 = -1;

	t48 = ((x301^x302)<<(x303==x304));

	if (t48 != 36U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x309 = -1LL;
	static volatile int16_t x310 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	int32_t x312 = INT32_MIN;
	int64_t t49 = -1LL;

	t49 = ((x309^x310)<<(x311==x312));

	if (t49 != 32767LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x317 = 655786725U;
	int16_t x318 = -1;
	static int64_t x320 = INT64_MIN;
	volatile uint32_t t50 = 461719012U;

	t50 = ((x317^x318)<<(x319==x320));

	if (t50 != 3639180570U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x325 = 5624433505372750LLU;
	int16_t x326 = -2858;

	t51 = ((x325^x326)<<(x327==x328));

	if (t51 != 18441119640204181144LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x329 = 18U;
	uint8_t x330 = 79U;
	int8_t x332 = INT8_MIN;
	volatile int32_t t52 = -3;

	t52 = ((x329^x330)<<(x331==x332));

	if (t52 != 93) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x337 = 1876398201333899LLU;
	uint64_t x338 = 1308986385524LLU;
	int64_t x340 = INT64_MAX;
	uint64_t t53 = 4707231541838LLU;

	t53 = ((x337^x338)<<(x339==x340));

	if (t53 != 1877569743113471LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x341 = 50691614LLU;
	uint16_t x344 = 1U;
	uint64_t t54 = 766318801779223LLU;

	t54 = ((x341^x342)<<(x343==x344));

	if (t54 != 9223372036804084193LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x345 = INT64_MIN;
	int64_t x347 = -243162496085596582LL;
	volatile int64_t t55 = -489748LL;

	t55 = ((x345^x346)<<(x347==x348));

	if (t55 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x354 = INT32_MAX;
	volatile int32_t x355 = -402;
	int64_t x356 = -1LL;
	int64_t t56 = -233912556149456922LL;

	t56 = ((x353^x354)<<(x355==x356));

	if (t56 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x357 = INT8_MIN;
	int64_t x358 = INT64_MIN;
	uint32_t x360 = 7777U;

	t57 = ((x357^x358)<<(x359==x360));

	if (t57 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x369 = 15LLU;
	static int16_t x370 = INT16_MIN;
	volatile uint16_t x372 = 340U;
	volatile uint64_t t58 = 134754789182919820LLU;

	t58 = ((x369^x370)<<(x371==x372));

	if (t58 != 18446744073709518863LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x373 = UINT32_MAX;
	uint32_t x374 = UINT32_MAX;
	static int16_t x375 = INT16_MAX;
	int8_t x376 = INT8_MAX;
	uint32_t t59 = 1588748286U;

	t59 = ((x373^x374)<<(x375==x376));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x377 = UINT16_MAX;
	int8_t x379 = INT8_MIN;
	static uint64_t x380 = 214677272751722LLU;
	volatile int32_t t60 = 560682;

	t60 = ((x377^x378)<<(x379==x380));

	if (t60 != 65534) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x381 = 1027995480U;
	uint64_t x382 = 789051252541364683LLU;
	volatile int8_t x383 = 19;
	int32_t x384 = INT32_MAX;

	t61 = ((x381^x382)<<(x383==x384));

	if (t61 != 789051253526883987LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x385 = -24758;
	uint16_t x387 = 333U;
	volatile uint32_t x388 = 3206004U;
	volatile int32_t t62 = 140335316;

	t62 = ((x385^x386)<<(x387==x388));

	if (t62 != 8010) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x396 = INT64_MIN;

	t63 = ((x393^x394)<<(x395==x396));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x409 = INT16_MIN;
	uint8_t x411 = 13U;
	volatile uint32_t x412 = 698628224U;

	t64 = ((x409^x410)<<(x411==x412));

	if (t64 != 157343322) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x417 = 0;
	static int32_t x419 = -1;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t65 = INT32_MAX;

	t65 = ((x417^x418)<<(x419==x420));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x421 = -7;
	volatile int64_t x422 = -18210LL;
	static uint16_t x423 = 72U;
	int64_t t66 = 169LL;

	t66 = ((x421^x422)<<(x423==x424));

	if (t66 != 18215LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x425 = 10;
	static int16_t x426 = 55;

	t67 = ((x425^x426)<<(x427==x428));

	if (t67 != 61) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x431 = -55;
	int16_t x432 = -1;
	int32_t t68 = -14286;

	t68 = ((x429^x430)<<(x431==x432));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x445 = -1;
	volatile int64_t x446 = INT64_MIN;
	int16_t x447 = -9667;
	uint64_t x448 = 703LLU;
	volatile int64_t t69 = INT64_MAX;

	t69 = ((x445^x446)<<(x447==x448));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x450 = INT32_MIN;
	int16_t x451 = 1709;
	int32_t x452 = -3137728;
	int64_t t70 = -35363483747698962LL;

	t70 = ((x449^x450)<<(x451==x452));

	if (t70 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MIN;
	int32_t x456 = INT32_MIN;
	volatile int64_t t71 = -237450099743LL;

	t71 = ((x453^x454)<<(x455==x456));

	if (t71 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x457 = INT8_MAX;
	volatile int8_t x458 = 1;
	int16_t x459 = -1;
	int32_t t72 = -5944396;

	t72 = ((x457^x458)<<(x459==x460));

	if (t72 != 126) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x461 = UINT64_MAX;
	uint32_t x462 = UINT32_MAX;
	int32_t x463 = INT32_MIN;
	int64_t x464 = -1LL;
	static volatile uint64_t t73 = 127333320075640LLU;

	t73 = ((x461^x462)<<(x463==x464));

	if (t73 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x465 = -48;
	volatile int8_t x466 = -3;
	uint64_t x468 = UINT64_MAX;
	int32_t t74 = 0;

	t74 = ((x465^x466)<<(x467==x468));

	if (t74 != 45) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x469 = -1LL;
	int64_t x470 = -4388055203139963878LL;
	static int32_t x471 = INT32_MIN;
	int64_t t75 = 202201975246351832LL;

	t75 = ((x469^x470)<<(x471==x472));

	if (t75 != 4388055203139963877LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x473 = UINT64_MAX;
	uint16_t x474 = 35U;
	int64_t x475 = INT64_MIN;
	volatile uint32_t x476 = 453185U;

	t76 = ((x473^x474)<<(x475==x476));

	if (t76 != 18446744073709551580LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x477 = INT32_MAX;
	volatile uint8_t x478 = 17U;
	static int8_t x479 = INT8_MAX;
	uint32_t x480 = UINT32_MAX;
	int32_t t77 = -126;

	t77 = ((x477^x478)<<(x479==x480));

	if (t77 != 2147483630) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x481 = INT16_MIN;
	uint64_t x482 = 13239LLU;
	volatile int8_t x483 = 27;
	int16_t x484 = 1714;
	uint64_t t78 = 17569899913686946LLU;

	t78 = ((x481^x482)<<(x483==x484));

	if (t78 != 18446744073709532087LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x485 = INT8_MIN;
	int8_t x487 = 0;
	volatile uint32_t t79 = 102283473U;

	t79 = ((x485^x486)<<(x487==x488));

	if (t79 != 4281310682U) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x489 = UINT32_MAX;
	static int16_t x490 = 1;
	static int32_t x491 = 30598799;
	static uint32_t t80 = 8310U;

	t80 = ((x489^x490)<<(x491==x492));

	if (t80 != 4294967294U) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x493 = 2070674791203156791LLU;
	int8_t x494 = INT8_MIN;
	static int64_t x495 = -1LL;
	int16_t x496 = INT16_MAX;

	t81 = ((x493^x494)<<(x495==x496));

	if (t81 != 16376069282506394807LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x509 = 462846940202LLU;
	static volatile int16_t x510 = INT16_MIN;
	uint32_t x511 = 50093U;
	uint16_t x512 = 3U;
	volatile uint64_t t82 = 7693648697940164243LLU;

	t82 = ((x509^x510)<<(x511==x512));

	if (t82 != 18446743610862621738LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x513 = INT8_MAX;
	uint8_t x514 = 1U;
	volatile int8_t x515 = -1;
	int32_t x516 = -1;
	volatile int32_t t83 = -16078690;

	t83 = ((x513^x514)<<(x515==x516));

	if (t83 != 252) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x521 = INT16_MAX;
	uint64_t x522 = 24972760134928LLU;
	uint16_t x523 = 740U;
	static volatile uint16_t x524 = 264U;
	volatile uint64_t t84 = 89616777072066LLU;

	t84 = ((x521^x522)<<(x523==x524));

	if (t84 != 24972760140527LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x525 = INT8_MAX;
	volatile int32_t x526 = INT32_MAX;
	int16_t x527 = INT16_MIN;
	uint16_t x528 = 32095U;
	int32_t t85 = 1532;

	t85 = ((x525^x526)<<(x527==x528));

	if (t85 != 2147483520) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x533 = INT32_MIN;
	volatile int8_t x534 = -1;
	static uint8_t x535 = UINT8_MAX;
	int32_t x536 = INT32_MIN;
	int32_t t86 = INT32_MAX;

	t86 = ((x533^x534)<<(x535==x536));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x545 = -30961;
	int64_t x547 = 38641494035545318LL;
	static volatile int16_t x548 = -1;
	volatile uint32_t t87 = 2058794315U;

	t87 = ((x545^x546)<<(x547==x548));

	if (t87 != 4293386328U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x553 = 7280U;
	int8_t x554 = 24;
	uint8_t x555 = 7U;
	static int16_t x556 = 16;
	uint32_t t88 = 86884041U;

	t88 = ((x553^x554)<<(x555==x556));

	if (t88 != 7272U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x557 = INT32_MIN;
	volatile int64_t x558 = -39980459LL;
	static volatile int32_t x559 = -1;
	uint8_t x560 = UINT8_MAX;

	t89 = ((x557^x558)<<(x559==x560));

	if (t89 != 2107503189LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x561 = 1;
	static volatile uint16_t x562 = 2632U;
	int32_t x564 = -10384;
	int32_t t90 = -17862;

	t90 = ((x561^x562)<<(x563==x564));

	if (t90 != 2633) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x565 = 28846867U;
	static uint32_t x566 = 1095952727U;
	int32_t x567 = 85010;
	static uint32_t t91 = 10U;

	t91 = ((x565^x566)<<(x567==x568));

	if (t91 != 1089126980U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x569 = UINT32_MAX;
	int8_t x570 = -1;
	int64_t x571 = -1LL;
	volatile int16_t x572 = INT16_MIN;

	t92 = ((x569^x570)<<(x571==x572));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x575 = INT16_MAX;
	uint8_t x576 = UINT8_MAX;
	int32_t t93 = 1;

	t93 = ((x573^x574)<<(x575==x576));

	if (t93 != 22) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x581 = INT8_MAX;
	static uint64_t x583 = 7508894LLU;
	int16_t x584 = INT16_MAX;
	volatile int32_t t94 = -352199567;

	t94 = ((x581^x582)<<(x583==x584));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x586 = UINT8_MAX;
	uint16_t x587 = UINT16_MAX;
	uint64_t x588 = 1101264474893686LLU;
	uint32_t t95 = 108831U;

	t95 = ((x585^x586)<<(x587==x588));

	if (t95 != 1038U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x593 = 65U;
	volatile uint64_t x594 = 531321363216656LLU;
	volatile int32_t x595 = INT32_MAX;
	int32_t x596 = -14;
	uint64_t t96 = 318836952382389LLU;

	t96 = ((x593^x594)<<(x595==x596));

	if (t96 != 531321363216721LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x597 = -5503;
	int32_t x598 = INT32_MIN;
	static int64_t x599 = 24495228LL;

	t97 = ((x597^x598)<<(x599==x600));

	if (t97 != 2147478145) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x601 = UINT32_MAX;
	uint64_t x602 = 240783717LLU;
	int16_t x603 = 8183;
	int32_t x604 = INT32_MIN;
	volatile uint64_t t98 = 457308437919LLU;

	t98 = ((x601^x602)<<(x603==x604));

	if (t98 != 4054183578LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x605 = INT16_MAX;
	int16_t x606 = 431;
	uint16_t x607 = UINT16_MAX;
	int32_t t99 = -38408486;

	t99 = ((x605^x606)<<(x607==x608));

	if (t99 != 32336) { NG(); } else { ; }
	
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

