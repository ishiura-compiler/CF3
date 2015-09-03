#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x2 = UINT32_MAX;
static volatile int64_t t0 = 3574LL;
int8_t x22 = -13;
int16_t x23 = -11067;
int8_t x27 = 8;
volatile int16_t x32 = INT16_MIN;
uint64_t x40 = 408449LLU;
uint8_t x41 = 111U;
uint64_t x50 = 2LLU;
static volatile uint64_t t7 = 6700622584996322LLU;
static uint64_t x54 = UINT64_MAX;
int8_t x75 = 21;
uint32_t t10 = 18652940U;
static uint16_t x81 = UINT16_MAX;
int64_t t13 = -3LL;
volatile int16_t x89 = 0;
int16_t x102 = -491;
volatile uint64_t x116 = UINT64_MAX;
volatile int64_t x133 = INT64_MIN;
static int8_t x136 = 29;
volatile uint8_t x138 = 14U;
static volatile uint32_t t20 = 18527U;
int32_t x149 = 26189820;
static uint16_t x161 = 19U;
static int8_t x162 = -17;
uint64_t x173 = 3799349417288LLU;
uint32_t x177 = 2253958U;
uint32_t x180 = UINT32_MAX;
int8_t x182 = 35;
int16_t x193 = -12052;
int16_t x207 = INT16_MIN;
int16_t x210 = INT16_MIN;
volatile int32_t x212 = -1;
static volatile int32_t x214 = -2;
uint16_t x216 = UINT16_MAX;
volatile int32_t t37 = 5426;
int64_t t38 = -47LL;
uint32_t x226 = UINT32_MAX;
uint16_t x237 = 418U;
int32_t x244 = INT32_MAX;
volatile int64_t x250 = -468242LL;
volatile uint16_t x258 = 761U;
volatile int32_t t46 = -203;
uint64_t x271 = 20665742852011LLU;
uint16_t x275 = 13109U;
int16_t x287 = 1;
static int16_t x293 = INT16_MAX;
static uint16_t x302 = 0U;
uint8_t x304 = UINT8_MAX;
volatile uint8_t x307 = 5U;
uint32_t x315 = UINT32_MAX;
static uint32_t t57 = 121066U;
static uint8_t x319 = 26U;
int64_t x324 = 2539380LL;
uint64_t x329 = 2828046LLU;
int8_t x336 = INT8_MIN;
volatile uint64_t t62 = 1993299067567400284LLU;
uint8_t x340 = UINT8_MAX;
volatile int32_t t63 = -53899;
volatile int64_t x341 = -3290135LL;
volatile uint64_t x347 = UINT64_MAX;
int16_t x353 = -1;
int16_t x355 = INT16_MIN;
volatile uint16_t x360 = 1046U;
uint32_t x371 = 2800093U;
static uint64_t x376 = 7453384LLU;
int32_t x377 = -59;
int16_t x379 = 3748;
uint64_t t71 = 33641116870106LLU;
int8_t x381 = INT8_MIN;
int64_t x387 = INT64_MIN;
int32_t x388 = -1;
volatile int64_t t73 = -519237LL;
uint32_t x389 = UINT32_MAX;
int8_t x390 = 5;
static int8_t x392 = INT8_MIN;
uint32_t t74 = 29728278U;
static uint8_t x394 = 1U;
int32_t x395 = -3;
int16_t x398 = INT16_MIN;
static volatile uint64_t t76 = 4LLU;
uint64_t x401 = 1994LLU;
int8_t x414 = INT8_MIN;
int32_t x416 = 713405980;
static volatile int64_t t80 = -127759159367LL;
static int64_t x440 = -1LL;
int64_t x443 = INT64_MIN;
int16_t x445 = -1;
int64_t t84 = 9077582450082059LL;
int8_t x453 = -1;
static int8_t x459 = -1;
volatile uint64_t t87 = 1709117LLU;
int16_t x481 = INT16_MIN;
static volatile int32_t x482 = 102;
volatile int8_t x497 = INT8_MIN;
uint32_t x501 = 24U;
int16_t x510 = INT16_MIN;
int32_t x511 = INT32_MIN;
uint8_t x520 = UINT8_MAX;
static volatile int32_t x522 = 25;
int64_t x523 = -1LL;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int16_t x3 = -3226;
	int64_t x4 = INT64_MIN;

	t0 = ((x1|x2)%(x3&x4));

	if (t0 != 4294967295LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x21 = INT64_MAX;
	int8_t x24 = INT8_MIN;
	static int64_t t1 = -8345844472854678LL;

	t1 = ((x21|x22)%(x23&x24));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x25 = 8053;
	int16_t x26 = -27;
	uint16_t x28 = 62U;
	static int32_t t2 = 473;

	t2 = ((x25|x26)%(x27&x28));

	if (t2 != -3) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = INT8_MAX;
	static volatile int64_t x31 = INT64_MAX;
	volatile int64_t t3 = 2LL;

	t3 = ((x29|x30)%(x31&x32));

	if (t3 != -2147483521LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x33 = -1;
	static volatile uint32_t x34 = UINT32_MAX;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = INT16_MAX;
	volatile uint32_t t4 = 958401596U;

	t4 = ((x33|x34)%(x35&x36));

	if (t4 != 3U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x37 = INT16_MIN;
	static uint8_t x38 = 21U;
	static int16_t x39 = -5138;
	uint64_t t5 = 23394LLU;

	t5 = ((x37|x38)%(x39&x40));

	if (t5 != 362261LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x42 = -1;
	volatile uint8_t x43 = 5U;
	static uint64_t x44 = 147287104499LLU;
	uint64_t t6 = 5225258959846LLU;

	t6 = ((x41|x42)%(x43&x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x51 = 14572340233977811LLU;
	uint8_t x52 = 9U;

	t7 = ((x49|x50)%(x51&x52));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x53 = 163U;
	uint64_t x55 = 935934182064787LLU;
	static int16_t x56 = -1;
	volatile uint64_t t8 = 338650133557936LLU;

	t8 = ((x53|x54)%(x55&x56));

	if (t8 != 417279394664632LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x65 = INT8_MIN;
	int8_t x66 = 60;
	int32_t x67 = INT32_MIN;
	volatile int32_t x68 = INT32_MIN;
	int32_t t9 = 44688;

	t9 = ((x65|x66)%(x67&x68));

	if (t9 != -68) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int8_t x74 = 39;
	uint8_t x76 = 48U;

	t10 = ((x73|x74)%(x75&x76));

	if (t10 != 15U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x77 = 16344U;
	uint8_t x78 = 31U;
	int64_t x79 = -1LL;
	int64_t x80 = -1LL;
	volatile int64_t t11 = 236466788LL;

	t11 = ((x77|x78)%(x79&x80));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x82 = -5606772203LL;
	int16_t x83 = INT16_MIN;
	static int16_t x84 = INT16_MIN;
	static volatile int64_t t12 = -487621282157LL;

	t12 = ((x81|x82)%(x83&x84));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x85 = 7343U;
	static int32_t x86 = 208961852;
	int16_t x87 = -1;
	volatile int64_t x88 = -1LL;

	t13 = ((x85|x86)%(x87&x88));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x90 = 4872U;
	int8_t x91 = INT8_MIN;
	static volatile int32_t x92 = INT32_MIN;
	int32_t t14 = -5436047;

	t14 = ((x89|x90)%(x91&x92));

	if (t14 != 4872) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x101 = 464298LL;
	int32_t x103 = INT32_MIN;
	static int32_t x104 = -1;
	static volatile int64_t t15 = 27682695LL;

	t15 = ((x101|x102)%(x103&x104));

	if (t15 != -65LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x113 = INT64_MIN;
	volatile uint8_t x114 = 0U;
	volatile int16_t x115 = INT16_MAX;
	volatile uint64_t t16 = 8900066857288948317LLU;

	t16 = ((x113|x114)%(x115&x116));

	if (t16 != 8LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x125 = 284006U;
	static uint32_t x126 = 786325147U;
	volatile int64_t x127 = -1LL;
	int32_t x128 = INT32_MIN;
	int64_t t17 = 391776709308964LL;

	t17 = ((x125|x126)%(x127&x128));

	if (t17 != 786325503LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x130 = 7;
	uint32_t x131 = UINT32_MAX;
	int16_t x132 = INT16_MIN;
	volatile int64_t t18 = -27719544894LL;

	t18 = ((x129|x130)%(x131&x132));

	if (t18 != -536870905LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x134 = INT8_MAX;
	int32_t x135 = -1;
	int64_t t19 = 29489LL;

	t19 = ((x133|x134)%(x135&x136));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x137 = -1;
	static volatile uint32_t x139 = 44531U;
	static uint8_t x140 = UINT8_MAX;

	t20 = ((x137|x138)%(x139&x140));

	if (t20 != 129U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x141 = INT16_MIN;
	int64_t x142 = 12893953LL;
	volatile uint16_t x143 = UINT16_MAX;
	volatile uint32_t x144 = UINT32_MAX;
	int64_t t21 = 2552599359LL;

	t21 = ((x141|x142)%(x143&x144));

	if (t21 != -16639LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x150 = 730737372;
	int64_t x151 = 28292085371219LL;
	int8_t x152 = -1;
	int64_t t22 = -224404186935716787LL;

	t22 = ((x149|x150)%(x151&x152));

	if (t22 != 730841084LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x153 = UINT64_MAX;
	static int32_t x154 = 507854380;
	int64_t x155 = -306426369954936LL;
	uint32_t x156 = 4187609U;
	static uint64_t t23 = 41637785602405LLU;

	t23 = ((x153|x154)%(x155&x156));

	if (t23 != 576919LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x157 = -1;
	uint64_t x158 = 1639502069532544LLU;
	uint32_t x159 = 7U;
	uint8_t x160 = 82U;
	uint64_t t24 = 16239072718289024LLU;

	t24 = ((x157|x158)%(x159&x160));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x163 = -1LL;
	static int16_t x164 = -24;
	volatile int64_t t25 = -771908931590LL;

	t25 = ((x161|x162)%(x163&x164));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x165 = INT64_MIN;
	static int8_t x166 = INT8_MIN;
	uint64_t x167 = 23692359169LLU;
	static int32_t x168 = INT32_MIN;
	uint64_t t26 = 109642LLU;

	t26 = ((x165|x166)%(x167&x168));

	if (t26 != 17179869056LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x174 = -1;
	volatile int32_t x175 = INT32_MIN;
	int8_t x176 = -1;
	uint64_t t27 = 439157443918813184LLU;

	t27 = ((x173|x174)%(x175&x176));

	if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x178 = -1;
	static int64_t x179 = -1LL;
	static int64_t t28 = -35074196730705945LL;

	t28 = ((x177|x178)%(x179&x180));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x181 = 0U;
	static uint64_t x183 = 27944444924633129LLU;
	static int8_t x184 = INT8_MAX;
	static uint64_t t29 = 12633446627963LLU;

	t29 = ((x181|x182)%(x183&x184));

	if (t29 != 35LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x185 = INT16_MIN;
	int8_t x186 = -1;
	int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MAX;
	static volatile int64_t t30 = 433857804525577LL;

	t30 = ((x185|x186)%(x187&x188));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x189 = UINT8_MAX;
	volatile int16_t x190 = 7352;
	int32_t x191 = INT32_MIN;
	static int32_t x192 = -13751091;
	int32_t t31 = -2927;

	t31 = ((x189|x190)%(x191&x192));

	if (t31 != 7423) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x194 = 951289LL;
	volatile uint32_t x195 = 9517U;
	int64_t x196 = 44537806LL;
	volatile int64_t t32 = 807338148LL;

	t32 = ((x193|x194)%(x195&x196));

	if (t32 != -931LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x197 = -194311858460534LL;
	static int16_t x198 = INT16_MIN;
	volatile uint32_t x199 = 23U;
	int8_t x200 = INT8_MAX;
	volatile int64_t t33 = 1872087425979424LL;

	t33 = ((x197|x198)%(x199&x200));

	if (t33 != -3LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x205 = INT64_MIN;
	static volatile int64_t x206 = INT64_MIN;
	int32_t x208 = INT32_MIN;
	int64_t t34 = -140682875532191LL;

	t34 = ((x205|x206)%(x207&x208));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x209 = UINT32_MAX;
	uint16_t x211 = 3U;
	volatile uint32_t t35 = 1792257U;

	t35 = ((x209|x210)%(x211&x212));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x213 = 10U;
	static volatile uint32_t x215 = UINT32_MAX;
	uint32_t t36 = 12261U;

	t36 = ((x213|x214)%(x215&x216));

	if (t36 != 65534U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x217 = -1153;
	int16_t x218 = INT16_MIN;
	int32_t x219 = -1;
	uint16_t x220 = UINT16_MAX;

	t37 = ((x217|x218)%(x219&x220));

	if (t37 != -1153) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x221 = -201309LL;
	uint8_t x222 = 1U;
	uint16_t x223 = 608U;
	volatile int8_t x224 = INT8_MIN;

	t38 = ((x221|x222)%(x223&x224));

	if (t38 != -93LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x225 = -117LL;
	static int16_t x227 = -29;
	int64_t x228 = INT64_MAX;
	volatile int64_t t39 = -922374334753LL;

	t39 = ((x225|x226)%(x227&x228));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MAX;
	int64_t x235 = 513973302746635LL;
	volatile int8_t x236 = -1;
	volatile int64_t t40 = 1636851853143097841LL;

	t40 = ((x233|x234)%(x235&x236));

	if (t40 != 65535LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x238 = INT32_MIN;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = -1LL;
	volatile int64_t t41 = 43899445LL;

	t41 = ((x237|x238)%(x239&x240));

	if (t41 != -32350LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x241 = -1;
	uint32_t x242 = UINT32_MAX;
	uint8_t x243 = UINT8_MAX;
	volatile uint32_t t42 = 558491U;

	t42 = ((x241|x242)%(x243&x244));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile uint16_t x246 = UINT16_MAX;
	uint16_t x247 = UINT16_MAX;
	uint8_t x248 = 121U;
	int64_t t43 = 81LL;

	t43 = ((x245|x246)%(x247&x248));

	if (t43 != -33LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x249 = UINT32_MAX;
	int32_t x251 = -1;
	static int16_t x252 = INT16_MAX;
	volatile int64_t t44 = -6LL;

	t44 = ((x249|x250)%(x251&x252));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x253 = 31496162U;
	static int8_t x254 = INT8_MIN;
	int8_t x255 = -49;
	int64_t x256 = -1LL;
	int64_t t45 = 143220LL;

	t45 = ((x253|x254)%(x255&x256));

	if (t45 != 9LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x259 = -1;
	uint8_t x260 = 97U;

	t46 = ((x257|x258)%(x259&x260));

	if (t46 != 60) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x265 = -1;
	volatile int32_t x266 = -28308735;
	int64_t x267 = INT64_MIN;
	int64_t x268 = -1LL;
	static int64_t t47 = 20762864LL;

	t47 = ((x265|x266)%(x267&x268));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x269 = 3087615U;
	uint32_t x270 = 5087U;
	int32_t x272 = 826;
	volatile uint64_t t48 = 127495237926LLU;

	t48 = ((x269|x270)%(x271&x272));

	if (t48 != 663LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x273 = 117U;
	volatile int64_t x274 = -546520515648091LL;
	static int16_t x276 = -1;
	volatile int64_t t49 = 25189039673LL;

	t49 = ((x273|x274)%(x275&x276));

	if (t49 != -9267LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x277 = 9U;
	uint8_t x278 = UINT8_MAX;
	int16_t x279 = -15;
	int64_t x280 = -1LL;
	volatile int64_t t50 = -232646176136251788LL;

	t50 = ((x277|x278)%(x279&x280));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x285 = 2348650070LLU;
	int16_t x286 = -72;
	uint64_t x288 = 10470037640679391LLU;
	uint64_t t51 = 1247977LLU;

	t51 = ((x285|x286)%(x287&x288));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = INT8_MAX;
	static int32_t x290 = -1;
	int16_t x291 = INT16_MIN;
	uint64_t x292 = 2395481LLU;
	static volatile uint64_t t52 = 2265LLU;

	t52 = ((x289|x290)%(x291&x292));

	if (t52 != 524287LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x294 = INT64_MIN;
	int16_t x295 = -1;
	int32_t x296 = -1318853;
	volatile int64_t t53 = -310852253325294918LL;

	t53 = ((x293|x294)%(x295&x296));

	if (t53 != -815837LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x297 = 71050361678977LL;
	int64_t x298 = 39065178LL;
	uint64_t x299 = 51627405LLU;
	volatile int64_t x300 = -1LL;
	volatile uint64_t t54 = 14891LLU;

	t54 = ((x297|x298)%(x299&x300));

	if (t54 != 8595453LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x301 = -1;
	uint16_t x303 = 6U;
	int32_t t55 = 5547;

	t55 = ((x301|x302)%(x303&x304));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = 1;
	uint8_t x306 = 1U;
	static volatile uint8_t x308 = UINT8_MAX;
	int32_t t56 = -121;

	t56 = ((x305|x306)%(x307&x308));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x313 = INT32_MIN;
	volatile int16_t x314 = 317;
	int8_t x316 = 39;

	t57 = ((x313|x314)%(x315&x316));

	if (t57 != 16U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x317 = 24063517742LL;
	static uint64_t x318 = UINT64_MAX;
	int8_t x320 = -1;
	uint64_t t58 = 135401304LLU;

	t58 = ((x317|x318)%(x319&x320));

	if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x321 = 6340891LLU;
	volatile int16_t x322 = 84;
	uint64_t x323 = 354115389751LLU;
	static uint64_t t59 = 101LLU;

	t59 = ((x321|x322)%(x323&x324));

	if (t59 != 1617655LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x325 = 3851700785414LLU;
	int64_t x326 = 3911013409449LL;
	uint32_t x327 = 170764U;
	int8_t x328 = -1;
	volatile uint64_t t60 = 6698LLU;

	t60 = ((x325|x326)%(x327&x328));

	if (t60 != 84619LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x330 = INT8_MAX;
	volatile int8_t x331 = 30;
	int32_t x332 = -8;
	volatile uint64_t t61 = 1175049723349971LLU;

	t61 = ((x329|x330)%(x331&x332));

	if (t61 != 23LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint16_t x333 = UINT16_MAX;
	int64_t x334 = -1LL;
	uint64_t x335 = UINT64_MAX;

	t62 = ((x333|x334)%(x335&x336));

	if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x337 = -1;
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 11U;

	t63 = ((x337|x338)%(x339&x340));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x342 = 41;
	int8_t x343 = -1;
	volatile int64_t x344 = 54855097LL;
	volatile int64_t t64 = 2083030736068LL;

	t64 = ((x341|x342)%(x343&x344));

	if (t64 != -3290135LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x345 = 9048;
	static int32_t x346 = -6184806;
	int8_t x348 = -11;
	uint64_t t65 = 9331LLU;

	t65 = ((x345|x346)%(x347&x348));

	if (t65 != 18446744073703367642LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x349 = 10U;
	uint32_t x350 = 39U;
	static volatile uint32_t x351 = UINT32_MAX;
	uint8_t x352 = 5U;
	static volatile uint32_t t66 = 26U;

	t66 = ((x349|x350)%(x351&x352));

	if (t66 != 2U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x354 = INT32_MIN;
	static int32_t x356 = INT32_MIN;
	volatile int32_t t67 = 20;

	t67 = ((x353|x354)%(x355&x356));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x357 = INT8_MIN;
	int64_t x358 = -15405557LL;
	static int8_t x359 = INT8_MAX;
	volatile int64_t t68 = -4LL;

	t68 = ((x357|x358)%(x359&x360));

	if (t68 != -7LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x369 = INT32_MIN;
	volatile int8_t x370 = INT8_MAX;
	int8_t x372 = INT8_MAX;
	uint32_t t69 = 240532U;

	t69 = ((x369|x370)%(x371&x372));

	if (t69 != 36U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x373 = 28667U;
	uint32_t x374 = UINT32_MAX;
	volatile int32_t x375 = -98;
	volatile uint64_t t70 = 167930748381991LLU;

	t70 = ((x373|x374)%(x375&x376));

	if (t70 != 1854975LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x378 = 1194U;
	uint64_t x380 = 21819281002227LLU;

	t71 = ((x377|x378)%(x379&x380));

	if (t71 != 1871LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x382 = 2;
	uint16_t x383 = UINT16_MAX;
	uint64_t x384 = 6505LLU;
	static uint64_t t72 = 1311389LLU;

	t72 = ((x381|x382)%(x383&x384));

	if (t72 != 5010LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x385 = 23149U;
	volatile int32_t x386 = INT32_MAX;

	t73 = ((x385|x386)%(x387&x388));

	if (t73 != 2147483647LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x391 = -1;

	t74 = ((x389|x390)%(x391&x392));

	if (t74 != 127U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x393 = 1879;
	uint32_t x396 = UINT32_MAX;
	volatile uint32_t t75 = 700U;

	t75 = ((x393|x394)%(x395&x396));

	if (t75 != 1879U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x397 = UINT64_MAX;
	int32_t x399 = -82396785;
	static uint64_t x400 = 97LLU;

	t76 = ((x397|x398)%(x399&x400));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x402 = -1;
	int32_t x403 = -228394;
	int64_t x404 = 4008782637LL;
	volatile uint64_t t77 = 354LLU;

	t77 = ((x401|x402)%(x403&x404));

	if (t77 != 1316581995LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x413 = 65363986U;
	int8_t x415 = -1;
	uint32_t t78 = 583U;

	t78 = ((x413|x414)%(x415&x416));

	if (t78 != 14531306U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x425 = UINT8_MAX;
	int8_t x426 = INT8_MIN;
	int32_t x427 = 293178;
	int16_t x428 = -254;
	static int32_t t79 = 6669;

	t79 = ((x425|x426)%(x427&x428));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = -9;
	static uint32_t x430 = UINT32_MAX;
	int8_t x431 = -1;
	volatile int64_t x432 = 190722660798974LL;

	t80 = ((x429|x430)%(x431&x432));

	if (t80 != 4294967295LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x433 = -1;
	uint32_t x434 = UINT32_MAX;
	volatile int16_t x435 = -619;
	volatile int64_t x436 = INT64_MIN;
	volatile int64_t t81 = -20828137298262LL;

	t81 = ((x433|x434)%(x435&x436));

	if (t81 != 4294967295LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x437 = 1;
	int8_t x438 = INT8_MIN;
	volatile int64_t x439 = INT64_MAX;
	volatile int64_t t82 = 13LL;

	t82 = ((x437|x438)%(x439&x440));

	if (t82 != -127LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x441 = 614LLU;
	volatile uint64_t x442 = UINT64_MAX;
	int64_t x444 = INT64_MIN;
	volatile uint64_t t83 = 33718733348LLU;

	t83 = ((x441|x442)%(x443&x444));

	if (t83 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x446 = 411820126728616LL;
	static volatile int8_t x447 = INT8_MIN;
	uint32_t x448 = 8147U;

	t84 = ((x445|x446)%(x447&x448));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x449 = INT64_MAX;
	uint64_t x450 = 116LLU;
	uint64_t x451 = UINT64_MAX;
	static int32_t x452 = INT32_MAX;
	uint64_t t85 = 31244638LLU;

	t85 = ((x449|x450)%(x451&x452));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x454 = -1;
	int64_t x455 = -983447834011234LL;
	uint64_t x456 = 71820909542LLU;
	volatile uint64_t t86 = 535383924801LLU;

	t86 = ((x453|x454)%(x455&x456));

	if (t86 != 612815049LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x457 = 173U;
	uint16_t x458 = UINT16_MAX;
	uint64_t x460 = 12LLU;

	t87 = ((x457|x458)%(x459&x460));

	if (t87 != 3LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x461 = 2;
	volatile int32_t x462 = 31;
	int32_t x463 = INT32_MIN;
	int64_t x464 = INT64_MAX;
	volatile int64_t t88 = 6252658229200916LL;

	t88 = ((x461|x462)%(x463&x464));

	if (t88 != 31LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x465 = INT64_MIN;
	volatile int8_t x466 = INT8_MIN;
	volatile int64_t x467 = 10LL;
	static uint32_t x468 = 668U;
	int64_t t89 = 5LL;

	t89 = ((x465|x466)%(x467&x468));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x483 = -83;
	volatile uint32_t x484 = 467915U;
	uint32_t t90 = 715U;

	t90 = ((x481|x482)%(x483&x484));

	if (t90 != 80810U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x485 = 34U;
	int64_t x486 = INT64_MAX;
	int8_t x487 = INT8_MAX;
	volatile int32_t x488 = -1;
	volatile int64_t t91 = -652LL;

	t91 = ((x485|x486)%(x487&x488));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x489 = INT16_MIN;
	uint32_t x490 = 12U;
	volatile int32_t x491 = INT32_MIN;
	int8_t x492 = INT8_MIN;
	volatile uint32_t t92 = 217U;

	t92 = ((x489|x490)%(x491&x492));

	if (t92 != 2147450892U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x498 = 31LL;
	int32_t x499 = -217732321;
	uint32_t x500 = 112766U;
	int64_t t93 = 40451929493233843LL;

	t93 = ((x497|x498)%(x499&x500));

	if (t93 != -97LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x502 = INT16_MIN;
	static int16_t x503 = -3;
	static int16_t x504 = -14311;
	static volatile uint32_t t94 = 432U;

	t94 = ((x501|x502)%(x503&x504));

	if (t94 != 4294934552U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x505 = UINT32_MAX;
	static uint32_t x506 = 26975682U;
	uint8_t x507 = 5U;
	static int16_t x508 = INT16_MAX;
	volatile uint32_t t95 = 18514722U;

	t95 = ((x505|x506)%(x507&x508));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x509 = -1836308467886828LL;
	int64_t x512 = INT64_MIN;
	volatile int64_t t96 = 3878528318394021184LL;

	t96 = ((x509|x510)%(x511&x512));

	if (t96 != -10988LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x513 = INT64_MIN;
	int16_t x514 = -1;
	uint64_t x515 = UINT64_MAX;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t97 = 4435LLU;

	t97 = ((x513|x514)%(x515&x516));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x517 = 0;
	volatile int16_t x518 = -6905;
	int8_t x519 = INT8_MIN;
	volatile int32_t t98 = 88;

	t98 = ((x517|x518)%(x519&x520));

	if (t98 != -121) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x521 = 26339;
	int16_t x524 = INT16_MAX;
	volatile int64_t t99 = -63643110151LL;

	t99 = ((x521|x522)%(x523&x524));

	if (t99 != 26363LL) { NG(); } else { ; }
	
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

