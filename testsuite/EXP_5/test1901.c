#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 404U;
int8_t x3 = INT8_MAX;
static uint16_t x8 = UINT16_MAX;
uint64_t x21 = 32763LLU;
volatile uint8_t x24 = 1U;
uint64_t t4 = 1530371773LLU;
int32_t x25 = INT32_MIN;
uint8_t x26 = UINT8_MAX;
int64_t t5 = -534482005694LL;
static uint64_t t6 = 49117750117576546LLU;
uint64_t t7 = 832024650822LLU;
uint16_t x50 = 26U;
int32_t x51 = INT32_MAX;
static int8_t x55 = INT8_MIN;
int8_t x75 = INT8_MAX;
volatile int8_t x79 = INT8_MIN;
static volatile int16_t x91 = INT16_MIN;
int64_t x96 = INT64_MIN;
uint64_t x109 = UINT64_MAX;
volatile uint64_t t23 = 1708080190168LLU;
uint64_t x121 = 1LLU;
uint64_t x125 = UINT64_MAX;
uint64_t t26 = UINT64_MAX;
int64_t x130 = INT64_MIN;
int8_t x131 = -1;
int64_t t27 = -128791658417991LL;
uint32_t x138 = 746312U;
static int64_t t29 = -983825800691LL;
uint64_t x160 = 2156889772821992433LLU;
uint64_t x163 = 25LLU;
volatile uint32_t t34 = 1U;
int32_t t36 = -43031833;
uint64_t t37 = 2779LLU;
volatile int64_t x184 = INT64_MAX;
uint32_t x185 = UINT32_MAX;
uint32_t t39 = 525220875U;
uint64_t x203 = 37178023960LLU;
static uint8_t x204 = 5U;
uint8_t x213 = 21U;
uint64_t x214 = 1105381796591480670LLU;
static uint64_t t45 = 376215503486LLU;
int8_t x233 = INT8_MAX;
static uint16_t x235 = UINT16_MAX;
static int8_t x246 = -6;
volatile uint64_t t51 = 1313123748LLU;
int64_t t52 = 924934LL;
volatile uint64_t x258 = 60711591LLU;
int16_t x266 = -1;
static int64_t t56 = -6846LL;
int32_t x272 = 56861;
static uint16_t x276 = UINT16_MAX;
uint64_t x281 = 571569026098433726LLU;
static int32_t x289 = 1846889;
uint64_t x304 = 1648476866430LLU;
static uint64_t t63 = 7010690995753880861LLU;
volatile int32_t x305 = 493417;
uint32_t x307 = UINT32_MAX;
uint64_t x316 = 21499172LLU;
uint64_t x318 = 255875333LLU;
static volatile int64_t x322 = INT64_MIN;
int64_t x325 = -1LL;
int32_t x328 = -1;
int32_t t70 = 640;
int8_t x340 = INT8_MAX;
uint32_t t72 = 2526U;
volatile uint64_t x343 = 32992517LLU;
int8_t x348 = -1;
int64_t t76 = -1719LL;
volatile int16_t x364 = INT16_MAX;
static int16_t x365 = 539;
volatile uint64_t x378 = 3528916LLU;
uint32_t x380 = 15U;
static volatile uint64_t t80 = 0LLU;
uint8_t x386 = 0U;
static uint64_t t81 = 12277764650718LLU;
int16_t x392 = -9536;
uint16_t x393 = UINT16_MAX;
static int32_t x394 = 266850124;
int16_t x396 = INT16_MAX;
static uint8_t x399 = 3U;
int32_t t85 = -433;
int32_t x417 = -1107;
volatile int64_t t89 = -62871276820705LL;
int16_t x426 = INT16_MIN;
volatile int16_t x441 = INT16_MAX;
volatile int32_t x448 = -253113350;
int32_t x455 = -1;
volatile uint16_t x457 = 3156U;
volatile uint64_t x459 = UINT64_MAX;
uint8_t x464 = UINT8_MAX;
int32_t x467 = INT32_MIN;
int32_t x469 = INT32_MIN;
int64_t x471 = INT64_MIN;


void f0(void) {
	static uint64_t x1 = 65670LLU;
	int32_t x4 = INT32_MIN;
	volatile uint64_t t0 = 10198644410274205LLU;

	t0 = (x1*((x2|x3)/x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MIN;
	static int32_t x7 = INT32_MAX;
	volatile int32_t t1 = 625161;

	t1 = (x5*((x6|x7)/x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 43966LLU;
	int64_t x14 = INT64_MAX;
	int32_t x15 = INT32_MIN;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t2 = 11878071041344LLU;

	t2 = (x13*((x14|x15)/x16));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = -1LL;
	int16_t x18 = INT16_MIN;
	volatile uint8_t x19 = UINT8_MAX;
	uint32_t x20 = UINT32_MAX;
	int64_t t3 = 140469843834LL;

	t3 = (x17*((x18|x19)/x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	int64_t x23 = -433013027261832029LL;

	t4 = (x21*((x22|x23)/x24));

	if (t4 != 18446695121007921361LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x27 = INT32_MAX;
	int64_t x28 = -1LL;

	t5 = (x25*((x26|x27)/x28));

	if (t5 != 4611686016279904256LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = -32308;
	static uint32_t x30 = 492243665U;
	uint64_t x31 = 222028662374494909LLU;
	int16_t x32 = INT16_MIN;

	t6 = (x29*((x30|x31)/x32));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 7988U;
	uint64_t x34 = 5845689448628641LLU;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = INT32_MAX;

	t7 = (x33*((x34|x35)/x36));

	if (t7 != 21744222668LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	static uint32_t x38 = 141082U;
	static int32_t x39 = INT32_MIN;
	static volatile int16_t x40 = -3864;
	uint32_t t8 = 2428347U;

	t8 = (x37*((x38|x39)/x40));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x45 = 3U;
	int64_t x46 = 3881326LL;
	uint32_t x47 = 62U;
	static volatile uint64_t x48 = 8532339674272704LLU;
	uint64_t t9 = 17001341156LLU;

	t9 = (x45*((x46|x47)/x48));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	volatile int16_t x52 = INT16_MIN;
	int32_t t10 = -427;

	t10 = (x49*((x50|x51)/x52));

	if (t10 != 2147450880) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x53 = -3;
	int32_t x54 = 462754217;
	int16_t x56 = 161;
	int32_t t11 = 123;

	t11 = (x53*((x54|x55)/x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 3935038793235293LLU;
	volatile uint16_t x58 = 47U;
	volatile uint16_t x59 = UINT16_MAX;
	int8_t x60 = -1;
	uint64_t t12 = 59LLU;

	t12 = (x57*((x58|x59)/x60));

	if (t12 != 371649717258795869LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	volatile int64_t x62 = INT64_MIN;
	uint32_t x63 = 1637341936U;
	uint64_t x64 = 8169LLU;
	volatile uint64_t t13 = 26559549002887536LLU;

	t13 = (x61*((x62|x63)/x64));

	if (t13 != 18302223126111682816LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	uint16_t x74 = 59U;
	int8_t x76 = INT8_MIN;
	int64_t t14 = 2LL;

	t14 = (x73*((x74|x75)/x76));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 23327230242397LLU;
	static int32_t x80 = -3;
	uint64_t t15 = 7829880LLU;

	t15 = (x77*((x78|x79)/x80));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = INT8_MAX;
	int32_t x82 = -793172860;
	uint32_t x83 = 56U;
	int64_t x84 = INT64_MIN;
	int64_t t16 = 304898LL;

	t16 = (x81*((x82|x83)/x84));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x85 = -1;
	int16_t x86 = INT16_MAX;
	int8_t x87 = -5;
	uint64_t x88 = UINT64_MAX;
	uint64_t t17 = UINT64_MAX;

	t17 = (x85*((x86|x87)/x88));

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = -730;
	uint16_t x90 = 6121U;
	int32_t x92 = INT32_MIN;
	volatile int32_t t18 = -5645;

	t18 = (x89*((x90|x91)/x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x93 = 0LLU;
	static volatile int32_t x94 = -1;
	int16_t x95 = INT16_MIN;
	uint64_t t19 = 822LLU;

	t19 = (x93*((x94|x95)/x96));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = -15;
	static int64_t x98 = INT64_MIN;
	int32_t x99 = 19297673;
	static uint8_t x100 = UINT8_MAX;
	volatile int64_t t20 = -1405537623LL;

	t20 = (x97*((x98|x99)/x100));

	if (t20 != 542551296284439885LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = -1;
	static volatile int64_t x102 = -956796116190726084LL;
	int8_t x103 = INT8_MIN;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t21 = 12169360535LL;

	t21 = (x101*((x102|x103)/x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x105 = INT8_MIN;
	int64_t x106 = INT64_MAX;
	static int32_t x107 = INT32_MIN;
	uint16_t x108 = 1685U;
	int64_t t22 = 122831805937LL;

	t22 = (x105*((x106|x107)/x108));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x110 = UINT16_MAX;
	uint32_t x111 = 270148U;
	uint16_t x112 = 1U;

	t23 = (x109*((x110|x111)/x112));

	if (t23 != 18446744073709223937LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	volatile int8_t x114 = INT8_MAX;
	int32_t x115 = INT32_MIN;
	static volatile int16_t x116 = -1;
	volatile int64_t t24 = 513127974979076LL;

	t24 = (x113*((x114|x115)/x116));

	if (t24 != -2147483521LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x122 = 23U;
	static uint32_t x123 = 804U;
	int16_t x124 = -101;
	uint64_t t25 = 1407131LLU;

	t25 = (x121*((x122|x123)/x124));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x126 = 61U;
	int8_t x127 = -1;
	int8_t x128 = -1;

	t26 = (x125*((x126|x127)/x128));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = 1;
	int8_t x132 = INT8_MIN;

	t27 = (x129*((x130|x131)/x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = INT8_MIN;
	int64_t x139 = INT64_MAX;
	int32_t x140 = INT32_MIN;
	int64_t t28 = -1358055252153256LL;

	t28 = (x137*((x138|x139)/x140));

	if (t28 != 549755813760LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = -1;
	volatile int64_t x142 = INT64_MAX;
	int16_t x143 = 1;
	int64_t x144 = INT64_MIN;

	t29 = (x141*((x142|x143)/x144));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = 1;
	static volatile int16_t x146 = INT16_MAX;
	static int16_t x147 = INT16_MAX;
	volatile int32_t x148 = INT32_MAX;
	int32_t t30 = 950009;

	t30 = (x145*((x146|x147)/x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x153 = INT16_MIN;
	volatile int32_t x154 = 345;
	static int16_t x155 = INT16_MIN;
	int32_t x156 = 33669834;
	static volatile int32_t t31 = 1331;

	t31 = (x153*((x154|x155)/x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = INT32_MIN;
	static int32_t x159 = INT32_MIN;
	static uint64_t t32 = 5420080610049707LLU;

	t32 = (x157*((x158|x159)/x160));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x161 = INT16_MIN;
	int64_t x162 = -1LL;
	static int16_t x164 = -28;
	uint64_t t33 = 1802791321566303LLU;

	t33 = (x161*((x162|x163)/x164));

	if (t33 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 9562U;
	volatile int16_t x166 = 4823;
	uint8_t x167 = 27U;
	uint32_t x168 = 243797U;

	t34 = (x165*((x166|x167)/x168));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = -1;
	uint64_t x170 = 212693117LLU;
	int16_t x171 = INT16_MIN;
	int64_t x172 = 23897LL;
	volatile uint64_t t35 = 77466282951084238LLU;

	t35 = (x169*((x170|x171)/x172));

	if (t35 != 18445972146518954071LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = -7096;
	uint8_t x174 = 2U;
	uint8_t x175 = 22U;
	int8_t x176 = INT8_MIN;

	t36 = (x173*((x174|x175)/x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x177 = INT64_MAX;
	static int64_t x178 = INT64_MIN;
	static uint64_t x179 = UINT64_MAX;
	int32_t x180 = -1;

	t37 = (x177*((x178|x179)/x180));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = -4;
	static uint16_t x182 = 282U;
	volatile int64_t x183 = INT64_MAX;
	volatile int64_t t38 = 1LL;

	t38 = (x181*((x182|x183)/x184));

	if (t38 != -4LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x186 = 604029633U;
	int8_t x187 = INT8_MIN;
	int16_t x188 = INT16_MAX;

	t39 = (x185*((x186|x187)/x188));

	if (t39 != 4294836221U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x193 = INT8_MAX;
	int8_t x194 = -1;
	static int16_t x195 = INT16_MIN;
	int16_t x196 = -12893;
	volatile int32_t t40 = -3905789;

	t40 = (x193*((x194|x195)/x196));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x201 = -1;
	int32_t x202 = 1642;
	volatile uint64_t t41 = 1364424LLU;

	t41 = (x201*((x202|x203)/x204));

	if (t41 != 18446744066273946498LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x205 = INT8_MIN;
	static volatile int64_t x206 = INT64_MAX;
	int16_t x207 = INT16_MIN;
	uint64_t x208 = UINT64_MAX;
	volatile uint64_t t42 = 215739031LLU;

	t42 = (x205*((x206|x207)/x208));

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x215 = INT32_MIN;
	static volatile uint32_t x216 = 3U;
	volatile uint64_t t43 = 291288708306461635LLU;

	t43 = (x213*((x214|x215)/x216));

	if (t43 != 18446744064199019403LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x217 = INT64_MIN;
	static int8_t x218 = 5;
	volatile int16_t x219 = -3;
	int16_t x220 = 4696;
	int64_t t44 = -269958361546081LL;

	t44 = (x217*((x218|x219)/x220));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x221 = INT8_MAX;
	volatile uint64_t x222 = 25925549360790LLU;
	int16_t x223 = -7869;
	static int64_t x224 = INT64_MIN;

	t45 = (x221*((x222|x223)/x224));

	if (t45 != 127LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x225 = 11U;
	volatile uint8_t x226 = UINT8_MAX;
	int32_t x227 = -1;
	static int8_t x228 = INT8_MIN;
	volatile int32_t t46 = 920352;

	t46 = (x225*((x226|x227)/x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x229 = 1672U;
	uint16_t x230 = UINT16_MAX;
	uint16_t x231 = UINT16_MAX;
	volatile uint16_t x232 = 1862U;
	int32_t t47 = -263429954;

	t47 = (x229*((x230|x231)/x232));

	if (t47 != 58520) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x234 = 19584870LL;
	static int8_t x236 = -1;
	int64_t t48 = 371918013911LL;

	t48 = (x233*((x234|x235)/x236));

	if (t48 != -2488598401LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x237 = INT32_MAX;
	static volatile uint16_t x238 = 30954U;
	int16_t x239 = 0;
	int64_t x240 = -1LL;
	int64_t t49 = -1106LL;

	t49 = (x237*((x238|x239)/x240));

	if (t49 != -66473208809238LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = INT16_MAX;
	static uint64_t x242 = 581009128122631LLU;
	uint8_t x243 = 21U;
	int32_t x244 = INT32_MIN;
	uint64_t t50 = 15962521806686LLU;

	t50 = (x241*((x242|x243)/x244));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x245 = 68579996414086LLU;
	int8_t x247 = INT8_MIN;
	int16_t x248 = INT16_MAX;

	t51 = (x245*((x246|x247)/x248));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x249 = -602467;
	uint32_t x250 = 2456U;
	int64_t x251 = -1LL;
	static int64_t x252 = -484391LL;

	t52 = (x249*((x250|x251)/x252));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x253 = INT64_MAX;
	int8_t x254 = INT8_MIN;
	int64_t x255 = -1LL;
	uint8_t x256 = UINT8_MAX;
	volatile int64_t t53 = -4637LL;

	t53 = (x253*((x254|x255)/x256));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = -1;
	int32_t x259 = INT32_MIN;
	int8_t x260 = 2;
	volatile uint64_t t54 = 1232443542LLU;

	t54 = (x257*((x258|x259)/x260));

	if (t54 != 9223372037898161837LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x261 = 7U;
	int64_t x262 = -1LL;
	static uint64_t x263 = 482402979204LLU;
	static int16_t x264 = -1;
	static volatile uint64_t t55 = 127460LLU;

	t55 = (x261*((x262|x263)/x264));

	if (t55 != 7LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -1;
	int64_t x267 = INT64_MIN;
	int64_t x268 = INT64_MAX;

	t56 = (x265*((x266|x267)/x268));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x269 = -30;
	int64_t x270 = INT64_MAX;
	int16_t x271 = INT16_MIN;
	volatile int64_t t57 = 579660LL;

	t57 = (x269*((x270|x271)/x272));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x273 = 71U;
	uint32_t x274 = UINT32_MAX;
	static uint8_t x275 = 13U;
	volatile uint32_t t58 = 7708U;

	t58 = (x273*((x274|x275)/x276));

	if (t58 != 4653127U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x282 = 0U;
	int8_t x283 = INT8_MAX;
	static int8_t x284 = 18;
	uint64_t t59 = 35736LLU;

	t59 = (x281*((x282|x283)/x284));

	if (t59 != 4000983182689036082LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x285 = 192U;
	int16_t x286 = 31;
	uint8_t x287 = 2U;
	uint16_t x288 = 23U;
	volatile int32_t t60 = 70;

	t60 = (x285*((x286|x287)/x288));

	if (t60 != 192) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x290 = INT16_MIN;
	volatile int8_t x291 = -1;
	int16_t x292 = INT16_MAX;
	int32_t t61 = 323;

	t61 = (x289*((x290|x291)/x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x297 = 105392598U;
	static uint64_t x298 = 788769682231LLU;
	int8_t x299 = INT8_MAX;
	static int32_t x300 = INT32_MAX;
	volatile uint64_t t62 = 120LLU;

	t62 = (x297*((x298|x299)/x300));

	if (t62 != 38679083466LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x301 = -1;
	int16_t x302 = -1;
	int32_t x303 = INT32_MIN;

	t63 = (x301*((x302|x303)/x304));

	if (t63 != 18446744073698361442LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x306 = -1;
	int16_t x308 = INT16_MIN;
	volatile uint32_t t64 = 3U;

	t64 = (x305*((x306|x307)/x308));

	if (t64 != 493417U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = INT16_MIN;
	volatile int16_t x310 = 3;
	static uint64_t x311 = 92363054678177402LLU;
	int8_t x312 = INT8_MIN;
	volatile uint64_t t65 = 492957LLU;

	t65 = (x309*((x310|x311)/x312));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x313 = 135378926LLU;
	int16_t x314 = -38;
	volatile int16_t x315 = INT16_MIN;
	volatile uint64_t t66 = 48940170079198LLU;

	t66 = (x313*((x314|x315)/x316));

	if (t66 != 5477516009000030396LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x317 = 194078254U;
	int16_t x319 = 846;
	uint32_t x320 = UINT32_MAX;
	volatile uint64_t t67 = 67173LLU;

	t67 = (x317*((x318|x319)/x320));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MIN;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 8029U;
	volatile int64_t t68 = 506037LL;

	t68 = (x321*((x322|x323)/x324));

	if (t68 != 131072LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x326 = -1;
	uint64_t x327 = UINT64_MAX;
	uint64_t t69 = UINT64_MAX;

	t69 = (x325*((x326|x327)/x328));

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x329 = INT16_MAX;
	uint16_t x330 = 119U;
	static int8_t x331 = 1;
	static int16_t x332 = -1;

	t70 = (x329*((x330|x331)/x332));

	if (t70 != -3899273) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = -7344;
	int8_t x334 = INT8_MIN;
	uint32_t x335 = 597U;
	int16_t x336 = INT16_MIN;
	volatile uint32_t t71 = 3U;

	t71 = (x333*((x334|x335)/x336));

	if (t71 != 4294959952U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = INT32_MAX;
	uint32_t x338 = 12U;
	int8_t x339 = -1;

	t72 = (x337*((x338|x339)/x340));

	if (t72 != 4261148656U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = INT64_MIN;
	volatile int16_t x342 = INT16_MAX;
	int32_t x344 = -1;
	volatile uint64_t t73 = 401567840LLU;

	t73 = (x341*((x342|x343)/x344));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x345 = INT16_MIN;
	int16_t x346 = -1;
	uint16_t x347 = UINT16_MAX;
	volatile int32_t t74 = -2;

	t74 = (x345*((x346|x347)/x348));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x349 = 1LLU;
	int64_t x350 = INT64_MIN;
	int8_t x351 = 51;
	int8_t x352 = 61;
	volatile uint64_t t75 = 145865512575301LLU;

	t75 = (x349*((x350|x351)/x352));

	if (t75 != 18295541253433243817LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -3984LL;
	volatile int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MIN;
	uint8_t x356 = 2U;

	t76 = (x353*((x354|x355)/x356));

	if (t76 != 65273856LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x361 = INT32_MAX;
	static uint8_t x362 = UINT8_MAX;
	int16_t x363 = INT16_MIN;
	static volatile int32_t t77 = 16756713;

	t77 = (x361*((x362|x363)/x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x366 = -4;
	static int16_t x367 = -1;
	int16_t x368 = -1;
	volatile int32_t t78 = 826749935;

	t78 = (x365*((x366|x367)/x368));

	if (t78 != 539) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x373 = INT8_MAX;
	int16_t x374 = INT16_MIN;
	static int8_t x375 = INT8_MAX;
	int32_t x376 = 107282399;
	volatile int32_t t79 = -5053090;

	t79 = (x373*((x374|x375)/x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x377 = UINT32_MAX;
	static uint16_t x379 = UINT16_MAX;

	t80 = (x377*((x378|x379)/x380));

	if (t80 != 1013307338942055LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x385 = 8909294836268594801LLU;
	int8_t x387 = -4;
	uint16_t x388 = 4U;

	t81 = (x385*((x386|x387)/x388));

	if (t81 != 9537449237440956815LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x389 = -5712699568LL;
	static int16_t x390 = INT16_MIN;
	int16_t x391 = INT16_MAX;
	volatile int64_t t82 = 33884248636192LL;

	t82 = (x389*((x390|x391)/x392));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x395 = -9391340445LL;
	int64_t t83 = -27015LL;

	t83 = (x393*((x394|x395)/x396));

	if (t83 != -18253856760LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x397 = 1U;
	int32_t x398 = 150305220;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t84 = 42U;

	t84 = (x397*((x398|x399)/x400));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x401 = 2U;
	volatile int16_t x402 = INT16_MIN;
	volatile int16_t x403 = -51;
	uint8_t x404 = 3U;

	t85 = (x401*((x402|x403)/x404));

	if (t85 != -34) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x405 = 2;
	int8_t x406 = -3;
	int8_t x407 = -1;
	static int16_t x408 = -1;
	volatile int32_t t86 = -1;

	t86 = (x405*((x406|x407)/x408));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x409 = UINT64_MAX;
	uint64_t x410 = 30LLU;
	int64_t x411 = 60371165906210LL;
	uint64_t x412 = 817820680497654486LLU;
	uint64_t t87 = 20567225168786662LLU;

	t87 = (x409*((x410|x411)/x412));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x413 = 0;
	uint32_t x414 = 32790U;
	static int64_t x415 = INT64_MAX;
	static int8_t x416 = INT8_MAX;
	volatile int64_t t88 = -5558021665929536LL;

	t88 = (x413*((x414|x415)/x416));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x418 = UINT32_MAX;
	int32_t x419 = 0;
	volatile int64_t x420 = INT64_MAX;

	t89 = (x417*((x418|x419)/x420));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = INT16_MIN;
	static int64_t x427 = 1268550149LL;
	int16_t x428 = INT16_MIN;
	int64_t t90 = 115930883872LL;

	t90 = (x425*((x426|x427)/x428));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = -1;
	static int16_t x434 = -1;
	uint32_t x435 = 9065713U;
	volatile uint8_t x436 = UINT8_MAX;
	volatile uint32_t t91 = 237405U;

	t91 = (x433*((x434|x435)/x436));

	if (t91 != 4278124287U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x442 = UINT32_MAX;
	uint8_t x443 = 9U;
	int32_t x444 = -1;
	volatile uint32_t t92 = 17282458U;

	t92 = (x441*((x442|x443)/x444));

	if (t92 != 32767U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x445 = 0;
	uint16_t x446 = UINT16_MAX;
	int32_t x447 = 5515201;
	volatile int32_t t93 = -310;

	t93 = (x445*((x446|x447)/x448));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = INT16_MAX;
	volatile uint16_t x450 = 6U;
	volatile int64_t x451 = 25968269466LL;
	int8_t x452 = -1;
	volatile int64_t t94 = -12544100936LL;

	t94 = (x449*((x450|x451)/x452));

	if (t94 != -850902285723490LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x453 = -6066;
	int64_t x454 = -2143LL;
	uint64_t x456 = UINT64_MAX;
	volatile uint64_t t95 = 108260528LLU;

	t95 = (x453*((x454|x455)/x456));

	if (t95 != 18446744073709545550LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x458 = UINT32_MAX;
	int8_t x460 = INT8_MIN;
	static uint64_t t96 = 5623603760LLU;

	t96 = (x457*((x458|x459)/x460));

	if (t96 != 3156LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x461 = -1;
	int16_t x462 = INT16_MIN;
	int64_t x463 = INT64_MIN;
	int64_t t97 = -804LL;

	t97 = (x461*((x462|x463)/x464));

	if (t97 != 128LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x465 = UINT8_MAX;
	volatile uint8_t x466 = UINT8_MAX;
	int64_t x468 = -50337429668LL;
	static int64_t t98 = -25052184558LL;

	t98 = (x465*((x466|x467)/x468));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x470 = -937LL;
	int64_t x472 = 999221305549LL;
	volatile int64_t t99 = 613131763400LL;

	t99 = (x469*((x470|x471)/x472));

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

