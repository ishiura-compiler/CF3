#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x9 = INT8_MAX;
int32_t x13 = INT32_MIN;
uint64_t t2 = 233748LLU;
static int8_t x23 = 3;
int32_t x34 = -3674;
static int64_t x35 = 8268998LL;
volatile int64_t x39 = 253693LL;
static int32_t x41 = 1015;
int8_t x60 = INT8_MAX;
int64_t x63 = INT64_MIN;
int16_t x76 = -499;
static volatile uint16_t x94 = UINT16_MAX;
uint32_t t16 = 191226305U;
int32_t x103 = -1;
int64_t t18 = -103951938645LL;
int16_t x105 = INT16_MIN;
static int32_t x106 = 1;
volatile uint16_t x128 = 6366U;
volatile uint32_t t23 = 93571486U;
int8_t x150 = INT8_MIN;
static int8_t x151 = INT8_MIN;
int16_t x163 = -1;
volatile uint32_t x171 = 60609890U;
int8_t x173 = INT8_MAX;
int32_t t33 = -229924;
int8_t x202 = -1;
int8_t x204 = INT8_MAX;
static int8_t x211 = INT8_MIN;
volatile int64_t t36 = -4523022939LL;
int8_t x235 = INT8_MIN;
static uint8_t x248 = UINT8_MAX;
volatile int64_t t40 = -23230152428988LL;
static int64_t x256 = 40483987240450388LL;
int8_t x258 = INT8_MAX;
int64_t t42 = 415439LL;
static uint16_t x261 = 1U;
uint64_t x262 = 44424305LLU;
int32_t x265 = -1;
static int32_t x268 = 13294522;
uint64_t x275 = UINT64_MAX;
static volatile uint64_t t45 = 2131028793LLU;
volatile uint32_t t49 = 82U;
uint32_t x300 = 6031U;
uint64_t t52 = 151799271758LLU;
int64_t x314 = 402562LL;
uint32_t x316 = 87611925U;
uint64_t x317 = 23711LLU;
static uint8_t x331 = 72U;
static volatile int16_t x333 = INT16_MIN;
int32_t x335 = -1;
int32_t x337 = INT32_MIN;
volatile uint32_t x338 = 525194266U;
int16_t x341 = INT16_MIN;
int64_t x350 = -1LL;
int64_t t60 = -899LL;
static volatile int8_t x361 = INT8_MIN;
int8_t x363 = -16;
int64_t x365 = -675LL;
int16_t x366 = -1;
volatile int64_t t64 = -915LL;
int16_t x369 = -1;
int64_t x388 = -33197138072531592LL;
uint64_t t69 = 50664LLU;
uint16_t x411 = 4991U;
uint64_t x412 = UINT64_MAX;
uint16_t x424 = 26U;
int8_t x437 = INT8_MIN;
int16_t x438 = -3;
int64_t x447 = -1LL;
uint64_t t78 = 1600907437698491LLU;
volatile uint8_t x449 = 16U;
volatile uint64_t x451 = 3388728LLU;
int32_t x454 = -224988676;
uint64_t x458 = 4725565345981696LLU;
uint32_t t82 = 14U;
static int32_t t83 = -240806;
static int8_t x469 = INT8_MIN;
int8_t x470 = INT8_MIN;
int16_t x471 = -4;
uint8_t x481 = 7U;
volatile int32_t x488 = -1;
int64_t t86 = -237049605153LL;
int32_t x490 = INT32_MIN;
uint32_t t87 = 0U;
int16_t x495 = INT16_MAX;
static int16_t x502 = 1;
int64_t x503 = INT64_MAX;
int64_t t90 = -1906LL;
uint16_t x505 = 7512U;
uint32_t x508 = 451818U;
uint32_t t91 = 3359601U;
volatile uint64_t x513 = 861779711901720960LLU;
uint8_t x515 = 0U;
int32_t x534 = -1;
int32_t t97 = 30;
int64_t x550 = -1LL;
int32_t x554 = -1;
uint8_t x555 = UINT8_MAX;


void f0(void) {
	static uint8_t x1 = 42U;
	int64_t x2 = 44LL;
	int8_t x3 = -1;
	uint32_t x4 = 2U;
	volatile int64_t t0 = 744272891855LL;

	t0 = ((x1+(x2*x3))+x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x10 = -5;
	uint16_t x11 = 5U;
	uint16_t x12 = 13U;
	volatile int32_t t1 = -219338;

	t1 = ((x9+(x10*x11))+x12);

	if (t1 != 115) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 1162U;
	int32_t x15 = -1;
	static uint64_t x16 = 818LLU;

	t2 = ((x13+(x14*x15))+x16);

	if (t2 != 2147483304LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 796620111196616506LLU;
	static int8_t x18 = -2;
	uint8_t x19 = 7U;
	int16_t x20 = INT16_MAX;
	uint64_t t3 = 1LLU;

	t3 = ((x17+(x18*x19))+x20);

	if (t3 != 796620111196649259LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x22 = 3LL;
	static int32_t x24 = 0;
	int64_t t4 = -1LL;

	t4 = ((x21+(x22*x23))+x24);

	if (t4 != 264LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = INT32_MAX;
	uint8_t x26 = UINT8_MAX;
	int8_t x27 = INT8_MIN;
	int8_t x28 = INT8_MIN;
	static volatile int32_t t5 = 106018662;

	t5 = ((x25+(x26*x27))+x28);

	if (t5 != 2147450879) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x33 = 6LLU;
	int16_t x36 = INT16_MIN;
	uint64_t t6 = 48291608476132LLU;

	t6 = ((x33+(x34*x35))+x36);

	if (t6 != 18446744043329220202LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -354880699842639655LL;
	volatile int32_t x38 = INT32_MIN;
	int32_t x40 = 136;
	volatile int64_t t7 = 198193449490LL;

	t7 = ((x37+(x38*x39))+x40);

	if (t7 != -355425501411751583LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x42 = -1LL;
	int16_t x43 = 2;
	int16_t x44 = -1;
	volatile int64_t t8 = 1773872LL;

	t8 = ((x41+(x42*x43))+x44);

	if (t8 != 1012LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x53 = 2U;
	int64_t x54 = -1LL;
	uint16_t x55 = UINT16_MAX;
	int16_t x56 = 0;
	int64_t t9 = 175819LL;

	t9 = ((x53+(x54*x55))+x56);

	if (t9 != -65533LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = -235165217740LL;
	volatile uint32_t x58 = 452598942U;
	uint16_t x59 = 1786U;
	int64_t t10 = 1886075015454023LL;

	t10 = ((x57+(x58*x59))+x60);

	if (t10 != -234277358849LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x61 = UINT8_MAX;
	int32_t x62 = 0;
	static int64_t x64 = -484LL;
	int64_t t11 = -53LL;

	t11 = ((x61+(x62*x63))+x64);

	if (t11 != -229LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = INT8_MIN;
	uint64_t x66 = 8731LLU;
	int16_t x67 = 21;
	int16_t x68 = -1;
	uint64_t t12 = 7LLU;

	t12 = ((x65+(x66*x67))+x68);

	if (t12 != 183222LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = INT8_MAX;
	int16_t x70 = 1;
	int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = UINT8_MAX;
	volatile int32_t t13 = 137458160;

	t13 = ((x69+(x70*x71))+x72);

	if (t13 != 254) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x73 = INT32_MAX;
	uint32_t x74 = 1175U;
	int32_t x75 = INT32_MIN;
	volatile uint32_t t14 = 2551U;

	t14 = ((x73+(x74*x75))+x76);

	if (t14 != 4294966796U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	static int16_t x78 = -1;
	uint8_t x79 = UINT8_MAX;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t15 = -1178875992324LL;

	t15 = ((x77+(x78*x79))+x80);

	if (t15 != -9223372032559808768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x93 = INT16_MAX;
	int8_t x95 = -1;
	static uint32_t x96 = 0U;

	t16 = ((x93+(x94*x95))+x96);

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = INT16_MIN;
	static int32_t x98 = 236;
	static int64_t x99 = -75111418843389LL;
	uint32_t x100 = UINT32_MAX;
	int64_t t17 = -8290195464517333LL;

	t17 = ((x97+(x98*x99))+x100);

	if (t17 != -17726290552105277LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x101 = 14LL;
	int64_t x102 = INT64_MAX;
	uint16_t x104 = 931U;

	t18 = ((x101+(x102*x103))+x104);

	if (t18 != -9223372036854774862LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x107 = 167U;
	static int16_t x108 = 0;
	int32_t t19 = 0;

	t19 = ((x105+(x106*x107))+x108);

	if (t19 != -32601) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = INT16_MIN;
	static int16_t x110 = -2;
	uint8_t x111 = 2U;
	int32_t x112 = INT32_MAX;
	static int32_t t20 = -306;

	t20 = ((x109+(x110*x111))+x112);

	if (t20 != 2147450875) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = -1;
	static int64_t x114 = -1LL;
	uint16_t x115 = 21363U;
	int32_t x116 = -227950155;
	static int64_t t21 = 10LL;

	t21 = ((x113+(x114*x115))+x116);

	if (t21 != -227971519LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x125 = 262804549467LLU;
	uint32_t x126 = UINT32_MAX;
	int32_t x127 = 2263;
	uint64_t t22 = 29952231244LLU;

	t22 = ((x125+(x126*x127))+x128);

	if (t22 != 267099520866LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 545894U;
	static uint32_t x135 = 5073U;
	int32_t x136 = INT32_MIN;

	t23 = ((x133+(x134*x135))+x136);

	if (t23 != 621836613U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x141 = -1;
	int16_t x142 = -1;
	uint32_t x143 = 197892U;
	volatile uint64_t x144 = UINT64_MAX;
	static uint64_t t24 = 1325LLU;

	t24 = ((x141+(x142*x143))+x144);

	if (t24 != 4294769402LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x145 = 1172U;
	uint8_t x146 = 0U;
	volatile int8_t x147 = -3;
	int8_t x148 = INT8_MIN;
	volatile int32_t t25 = 367240;

	t25 = ((x145+(x146*x147))+x148);

	if (t25 != 1044) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x149 = -422358635;
	static volatile uint16_t x152 = UINT16_MAX;
	int32_t t26 = -14;

	t26 = ((x149+(x150*x151))+x152);

	if (t26 != -422276716) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = 2390;
	uint32_t x158 = 291U;
	static uint64_t x159 = 728LLU;
	static int32_t x160 = INT32_MAX;
	uint64_t t27 = 59593524075099LLU;

	t27 = ((x157+(x158*x159))+x160);

	if (t27 != 2147697885LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x161 = UINT64_MAX;
	static int8_t x162 = 47;
	static uint16_t x164 = 0U;
	static uint64_t t28 = 87467495803LLU;

	t28 = ((x161+(x162*x163))+x164);

	if (t28 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x165 = -987517178774747LL;
	int8_t x166 = -4;
	volatile int8_t x167 = 0;
	static volatile int64_t x168 = 464367637LL;
	volatile int64_t t29 = 484LL;

	t29 = ((x165+(x166*x167))+x168);

	if (t29 != -987516714407110LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x169 = INT32_MAX;
	static uint16_t x170 = UINT16_MAX;
	static int64_t x172 = INT64_MIN;
	volatile int64_t t30 = 310344098839633LL;

	t30 = ((x169+(x170*x171))+x172);

	if (t30 != -9223372035482899811LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = -1;
	static int64_t x176 = INT64_MAX;
	int64_t t31 = -305LL;

	t31 = ((x173+(x174*x175))+x176);

	if (t31 != 9223372036854710399LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = 0;
	int16_t x183 = -1141;
	volatile int8_t x184 = INT8_MIN;
	volatile int32_t t32 = -37;

	t32 = ((x181+(x182*x183))+x184);

	if (t32 != -256) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	static uint16_t x195 = 28927U;
	volatile int32_t x196 = -1;

	t33 = ((x193+(x194*x195))+x196);

	if (t33 != -61696) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x201 = INT8_MAX;
	uint8_t x203 = 126U;
	int32_t t34 = 3422;

	t34 = ((x201+(x202*x203))+x204);

	if (t34 != 128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x209 = 1U;
	int32_t x210 = -19726;
	uint32_t x212 = UINT32_MAX;
	volatile uint32_t t35 = 243U;

	t35 = ((x209+(x210*x211))+x212);

	if (t35 != 2524928U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x217 = -1LL;
	static int8_t x218 = INT8_MIN;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int16_t x220 = INT16_MIN;

	t36 = ((x217+(x218*x219))+x220);

	if (t36 != -8421249LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x225 = INT32_MIN;
	uint64_t x226 = 753LLU;
	uint64_t x227 = 6982LLU;
	volatile uint8_t x228 = 0U;
	volatile uint64_t t37 = 218216LLU;

	t37 = ((x225+(x226*x227))+x228);

	if (t37 != 18446744071567325414LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	volatile int64_t x232 = INT64_MIN;
	static int64_t t38 = 4433159658116626LL;

	t38 = ((x229+(x230*x231))+x232);

	if (t38 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x233 = 1;
	int16_t x234 = -1;
	int64_t x236 = -93619489696463LL;
	volatile int64_t t39 = 10204063786927LL;

	t39 = ((x233+(x234*x235))+x236);

	if (t39 != -93619489696334LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x245 = 876U;
	int8_t x246 = -1;
	int64_t x247 = -1LL;

	t40 = ((x245+(x246*x247))+x248);

	if (t40 != 1132LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x253 = UINT8_MAX;
	volatile int8_t x254 = 0;
	uint8_t x255 = 24U;
	volatile int64_t t41 = -168546023705894911LL;

	t41 = ((x253+(x254*x255))+x256);

	if (t41 != 40483987240450643LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x257 = -1LL;
	volatile uint8_t x259 = 11U;
	int16_t x260 = -1;

	t42 = ((x257+(x258*x259))+x260);

	if (t42 != 1395LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x263 = -3442666234LL;
	static uint64_t x264 = 3LLU;
	uint64_t t43 = 3852156604371008LLU;

	t43 = ((x261+(x262*x263))+x264);

	if (t43 != 18293806018917134250LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x266 = 168255928637LL;
	int16_t x267 = INT16_MIN;
	static int64_t t44 = -58337324LL;

	t44 = ((x265+(x266*x267))+x268);

	if (t44 != -5513410256282695LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = INT16_MIN;
	volatile uint64_t x274 = 122619638485LLU;
	int16_t x276 = -3;

	t45 = ((x273+(x274*x275))+x276);

	if (t45 != 18446743951089880360LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x281 = INT64_MIN;
	uint64_t x282 = 1624LLU;
	int64_t x283 = INT64_MAX;
	int16_t x284 = INT16_MIN;
	volatile uint64_t t46 = 43793516252600LLU;

	t46 = ((x281+(x282*x283))+x284);

	if (t46 != 9223372036854741416LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x285 = INT8_MIN;
	int64_t x286 = -1LL;
	int32_t x287 = -1;
	static int8_t x288 = INT8_MAX;
	int64_t t47 = 3831169844LL;

	t47 = ((x285+(x286*x287))+x288);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x289 = UINT32_MAX;
	static uint8_t x290 = UINT8_MAX;
	uint64_t x291 = 4227741922082LLU;
	volatile uint64_t x292 = 2270742572677101047LLU;
	static volatile uint64_t t48 = 184934368LLU;

	t48 = ((x289+(x290*x291))+x292);

	if (t48 != 2271820651162199252LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x293 = -8971951;
	uint32_t x294 = UINT32_MAX;
	uint32_t x295 = 437U;
	volatile int32_t x296 = INT32_MAX;

	t49 = ((x293+(x294*x295))+x296);

	if (t49 != 2138511259U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x297 = INT16_MAX;
	int32_t x298 = -1;
	volatile int16_t x299 = -2011;
	volatile uint32_t t50 = 15U;

	t50 = ((x297+(x298*x299))+x300);

	if (t50 != 40809U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x305 = -1LL;
	static int8_t x306 = -44;
	uint32_t x307 = UINT32_MAX;
	volatile int32_t x308 = -1;
	volatile int64_t t51 = 1855512856733LL;

	t51 = ((x305+(x306*x307))+x308);

	if (t51 != 42LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x309 = 188171127LL;
	static uint64_t x310 = UINT64_MAX;
	static volatile uint8_t x311 = 2U;
	int64_t x312 = 2LL;

	t52 = ((x309+(x310*x311))+x312);

	if (t52 != 188171127LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x313 = 8U;
	uint64_t x315 = UINT64_MAX;
	volatile uint64_t t53 = 133589LLU;

	t53 = ((x313+(x314*x315))+x316);

	if (t53 != 87209371LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x318 = 0;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t54 = 218LLU;

	t54 = ((x317+(x318*x319))+x320);

	if (t54 != 18446744071562091679LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int16_t x330 = -100;
	static volatile uint16_t x332 = UINT16_MAX;
	static int32_t t55 = -879709717;

	t55 = ((x329+(x330*x331))+x332);

	if (t55 != 123870) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x334 = UINT8_MAX;
	uint16_t x336 = 205U;
	volatile int32_t t56 = -3209916;

	t56 = ((x333+(x334*x335))+x336);

	if (t56 != -32818) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x339 = INT32_MIN;
	volatile uint8_t x340 = 13U;
	uint32_t t57 = 13490U;

	t57 = ((x337+(x338*x339))+x340);

	if (t57 != 2147483661U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x342 = 13U;
	static volatile uint16_t x343 = UINT16_MAX;
	static int8_t x344 = INT8_MIN;
	static int32_t t58 = 302;

	t58 = ((x341+(x342*x343))+x344);

	if (t58 != 819059) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x345 = -2;
	uint32_t x346 = 62U;
	int16_t x347 = -23;
	int16_t x348 = INT16_MIN;
	volatile uint32_t t59 = 49754U;

	t59 = ((x345+(x346*x347))+x348);

	if (t59 != 4294933100U) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x349 = -1;
	uint8_t x351 = UINT8_MAX;
	int16_t x352 = -1;

	t60 = ((x349+(x350*x351))+x352);

	if (t60 != -257LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = -1;
	static int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	uint16_t x356 = 7799U;
	volatile int32_t t61 = -39;

	t61 = ((x353+(x354*x355))+x356);

	if (t61 != 40566) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x358 = 39U;
	volatile uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MIN;
	uint64_t t62 = 424390198LLU;

	t62 = ((x357+(x358*x359))+x360);

	if (t62 != 18446744071562067801LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x362 = 93504636U;
	static volatile int16_t x364 = INT16_MIN;
	volatile uint32_t t63 = 11U;

	t63 = ((x361+(x362*x363))+x364);

	if (t63 != 2798860224U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x367 = 1116090U;
	int32_t x368 = 364229642;

	t64 = ((x365+(x366*x367))+x368);

	if (t64 != 4658080173LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MIN;
	uint16_t x372 = 41U;
	volatile int32_t t65 = 3975753;

	t65 = ((x369+(x370*x371))+x372);

	if (t65 != 4194344) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x373 = INT16_MAX;
	static uint64_t x374 = 13637986067LLU;
	int32_t x375 = INT32_MAX;
	static int32_t x376 = 9;
	uint64_t t66 = 7935763942209LLU;

	t66 = ((x373+(x374*x375))+x376);

	if (t66 != 10840607983186827509LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x385 = 28665;
	static int8_t x386 = -5;
	static int16_t x387 = 1876;
	static int64_t t67 = -246029346300337858LL;

	t67 = ((x385+(x386*x387))+x388);

	if (t67 != -33197138072512307LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x393 = -79;
	int64_t x394 = -29187013994LL;
	volatile int8_t x395 = INT8_MIN;
	static volatile uint32_t x396 = UINT32_MAX;
	static volatile int64_t t68 = 57117LL;

	t68 = ((x393+(x394*x395))+x396);

	if (t68 != 3740232758448LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x405 = 113610148;
	uint64_t x406 = UINT64_MAX;
	uint32_t x407 = UINT32_MAX;
	int64_t x408 = -1LL;

	t69 = ((x405+(x406*x407))+x408);

	if (t69 != 18446744069528194468LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x409 = INT16_MIN;
	uint32_t x410 = 31984U;
	volatile uint64_t t70 = 4593408358816780LLU;

	t70 = ((x409+(x410*x411))+x412);

	if (t70 != 159599375LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x413 = -2207585;
	int8_t x414 = INT8_MIN;
	int64_t x415 = -16479960485448LL;
	static int32_t x416 = INT32_MIN;
	static int64_t t71 = 1431LL;

	t71 = ((x413+(x414*x415))+x416);

	if (t71 != 2109432792446111LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x417 = 11393922547991531LLU;
	uint64_t x418 = 939LLU;
	static int16_t x419 = INT16_MIN;
	volatile int16_t x420 = 55;
	uint64_t t72 = 16015649660LLU;

	t72 = ((x417+(x418*x419))+x420);

	if (t72 != 11393922517222434LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x421 = 0U;
	volatile int64_t x422 = 125LL;
	int32_t x423 = -1;
	static volatile int64_t t73 = 1LL;

	t73 = ((x421+(x422*x423))+x424);

	if (t73 != -99LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x429 = 109331656;
	uint32_t x430 = UINT32_MAX;
	int64_t x431 = -925612349LL;
	static int16_t x432 = INT16_MIN;
	volatile int64_t t74 = 2073LL;

	t74 = ((x429+(x430*x431))+x432);

	if (t74 != -3975474766693827067LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	int16_t x435 = 140;
	static uint32_t x436 = 859415164U;
	uint32_t t75 = 242U;

	t75 = ((x433+(x434*x435))+x436);

	if (t75 != 868590063U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x439 = 2LLU;
	int32_t x440 = INT32_MAX;
	static volatile uint64_t t76 = 3418834LLU;

	t76 = ((x437+(x438*x439))+x440);

	if (t76 != 2147483513LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x441 = -1;
	volatile int8_t x442 = INT8_MIN;
	int16_t x443 = 0;
	int16_t x444 = 0;
	int32_t t77 = 32709157;

	t77 = ((x441+(x442*x443))+x444);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x445 = -1;
	int32_t x446 = -3;
	static uint64_t x448 = UINT64_MAX;

	t78 = ((x445+(x446*x447))+x448);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x450 = 21U;
	int8_t x452 = 62;
	uint64_t t79 = 1830LLU;

	t79 = ((x449+(x450*x451))+x452);

	if (t79 != 71163366LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x453 = INT16_MIN;
	int64_t x455 = -3715945338LL;
	uint8_t x456 = 1U;
	int64_t t80 = -539588162LL;

	t80 = ((x453+(x454*x455))+x456);

	if (t80 != 836045621684959721LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x457 = 1270U;
	volatile int8_t x459 = INT8_MAX;
	volatile uint16_t x460 = UINT16_MAX;
	uint64_t t81 = 67033950398950894LLU;

	t81 = ((x457+(x458*x459))+x460);

	if (t81 != 600146798939742197LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x461 = UINT16_MAX;
	int16_t x462 = 1;
	uint32_t x463 = 80008U;
	int8_t x464 = INT8_MIN;

	t82 = ((x461+(x462*x463))+x464);

	if (t82 != 145415U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x465 = INT8_MIN;
	uint16_t x466 = 426U;
	uint8_t x467 = UINT8_MAX;
	int8_t x468 = INT8_MIN;

	t83 = ((x465+(x466*x467))+x468);

	if (t83 != 108374) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x472 = 4854;
	volatile int32_t t84 = 3460;

	t84 = ((x469+(x470*x471))+x472);

	if (t84 != 5238) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x482 = 8U;
	int32_t x483 = -1;
	int8_t x484 = INT8_MIN;
	int32_t t85 = 28;

	t85 = ((x481+(x482*x483))+x484);

	if (t85 != -129) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x485 = INT64_MAX;
	int8_t x486 = INT8_MAX;
	int8_t x487 = -5;

	t86 = ((x485+(x486*x487))+x488);

	if (t86 != 9223372036854775171LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x489 = INT16_MAX;
	uint32_t x491 = 11362U;
	int16_t x492 = INT16_MAX;

	t87 = ((x489+(x490*x491))+x492);

	if (t87 != 65534U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x493 = UINT32_MAX;
	uint16_t x494 = 318U;
	int16_t x496 = 225;
	uint32_t t88 = 2031874668U;

	t88 = ((x493+(x494*x495))+x496);

	if (t88 != 10420130U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x497 = -1739624553597LL;
	int8_t x498 = -1;
	uint64_t x499 = UINT64_MAX;
	static volatile uint32_t x500 = UINT32_MAX;
	uint64_t t89 = 3LLU;

	t89 = ((x497+(x498*x499))+x500);

	if (t89 != 18446742338379965315LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x501 = -8;
	int64_t x504 = INT64_MIN;

	t90 = ((x501+(x502*x503))+x504);

	if (t90 != -9LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x506 = 28883;
	uint32_t x507 = 2291U;

	t91 = ((x505+(x506*x507))+x508);

	if (t91 != 66630283U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x509 = -251;
	uint32_t x510 = 25251U;
	static uint16_t x511 = 567U;
	int8_t x512 = 22;
	volatile uint32_t t92 = 31U;

	t92 = ((x509+(x510*x511))+x512);

	if (t92 != 14317088U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x514 = INT16_MIN;
	static int64_t x516 = 4785050714509259LL;
	volatile uint64_t t93 = 17230LLU;

	t93 = ((x513+(x514*x515))+x516);

	if (t93 != 866564762616230219LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x517 = INT16_MIN;
	volatile int8_t x518 = INT8_MAX;
	int64_t x519 = 33995498735LL;
	static uint16_t x520 = UINT16_MAX;
	int64_t t94 = -40842LL;

	t94 = ((x517+(x518*x519))+x520);

	if (t94 != 4317428372112LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x521 = INT32_MIN;
	static uint16_t x522 = 11U;
	int8_t x523 = INT8_MAX;
	int8_t x524 = -5;
	volatile int32_t t95 = 12485493;

	t95 = ((x521+(x522*x523))+x524);

	if (t95 != -2147482256) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x525 = INT32_MIN;
	volatile uint32_t x526 = 1222845002U;
	volatile uint16_t x527 = UINT16_MAX;
	static int32_t x528 = INT32_MIN;
	uint32_t t96 = 97636244U;

	t96 = ((x525+(x526*x527))+x528);

	if (t96 != 3647397302U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x533 = 419;
	static volatile int32_t x535 = INT32_MAX;
	int32_t x536 = -1;

	t97 = ((x533+(x534*x535))+x536);

	if (t97 != -2147483229) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x549 = -13502034630LL;
	static int8_t x551 = INT8_MIN;
	volatile int64_t x552 = -61922769653899456LL;
	volatile int64_t t98 = -4009LL;

	t98 = ((x549+(x550*x551))+x552);

	if (t98 != -61922783155933958LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x553 = 14;
	static int8_t x556 = INT8_MIN;
	volatile int32_t t99 = 1;

	t99 = ((x553+(x554*x555))+x556);

	if (t99 != -369) { NG(); } else { ; }
	
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

