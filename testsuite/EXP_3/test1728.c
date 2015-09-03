#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = INT16_MIN;
int8_t x6 = -1;
volatile uint8_t x26 = 1U;
int16_t x31 = INT16_MIN;
int16_t x32 = -1;
int16_t x34 = -1;
int8_t x36 = INT8_MIN;
uint32_t t4 = 1010U;
uint8_t x43 = UINT8_MAX;
int32_t t5 = 50;
static volatile uint16_t x46 = UINT16_MAX;
static int8_t x50 = 2;
uint32_t t8 = 1165825U;
int64_t t11 = 4870827784796LL;
int32_t x77 = -31;
volatile int16_t x78 = INT16_MIN;
int16_t x82 = 15003;
uint32_t x86 = UINT32_MAX;
static uint64_t x92 = 3862178LLU;
int16_t x102 = -1139;
volatile uint64_t t19 = UINT64_MAX;
static int16_t x111 = INT16_MIN;
uint32_t x112 = 7759U;
int64_t x135 = -1LL;
volatile int32_t x140 = INT32_MIN;
int16_t x144 = -1;
int16_t x154 = INT16_MIN;
uint8_t x157 = 12U;
static uint16_t x159 = UINT16_MAX;
int16_t x167 = INT16_MAX;
uint16_t x170 = 0U;
static volatile int16_t x171 = INT16_MAX;
volatile int16_t x176 = INT16_MIN;
int8_t x193 = 5;
volatile int16_t x195 = 6;
volatile int64_t x199 = INT64_MAX;
volatile int64_t t38 = 3459550762LL;
static uint16_t x209 = 31920U;
volatile uint8_t x210 = 22U;
int8_t x223 = 1;
int64_t x227 = INT64_MAX;
uint16_t x228 = 3U;
uint64_t x229 = 607018594807073LLU;
static int64_t x239 = -1LL;
int16_t x252 = 2;
volatile int32_t t48 = -3468822;
static int64_t x260 = INT64_MIN;
volatile int8_t x266 = 6;
static uint16_t x271 = 577U;
uint8_t x294 = 9U;
uint16_t x298 = UINT16_MAX;
uint64_t x302 = UINT64_MAX;
int64_t x309 = -1LL;
int32_t x312 = INT32_MIN;
int32_t x324 = INT32_MIN;
uint64_t x328 = 108LLU;
volatile int16_t x331 = 7076;
uint32_t x333 = UINT32_MAX;
volatile int64_t x334 = -18129LL;
uint64_t t65 = 169794LLU;
uint8_t x337 = UINT8_MAX;
int64_t x344 = INT64_MIN;
static int32_t x347 = INT32_MAX;
int32_t x348 = -76;
static uint64_t x355 = 79902107LLU;
uint64_t x364 = 1041009231LLU;
int16_t x370 = INT16_MIN;
int32_t x379 = -1;
volatile uint64_t t75 = 1902080477LLU;
static int8_t x387 = INT8_MIN;
volatile int64_t x402 = -5059058622032LL;
volatile int64_t t79 = -5777981342751LL;
int16_t x408 = 0;
uint8_t x409 = 2U;
int32_t x410 = -1;
int32_t t81 = 7;
int32_t x417 = INT32_MIN;
volatile uint64_t x420 = UINT64_MAX;
int64_t x425 = -1LL;
int64_t t85 = -13910353904LL;
int16_t x431 = INT16_MIN;
volatile int64_t t86 = 1238172748LL;
uint32_t x433 = UINT32_MAX;
static int32_t x436 = -1;
volatile int64_t x439 = -4331411600057077083LL;
volatile int8_t x442 = 2;
uint32_t t91 = 118751171U;
volatile uint32_t t95 = 48U;
uint8_t x473 = 60U;
static int64_t x480 = -3596512932124LL;
uint8_t x487 = 7U;


void f0(void) {
	int32_t x7 = -21;
	int64_t x8 = -1LL;
	static volatile int64_t t0 = 3208963323234846LL;

	t0 = ((x5*x6)|(x7&x8));

	if (t0 != -21LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x25 = -1;
	static int64_t x27 = -1177822620460LL;
	volatile uint16_t x28 = 24U;
	int64_t t1 = 8983784571618833LL;

	t1 = ((x25*x26)|(x27&x28));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x29 = UINT64_MAX;
	static int64_t x30 = INT64_MIN;
	static uint64_t t2 = 69077473LLU;

	t2 = ((x29*x30)|(x31&x32));

	if (t2 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x33 = 24309U;
	int16_t x35 = -1;
	volatile uint32_t t3 = 522173365U;

	t3 = ((x33*x34)|(x35&x36));

	if (t3 != 4294967179U) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x37 = INT8_MAX;
	volatile uint32_t x38 = 77553023U;
	uint32_t x39 = 18704U;
	int32_t x40 = INT32_MIN;

	t4 = ((x37*x38)|(x39&x40));

	if (t4 != 1259299329U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	uint16_t x44 = 294U;

	t5 = ((x41*x42)|(x43&x44));

	if (t5 != -4194138) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = 17831U;
	int32_t x47 = -102750;
	static uint8_t x48 = UINT8_MAX;
	uint32_t t6 = 353861008U;

	t6 = ((x45*x46)|(x47&x48));

	if (t6 != 1168554747U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x49 = UINT8_MAX;
	uint32_t x51 = 470U;
	uint8_t x52 = UINT8_MAX;
	volatile uint32_t t7 = 736U;

	t7 = ((x49*x50)|(x51&x52));

	if (t7 != 510U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x53 = UINT8_MAX;
	int32_t x54 = -4;
	uint32_t x55 = 692966149U;
	uint16_t x56 = UINT16_MAX;

	t8 = ((x53*x54)|(x55&x56));

	if (t8 != 4294967045U) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = 14U;
	int32_t x58 = -1;
	int64_t x59 = 1562588362774LL;
	volatile int16_t x60 = -1327;
	static int64_t t9 = 139261099665874LL;

	t9 = ((x57*x58)|(x59&x60));

	if (t9 != -14LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x61 = 101U;
	int16_t x62 = INT16_MIN;
	int8_t x63 = INT8_MIN;
	volatile int16_t x64 = -1;
	int32_t t10 = -3114;

	t10 = ((x61*x62)|(x63&x64));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x69 = -1;
	int8_t x70 = INT8_MAX;
	volatile int64_t x71 = -1LL;
	static int16_t x72 = 1;

	t11 = ((x69*x70)|(x71&x72));

	if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x73 = INT32_MAX;
	uint32_t x74 = 8315271U;
	int32_t x75 = INT32_MAX;
	int8_t x76 = -1;
	volatile uint32_t t12 = 38U;

	t12 = ((x73*x74)|(x75&x76));

	if (t12 != 2147483647U) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x79 = -1;
	int8_t x80 = -1;
	int32_t t13 = 636;

	t13 = ((x77*x78)|(x79&x80));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x81 = -1LL;
	static int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	static volatile int64_t t14 = -72625863709LL;

	t14 = ((x81*x82)|(x83&x84));

	if (t14 != -15003LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = INT8_MIN;
	int32_t x87 = -180;
	uint32_t x88 = 215613U;
	static uint32_t t15 = 1U;

	t15 = ((x85*x86)|(x87&x88));

	if (t15 != 215692U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -50;
	uint16_t x90 = 1228U;
	int32_t x91 = -5;
	uint64_t t16 = 117709LLU;

	t16 = ((x89*x90)|(x91&x92));

	if (t16 != 18446744073709551274LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = -4LL;
	volatile int8_t x94 = -1;
	volatile int32_t x95 = -1;
	int64_t x96 = -1LL;
	volatile int64_t t17 = 38644458LL;

	t17 = ((x93*x94)|(x95&x96));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x97 = INT8_MIN;
	uint8_t x98 = UINT8_MAX;
	volatile uint16_t x99 = 74U;
	uint32_t x100 = 86870945U;
	uint32_t t18 = 20025125U;

	t18 = ((x97*x98)|(x99&x100));

	if (t18 != 4294934656U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x101 = 1493107626U;
	int16_t x103 = -1;
	uint64_t x104 = UINT64_MAX;

	t19 = ((x101*x102)|(x103&x104));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = 174291LL;
	int16_t x106 = -1;
	static int64_t x107 = INT64_MAX;
	static int32_t x108 = -1;
	int64_t t20 = 94945291852251054LL;

	t20 = ((x105*x106)|(x107&x108));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x109 = 3142LLU;
	uint32_t x110 = UINT32_MAX;
	uint64_t t21 = 30304115LLU;

	t21 = ((x109*x110)|(x111&x112));

	if (t21 != 13494787240890LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x117 = INT8_MAX;
	int64_t x118 = -1LL;
	volatile int32_t x119 = INT32_MIN;
	volatile int64_t x120 = INT64_MIN;
	int64_t t22 = -1093825926916797941LL;

	t22 = ((x117*x118)|(x119&x120));

	if (t22 != -127LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	static int32_t x136 = -86061386;
	volatile int64_t t23 = -2LL;

	t23 = ((x133*x134)|(x135&x136));

	if (t23 != -86061386LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x137 = 52U;
	uint64_t x138 = UINT64_MAX;
	uint64_t x139 = 6884551789834LLU;
	volatile uint64_t t24 = 1781LLU;

	t24 = ((x137*x138)|(x139&x140));

	if (t24 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = 0;
	static int64_t x142 = -149537LL;
	int16_t x143 = -1;
	volatile int64_t t25 = 13641917521LL;

	t25 = ((x141*x142)|(x143&x144));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x145 = INT16_MAX;
	static int8_t x146 = INT8_MAX;
	static uint64_t x147 = 7664879201614338LLU;
	uint32_t x148 = UINT32_MAX;
	volatile uint64_t t26 = 26326397039427695LLU;

	t26 = ((x145*x146)|(x147&x148));

	if (t26 != 3258974083LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = 3;
	int32_t x150 = 14287035;
	uint64_t x151 = UINT64_MAX;
	int64_t x152 = -187919LL;
	uint64_t t27 = 2LLU;

	t27 = ((x149*x150)|(x151&x152));

	if (t27 != 18446744073709495281LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x153 = -1;
	int64_t x155 = -127563217LL;
	uint8_t x156 = 18U;
	volatile int64_t t28 = 151LL;

	t28 = ((x153*x154)|(x155&x156));

	if (t28 != 32770LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x158 = 2;
	int8_t x160 = INT8_MAX;
	int32_t t29 = -64;

	t29 = ((x157*x158)|(x159&x160));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x165 = INT8_MIN;
	int8_t x166 = 12;
	int64_t x168 = INT64_MIN;
	volatile int64_t t30 = 16483719186LL;

	t30 = ((x165*x166)|(x167&x168));

	if (t30 != -1536LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x169 = 7596518;
	int32_t x172 = INT32_MIN;
	volatile int32_t t31 = -1;

	t31 = ((x169*x170)|(x171&x172));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x173 = 1U;
	uint32_t x174 = 422U;
	volatile uint64_t x175 = 125409941862LLU;
	static volatile uint64_t t32 = 25101654597407608LLU;

	t32 = ((x173*x174)|(x175&x176));

	if (t32 != 125409919398LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile uint8_t x178 = 3U;
	static volatile int64_t x179 = INT64_MIN;
	int32_t x180 = 713266;
	int64_t t33 = 3378232810054LL;

	t33 = ((x177*x178)|(x179&x180));

	if (t33 != 765LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x185 = UINT64_MAX;
	volatile int8_t x186 = -1;
	uint16_t x187 = 93U;
	int64_t x188 = INT64_MIN;
	uint64_t t34 = 23670440LLU;

	t34 = ((x185*x186)|(x187&x188));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x194 = INT8_MIN;
	volatile int8_t x196 = INT8_MIN;
	int32_t t35 = -27345;

	t35 = ((x193*x194)|(x195&x196));

	if (t35 != -640) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x197 = 1968564233818LL;
	volatile int64_t x198 = 346LL;
	static int16_t x200 = -982;
	volatile int64_t t36 = -678330820LL;

	t36 = ((x197*x198)|(x199&x200));

	if (t36 != 9223372036854775214LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	int8_t x202 = INT8_MAX;
	volatile int16_t x203 = INT16_MIN;
	int32_t x204 = 17790;
	int32_t t37 = 2;

	t37 = ((x201*x202)|(x203&x204));

	if (t37 != -4161536) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x205 = -3920686179118066LL;
	uint32_t x206 = 1U;
	uint32_t x207 = 255487193U;
	static uint8_t x208 = 71U;

	t38 = ((x205*x206)|(x207&x208));

	if (t38 != -3920686179118001LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x211 = -1LL;
	int64_t x212 = INT64_MAX;
	int64_t t39 = INT64_MAX;

	t39 = ((x209*x210)|(x211&x212));

	if (t39 != INT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x213 = 13401U;
	volatile int32_t x214 = 22504;
	volatile int64_t x215 = INT64_MAX;
	int8_t x216 = INT8_MIN;
	static volatile int64_t t40 = 2277LL;

	t40 = ((x213*x214)|(x215&x216));

	if (t40 != 9223372036854775720LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x217 = 30U;
	int8_t x218 = -1;
	uint8_t x219 = 18U;
	int64_t x220 = -3219373656492234LL;
	static volatile int64_t t41 = 914241LL;

	t41 = ((x217*x218)|(x219&x220));

	if (t41 != -14LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = -4;
	int16_t x222 = INT16_MAX;
	int32_t x224 = INT32_MAX;
	int32_t t42 = 2;

	t42 = ((x221*x222)|(x223&x224));

	if (t42 != -131067) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = INT8_MIN;
	uint32_t x226 = UINT32_MAX;
	volatile int64_t t43 = -369785665686662701LL;

	t43 = ((x225*x226)|(x227&x228));

	if (t43 != 131LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x230 = 10U;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MAX;
	volatile uint64_t t44 = 110143879LLU;

	t44 = ((x229*x230)|(x231&x232));

	if (t44 != 6070185948070730LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x233 = UINT64_MAX;
	static uint16_t x234 = UINT16_MAX;
	uint8_t x235 = 55U;
	volatile uint16_t x236 = UINT16_MAX;
	volatile uint64_t t45 = 140492299LLU;

	t45 = ((x233*x234)|(x235&x236));

	if (t45 != 18446744073709486135LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = INT8_MAX;
	int16_t x238 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	int64_t t46 = -4821546310LL;

	t46 = ((x237*x238)|(x239&x240));

	if (t46 != -4128769LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x245 = 7639035;
	volatile uint64_t x246 = 1LLU;
	int8_t x247 = INT8_MIN;
	uint64_t x248 = 3967360306334LLU;
	volatile uint64_t t47 = 5668746862169498LLU;

	t47 = ((x245*x246)|(x247&x248));

	if (t47 != 3967366893563LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x249 = 3;
	int8_t x250 = 21;
	int8_t x251 = INT8_MIN;

	t48 = ((x249*x250)|(x251&x252));

	if (t48 != 63) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = 143LL;
	uint8_t x254 = 2U;
	uint16_t x255 = 30U;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t49 = 18121661175386158LL;

	t49 = ((x253*x254)|(x255&x256));

	if (t49 != 286LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x257 = 54LLU;
	int16_t x258 = 5144;
	uint64_t x259 = 1470148417566384LLU;
	static volatile uint64_t t50 = 27LLU;

	t50 = ((x257*x258)|(x259&x260));

	if (t50 != 277776LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x265 = -1;
	static uint8_t x267 = 13U;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t51 = 15001367;

	t51 = ((x265*x266)|(x267&x268));

	if (t51 != -6) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x269 = INT16_MIN;
	uint16_t x270 = UINT16_MAX;
	volatile int32_t x272 = -1;
	int32_t t52 = 6090;

	t52 = ((x269*x270)|(x271&x272));

	if (t52 != -2147450303) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x273 = -1;
	int16_t x274 = INT16_MIN;
	static uint32_t x275 = UINT32_MAX;
	int64_t x276 = -1LL;
	static int64_t t53 = 12227086215104564LL;

	t53 = ((x273*x274)|(x275&x276));

	if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = 11840;
	int64_t x278 = 59732LL;
	volatile int32_t x279 = 669;
	int16_t x280 = -552;
	volatile int64_t t54 = 1LL;

	t54 = ((x277*x278)|(x279&x280));

	if (t54 != 707227032LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x285 = 15080U;
	volatile int16_t x286 = INT16_MIN;
	static int32_t x287 = 161796888;
	int16_t x288 = INT16_MAX;
	static int32_t t55 = -38815;

	t55 = ((x285*x286)|(x287&x288));

	if (t55 != -494120168) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x289 = UINT64_MAX;
	int16_t x290 = -1;
	volatile int16_t x291 = 4516;
	uint16_t x292 = 820U;
	uint64_t t56 = 1623059150722228LLU;

	t56 = ((x289*x290)|(x291&x292));

	if (t56 != 293LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x293 = -1;
	int8_t x295 = INT8_MIN;
	int16_t x296 = 3;
	static volatile int32_t t57 = 3354222;

	t57 = ((x293*x294)|(x295&x296));

	if (t57 != -9) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x297 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	int8_t x300 = -1;
	int32_t t58 = -687;

	t58 = ((x297*x298)|(x299&x300));

	if (t58 != -2147450880) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MAX;
	int8_t x303 = INT8_MAX;
	static volatile uint8_t x304 = 0U;
	static volatile uint64_t t59 = 2909912862391231LLU;

	t59 = ((x301*x302)|(x303&x304));

	if (t59 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x310 = 17309690170029LLU;
	int64_t x311 = -33107552905LL;
	volatile uint64_t t60 = 515110980710016460LLU;

	t60 = ((x309*x310)|(x311&x312));

	if (t60 != 18446744046967780691LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x313 = INT16_MIN;
	volatile uint64_t x314 = UINT64_MAX;
	int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;
	static uint64_t t61 = 190762LLU;

	t61 = ((x313*x314)|(x315&x316));

	if (t61 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = -1;
	static volatile int32_t x322 = 365442890;
	volatile int32_t x323 = INT32_MIN;
	int32_t t62 = 448;

	t62 = ((x321*x322)|(x323&x324));

	if (t62 != -365442890) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x325 = -1;
	int64_t x326 = -1LL;
	uint16_t x327 = UINT16_MAX;
	volatile uint64_t t63 = 60763316411820LLU;

	t63 = ((x325*x326)|(x327&x328));

	if (t63 != 109LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x329 = 3499U;
	uint8_t x330 = 7U;
	volatile uint32_t x332 = 1633511U;
	volatile uint32_t t64 = 14U;

	t64 = ((x329*x330)|(x331&x332));

	if (t64 != 24493U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x335 = INT64_MIN;
	uint64_t x336 = 350332231779LLU;

	t65 = ((x333*x334)|(x335&x336));

	if (t65 != 18446666210247460561LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x338 = 3;
	int8_t x339 = -1;
	uint16_t x340 = UINT16_MAX;
	volatile int32_t t66 = -217314;

	t66 = ((x337*x338)|(x339&x340));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x341 = 7;
	static volatile int32_t x342 = -3615;
	volatile int8_t x343 = -53;
	volatile int64_t t67 = 110489210854LL;

	t67 = ((x341*x342)|(x343&x344));

	if (t67 != -25305LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x345 = 9U;
	int32_t x346 = -2390;
	static volatile int32_t t68 = -57734;

	t68 = ((x345*x346)|(x347&x348));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x353 = 2220441290462369730LLU;
	int16_t x354 = -1;
	volatile int16_t x356 = -1;
	uint64_t t69 = 112516920656229672LLU;

	t69 = ((x353*x354)|(x355&x356));

	if (t69 != 16226302783255707071LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x361 = UINT16_MAX;
	volatile uint64_t x362 = UINT64_MAX;
	volatile uint64_t x363 = 7LLU;
	volatile uint64_t t70 = 1420224571LLU;

	t70 = ((x361*x362)|(x363&x364));

	if (t70 != 18446744073709486087LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x365 = -1;
	int8_t x366 = 5;
	int16_t x367 = -510;
	int32_t x368 = -1;
	static int32_t t71 = 358826784;

	t71 = ((x365*x366)|(x367&x368));

	if (t71 != -5) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x369 = 0;
	int16_t x371 = -1;
	int64_t x372 = INT64_MIN;
	volatile int64_t t72 = INT64_MIN;

	t72 = ((x369*x370)|(x371&x372));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x373 = 318886977U;
	int16_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int16_t x376 = -1;
	int64_t t73 = 14700207LL;

	t73 = ((x373*x374)|(x375&x376));

	if (t73 != -9223372032878695489LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x377 = INT64_MAX;
	int32_t x378 = -1;
	static uint16_t x380 = 12U;
	volatile int64_t t74 = 981423LL;

	t74 = ((x377*x378)|(x379&x380));

	if (t74 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x381 = 1206073317935LLU;
	volatile int8_t x382 = INT8_MIN;
	int16_t x383 = INT16_MAX;
	uint32_t x384 = UINT32_MAX;

	t75 = ((x381*x382)|(x383&x384));

	if (t75 != 18446589696324861951LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x385 = -41664;
	static volatile int32_t x386 = -1;
	int8_t x388 = INT8_MIN;
	static int32_t t76 = -3748;

	t76 = ((x385*x386)|(x387&x388));

	if (t76 != -64) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x393 = 1062368608641LLU;
	volatile int16_t x394 = INT16_MAX;
	volatile uint64_t x395 = 105571724LLU;
	int64_t x396 = INT64_MIN;
	static volatile uint64_t t77 = 8LLU;

	t77 = ((x393*x394)|(x395&x396));

	if (t77 != 34810632199339647LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x397 = -1;
	int8_t x398 = INT8_MIN;
	static int32_t x399 = INT32_MIN;
	int32_t x400 = 1134671;
	int32_t t78 = -6;

	t78 = ((x397*x398)|(x399&x400));

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x401 = -1;
	static uint32_t x403 = 3U;
	int16_t x404 = INT16_MIN;

	t79 = ((x401*x402)|(x403&x404));

	if (t79 != 5059058622032LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x405 = INT8_MAX;
	int16_t x406 = INT16_MAX;
	int16_t x407 = 1478;
	volatile int32_t t80 = 472;

	t80 = ((x405*x406)|(x407&x408));

	if (t80 != 4161409) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x411 = INT8_MIN;
	int16_t x412 = INT16_MIN;

	t81 = ((x409*x410)|(x411&x412));

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x413 = INT8_MIN;
	uint16_t x414 = UINT16_MAX;
	static int16_t x415 = INT16_MAX;
	static volatile uint32_t x416 = UINT32_MAX;
	static uint32_t t82 = 127307632U;

	t82 = ((x413*x414)|(x415&x416));

	if (t82 != 4286611455U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x418 = 62194LLU;
	int64_t x419 = INT64_MAX;
	uint64_t t83 = UINT64_MAX;

	t83 = ((x417*x418)|(x419&x420));

	if (t83 != UINT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x421 = INT8_MIN;
	int16_t x422 = INT16_MIN;
	volatile int8_t x423 = INT8_MAX;
	int32_t x424 = -7006;
	volatile int32_t t84 = -332654;

	t84 = ((x421*x422)|(x423&x424));

	if (t84 != 4194338) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x426 = INT64_MAX;
	int16_t x427 = -1;
	int16_t x428 = INT16_MIN;

	t85 = ((x425*x426)|(x427&x428));

	if (t85 != -32767LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x429 = 4U;
	int64_t x430 = 6006LL;
	int16_t x432 = -1;

	t86 = ((x429*x430)|(x431&x432));

	if (t86 != -8744LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x434 = -1;
	int64_t x435 = 7702LL;
	static volatile int64_t t87 = -93707895LL;

	t87 = ((x433*x434)|(x435&x436));

	if (t87 != 7703LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x437 = -1;
	uint32_t x438 = 48U;
	int16_t x440 = -1516;
	int64_t t88 = 130514441LL;

	t88 = ((x437*x438)|(x439&x440));

	if (t88 != -4331411596745113644LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x441 = 1;
	volatile uint16_t x443 = UINT16_MAX;
	volatile int8_t x444 = INT8_MIN;
	volatile int32_t t89 = -1320;

	t89 = ((x441*x442)|(x443&x444));

	if (t89 != 65410) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x445 = INT16_MIN;
	volatile uint8_t x446 = 14U;
	uint16_t x447 = 7U;
	int16_t x448 = INT16_MIN;
	volatile int32_t t90 = -152260699;

	t90 = ((x445*x446)|(x447&x448));

	if (t90 != -458752) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x449 = INT8_MIN;
	static int16_t x450 = -1;
	volatile uint32_t x451 = UINT32_MAX;
	int8_t x452 = INT8_MIN;

	t91 = ((x449*x450)|(x451&x452));

	if (t91 != 4294967168U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x457 = 21U;
	uint64_t x458 = UINT64_MAX;
	int64_t x459 = INT64_MIN;
	int8_t x460 = INT8_MAX;
	uint64_t t92 = 145718766LLU;

	t92 = ((x457*x458)|(x459&x460));

	if (t92 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x461 = 48;
	static uint32_t x462 = UINT32_MAX;
	volatile uint8_t x463 = UINT8_MAX;
	static uint8_t x464 = 0U;
	static volatile uint32_t t93 = 642586U;

	t93 = ((x461*x462)|(x463&x464));

	if (t93 != 4294967248U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint8_t x465 = 5U;
	volatile int8_t x466 = INT8_MAX;
	int32_t x467 = INT32_MIN;
	volatile int16_t x468 = INT16_MIN;
	static volatile int32_t t94 = 61;

	t94 = ((x465*x466)|(x467&x468));

	if (t94 != -2147483013) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x469 = INT16_MIN;
	static int8_t x470 = INT8_MIN;
	static int32_t x471 = -1;
	uint32_t x472 = 29254032U;

	t95 = ((x469*x470)|(x471&x472));

	if (t95 != 33448336U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x474 = 1U;
	int32_t x475 = INT32_MIN;
	int16_t x476 = -1;
	static volatile int32_t t96 = 1278604;

	t96 = ((x473*x474)|(x475&x476));

	if (t96 != -2147483588) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x477 = 1;
	volatile int64_t x478 = INT64_MIN;
	volatile int32_t x479 = INT32_MIN;
	volatile int64_t t97 = 6777902325LL;

	t97 = ((x477*x478)|(x479&x480));

	if (t97 != -3597035110400LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x481 = 347;
	int8_t x482 = -1;
	uint16_t x483 = 125U;
	volatile uint16_t x484 = 2U;
	int32_t t98 = -217613;

	t98 = ((x481*x482)|(x483&x484));

	if (t98 != -347) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x485 = 50;
	int8_t x486 = -15;
	int8_t x488 = INT8_MIN;
	volatile int32_t t99 = 61955;

	t99 = ((x485*x486)|(x487&x488));

	if (t99 != -750) { NG(); } else { ; }
	
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

