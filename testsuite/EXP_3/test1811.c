#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = INT8_MIN;
static uint16_t x10 = 4820U;
uint8_t x21 = UINT8_MAX;
int64_t x30 = INT64_MAX;
uint32_t x34 = 399327U;
static volatile int32_t x37 = INT32_MAX;
int32_t x38 = 4;
volatile int64_t t7 = 6334697340LL;
volatile uint64_t x43 = 5575877946966440LLU;
volatile uint8_t x44 = UINT8_MAX;
int64_t t9 = -14485395LL;
int32_t x50 = -157;
volatile uint32_t x59 = 544919U;
static int64_t x76 = -1LL;
int64_t t15 = -508LL;
static volatile uint32_t t18 = 0U;
volatile int64_t x90 = -1LL;
int32_t x115 = -1;
volatile int64_t x117 = -1LL;
int32_t x118 = INT32_MAX;
uint64_t t23 = 225564LLU;
uint64_t t25 = 336990LLU;
int32_t x147 = INT32_MAX;
volatile uint16_t x157 = UINT16_MAX;
volatile int32_t x158 = -1;
int64_t x160 = -1LL;
static uint16_t x165 = UINT16_MAX;
uint8_t x168 = UINT8_MAX;
static volatile int32_t x180 = INT32_MAX;
int64_t x191 = INT64_MAX;
int32_t x198 = INT32_MAX;
static int32_t x212 = -36300;
uint32_t t38 = 117564U;
int8_t x223 = INT8_MAX;
uint16_t x233 = 2U;
int64_t x234 = -1LL;
int32_t t41 = -610692999;
static volatile int8_t x245 = 1;
static uint32_t t45 = 154513826U;
uint64_t x282 = UINT64_MAX;
volatile int32_t x286 = -10750;
volatile int16_t x287 = -230;
uint32_t x288 = UINT32_MAX;
static uint8_t x291 = UINT8_MAX;
static int32_t t50 = -522;
uint8_t x307 = UINT8_MAX;
int16_t x337 = INT16_MIN;
static volatile int64_t x340 = -626608936LL;
uint16_t x349 = 755U;
int32_t x350 = INT32_MIN;
volatile int32_t t58 = -1895;
uint8_t x358 = 11U;
volatile uint32_t t60 = 112495950U;
int64_t x362 = -1LL;
int64_t x364 = -41704175827496887LL;
int8_t x365 = 51;
static int8_t x371 = -14;
int16_t x382 = -15;
uint64_t t65 = 1505073207074849486LLU;
volatile int8_t x397 = 1;
uint32_t x398 = 44778U;
int16_t x399 = -1;
uint16_t x401 = 12837U;
static uint16_t x408 = 3U;
volatile uint32_t t69 = 718U;
volatile int64_t x416 = -1LL;
uint8_t x425 = 2U;
int16_t x428 = INT16_MIN;
int64_t x434 = -1LL;
volatile int32_t x436 = INT32_MAX;
uint8_t x441 = UINT8_MAX;
static int64_t x443 = INT64_MAX;
int32_t x446 = -1;
int32_t x449 = INT32_MIN;
static uint16_t x455 = UINT16_MAX;
int8_t x469 = INT8_MIN;
int16_t x471 = -1;
volatile uint64_t t82 = 113LLU;
static int8_t x480 = INT8_MAX;
int16_t x487 = -1;
int8_t x515 = INT8_MIN;
uint64_t t88 = 3LLU;
volatile int32_t t89 = -14526;
int16_t x526 = 7774;
volatile int32_t t90 = 4622773;
int32_t x540 = 49934;
int32_t x549 = INT32_MIN;
uint8_t x554 = 26U;
int64_t x556 = -1LL;
int8_t x560 = 7;
uint16_t x564 = UINT16_MAX;
int32_t x566 = INT32_MIN;
volatile uint64_t t99 = 18725153712865LLU;


void f0(void) {
	static int16_t x5 = -1547;
	static int8_t x6 = -7;
	static int8_t x7 = -1;
	uint16_t x8 = 180U;
	int32_t t0 = -20364074;

	t0 = ((x5<=x6)/(x7&x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x11 = 365984060;
	static int8_t x12 = -1;
	int32_t t1 = -487;

	t1 = ((x9<=x10)/(x11&x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x17 = INT16_MIN;
	int32_t x18 = INT32_MIN;
	int8_t x19 = -1;
	uint64_t x20 = 1998LLU;
	volatile uint64_t t2 = 78555057597555LLU;

	t2 = ((x17<=x18)/(x19&x20));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x22 = INT64_MIN;
	static int32_t x23 = INT32_MAX;
	volatile uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t3 = 20942U;

	t3 = ((x21<=x22)/(x23&x24));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x25 = INT16_MAX;
	int32_t x26 = INT32_MIN;
	volatile int16_t x27 = INT16_MAX;
	static uint64_t x28 = 368471518LLU;
	uint64_t t4 = 3074918LLU;

	t4 = ((x25<=x26)/(x27&x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x29 = INT32_MIN;
	volatile int16_t x31 = -1;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t5 = 3U;

	t5 = ((x29<=x30)/(x31&x32));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x33 = 5365149LLU;
	volatile uint64_t x35 = 29445925539031LLU;
	int64_t x36 = 24455968LL;
	uint64_t t6 = 558096967LLU;

	t6 = ((x33<=x34)/(x35&x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x39 = INT32_MIN;
	volatile int64_t x40 = -1LL;

	t7 = ((x37<=x38)/(x39&x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 1;
	uint8_t x42 = 127U;
	uint64_t t8 = 7079LLU;

	t8 = ((x41<=x42)/(x43&x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x45 = 839461LLU;
	int8_t x46 = -11;
	int16_t x47 = INT16_MIN;
	static volatile int64_t x48 = INT64_MAX;

	t9 = ((x45<=x46)/(x47&x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MAX;
	volatile uint16_t x51 = 344U;
	static int16_t x52 = INT16_MAX;
	volatile int32_t t10 = -1169177;

	t10 = ((x49<=x50)/(x51&x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x57 = INT8_MIN;
	static uint32_t x58 = UINT32_MAX;
	int16_t x60 = -1;
	static uint32_t t11 = 6U;

	t11 = ((x57<=x58)/(x59&x60));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x61 = -44;
	volatile int16_t x62 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	int32_t x64 = -1;
	volatile int64_t t12 = 32793917120LL;

	t12 = ((x61<=x62)/(x63&x64));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = -1;
	volatile int64_t x66 = -1LL;
	volatile int8_t x67 = -5;
	int64_t x68 = -1LL;
	volatile int64_t t13 = 165547209936LL;

	t13 = ((x65<=x66)/(x67&x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 1053982700673977LLU;
	static int16_t x70 = INT16_MIN;
	int16_t x71 = -1;
	int16_t x72 = INT16_MIN;
	volatile int32_t t14 = 3754371;

	t14 = ((x69<=x70)/(x71&x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x73 = 140538419909939LLU;
	static uint32_t x74 = 22197029U;
	int16_t x75 = INT16_MAX;

	t15 = ((x73<=x74)/(x75&x76));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MAX;
	uint16_t x79 = UINT16_MAX;
	static int32_t x80 = -1;
	volatile int32_t t16 = 296220930;

	t16 = ((x77<=x78)/(x79&x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MAX;
	int64_t x82 = INT64_MIN;
	int32_t x83 = -57;
	int64_t x84 = INT64_MAX;
	static volatile int64_t t17 = -480429743998656LL;

	t17 = ((x81<=x82)/(x83&x84));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = UINT64_MAX;
	uint16_t x87 = 1U;
	uint32_t x88 = 17U;

	t18 = ((x85<=x86)/(x87&x88));

	if (t18 != 1U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x89 = UINT16_MAX;
	volatile uint64_t x91 = 44061LLU;
	volatile uint64_t x92 = 6859416961072LLU;
	static volatile uint64_t t19 = 4LLU;

	t19 = ((x89<=x90)/(x91&x92));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MAX;
	uint32_t x94 = UINT32_MAX;
	int8_t x95 = INT8_MAX;
	volatile int64_t x96 = -10978170593721LL;
	static volatile int64_t t20 = 1678LL;

	t20 = ((x93<=x94)/(x95&x96));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x101 = -1;
	static int16_t x102 = -1;
	static uint16_t x103 = 131U;
	int32_t x104 = -98;
	volatile int32_t t21 = 0;

	t21 = ((x101<=x102)/(x103&x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = 82232LL;
	int32_t x114 = -434056392;
	uint64_t x116 = 36972514LLU;
	uint64_t t22 = 954951677878148LLU;

	t22 = ((x113<=x114)/(x115&x116));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x119 = UINT32_MAX;
	volatile uint64_t x120 = 1564588115LLU;

	t23 = ((x117<=x118)/(x119&x120));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	static int8_t x130 = 1;
	uint16_t x131 = 275U;
	uint64_t x132 = 1606721067733982LLU;
	volatile uint64_t t24 = 93037066226879152LLU;

	t24 = ((x129<=x130)/(x131&x132));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = 376112;
	volatile int64_t x134 = -1LL;
	uint64_t x135 = 54933130112LLU;
	volatile uint16_t x136 = 2487U;

	t25 = ((x133<=x134)/(x135&x136));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = -32003;
	int64_t x146 = -6LL;
	volatile int16_t x148 = INT16_MIN;
	int32_t t26 = 126;

	t26 = ((x145<=x146)/(x147&x148));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = 54850689334LLU;
	int32_t x155 = 2033679;
	static volatile int32_t x156 = INT32_MAX;
	static int32_t t27 = 1031;

	t27 = ((x153<=x154)/(x155&x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x159 = -46891368373LL;
	static volatile int64_t t28 = -3197758LL;

	t28 = ((x157<=x158)/(x159&x160));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = 0;
	uint32_t x162 = 7780937U;
	volatile uint32_t x163 = UINT32_MAX;
	volatile uint32_t x164 = UINT32_MAX;
	volatile uint32_t t29 = 6U;

	t29 = ((x161<=x162)/(x163&x164));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x166 = INT16_MIN;
	int16_t x167 = INT16_MAX;
	int32_t t30 = 288156;

	t30 = ((x165<=x166)/(x167&x168));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x173 = -1;
	volatile int64_t x174 = -1LL;
	volatile uint16_t x175 = UINT16_MAX;
	uint32_t x176 = 45627U;
	static volatile uint32_t t31 = 4522211U;

	t31 = ((x173<=x174)/(x175&x176));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x177 = 51;
	volatile int64_t x178 = INT64_MIN;
	int8_t x179 = 55;
	volatile int32_t t32 = -1;

	t32 = ((x177<=x178)/(x179&x180));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x181 = UINT32_MAX;
	int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	int8_t x184 = -1;
	volatile int64_t t33 = -39971036526786LL;

	t33 = ((x181<=x182)/(x183&x184));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint64_t x185 = UINT64_MAX;
	int16_t x186 = -1;
	int16_t x187 = INT16_MIN;
	volatile int32_t x188 = -1;
	volatile int32_t t34 = -22;

	t34 = ((x185<=x186)/(x187&x188));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x189 = INT64_MIN;
	static int64_t x190 = INT64_MIN;
	int16_t x192 = -8838;
	volatile int64_t t35 = -891721672007LL;

	t35 = ((x189<=x190)/(x191&x192));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x193 = INT16_MIN;
	int8_t x194 = 14;
	int8_t x195 = -19;
	uint8_t x196 = 1U;
	static volatile int32_t t36 = -2476;

	t36 = ((x193<=x194)/(x195&x196));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x197 = INT32_MIN;
	int32_t x199 = INT32_MIN;
	volatile int16_t x200 = -1;
	static volatile int32_t t37 = -7;

	t37 = ((x197<=x198)/(x199&x200));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x209 = 1;
	static int8_t x210 = -1;
	static uint32_t x211 = UINT32_MAX;

	t38 = ((x209<=x210)/(x211&x212));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x221 = INT32_MIN;
	int16_t x222 = INT16_MIN;
	uint8_t x224 = 1U;
	volatile int32_t t39 = 1956;

	t39 = ((x221<=x222)/(x223&x224));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x225 = 1832557U;
	int32_t x226 = 0;
	volatile int32_t x227 = -1;
	int64_t x228 = -1LL;
	int64_t t40 = -1410165237794LL;

	t40 = ((x225<=x226)/(x227&x228));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x235 = INT8_MAX;
	static uint16_t x236 = 445U;

	t41 = ((x233<=x234)/(x235&x236));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x246 = -1;
	int64_t x247 = INT64_MIN;
	volatile int8_t x248 = INT8_MIN;
	volatile int64_t t42 = -708229301670LL;

	t42 = ((x245<=x246)/(x247&x248));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x258 = UINT8_MAX;
	uint8_t x259 = 1U;
	static volatile int16_t x260 = INT16_MAX;
	int32_t t43 = -129274;

	t43 = ((x257<=x258)/(x259&x260));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x269 = -1;
	static int16_t x270 = -13880;
	int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = UINT64_MAX;
	volatile uint64_t t44 = 645829303LLU;

	t44 = ((x269<=x270)/(x271&x272));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x273 = 977008917658LL;
	volatile int8_t x274 = INT8_MIN;
	uint32_t x275 = 1475429U;
	static uint16_t x276 = UINT16_MAX;

	t45 = ((x273<=x274)/(x275&x276));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x277 = INT16_MIN;
	uint32_t x278 = UINT32_MAX;
	uint16_t x279 = UINT16_MAX;
	static uint32_t x280 = 1U;
	volatile uint32_t t46 = 32819174U;

	t46 = ((x277<=x278)/(x279&x280));

	if (t46 != 1U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x281 = 14409542U;
	static int16_t x283 = INT16_MIN;
	int64_t x284 = -75920LL;
	static volatile int64_t t47 = -6169LL;

	t47 = ((x281<=x282)/(x283&x284));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x285 = -1;
	uint32_t t48 = 926U;

	t48 = ((x285<=x286)/(x287&x288));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x289 = 0;
	uint64_t x290 = UINT64_MAX;
	uint64_t x292 = 1189828LLU;
	static uint64_t t49 = 299648LLU;

	t49 = ((x289<=x290)/(x291&x292));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x293 = -1LL;
	uint16_t x294 = 0U;
	int8_t x295 = -1;
	int32_t x296 = 102521;

	t50 = ((x293<=x294)/(x295&x296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x305 = -1;
	uint32_t x306 = 36948U;
	static uint32_t x308 = UINT32_MAX;
	static volatile uint32_t t51 = 7U;

	t51 = ((x305<=x306)/(x307&x308));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x313 = 1759598166832774891LLU;
	static uint64_t x314 = 594776LLU;
	volatile int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MIN;
	int32_t t52 = 136461334;

	t52 = ((x313<=x314)/(x315&x316));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x321 = 2;
	static int8_t x322 = INT8_MIN;
	volatile int32_t x323 = -1;
	int8_t x324 = -54;
	volatile int32_t t53 = -56;

	t53 = ((x321<=x322)/(x323&x324));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x325 = INT16_MIN;
	uint64_t x326 = 279678554846550LLU;
	int64_t x327 = INT64_MIN;
	int8_t x328 = -1;
	int64_t t54 = 0LL;

	t54 = ((x325<=x326)/(x327&x328));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x333 = 3U;
	uint8_t x334 = UINT8_MAX;
	volatile uint32_t x335 = UINT32_MAX;
	volatile int64_t x336 = -136532LL;
	int64_t t55 = 16644524LL;

	t55 = ((x333<=x334)/(x335&x336));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x338 = 14U;
	uint16_t x339 = UINT16_MAX;
	int64_t t56 = 4094LL;

	t56 = ((x337<=x338)/(x339&x340));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int32_t x343 = -11;
	int16_t x344 = INT16_MIN;
	volatile int32_t t57 = 1466;

	t57 = ((x341<=x342)/(x343&x344));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x351 = 27U;
	volatile int8_t x352 = 1;

	t58 = ((x349<=x350)/(x351&x352));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x353 = -1;
	int8_t x354 = 2;
	volatile int8_t x355 = INT8_MIN;
	uint32_t x356 = 426U;
	uint32_t t59 = 3688U;

	t59 = ((x353<=x354)/(x355&x356));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x357 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;

	t60 = ((x357<=x358)/(x359&x360));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x361 = 260;
	static uint16_t x363 = UINT16_MAX;
	int64_t t61 = 6760LL;

	t61 = ((x361<=x362)/(x363&x364));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x366 = -241782LL;
	uint32_t x367 = 5158203U;
	volatile int8_t x368 = 1;
	volatile uint32_t t62 = 1322402982U;

	t62 = ((x365<=x366)/(x367&x368));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x369 = 668630U;
	int64_t x370 = INT64_MAX;
	int16_t x372 = -801;
	volatile int32_t t63 = -3986;

	t63 = ((x369<=x370)/(x371&x372));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x377 = -1;
	volatile int16_t x378 = -15;
	volatile uint32_t x379 = UINT32_MAX;
	static volatile int8_t x380 = INT8_MAX;
	volatile uint32_t t64 = 126259U;

	t64 = ((x377<=x378)/(x379&x380));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x381 = 587134U;
	uint32_t x383 = 1067399329U;
	uint64_t x384 = UINT64_MAX;

	t65 = ((x381<=x382)/(x383&x384));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int64_t x389 = -831LL;
	int8_t x390 = -58;
	int16_t x391 = 12;
	volatile int64_t x392 = INT64_MAX;
	int64_t t66 = -281880791662518656LL;

	t66 = ((x389<=x390)/(x391&x392));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x400 = INT8_MIN;
	volatile int32_t t67 = 17003;

	t67 = ((x397<=x398)/(x399&x400));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int64_t x402 = INT64_MIN;
	int64_t x403 = 3265608571LL;
	int64_t x404 = -1LL;
	int64_t t68 = -1145LL;

	t68 = ((x401<=x402)/(x403&x404));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x405 = 3U;
	int8_t x406 = INT8_MAX;
	uint32_t x407 = UINT32_MAX;

	t69 = ((x405<=x406)/(x407&x408));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x413 = 24589952U;
	uint16_t x414 = 0U;
	int16_t x415 = 433;
	int64_t t70 = 131399227LL;

	t70 = ((x413<=x414)/(x415&x416));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x417 = 1952U;
	uint64_t x418 = 1973737538LLU;
	int32_t x419 = 404152;
	int8_t x420 = INT8_MIN;
	int32_t t71 = -6841667;

	t71 = ((x417<=x418)/(x419&x420));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x426 = -884993076065318LL;
	uint32_t x427 = 144248570U;
	static volatile uint32_t t72 = 367955684U;

	t72 = ((x425<=x426)/(x427&x428));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x429 = 3U;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = 106121061702869388LLU;
	int16_t x432 = -7280;
	uint64_t t73 = 14597287690LLU;

	t73 = ((x429<=x430)/(x431&x432));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x433 = 23U;
	uint8_t x435 = UINT8_MAX;
	static int32_t t74 = 1000830;

	t74 = ((x433<=x434)/(x435&x436));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x437 = INT8_MIN;
	int64_t x438 = -1LL;
	int64_t x439 = 1243908305LL;
	int8_t x440 = -1;
	int64_t t75 = 25589799216754LL;

	t75 = ((x437<=x438)/(x439&x440));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x442 = INT16_MIN;
	static int16_t x444 = INT16_MAX;
	volatile int64_t t76 = 6660517046LL;

	t76 = ((x441<=x442)/(x443&x444));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x445 = 1980632;
	int8_t x447 = -19;
	int16_t x448 = -35;
	volatile int32_t t77 = 19213;

	t77 = ((x445<=x446)/(x447&x448));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x450 = 4U;
	uint32_t x451 = 274373099U;
	static int16_t x452 = INT16_MAX;
	uint32_t t78 = 3U;

	t78 = ((x449<=x450)/(x451&x452));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x453 = 5U;
	int16_t x454 = -883;
	int64_t x456 = -1LL;
	static volatile int64_t t79 = 16112214478LL;

	t79 = ((x453<=x454)/(x455&x456));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x457 = UINT16_MAX;
	int8_t x458 = INT8_MIN;
	int64_t x459 = -12046LL;
	int32_t x460 = -1069566108;
	int64_t t80 = 3LL;

	t80 = ((x457<=x458)/(x459&x460));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x461 = INT8_MAX;
	static int32_t x462 = INT32_MIN;
	uint32_t x463 = UINT32_MAX;
	uint8_t x464 = UINT8_MAX;
	volatile uint32_t t81 = 580493235U;

	t81 = ((x461<=x462)/(x463&x464));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x470 = INT64_MIN;
	static volatile uint64_t x472 = 11628126468047LLU;

	t82 = ((x469<=x470)/(x471&x472));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x477 = -121;
	volatile uint64_t x478 = UINT64_MAX;
	static int32_t x479 = -12826;
	volatile int32_t t83 = -234;

	t83 = ((x477<=x478)/(x479&x480));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x485 = -61;
	uint64_t x486 = 1397931LLU;
	int32_t x488 = -1;
	int32_t t84 = -248541555;

	t84 = ((x485<=x486)/(x487&x488));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x489 = 72346LL;
	int16_t x490 = INT16_MIN;
	int16_t x491 = -1;
	int64_t x492 = -74865479457LL;
	int64_t t85 = 407233064831333LL;

	t85 = ((x489<=x490)/(x491&x492));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x493 = -1LL;
	static int16_t x494 = -65;
	volatile int32_t x495 = -1;
	int8_t x496 = -1;
	static int32_t t86 = -40;

	t86 = ((x493<=x494)/(x495&x496));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x509 = INT8_MIN;
	int8_t x510 = -1;
	int8_t x511 = -1;
	int8_t x512 = INT8_MIN;
	int32_t t87 = -236787;

	t87 = ((x509<=x510)/(x511&x512));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x513 = UINT64_MAX;
	int64_t x514 = INT64_MIN;
	uint64_t x516 = UINT64_MAX;

	t88 = ((x513<=x514)/(x515&x516));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x521 = INT16_MIN;
	static uint64_t x522 = 176425765056801968LLU;
	uint16_t x523 = UINT16_MAX;
	int32_t x524 = -1;

	t89 = ((x521<=x522)/(x523&x524));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x525 = -865990849LL;
	int32_t x527 = -369;
	int32_t x528 = INT32_MIN;

	t90 = ((x525<=x526)/(x527&x528));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x529 = INT64_MIN;
	volatile int16_t x530 = 736;
	int16_t x531 = INT16_MIN;
	int16_t x532 = INT16_MIN;
	int32_t t91 = 136;

	t91 = ((x529<=x530)/(x531&x532));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x537 = -419838;
	int64_t x538 = -1LL;
	uint16_t x539 = UINT16_MAX;
	volatile int32_t t92 = 183155;

	t92 = ((x537<=x538)/(x539&x540));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x541 = INT32_MAX;
	volatile int64_t x542 = INT64_MIN;
	volatile uint16_t x543 = 5201U;
	static int16_t x544 = INT16_MAX;
	volatile int32_t t93 = 533323169;

	t93 = ((x541<=x542)/(x543&x544));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x550 = INT32_MIN;
	volatile uint8_t x551 = 12U;
	uint32_t x552 = 13U;
	uint32_t t94 = 22151U;

	t94 = ((x549<=x550)/(x551&x552));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x553 = UINT16_MAX;
	int64_t x555 = INT64_MAX;
	int64_t t95 = 1LL;

	t95 = ((x553<=x554)/(x555&x556));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x557 = -1;
	static int64_t x558 = -262929899212178LL;
	int64_t x559 = -390289171311LL;
	volatile int64_t t96 = 5187222LL;

	t96 = ((x557<=x558)/(x559&x560));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x561 = 156380U;
	static volatile uint64_t x562 = 155920452157LLU;
	int16_t x563 = INT16_MIN;
	volatile int32_t t97 = 64252;

	t97 = ((x561<=x562)/(x563&x564));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x565 = INT32_MIN;
	static uint64_t x567 = 5421LLU;
	uint16_t x568 = 31434U;
	uint64_t t98 = 15714976847LLU;

	t98 = ((x565<=x566)/(x567&x568));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x573 = UINT32_MAX;
	uint16_t x574 = 3193U;
	int32_t x575 = INT32_MAX;
	uint64_t x576 = 367LLU;

	t99 = ((x573<=x574)/(x575&x576));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

