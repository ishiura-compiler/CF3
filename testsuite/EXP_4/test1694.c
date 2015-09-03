#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
uint16_t x9 = 2U;
uint8_t x17 = 30U;
int8_t x21 = -1;
uint32_t x27 = 2U;
uint64_t t5 = 6LLU;
uint64_t x37 = 104799444LLU;
uint64_t x40 = 71LLU;
uint64_t t8 = 379363061609402LLU;
uint16_t x41 = 0U;
uint64_t x42 = UINT64_MAX;
int8_t x45 = -1;
uint16_t x46 = 15U;
int32_t t10 = -19782251;
int16_t x53 = INT16_MAX;
int16_t x54 = INT16_MIN;
static uint64_t t12 = 3394LLU;
volatile uint64_t t14 = 1LLU;
static int32_t x66 = -1;
static int64_t t15 = 2301729412960180058LL;
int32_t t20 = -1518428;
int32_t x97 = INT32_MIN;
static int64_t x106 = 86970LL;
int16_t x107 = 20;
int64_t x111 = INT64_MAX;
uint16_t x112 = 2633U;
uint64_t x123 = UINT64_MAX;
int32_t x131 = 0;
volatile int16_t x132 = INT16_MIN;
int8_t x134 = -33;
int64_t x143 = -1LL;
volatile int64_t t30 = 2876LL;
static int8_t x146 = INT8_MIN;
int32_t t31 = 15036579;
int64_t x154 = -7042LL;
uint16_t x156 = 2U;
int32_t t34 = -62539;
uint32_t x163 = UINT32_MAX;
int8_t x164 = 13;
static uint32_t x165 = 97U;
int32_t x185 = INT32_MIN;
int64_t x189 = -1LL;
static uint16_t x190 = UINT16_MAX;
int64_t t41 = 56383255600097LL;
volatile uint32_t x201 = 4517896U;
volatile int8_t x204 = INT8_MIN;
uint32_t x211 = 969401954U;
int8_t x214 = -1;
int8_t x216 = INT8_MAX;
static volatile int64_t t45 = -1336488487LL;
uint64_t x218 = UINT64_MAX;
int64_t x219 = -48LL;
volatile uint64_t t48 = 261LLU;
static int16_t x232 = 773;
volatile int32_t t49 = 0;
volatile int32_t t50 = 51;
uint32_t x240 = 12U;
static uint64_t x242 = 22LLU;
uint32_t x248 = 270219U;
int32_t x250 = INT32_MIN;
volatile int8_t x259 = -1;
volatile uint64_t t56 = 538557348016LLU;
uint8_t x263 = UINT8_MAX;
static volatile uint16_t x269 = 0U;
int64_t x271 = -13LL;
int32_t x272 = INT32_MIN;
int8_t x274 = INT8_MIN;
int32_t x277 = -1;
volatile uint64_t t61 = 789978LLU;
uint32_t x281 = 4608993U;
int8_t x282 = INT8_MAX;
int16_t x293 = INT16_MAX;
static int16_t x296 = INT16_MAX;
int16_t x298 = INT16_MIN;
volatile int32_t x300 = 7;
int32_t x307 = INT32_MIN;
uint32_t t68 = 472U;
volatile int32_t x309 = INT32_MIN;
static uint64_t x310 = UINT64_MAX;
int64_t x319 = 2014856LL;
int32_t x324 = INT32_MIN;
static uint32_t x325 = UINT32_MAX;
volatile uint64_t x334 = UINT64_MAX;
uint32_t x335 = 696120U;
volatile uint64_t t74 = 479465416LLU;
volatile int8_t x337 = -1;
volatile uint8_t x338 = UINT8_MAX;
uint64_t t76 = 3061686646249LLU;
volatile int64_t x349 = INT64_MIN;
volatile int16_t x358 = -1;
static uint32_t t82 = 1547370U;
static int64_t t83 = -7049LL;
volatile int8_t x379 = INT8_MIN;
int64_t t85 = -32803771400868835LL;
uint64_t x385 = UINT64_MAX;
uint64_t x386 = 358941274193LLU;
int8_t x388 = INT8_MAX;
int64_t x395 = INT64_MAX;
static uint32_t x396 = 1U;
static int8_t x398 = INT8_MAX;
static volatile int8_t x406 = INT8_MIN;
static volatile int32_t x417 = -1;
volatile uint64_t x421 = 476242697089640308LLU;
volatile uint8_t x424 = UINT8_MAX;
volatile int64_t x432 = INT64_MIN;
int64_t x433 = INT64_MIN;
uint64_t x439 = 2936851627641847LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int8_t x2 = -5;
	volatile uint16_t x3 = 14889U;
	int32_t x4 = -1;
	static volatile int32_t t0 = 285795062;

	t0 = (x1/(x2+(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int16_t x7 = INT16_MIN;
	volatile uint32_t x8 = 9U;
	volatile int64_t t1 = -152335353506LL;

	t1 = (x5/(x6+(x7&x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x10 = 9493449;
	int64_t x11 = INT64_MAX;
	volatile int8_t x12 = INT8_MAX;
	int64_t t2 = 67315859LL;

	t2 = (x9/(x10+(x11&x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x18 = -16;
	static uint16_t x19 = 1U;
	int32_t x20 = INT32_MIN;
	static int32_t t3 = 3894089;

	t3 = (x17/(x18+(x19&x20)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x22 = 6088633927614LL;
	int64_t x23 = INT64_MIN;
	uint8_t x24 = 8U;
	int64_t t4 = -13801LL;

	t4 = (x21/(x22+(x23&x24)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	int8_t x26 = INT8_MIN;
	static uint64_t x28 = 7734651042LLU;

	t5 = (x25/(x26+(x27&x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 281497480083096888LLU;
	uint32_t x30 = UINT32_MAX;
	volatile int16_t x31 = INT16_MIN;
	static int64_t x32 = 94088112099369LL;
	static volatile uint64_t t6 = 92754216570LLU;

	t6 = (x29/(x30+(x31&x32)));

	if (t6 != 2991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	volatile int32_t x34 = INT32_MIN;
	volatile int32_t x35 = -1;
	static uint16_t x36 = 9U;
	int32_t t7 = -506;

	t7 = (x33/(x34+(x35&x36)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x38 = -54;
	int64_t x39 = INT64_MIN;

	t8 = (x37/(x38+(x39&x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x43 = 80U;
	uint8_t x44 = 49U;
	volatile uint64_t t9 = 368343882608972LLU;

	t9 = (x41/(x42+(x43&x44)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x47 = -1931;
	static int8_t x48 = -1;

	t10 = (x45/(x46+(x47&x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	volatile int32_t x50 = INT32_MIN;
	volatile int32_t x51 = INT32_MAX;
	static int16_t x52 = 0;
	int32_t t11 = 18;

	t11 = (x49/(x50+(x51&x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x55 = UINT64_MAX;
	uint16_t x56 = 113U;

	t12 = (x53/(x54+(x55&x56)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x57 = INT64_MIN;
	volatile int16_t x58 = INT16_MIN;
	int8_t x59 = -1;
	int8_t x60 = -1;
	int64_t t13 = 6302869LL;

	t13 = (x57/(x58+(x59&x60)));

	if (t13 != 281466387038200LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x61 = 14920U;
	volatile int32_t x62 = 1;
	volatile uint16_t x63 = 2U;
	volatile uint64_t x64 = 437216595LLU;

	t14 = (x61/(x62+(x63&x64)));

	if (t14 != 4973LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -3027;
	int64_t x67 = INT64_MIN;
	uint8_t x68 = UINT8_MAX;

	t15 = (x65/(x66+(x67&x68)));

	if (t15 != 3027LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 1;
	uint64_t x70 = UINT64_MAX;
	static int64_t x71 = INT64_MAX;
	volatile int8_t x72 = INT8_MAX;
	uint64_t t16 = 142156921217942363LLU;

	t16 = (x69/(x70+(x71&x72)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	volatile int64_t x74 = 33705531041082LL;
	uint8_t x75 = 5U;
	volatile int8_t x76 = -1;
	static volatile int64_t t17 = -950069458LL;

	t17 = (x73/(x74+(x75&x76)));

	if (t17 != -273645LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 18U;
	static uint16_t x78 = 1640U;
	int8_t x79 = 61;
	int16_t x80 = -1;
	int32_t t18 = 276120917;

	t18 = (x77/(x78+(x79&x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 1U;
	volatile uint32_t x82 = 3404U;
	uint16_t x83 = 24U;
	volatile int8_t x84 = INT8_MIN;
	static uint32_t t19 = 73U;

	t19 = (x81/(x82+(x83&x84)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = 1573U;
	uint8_t x94 = 3U;
	uint16_t x95 = UINT16_MAX;
	int8_t x96 = INT8_MAX;

	t20 = (x93/(x94+(x95&x96)));

	if (t20 != 12) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x98 = -1;
	static int32_t x99 = 1;
	volatile int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -2996363637441LL;

	t21 = (x97/(x98+(x99&x100)));

	if (t21 != 2147483648LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = INT32_MIN;
	static uint64_t x102 = 1770646LLU;
	uint64_t x103 = UINT64_MAX;
	int16_t x104 = 1830;
	volatile uint64_t t22 = 2137205333924307LLU;

	t22 = (x101/(x102+(x103&x104)));

	if (t22 != 10407330802539LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x105 = INT64_MIN;
	int8_t x108 = -1;
	static volatile int64_t t23 = -11089LL;

	t23 = (x105/(x106+(x107&x108)));

	if (t23 != -106027957660130LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MAX;
	int32_t x110 = 1361447;
	static int64_t t24 = 110225087489950568LL;

	t24 = (x109/(x110+(x111&x112)));

	if (t24 != 1574LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x117 = 114;
	int64_t x118 = -1LL;
	int8_t x119 = INT8_MIN;
	volatile uint32_t x120 = 1878855U;
	int64_t t25 = -642LL;

	t25 = (x117/(x118+(x119&x120)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -134824756312590LL;
	int16_t x122 = INT16_MIN;
	static int32_t x124 = -1;
	volatile uint64_t t26 = 209495942LLU;

	t26 = (x121/(x122+(x123&x124)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x129 = UINT64_MAX;
	volatile uint64_t x130 = 2LLU;
	volatile uint64_t t27 = 400502110036305163LLU;

	t27 = (x129/(x130+(x131&x132)));

	if (t27 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = INT64_MAX;
	static int16_t x135 = INT16_MIN;
	uint64_t x136 = 695839767850LLU;
	static uint64_t t28 = 1076932740499754514LLU;

	t28 = (x133/(x134+(x135&x136)));

	if (t28 != 13255023LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	int32_t x138 = INT32_MIN;
	uint16_t x139 = UINT16_MAX;
	static int32_t x140 = -7036625;
	volatile int32_t t29 = -522;

	t29 = (x137/(x138+(x139&x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x141 = 13794U;
	int8_t x142 = -1;
	uint8_t x144 = UINT8_MAX;

	t30 = (x141/(x142+(x143&x144)));

	if (t30 != 54LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	volatile int32_t x147 = INT32_MIN;
	int16_t x148 = INT16_MAX;

	t31 = (x145/(x146+(x147&x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = -986446400LL;
	static int64_t x150 = -1LL;
	int8_t x151 = INT8_MAX;
	static int16_t x152 = -264;
	static volatile int64_t t32 = 248838217374367LL;

	t32 = (x149/(x150+(x151&x152)));

	if (t32 != -8289465LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x155 = -1;
	int64_t t33 = 143LL;

	t33 = (x153/(x154+(x155&x156)));

	if (t33 != -610080LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	volatile int32_t x160 = -1;

	t34 = (x157/(x158+(x159&x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 5U;
	static uint64_t x162 = UINT64_MAX;
	static uint64_t t35 = 116874957755465504LLU;

	t35 = (x161/(x162+(x163&x164)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x166 = INT16_MIN;
	int32_t x167 = 129;
	int16_t x168 = -1;
	uint32_t t36 = 170U;

	t36 = (x165/(x166+(x167&x168)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x169 = 12U;
	int8_t x170 = INT8_MIN;
	static volatile int8_t x171 = INT8_MAX;
	int32_t x172 = -15377444;
	volatile int32_t t37 = -36583032;

	t37 = (x169/(x170+(x171&x172)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = -1;
	static int32_t x178 = -816647;
	static int64_t x179 = INT64_MAX;
	static int16_t x180 = -3;
	volatile int64_t t38 = -3LL;

	t38 = (x177/(x178+(x179&x180)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 966097U;
	static int64_t x184 = -962460205485794LL;
	volatile int64_t t39 = 20283LL;

	t39 = (x181/(x182+(x183&x184)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x186 = UINT8_MAX;
	volatile int32_t x187 = -16;
	static uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t40 = 171LLU;

	t40 = (x185/(x186+(x187&x188)));

	if (t40 != 77183029588125807LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x191 = 28;
	int16_t x192 = -1;

	t41 = (x189/(x190+(x191&x192)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x197 = 1;
	int64_t x198 = -1LL;
	int8_t x199 = INT8_MIN;
	static uint8_t x200 = 113U;
	volatile int64_t t42 = -968733939755143LL;

	t42 = (x197/(x198+(x199&x200)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x202 = 17U;
	int8_t x203 = -1;
	uint32_t t43 = 252404U;

	t43 = (x201/(x202+(x203&x204)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x209 = INT8_MAX;
	uint8_t x210 = 16U;
	int64_t x212 = INT64_MIN;
	volatile int64_t t44 = 2638251358149LL;

	t44 = (x209/(x210+(x211&x212)));

	if (t44 != 7LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = -11991;
	int64_t x215 = -1LL;

	t45 = (x213/(x214+(x215&x216)));

	if (t45 != -95LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x217 = INT32_MIN;
	int8_t x220 = INT8_MAX;
	uint64_t t46 = 18567185LLU;

	t46 = (x217/(x218+(x219&x220)));

	if (t46 != 233503089513443898LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x221 = -109;
	static volatile int8_t x222 = INT8_MAX;
	uint64_t x223 = 4462430200548898LLU;
	int32_t x224 = -1;
	volatile uint64_t t47 = 914094159147LLU;

	t47 = (x221/(x222+(x223&x224)));

	if (t47 != 4133LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x225 = 72U;
	static uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	uint64_t x228 = 44786031634943LLU;

	t48 = (x225/(x226+(x227&x228)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MIN;
	int32_t x230 = INT32_MAX;
	static int32_t x231 = INT32_MIN;

	t49 = (x229/(x230+(x231&x232)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x233 = INT16_MIN;
	int8_t x234 = 0;
	static int16_t x235 = INT16_MIN;
	int8_t x236 = INT8_MIN;

	t50 = (x233/(x234+(x235&x236)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = -3110138;
	uint8_t x239 = 5U;
	static uint32_t t51 = 3375869U;

	t51 = (x237/(x238+(x239&x240)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x241 = UINT16_MAX;
	int16_t x243 = INT16_MIN;
	int32_t x244 = INT32_MAX;
	volatile uint64_t t52 = 1137528305032832LLU;

	t52 = (x241/(x242+(x243&x244)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x245 = -1;
	int64_t x246 = -411387742378166LL;
	uint8_t x247 = 3U;
	volatile int64_t t53 = 7158LL;

	t53 = (x245/(x246+(x247&x248)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = UINT8_MAX;
	int32_t x251 = -44361748;
	volatile uint64_t x252 = 4153834387189679LLU;
	volatile uint64_t t54 = 926LLU;

	t54 = (x249/(x250+(x251&x252)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x253 = UINT16_MAX;
	uint64_t x254 = 59914328607734LLU;
	int32_t x255 = INT32_MAX;
	volatile uint64_t x256 = UINT64_MAX;
	uint64_t t55 = 32477115830LLU;

	t55 = (x253/(x254+(x255&x256)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x257 = INT32_MAX;
	volatile int16_t x258 = -11;
	static uint64_t x260 = 11313374552175086LLU;

	t56 = (x257/(x258+(x259&x260)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x261 = UINT8_MAX;
	int32_t x262 = -1;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t57 = 11U;

	t57 = (x261/(x262+(x263&x264)));

	if (t57 != 1U) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 1U;
	volatile int64_t x266 = INT64_MAX;
	int8_t x267 = -1;
	uint8_t x268 = 0U;
	static int64_t t58 = -114515338615993LL;

	t58 = (x265/(x266+(x267&x268)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x270 = INT32_MIN;
	volatile int64_t t59 = 257128LL;

	t59 = (x269/(x270+(x271&x272)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x273 = INT8_MIN;
	volatile uint64_t x275 = 148104857268676LLU;
	uint16_t x276 = 1907U;
	uint64_t t60 = 13242476LLU;

	t60 = (x273/(x274+(x275&x276)));

	if (t60 != 96076792050570580LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x278 = 1830534LLU;
	uint8_t x279 = 54U;
	int16_t x280 = -4;

	t61 = (x277/(x278+(x279&x280)));

	if (t61 != 10076961188225LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	volatile uint32_t t62 = 866739U;

	t62 = (x281/(x282+(x283&x284)));

	if (t62 != 140U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = INT32_MAX;
	int16_t x286 = -3322;
	volatile int8_t x287 = -1;
	static volatile int32_t x288 = INT32_MAX;
	volatile int32_t t63 = -897538;

	t63 = (x285/(x286+(x287&x288)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x289 = UINT16_MAX;
	volatile int8_t x290 = -29;
	int32_t x291 = -141471;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t64 = 7008518;

	t64 = (x289/(x290+(x291&x292)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x294 = INT16_MIN;
	volatile uint32_t x295 = 15039411U;
	volatile uint32_t t65 = 17774U;

	t65 = (x293/(x294+(x295&x296)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	static uint32_t x299 = UINT32_MAX;
	volatile uint32_t t66 = 3U;

	t66 = (x297/(x298+(x299&x300)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = -4;
	int32_t x303 = -29231;
	volatile int16_t x304 = INT16_MIN;
	int32_t t67 = -380;

	t67 = (x301/(x302+(x303&x304)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x305 = 2U;
	static uint32_t x306 = 657928U;
	int16_t x308 = INT16_MIN;

	t68 = (x305/(x306+(x307&x308)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x311 = UINT32_MAX;
	static int8_t x312 = 9;
	uint64_t t69 = 134252084LLU;

	t69 = (x309/(x310+(x311&x312)));

	if (t69 != 2305843008945258496LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = -4294857559972959LL;
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MIN;
	static int8_t x316 = -1;
	int64_t t70 = -17915507LL;

	t70 = (x313/(x314+(x315&x316)));

	if (t70 != 4294857559972959LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = -6659;
	volatile int64_t x318 = -248936106543954LL;
	uint16_t x320 = 2U;
	volatile int64_t t71 = 654905LL;

	t71 = (x317/(x318+(x319&x320)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x321 = 178;
	volatile int16_t x322 = INT16_MIN;
	uint64_t x323 = 832808700915LLU;
	static uint64_t t72 = 837921791LLU;

	t72 = (x321/(x322+(x323&x324)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x326 = -94;
	int32_t x327 = -1;
	int16_t x328 = INT16_MAX;
	volatile uint32_t t73 = 27U;

	t73 = (x325/(x326+(x327&x328)));

	if (t73 != 131453U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = 53595LL;
	int32_t x336 = 1;

	t74 = (x333/(x334+(x335&x336)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x339 = INT64_MAX;
	static uint32_t x340 = UINT32_MAX;
	volatile int64_t t75 = -310909LL;

	t75 = (x337/(x338+(x339&x340)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x341 = 6075LLU;
	volatile int8_t x342 = INT8_MIN;
	static volatile int16_t x343 = -19;
	volatile uint8_t x344 = 1U;

	t76 = (x341/(x342+(x343&x344)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x345 = INT16_MIN;
	static uint32_t x346 = 5U;
	static int8_t x347 = INT8_MAX;
	int32_t x348 = INT32_MIN;
	uint32_t t77 = 16694607U;

	t77 = (x345/(x346+(x347&x348)));

	if (t77 != 858986905U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x350 = 73U;
	int16_t x351 = 19;
	uint32_t x352 = 7U;
	volatile int64_t t78 = -18457784351LL;

	t78 = (x349/(x350+(x351&x352)));

	if (t78 != -121360158379668102LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x353 = 12;
	int16_t x354 = INT16_MIN;
	volatile uint8_t x355 = 33U;
	static int64_t x356 = INT64_MAX;
	volatile int64_t t79 = -60215640069093LL;

	t79 = (x353/(x354+(x355&x356)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x357 = INT8_MIN;
	int64_t x359 = INT64_MIN;
	int32_t x360 = 40482;
	volatile int64_t t80 = -4121LL;

	t80 = (x357/(x358+(x359&x360)));

	if (t80 != 128LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x361 = -1LL;
	static int16_t x362 = -1;
	int64_t x363 = INT64_MAX;
	int8_t x364 = INT8_MIN;
	int64_t t81 = -349312LL;

	t81 = (x361/(x362+(x363&x364)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x365 = 2010486125U;
	int8_t x366 = -1;
	uint8_t x367 = 7U;
	static volatile uint8_t x368 = UINT8_MAX;

	t82 = (x365/(x366+(x367&x368)));

	if (t82 != 335081020U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x369 = INT32_MIN;
	int16_t x370 = 1;
	int32_t x371 = -1217126;
	int64_t x372 = -1LL;

	t83 = (x369/(x370+(x371&x372)));

	if (t83 != 1764LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = -1253;
	uint64_t x378 = 9355674201329LLU;
	static int8_t x380 = -3;
	uint64_t t84 = 171LLU;

	t84 = (x377/(x378+(x379&x380)));

	if (t84 != 1971717LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x381 = INT64_MIN;
	int8_t x382 = 28;
	static volatile uint16_t x383 = UINT16_MAX;
	int8_t x384 = 0;

	t85 = (x381/(x382+(x383&x384)));

	if (t85 != -329406144173384850LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x387 = UINT32_MAX;
	volatile uint64_t t86 = 355981803924679LLU;

	t86 = (x385/(x386+(x387&x388)));

	if (t86 != 51392095LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x389 = 139;
	int8_t x390 = -1;
	uint16_t x391 = 16334U;
	uint16_t x392 = UINT16_MAX;
	int32_t t87 = 109163;

	t87 = (x389/(x390+(x391&x392)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x393 = -14140;
	int64_t x394 = INT64_MIN;
	volatile int64_t t88 = -3LL;

	t88 = (x393/(x394+(x395&x396)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = -720;
	uint16_t x399 = 13U;
	volatile uint16_t x400 = UINT16_MAX;
	volatile int32_t t89 = -20;

	t89 = (x397/(x398+(x399&x400)));

	if (t89 != -5) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x401 = 36U;
	uint64_t x402 = UINT64_MAX;
	volatile int8_t x403 = INT8_MIN;
	volatile int8_t x404 = INT8_MIN;
	uint64_t t90 = 4110157LLU;

	t90 = (x401/(x402+(x403&x404)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = 60;
	uint16_t x407 = UINT16_MAX;
	int16_t x408 = -1;
	int32_t t91 = 2;

	t91 = (x405/(x406+(x407&x408)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x409 = 10;
	int32_t x410 = 20567129;
	int32_t x411 = INT32_MIN;
	static volatile int32_t x412 = INT32_MAX;
	volatile int32_t t92 = -50856;

	t92 = (x409/(x410+(x411&x412)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x413 = -133696277099353185LL;
	volatile uint8_t x414 = 1U;
	volatile int32_t x415 = 21964181;
	int8_t x416 = INT8_MAX;
	volatile int64_t t93 = 1276400494LL;

	t93 = (x413/(x414+(x415&x416)));

	if (t93 != -6077103504516053LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x418 = INT16_MAX;
	int8_t x419 = INT8_MIN;
	static volatile uint8_t x420 = 1U;
	static int32_t t94 = -4648376;

	t94 = (x417/(x418+(x419&x420)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x422 = UINT16_MAX;
	volatile uint16_t x423 = 1721U;
	volatile uint64_t t95 = 491072726405561690LLU;

	t95 = (x421/(x422+(x423&x424)));

	if (t95 != 7246541343421LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x425 = UINT32_MAX;
	static int32_t x426 = INT32_MIN;
	volatile int8_t x427 = -7;
	int32_t x428 = INT32_MAX;
	volatile uint32_t t96 = 87U;

	t96 = (x425/(x426+(x427&x428)));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = 76U;
	int8_t x430 = -2;
	volatile uint8_t x431 = UINT8_MAX;
	int64_t t97 = -1588423754079044LL;

	t97 = (x429/(x430+(x431&x432)));

	if (t97 != -38LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x434 = -1LL;
	static int8_t x435 = 30;
	uint32_t x436 = 43843U;
	volatile int64_t t98 = INT64_MIN;

	t98 = (x433/(x434+(x435&x436)));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x437 = UINT32_MAX;
	uint64_t x438 = 65803295LLU;
	int64_t x440 = 168LL;
	uint64_t t99 = 361673767LLU;

	t99 = (x437/(x438+(x439&x440)));

	if (t99 != 65LLU) { NG(); } else { ; }
	
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

