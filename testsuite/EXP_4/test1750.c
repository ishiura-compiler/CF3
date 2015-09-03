#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x9 = INT64_MIN;
uint16_t x13 = UINT16_MAX;
volatile int32_t t2 = 873;
static uint8_t x25 = 19U;
int32_t x28 = INT32_MIN;
uint32_t x30 = UINT32_MAX;
volatile int32_t t7 = 71758;
uint32_t x55 = 29493U;
int32_t t9 = -1;
volatile uint8_t x63 = 1U;
static volatile int32_t t14 = -2410;
int8_t x88 = -1;
static int64_t x93 = INT64_MAX;
volatile int32_t x95 = INT32_MIN;
int16_t x101 = -1;
int8_t x106 = 14;
uint32_t x117 = UINT32_MAX;
int32_t t22 = 4013;
int8_t x122 = INT8_MIN;
volatile int32_t t23 = -23561;
uint64_t x133 = 217163LLU;
uint8_t x134 = 1U;
uint32_t x141 = 27U;
uint16_t x144 = UINT16_MAX;
uint64_t x153 = UINT64_MAX;
volatile int8_t x154 = -1;
int32_t t27 = -4871961;
int64_t x169 = 7LL;
int32_t t30 = -4559055;
int16_t x178 = -23;
static volatile int32_t t32 = 5;
int32_t x188 = INT32_MAX;
volatile uint32_t x190 = 49U;
int32_t x192 = INT32_MAX;
int32_t t34 = -745428922;
int64_t x193 = INT64_MAX;
volatile int64_t x194 = -1LL;
volatile int16_t x198 = -1;
volatile int8_t x208 = -1;
uint32_t x209 = 4225240U;
int32_t x210 = -1;
static uint64_t x216 = 928539723LLU;
volatile int16_t x217 = -2333;
static volatile int16_t x219 = INT16_MIN;
uint64_t x229 = UINT64_MAX;
uint16_t x231 = UINT16_MAX;
static uint64_t x241 = 1040421402LLU;
uint8_t x242 = UINT8_MAX;
int32_t t47 = -277074;
int64_t x292 = -39857409226873642LL;
int64_t x293 = INT64_MIN;
uint16_t x297 = 0U;
int32_t x298 = INT32_MAX;
volatile int32_t t56 = -45067;
uint32_t x305 = UINT32_MAX;
static int32_t t59 = -381;
int16_t x330 = INT16_MIN;
volatile int16_t x341 = INT16_MIN;
int32_t x344 = -96038536;
volatile int8_t x347 = -1;
static int32_t t66 = -2629;
int64_t x358 = -4053344890LL;
static int32_t t67 = 0;
uint64_t x363 = 2168319728899897LLU;
volatile uint8_t x364 = 35U;
volatile int32_t x372 = INT32_MAX;
uint8_t x374 = 71U;
uint64_t x378 = UINT64_MAX;
static volatile uint64_t x379 = 15695848560144LLU;
volatile uint16_t x380 = 13779U;
volatile uint64_t x383 = 8079288LLU;
static uint64_t x385 = 68963596771133600LLU;
volatile uint16_t x393 = UINT16_MAX;
uint16_t x394 = UINT16_MAX;
static int8_t x395 = -1;
int32_t t75 = -191486369;
int16_t x397 = 83;
int16_t x398 = INT16_MIN;
int16_t x402 = -1;
int16_t x403 = INT16_MIN;
int16_t x404 = -1;
int32_t x410 = INT32_MIN;
int8_t x411 = -42;
int32_t x419 = INT32_MIN;
volatile int16_t x429 = INT16_MIN;
volatile uint64_t x431 = 321701LLU;
volatile int32_t t82 = -897381;
static volatile int16_t x451 = 162;
static int16_t x462 = 6;
int8_t x469 = INT8_MAX;
int32_t x477 = 60467123;
volatile int32_t x480 = -1;
static volatile int32_t t89 = -50168374;
int16_t x490 = INT16_MIN;
uint8_t x494 = 0U;
volatile uint32_t x518 = 29158U;
volatile int16_t x520 = INT16_MIN;
int32_t t94 = -8648;
static volatile int32_t t95 = -37348;
static int32_t t96 = 956384;
int8_t x533 = INT8_MIN;
static int16_t x535 = -5255;
int8_t x536 = INT8_MAX;


void f0(void) {
	static int8_t x5 = INT8_MIN;
	uint16_t x6 = 21737U;
	uint16_t x7 = 4U;
	uint32_t x8 = 396U;
	int32_t t0 = 2;

	t0 = (x5==(x6%(x7&x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x10 = UINT32_MAX;
	static volatile int64_t x11 = -1541658936936LL;
	static volatile int16_t x12 = -1;
	volatile int32_t t1 = -389;

	t1 = (x9==(x10%(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x14 = 15874;
	int8_t x15 = INT8_MAX;
	int32_t x16 = INT32_MAX;

	t2 = (x13==(x14%(x15&x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MAX;
	uint64_t x18 = UINT64_MAX;
	volatile uint32_t x19 = 1804682748U;
	volatile uint8_t x20 = 115U;
	volatile int32_t t3 = -23460;

	t3 = (x17==(x18%(x19&x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x26 = UINT64_MAX;
	int64_t x27 = 1118167015989LL;
	int32_t t4 = -1;

	t4 = (x25==(x26%(x27&x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int16_t x31 = -4;
	uint8_t x32 = 13U;
	volatile int32_t t5 = 1205;

	t5 = (x29==(x30%(x31&x32)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = 109;
	uint32_t x34 = 893228U;
	uint8_t x35 = UINT8_MAX;
	uint8_t x36 = UINT8_MAX;
	volatile int32_t t6 = 569;

	t6 = (x33==(x34%(x35&x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x45 = 30;
	int16_t x46 = -1;
	static int64_t x47 = -1LL;
	static uint32_t x48 = 3516U;

	t7 = (x45==(x46%(x47&x48)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int16_t x50 = 2541;
	int64_t x51 = 5LL;
	int64_t x52 = 212970280630LL;
	int32_t t8 = 3753809;

	t8 = (x49==(x50%(x51&x52)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x53 = 0;
	int16_t x54 = INT16_MIN;
	int64_t x56 = -2LL;

	t9 = (x53==(x54%(x55&x56)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x57 = 15;
	static uint64_t x58 = 122570474122312LLU;
	int64_t x59 = -84145651LL;
	int64_t x60 = INT64_MAX;
	int32_t t10 = -32653;

	t10 = (x57==(x58%(x59&x60)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = 6;
	int16_t x62 = -1;
	int32_t x64 = -1;
	int32_t t11 = -7;

	t11 = (x61==(x62%(x63&x64)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x65 = 0U;
	static int64_t x66 = -1LL;
	volatile int64_t x67 = 1LL;
	volatile uint32_t x68 = UINT32_MAX;
	static volatile int32_t t12 = -2110;

	t12 = (x65==(x66%(x67&x68)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -59;
	volatile int16_t x74 = 43;
	int8_t x75 = INT8_MAX;
	int16_t x76 = -1;
	int32_t t13 = -52514934;

	t13 = (x73==(x74%(x75&x76)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	static uint8_t x82 = 1U;
	uint16_t x83 = UINT16_MAX;
	static uint16_t x84 = 4591U;

	t14 = (x81==(x82%(x83&x84)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -5;
	int16_t x86 = INT16_MAX;
	static uint64_t x87 = 482601176003LLU;
	int32_t t15 = -6954;

	t15 = (x85==(x86%(x87&x88)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x89 = -355174218;
	int16_t x90 = -1;
	static uint8_t x91 = UINT8_MAX;
	int16_t x92 = INT16_MAX;
	volatile int32_t t16 = 2237;

	t16 = (x89==(x90%(x91&x92)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x94 = INT64_MIN;
	int16_t x96 = -8604;
	volatile int32_t t17 = -3666792;

	t17 = (x93==(x94%(x95&x96)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x102 = -1;
	int64_t x103 = INT64_MAX;
	uint32_t x104 = 3U;
	int32_t t18 = -5;

	t18 = (x101==(x102%(x103&x104)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = 412U;
	uint16_t x107 = UINT16_MAX;
	uint8_t x108 = 12U;
	int32_t t19 = -1747378;

	t19 = (x105==(x106%(x107&x108)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x109 = 1459936794299LLU;
	uint64_t x110 = 4111223LLU;
	int16_t x111 = 13;
	uint8_t x112 = 4U;
	volatile int32_t t20 = -8891;

	t20 = (x109==(x110%(x111&x112)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 695710U;
	volatile int16_t x114 = INT16_MIN;
	uint32_t x115 = UINT32_MAX;
	static int64_t x116 = -11538LL;
	int32_t t21 = 14333324;

	t21 = (x113==(x114%(x115&x116)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x118 = INT32_MIN;
	int16_t x119 = -1;
	int16_t x120 = INT16_MIN;

	t22 = (x117==(x118%(x119&x120)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x121 = 6012170795963898174LLU;
	uint32_t x123 = 126U;
	uint32_t x124 = 3862U;

	t23 = (x121==(x122%(x123&x124)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MIN;
	static volatile int32_t t24 = -6;

	t24 = (x133==(x134%(x135&x136)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x142 = -205907LL;
	int64_t x143 = -1LL;
	static int32_t t25 = 918157;

	t25 = (x141==(x142%(x143&x144)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x149 = UINT8_MAX;
	uint16_t x150 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	static int32_t t26 = -13394;

	t26 = (x149==(x150%(x151&x152)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x155 = INT32_MIN;
	int8_t x156 = -17;

	t27 = (x153==(x154%(x155&x156)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	int16_t x163 = -17;
	static int32_t x164 = -2;
	volatile int32_t t28 = -814902189;

	t28 = (x161==(x162%(x163&x164)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x165 = 44;
	static int64_t x166 = -72LL;
	uint32_t x167 = 13732324U;
	int32_t x168 = INT32_MAX;
	static int32_t t29 = 169;

	t29 = (x165==(x166%(x167&x168)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x170 = -55;
	uint32_t x171 = 1400209808U;
	int8_t x172 = INT8_MAX;

	t30 = (x169==(x170%(x171&x172)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x177 = 92;
	uint32_t x179 = 146U;
	uint32_t x180 = UINT32_MAX;
	int32_t t31 = -179355;

	t31 = (x177==(x178%(x179&x180)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = 29U;
	int64_t x182 = -1LL;
	uint8_t x183 = UINT8_MAX;
	uint64_t x184 = 699014674618178128LLU;

	t32 = (x181==(x182%(x183&x184)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x185 = 957012045U;
	volatile int16_t x186 = -1;
	uint64_t x187 = 17885375205LLU;
	static int32_t t33 = -24;

	t33 = (x185==(x186%(x187&x188)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x189 = UINT16_MAX;
	int64_t x191 = -95295LL;

	t34 = (x189==(x190%(x191&x192)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x195 = 1428U;
	uint64_t x196 = 3939188LLU;
	volatile int32_t t35 = -1338713;

	t35 = (x193==(x194%(x195&x196)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x197 = INT16_MAX;
	volatile uint16_t x199 = 105U;
	volatile uint32_t x200 = 47972U;
	static volatile int32_t t36 = 207572194;

	t36 = (x197==(x198%(x199&x200)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	uint32_t x204 = UINT32_MAX;
	int32_t t37 = 103110;

	t37 = (x201==(x202%(x203&x204)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MIN;
	volatile int32_t x207 = -1;
	int32_t t38 = 766434;

	t38 = (x205==(x206%(x207&x208)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x211 = UINT8_MAX;
	static volatile int8_t x212 = INT8_MAX;
	volatile int32_t t39 = 6;

	t39 = (x209==(x210%(x211&x212)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x213 = -1;
	uint16_t x214 = 2594U;
	volatile int32_t x215 = 13;
	static volatile int32_t t40 = -710477665;

	t40 = (x213==(x214%(x215&x216)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x218 = INT8_MAX;
	int64_t x220 = 6323208386792LL;
	int32_t t41 = 0;

	t41 = (x217==(x218%(x219&x220)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x221 = -1;
	int8_t x222 = -1;
	volatile int16_t x223 = INT16_MIN;
	int32_t x224 = INT32_MAX;
	volatile int32_t t42 = -2;

	t42 = (x221==(x222%(x223&x224)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x230 = INT16_MAX;
	uint64_t x232 = 3617707725726LLU;
	int32_t t43 = 1052;

	t43 = (x229==(x230%(x231&x232)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x237 = -15;
	int32_t x238 = -1;
	int16_t x239 = -1;
	volatile uint32_t x240 = 52011U;
	int32_t t44 = -7;

	t44 = (x237==(x238%(x239&x240)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x243 = 195006614025LLU;
	int16_t x244 = -1;
	volatile int32_t t45 = -1;

	t45 = (x241==(x242%(x243&x244)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x253 = 93U;
	int32_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	int8_t x256 = -1;
	static int32_t t46 = -352784;

	t46 = (x253==(x254%(x255&x256)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x257 = -5029834LL;
	int32_t x258 = 176807664;
	int32_t x259 = -1;
	uint8_t x260 = 6U;

	t47 = (x257==(x258%(x259&x260)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x261 = UINT16_MAX;
	int8_t x262 = INT8_MAX;
	volatile int64_t x263 = -1LL;
	static uint64_t x264 = 554075292549181LLU;
	int32_t t48 = 0;

	t48 = (x261==(x262%(x263&x264)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x265 = 1303LLU;
	static int32_t x266 = INT32_MIN;
	static volatile int16_t x267 = INT16_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t49 = 163440377;

	t49 = (x265==(x266%(x267&x268)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = 5;
	volatile int64_t x271 = -1LL;
	int64_t x272 = INT64_MIN;
	int32_t t50 = -111;

	t50 = (x269==(x270%(x271&x272)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x273 = INT8_MIN;
	uint64_t x274 = 73117033655273910LLU;
	uint32_t x275 = 114U;
	int8_t x276 = INT8_MAX;
	int32_t t51 = -86971;

	t51 = (x273==(x274%(x275&x276)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x281 = INT16_MIN;
	volatile int32_t x282 = 20264;
	int16_t x283 = INT16_MIN;
	static int64_t x284 = INT64_MIN;
	static int32_t t52 = 3450;

	t52 = (x281==(x282%(x283&x284)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x289 = INT32_MIN;
	uint8_t x290 = 4U;
	static int64_t x291 = INT64_MIN;
	int32_t t53 = -1553;

	t53 = (x289==(x290%(x291&x292)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x294 = 1951U;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = 6;
	volatile int32_t t54 = 9;

	t54 = (x293==(x294%(x295&x296)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x299 = INT64_MAX;
	int64_t x300 = 1527457367125783LL;
	volatile int32_t t55 = 512858;

	t55 = (x297==(x298%(x299&x300)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x301 = -1;
	static uint64_t x302 = 171284797696LLU;
	volatile uint16_t x303 = 4313U;
	uint16_t x304 = 24651U;

	t56 = (x301==(x302%(x303&x304)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x306 = 2U;
	volatile int32_t x307 = -1926504;
	static int64_t x308 = INT64_MAX;
	int32_t t57 = -471;

	t57 = (x305==(x306%(x307&x308)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x313 = INT8_MAX;
	int16_t x314 = -1;
	static volatile int64_t x315 = -629128899992LL;
	uint16_t x316 = 24U;
	volatile int32_t t58 = 3782;

	t58 = (x313==(x314%(x315&x316)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x317 = 31872U;
	int8_t x318 = 13;
	static int16_t x319 = -902;
	static volatile int32_t x320 = -1;

	t59 = (x317==(x318%(x319&x320)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x321 = UINT32_MAX;
	int16_t x322 = INT16_MIN;
	int64_t x323 = INT64_MIN;
	int32_t x324 = -1;
	volatile int32_t t60 = 12284565;

	t60 = (x321==(x322%(x323&x324)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = 224;
	int16_t x326 = INT16_MIN;
	int16_t x327 = -1;
	int64_t x328 = -1LL;
	volatile int32_t t61 = 1;

	t61 = (x325==(x326%(x327&x328)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x329 = UINT16_MAX;
	static int32_t x331 = -18;
	int16_t x332 = INT16_MAX;
	volatile int32_t t62 = 2728378;

	t62 = (x329==(x330%(x331&x332)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x333 = 202907180455LLU;
	int16_t x334 = 8;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	int32_t t63 = -111533;

	t63 = (x333==(x334%(x335&x336)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x342 = -36;
	uint64_t x343 = UINT64_MAX;
	static volatile int32_t t64 = -577484;

	t64 = (x341==(x342%(x343&x344)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x345 = -58;
	int8_t x346 = -1;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t65 = -111023;

	t65 = (x345==(x346%(x347&x348)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x353 = INT8_MAX;
	int32_t x354 = INT32_MIN;
	uint8_t x355 = 20U;
	int8_t x356 = -1;

	t66 = (x353==(x354%(x355&x356)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x357 = UINT16_MAX;
	int64_t x359 = INT64_MIN;
	int32_t x360 = INT32_MIN;

	t67 = (x357==(x358%(x359&x360)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x361 = 1479643696611LLU;
	static int8_t x362 = INT8_MIN;
	int32_t t68 = 1;

	t68 = (x361==(x362%(x363&x364)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x369 = INT64_MAX;
	uint64_t x370 = 114094312LLU;
	static int8_t x371 = INT8_MAX;
	static int32_t t69 = -1;

	t69 = (x369==(x370%(x371&x372)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x373 = INT32_MAX;
	int8_t x375 = 12;
	int32_t x376 = 8157;
	volatile int32_t t70 = 28;

	t70 = (x373==(x374%(x375&x376)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x377 = INT32_MIN;
	int32_t t71 = -101681;

	t71 = (x377==(x378%(x379&x380)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x381 = -1459;
	uint32_t x382 = 7U;
	static int64_t x384 = -1LL;
	int32_t t72 = 1;

	t72 = (x381==(x382%(x383&x384)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x386 = INT64_MAX;
	int16_t x387 = -1;
	int32_t x388 = -1;
	int32_t t73 = -38395;

	t73 = (x385==(x386%(x387&x388)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x389 = 2U;
	int8_t x390 = INT8_MAX;
	static int32_t x391 = 758965816;
	volatile uint64_t x392 = 979620LLU;
	int32_t t74 = -1276682;

	t74 = (x389==(x390%(x391&x392)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x396 = 1391724894996065129LLU;

	t75 = (x393==(x394%(x395&x396)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x399 = UINT64_MAX;
	int16_t x400 = INT16_MAX;
	volatile int32_t t76 = 444;

	t76 = (x397==(x398%(x399&x400)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x401 = -1;
	int32_t t77 = -2504;

	t77 = (x401==(x402%(x403&x404)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x405 = -1;
	int8_t x406 = -19;
	uint32_t x407 = 3372947U;
	volatile uint8_t x408 = UINT8_MAX;
	volatile int32_t t78 = 3931;

	t78 = (x405==(x406%(x407&x408)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x409 = INT16_MAX;
	int16_t x412 = 60;
	static volatile int32_t t79 = -29131273;

	t79 = (x409==(x410%(x411&x412)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x413 = 27U;
	int32_t x414 = -1;
	static int8_t x415 = INT8_MAX;
	volatile int8_t x416 = -1;
	static volatile int32_t t80 = 10661;

	t80 = (x413==(x414%(x415&x416)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x417 = INT32_MIN;
	static int64_t x418 = -1LL;
	static uint64_t x420 = UINT64_MAX;
	int32_t t81 = 3909150;

	t81 = (x417==(x418%(x419&x420)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x430 = INT32_MIN;
	int16_t x432 = INT16_MAX;

	t82 = (x429==(x430%(x431&x432)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x449 = 36546U;
	volatile int32_t x450 = 2888;
	int16_t x452 = -119;
	int32_t t83 = 29;

	t83 = (x449==(x450%(x451&x452)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x453 = INT16_MAX;
	int64_t x454 = -132632LL;
	int32_t x455 = -14694122;
	volatile int8_t x456 = INT8_MIN;
	static int32_t t84 = -227611240;

	t84 = (x453==(x454%(x455&x456)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x457 = 30008U;
	int32_t x458 = -54;
	static volatile int32_t x459 = -1;
	int16_t x460 = 17;
	volatile int32_t t85 = -814589779;

	t85 = (x457==(x458%(x459&x460)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x461 = -1;
	int32_t x463 = INT32_MIN;
	static int8_t x464 = INT8_MIN;
	volatile int32_t t86 = -12929;

	t86 = (x461==(x462%(x463&x464)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x465 = INT16_MIN;
	int16_t x466 = -1;
	uint64_t x467 = UINT64_MAX;
	int32_t x468 = 21966788;
	static int32_t t87 = -22202493;

	t87 = (x465==(x466%(x467&x468)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x470 = 0U;
	static uint8_t x471 = UINT8_MAX;
	volatile int16_t x472 = INT16_MAX;
	int32_t t88 = -32056;

	t88 = (x469==(x470%(x471&x472)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x478 = 174U;
	static int64_t x479 = -1LL;

	t89 = (x477==(x478%(x479&x480)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x481 = INT64_MIN;
	static volatile int32_t x482 = INT32_MAX;
	int16_t x483 = INT16_MIN;
	volatile int64_t x484 = 131015LL;
	volatile int32_t t90 = 412023138;

	t90 = (x481==(x482%(x483&x484)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x485 = -1LL;
	int16_t x486 = 187;
	int64_t x487 = 24260631328LL;
	volatile int8_t x488 = -1;
	volatile int32_t t91 = -1352629;

	t91 = (x485==(x486%(x487&x488)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x489 = -1;
	static uint8_t x491 = 3U;
	volatile int8_t x492 = INT8_MAX;
	volatile int32_t t92 = -112827834;

	t92 = (x489==(x490%(x491&x492)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x493 = 30U;
	volatile uint64_t x495 = 7101465804613013355LLU;
	volatile uint32_t x496 = 1397U;
	static int32_t t93 = -222;

	t93 = (x493==(x494%(x495&x496)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x517 = 1061074312U;
	uint32_t x519 = 378652777U;

	t94 = (x517==(x518%(x519&x520)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x521 = 0U;
	int8_t x522 = INT8_MAX;
	int16_t x523 = INT16_MIN;
	volatile int32_t x524 = INT32_MIN;

	t95 = (x521==(x522%(x523&x524)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x525 = 5391334908LLU;
	int32_t x526 = -1;
	uint16_t x527 = 1U;
	int8_t x528 = INT8_MAX;

	t96 = (x525==(x526%(x527&x528)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x534 = INT16_MIN;
	volatile int32_t t97 = -940608250;

	t97 = (x533==(x534%(x535&x536)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x537 = INT8_MIN;
	uint16_t x538 = 921U;
	uint64_t x539 = 211503096198LLU;
	int64_t x540 = -1LL;
	static volatile int32_t t98 = 499778825;

	t98 = (x537==(x538%(x539&x540)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x545 = -6;
	int32_t x546 = INT32_MIN;
	uint64_t x547 = UINT64_MAX;
	int32_t x548 = -2;
	static int32_t t99 = -1276;

	t99 = (x545==(x546%(x547&x548)));

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

