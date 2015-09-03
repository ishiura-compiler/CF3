#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x1 = 78LLU;
static volatile int16_t x8 = INT16_MAX;
volatile int32_t t1 = -26562;
int32_t t2 = -758660;
int32_t x13 = INT32_MIN;
static volatile int32_t t3 = 2999;
int16_t x17 = 6851;
static int32_t x22 = INT32_MIN;
int8_t x23 = 1;
int16_t x24 = INT16_MAX;
int64_t x27 = 61340350739235360LL;
static volatile int32_t t6 = -605325060;
uint32_t x30 = 21124U;
int32_t x33 = INT32_MIN;
int32_t x35 = INT32_MIN;
uint8_t x38 = UINT8_MAX;
uint8_t x63 = UINT8_MAX;
int16_t x74 = -1;
static int64_t x80 = -31664819LL;
int32_t t15 = -55;
int64_t x92 = -1LL;
int8_t x94 = INT8_MIN;
volatile int32_t t21 = -1;
volatile uint16_t x113 = 2429U;
uint8_t x114 = UINT8_MAX;
static int64_t x121 = INT64_MIN;
uint8_t x122 = 5U;
volatile int32_t x124 = INT32_MIN;
volatile uint32_t x128 = 27721889U;
volatile int32_t t25 = -278;
int32_t x136 = INT32_MAX;
volatile int64_t x139 = INT64_MIN;
volatile int32_t x148 = -198184;
volatile int32_t t30 = -26108;
static volatile int32_t t31 = -292144;
uint32_t x154 = UINT32_MAX;
uint8_t x155 = 9U;
int16_t x156 = INT16_MIN;
int8_t x159 = 1;
volatile int32_t t33 = 18755;
int64_t x163 = INT64_MIN;
int16_t x166 = -1;
int64_t x168 = INT64_MIN;
uint16_t x178 = 671U;
int16_t x181 = INT16_MIN;
int64_t x190 = -1LL;
volatile int16_t x192 = INT16_MAX;
uint64_t x202 = 3815383079135984810LLU;
volatile uint8_t x212 = UINT8_MAX;
int32_t t42 = -6023616;
int8_t x213 = -31;
int8_t x216 = -1;
uint8_t x217 = UINT8_MAX;
volatile int32_t t44 = 504488;
int8_t x226 = INT8_MIN;
volatile int32_t t45 = 840748;
int16_t x234 = -249;
int64_t x235 = INT64_MIN;
volatile int8_t x238 = INT8_MIN;
int32_t x239 = INT32_MIN;
static int64_t x240 = -51LL;
int32_t x242 = -1;
uint32_t x247 = 3U;
uint8_t x249 = 1U;
volatile int32_t t50 = -3363;
static int16_t x254 = INT16_MIN;
uint64_t x255 = UINT64_MAX;
volatile uint32_t x256 = 819507U;
static volatile int32_t t53 = 2017;
static int16_t x267 = -1;
static uint16_t x269 = UINT16_MAX;
static int16_t x270 = INT16_MAX;
int32_t x271 = INT32_MIN;
int16_t x275 = INT16_MIN;
static int32_t t56 = 854883771;
volatile int32_t x277 = INT32_MIN;
uint64_t x279 = 3844403830102792059LLU;
int16_t x280 = -1;
int32_t t59 = -178;
static uint64_t x292 = 8LLU;
uint16_t x296 = 14322U;
volatile int16_t x303 = INT16_MAX;
static volatile int16_t x311 = -1;
volatile int32_t t65 = -227473072;
uint32_t x315 = 1148U;
int64_t x323 = 56585860LL;
int8_t x325 = INT8_MIN;
int32_t t70 = -329053089;
int64_t x345 = 5341LL;
uint16_t x346 = 3U;
static volatile int32_t t77 = 5183289;
static uint32_t x362 = UINT32_MAX;
volatile int32_t t78 = -16309882;
int16_t x366 = INT16_MAX;
int16_t x371 = 648;
int16_t x372 = INT16_MIN;
int8_t x373 = INT8_MIN;
int32_t t81 = 89281;
volatile int8_t x379 = -7;
int16_t x385 = -27;
static uint8_t x388 = 0U;
volatile int32_t t86 = -1851;
int8_t x409 = -30;
static int32_t t88 = 51;
volatile int16_t x425 = INT16_MIN;
int8_t x427 = -18;
int32_t x432 = -1;
static volatile uint16_t x434 = 1925U;
static int16_t x442 = INT16_MAX;
volatile int8_t x454 = INT8_MAX;
int8_t x458 = INT8_MAX;
int64_t x459 = INT64_MIN;
int32_t t98 = 131;


void f0(void) {
	uint64_t x2 = 28653154237LLU;
	int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 2656460;

	t0 = ((x1+x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MIN;
	uint64_t x7 = 1062266003544137463LLU;

	t1 = ((x5+x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = 910180357U;
	uint16_t x10 = 10U;
	uint16_t x11 = 1U;
	uint64_t x12 = 11760977LLU;

	t2 = ((x9+x10)<=(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x14 = 0U;
	static int32_t x15 = -1171;
	int32_t x16 = -1;

	t3 = ((x13+x14)<=(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	int8_t x19 = INT8_MAX;
	static uint64_t x20 = 137284355275874LLU;
	volatile int32_t t4 = 14099384;

	t4 = ((x17+x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	int32_t t5 = -735434;

	t5 = ((x21+x22)<=(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	int8_t x26 = 5;
	int32_t x28 = -1626;

	t6 = ((x25+x26)<=(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 14173085368021LLU;
	volatile int8_t x31 = INT8_MIN;
	int64_t x32 = INT64_MIN;
	int32_t t7 = -1;

	t7 = ((x29+x30)<=(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x34 = 765LLU;
	int8_t x36 = -10;
	volatile int32_t t8 = -16689290;

	t8 = ((x33+x34)<=(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	volatile int16_t x39 = INT16_MIN;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = -1;

	t9 = ((x37+x38)<=(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = 6287LLU;
	uint16_t x46 = 1918U;
	uint64_t x47 = UINT64_MAX;
	static uint32_t x48 = 104363845U;
	int32_t t10 = -1634;

	t10 = ((x45+x46)<=(x47<x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x49 = 4016U;
	static int32_t x50 = INT32_MAX;
	uint8_t x51 = UINT8_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t11 = -632;

	t11 = ((x49+x50)<=(x51<x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = INT32_MIN;
	int16_t x62 = 14500;
	int16_t x64 = INT16_MAX;
	static volatile int32_t t12 = 168400;

	t12 = ((x61+x62)<=(x63<x64));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x65 = 131986570527LLU;
	int16_t x66 = -9090;
	volatile int32_t x67 = 726;
	int32_t x68 = INT32_MAX;
	int32_t t13 = -1782;

	t13 = ((x65+x66)<=(x67<x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = -1LL;
	int64_t x75 = INT64_MIN;
	int32_t x76 = -1;
	volatile int32_t t14 = -707986345;

	t14 = ((x73+x74)<=(x75<x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = 13;
	uint32_t x78 = 10282U;
	int16_t x79 = 116;

	t15 = ((x77+x78)<=(x79<x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 863U;
	int64_t x83 = 403746581LL;
	uint8_t x84 = 1U;
	int32_t t16 = -14060;

	t16 = ((x81+x82)<=(x83<x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x85 = UINT8_MAX;
	volatile uint32_t x86 = 12895711U;
	int8_t x87 = 3;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t17 = 1;

	t17 = ((x85+x86)<=(x87<x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = 6813815LLU;
	int32_t x90 = INT32_MIN;
	int16_t x91 = INT16_MIN;
	static int32_t t18 = -1294;

	t18 = ((x89+x90)<=(x91<x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x93 = 1;
	uint16_t x95 = UINT16_MAX;
	volatile int32_t x96 = 2288;
	volatile int32_t t19 = -113147;

	t19 = ((x93+x94)<=(x95<x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = -179;
	int8_t x106 = INT8_MAX;
	volatile int16_t x107 = -3;
	volatile int8_t x108 = 1;
	int32_t t20 = 0;

	t20 = ((x105+x106)<=(x107<x108));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 7059010884613292LLU;
	int8_t x110 = 1;
	int32_t x111 = -1;
	static volatile uint16_t x112 = UINT16_MAX;

	t21 = ((x109+x110)<=(x111<x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x115 = INT8_MIN;
	uint16_t x116 = 15885U;
	volatile int32_t t22 = 11659;

	t22 = ((x113+x114)<=(x115<x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	volatile uint32_t x118 = UINT32_MAX;
	static uint16_t x119 = 3U;
	int8_t x120 = -26;
	int32_t t23 = 530064719;

	t23 = ((x117+x118)<=(x119<x120));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x123 = 2065LLU;
	volatile int32_t t24 = -1337;

	t24 = ((x121+x122)<=(x123<x124));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = INT32_MIN;
	int16_t x126 = 8;
	int32_t x127 = 5;

	t25 = ((x125+x126)<=(x127<x128));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x129 = INT8_MAX;
	static uint8_t x130 = UINT8_MAX;
	uint8_t x131 = 25U;
	volatile uint16_t x132 = 218U;
	volatile int32_t t26 = -7;

	t26 = ((x129+x130)<=(x131<x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x133 = 11;
	int16_t x134 = 18;
	uint16_t x135 = 31U;
	static int32_t t27 = 582;

	t27 = ((x133+x134)<=(x135<x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = 27816253;
	int16_t x138 = -1;
	int32_t x140 = -1;
	int32_t t28 = -220604;

	t28 = ((x137+x138)<=(x139<x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x141 = 1955LLU;
	uint32_t x142 = 20021190U;
	volatile int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t29 = 101;

	t29 = ((x141+x142)<=(x143<x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x145 = 13206370U;
	volatile int8_t x146 = -7;
	volatile int8_t x147 = -9;

	t30 = ((x145+x146)<=(x147<x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 12849122U;
	uint16_t x150 = UINT16_MAX;
	int64_t x151 = INT64_MIN;
	static volatile int8_t x152 = -1;

	t31 = ((x149+x150)<=(x151<x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 12U;
	int32_t t32 = 1185;

	t32 = ((x153+x154)<=(x155<x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	volatile int64_t x158 = 90049201400819060LL;
	int16_t x160 = 1937;

	t33 = ((x157+x158)<=(x159<x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x161 = UINT16_MAX;
	static int64_t x162 = -1LL;
	static int32_t x164 = 736864903;
	int32_t t34 = -207;

	t34 = ((x161+x162)<=(x163<x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = 205117946836942LL;
	static int32_t x167 = INT32_MIN;
	static int32_t t35 = -1504;

	t35 = ((x165+x166)<=(x167<x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x169 = UINT32_MAX;
	int16_t x170 = INT16_MIN;
	uint32_t x171 = 442U;
	volatile int8_t x172 = -4;
	volatile int32_t t36 = 129662206;

	t36 = ((x169+x170)<=(x171<x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MIN;
	int8_t x179 = 1;
	int8_t x180 = 0;
	volatile int32_t t37 = -28328;

	t37 = ((x177+x178)<=(x179<x180));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x182 = 122;
	volatile int8_t x183 = -1;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t38 = 113568;

	t38 = ((x181+x182)<=(x183<x184));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x189 = 555638U;
	int64_t x191 = INT64_MIN;
	volatile int32_t t39 = 11;

	t39 = ((x189+x190)<=(x191<x192));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x201 = INT32_MIN;
	int8_t x203 = 27;
	int8_t x204 = -1;
	volatile int32_t t40 = 17602837;

	t40 = ((x201+x202)<=(x203<x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x205 = 1U;
	uint16_t x206 = 58U;
	int32_t x207 = INT32_MAX;
	int16_t x208 = INT16_MAX;
	int32_t t41 = -128492573;

	t41 = ((x205+x206)<=(x207<x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x209 = -641023731787929LL;
	int32_t x210 = 7;
	static volatile int8_t x211 = 1;

	t42 = ((x209+x210)<=(x211<x212));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x214 = 53U;
	volatile uint64_t x215 = 70884498224952959LLU;
	volatile int32_t t43 = 1033;

	t43 = ((x213+x214)<=(x215<x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x218 = INT8_MIN;
	static int32_t x219 = 235157211;
	uint8_t x220 = 87U;

	t44 = ((x217+x218)<=(x219<x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MIN;

	t45 = ((x225+x226)<=(x227<x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = -1;
	int8_t x236 = -3;
	static int32_t t46 = 23760;

	t46 = ((x233+x234)<=(x235<x236));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t t47 = -10512;

	t47 = ((x237+x238)<=(x239<x240));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x241 = 37;
	volatile int64_t x243 = INT64_MIN;
	int32_t x244 = INT32_MAX;
	int32_t t48 = 16788615;

	t48 = ((x241+x242)<=(x243<x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	uint16_t x248 = 838U;
	int32_t t49 = -2289;

	t49 = ((x245+x246)<=(x247<x248));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x250 = 17U;
	uint32_t x251 = 19U;
	int64_t x252 = INT64_MAX;

	t50 = ((x249+x250)<=(x251<x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MIN;
	static volatile int32_t t51 = -245571;

	t51 = ((x253+x254)<=(x255<x256));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x257 = UINT16_MAX;
	int16_t x258 = INT16_MAX;
	static uint8_t x259 = 37U;
	volatile int8_t x260 = INT8_MIN;
	int32_t t52 = -407849489;

	t52 = ((x257+x258)<=(x259<x260));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x261 = -1LL;
	uint8_t x262 = 53U;
	static volatile int8_t x263 = -1;
	int64_t x264 = INT64_MIN;

	t53 = ((x261+x262)<=(x263<x264));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x265 = 382;
	int16_t x266 = 1;
	static uint8_t x268 = 5U;
	int32_t t54 = -8;

	t54 = ((x265+x266)<=(x267<x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x272 = INT16_MAX;
	volatile int32_t t55 = -1;

	t55 = ((x269+x270)<=(x271<x272));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x273 = 13U;
	volatile int16_t x274 = -1;
	int8_t x276 = -2;

	t56 = ((x273+x274)<=(x275<x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x278 = 7U;
	static volatile int32_t t57 = -1440;

	t57 = ((x277+x278)<=(x279<x280));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x281 = -598;
	static volatile int32_t x282 = -1;
	int16_t x283 = INT16_MIN;
	int32_t x284 = INT32_MIN;
	int32_t t58 = -2136702;

	t58 = ((x281+x282)<=(x283<x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x285 = 11743U;
	int64_t x286 = INT64_MIN;
	static uint8_t x287 = 2U;
	volatile int32_t x288 = INT32_MIN;

	t59 = ((x285+x286)<=(x287<x288));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = INT16_MIN;
	volatile uint8_t x290 = 10U;
	static uint8_t x291 = 20U;
	int32_t t60 = -438;

	t60 = ((x289+x290)<=(x291<x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint64_t x293 = 217550734LLU;
	int64_t x294 = INT64_MIN;
	int8_t x295 = INT8_MIN;
	volatile int32_t t61 = 64762;

	t61 = ((x293+x294)<=(x295<x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x297 = 458LLU;
	int16_t x298 = INT16_MIN;
	uint32_t x299 = UINT32_MAX;
	static uint64_t x300 = 482468LLU;
	volatile int32_t t62 = -55295;

	t62 = ((x297+x298)<=(x299<x300));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = -1;
	int64_t x302 = -52660375287415LL;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t63 = 1049912507;

	t63 = ((x301+x302)<=(x303<x304));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x305 = INT8_MIN;
	uint64_t x306 = 36352917961743LLU;
	int16_t x307 = -1;
	volatile int32_t x308 = INT32_MIN;
	static int32_t t64 = -1;

	t64 = ((x305+x306)<=(x307<x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x309 = 1;
	int8_t x310 = -3;
	static int16_t x312 = INT16_MAX;

	t65 = ((x309+x310)<=(x311<x312));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	volatile uint32_t x314 = 4378U;
	static uint64_t x316 = UINT64_MAX;
	volatile int32_t t66 = -46983918;

	t66 = ((x313+x314)<=(x315<x316));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x317 = 263208266614976LLU;
	int64_t x318 = INT64_MAX;
	int32_t x319 = INT32_MIN;
	volatile int64_t x320 = INT64_MAX;
	int32_t t67 = 2;

	t67 = ((x317+x318)<=(x319<x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = INT8_MAX;
	uint8_t x322 = 19U;
	int8_t x324 = 1;
	volatile int32_t t68 = 1;

	t68 = ((x321+x322)<=(x323<x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x326 = -1LL;
	volatile uint32_t x327 = 340584433U;
	uint8_t x328 = 0U;
	volatile int32_t t69 = 1;

	t69 = ((x325+x326)<=(x327<x328));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x329 = 1;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = -6826;
	int64_t x332 = INT64_MAX;

	t70 = ((x329+x330)<=(x331<x332));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x333 = 259U;
	int8_t x334 = INT8_MAX;
	static uint32_t x335 = UINT32_MAX;
	static volatile int8_t x336 = 22;
	static volatile int32_t t71 = -17000;

	t71 = ((x333+x334)<=(x335<x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x337 = -9119203421598465LL;
	int64_t x338 = INT64_MAX;
	int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	static int32_t t72 = -146152;

	t72 = ((x337+x338)<=(x339<x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x341 = 13455;
	int16_t x342 = -1;
	volatile int16_t x343 = INT16_MIN;
	uint8_t x344 = 26U;
	volatile int32_t t73 = -1992;

	t73 = ((x341+x342)<=(x343<x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x347 = 4U;
	static volatile int32_t x348 = INT32_MAX;
	static int32_t t74 = 98;

	t74 = ((x345+x346)<=(x347<x348));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x349 = 7U;
	uint32_t x350 = 735877279U;
	int32_t x351 = -1;
	uint8_t x352 = 1U;
	volatile int32_t t75 = 3;

	t75 = ((x349+x350)<=(x351<x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x353 = UINT8_MAX;
	uint32_t x354 = 140939U;
	volatile uint16_t x355 = 41U;
	uint8_t x356 = 1U;
	int32_t t76 = -11762580;

	t76 = ((x353+x354)<=(x355<x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = 0LLU;
	static int64_t x358 = -1LL;
	int32_t x359 = -1759;
	static int8_t x360 = -1;

	t77 = ((x357+x358)<=(x359<x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x361 = 0LLU;
	int16_t x363 = INT16_MIN;
	volatile int16_t x364 = INT16_MIN;

	t78 = ((x361+x362)<=(x363<x364));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x365 = 35;
	int8_t x367 = -1;
	int8_t x368 = 1;
	int32_t t79 = -5842;

	t79 = ((x365+x366)<=(x367<x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x369 = -1LL;
	uint16_t x370 = 28U;
	static int32_t t80 = -8258;

	t80 = ((x369+x370)<=(x371<x372));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x374 = 761;
	uint16_t x375 = 3487U;
	int16_t x376 = 15757;

	t81 = ((x373+x374)<=(x375<x376));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	volatile uint32_t x378 = 24324U;
	static volatile uint16_t x380 = UINT16_MAX;
	int32_t t82 = -9775383;

	t82 = ((x377+x378)<=(x379<x380));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x386 = 16U;
	volatile uint16_t x387 = UINT16_MAX;
	static volatile int32_t t83 = 2999633;

	t83 = ((x385+x386)<=(x387<x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x389 = 6866285334068818666LLU;
	int16_t x390 = INT16_MIN;
	volatile uint8_t x391 = 1U;
	static uint64_t x392 = UINT64_MAX;
	volatile int32_t t84 = 146921839;

	t84 = ((x389+x390)<=(x391<x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x393 = INT8_MIN;
	uint8_t x394 = 0U;
	int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MIN;
	static volatile int32_t t85 = -3;

	t85 = ((x393+x394)<=(x395<x396));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x397 = 872261U;
	int8_t x398 = -1;
	int16_t x399 = 9;
	uint16_t x400 = 5587U;

	t86 = ((x397+x398)<=(x399<x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x405 = -1LL;
	volatile uint16_t x406 = 0U;
	volatile int16_t x407 = -1;
	uint32_t x408 = 419927U;
	int32_t t87 = 0;

	t87 = ((x405+x406)<=(x407<x408));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x410 = INT16_MIN;
	uint32_t x411 = UINT32_MAX;
	int16_t x412 = 14;

	t88 = ((x409+x410)<=(x411<x412));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x413 = 35U;
	volatile int8_t x414 = 1;
	static volatile int64_t x415 = 55042336119LL;
	int16_t x416 = -2;
	volatile int32_t t89 = 24;

	t89 = ((x413+x414)<=(x415<x416));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x417 = 371U;
	uint8_t x418 = 1U;
	int64_t x419 = INT64_MIN;
	int64_t x420 = INT64_MIN;
	int32_t t90 = -3191922;

	t90 = ((x417+x418)<=(x419<x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x426 = 764;
	uint8_t x428 = 4U;
	int32_t t91 = 146903;

	t91 = ((x425+x426)<=(x427<x428));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x429 = -1LL;
	int32_t x430 = INT32_MIN;
	int16_t x431 = -1;
	int32_t t92 = -163747755;

	t92 = ((x429+x430)<=(x431<x432));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x433 = -1LL;
	int16_t x435 = INT16_MIN;
	int32_t x436 = 0;
	int32_t t93 = 4070;

	t93 = ((x433+x434)<=(x435<x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x437 = 57U;
	static int64_t x438 = INT64_MIN;
	volatile int8_t x439 = INT8_MAX;
	uint64_t x440 = 235336073080LLU;
	int32_t t94 = 27642186;

	t94 = ((x437+x438)<=(x439<x440));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x441 = UINT8_MAX;
	int16_t x443 = 1;
	volatile uint8_t x444 = 9U;
	static int32_t t95 = 1;

	t95 = ((x441+x442)<=(x443<x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x445 = 823352946254LL;
	uint64_t x446 = UINT64_MAX;
	volatile int32_t x447 = -46591;
	static int64_t x448 = INT64_MIN;
	int32_t t96 = 58010821;

	t96 = ((x445+x446)<=(x447<x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x453 = -1;
	int8_t x455 = INT8_MIN;
	volatile int64_t x456 = 118531208LL;
	static int32_t t97 = -26937910;

	t97 = ((x453+x454)<=(x455<x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = INT64_MIN;
	int16_t x460 = INT16_MIN;

	t98 = ((x457+x458)<=(x459<x460));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = INT64_MAX;
	static volatile int16_t x462 = -10839;
	uint16_t x463 = 980U;
	int64_t x464 = INT64_MIN;
	volatile int32_t t99 = -128441;

	t99 = ((x461+x462)<=(x463<x464));

	if (t99 != 0) { NG(); } else { ; }
	
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

