#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x1 = -2;
int64_t x4 = -1LL;
static int64_t t0 = -1293758312951975LL;
static int64_t x9 = INT64_MIN;
int32_t x11 = -84966;
volatile int8_t x13 = -1;
uint64_t t3 = 39632847060117LLU;
int8_t x18 = -1;
volatile int64_t t5 = 779780212302992316LL;
uint32_t x33 = UINT32_MAX;
volatile uint8_t x34 = 9U;
int32_t x37 = 15112036;
static volatile int64_t t10 = 123196058LL;
int8_t x57 = INT8_MIN;
volatile uint64_t x58 = 17420539048015570LLU;
volatile uint64_t x62 = 205298164061LLU;
volatile uint32_t x74 = 1695U;
volatile int8_t x77 = -1;
volatile uint32_t x84 = 3U;
int8_t x90 = 11;
uint64_t t18 = 16331085LLU;
uint8_t x106 = 6U;
int64_t x113 = -1LL;
static uint32_t x123 = UINT32_MAX;
int32_t x132 = 2488;
int64_t x141 = -1LL;
volatile uint8_t x156 = 8U;
int32_t t31 = 2;
int16_t x163 = 0;
volatile int8_t x177 = -1;
int32_t x182 = INT32_MIN;
int64_t x183 = -7407494095320LL;
int32_t x184 = -1;
int8_t x187 = -1;
int8_t x221 = -1;
static int8_t x225 = INT8_MAX;
int32_t t41 = -138;
volatile int8_t x231 = -47;
volatile int8_t x232 = INT8_MIN;
volatile uint64_t x233 = UINT64_MAX;
uint64_t t43 = 1524364LLU;
uint8_t x238 = 5U;
int32_t x242 = INT32_MIN;
static int16_t x244 = INT16_MAX;
int8_t x245 = -1;
uint64_t t48 = 520367842173083019LLU;
int64_t x270 = -650016032LL;
int64_t x272 = -1LL;
static uint16_t x277 = 1953U;
volatile int16_t x278 = INT16_MAX;
int8_t x302 = INT8_MIN;
volatile int32_t x309 = INT32_MIN;
uint32_t x313 = UINT32_MAX;
int8_t x317 = INT8_MAX;
int32_t x319 = -1;
volatile int64_t t60 = -29719LL;
volatile int64_t t62 = -246LL;
uint64_t x330 = 2597392106210LLU;
volatile uint64_t t63 = 733112776220LLU;
uint64_t x343 = 8773061789728LLU;
volatile uint8_t x344 = 3U;
uint64_t t67 = 3608054164741LLU;
int32_t x361 = -10886;
int16_t x362 = 629;
uint32_t x364 = 30204691U;
static int64_t t70 = 84LL;
uint64_t x378 = 401263987LLU;
uint64_t t74 = 3LLU;
int8_t x394 = -14;
volatile int32_t x395 = INT32_MAX;
int8_t x399 = 0;
uint16_t x401 = UINT16_MAX;
int64_t x404 = -1162486908064354565LL;
int16_t x412 = 803;
int32_t x415 = 2922490;
uint32_t x417 = UINT32_MAX;
static int16_t x424 = INT16_MIN;
static volatile int64_t t82 = -1072595942493924LL;
int32_t x429 = 76680;
volatile int32_t t84 = -36;
static int32_t x436 = INT32_MIN;
volatile int64_t t85 = -5967607000304LL;
volatile uint64_t x442 = 605570666612025LLU;
int8_t x443 = -1;
static volatile uint64_t t86 = 2679396553099LLU;
int8_t x453 = -1;
volatile int64_t t88 = 562926LL;
int16_t x465 = -29;
uint8_t x467 = 7U;
static uint32_t x482 = UINT32_MAX;
static int16_t x490 = INT16_MAX;
int32_t t93 = 753;
volatile int64_t t94 = -10044086743LL;
int64_t x505 = 23931234039806LL;
int64_t x513 = INT64_MIN;
int16_t x515 = INT16_MIN;
int64_t t96 = 12LL;
volatile int8_t x522 = INT8_MIN;
int32_t x526 = -98043456;
uint16_t x528 = 2795U;


void f0(void) {
	static int16_t x2 = -1;
	int32_t x3 = -1;

	t0 = (x1/((x2+x3)+x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int8_t x6 = INT8_MAX;
	static volatile int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -1;

	t1 = (x5/((x6+x7)+x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = INT8_MIN;
	int32_t x12 = -35;
	static volatile int64_t t2 = -1156664LL;

	t2 = (x9/((x10+x11)+x12));

	if (t2 != 108345828529112LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;
	volatile uint64_t x15 = 59063467LLU;
	uint8_t x16 = UINT8_MAX;

	t3 = (x13/((x14+x15)+x16));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 377U;
	int16_t x19 = 121;
	int32_t x20 = -1;
	int32_t t4 = -234737;

	t4 = (x17/((x18+x19)+x20));

	if (t4 != 3) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 904U;
	static uint16_t x26 = 702U;
	int64_t x27 = INT64_MIN;
	int32_t x28 = 35806811;

	t5 = (x25/((x26+x27)+x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int64_t x30 = INT64_MIN;
	volatile int8_t x31 = 63;
	volatile uint16_t x32 = 285U;
	volatile int64_t t6 = 119LL;

	t6 = (x29/((x30+x31)+x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x35 = 30014455U;
	uint32_t x36 = 959U;
	uint32_t t7 = 151209U;

	t7 = (x33/((x34+x35)+x36));

	if (t7 != 143U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = INT32_MAX;
	int16_t x39 = -1;
	int64_t x40 = INT64_MIN;
	int64_t t8 = 619003824941059LL;

	t8 = (x37/((x38+x39)+x40));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -1;
	int32_t x42 = -956666;
	uint64_t x43 = 464150311003LLU;
	int8_t x44 = 1;
	static volatile uint64_t t9 = 30607965461523LLU;

	t9 = (x41/((x42+x43)+x44));

	if (t9 != 39743121LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 29LL;
	static uint32_t x46 = 19395825U;
	int32_t x47 = -1;
	int64_t x48 = -144029642684LL;

	t10 = (x45/((x46+x47)+x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x59 = -1LL;
	uint8_t x60 = 0U;
	volatile uint64_t t11 = 617253131829849LLU;

	t11 = (x57/((x58+x59)+x60));

	if (t11 != 1058LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = 10734U;
	volatile int16_t x63 = INT16_MAX;
	static int64_t x64 = -40879758984107LL;
	volatile uint64_t t12 = 27774316499087LLU;

	t12 = (x61/((x62+x63)+x64));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	uint32_t x66 = 44U;
	uint64_t x67 = UINT64_MAX;
	static volatile uint64_t x68 = 23643380929587LLU;
	uint64_t t13 = 38586LLU;

	t13 = (x65/((x66+x67)+x68));

	if (t13 != 780207LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = INT32_MIN;
	uint16_t x70 = 0U;
	static uint64_t x71 = UINT64_MAX;
	static int16_t x72 = INT16_MIN;
	static uint64_t t14 = 1834056342096028LLU;

	t14 = (x69/((x70+x71)+x72));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x73 = INT64_MIN;
	volatile int64_t x75 = INT64_MIN;
	volatile uint16_t x76 = 0U;
	static volatile int64_t t15 = 29408LL;

	t15 = (x73/((x74+x75)+x76));

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x78 = -1;
	volatile int16_t x79 = INT16_MIN;
	int8_t x80 = -1;
	int32_t t16 = -1;

	t16 = (x77/((x78+x79)+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	int64_t x82 = -15323138LL;
	int32_t x83 = 57364;
	int64_t t17 = -11686LL;

	t17 = (x81/((x82+x83)+x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -1;
	uint8_t x91 = 98U;
	volatile uint64_t x92 = 10LLU;

	t18 = (x89/((x90+x91)+x92));

	if (t18 != 155014656081592870LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = INT8_MIN;
	static uint64_t x94 = 0LLU;
	int64_t x95 = INT64_MIN;
	uint32_t x96 = 483U;
	static volatile uint64_t t19 = 2861344153092LLU;

	t19 = (x93/((x94+x95)+x96));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x101 = INT64_MAX;
	static int8_t x102 = 0;
	static uint64_t x103 = 28456268282LLU;
	int32_t x104 = INT32_MIN;
	uint64_t t20 = 663003217593494951LLU;

	t20 = (x101/((x102+x103)+x104));

	if (t20 != 350581456LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x105 = 2U;
	int8_t x107 = -1;
	uint32_t x108 = 181310U;
	uint32_t t21 = 620555U;

	t21 = (x105/((x106+x107)+x108));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x109 = -1;
	static volatile int8_t x110 = INT8_MIN;
	volatile uint16_t x111 = 29814U;
	int32_t x112 = -36;
	volatile int32_t t22 = 2494927;

	t22 = (x109/((x110+x111)+x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x114 = 0U;
	static uint64_t x115 = 2518351030433LLU;
	int32_t x116 = INT32_MAX;
	volatile uint64_t t23 = 252315090556LLU;

	t23 = (x113/((x114+x115)+x116));

	if (t23 != 7318688LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x121 = -1;
	uint16_t x122 = 45U;
	int16_t x124 = INT16_MIN;
	static volatile uint32_t t24 = 32U;

	t24 = (x121/((x122+x123)+x124));

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = -88;
	int16_t x126 = -367;
	int8_t x127 = 14;
	int32_t x128 = 5658267;
	int32_t t25 = -110;

	t25 = (x125/((x126+x127)+x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x129 = 46U;
	int16_t x130 = INT16_MIN;
	int64_t x131 = INT64_MAX;
	int64_t t26 = 104037LL;

	t26 = (x129/((x130+x131)+x132));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 395441052601138473LLU;
	static int64_t x139 = -1LL;
	static volatile uint64_t x140 = UINT64_MAX;
	static uint64_t t27 = 206LLU;

	t27 = (x137/((x138+x139)+x140));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x142 = INT16_MAX;
	uint8_t x143 = 0U;
	static uint32_t x144 = 440U;
	volatile int64_t t28 = 355LL;

	t28 = (x141/((x142+x143)+x144));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = -352LL;
	static volatile int64_t x150 = INT64_MAX;
	int64_t x151 = INT64_MIN;
	volatile int16_t x152 = INT16_MAX;
	volatile int64_t t29 = 36LL;

	t29 = (x149/((x150+x151)+x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x153 = 1697U;
	uint64_t x154 = UINT64_MAX;
	uint16_t x155 = 28U;
	volatile uint64_t t30 = 16071340211697LLU;

	t30 = (x153/((x154+x155)+x156));

	if (t30 != 48LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = -24;
	int32_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	int32_t x160 = INT32_MAX;

	t31 = (x157/((x158+x159)+x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = -1;
	int32_t x162 = -952918;
	int16_t x164 = INT16_MAX;
	volatile int32_t t32 = 219;

	t32 = (x161/((x162+x163)+x164));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x165 = INT8_MAX;
	int32_t x166 = INT32_MIN;
	static uint32_t x167 = 46188753U;
	volatile int8_t x168 = -1;
	uint32_t t33 = 23801722U;

	t33 = (x165/((x166+x167)+x168));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x178 = 61U;
	volatile uint8_t x179 = 2U;
	uint64_t x180 = UINT64_MAX;
	uint64_t t34 = 2216475703639107LLU;

	t34 = (x177/((x178+x179)+x180));

	if (t34 != 297528130221121800LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t t35 = 5572290993LL;

	t35 = (x181/((x182+x183)+x184));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = -1;
	static volatile uint64_t x188 = 545331426952LLU;
	volatile uint64_t t36 = 23198LLU;

	t36 = (x185/((x186+x187)+x188));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MIN;
	uint32_t x212 = UINT32_MAX;
	volatile int64_t t37 = -2393786388398204248LL;

	t37 = (x209/((x210+x211)+x212));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x213 = 95521LLU;
	int64_t x214 = INT64_MIN;
	volatile uint32_t x215 = UINT32_MAX;
	int16_t x216 = INT16_MIN;
	volatile uint64_t t38 = 11761LLU;

	t38 = (x213/((x214+x215)+x216));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x217 = INT64_MIN;
	uint8_t x218 = 5U;
	volatile uint64_t x219 = 1283823448546175LLU;
	int16_t x220 = INT16_MIN;
	uint64_t t39 = 3069608LLU;

	t39 = (x217/((x218+x219)+x220));

	if (t39 != 7184LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	int32_t x224 = INT32_MIN;
	uint64_t t40 = 1LLU;

	t40 = (x221/((x222+x223)+x224));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x226 = 37U;
	uint8_t x227 = 2U;
	static int16_t x228 = -5630;

	t41 = (x225/((x226+x227)+x228));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = -1;
	volatile int64_t x230 = -18LL;
	int64_t t42 = -228935LL;

	t42 = (x229/((x230+x231)+x232));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x234 = UINT8_MAX;
	volatile uint8_t x235 = UINT8_MAX;
	int32_t x236 = -1;

	t43 = (x233/((x234+x235)+x236));

	if (t43 != 36241147492553146LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x237 = 308LLU;
	int8_t x239 = 10;
	static uint16_t x240 = 100U;
	volatile uint64_t t44 = 15356104281012129LLU;

	t44 = (x237/((x238+x239)+x240));

	if (t44 != 2LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MAX;
	volatile int32_t t45 = -824979;

	t45 = (x241/((x242+x243)+x244));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x246 = -1LL;
	int64_t x247 = -1722096166LL;
	int32_t x248 = 4060861;
	static int64_t t46 = -5LL;

	t46 = (x245/((x246+x247)+x248));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x253 = INT64_MIN;
	int16_t x254 = -1;
	uint64_t x255 = 17LLU;
	int16_t x256 = -1;
	uint64_t t47 = 226LLU;

	t47 = (x253/((x254+x255)+x256));

	if (t47 != 614891469123651720LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x257 = -226LL;
	volatile int16_t x258 = INT16_MAX;
	uint32_t x259 = 983712886U;
	uint64_t x260 = 2304419456019454338LLU;

	t48 = (x257/((x258+x259)+x260));

	if (t48 != 8LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x265 = INT32_MIN;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = INT64_MIN;
	static int16_t x268 = 1;
	int64_t t49 = -6062LL;

	t49 = (x265/((x266+x267)+x268));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x269 = INT32_MAX;
	uint64_t x271 = 4209459885696LLU;
	uint64_t t50 = 1765726592141595LLU;

	t50 = (x269/((x270+x271)+x272));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x279 = 132U;
	int8_t x280 = 1;
	uint32_t t51 = 24140491U;

	t51 = (x277/((x278+x279)+x280));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x281 = 1U;
	int64_t x282 = INT64_MIN;
	int8_t x283 = INT8_MAX;
	int32_t x284 = -1;
	static int64_t t52 = 242582901345095LL;

	t52 = (x281/((x282+x283)+x284));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = INT32_MAX;
	uint8_t x290 = UINT8_MAX;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = 63LLU;
	volatile uint64_t t53 = 364611347246LLU;

	t53 = (x289/((x290+x291)+x292));

	if (t53 != 11302545LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x293 = INT8_MAX;
	uint16_t x294 = 78U;
	uint8_t x295 = 13U;
	static int16_t x296 = INT16_MAX;
	volatile int32_t t54 = -32125;

	t54 = (x293/((x294+x295)+x296));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int16_t x297 = -53;
	uint8_t x298 = 4U;
	int64_t x299 = INT64_MIN;
	static volatile int64_t x300 = 30956142986357840LL;
	volatile int64_t t55 = 1489LL;

	t55 = (x297/((x298+x299)+x300));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = 76U;
	uint32_t x303 = 186604U;
	uint16_t x304 = UINT16_MAX;
	volatile uint32_t t56 = 546379233U;

	t56 = (x301/((x302+x303)+x304));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x305 = 409446129018025LLU;
	static int32_t x306 = INT32_MIN;
	volatile int32_t x307 = 352770164;
	uint16_t x308 = UINT16_MAX;
	volatile uint64_t t57 = 262905271175615LLU;

	t57 = (x305/((x306+x307)+x308));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x310 = 10429119U;
	uint16_t x311 = 5111U;
	volatile int8_t x312 = INT8_MIN;
	static uint32_t t58 = 169529710U;

	t58 = (x309/((x310+x311)+x312));

	if (t58 != 205U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x314 = -3;
	static int64_t x315 = -1LL;
	int32_t x316 = INT32_MAX;
	volatile int64_t t59 = -1840363130288610LL;

	t59 = (x313/((x314+x315)+x316));

	if (t59 != 2LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x318 = INT64_MAX;
	volatile int32_t x320 = INT32_MIN;

	t60 = (x317/((x318+x319)+x320));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x321 = 7341U;
	int64_t x322 = -28703922149349961LL;
	static volatile int16_t x323 = -1;
	uint64_t x324 = 945033204299LLU;
	volatile uint64_t t61 = 67671906772019196LLU;

	t61 = (x321/((x322+x323)+x324));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x325 = 14784U;
	int8_t x326 = -56;
	volatile int64_t x327 = -1LL;
	uint32_t x328 = 5792747U;

	t62 = (x325/((x326+x327)+x328));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x329 = 90U;
	uint32_t x331 = 18558U;
	int16_t x332 = INT16_MIN;

	t63 = (x329/((x330+x331)+x332));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x333 = 28U;
	uint32_t x334 = 464847729U;
	int32_t x335 = INT32_MAX;
	int32_t x336 = -1;
	volatile uint32_t t64 = 5381U;

	t64 = (x333/((x334+x335)+x336));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x341 = INT64_MIN;
	uint64_t x342 = UINT64_MAX;
	uint64_t t65 = 2LLU;

	t65 = (x341/((x342+x343)+x344));

	if (t65 != 1051328LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x345 = -11;
	volatile int64_t x346 = INT64_MIN;
	volatile int64_t x347 = 395LL;
	volatile uint16_t x348 = 10303U;
	volatile int64_t t66 = 101LL;

	t66 = (x345/((x346+x347)+x348));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x349 = INT8_MIN;
	uint64_t x350 = 13097776116920LLU;
	volatile int32_t x351 = -1;
	volatile int8_t x352 = -1;

	t67 = (x349/((x350+x351)+x352));

	if (t67 != 1408387LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x357 = -265088800;
	static volatile int64_t x358 = INT64_MAX;
	volatile int64_t x359 = -1LL;
	int32_t x360 = INT32_MIN;
	volatile int64_t t68 = -77923388160LL;

	t68 = (x357/((x358+x359)+x360));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x363 = INT64_MIN;
	int64_t t69 = 335LL;

	t69 = (x361/((x362+x363)+x364));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x365 = 1684U;
	uint16_t x366 = 1U;
	volatile int64_t x367 = -1LL;
	int16_t x368 = -13470;

	t70 = (x365/((x366+x367)+x368));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x373 = 140455U;
	volatile uint32_t x374 = 201097U;
	uint32_t x375 = 375411U;
	volatile int16_t x376 = INT16_MIN;
	uint32_t t71 = 1583045877U;

	t71 = (x373/((x374+x375)+x376));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x377 = INT16_MIN;
	uint64_t x379 = 0LLU;
	static int32_t x380 = 1;
	uint64_t t72 = 1057203418659153LLU;

	t72 = (x377/((x378+x379)+x380));

	if (t72 != 45971591334LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x381 = -1;
	int16_t x382 = 0;
	static volatile int64_t x383 = 455615824LL;
	int8_t x384 = INT8_MIN;
	volatile int64_t t73 = 23LL;

	t73 = (x381/((x382+x383)+x384));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x385 = 563384563382083LLU;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MAX;

	t74 = (x385/((x386+x387)+x388));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x393 = 1;
	uint32_t x396 = 473629090U;
	volatile uint32_t t75 = 441U;

	t75 = (x393/((x394+x395)+x396));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = -1;
	static int8_t x400 = -1;
	volatile int32_t t76 = 248200;

	t76 = (x397/((x398+x399)+x400));

	if (t76 != 16384) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x402 = 1403U;
	int16_t x403 = 0;
	volatile int64_t t77 = -8200554371969LL;

	t77 = (x401/((x402+x403)+x404));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x405 = 3;
	int8_t x406 = INT8_MAX;
	volatile int16_t x407 = INT16_MAX;
	int16_t x408 = -1;
	static int32_t t78 = -12196602;

	t78 = (x405/((x406+x407)+x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x409 = 3431U;
	volatile int16_t x410 = -11;
	int64_t x411 = 253013750619LL;
	static int64_t t79 = -14137LL;

	t79 = (x409/((x410+x411)+x412));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x413 = UINT32_MAX;
	volatile uint8_t x414 = 12U;
	int64_t x416 = INT64_MIN;
	volatile int64_t t80 = 3206904767035LL;

	t80 = (x413/((x414+x415)+x416));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x418 = 118877U;
	static int8_t x419 = INT8_MIN;
	static int32_t x420 = 635091;
	volatile uint32_t t81 = 4102217U;

	t81 = (x417/((x418+x419)+x420));

	if (t81 != 5697U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x421 = 10;
	volatile int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MAX;

	t82 = (x421/((x422+x423)+x424));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x425 = INT8_MIN;
	static volatile uint16_t x426 = 1637U;
	uint64_t x427 = 1916079274772821LLU;
	volatile int16_t x428 = -8116;
	static uint64_t t83 = 13115993282866716LLU;

	t83 = (x425/((x426+x427)+x428));

	if (t83 != 9627LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MAX;
	int8_t x432 = INT8_MAX;

	t84 = (x429/((x430+x431)+x432));

	if (t84 != 608) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x433 = UINT16_MAX;
	int8_t x434 = -53;
	int64_t x435 = INT64_MAX;

	t85 = (x433/((x434+x435)+x436));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x441 = 55U;
	static uint16_t x444 = 14054U;

	t86 = (x441/((x442+x443)+x444));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x449 = INT32_MIN;
	volatile int8_t x450 = -52;
	int16_t x451 = 0;
	volatile int16_t x452 = INT16_MIN;
	int32_t t87 = -34449599;

	t87 = (x449/((x450+x451)+x452));

	if (t87 != 65432) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x454 = INT64_MIN;
	uint32_t x455 = UINT32_MAX;
	volatile uint32_t x456 = 64747U;

	t88 = (x453/((x454+x455)+x456));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint32_t x457 = 190807400U;
	static int8_t x458 = INT8_MIN;
	uint64_t x459 = UINT64_MAX;
	int16_t x460 = INT16_MAX;
	uint64_t t89 = 59LLU;

	t89 = (x457/((x458+x459)+x460));

	if (t89 != 5846LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x466 = -4031124;
	uint32_t x468 = 549U;
	volatile uint32_t t90 = 460701U;

	t90 = (x465/((x466+x467)+x468));

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x481 = 12265U;
	static uint16_t x483 = 15U;
	static uint8_t x484 = 0U;
	static volatile uint32_t t91 = 99U;

	t91 = (x481/((x482+x483)+x484));

	if (t91 != 876U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x489 = INT32_MAX;
	int16_t x491 = -69;
	int32_t x492 = -1;
	int32_t t92 = 49193;

	t92 = (x489/((x490+x491)+x492));

	if (t92 != 65678) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x497 = -198099;
	int32_t x498 = -1;
	int8_t x499 = -1;
	int8_t x500 = INT8_MIN;

	t93 = (x497/((x498+x499)+x500));

	if (t93 != 1523) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x501 = 1;
	int16_t x502 = INT16_MIN;
	int64_t x503 = INT64_MAX;
	uint16_t x504 = 3207U;

	t94 = (x501/((x502+x503)+x504));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x506 = INT16_MAX;
	static int16_t x507 = -1;
	static int8_t x508 = INT8_MAX;
	int64_t t95 = 458738LL;

	t95 = (x505/((x506+x507)+x508));

	if (t95 != 727547929LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x514 = 3U;
	int32_t x516 = -400;

	t96 = (x513/((x514+x515)+x516));

	if (t96 != 278105594357146LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x517 = 1;
	uint16_t x518 = 31396U;
	int8_t x519 = INT8_MIN;
	uint8_t x520 = UINT8_MAX;
	int32_t t97 = 16;

	t97 = (x517/((x518+x519)+x520));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x521 = INT8_MIN;
	volatile int64_t x523 = -1LL;
	static uint32_t x524 = 39U;
	static int64_t t98 = 63LL;

	t98 = (x521/((x522+x523)+x524));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x525 = -1;
	volatile int64_t x527 = INT64_MAX;
	volatile int64_t t99 = 57757515008087938LL;

	t99 = (x525/((x526+x527)+x528));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

