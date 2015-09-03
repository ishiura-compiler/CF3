#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x13 = INT32_MIN;
uint64_t t3 = 5595255036727122LLU;
int8_t x29 = -34;
uint64_t x37 = 207446LLU;
uint64_t t6 = 98621980455306119LLU;
static int8_t x49 = INT8_MIN;
int8_t x51 = INT8_MIN;
uint8_t x52 = 3U;
volatile int64_t t10 = 41480427061LL;
static uint16_t x65 = 23U;
uint8_t x66 = UINT8_MAX;
uint8_t x70 = 1U;
volatile int8_t x82 = -1;
uint64_t x84 = 0LLU;
volatile int8_t x87 = -1;
volatile uint8_t x89 = 17U;
int8_t x90 = INT8_MIN;
volatile uint32_t x93 = 122U;
int16_t x109 = 12946;
volatile uint8_t x110 = 45U;
volatile int32_t x115 = 61755;
static uint64_t t23 = UINT64_MAX;
int8_t x118 = 1;
int64_t x137 = INT64_MIN;
volatile int8_t x138 = -1;
int16_t x140 = INT16_MIN;
uint16_t x145 = UINT16_MAX;
int8_t x149 = INT8_MIN;
uint64_t x154 = 39860093703886LLU;
static uint32_t x173 = 2U;
uint32_t x184 = 6192220U;
static volatile uint16_t x189 = UINT16_MAX;
uint64_t x192 = 112382LLU;
int16_t x199 = -1;
volatile int32_t t37 = -675458;
int16_t x206 = -6018;
int16_t x216 = INT16_MIN;
uint32_t x243 = 59682U;
static int8_t x250 = INT8_MIN;
int64_t x251 = -1LL;
static uint32_t x254 = 32172483U;
int32_t x255 = INT32_MIN;
int8_t x258 = INT8_MIN;
int32_t x259 = -3;
static int64_t x260 = -1LL;
uint64_t t49 = 444018499614594LLU;
static int8_t x279 = -1;
static int64_t x290 = INT64_MAX;
int16_t x293 = -1;
uint64_t x299 = 7123002933939072764LLU;
int16_t x305 = 41;
static int32_t x307 = -1;
uint64_t x320 = 3782104LLU;
volatile int32_t x325 = INT32_MIN;
volatile int8_t x327 = -1;
volatile int64_t t58 = -3512242925369LL;
static int16_t x332 = INT16_MAX;
uint64_t x335 = 321752856084LLU;
int8_t x336 = INT8_MAX;
int64_t x338 = 204586664019LL;
uint64_t t61 = 352302869319555LLU;
int8_t x347 = 2;
volatile int8_t x356 = -45;
static uint8_t x357 = 0U;
int32_t x377 = -1;
static volatile uint8_t x399 = UINT8_MAX;
int32_t t70 = 57;
volatile uint64_t t74 = 7074LLU;
static int8_t x430 = -1;
volatile int32_t t76 = 0;
int32_t x441 = INT32_MIN;
int16_t x451 = INT16_MAX;
int32_t x452 = INT32_MIN;
static int64_t t79 = 2143864127377703041LL;
volatile int16_t x458 = -1;
volatile int64_t t80 = 1429396558075270LL;
static uint64_t x471 = 4845716797775LLU;
int64_t x488 = -16084577085578373LL;
int16_t x489 = INT16_MIN;
int8_t x501 = 0;
uint16_t x502 = UINT16_MAX;
int16_t x503 = INT16_MIN;
volatile uint64_t t90 = 8919707979606720453LLU;
int64_t x509 = -663LL;
uint32_t x510 = UINT32_MAX;
uint64_t t92 = 45086434815202LLU;
volatile uint16_t x536 = UINT16_MAX;
int8_t x543 = -1;
static uint16_t x544 = UINT16_MAX;
int64_t t95 = 282282LL;
int32_t x545 = INT32_MIN;
volatile uint64_t x549 = UINT64_MAX;
uint8_t x550 = UINT8_MAX;
int64_t x560 = -242LL;
uint32_t x563 = 9651U;
volatile uint64_t t99 = UINT64_MAX;


void f0(void) {
	int64_t x1 = -643LL;
	int8_t x2 = 3;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t x4 = INT32_MIN;
	static volatile int64_t t0 = 115049562931934LL;

	t0 = (x1+((x2*x3)&x4));

	if (t0 != -643LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x14 = INT16_MAX;
	static int16_t x15 = 6832;
	int64_t x16 = INT64_MIN;
	volatile int64_t t1 = -24718793337LL;

	t1 = (x13+((x14*x15)&x16));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x21 = UINT64_MAX;
	uint64_t x22 = UINT64_MAX;
	static int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	uint64_t t2 = 3711687LLU;

	t2 = (x21+((x22*x23)&x24));

	if (t2 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x25 = INT16_MIN;
	uint16_t x26 = UINT16_MAX;
	uint32_t x27 = 88U;
	uint64_t x28 = 48520066497344074LLU;

	t3 = (x25+((x26*x27)&x28));

	if (t3 != 324104LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x30 = INT32_MIN;
	uint32_t x31 = 116U;
	int32_t x32 = 1;
	static uint32_t t4 = 361814957U;

	t4 = (x29+((x30*x31)&x32));

	if (t4 != 4294967262U) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x33 = INT8_MIN;
	int8_t x34 = 6;
	int8_t x35 = -1;
	static volatile int64_t x36 = 5273367208LL;
	int64_t t5 = 26579LL;

	t5 = (x33+((x34*x35)&x36));

	if (t5 != 5273367080LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x38 = -1;
	uint8_t x39 = 30U;
	int16_t x40 = INT16_MIN;

	t6 = (x37+((x38*x39)&x40));

	if (t6 != 174678LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = -1;
	uint64_t x42 = 412076623087641259LLU;
	int16_t x43 = -466;
	int64_t x44 = INT64_MAX;
	static volatile uint64_t t7 = 30096811LLU;

	t7 = (x41+((x42*x43)&x44));

	if (t7 != 1663106415109465273LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x50 = -1;
	static volatile int32_t t8 = -1;

	t8 = (x49+((x50*x51)&x52));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = 38;
	uint32_t x54 = 302U;
	int16_t x55 = -1;
	uint32_t x56 = 855U;
	volatile uint32_t t9 = 142330646U;

	t9 = (x53+((x54*x55)&x56));

	if (t9 != 632U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MAX;
	static int32_t x59 = 9770;
	int64_t x60 = -1LL;

	t10 = (x57+((x58*x59)&x60));

	if (t10 != -1827350058LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -9;
	int8_t x62 = INT8_MIN;
	uint64_t x63 = 254540493548513LLU;
	int64_t x64 = INT64_MAX;
	uint64_t t11 = 18216027448358391LLU;

	t11 = (x61+((x62*x63)&x64));

	if (t11 != 9190790853680566135LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x67 = 7472U;
	volatile int8_t x68 = 1;
	volatile int32_t t12 = -357;

	t12 = (x65+((x66*x67)&x68));

	if (t12 != 23) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x69 = INT8_MAX;
	static int32_t x71 = -875854937;
	int32_t x72 = INT32_MIN;
	static int32_t t13 = -511;

	t13 = (x69+((x70*x71)&x72));

	if (t13 != -2147483521) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1;
	int32_t x74 = -37;
	uint16_t x75 = 0U;
	volatile int64_t x76 = -1LL;
	volatile int64_t t14 = -405197254883LL;

	t14 = (x73+((x74*x75)&x76));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x77 = INT32_MIN;
	volatile uint16_t x78 = UINT16_MAX;
	static volatile int8_t x79 = -1;
	int64_t x80 = INT64_MAX;
	static volatile int64_t t15 = 464943586LL;

	t15 = (x77+((x78*x79)&x80));

	if (t15 != 9223372034707226625LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MAX;
	uint32_t x83 = 63U;
	static uint64_t t16 = 308666647838LLU;

	t16 = (x81+((x82*x83)&x84));

	if (t16 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = INT8_MIN;
	int64_t x86 = -1LL;
	static int64_t x88 = INT64_MAX;
	int64_t t17 = -162023759140425283LL;

	t17 = (x85+((x86*x87)&x88));

	if (t17 != -127LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x91 = -266;
	uint16_t x92 = 6U;
	int32_t t18 = 1;

	t18 = (x89+((x90*x91)&x92));

	if (t18 != 17) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x94 = INT8_MAX;
	int8_t x95 = INT8_MIN;
	int16_t x96 = -1;
	uint32_t t19 = 2076978U;

	t19 = (x93+((x94*x95)&x96));

	if (t19 != 4294951162U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x97 = 372999830;
	volatile int64_t x98 = 31LL;
	volatile int32_t x99 = INT32_MAX;
	volatile int16_t x100 = INT16_MIN;
	int64_t t20 = 1759LL;

	t20 = (x97+((x98*x99)&x100));

	if (t20 != 66944960150LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = -3238946146719749LL;
	static int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int64_t t21 = 7514849LL;

	t21 = (x105+((x106*x107)&x108));

	if (t21 != -3238946146719621LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x111 = INT16_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t22 = 189368;

	t22 = (x109+((x110*x111)&x112));

	if (t22 != 12946) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = -1;
	volatile uint64_t x114 = 313LLU;
	uint8_t x116 = 0U;

	t23 = (x113+((x114*x115)&x116));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -1833554LL;
	int16_t x119 = INT16_MIN;
	uint32_t x120 = 3U;
	volatile int64_t t24 = 678654LL;

	t24 = (x117+((x118*x119)&x120));

	if (t24 != -1833554LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x125 = UINT8_MAX;
	static int64_t x126 = -1LL;
	int8_t x127 = INT8_MIN;
	static uint8_t x128 = UINT8_MAX;
	int64_t t25 = -15611257810758LL;

	t25 = (x125+((x126*x127)&x128));

	if (t25 != 383LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = 6;
	static uint16_t x134 = UINT16_MAX;
	int32_t x135 = -1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t26 = 6;

	t26 = (x133+((x134*x135)&x136));

	if (t26 != -65530) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x139 = -1;
	int64_t t27 = INT64_MIN;

	t27 = (x137+((x138*x139)&x140));

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x146 = 1U;
	static int32_t x147 = INT32_MIN;
	static int32_t x148 = INT32_MIN;
	uint32_t t28 = 1574U;

	t28 = (x145+((x146*x147)&x148));

	if (t28 != 2147549183U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x150 = 31;
	int8_t x151 = INT8_MIN;
	static int32_t x152 = 0;
	int32_t t29 = -318924;

	t29 = (x149+((x150*x151)&x152));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x153 = 1395129060091LLU;
	int16_t x155 = 14;
	int8_t x156 = INT8_MIN;
	uint64_t t30 = 795867465LLU;

	t30 = (x153+((x154*x155)&x156));

	if (t30 != 559436440914427LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x157 = UINT32_MAX;
	static int8_t x158 = -1;
	int64_t x159 = 1387927267227342LL;
	volatile int8_t x160 = -1;
	volatile int64_t t31 = -45096440522799328LL;

	t31 = (x157+((x158*x159)&x160));

	if (t31 != -1387922972260047LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x169 = 14528LL;
	int32_t x170 = -1;
	int64_t x171 = -1LL;
	int32_t x172 = INT32_MIN;
	static int64_t t32 = -277959261LL;

	t32 = (x169+((x170*x171)&x172));

	if (t32 != 14528LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x174 = 0;
	static uint32_t x175 = 48914U;
	uint16_t x176 = 413U;
	static volatile uint32_t t33 = 33954262U;

	t33 = (x173+((x174*x175)&x176));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = INT64_MAX;
	volatile int64_t x182 = 805LL;
	uint64_t x183 = 284757LLU;
	uint64_t t34 = 200565643121LLU;

	t34 = (x181+((x182*x183)&x184));

	if (t34 != 9223372036855316551LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x190 = UINT8_MAX;
	static int16_t x191 = INT16_MAX;
	static volatile uint64_t t35 = 2021LLU;

	t35 = (x189+((x190*x191)&x192));

	if (t35 != 144895LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x197 = INT64_MAX;
	uint64_t x198 = UINT64_MAX;
	uint32_t x200 = UINT32_MAX;
	uint64_t t36 = 3455111LLU;

	t36 = (x197+((x198*x199)&x200));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x201 = 1U;
	int32_t x202 = -5885;
	int8_t x203 = -1;
	uint8_t x204 = 0U;

	t37 = (x201+((x202*x203)&x204));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x205 = UINT8_MAX;
	volatile uint32_t x207 = 7565U;
	int8_t x208 = INT8_MAX;
	uint32_t t38 = 2855868U;

	t38 = (x205+((x206*x207)&x208));

	if (t38 != 357U) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x209 = 6192743U;
	int64_t x210 = -1LL;
	volatile int8_t x211 = INT8_MIN;
	static uint64_t x212 = UINT64_MAX;
	volatile uint64_t t39 = 3373669LLU;

	t39 = (x209+((x210*x211)&x212));

	if (t39 != 6192871LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -58;
	int8_t x214 = INT8_MIN;
	int16_t x215 = INT16_MIN;
	volatile int32_t t40 = -1042392094;

	t40 = (x213+((x214*x215)&x216));

	if (t40 != 4194246) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = INT16_MIN;
	static int16_t x219 = -1;
	volatile uint16_t x220 = UINT16_MAX;
	volatile int32_t t41 = -6464;

	t41 = (x217+((x218*x219)&x220));

	if (t41 != 33023) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x225 = INT16_MAX;
	int32_t x226 = 0;
	uint64_t x227 = 335013021LLU;
	uint16_t x228 = UINT16_MAX;
	static uint64_t t42 = 4975001792LLU;

	t42 = (x225+((x226*x227)&x228));

	if (t42 != 32767LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x229 = UINT8_MAX;
	uint64_t x230 = 5391044818LLU;
	volatile uint16_t x231 = UINT16_MAX;
	int32_t x232 = 42299401;
	static volatile uint64_t t43 = 22LLU;

	t43 = (x229+((x230*x231)&x232));

	if (t43 != 33890567LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x241 = 3825647U;
	int32_t x242 = 2716651;
	volatile uint64_t x244 = UINT64_MAX;
	volatile uint64_t t44 = 9666877802994928LLU;

	t44 = (x241+((x242*x243)&x244));

	if (t44 != 3225200677LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x245 = -25;
	uint16_t x246 = 7193U;
	static int16_t x247 = -1;
	int16_t x248 = -1;
	volatile int32_t t45 = 82584042;

	t45 = (x245+((x246*x247)&x248));

	if (t45 != -7218) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x249 = 342LL;
	uint32_t x252 = 16739348U;
	volatile int64_t t46 = 287884403LL;

	t46 = (x249+((x250*x251)&x252));

	if (t46 != 342LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x253 = 1;
	int8_t x256 = INT8_MIN;
	volatile uint32_t t47 = 12358U;

	t47 = (x253+((x254*x255)&x256));

	if (t47 != 2147483649U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x257 = 77076412U;
	int64_t t48 = -1LL;

	t48 = (x257+((x258*x259)&x260));

	if (t48 != 77076796LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x269 = -1;
	uint16_t x270 = 3507U;
	uint64_t x271 = 1059329272106LLU;
	int32_t x272 = INT32_MIN;

	t49 = (x269+((x270*x271)&x272));

	if (t49 != 3715067254145023LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x273 = INT16_MAX;
	static int8_t x274 = -1;
	int8_t x275 = 18;
	int32_t x276 = -991930589;
	int32_t t50 = 626;

	t50 = (x273+((x274*x275)&x276));

	if (t50 != -991897823) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x277 = INT8_MIN;
	static int8_t x278 = -1;
	int16_t x280 = INT16_MIN;
	int32_t t51 = -19812823;

	t51 = (x277+((x278*x279)&x280));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x289 = -1;
	uint64_t x291 = 166205674093LLU;
	static volatile int16_t x292 = -1;
	volatile uint64_t t52 = 2613930660LLU;

	t52 = (x289+((x290*x291)&x292));

	if (t52 != 9223371870649101714LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x294 = INT32_MAX;
	uint32_t x295 = 1931226U;
	static volatile int8_t x296 = INT8_MIN;
	uint32_t t53 = 157058379U;

	t53 = (x293+((x294*x295)&x296));

	if (t53 != 4293036031U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x297 = INT8_MIN;
	int8_t x298 = INT8_MIN;
	int16_t x300 = -34;
	volatile uint64_t t54 = 1711977035572LLU;

	t54 = (x297+((x298*x299)&x300));

	if (t54 != 10592828141276266880LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x301 = INT32_MIN;
	int16_t x302 = -22;
	uint32_t x303 = 16454658U;
	static int8_t x304 = -1;
	volatile uint32_t t55 = 726U;

	t55 = (x301+((x302*x303)&x304));

	if (t55 != 1785481172U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x306 = 8U;
	int16_t x308 = INT16_MIN;
	int32_t t56 = -496540;

	t56 = (x305+((x306*x307)&x308));

	if (t56 != -32727) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x317 = INT32_MAX;
	int16_t x318 = -1;
	volatile uint16_t x319 = 11U;
	static volatile uint64_t t57 = 702850178256182006LLU;

	t57 = (x317+((x318*x319)&x320));

	if (t57 != 2151265743LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x326 = UINT32_MAX;
	volatile int64_t x328 = INT64_MIN;

	t58 = (x325+((x326*x327)&x328));

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x329 = INT16_MIN;
	static int64_t x330 = 1651LL;
	volatile uint16_t x331 = 4039U;
	volatile int64_t t59 = 4517435709063121559LL;

	t59 = (x329+((x330*x331)&x332));

	if (t59 != -16283LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x333 = INT64_MAX;
	static volatile uint32_t x334 = 2032790304U;
	uint64_t t60 = 776197682042336287LLU;

	t60 = (x333+((x334*x335)&x336));

	if (t60 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x337 = UINT64_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -25;

	t61 = (x337+((x338*x339)&x340));

	if (t61 != 18446717886616557183LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x345 = INT64_MIN;
	static volatile int8_t x346 = 9;
	int16_t x348 = INT16_MIN;
	int64_t t62 = INT64_MIN;

	t62 = (x345+((x346*x347)&x348));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x353 = 1;
	static uint8_t x354 = 16U;
	static int64_t x355 = 1303LL;
	static volatile int64_t t63 = -50221455LL;

	t63 = (x353+((x354*x355)&x356));

	if (t63 != 20817LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x358 = -1;
	uint8_t x359 = 1U;
	uint16_t x360 = 342U;
	static volatile int32_t t64 = -27814022;

	t64 = (x357+((x358*x359)&x360));

	if (t64 != 342) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x365 = -7;
	int8_t x366 = INT8_MIN;
	int32_t x367 = 1492;
	int32_t x368 = INT32_MAX;
	int32_t t65 = -6693419;

	t65 = (x365+((x366*x367)&x368));

	if (t65 != 2147292665) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x369 = INT32_MIN;
	uint64_t x370 = UINT64_MAX;
	static volatile int64_t x371 = INT64_MAX;
	uint64_t x372 = UINT64_MAX;
	uint64_t t66 = 978LLU;

	t66 = (x369+((x370*x371)&x372));

	if (t66 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x373 = 55LLU;
	static uint8_t x374 = 37U;
	uint16_t x375 = UINT16_MAX;
	static int32_t x376 = -1;
	static volatile uint64_t t67 = 968835941894066301LLU;

	t67 = (x373+((x374*x375)&x376));

	if (t67 != 2424850LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x378 = 13024;
	int64_t x379 = 31175LL;
	uint64_t x380 = 1276684LLU;
	volatile uint64_t t68 = 152621679540LLU;

	t68 = (x377+((x378*x379)&x380));

	if (t68 != 1271807LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x389 = -1;
	volatile uint64_t x390 = 5336LLU;
	int16_t x391 = INT16_MIN;
	int64_t x392 = -463207288594043LL;
	uint64_t t69 = 740941LLU;

	t69 = (x389+((x390*x391)&x392));

	if (t69 != 18446280866386673663LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x397 = -20;
	int32_t x398 = 249;
	int16_t x400 = -1;

	t70 = (x397+((x398*x399)&x400));

	if (t70 != 63475) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x401 = -1;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = -1;
	uint16_t x404 = 819U;
	volatile int32_t t71 = 52;

	t71 = (x401+((x402*x403)&x404));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x405 = UINT16_MAX;
	int16_t x406 = -1;
	int8_t x407 = INT8_MIN;
	volatile uint64_t x408 = UINT64_MAX;
	volatile uint64_t t72 = 0LLU;

	t72 = (x405+((x406*x407)&x408));

	if (t72 != 65663LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x413 = -1;
	int64_t x414 = -1LL;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t73 = 2855758351730509LLU;

	t73 = (x413+((x414*x415)&x416));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x417 = UINT64_MAX;
	uint16_t x418 = 319U;
	volatile int16_t x419 = INT16_MIN;
	int32_t x420 = -70786;

	t74 = (x417+((x418*x419)&x420));

	if (t74 != 18446744073699098623LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x429 = -326LL;
	uint32_t x431 = 302224051U;
	int16_t x432 = INT16_MIN;
	int64_t t75 = 184646390304LL;

	t75 = (x429+((x430*x431)&x432));

	if (t75 != 3992714938LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x433 = 2;
	uint8_t x434 = 25U;
	int8_t x435 = -7;
	int8_t x436 = INT8_MAX;

	t76 = (x433+((x434*x435)&x436));

	if (t76 != 83) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x437 = -13;
	uint16_t x438 = 15U;
	uint32_t x439 = 2081469960U;
	int16_t x440 = INT16_MIN;
	volatile uint32_t t77 = 53U;

	t77 = (x437+((x438*x439)&x440));

	if (t77 != 1157267443U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x442 = INT16_MIN;
	static volatile int16_t x443 = -1;
	volatile int8_t x444 = -1;
	static volatile int32_t t78 = 176;

	t78 = (x441+((x442*x443)&x444));

	if (t78 != -2147450880) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int32_t x449 = INT32_MAX;
	int64_t x450 = -186413224354LL;

	t79 = (x449+((x450*x451)&x452));

	if (t79 != -6108201556639745LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x457 = -35384159088532LL;
	uint16_t x459 = 4U;
	int32_t x460 = -1;

	t80 = (x457+((x458*x459)&x460));

	if (t80 != -35384159088536LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x461 = 6;
	volatile uint32_t x462 = UINT32_MAX;
	int8_t x463 = 13;
	uint64_t x464 = UINT64_MAX;
	uint64_t t81 = 546832739637253LLU;

	t81 = (x461+((x462*x463)&x464));

	if (t81 != 4294967289LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x465 = 11358670698LL;
	volatile uint32_t x466 = 5394090U;
	int16_t x467 = INT16_MIN;
	int16_t x468 = INT16_MIN;
	int64_t t82 = -745LL;

	t82 = (x465+((x466*x467)&x468));

	if (t82 != 14993756010LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x469 = -1;
	uint32_t x470 = 59U;
	static int8_t x472 = -2;
	volatile uint64_t t83 = 18LLU;

	t83 = (x469+((x470*x471)&x472));

	if (t83 != 285897291068723LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x473 = 107437753723878LLU;
	uint32_t x474 = 544690058U;
	uint64_t x475 = 195LLU;
	int16_t x476 = 147;
	uint64_t t84 = 66579534LLU;

	t84 = (x473+((x474*x475)&x476));

	if (t84 != 107437753723896LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x477 = 77U;
	uint64_t x478 = 16017180815059451LLU;
	int32_t x479 = 12011;
	static uint64_t x480 = UINT64_MAX;
	static volatile uint64_t t85 = 458395227950428925LLU;

	t85 = (x477+((x478*x479)&x480));

	if (t85 != 7914918032583549878LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x485 = 3U;
	int16_t x486 = 695;
	static uint32_t x487 = 6398914U;
	volatile int64_t t86 = -64307566362111538LL;

	t86 = (x485+((x486*x487)&x488));

	if (t86 != 1278765LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x490 = 510U;
	uint16_t x491 = 2190U;
	int32_t x492 = 967404;
	int32_t t87 = 369770;

	t87 = (x489+((x490*x491)&x492));

	if (t87 != -32028) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x497 = 123U;
	int8_t x498 = INT8_MAX;
	uint16_t x499 = 1U;
	uint32_t x500 = 917756363U;
	static uint32_t t88 = 4236U;

	t88 = (x497+((x498*x499)&x500));

	if (t88 != 198U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x504 = 3645LLU;
	uint64_t t89 = 15828LLU;

	t89 = (x501+((x502*x503)&x504));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x505 = 6827LLU;
	int8_t x506 = INT8_MIN;
	int8_t x507 = 12;
	int8_t x508 = INT8_MAX;

	t90 = (x505+((x506*x507)&x508));

	if (t90 != 6827LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x511 = INT32_MIN;
	int16_t x512 = 1608;
	int64_t t91 = 3LL;

	t91 = (x509+((x510*x511)&x512));

	if (t91 != -663LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x517 = 601528LLU;
	volatile uint16_t x518 = 761U;
	static uint32_t x519 = 1U;
	int16_t x520 = INT16_MIN;

	t92 = (x517+((x518*x519)&x520));

	if (t92 != 601528LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x521 = -224;
	static volatile int32_t x522 = -239199;
	uint32_t x523 = UINT32_MAX;
	int64_t x524 = INT64_MAX;
	static volatile int64_t t93 = -1935713799LL;

	t93 = (x521+((x522*x523)&x524));

	if (t93 != 238975LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x533 = INT64_MIN;
	volatile int16_t x534 = INT16_MIN;
	int16_t x535 = -1;
	volatile int64_t t94 = -914432LL;

	t94 = (x533+((x534*x535)&x536));

	if (t94 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x541 = INT32_MIN;
	volatile int64_t x542 = 36008455056544LL;

	t95 = (x541+((x542*x543)&x544));

	if (t95 != -2147429536LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x546 = -1LL;
	uint16_t x547 = UINT16_MAX;
	int64_t x548 = INT64_MAX;
	static int64_t t96 = 928026LL;

	t96 = (x545+((x546*x547)&x548));

	if (t96 != 9223372034707226625LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x551 = 12955U;
	static int16_t x552 = INT16_MIN;
	uint64_t t97 = 3039323255652687LLU;

	t97 = (x549+((x550*x551)&x552));

	if (t97 != 3276799LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x557 = UINT8_MAX;
	volatile uint64_t x558 = UINT64_MAX;
	static uint8_t x559 = UINT8_MAX;
	uint64_t t98 = UINT64_MAX;

	t98 = (x557+((x558*x559)&x560));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x561 = -1;
	int16_t x562 = INT16_MIN;
	uint64_t x564 = 2882LLU;

	t99 = (x561+((x562*x563)&x564));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

