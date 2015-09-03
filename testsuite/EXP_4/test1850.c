#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x20 = -1;
int32_t x21 = -1;
uint64_t x24 = 647462414235LLU;
int8_t x27 = 1;
volatile uint64_t x28 = 66907869LLU;
int16_t x35 = -1;
volatile uint64_t t8 = 1642275175LLU;
static int64_t x37 = INT64_MIN;
int64_t x38 = -21448LL;
int8_t x40 = 4;
static int64_t x42 = -1LL;
int32_t x47 = -14;
uint64_t x55 = 176080614917723955LLU;
static int8_t x59 = INT8_MIN;
int64_t x60 = INT64_MIN;
int64_t t14 = 1237220148656011800LL;
int16_t x61 = INT16_MIN;
int64_t x63 = 130794148898526LL;
int8_t x67 = INT8_MAX;
static int8_t x69 = INT8_MAX;
int64_t x79 = -48461718LL;
int32_t x87 = INT32_MIN;
uint32_t t21 = 248133165U;
static int32_t x91 = -1;
volatile uint16_t x94 = 6U;
int16_t x98 = 0;
int16_t x100 = INT16_MIN;
volatile int32_t t24 = -3661779;
uint16_t x101 = 30129U;
uint64_t t26 = 2414LLU;
int64_t x114 = INT64_MIN;
uint32_t x115 = 3712U;
static int8_t x120 = INT8_MIN;
uint16_t x123 = UINT16_MAX;
int32_t x126 = 11;
static uint8_t x127 = UINT8_MAX;
int16_t x128 = INT16_MAX;
volatile uint64_t t31 = 19303552756LLU;
volatile uint64_t t32 = 1895001088004LLU;
static volatile int16_t x136 = -1;
volatile int16_t x140 = INT16_MIN;
volatile int64_t t34 = -724194333094LL;
uint8_t x141 = 6U;
volatile uint64_t x149 = 1187LLU;
static volatile int32_t x150 = INT32_MIN;
int8_t x153 = -1;
int64_t x157 = INT64_MIN;
int8_t x165 = -58;
volatile uint64_t t41 = 8789205008930725LLU;
static volatile int64_t t42 = 19458600017918069LL;
static int32_t x173 = -184936;
uint64_t t43 = 1LLU;
int64_t x184 = -1LL;
uint64_t t45 = 0LLU;
static volatile uint64_t t46 = 229225LLU;
int16_t x199 = INT16_MIN;
int8_t x200 = 0;
volatile uint64_t x205 = 2741248936882548639LLU;
int64_t x212 = -274838005835780LL;
uint64_t t52 = 88466541275LLU;
volatile uint16_t x223 = UINT16_MAX;
static volatile int8_t x225 = INT8_MIN;
int64_t x226 = INT64_MIN;
int8_t x232 = -1;
uint16_t x235 = 0U;
int32_t x238 = INT32_MIN;
volatile int64_t x241 = -1LL;
volatile int64_t x243 = INT64_MIN;
static uint64_t t59 = 84413720743LLU;
int32_t x260 = -1;
static uint32_t x262 = UINT32_MAX;
volatile uint32_t x266 = UINT32_MAX;
volatile uint8_t x271 = UINT8_MAX;
int16_t x283 = INT16_MIN;
volatile int8_t x289 = 18;
int16_t x295 = INT16_MAX;
uint16_t x296 = 0U;
volatile uint32_t t71 = 313102516U;
int64_t x303 = INT64_MIN;
int16_t x304 = -1;
int32_t x305 = INT32_MIN;
static int32_t x308 = -1;
uint32_t x310 = 14388118U;
int32_t x311 = INT32_MAX;
static uint8_t x313 = UINT8_MAX;
uint8_t x315 = UINT8_MAX;
int32_t x319 = 724;
static uint32_t t76 = 10964993U;
int64_t x325 = 25LL;
static uint16_t x330 = UINT16_MAX;
uint32_t x334 = 7132909U;
volatile uint32_t x344 = 16359U;
static volatile int8_t x346 = INT8_MIN;
int64_t x356 = 14075527LL;
volatile int16_t x357 = -1782;
volatile uint64_t x361 = UINT64_MAX;
int8_t x362 = -29;
int64_t x363 = INT64_MIN;
int16_t x364 = INT16_MIN;
volatile uint16_t x369 = UINT16_MAX;
volatile uint16_t x378 = 1U;
int8_t x379 = -50;
int16_t x384 = INT16_MAX;
volatile int32_t x390 = INT32_MIN;
static volatile uint64_t t93 = 1LLU;
volatile int32_t t94 = 40943832;
int32_t x397 = INT32_MIN;
int16_t x407 = -3;
int16_t x409 = INT16_MIN;
int16_t x412 = INT16_MIN;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint8_t x2 = 48U;
	int16_t x3 = -367;
	volatile int16_t x4 = 3190;
	static volatile int64_t t0 = -11057894311791682LL;

	t0 = (x1/(x2^(x3&x4)));

	if (t0 != -2971447176821770LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 6118857998LLU;
	static uint16_t x6 = 30U;
	uint8_t x7 = 90U;
	int8_t x8 = -1;
	volatile uint64_t t1 = 910LLU;

	t1 = (x5/(x6^(x7&x8)));

	if (t1 != 89983205LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = 18199LLU;
	volatile uint8_t x11 = UINT8_MAX;
	int64_t x12 = INT64_MIN;
	uint64_t t2 = 227291442LLU;

	t2 = (x9/(x10^(x11&x12)));

	if (t2 != 1013613059712596LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 684U;
	int32_t x14 = INT32_MAX;
	int32_t x15 = INT32_MAX;
	int16_t x16 = -279;
	static int32_t t3 = -6647;

	t3 = (x13/(x14^(x15&x16)));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 167583086U;
	int8_t x18 = INT8_MAX;
	int8_t x19 = -3;
	uint32_t t4 = 10857U;

	t4 = (x17/(x18^(x19&x20)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 96357072;
	volatile int16_t x23 = -1;
	volatile uint64_t t5 = 42005LLU;

	t5 = (x21/(x22^(x23&x24)));

	if (t5 != 28494739LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 20361638704180498LLU;
	volatile uint64_t t6 = 165181404LLU;

	t6 = (x25/(x26^(x27&x28)));

	if (t6 != 905LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MAX;
	int64_t x30 = INT64_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile int8_t x32 = -9;
	int64_t t7 = 1378472138LL;

	t7 = (x29/(x30^(x31&x32)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MIN;
	uint8_t x34 = UINT8_MAX;
	uint64_t x36 = 305990573384713LLU;

	t8 = (x33/(x34^(x35&x36)));

	if (t8 != 30142LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x39 = 1939356922LLU;
	static volatile uint64_t t9 = 3533LLU;

	t9 = (x37/(x38^(x39&x40)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 506891298274LLU;
	int16_t x43 = -196;
	uint16_t x44 = 17U;
	volatile uint64_t t10 = 1264287761763977LLU;

	t10 = (x41/(x42^(x43&x44)));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x45 = 0;
	volatile int16_t x46 = INT16_MIN;
	static uint64_t x48 = UINT64_MAX;
	static volatile uint64_t t11 = 16101196751LLU;

	t11 = (x45/(x46^(x47&x48)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	int64_t x50 = -1LL;
	static int32_t x51 = INT32_MAX;
	int16_t x52 = INT16_MIN;
	int64_t t12 = 11480011LL;

	t12 = (x49/(x50^(x51&x52)));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 25219U;
	static int8_t x54 = INT8_MIN;
	int64_t x56 = 2297740666433204311LL;
	uint64_t t13 = 0LLU;

	t13 = (x53/(x54^(x55&x56)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 23;
	static int16_t x58 = 112;

	t14 = (x57/(x58^(x59&x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = 12;
	int16_t x64 = -31;
	int64_t t15 = 15LL;

	t15 = (x61/(x62^(x63&x64)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 1803463;
	int32_t x66 = INT32_MAX;
	uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = 1548387861U;

	t16 = (x65/(x66^(x67&x68)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MAX;
	uint64_t x72 = UINT64_MAX;
	uint64_t t17 = 31727536375434LLU;

	t17 = (x69/(x70^(x71&x72)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = -1;
	volatile int8_t x74 = INT8_MIN;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -1196407;

	t18 = (x73/(x74^(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 3434U;
	int32_t x78 = INT32_MIN;
	uint64_t x80 = 1705380268LLU;
	volatile uint64_t t19 = 3300630725861210LLU;

	t19 = (x77/(x78^(x79&x80)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -7;
	uint32_t x82 = 5193U;
	int16_t x83 = -1;
	volatile int32_t x84 = -2;
	uint32_t t20 = 652705U;

	t20 = (x81/(x82^(x83&x84)));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 82080554U;
	volatile int32_t x86 = INT32_MAX;
	static uint32_t x88 = UINT32_MAX;

	t21 = (x85/(x86^(x87&x88)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MAX;
	volatile int64_t x90 = INT64_MIN;
	int16_t x92 = INT16_MIN;
	volatile int64_t t22 = -19651423086203LL;

	t22 = (x89/(x90^(x91&x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = UINT64_MAX;
	static int64_t x95 = 473151551160LL;
	uint64_t x96 = 19047LLU;
	static uint64_t t23 = 5906642690213LLU;

	t23 = (x93/(x94^(x95&x96)));

	if (t23 != 33539534679471912LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	int32_t x99 = INT32_MIN;

	t24 = (x97/(x98^(x99&x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	uint16_t x104 = 2U;
	volatile int32_t t25 = 673078994;

	t25 = (x101/(x102^(x103&x104)));

	if (t25 != -235) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint64_t x106 = 37037491LLU;
	uint16_t x107 = 224U;
	static int64_t x108 = -1LL;

	t26 = (x105/(x106^(x107&x108)));

	if (t26 != 57LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 1U;
	int32_t x110 = 171529241;
	static int16_t x111 = INT16_MAX;
	static volatile uint16_t x112 = UINT16_MAX;
	int32_t t27 = 1009911260;

	t27 = (x109/(x110^(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static int8_t x116 = 4;
	volatile int64_t t28 = 1LL;

	t28 = (x113/(x114^(x115&x116)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = 221;
	int8_t x118 = 0;
	int16_t x119 = -1;
	int32_t t29 = -5685;

	t29 = (x117/(x118^(x119&x120)));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -91384828691100030LL;
	uint8_t x122 = 43U;
	volatile int16_t x124 = INT16_MAX;
	volatile int64_t t30 = 2006333091LL;

	t30 = (x121/(x122^(x123&x124)));

	if (t30 != -2792593469352LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = UINT64_MAX;

	t31 = (x125/(x126^(x127&x128)));

	if (t31 != 75601410138153900LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1609558302519817097LLU;
	uint16_t x130 = 453U;
	static int16_t x131 = INT16_MAX;
	uint8_t x132 = UINT8_MAX;

	t32 = (x129/(x130^(x131&x132)));

	if (t32 != 5125981855158653LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -381013;
	int16_t x134 = 38;
	int16_t x135 = 791;
	volatile int32_t t33 = 1;

	t33 = (x133/(x134^(x135&x136)));

	if (t33 != -466) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	static int8_t x138 = -40;
	int16_t x139 = INT16_MIN;

	t34 = (x137/(x138^(x139&x140)));

	if (t34 != -281818994037361LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x142 = -22;
	uint8_t x143 = 5U;
	volatile int64_t x144 = INT64_MIN;
	volatile int64_t t35 = -32639920230860492LL;

	t35 = (x141/(x142^(x143&x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 1U;
	volatile uint32_t x147 = 8154U;
	volatile int64_t x148 = 55545656LL;
	static volatile uint64_t t36 = 436529345LLU;

	t36 = (x145/(x146^(x147&x148)));

	if (t36 != 4772766901347878LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x151 = 2U;
	int16_t x152 = INT16_MIN;
	uint64_t t37 = 1LLU;

	t37 = (x149/(x150^(x151&x152)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 3U;
	static volatile int32_t x155 = 8;
	uint64_t x156 = 8110456692811689LLU;
	volatile uint64_t t38 = 11757757666LLU;

	t38 = (x153/(x154^(x155&x156)));

	if (t38 != 1676976733973595601LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x158 = -10;
	static int8_t x159 = INT8_MIN;
	uint32_t x160 = 818363U;
	volatile int64_t t39 = 73380701LL;

	t39 = (x157/(x158^(x159&x160)));

	if (t39 != -2147892882LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = 8509;
	int64_t x163 = INT64_MAX;
	static volatile int64_t x164 = INT64_MIN;
	static volatile int64_t t40 = -271691279LL;

	t40 = (x161/(x162^(x163&x164)));

	if (t40 != -3LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MIN;
	int64_t x167 = 14LL;
	uint64_t x168 = 315217667LLU;

	t41 = (x165/(x166^(x167&x168)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 7U;
	uint8_t x170 = 61U;
	int64_t x171 = INT64_MIN;
	int16_t x172 = INT16_MIN;

	t42 = (x169/(x170^(x171&x172)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x174 = INT16_MAX;
	uint64_t x175 = 0LLU;
	int8_t x176 = INT8_MIN;

	t43 = (x173/(x174^(x175&x176)));

	if (t43 != 562967133814794LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 2076631878755845LLU;
	uint64_t x178 = 98786812775039LLU;
	static int64_t x179 = INT64_MIN;
	int64_t x180 = INT64_MAX;
	uint64_t t44 = 585LLU;

	t44 = (x177/(x178^(x179&x180)));

	if (t44 != 21LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 3481565479426507479LLU;
	volatile uint32_t x182 = 5963804U;
	int16_t x183 = 17;

	t45 = (x181/(x182^(x183&x184)));

	if (t45 != 583784147867LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	static int8_t x186 = INT8_MIN;
	uint64_t x187 = 3291788302595068498LLU;
	uint16_t x188 = UINT16_MAX;

	t46 = (x185/(x186^(x187&x188)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 1U;
	int16_t x194 = INT16_MAX;
	int32_t x195 = INT32_MIN;
	int16_t x196 = 7;
	volatile int32_t t47 = 1822;

	t47 = (x193/(x194^(x195&x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x198 = INT8_MIN;
	volatile int32_t t48 = -49149693;

	t48 = (x197/(x198^(x199&x200)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x201 = INT32_MIN;
	uint8_t x202 = 2U;
	static uint64_t x203 = 979656050322377523LLU;
	uint32_t x204 = 16168U;
	static uint64_t t49 = 739LLU;

	t49 = (x201/(x202^(x203&x204)));

	if (t49 != 6472541779495462LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x206 = 679LLU;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MIN;
	volatile uint64_t t50 = 804LLU;

	t50 = (x205/(x206^(x207&x208)));

	if (t50 != 638251522LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x209 = 658006034;
	static int64_t x210 = INT64_MIN;
	volatile int32_t x211 = -1;
	volatile int64_t t51 = 5135LL;

	t51 = (x209/(x210^(x211&x212)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = UINT32_MAX;
	static uint64_t x215 = 15359LLU;
	int32_t x216 = -1769496;

	t52 = (x213/(x214^(x215&x216)));

	if (t52 != 4294982633LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x217 = 3LL;
	uint16_t x218 = 1U;
	uint16_t x219 = UINT16_MAX;
	volatile uint32_t x220 = 1647711U;
	static volatile int64_t t53 = -1128094179874512389LL;

	t53 = (x217/(x218^(x219&x220)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x221 = 939U;
	int8_t x222 = 1;
	int32_t x224 = -1;
	static int32_t t54 = -37;

	t54 = (x221/(x222^(x223&x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x227 = INT8_MAX;
	static uint32_t x228 = 122U;
	int64_t t55 = 154LL;

	t55 = (x225/(x226^(x227&x228)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x229 = -1;
	static uint64_t x230 = 10454LLU;
	int16_t x231 = 249;
	static volatile uint64_t t56 = 151647902788377133LLU;

	t56 = (x229/(x230^(x231&x232)));

	if (t56 != 1793209300448094LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -124;
	int64_t x234 = INT64_MAX;
	int32_t x236 = 984;
	int64_t t57 = 272468110549LL;

	t57 = (x233/(x234^(x235&x236)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x237 = 1U;
	volatile int64_t x239 = -1LL;
	static int16_t x240 = INT16_MIN;
	volatile int64_t t58 = -1430601392300502LL;

	t58 = (x237/(x238^(x239&x240)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x242 = UINT64_MAX;
	volatile int16_t x244 = -222;

	t59 = (x241/(x242^(x243&x244)));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = 2664;
	uint8_t x246 = 27U;
	static int8_t x247 = INT8_MAX;
	volatile uint32_t x248 = 4U;
	static volatile uint32_t t60 = 33908635U;

	t60 = (x245/(x246^(x247&x248)));

	if (t60 != 85U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -33;
	static volatile int16_t x254 = 0;
	int16_t x255 = INT16_MAX;
	volatile int8_t x256 = 1;
	volatile int32_t t61 = -187;

	t61 = (x253/(x254^(x255&x256)));

	if (t61 != -33) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = 1514;
	static volatile int16_t x258 = INT16_MIN;
	int8_t x259 = -12;
	int32_t t62 = -932871;

	t62 = (x257/(x258^(x259&x260)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = -1;
	static uint8_t x263 = UINT8_MAX;
	int64_t x264 = INT64_MAX;
	static int64_t t63 = 11466LL;

	t63 = (x261/(x262^(x263&x264)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x265 = -1;
	int16_t x267 = 901;
	static int64_t x268 = -2105328LL;
	int64_t t64 = -43775128626064322LL;

	t64 = (x265/(x266^(x267&x268)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x269 = 50U;
	int32_t x270 = -1;
	static uint64_t x272 = 19649324674542896LLU;
	volatile uint64_t t65 = 0LLU;

	t65 = (x269/(x270^(x271&x272)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 4U;
	int64_t x274 = -3959LL;
	static int64_t x275 = -46941644170691LL;
	static int64_t x276 = INT64_MIN;
	volatile int64_t t66 = 18703375987082746LL;

	t66 = (x273/(x274^(x275&x276)));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MAX;
	uint16_t x278 = 114U;
	int16_t x279 = -16158;
	uint32_t x280 = 1795U;
	volatile uint32_t t67 = 3905001U;

	t67 = (x277/(x278^(x279&x280)));

	if (t67 != 1U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x281 = INT32_MIN;
	volatile int8_t x282 = INT8_MIN;
	static volatile int64_t x284 = -628282917013491LL;
	int64_t t68 = -669054557275LL;

	t68 = (x281/(x282^(x283&x284)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x285 = UINT8_MAX;
	static int8_t x286 = INT8_MIN;
	uint32_t x287 = 18525U;
	int16_t x288 = INT16_MIN;
	static uint32_t t69 = 15U;

	t69 = (x285/(x286^(x287&x288)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x290 = -9;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t70 = 59;

	t70 = (x289/(x290^(x291&x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x293 = 30;
	uint32_t x294 = 15546857U;

	t71 = (x293/(x294^(x295&x296)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x301 = 13U;
	uint32_t x302 = 2U;
	volatile int64_t t72 = -123361512656599775LL;

	t72 = (x301/(x302^(x303&x304)));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MIN;
	int64_t t73 = 46322LL;

	t73 = (x305/(x306^(x307&x308)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x309 = 4U;
	static int64_t x312 = INT64_MIN;
	int64_t t74 = -7270735610858360LL;

	t74 = (x309/(x310^(x311&x312)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x314 = 61541;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t75 = 26;

	t75 = (x313/(x314^(x315&x316)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = -1;
	static uint32_t x318 = 103623U;
	static int16_t x320 = INT16_MIN;

	t76 = (x317/(x318^(x319&x320)));

	if (t76 != 41448U) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x321 = INT32_MIN;
	static int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MAX;
	int16_t x324 = INT16_MIN;
	static int64_t t77 = 1359377550LL;

	t77 = (x321/(x322^(x323&x324)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x326 = -3424;
	uint16_t x327 = 91U;
	int16_t x328 = -475;
	static volatile int64_t t78 = -289428885LL;

	t78 = (x325/(x326^(x327&x328)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	volatile int64_t x331 = -1LL;
	uint64_t x332 = 2516676LLU;
	uint64_t t79 = 148029751504471LLU;

	t79 = (x329/(x330^(x331&x332)));

	if (t79 != 7292370546949LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = INT64_MIN;
	volatile uint8_t x335 = 0U;
	uint8_t x336 = 5U;
	volatile int64_t t80 = 15030619046LL;

	t80 = (x333/(x334^(x335&x336)));

	if (t80 != -1293072999649LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x337 = INT64_MIN;
	static int16_t x338 = INT16_MIN;
	uint8_t x339 = UINT8_MAX;
	int64_t x340 = -229888586LL;
	int64_t t81 = -1247403275LL;

	t81 = (x337/(x338^(x339&x340)));

	if (t81 != 283047076562167LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x341 = -2;
	volatile int64_t x342 = -1LL;
	int8_t x343 = INT8_MAX;
	int64_t t82 = 1LL;

	t82 = (x341/(x342^(x343&x344)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = 31761795;
	volatile uint8_t x347 = 26U;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t83 = 893732;

	t83 = (x345/(x346^(x347&x348)));

	if (t83 != -311390) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = -1;
	int16_t x350 = INT16_MAX;
	volatile int32_t x351 = -1;
	int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -831193;

	t84 = (x349/(x350^(x351&x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	volatile int64_t x354 = -1LL;
	volatile int64_t x355 = INT64_MIN;
	volatile int64_t t85 = 4183139244LL;

	t85 = (x353/(x354^(x355&x356)));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x358 = -1;
	uint64_t x359 = 3601690813070316LLU;
	int32_t x360 = INT32_MIN;
	volatile uint64_t t86 = 7742015LLU;

	t86 = (x357/(x358^(x359&x360)));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t t87 = 63860445541LLU;

	t87 = (x361/(x362^(x363&x364)));

	if (t87 != 2LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MAX;
	int64_t x366 = INT64_MAX;
	volatile uint16_t x367 = UINT16_MAX;
	static int64_t x368 = -1LL;
	int64_t t88 = -1309160041013LL;

	t88 = (x365/(x366^(x367&x368)));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x370 = 18;
	uint8_t x371 = 13U;
	uint16_t x372 = UINT16_MAX;
	int32_t t89 = 73736;

	t89 = (x369/(x370^(x371&x372)));

	if (t89 != 2114) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x377 = 1U;
	int16_t x380 = INT16_MIN;
	int32_t t90 = 235;

	t90 = (x377/(x378^(x379&x380)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 3U;
	int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MAX;
	volatile int64_t t91 = -114076116536682LL;

	t91 = (x381/(x382^(x383&x384)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	uint16_t x386 = 31632U;
	int32_t x387 = INT32_MIN;
	volatile int64_t x388 = INT64_MIN;
	volatile int64_t t92 = 123072355460LL;

	t92 = (x385/(x386^(x387&x388)));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x389 = INT64_MIN;
	volatile int8_t x391 = 15;
	uint64_t x392 = UINT64_MAX;

	t93 = (x389/(x390^(x391&x392)));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x393 = -1;
	int16_t x394 = INT16_MIN;
	static int16_t x395 = -1;
	uint16_t x396 = UINT16_MAX;

	t94 = (x393/(x394^(x395&x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x398 = -56LL;
	int32_t x399 = -1;
	uint32_t x400 = UINT32_MAX;
	int64_t t95 = -433253076LL;

	t95 = (x397/(x398^(x399&x400)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	static uint64_t x402 = 66436015553376LLU;
	int64_t x403 = 2015024177LL;
	int8_t x404 = INT8_MIN;
	uint64_t t96 = 7075772535899930LLU;

	t96 = (x401/(x402^(x403&x404)));

	if (t96 != 277664LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x405 = INT16_MIN;
	static uint16_t x406 = 0U;
	int64_t x408 = INT64_MIN;
	int64_t t97 = 3165289127159LL;

	t97 = (x405/(x406^(x407&x408)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x410 = UINT64_MAX;
	int32_t x411 = 181274627;
	volatile uint64_t t98 = 1800LLU;

	t98 = (x409/(x410^(x411&x412)));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x413 = 20;
	static uint32_t x414 = 28018U;
	int16_t x415 = INT16_MAX;
	uint8_t x416 = 4U;
	uint32_t t99 = 0U;

	t99 = (x413/(x414^(x415&x416)));

	if (t99 != 0U) { NG(); } else { ; }
	
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

