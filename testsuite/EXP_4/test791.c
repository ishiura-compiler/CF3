#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = -1LL;
int32_t t0 = 14;
int16_t x15 = INT16_MAX;
static uint32_t x26 = 395U;
uint32_t x35 = 3321088U;
uint16_t x40 = 5U;
volatile int16_t x46 = INT16_MAX;
int64_t x47 = INT64_MAX;
int64_t x53 = INT64_MAX;
int32_t x59 = INT32_MIN;
uint16_t x61 = 4U;
uint8_t x64 = 104U;
int32_t t13 = 2086910;
volatile uint64_t x65 = 20572LLU;
uint64_t t14 = 13124837LLU;
int64_t x77 = 202154003490844389LL;
int64_t t17 = -47185LL;
int8_t x86 = -11;
uint8_t x91 = 3U;
uint64_t x94 = UINT64_MAX;
int16_t x99 = INT16_MAX;
static int16_t x107 = -1;
int64_t x110 = INT64_MIN;
int32_t x121 = INT32_MIN;
static uint8_t x125 = 46U;
uint32_t x129 = 2U;
int16_t x132 = -11;
static int64_t x144 = INT64_MIN;
uint8_t x148 = 3U;
int16_t x150 = -1;
uint16_t x151 = 77U;
volatile int32_t t34 = 22297;
static uint8_t x153 = 10U;
volatile int32_t t35 = -2;
static int64_t x157 = 5709041LL;
volatile uint64_t t38 = 12307829598LLU;
uint16_t x174 = UINT16_MAX;
uint8_t x179 = 0U;
int64_t x184 = 23358007365013LL;
volatile int32_t t42 = -276754;
uint32_t x194 = 143U;
int8_t x196 = INT8_MAX;
volatile int8_t x198 = INT8_MIN;
static int64_t t47 = 1114555307784460LL;
int8_t x212 = INT8_MIN;
uint64_t x221 = UINT64_MAX;
int32_t x230 = INT32_MAX;
static int64_t x232 = 30308170090LL;
volatile int32_t t53 = -28837;
static uint8_t x237 = 11U;
static int64_t x239 = -14575703942728LL;
uint8_t x240 = 25U;
int8_t x244 = INT8_MIN;
int32_t t57 = -1775;
volatile int64_t x249 = -1LL;
static uint16_t x250 = 1253U;
int8_t x253 = INT8_MIN;
int64_t x255 = -1LL;
static uint64_t x257 = 1629753903579LLU;
volatile int32_t t61 = 61819;
uint16_t x265 = 154U;
int8_t x280 = INT8_MAX;
volatile int8_t x290 = INT8_MIN;
uint32_t x292 = UINT32_MAX;
int8_t x295 = 1;
int64_t x300 = -1LL;
int64_t t70 = 1277446969664300640LL;
static uint64_t x303 = 552041734985935394LLU;
int64_t t71 = -32258565LL;
static volatile int64_t x306 = -1LL;
int8_t x308 = INT8_MIN;
int8_t x310 = INT8_MIN;
int32_t t73 = -308831812;
int64_t x317 = INT64_MIN;
int16_t x322 = INT16_MAX;
int64_t x325 = -60542345542545LL;
volatile int16_t x327 = -14926;
volatile int32_t t78 = 234852954;
int16_t x340 = -1;
static uint64_t x349 = 205738LLU;
int8_t x361 = -10;
static int32_t x368 = INT32_MIN;
volatile int32_t t89 = 64643593;
volatile int8_t x383 = INT8_MIN;
uint16_t x392 = 13U;
static int32_t x395 = INT32_MAX;
volatile uint32_t x397 = 1290274U;
static int64_t x401 = INT64_MIN;
volatile int64_t t96 = 0LL;
volatile uint64_t x406 = 86LLU;
uint8_t x411 = 13U;
static uint16_t x412 = UINT16_MAX;
uint8_t x416 = 77U;


void f0(void) {
	int32_t x1 = -1;
	static uint8_t x2 = 3U;
	volatile uint8_t x4 = 1U;

	t0 = (x1&(x2<(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 1U;
	uint16_t x6 = 11086U;
	uint8_t x7 = 1U;
	int64_t x8 = INT64_MIN;
	int32_t t1 = -1684436;

	t1 = (x5&(x6<(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int64_t x9 = 888792851809240644LL;
	volatile int8_t x10 = 20;
	int64_t x11 = INT64_MIN;
	uint8_t x12 = UINT8_MAX;
	volatile int64_t t2 = 33959768848823LL;

	t2 = (x9&(x10<(x11%x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint64_t x14 = UINT64_MAX;
	static volatile int16_t x16 = INT16_MIN;
	uint64_t t3 = 71463LLU;

	t3 = (x13&(x14<(x15%x16)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = -1;
	uint64_t x22 = 7286527LLU;
	int8_t x23 = -1;
	uint16_t x24 = 15U;
	volatile int32_t t4 = -753438;

	t4 = (x21&(x22<(x23%x24)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = 17223393U;
	int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	uint32_t t5 = 5519773U;

	t5 = (x25&(x26<(x27%x28)));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	int16_t x30 = INT16_MIN;
	int64_t x31 = -1LL;
	int64_t x32 = -1LL;
	int32_t t6 = -2453330;

	t6 = (x29&(x30<(x31%x32)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -2718;
	static int8_t x34 = INT8_MAX;
	int16_t x36 = -1;
	int32_t t7 = 0;

	t7 = (x33&(x34<(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x37 = 6U;
	int8_t x38 = -1;
	volatile int64_t x39 = -216167216401057LL;
	static uint32_t t8 = 7406U;

	t8 = (x37&(x38<(x39%x40)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MAX;
	uint16_t x48 = UINT16_MAX;
	volatile int32_t t9 = -357320;

	t9 = (x45&(x46<(x47%x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x49 = UINT32_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = -208;
	int32_t x52 = -1;
	volatile uint32_t t10 = 263725U;

	t10 = (x49&(x50<(x51%x52)));

	if (t10 != 1U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x54 = 40;
	volatile int64_t x55 = INT64_MAX;
	int8_t x56 = 3;
	int64_t t11 = 30608037LL;

	t11 = (x53&(x54<(x55%x56)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 0U;
	static uint16_t x58 = UINT16_MAX;
	int16_t x60 = 146;
	static volatile int32_t t12 = 938;

	t12 = (x57&(x58<(x59%x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x62 = INT16_MIN;
	int8_t x63 = -1;

	t13 = (x61&(x62<(x63%x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x66 = INT64_MIN;
	uint8_t x67 = 53U;
	volatile uint32_t x68 = 1U;

	t14 = (x65&(x66<(x67%x68)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 884170870539648927LLU;
	uint8_t x70 = UINT8_MAX;
	uint32_t x71 = UINT32_MAX;
	volatile uint16_t x72 = 23U;
	static volatile uint64_t t15 = 34LLU;

	t15 = (x69&(x70<(x71%x72)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = 6723;
	int16_t x74 = -2;
	int32_t x75 = INT32_MIN;
	volatile int32_t x76 = -1;
	volatile int32_t t16 = -5222455;

	t16 = (x73&(x74<(x75%x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x78 = INT8_MIN;
	int8_t x79 = INT8_MAX;
	static int8_t x80 = -3;

	t17 = (x77&(x78<(x79%x80)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = -1;
	int64_t x82 = -79362068412407LL;
	int32_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;
	volatile int32_t t18 = 25219147;

	t18 = (x81&(x82<(x83%x84)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = 1;
	int64_t x87 = INT64_MIN;
	static int16_t x88 = INT16_MIN;
	static int32_t t19 = -1609222;

	t19 = (x85&(x86<(x87%x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int8_t x90 = -1;
	int64_t x92 = -1LL;
	volatile int32_t t20 = -68737;

	t20 = (x89&(x90<(x91%x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x93 = INT8_MAX;
	uint32_t x95 = 1U;
	volatile uint16_t x96 = 203U;
	int32_t t21 = 274;

	t21 = (x93&(x94<(x95%x96)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = UINT16_MAX;
	int8_t x98 = INT8_MIN;
	uint16_t x100 = 6537U;
	volatile int32_t t22 = -16012;

	t22 = (x97&(x98<(x99%x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x101 = -1;
	uint8_t x102 = 0U;
	uint8_t x103 = 1U;
	volatile int64_t x104 = INT64_MIN;
	volatile int32_t t23 = 30624;

	t23 = (x101&(x102<(x103%x104)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x105 = -1;
	int8_t x106 = INT8_MIN;
	static volatile int64_t x108 = -1LL;
	int32_t t24 = -29;

	t24 = (x105&(x106<(x107%x108)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x109 = UINT8_MAX;
	static volatile uint8_t x111 = 90U;
	static uint8_t x112 = 6U;
	static volatile int32_t t25 = 125;

	t25 = (x109&(x110<(x111%x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 456759LLU;
	uint16_t x118 = 1003U;
	static int32_t x119 = INT32_MAX;
	int8_t x120 = INT8_MIN;
	static uint64_t t26 = 6LLU;

	t26 = (x117&(x118<(x119%x120)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x122 = 28U;
	int16_t x123 = -1;
	int64_t x124 = INT64_MIN;
	int32_t t27 = -100;

	t27 = (x121&(x122<(x123%x124)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x126 = -1158697425LL;
	static int8_t x127 = INT8_MAX;
	volatile int16_t x128 = INT16_MAX;
	int32_t t28 = 211144576;

	t28 = (x125&(x126<(x127%x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x130 = 866;
	int32_t x131 = -538;
	volatile uint32_t t29 = 5620523U;

	t29 = (x129&(x130<(x131%x132)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x133 = 1U;
	int64_t x134 = 1736449567037945139LL;
	int32_t x135 = INT32_MIN;
	int64_t x136 = -6LL;
	volatile int32_t t30 = 133205969;

	t30 = (x133&(x134<(x135%x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x137 = 900U;
	int8_t x138 = INT8_MIN;
	volatile uint16_t x139 = 14U;
	int32_t x140 = 1277487;
	int32_t t31 = 726157808;

	t31 = (x137&(x138<(x139%x140)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 21;
	uint16_t x142 = UINT16_MAX;
	int64_t x143 = -122078926613010LL;
	int32_t t32 = 46116;

	t32 = (x141&(x142<(x143%x144)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -1362623LL;
	int16_t x146 = -29;
	int8_t x147 = INT8_MAX;
	volatile int64_t t33 = 354097LL;

	t33 = (x145&(x146<(x147%x148)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -1;
	int32_t x152 = -180605403;

	t34 = (x149&(x150<(x151%x152)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x154 = 3025702U;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -1;

	t35 = (x153&(x154<(x155%x156)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = -1;
	volatile uint32_t x159 = 16440406U;
	int64_t x160 = INT64_MAX;
	volatile int64_t t36 = -58065318491514LL;

	t36 = (x157&(x158<(x159%x160)));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x161 = 0U;
	static int8_t x162 = -1;
	uint32_t x163 = 1U;
	static volatile uint64_t x164 = 34124198496566452LLU;
	volatile int32_t t37 = 418335;

	t37 = (x161&(x162<(x163%x164)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x165 = 2LLU;
	uint32_t x166 = 12U;
	static int16_t x167 = 0;
	volatile int64_t x168 = -1LL;

	t38 = (x165&(x166<(x167%x168)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = UINT32_MAX;
	uint8_t x170 = 40U;
	static volatile int32_t x171 = -307118;
	static int64_t x172 = -16938026060588343LL;
	uint32_t t39 = 82165U;

	t39 = (x169&(x170<(x171%x172)));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	int32_t x175 = 2062;
	int8_t x176 = -1;
	volatile int32_t t40 = 6580;

	t40 = (x173&(x174<(x175%x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x177 = 554869000087550LLU;
	uint64_t x178 = UINT64_MAX;
	uint8_t x180 = UINT8_MAX;
	static uint64_t t41 = 2519874LLU;

	t41 = (x177&(x178<(x179%x180)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = INT32_MIN;
	int64_t x183 = INT64_MIN;

	t42 = (x181&(x182<(x183%x184)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MAX;
	int32_t x187 = INT32_MIN;
	static int64_t x188 = 227LL;
	static uint64_t t43 = 784793176LLU;

	t43 = (x185&(x186<(x187%x188)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x189 = INT8_MIN;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = -141;
	int64_t x192 = INT64_MIN;
	volatile int32_t t44 = -1;

	t44 = (x189&(x190<(x191%x192)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -13482;
	static int8_t x195 = -1;
	volatile int32_t t45 = -2105;

	t45 = (x193&(x194<(x195%x196)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x197 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	static int16_t x200 = 1631;
	static volatile int32_t t46 = -19785778;

	t46 = (x197&(x198<(x199%x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	static int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MIN;
	uint16_t x204 = 8509U;

	t47 = (x201&(x202<(x203%x204)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 8;
	int32_t x210 = -4229549;
	int64_t x211 = -1LL;
	int32_t t48 = -536473;

	t48 = (x209&(x210<(x211%x212)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = INT64_MIN;
	int32_t x214 = INT32_MIN;
	static uint64_t x215 = 10584901LLU;
	uint16_t x216 = 7U;
	volatile int64_t t49 = 147885565960703LL;

	t49 = (x213&(x214<(x215%x216)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x217 = 36142U;
	int32_t x218 = 200;
	static volatile int16_t x219 = -1;
	int16_t x220 = INT16_MAX;
	volatile uint32_t t50 = 68311950U;

	t50 = (x217&(x218<(x219%x220)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x222 = INT64_MAX;
	int16_t x223 = -1;
	int32_t x224 = 5719671;
	volatile uint64_t t51 = 16564640LLU;

	t51 = (x221&(x222<(x223%x224)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -5103;
	static int8_t x226 = 23;
	uint16_t x227 = 0U;
	int32_t x228 = INT32_MAX;
	int32_t t52 = 2829;

	t52 = (x225&(x226<(x227%x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = INT32_MAX;
	volatile uint16_t x231 = UINT16_MAX;

	t53 = (x229&(x230<(x231%x232)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = -414203743385LL;
	static uint8_t x234 = 1U;
	int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MAX;
	volatile int64_t t54 = 2LL;

	t54 = (x233&(x234<(x235%x236)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = INT32_MIN;
	static volatile int32_t t55 = 133;

	t55 = (x237&(x238<(x239%x240)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 2U;
	int8_t x242 = -1;
	int8_t x243 = 0;
	int32_t t56 = -1382;

	t56 = (x241&(x242<(x243%x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x245 = 2U;
	int32_t x246 = -1750;
	uint64_t x247 = 162489945893495LLU;
	static int64_t x248 = INT64_MAX;

	t57 = (x245&(x246<(x247%x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x251 = -129LL;
	static uint64_t x252 = 14691123872LLU;
	volatile int64_t t58 = 3547960948928LL;

	t58 = (x249&(x250<(x251%x252)));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x254 = INT8_MAX;
	uint16_t x256 = UINT16_MAX;
	volatile int32_t t59 = 190;

	t59 = (x253&(x254<(x255%x256)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x258 = 250791295829286LLU;
	static volatile int16_t x259 = -1;
	int8_t x260 = -1;
	volatile uint64_t t60 = 481281699071446LLU;

	t60 = (x257&(x258<(x259%x260)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -1545;
	int8_t x262 = 1;
	uint64_t x263 = UINT64_MAX;
	uint32_t x264 = 13878U;

	t61 = (x261&(x262<(x263%x264)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = INT64_MAX;
	int16_t x267 = INT16_MIN;
	int16_t x268 = INT16_MAX;
	static volatile int32_t t62 = -56518;

	t62 = (x265&(x266<(x267%x268)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MIN;
	volatile int32_t x270 = INT32_MIN;
	int64_t x271 = INT64_MIN;
	int16_t x272 = 981;
	int32_t t63 = 171;

	t63 = (x269&(x270<(x271%x272)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x273 = -3;
	volatile int16_t x274 = 1;
	int32_t x275 = INT32_MIN;
	int64_t x276 = INT64_MAX;
	volatile int32_t t64 = -1;

	t64 = (x273&(x274<(x275%x276)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x277 = UINT64_MAX;
	volatile uint32_t x278 = 499586U;
	volatile int64_t x279 = INT64_MIN;
	uint64_t t65 = 6146317393043727619LLU;

	t65 = (x277&(x278<(x279%x280)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x281 = UINT32_MAX;
	uint8_t x282 = UINT8_MAX;
	static int64_t x283 = INT64_MAX;
	uint32_t x284 = 467296356U;
	uint32_t t66 = 144725U;

	t66 = (x281&(x282<(x283%x284)));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x285 = 17LLU;
	int64_t x286 = 13042877792LL;
	int16_t x287 = INT16_MIN;
	static volatile uint32_t x288 = 2687U;
	uint64_t t67 = 459LLU;

	t67 = (x285&(x286<(x287%x288)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MIN;
	int8_t x291 = -1;
	int64_t t68 = 93734100214LL;

	t68 = (x289&(x290<(x291%x292)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 82U;
	uint32_t x294 = 972U;
	uint8_t x296 = UINT8_MAX;
	volatile uint32_t t69 = 26942U;

	t69 = (x293&(x294<(x295%x296)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = 111;
	uint64_t x299 = 54229885LLU;

	t70 = (x297&(x298<(x299%x300)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = -1LL;
	volatile int64_t x302 = INT64_MAX;
	volatile int64_t x304 = INT64_MIN;

	t71 = (x301&(x302<(x303%x304)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = INT32_MIN;
	volatile int8_t x307 = 5;
	int32_t t72 = 12589635;

	t72 = (x305&(x306<(x307%x308)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x309 = INT8_MIN;
	int64_t x311 = 0LL;
	uint32_t x312 = UINT32_MAX;

	t73 = (x309&(x310<(x311%x312)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x313 = -1;
	uint16_t x314 = 8U;
	int8_t x315 = INT8_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t74 = 51;

	t74 = (x313&(x314<(x315%x316)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x318 = INT64_MIN;
	static volatile int16_t x319 = INT16_MAX;
	volatile uint32_t x320 = 535998U;
	static volatile int64_t t75 = -11854188310LL;

	t75 = (x317&(x318<(x319%x320)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x321 = 46277942U;
	uint64_t x323 = 3778972925741202156LLU;
	uint64_t x324 = 110591084639063LLU;
	static uint32_t t76 = 11U;

	t76 = (x321&(x322<(x323%x324)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x326 = UINT16_MAX;
	int32_t x328 = INT32_MAX;
	static int64_t t77 = 1501398194212225520LL;

	t77 = (x325&(x326<(x327%x328)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x329 = 0;
	static uint8_t x330 = 20U;
	volatile int16_t x331 = INT16_MAX;
	int32_t x332 = INT32_MIN;

	t78 = (x329&(x330<(x331%x332)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 13U;
	int32_t x334 = INT32_MIN;
	volatile uint8_t x335 = 1U;
	int8_t x336 = INT8_MAX;
	int32_t t79 = -553649875;

	t79 = (x333&(x334<(x335%x336)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x337 = INT32_MAX;
	uint64_t x338 = 156450542941996853LLU;
	uint32_t x339 = UINT32_MAX;
	volatile int32_t t80 = 6;

	t80 = (x337&(x338<(x339%x340)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x341 = 58203693142034LLU;
	uint32_t x342 = 60185U;
	int16_t x343 = 142;
	static uint32_t x344 = 1326703U;
	static uint64_t t81 = 292212356725942897LLU;

	t81 = (x341&(x342<(x343%x344)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = INT8_MIN;
	volatile uint64_t x346 = UINT64_MAX;
	volatile int64_t x347 = 128923557329723LL;
	uint8_t x348 = UINT8_MAX;
	int32_t t82 = -491566;

	t82 = (x345&(x346<(x347%x348)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x350 = 3U;
	uint64_t x351 = 5529447205920888LLU;
	int32_t x352 = -2178747;
	uint64_t t83 = 13882533LLU;

	t83 = (x349&(x350<(x351%x352)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x353 = 829U;
	uint32_t x354 = 68U;
	int32_t x355 = -49953266;
	volatile int32_t x356 = INT32_MIN;
	uint32_t t84 = 6517002U;

	t84 = (x353&(x354<(x355%x356)));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x357 = 597U;
	int32_t x358 = 0;
	int64_t x359 = INT64_MIN;
	volatile int64_t x360 = INT64_MAX;
	volatile int32_t t85 = -201682019;

	t85 = (x357&(x358<(x359%x360)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint16_t x362 = 5447U;
	int8_t x363 = INT8_MAX;
	uint64_t x364 = 21854760435616723LLU;
	volatile int32_t t86 = -3651;

	t86 = (x361&(x362<(x363%x364)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x365 = 61U;
	volatile int32_t x366 = -1;
	uint32_t x367 = 380356U;
	volatile int32_t t87 = 16;

	t87 = (x365&(x366<(x367%x368)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x369 = 0U;
	static int64_t x370 = -1LL;
	int16_t x371 = -1;
	int8_t x372 = -1;
	volatile int32_t t88 = -777442911;

	t88 = (x369&(x370<(x371%x372)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = 2191833;
	uint8_t x374 = 34U;
	static uint32_t x375 = UINT32_MAX;
	static int64_t x376 = INT64_MAX;

	t89 = (x373&(x374<(x375%x376)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x377 = 7U;
	static int16_t x378 = INT16_MAX;
	uint32_t x379 = 1513865290U;
	uint32_t x380 = 279867U;
	static int32_t t90 = 294070565;

	t90 = (x377&(x378<(x379%x380)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -1;
	static int32_t x382 = -1;
	uint32_t x384 = UINT32_MAX;
	int32_t t91 = -136647611;

	t91 = (x381&(x382<(x383%x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = 59470;
	volatile uint64_t x386 = 140LLU;
	int8_t x387 = -1;
	int8_t x388 = INT8_MIN;
	int32_t t92 = -16;

	t92 = (x385&(x386<(x387%x388)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x389 = 42;
	int64_t x390 = INT64_MIN;
	int8_t x391 = -1;
	static int32_t t93 = -5;

	t93 = (x389&(x390<(x391%x392)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MIN;
	uint32_t x396 = 203993293U;
	volatile int32_t t94 = -24373;

	t94 = (x393&(x394<(x395%x396)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x398 = INT16_MIN;
	int32_t x399 = INT32_MIN;
	int16_t x400 = -1924;
	static uint32_t t95 = 16136U;

	t95 = (x397&(x398<(x399%x400)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x402 = 16186;
	uint32_t x403 = UINT32_MAX;
	uint8_t x404 = UINT8_MAX;

	t96 = (x401&(x402<(x403%x404)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = INT8_MIN;
	int32_t x407 = -1;
	int8_t x408 = INT8_MIN;
	static int32_t t97 = -779;

	t97 = (x405&(x406<(x407%x408)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x409 = 13651;
	volatile uint16_t x410 = UINT16_MAX;
	int32_t t98 = 33;

	t98 = (x409&(x410<(x411%x412)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x413 = -1;
	int16_t x414 = INT16_MIN;
	int32_t x415 = INT32_MAX;
	int32_t t99 = -10135331;

	t99 = (x413&(x414<(x415%x416)));

	if (t99 != 1) { NG(); } else { ; }
	
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

