#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = 2U;
volatile uint64_t t1 = 2151LLU;
uint64_t x17 = UINT64_MAX;
uint16_t x18 = 4877U;
uint64_t x19 = 14642343LLU;
static int32_t x27 = -1;
static volatile int64_t t5 = -10LL;
static int32_t x32 = 0;
static volatile int16_t x36 = INT16_MIN;
int32_t t7 = -306;
uint64_t x38 = UINT64_MAX;
int8_t x39 = INT8_MAX;
int64_t x48 = 443647674018252LL;
uint64_t x52 = UINT64_MAX;
volatile uint64_t t11 = 6998268LLU;
volatile int8_t x59 = -1;
int64_t x61 = INT64_MAX;
volatile int64_t x75 = INT64_MIN;
static volatile int8_t x78 = -5;
volatile int64_t t17 = -1495758305876LL;
int64_t x83 = 25857528LL;
uint64_t x84 = UINT64_MAX;
static volatile int8_t x97 = -1;
static int32_t x109 = INT32_MAX;
volatile int16_t x110 = -172;
static int32_t x111 = INT32_MIN;
int32_t t24 = -19;
static volatile int8_t x128 = -1;
static int32_t t27 = 297003727;
int8_t x129 = INT8_MIN;
volatile uint16_t x139 = 23U;
uint16_t x142 = 1U;
uint16_t x151 = UINT16_MAX;
int32_t x152 = INT32_MIN;
volatile uint64_t x168 = 238280LLU;
static int32_t x184 = -206452;
static uint16_t x187 = 471U;
uint16_t x190 = 0U;
int16_t x193 = INT16_MIN;
volatile uint64_t x195 = 4201451149LLU;
volatile uint64_t t41 = 1117930809530583LLU;
int8_t x201 = INT8_MAX;
uint32_t x203 = UINT32_MAX;
volatile uint64_t x215 = 1505826412422061651LLU;
int16_t x219 = INT16_MIN;
uint32_t t46 = 7U;
uint64_t x237 = UINT64_MAX;
uint8_t x239 = 31U;
int64_t x247 = 42835415190757LL;
int16_t x249 = INT16_MAX;
volatile int32_t t51 = -2312969;
int32_t x260 = -1;
volatile uint64_t x267 = UINT64_MAX;
volatile int8_t x268 = INT8_MAX;
uint16_t x270 = UINT16_MAX;
int8_t x271 = INT8_MIN;
int16_t x279 = 0;
int16_t x280 = -443;
static int32_t x285 = 40525335;
int8_t x288 = -1;
volatile int32_t t57 = -117357954;
int32_t t58 = -75;
uint32_t x294 = UINT32_MAX;
uint32_t x295 = UINT32_MAX;
static volatile int64_t x300 = -1LL;
uint16_t x304 = UINT16_MAX;
int8_t x306 = -2;
volatile int64_t t62 = -253373806LL;
int64_t x309 = INT64_MAX;
static int32_t x320 = INT32_MAX;
static uint64_t x321 = 50973622024392905LLU;
uint32_t x324 = 215502737U;
volatile uint64_t t65 = 966417467311LLU;
int32_t x326 = -1;
volatile int64_t x331 = -3310659LL;
uint64_t x335 = UINT64_MAX;
volatile uint64_t t68 = 129950LLU;
int32_t x338 = INT32_MIN;
uint16_t x346 = UINT16_MAX;
volatile int16_t x352 = 631;
int64_t t73 = -17230729255LL;
static uint8_t x361 = 5U;
int32_t x365 = INT32_MIN;
uint32_t x366 = 475520U;
volatile int16_t x369 = INT16_MIN;
static uint32_t t77 = 2093U;
uint64_t x374 = UINT64_MAX;
static uint64_t t78 = 249LLU;
static volatile uint64_t x377 = 16146LLU;
uint32_t x378 = 114U;
uint16_t x384 = 28037U;
volatile uint16_t x385 = UINT16_MAX;
static int32_t x388 = -102453944;
volatile int64_t t81 = 13578329655240489LL;
static volatile int32_t x391 = -2;
int16_t x394 = 10053;
uint32_t x396 = 48U;
static int16_t x400 = -1;
int8_t x406 = INT8_MIN;
int8_t x410 = -1;
int8_t x412 = INT8_MIN;
int16_t x420 = -1358;
static uint8_t x428 = UINT8_MAX;
volatile int32_t x437 = INT32_MIN;
static uint64_t x438 = 4153LLU;
uint8_t x442 = UINT8_MAX;
volatile int16_t x448 = INT16_MIN;
static volatile int64_t x463 = -1LL;


void f0(void) {
	uint32_t x1 = 10U;
	volatile int16_t x2 = -1;
	int8_t x3 = -61;
	uint32_t t0 = 194634U;

	t0 = ((x1+x2)+(x3|x4));

	if (t0 != 4294967244U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = 4292858640LLU;
	int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MAX;
	int16_t x8 = -67;

	t1 = ((x5+x6)+(x7|x8));

	if (t1 != 2145374991LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	volatile uint32_t x10 = 39108528U;
	static int8_t x11 = INT8_MAX;
	volatile int64_t x12 = INT64_MIN;
	int64_t t2 = -41364LL;

	t2 = ((x9+x10)+(x11|x12));

	if (t2 != -9223372034668183505LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = UINT64_MAX;
	int8_t x14 = 5;
	uint16_t x15 = UINT16_MAX;
	static uint32_t x16 = UINT32_MAX;
	static uint64_t t3 = 39354774443430LLU;

	t3 = ((x13+x14)+(x15|x16));

	if (t3 != 4294967299LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x20 = -43328389130171LL;
	volatile uint64_t t4 = 4746724713592609LLU;

	t4 = ((x17+x18)+(x19|x20));

	if (t4 != 18446700745322401779LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 30U;
	int64_t x26 = -134255089853584956LL;
	int64_t x28 = 11963471198719742LL;

	t5 = ((x25+x26)+(x27|x28));

	if (t5 != -134255089853584927LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = 0;
	volatile int16_t x30 = INT16_MIN;
	volatile uint16_t x31 = 3692U;
	int32_t t6 = 24101761;

	t6 = ((x29+x30)+(x31|x32));

	if (t6 != -29076) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x33 = INT8_MAX;
	int8_t x34 = INT8_MIN;
	volatile int32_t x35 = INT32_MAX;

	t7 = ((x33+x34)+(x35|x36));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 1U;
	uint32_t x40 = 5517U;
	uint64_t t8 = 171LLU;

	t8 = ((x37+x38)+(x39|x40));

	if (t8 != 5631LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	uint32_t x42 = UINT32_MAX;
	int32_t x43 = -7921;
	int16_t x44 = -301;
	static volatile uint32_t t9 = 86878322U;

	t9 = ((x41+x42)+(x43|x44));

	if (t9 != 4294967261U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = -1;
	int16_t x47 = INT16_MIN;
	int64_t t10 = -9410279265LL;

	t10 = ((x45+x46)+(x47|x48));

	if (t10 != 27082LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -155LL;
	int64_t x50 = -3902523LL;
	int16_t x51 = INT16_MIN;

	t11 = ((x49+x50)+(x51|x52));

	if (t11 != 18446744073705648937LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 56U;
	uint64_t x54 = 15473LLU;
	static int16_t x55 = INT16_MIN;
	uint64_t x56 = 59591LLU;
	uint64_t t12 = 3737005113950LLU;

	t12 = ((x53+x54)+(x55|x56));

	if (t12 != 9584LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 491211814U;
	uint32_t x60 = UINT32_MAX;
	uint32_t t13 = 153210147U;

	t13 = ((x57+x58)+(x59|x60));

	if (t13 != 2638695461U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x62 = INT64_MIN;
	int64_t x63 = INT64_MAX;
	int16_t x64 = INT16_MIN;
	volatile int64_t t14 = -62882LL;

	t14 = ((x61+x62)+(x63|x64));

	if (t14 != -2LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x69 = 1607522U;
	int32_t x70 = 52;
	uint32_t x71 = UINT32_MAX;
	static int64_t x72 = INT64_MIN;
	int64_t t15 = 2564417339LL;

	t15 = ((x69+x70)+(x71|x72));

	if (t15 != -9223372032558200939LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x73 = INT16_MIN;
	int8_t x74 = 1;
	int16_t x76 = -1;
	volatile int64_t t16 = -3738776459718LL;

	t16 = ((x73+x74)+(x75|x76));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -1;
	static int64_t x79 = 663036647190857LL;
	int64_t x80 = -1LL;

	t17 = ((x77+x78)+(x79|x80));

	if (t17 != -7LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MIN;
	uint64_t t18 = 101301LLU;

	t18 = ((x81+x82)+(x83|x84));

	if (t18 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x89 = 13744622;
	volatile int64_t x90 = -1LL;
	static int16_t x91 = 29;
	int8_t x92 = INT8_MIN;
	int64_t t19 = 2042635LL;

	t19 = ((x89+x90)+(x91|x92));

	if (t19 != 13744522LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -28;
	uint32_t x94 = UINT32_MAX;
	static uint8_t x95 = 1U;
	uint16_t x96 = UINT16_MAX;
	uint32_t t20 = 138083472U;

	t20 = ((x93+x94)+(x95|x96));

	if (t20 != 65506U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x98 = -3LL;
	volatile int64_t x99 = 1897183LL;
	int16_t x100 = INT16_MIN;
	int64_t t21 = -21LL;

	t21 = ((x97+x98)+(x99|x100));

	if (t21 != -3365LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	volatile int8_t x103 = -1;
	volatile uint16_t x104 = UINT16_MAX;
	volatile int32_t t22 = -231481771;

	t22 = ((x101+x102)+(x103|x104));

	if (t22 != 126) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -5;
	volatile uint16_t x106 = 1U;
	int64_t x107 = INT64_MAX;
	uint64_t x108 = 54337648LLU;
	uint64_t t23 = 1206156287877LLU;

	t23 = ((x105+x106)+(x107|x108));

	if (t23 != 9223372036854775803LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x112 = UINT16_MAX;

	t24 = ((x109+x110)+(x111|x112));

	if (t24 != 65362) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x113 = INT64_MIN;
	volatile uint32_t x114 = 301002U;
	static int16_t x115 = -112;
	uint16_t x116 = UINT16_MAX;
	volatile int64_t t25 = -1841895591LL;

	t25 = ((x113+x114)+(x115|x116));

	if (t25 != -9223372036854474807LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 4LLU;
	volatile int32_t x122 = INT32_MAX;
	volatile uint32_t x123 = UINT32_MAX;
	volatile int16_t x124 = -1;
	static uint64_t t26 = 89953131161LLU;

	t26 = ((x121+x122)+(x123|x124));

	if (t26 != 6442450946LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = -72989;
	volatile int8_t x126 = 2;
	volatile int8_t x127 = INT8_MAX;

	t27 = ((x125+x126)+(x127|x128));

	if (t27 != -72988) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = INT8_MAX;
	static uint8_t x131 = 12U;
	uint64_t x132 = 117693938LLU;
	uint64_t t28 = 12569200713273LLU;

	t28 = ((x129+x130)+(x131|x132));

	if (t28 != 117693949LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x137 = UINT8_MAX;
	static volatile uint8_t x138 = 1U;
	int8_t x140 = INT8_MAX;
	volatile int32_t t29 = 619554;

	t29 = ((x137+x138)+(x139|x140));

	if (t29 != 383) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = -1;
	int64_t x143 = 30566154472LL;
	int8_t x144 = INT8_MAX;
	volatile int64_t t30 = 1969211566232045014LL;

	t30 = ((x141+x142)+(x143|x144));

	if (t30 != 30566154495LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x145 = 0;
	uint16_t x146 = UINT16_MAX;
	int8_t x147 = -6;
	int64_t x148 = -1LL;
	int64_t t31 = -23953LL;

	t31 = ((x145+x146)+(x147|x148));

	if (t31 != 65534LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x149 = INT16_MIN;
	volatile int64_t x150 = 2327LL;
	volatile int64_t t32 = -131289LL;

	t32 = ((x149+x150)+(x151|x152));

	if (t32 != -2147448554LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = -15LL;
	static uint16_t x154 = 1830U;
	volatile int32_t x155 = -1;
	int8_t x156 = INT8_MIN;
	volatile int64_t t33 = -698858757899525LL;

	t33 = ((x153+x154)+(x155|x156));

	if (t33 != 1814LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x157 = INT64_MIN;
	uint64_t x158 = 526801100043675283LLU;
	int8_t x159 = INT8_MAX;
	int8_t x160 = INT8_MIN;
	volatile uint64_t t34 = 435860388571510851LLU;

	t34 = ((x157+x158)+(x159|x160));

	if (t34 != 9750173136898451090LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x161 = -1;
	volatile int64_t x162 = INT64_MAX;
	int8_t x163 = INT8_MAX;
	uint64_t x164 = UINT64_MAX;
	volatile uint64_t t35 = 14649933535505080LLU;

	t35 = ((x161+x162)+(x163|x164));

	if (t35 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint32_t x165 = 14U;
	volatile int32_t x166 = INT32_MAX;
	int32_t x167 = -430715;
	uint64_t t36 = 1232484LLU;

	t36 = ((x165+x166)+(x167|x168));

	if (t36 != 2147217370LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MIN;
	uint16_t x170 = 473U;
	int16_t x171 = INT16_MIN;
	static int32_t x172 = -1;
	volatile int64_t t37 = 17125299LL;

	t37 = ((x169+x170)+(x171|x172));

	if (t37 != -9223372036854775336LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x181 = -30547200;
	volatile int16_t x182 = INT16_MIN;
	uint64_t x183 = 131670291LLU;
	volatile uint64_t t38 = 2825LLU;

	t38 = ((x181+x182)+(x183|x184));

	if (t38 != 18446744073678838943LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = 3U;
	int64_t x188 = -2987626671195076LL;
	static volatile int64_t t39 = 233346962LL;

	t39 = ((x185+x186)+(x187|x188));

	if (t39 != -2987626671129087LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = UINT8_MAX;
	static int64_t x191 = -406658LL;
	volatile int8_t x192 = -1;
	int64_t t40 = 5LL;

	t40 = ((x189+x190)+(x191|x192));

	if (t40 != 254LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x194 = 12623263;
	volatile uint32_t x196 = UINT32_MAX;

	t41 = ((x193+x194)+(x195|x196));

	if (t41 != 4307557790LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x202 = 422558936217402LL;
	int8_t x204 = -5;
	int64_t t42 = 996342176LL;

	t42 = ((x201+x202)+(x203|x204));

	if (t42 != 422563231184824LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x205 = 378207U;
	int32_t x206 = INT32_MAX;
	static int8_t x207 = INT8_MIN;
	int64_t x208 = INT64_MIN;
	volatile int64_t t43 = 1016998695LL;

	t43 = ((x205+x206)+(x207|x208));

	if (t43 != 2147861726LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = UINT16_MAX;
	int8_t x210 = 1;
	static int8_t x211 = -25;
	int16_t x212 = 2118;
	int32_t t44 = 501;

	t44 = ((x209+x210)+(x211|x212));

	if (t44 != 65511) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x213 = 5406950709575LL;
	int32_t x214 = INT32_MIN;
	static int8_t x216 = INT8_MIN;
	volatile uint64_t t45 = 470447367132021LLU;

	t45 = ((x213+x214)+(x215|x216));

	if (t45 != 5404803225882LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x217 = 384342U;
	int16_t x218 = INT16_MIN;
	int32_t x220 = 49163;

	t46 = ((x217+x218)+(x219|x220));

	if (t46 != 335201U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x225 = -129834LL;
	int8_t x226 = 7;
	volatile int32_t x227 = INT32_MIN;
	int8_t x228 = INT8_MIN;
	volatile int64_t t47 = -1421688LL;

	t47 = ((x225+x226)+(x227|x228));

	if (t47 != -129955LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = 3U;
	int16_t x234 = -1;
	volatile int32_t x235 = INT32_MIN;
	uint32_t x236 = UINT32_MAX;
	static uint32_t t48 = 8557093U;

	t48 = ((x233+x234)+(x235|x236));

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x238 = INT32_MIN;
	int8_t x240 = INT8_MIN;
	uint64_t t49 = 58191115365053865LLU;

	t49 = ((x237+x238)+(x239|x240));

	if (t49 != 18446744071562067870LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x246 = 99U;
	uint8_t x248 = 22U;
	volatile int64_t t50 = -6LL;

	t50 = ((x245+x246)+(x247|x248));

	if (t50 != -9223329201439584934LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x250 = 169;
	int16_t x251 = -1;
	volatile int16_t x252 = 55;

	t51 = ((x249+x250)+(x251|x252));

	if (t51 != 32935) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x257 = INT32_MIN;
	volatile int64_t x258 = -503724254717188LL;
	volatile int8_t x259 = -1;
	volatile int64_t t52 = -3313029604424212362LL;

	t52 = ((x257+x258)+(x259|x260));

	if (t52 != -503726402200837LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = 16U;
	int8_t x262 = INT8_MAX;
	int64_t x263 = INT64_MIN;
	int8_t x264 = INT8_MIN;
	volatile int64_t t53 = 1823949466LL;

	t53 = ((x261+x262)+(x263|x264));

	if (t53 != 15LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = 21;
	int32_t x266 = -2366088;
	uint64_t t54 = 12280050LLU;

	t54 = ((x265+x266)+(x267|x268));

	if (t54 != 18446744073707185548LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x269 = INT8_MIN;
	int16_t x272 = INT16_MAX;
	int32_t t55 = 822372;

	t55 = ((x269+x270)+(x271|x272));

	if (t55 != 65406) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x277 = INT16_MAX;
	uint16_t x278 = UINT16_MAX;
	volatile int32_t t56 = -283768;

	t56 = ((x277+x278)+(x279|x280));

	if (t56 != 97859) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x286 = INT8_MIN;
	int8_t x287 = -1;

	t57 = ((x285+x286)+(x287|x288));

	if (t57 != 40525206) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x289 = -1;
	int16_t x290 = INT16_MIN;
	volatile int8_t x291 = -1;
	int8_t x292 = INT8_MIN;

	t58 = ((x289+x290)+(x291|x292));

	if (t58 != -32770) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x293 = 1U;
	int32_t x296 = INT32_MIN;
	uint32_t t59 = UINT32_MAX;

	t59 = ((x293+x294)+(x295|x296));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x297 = UINT8_MAX;
	int64_t x298 = -1LL;
	volatile int32_t x299 = INT32_MAX;
	int64_t t60 = -1LL;

	t60 = ((x297+x298)+(x299|x300));

	if (t60 != 253LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x301 = INT8_MIN;
	int16_t x302 = -1;
	uint8_t x303 = 3U;
	static int32_t t61 = 77;

	t61 = ((x301+x302)+(x303|x304));

	if (t61 != 65406) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x305 = INT8_MIN;
	int64_t x307 = 403389425762LL;
	int32_t x308 = INT32_MAX;

	t62 = ((x305+x306)+(x307|x308));

	if (t62 != 403726925693LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x310 = -148241220761447LL;
	int64_t x311 = INT64_MIN;
	volatile int64_t x312 = INT64_MAX;
	static int64_t t63 = 139938567194LL;

	t63 = ((x309+x310)+(x311|x312));

	if (t63 != 9223223795634014359LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = INT8_MIN;
	uint32_t x318 = 102043U;
	int16_t x319 = INT16_MIN;
	uint32_t t64 = 10670281U;

	t64 = ((x317+x318)+(x319|x320));

	if (t64 != 101914U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x322 = INT16_MIN;
	uint64_t x323 = UINT64_MAX;

	t65 = ((x321+x322)+(x323|x324));

	if (t65 != 50973622024360136LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x325 = -1LL;
	volatile int8_t x327 = -12;
	int64_t x328 = 1092743158641001LL;
	int64_t t66 = -2248017434101842LL;

	t66 = ((x325+x326)+(x327|x328));

	if (t66 != -5LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x329 = 49LLU;
	uint16_t x330 = UINT16_MAX;
	static volatile uint8_t x332 = 1U;
	volatile uint64_t t67 = 4203058881055596834LLU;

	t67 = ((x329+x330)+(x331|x332));

	if (t67 != 18446744073706306541LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x333 = INT8_MIN;
	int64_t x334 = -30LL;
	uint8_t x336 = 0U;

	t68 = ((x333+x334)+(x335|x336));

	if (t68 != 18446744073709551457LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x337 = 1LLU;
	uint32_t x339 = 209U;
	int32_t x340 = INT32_MAX;
	uint64_t t69 = 147930488184580LLU;

	t69 = ((x337+x338)+(x339|x340));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x341 = 901U;
	uint8_t x342 = UINT8_MAX;
	int16_t x343 = INT16_MAX;
	int64_t x344 = INT64_MIN;
	volatile int64_t t70 = -186396509LL;

	t70 = ((x341+x342)+(x343|x344));

	if (t70 != -9223372036854741885LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x345 = -32652863;
	uint16_t x347 = 27984U;
	static uint64_t x348 = 3448994LLU;
	volatile uint64_t t71 = 5382579008502LLU;

	t71 = ((x345+x346)+(x347|x348));

	if (t71 != 18446744073680433074LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x349 = INT64_MIN;
	uint64_t x350 = 28113425LLU;
	static volatile uint64_t x351 = UINT64_MAX;
	volatile uint64_t t72 = 1909238LLU;

	t72 = ((x349+x350)+(x351|x352));

	if (t72 != 9223372036882889232LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x353 = UINT32_MAX;
	int64_t x354 = INT64_MIN;
	uint32_t x355 = 1807766377U;
	int64_t x356 = INT64_MAX;

	t73 = ((x353+x354)+(x355|x356));

	if (t73 != 4294967294LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x357 = 42377873LLU;
	int32_t x358 = -6;
	static uint64_t x359 = 1051063013975832052LLU;
	static int32_t x360 = INT32_MIN;
	volatile uint64_t t74 = 764032980LLU;

	t74 = ((x357+x358)+(x359|x360));

	if (t74 != 18446744071882627199LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x362 = 200346670U;
	int8_t x363 = 0;
	static volatile int8_t x364 = -1;
	volatile uint32_t t75 = 242U;

	t75 = ((x361+x362)+(x363|x364));

	if (t75 != 200346674U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 1964489U;
	volatile uint32_t t76 = 12628U;

	t76 = ((x365+x366)+(x367|x368));

	if (t76 != 2147957577U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x370 = 1;
	int8_t x371 = INT8_MIN;
	volatile uint32_t x372 = 2034357U;

	t77 = ((x369+x370)+(x371|x372));

	if (t77 != 4294934454U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x373 = -1LL;
	int32_t x375 = INT32_MAX;
	uint64_t x376 = UINT64_MAX;

	t78 = ((x373+x374)+(x375|x376));

	if (t78 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x379 = INT32_MIN;
	int64_t x380 = -14LL;
	uint64_t t79 = 92015LLU;

	t79 = ((x377+x378)+(x379|x380));

	if (t79 != 16246LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x381 = INT16_MAX;
	volatile uint32_t x382 = UINT32_MAX;
	int8_t x383 = 1;
	uint32_t t80 = 236350904U;

	t80 = ((x381+x382)+(x383|x384));

	if (t80 != 60803U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x386 = -3868350554840636651LL;
	int64_t x387 = INT64_MIN;

	t81 = ((x385+x386)+(x387|x388));

	if (t81 != -3868350554943025060LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x389 = 2U;
	static uint64_t x390 = 40581665597861LLU;
	volatile uint32_t x392 = 6409606U;
	uint64_t t82 = 3387572934031834311LLU;

	t82 = ((x389+x390)+(x391|x392));

	if (t82 != 40585960565157LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x393 = 1;
	uint8_t x395 = 13U;
	volatile uint32_t t83 = 22207034U;

	t83 = ((x393+x394)+(x395|x396));

	if (t83 != 10115U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = -1;
	volatile uint64_t x398 = 41570890276693855LLU;
	volatile int64_t x399 = INT64_MIN;
	static volatile uint64_t t84 = 153423955124LLU;

	t84 = ((x397+x398)+(x399|x400));

	if (t84 != 41570890276693853LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x401 = -1;
	uint64_t x402 = UINT64_MAX;
	uint32_t x403 = 159619U;
	static volatile uint64_t x404 = 17257182364803175LLU;
	volatile uint64_t t85 = 16LLU;

	t85 = ((x401+x402)+(x403|x404));

	if (t85 != 17257182364954597LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x405 = -1;
	static int16_t x407 = INT16_MIN;
	int8_t x408 = -1;
	int32_t t86 = -1213;

	t86 = ((x405+x406)+(x407|x408));

	if (t86 != -130) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x409 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	int32_t t87 = 1;

	t87 = ((x409+x410)+(x411|x412));

	if (t87 != -130) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	int16_t x419 = -1;
	int32_t t88 = -213672;

	t88 = ((x417+x418)+(x419|x420));

	if (t88 != 253) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x421 = 658633U;
	volatile uint32_t x422 = 484U;
	static int16_t x423 = 2128;
	int32_t x424 = 133092538;
	static volatile uint32_t t89 = 1655209U;

	t89 = ((x421+x422)+(x423|x424));

	if (t89 != 133753767U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = -12651699446305LL;
	int32_t x426 = INT32_MAX;
	int64_t x427 = -1LL;
	int64_t t90 = 713502697915645LL;

	t90 = ((x425+x426)+(x427|x428));

	if (t90 != -12649551962659LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x429 = 24;
	int32_t x430 = 2;
	static volatile int32_t x431 = INT32_MAX;
	int16_t x432 = -1;
	volatile int32_t t91 = -4395;

	t91 = ((x429+x430)+(x431|x432));

	if (t91 != 25) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x433 = 6414U;
	volatile int64_t x434 = INT64_MIN;
	int64_t x435 = INT64_MAX;
	static volatile int8_t x436 = INT8_MAX;
	static volatile int64_t t92 = -62283958367849279LL;

	t92 = ((x433+x434)+(x435|x436));

	if (t92 != 6413LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x439 = UINT64_MAX;
	int8_t x440 = -1;
	static volatile uint64_t t93 = 131LLU;

	t93 = ((x437+x438)+(x439|x440));

	if (t93 != 18446744071562072120LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x441 = INT16_MIN;
	int8_t x443 = -1;
	volatile int32_t x444 = INT32_MAX;
	volatile int32_t t94 = 128;

	t94 = ((x441+x442)+(x443|x444));

	if (t94 != -32514) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x445 = 485106853LLU;
	int16_t x446 = 126;
	int8_t x447 = -1;
	volatile uint64_t t95 = 32492854LLU;

	t95 = ((x445+x446)+(x447|x448));

	if (t95 != 485106978LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x449 = 20U;
	uint8_t x450 = UINT8_MAX;
	volatile uint64_t x451 = 7486871144LLU;
	static int32_t x452 = INT32_MAX;
	uint64_t t96 = 201243LLU;

	t96 = ((x449+x450)+(x451|x452));

	if (t96 != 8589934866LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x453 = 36;
	uint64_t x454 = 1623786219882472425LLU;
	volatile int8_t x455 = INT8_MIN;
	int8_t x456 = 1;
	volatile uint64_t t97 = 6157700LLU;

	t97 = ((x453+x454)+(x455|x456));

	if (t97 != 1623786219882472334LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = INT8_MAX;
	int32_t x458 = -1;
	int32_t x459 = INT32_MAX;
	int8_t x460 = INT8_MIN;
	int32_t t98 = 23051;

	t98 = ((x457+x458)+(x459|x460));

	if (t98 != 125) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x461 = 13804329LLU;
	int32_t x462 = INT32_MAX;
	int32_t x464 = -979367;
	volatile uint64_t t99 = 815519677395LLU;

	t99 = ((x461+x462)+(x463|x464));

	if (t99 != 2161287975LLU) { NG(); } else { ; }
	
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

