#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x4 = UINT32_MAX;
volatile uint16_t x9 = 6U;
int32_t x13 = 34066292;
static int32_t t3 = -205;
static uint64_t x31 = 36093LLU;
int64_t x39 = INT64_MAX;
int32_t x41 = INT32_MIN;
static volatile int64_t x43 = -2184863805605903LL;
uint16_t x55 = UINT16_MAX;
int32_t t9 = 17169938;
static int16_t x58 = INT16_MAX;
int16_t x59 = -1;
int8_t x69 = INT8_MAX;
static int16_t x74 = INT16_MIN;
int64_t x89 = INT64_MAX;
int32_t x94 = -1;
static uint64_t x96 = 24104768038LLU;
static int16_t x97 = 1;
uint32_t x105 = 14541U;
volatile int64_t t19 = -963LL;
volatile uint64_t t21 = 42042LLU;
int64_t x128 = -10971313617319781LL;
static int64_t t22 = 132580413LL;
uint8_t x130 = 3U;
volatile uint32_t t27 = 182036U;
int64_t x157 = -175LL;
uint16_t x158 = 53U;
volatile int16_t x159 = INT16_MIN;
int64_t x169 = -114225000454LL;
int8_t x179 = -1;
int32_t x190 = -1;
int32_t t34 = 2210;
volatile int64_t x194 = -2637024017571LL;
int8_t x202 = INT8_MIN;
int64_t t37 = -7062510540101166LL;
volatile int64_t x213 = INT64_MIN;
int16_t x221 = INT16_MIN;
volatile int64_t t41 = -5723790251LL;
int64_t x226 = -1775LL;
static uint64_t x227 = 5404553097346624LLU;
volatile uint64_t t42 = 1569866316LLU;
int32_t x229 = INT32_MIN;
static volatile int32_t t43 = 71;
volatile uint64_t t44 = 197834978LLU;
static int16_t x239 = 12;
volatile int32_t t45 = 106;
int8_t x247 = -1;
uint16_t x251 = 9U;
static uint8_t x252 = UINT8_MAX;
int16_t x256 = INT16_MAX;
static int8_t x263 = -1;
uint8_t x265 = 12U;
int64_t x266 = 34560811710311LL;
static int32_t x269 = 15081;
int16_t x272 = -1;
volatile uint32_t t53 = 1541U;
static int16_t x280 = -1;
int16_t x288 = INT16_MAX;
int64_t x292 = -26806768LL;
int64_t t57 = -230541655657663354LL;
int64_t x293 = -1LL;
int32_t x299 = -133;
int8_t x317 = INT8_MAX;
int32_t x321 = -1;
uint32_t x324 = 162U;
uint32_t t63 = 58568582U;
volatile uint8_t x334 = UINT8_MAX;
static int8_t x339 = -31;
int64_t x353 = -8LL;
volatile int64_t t68 = 179458LL;
static int64_t x381 = -15169241352LL;
uint64_t x394 = 413751300966LLU;
static int8_t x398 = 19;
int8_t x400 = INT8_MAX;
uint32_t t73 = 1U;
int64_t x408 = -1LL;
volatile uint64_t t74 = 1321076285801867781LLU;
uint32_t x413 = 8401011U;
int32_t x417 = -1;
int8_t x422 = INT8_MAX;
int32_t x423 = -6408;
uint16_t x425 = 69U;
volatile int32_t x427 = INT32_MIN;
static int64_t x431 = INT64_MAX;
volatile int64_t t82 = 0LL;
static int64_t t83 = 94LL;
int32_t x463 = -5;
uint64_t x474 = 27LLU;
uint32_t x475 = UINT32_MAX;
int64_t x480 = -1LL;
static volatile uint32_t x482 = 146250U;
volatile int8_t x488 = INT8_MIN;
static volatile int32_t t90 = -2504;
volatile uint64_t x493 = 9422460915676480LLU;
int8_t x503 = -1;
int32_t x509 = INT32_MIN;
uint64_t t95 = 277078LLU;
int64_t x515 = INT64_MAX;
int32_t x523 = 324866;
volatile int32_t t98 = -2356;
int16_t x531 = INT16_MAX;
int32_t t99 = 213028;


void f0(void) {
	volatile int64_t x1 = -658599LL;
	static uint64_t x2 = UINT64_MAX;
	int16_t x3 = -54;
	volatile uint64_t t0 = 272LLU;

	t0 = ((x1&x2)%(x3*x4));

	if (t0 != 37LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	static int32_t x6 = INT32_MIN;
	static int8_t x7 = -1;
	static int8_t x8 = -1;
	static int32_t t1 = 90958364;

	t1 = ((x5&x6)%(x7*x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = INT8_MIN;
	static uint32_t x11 = 252946844U;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 401356587121552LLU;

	t2 = ((x9&x10)%(x11*x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	uint8_t x15 = UINT8_MAX;
	uint16_t x16 = 631U;

	t3 = ((x13&x14)%(x15*x16));

	if (t3 != 53108) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 4092156069LLU;
	volatile uint64_t x18 = UINT64_MAX;
	uint32_t x19 = 63U;
	volatile uint32_t x20 = 298422708U;
	static volatile uint64_t t4 = 6481LLU;

	t4 = ((x17&x18)%(x19*x20));

	if (t4 != 850633229LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x29 = INT64_MIN;
	volatile int16_t x30 = INT16_MIN;
	int64_t x32 = -121442805919LL;
	volatile uint64_t t5 = 236828024558779157LLU;

	t5 = ((x29&x30)%(x31*x32));

	if (t5 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = -15288;
	int16_t x40 = -1;
	volatile int64_t t6 = 61LL;

	t6 = ((x37&x38)%(x39*x40));

	if (t6 != 50248LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x42 = -1;
	uint64_t x44 = 296361360608671LLU;
	uint64_t t7 = 93301384LLU;

	t7 = ((x41&x42)%(x43*x44));

	if (t7 != 105238609654190404LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 34U;
	volatile int32_t x46 = INT32_MIN;
	uint32_t x47 = UINT32_MAX;
	uint16_t x48 = 135U;
	volatile uint32_t t8 = 241325036U;

	t8 = ((x45&x46)%(x47*x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = -1;
	int16_t x54 = -206;
	volatile int16_t x56 = INT16_MIN;

	t9 = ((x53&x54)%(x55*x56));

	if (t9 != -206) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x57 = 0;
	int8_t x60 = 7;
	volatile int32_t t10 = 22947;

	t10 = ((x57&x58)%(x59*x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x70 = -8206431467696LL;
	int16_t x71 = INT16_MIN;
	volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t11 = 28214258LLU;

	t11 = ((x69&x70)%(x71*x72));

	if (t11 != 80LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = UINT64_MAX;
	int32_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile uint64_t t12 = 561596524344463232LLU;

	t12 = ((x73&x74)%(x75*x76));

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x77 = 433699101U;
	int8_t x78 = INT8_MAX;
	int64_t x79 = -114839551LL;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t13 = -934179755364LL;

	t13 = ((x77&x78)%(x79*x80));

	if (t13 != 29LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x85 = 439332;
	int64_t x86 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;
	volatile int64_t t14 = 17585166526LL;

	t14 = ((x85&x86)%(x87*x88));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x90 = 13;
	volatile uint32_t x91 = UINT32_MAX;
	static int32_t x92 = 1898825;
	volatile int64_t t15 = -192474362543621586LL;

	t15 = ((x89&x90)%(x91*x92));

	if (t15 != 13LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x93 = -1;
	int32_t x95 = -1;
	volatile uint64_t t16 = 56403LLU;

	t16 = ((x93&x94)%(x95*x96));

	if (t16 != 24104768037LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x98 = 13072;
	int8_t x99 = 19;
	int32_t x100 = -1;
	volatile int32_t t17 = -4211;

	t17 = ((x97&x98)%(x99*x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = 427LLU;
	uint16_t x108 = 12118U;
	volatile uint64_t t18 = 12LLU;

	t18 = ((x105&x106)%(x107*x108));

	if (t18 != 14541LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x113 = UINT8_MAX;
	int8_t x114 = INT8_MIN;
	uint16_t x115 = 10U;
	int64_t x116 = -1LL;

	t19 = ((x113&x114)%(x115*x116));

	if (t19 != 8LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = 30270925U;
	int64_t x118 = -3LL;
	static int8_t x119 = -1;
	uint32_t x120 = 1U;
	volatile int64_t t20 = -15608026743578LL;

	t20 = ((x117&x118)%(x119*x120));

	if (t20 != 30270925LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MIN;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MAX;
	int8_t x124 = INT8_MIN;

	t21 = ((x121&x122)%(x123*x124));

	if (t21 != 4161408LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x125 = -1;
	static int16_t x126 = INT16_MAX;
	volatile uint8_t x127 = UINT8_MAX;

	t22 = ((x125&x126)%(x127*x128));

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x129 = INT8_MAX;
	uint64_t x131 = 27LLU;
	int16_t x132 = INT16_MIN;
	volatile uint64_t t23 = 101972139383519741LLU;

	t23 = ((x129&x130)%(x131*x132));

	if (t23 != 3LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x133 = INT64_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile int16_t x135 = 7;
	int16_t x136 = -1;
	int64_t t24 = 328881094872LL;

	t24 = ((x133&x134)%(x135*x136));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x137 = 27;
	int16_t x138 = INT16_MAX;
	int16_t x139 = INT16_MAX;
	volatile uint8_t x140 = 14U;
	int32_t t25 = 28;

	t25 = ((x137&x138)%(x139*x140));

	if (t25 != 27) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x145 = 282U;
	static int64_t x146 = INT64_MIN;
	static int16_t x147 = INT16_MIN;
	static int16_t x148 = 1;
	volatile int64_t t26 = 25LL;

	t26 = ((x145&x146)%(x147*x148));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x149 = 28252065U;
	int32_t x150 = INT32_MIN;
	uint8_t x151 = 2U;
	uint16_t x152 = UINT16_MAX;

	t27 = ((x149&x150)%(x151*x152));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x160 = 3725U;
	int64_t t28 = 1LL;

	t28 = ((x157&x158)%(x159*x160));

	if (t28 != 17LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x165 = -1;
	uint32_t x166 = 128U;
	uint32_t x167 = UINT32_MAX;
	int8_t x168 = INT8_MIN;
	volatile uint32_t t29 = 1337198929U;

	t29 = ((x165&x166)%(x167*x168));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x170 = -40322;
	int8_t x171 = 38;
	int16_t x172 = INT16_MIN;
	volatile int64_t t30 = 0LL;

	t30 = ((x169&x170)%(x171*x172));

	if (t30 != -572806LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x177 = 0;
	static uint16_t x178 = UINT16_MAX;
	static int16_t x180 = 417;
	volatile int32_t t31 = 1;

	t31 = ((x177&x178)%(x179*x180));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x181 = INT8_MIN;
	volatile int64_t x182 = 701696305782794048LL;
	volatile uint16_t x183 = 9993U;
	int8_t x184 = 8;
	int64_t t32 = -14338513310057LL;

	t32 = ((x181&x182)%(x183*x184));

	if (t32 != 2200LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x185 = 3339913U;
	static int16_t x186 = INT16_MAX;
	int64_t x187 = -807244577267615LL;
	uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t33 = 317149322LLU;

	t33 = ((x185&x186)%(x187*x188));

	if (t33 != 30345LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x189 = -1;
	uint16_t x191 = 892U;
	int8_t x192 = -6;

	t34 = ((x189&x190)%(x191*x192));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x193 = 0U;
	volatile uint8_t x195 = 24U;
	uint16_t x196 = 22554U;
	int64_t t35 = 63LL;

	t35 = ((x193&x194)%(x195*x196));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x201 = 77U;
	uint32_t x203 = UINT32_MAX;
	uint16_t x204 = UINT16_MAX;
	uint32_t t36 = 78U;

	t36 = ((x201&x202)%(x203*x204));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x205 = INT32_MAX;
	static volatile int16_t x206 = 3;
	uint8_t x207 = 24U;
	int64_t x208 = -1LL;

	t37 = ((x205&x206)%(x207*x208));

	if (t37 != 3LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x209 = -1LL;
	volatile uint16_t x210 = UINT16_MAX;
	int16_t x211 = 30;
	uint32_t x212 = UINT32_MAX;
	int64_t t38 = -57841140773532LL;

	t38 = ((x209&x210)%(x211*x212));

	if (t38 != 65535LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MAX;
	uint8_t x216 = UINT8_MAX;
	int64_t t39 = -1097916LL;

	t39 = ((x213&x214)%(x215*x216));

	if (t39 != -491513LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x217 = 84684186U;
	int32_t x218 = -85;
	int8_t x219 = INT8_MIN;
	uint16_t x220 = 1U;
	uint32_t t40 = 188504452U;

	t40 = ((x217&x218)%(x219*x220));

	if (t40 != 84684170U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x222 = INT32_MAX;
	volatile int8_t x223 = -1;
	int64_t x224 = 220119088524434873LL;

	t41 = ((x221&x222)%(x223*x224));

	if (t41 != 2147450880LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MIN;
	volatile uint8_t x228 = UINT8_MAX;

	t42 = ((x225&x226)%(x227*x228));

	if (t42 != 530650556005460288LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x230 = INT16_MIN;
	volatile int8_t x231 = INT8_MIN;
	volatile int32_t x232 = -1;

	t43 = ((x229&x230)%(x231*x232));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x233 = 1366686709LLU;
	int16_t x234 = -1;
	static int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MIN;

	t44 = ((x233&x234)%(x235*x236));

	if (t44 != 3537909LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x237 = INT16_MIN;
	uint8_t x238 = 100U;
	int32_t x240 = 1;

	t45 = ((x237&x238)%(x239*x240));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x241 = 479U;
	uint64_t x242 = 5LLU;
	static int16_t x243 = INT16_MIN;
	int16_t x244 = 857;
	uint64_t t46 = 6834954151290823LLU;

	t46 = ((x241&x242)%(x243*x244));

	if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x245 = 18071LLU;
	volatile uint16_t x246 = 26U;
	volatile uint16_t x248 = UINT16_MAX;
	volatile uint64_t t47 = 42047LLU;

	t47 = ((x245&x246)%(x247*x248));

	if (t47 != 18LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x249 = 161712739716609771LL;
	volatile int64_t x250 = -37977724LL;
	static volatile int64_t t48 = -52LL;

	t48 = ((x249&x250)%(x251*x252));

	if (t48 != 797LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = INT32_MIN;
	volatile uint16_t x254 = 0U;
	volatile uint64_t x255 = UINT64_MAX;
	volatile uint64_t t49 = 3133340602176039LLU;

	t49 = ((x253&x254)%(x255*x256));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x257 = -1;
	int16_t x258 = -1;
	int32_t x259 = -1;
	int32_t x260 = -1;
	int32_t t50 = -72477529;

	t50 = ((x257&x258)%(x259*x260));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	volatile int32_t x264 = -1;
	volatile int32_t t51 = 3439639;

	t51 = ((x261&x262)%(x263*x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x267 = 4412633107LLU;
	static uint8_t x268 = 5U;
	volatile uint64_t t52 = 4701795299423LLU;

	t52 = ((x265&x266)%(x267*x268));

	if (t52 != 4LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x270 = 11231717U;
	int32_t x271 = -16;

	t53 = ((x269&x270)%(x271*x272));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x277 = UINT32_MAX;
	static uint32_t x278 = 441U;
	uint64_t x279 = UINT64_MAX;
	volatile uint64_t t54 = 15833LLU;

	t54 = ((x277&x278)%(x279*x280));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x281 = -1;
	uint16_t x282 = UINT16_MAX;
	int8_t x283 = -1;
	static uint8_t x284 = 6U;
	volatile int32_t t55 = 318948;

	t55 = ((x281&x282)%(x283*x284));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x285 = 257U;
	int64_t x286 = INT64_MIN;
	int64_t x287 = -57812397539LL;
	volatile int64_t t56 = -7LL;

	t56 = ((x285&x286)%(x287*x288));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x289 = 13565231U;
	int64_t x290 = -30905045869107LL;
	static volatile int16_t x291 = 1418;

	t57 = ((x289&x290)%(x291*x292));

	if (t57 != 8920333LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x294 = INT64_MAX;
	volatile uint16_t x295 = 9U;
	uint8_t x296 = UINT8_MAX;
	volatile int64_t t58 = 9943111344LL;

	t58 = ((x293&x294)%(x295*x296));

	if (t58 != 1402LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x297 = INT8_MAX;
	static int8_t x298 = INT8_MAX;
	int16_t x300 = INT16_MIN;
	int32_t t59 = 212243719;

	t59 = ((x297&x298)%(x299*x300));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int16_t x305 = 108;
	volatile int64_t x306 = INT64_MIN;
	uint64_t x307 = UINT64_MAX;
	int16_t x308 = -14817;
	uint64_t t60 = 741525602279918495LLU;

	t60 = ((x305&x306)%(x307*x308));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x313 = INT32_MIN;
	static int64_t x314 = INT64_MIN;
	static uint64_t x315 = UINT64_MAX;
	int32_t x316 = INT32_MIN;
	volatile uint64_t t61 = 2508514458338LLU;

	t61 = ((x313&x314)%(x315*x316));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	uint64_t x320 = UINT64_MAX;
	static volatile uint64_t t62 = 448258LLU;

	t62 = ((x317&x318)%(x319*x320));

	if (t62 != 127LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x322 = 13;
	static volatile int16_t x323 = INT16_MIN;

	t63 = ((x321&x322)%(x323*x324));

	if (t63 != 13U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x333 = INT64_MIN;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = INT16_MIN;
	int64_t t64 = 2690LL;

	t64 = ((x333&x334)%(x335*x336));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = -1;
	volatile int8_t x338 = INT8_MIN;
	int16_t x340 = 91;
	volatile int32_t t65 = -1478354;

	t65 = ((x337&x338)%(x339*x340));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x349 = 1989815614LL;
	int64_t x350 = 17848432758088071LL;
	uint32_t x351 = 173592U;
	volatile uint8_t x352 = 5U;
	int64_t t66 = 201524LL;

	t66 = ((x349&x350)%(x351*x352));

	if (t66 != 535894LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x354 = -1;
	volatile int16_t x355 = 45;
	int16_t x356 = -1;
	volatile int64_t t67 = 3LL;

	t67 = ((x353&x354)%(x355*x356));

	if (t67 != -8LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x361 = -1LL;
	int16_t x362 = -192;
	int8_t x363 = INT8_MIN;
	static uint32_t x364 = 128090U;

	t68 = ((x361&x362)%(x363*x364));

	if (t68 != -192LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x365 = INT64_MIN;
	int8_t x366 = 0;
	int16_t x367 = -1;
	int16_t x368 = -1;
	int64_t t69 = 36226911715362LL;

	t69 = ((x365&x366)%(x367*x368));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x382 = INT8_MAX;
	int8_t x383 = INT8_MIN;
	int64_t x384 = -1LL;
	int64_t t70 = 4234383780682573866LL;

	t70 = ((x381&x382)%(x383*x384));

	if (t70 != 120LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x385 = 2U;
	static volatile int32_t x386 = 1;
	volatile int32_t x387 = 5977;
	uint64_t x388 = UINT64_MAX;
	uint64_t t71 = 4531500364235LLU;

	t71 = ((x385&x386)%(x387*x388));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x393 = -1;
	int32_t x395 = 25289;
	volatile uint16_t x396 = 439U;
	uint64_t t72 = 1LLU;

	t72 = ((x393&x394)%(x395*x396));

	if (t72 != 6772538LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x397 = -1;
	volatile uint32_t x399 = 1654U;

	t73 = ((x397&x398)%(x399*x400));

	if (t73 != 19U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x405 = INT32_MIN;
	static uint64_t x406 = 2653685057384719LLU;
	static int32_t x407 = -56677;

	t74 = ((x405&x406)%(x407*x408));

	if (t74 != 13174LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x409 = -1;
	static int8_t x410 = 0;
	uint8_t x411 = 1U;
	volatile int32_t x412 = INT32_MIN;
	volatile int32_t t75 = 86547359;

	t75 = ((x409&x410)%(x411*x412));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x414 = 2U;
	int32_t x415 = -134928296;
	uint32_t x416 = 19U;
	uint32_t t76 = 1809U;

	t76 = ((x413&x414)%(x415*x416));

	if (t76 != 2U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x418 = INT16_MIN;
	int16_t x419 = INT16_MIN;
	int64_t x420 = -1LL;
	volatile int64_t t77 = -15934LL;

	t77 = ((x417&x418)%(x419*x420));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x421 = 1922U;
	static int16_t x424 = INT16_MIN;
	volatile int32_t t78 = -161;

	t78 = ((x421&x422)%(x423*x424));

	if (t78 != 2) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x426 = -6;
	int64_t x428 = -1LL;
	volatile int64_t t79 = 30635LL;

	t79 = ((x425&x426)%(x427*x428));

	if (t79 != 64LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x429 = 6U;
	uint16_t x430 = 7189U;
	int8_t x432 = -1;
	static volatile int64_t t80 = -940770LL;

	t80 = ((x429&x430)%(x431*x432));

	if (t80 != 4LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = INT64_MIN;
	static volatile uint16_t x442 = UINT16_MAX;
	uint32_t x443 = UINT32_MAX;
	uint16_t x444 = UINT16_MAX;
	static int64_t t81 = 5171LL;

	t81 = ((x441&x442)%(x443*x444));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x449 = -78LL;
	int64_t x450 = 1205695209829828LL;
	uint16_t x451 = 93U;
	int8_t x452 = -1;

	t82 = ((x449&x450)%(x451*x452));

	if (t82 != 35LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x453 = -1LL;
	int16_t x454 = INT16_MIN;
	int8_t x455 = -1;
	int64_t x456 = 125310004742LL;

	t83 = ((x453&x454)%(x455*x456));

	if (t83 != -32768LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x461 = 31517299;
	static int32_t x462 = INT32_MIN;
	volatile uint64_t x464 = 3609472845117782593LLU;
	volatile uint64_t t84 = 71144024110837LLU;

	t84 = ((x461&x462)%(x463*x464));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x465 = INT8_MIN;
	int32_t x466 = INT32_MIN;
	int32_t x467 = 693;
	int16_t x468 = -2;
	volatile int32_t t85 = -56;

	t85 = ((x465&x466)%(x467*x468));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x469 = -2;
	int8_t x470 = 0;
	uint64_t x471 = UINT64_MAX;
	uint8_t x472 = 34U;
	uint64_t t86 = 1071LLU;

	t86 = ((x469&x470)%(x471*x472));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x473 = INT8_MIN;
	int64_t x476 = 1077575LL;
	static volatile uint64_t t87 = 43593LLU;

	t87 = ((x473&x474)%(x475*x476));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x477 = UINT16_MAX;
	int16_t x478 = 0;
	int16_t x479 = INT16_MIN;
	int64_t t88 = 387428LL;

	t88 = ((x477&x478)%(x479*x480));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x481 = 5723;
	volatile uint8_t x483 = 3U;
	volatile uint32_t x484 = UINT32_MAX;
	volatile uint32_t t89 = 9128872U;

	t89 = ((x481&x482)%(x483*x484));

	if (t89 != 4682U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x485 = INT8_MIN;
	static uint8_t x486 = 35U;
	uint8_t x487 = 14U;

	t90 = ((x485&x486)%(x487*x488));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x494 = 12765279537256LLU;
	static int32_t x495 = -156;
	static uint16_t x496 = 6U;
	static volatile uint64_t t91 = 1LLU;

	t91 = ((x493&x494)%(x495*x496));

	if (t91 != 10497466417216LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x497 = -1;
	volatile int16_t x498 = 7;
	static uint8_t x499 = UINT8_MAX;
	uint32_t x500 = 574331683U;
	uint32_t t92 = 472U;

	t92 = ((x497&x498)%(x499*x500));

	if (t92 != 7U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x501 = INT32_MIN;
	uint8_t x502 = 3U;
	int16_t x504 = -1;
	volatile int32_t t93 = -1545815;

	t93 = ((x501&x502)%(x503*x504));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x505 = UINT64_MAX;
	int32_t x506 = INT32_MIN;
	uint64_t x507 = 3579363063LLU;
	int16_t x508 = INT16_MAX;
	uint64_t t94 = 20946500LLU;

	t94 = ((x505&x506)%(x507*x508));

	if (t94 != 43640321295767LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x510 = UINT64_MAX;
	static int64_t x511 = 324286LL;
	uint8_t x512 = 63U;

	t95 = ((x509&x510)%(x511*x512));

	if (t95 != 12088958LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x513 = -1LL;
	uint16_t x514 = 16U;
	static uint64_t x516 = 2512766LLU;
	volatile uint64_t t96 = 47257545141LLU;

	t96 = ((x513&x514)%(x515*x516));

	if (t96 != 16LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x517 = -1;
	int8_t x518 = INT8_MAX;
	int8_t x519 = 1;
	volatile uint64_t x520 = 28LLU;
	volatile uint64_t t97 = 6609LLU;

	t97 = ((x517&x518)%(x519*x520));

	if (t97 != 15LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x521 = UINT8_MAX;
	int16_t x522 = 3;
	int32_t x524 = -1;

	t98 = ((x521&x522)%(x523*x524));

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x529 = 3;
	uint8_t x530 = 78U;
	int16_t x532 = -1;

	t99 = ((x529&x530)%(x531*x532));

	if (t99 != 2) { NG(); } else { ; }
	
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

