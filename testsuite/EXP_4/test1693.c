#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
static uint32_t x4 = 894U;
volatile int32_t x7 = INT32_MAX;
volatile uint64_t t2 = 347486798615LLU;
int32_t x21 = 375540;
volatile int8_t x22 = -1;
volatile uint32_t t5 = 1736U;
volatile int16_t x33 = 3713;
uint32_t x35 = 307U;
volatile int64_t x42 = INT64_MIN;
uint32_t x43 = UINT32_MAX;
int8_t x52 = -1;
volatile int32_t t11 = -8116001;
int8_t x57 = -1;
int64_t x60 = INT64_MIN;
volatile int64_t t15 = 98LL;
static int32_t x72 = INT32_MIN;
uint64_t t17 = 2632093LLU;
int64_t x77 = 244LL;
static uint32_t x80 = 67514265U;
uint32_t x87 = 1467939010U;
static uint32_t t19 = 307168U;
volatile int16_t x100 = 85;
uint8_t x108 = 2U;
int32_t x109 = INT32_MIN;
int16_t x112 = -1;
volatile int64_t t23 = 16LL;
static volatile uint32_t t24 = 54933U;
uint64_t x137 = 1007822148LLU;
int32_t x142 = INT32_MIN;
static uint32_t x143 = 0U;
uint64_t x146 = UINT64_MAX;
volatile uint64_t t30 = 1232940926LLU;
static uint8_t x150 = 2U;
int16_t x157 = INT16_MIN;
int8_t x158 = INT8_MIN;
static uint64_t x162 = 854207772LLU;
uint16_t x165 = UINT16_MAX;
volatile int8_t x166 = INT8_MIN;
uint16_t x168 = 27679U;
uint16_t x186 = 22013U;
int8_t x205 = -1;
static int64_t t37 = 26LL;
uint8_t x211 = 3U;
int8_t x214 = INT8_MIN;
uint64_t x221 = 13716LLU;
uint32_t x226 = UINT32_MAX;
static int16_t x240 = INT16_MIN;
static volatile uint32_t x246 = 98217U;
int8_t x258 = -1;
static int32_t x260 = -1;
volatile int64_t t45 = -1407606874LL;
volatile int32_t x261 = -1;
volatile uint32_t x266 = 1766276125U;
uint64_t t48 = 10887LLU;
static int8_t x273 = 12;
int16_t x281 = INT16_MAX;
static int8_t x298 = INT8_MIN;
static uint16_t x301 = 10U;
int32_t t54 = 6530;
int16_t x312 = 0;
uint64_t x320 = 1135516187376342163LLU;
uint32_t x322 = UINT32_MAX;
int8_t x328 = -1;
volatile int16_t x335 = INT16_MAX;
static uint16_t x340 = UINT16_MAX;
int64_t t61 = 13698014210316LL;
int8_t x349 = -1;
int32_t x350 = INT32_MAX;
static int32_t x351 = INT32_MIN;
int64_t x360 = INT64_MIN;
volatile uint64_t t66 = 267483751LLU;
volatile int64_t x367 = -33502365LL;
uint64_t x380 = UINT64_MAX;
int8_t x382 = -12;
uint64_t t72 = 417043LLU;
static int32_t x392 = -936506993;
static volatile uint32_t t73 = 19U;
uint32_t x399 = UINT32_MAX;
int16_t x402 = INT16_MAX;
uint64_t x406 = 1740777364080LLU;
int16_t x410 = 4;
int64_t x413 = -199965LL;
int8_t x415 = -5;
static int64_t t79 = -20246LL;
volatile uint32_t x425 = UINT32_MAX;
volatile uint8_t x427 = UINT8_MAX;
static uint8_t x429 = UINT8_MAX;
volatile uint32_t x432 = UINT32_MAX;
volatile uint32_t x448 = 90317U;
int32_t x451 = INT32_MAX;
int16_t x465 = INT16_MIN;
static int8_t x469 = -1;
int8_t x470 = INT8_MIN;
int64_t t87 = -12860881875698LL;
uint64_t x475 = UINT64_MAX;
volatile uint64_t t88 = 54LLU;
int16_t x480 = INT16_MIN;
uint8_t x482 = 0U;
uint8_t x486 = 13U;
static volatile int32_t x490 = INT32_MAX;
volatile int32_t x492 = -1;
uint64_t x497 = 6652474536067610LLU;
int64_t x500 = 0LL;
volatile int32_t t97 = -1;
static uint64_t x522 = UINT64_MAX;
static uint64_t x525 = UINT64_MAX;
uint64_t x527 = UINT64_MAX;


void f0(void) {
	static int64_t x1 = -1LL;
	uint16_t x2 = 954U;
	volatile int64_t t0 = 410885142LL;

	t0 = (x1*(x2+(x3&x4)));

	if (t0 != -1848LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 1;
	static int64_t x6 = 31347192064373511LL;
	uint16_t x8 = UINT16_MAX;
	volatile int64_t t1 = -9756LL;

	t1 = (x5*(x6+(x7&x8)));

	if (t1 != 31347192064439046LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MAX;
	uint16_t x10 = 796U;
	uint64_t x11 = 4LLU;
	int32_t x12 = INT32_MIN;

	t2 = (x9*(x10+(x11&x12)));

	if (t2 != 1709396983012LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint64_t x14 = 34644995162094LLU;
	volatile uint16_t x15 = UINT16_MAX;
	uint16_t x16 = 3551U;
	volatile uint64_t t3 = 475339LLU;

	t3 = (x13*(x14+(x15&x16)));

	if (t3 != 18446709428714385971LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 350U;
	static int8_t x18 = 0;
	int16_t x19 = INT16_MIN;
	int16_t x20 = 0;
	volatile int32_t t4 = 732;

	t4 = (x17*(x18+(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x23 = -29;
	uint32_t x24 = 9705528U;

	t5 = (x21*(x22+(x23&x24)));

	if (t5 != 2672329612U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 1;
	volatile int16_t x26 = 822;
	uint8_t x27 = 8U;
	volatile int32_t x28 = INT32_MAX;
	int32_t t6 = 233673454;

	t6 = (x25*(x26+(x27&x28)));

	if (t6 != 830) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 8U;
	uint32_t x30 = 32U;
	uint32_t x31 = 1496306U;
	uint64_t x32 = 307LLU;
	static uint64_t t7 = 80981668903043LLU;

	t7 = (x29*(x30+(x31&x32)));

	if (t7 != 656LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = INT32_MIN;
	static volatile int8_t x36 = -1;
	uint32_t t8 = 11152995U;

	t8 = (x33*(x34+(x35&x36)));

	if (t8 != 2148623539U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x37 = 86652303847LLU;
	int32_t x38 = -1;
	static int64_t x39 = 2986LL;
	int8_t x40 = -1;
	volatile uint64_t t9 = 3682355020LLU;

	t9 = (x37*(x38+(x39&x40)));

	if (t9 != 258657126983295LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = 1U;
	volatile int16_t x44 = INT16_MIN;
	int64_t t10 = -1460491493037216171LL;

	t10 = (x41*(x42+(x43&x44)));

	if (t10 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 1U;
	int32_t x50 = INT32_MAX;
	volatile int32_t x51 = -1690798;

	t11 = (x49*(x50+(x51&x52)));

	if (t11 != 2145792849) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x53 = 11U;
	uint64_t x54 = UINT64_MAX;
	static int64_t x55 = INT64_MIN;
	static int32_t x56 = INT32_MIN;
	static volatile uint64_t t12 = 383305378368LLU;

	t12 = (x53*(x54+(x55&x56)));

	if (t12 != 9223372036854775797LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = 81829020311538536LLU;
	uint64_t x59 = 15860191LLU;
	uint64_t t13 = 24366LLU;

	t13 = (x57*(x58+(x59&x60)));

	if (t13 != 18364915053398013080LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x61 = INT8_MAX;
	uint16_t x62 = 66U;
	int8_t x63 = INT8_MAX;
	int32_t x64 = 187394;
	volatile int32_t t14 = -9674032;

	t14 = (x61*(x62+(x63&x64)));

	if (t14 != 8636) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = INT16_MIN;
	static volatile int64_t x66 = -47828398583LL;
	int16_t x67 = INT16_MAX;
	volatile int32_t x68 = INT32_MIN;

	t15 = (x65*(x66+(x67&x68)));

	if (t15 != 1567240964767744LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x69 = 290U;
	int64_t x70 = -20980962553044LL;
	static uint32_t x71 = 315979U;
	volatile int64_t t16 = 3971929563729591LL;

	t16 = (x69*(x70+(x71&x72)));

	if (t16 != -6084479140382760LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x73 = -1719808397946LL;
	static volatile uint64_t x74 = UINT64_MAX;
	volatile int8_t x75 = INT8_MAX;
	volatile int8_t x76 = INT8_MIN;

	t17 = (x73*(x74+(x75&x76)));

	if (t17 != 1719808397946LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x78 = 335;
	int32_t x79 = -6;
	volatile int64_t t18 = -1038130LL;

	t18 = (x77*(x78+(x79&x80)));

	if (t18 != 16473562156LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x85 = INT32_MIN;
	volatile int8_t x86 = -1;
	uint8_t x88 = 31U;

	t19 = (x85*(x86+(x87&x88)));

	if (t19 != 2147483648U) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	static volatile int8_t x90 = INT8_MIN;
	uint8_t x91 = 1U;
	uint32_t x92 = 7383U;
	volatile uint32_t t20 = 13U;

	t20 = (x89*(x90+(x91&x92)));

	if (t20 != 127U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	static int16_t x98 = INT16_MAX;
	int64_t x99 = INT64_MAX;
	int64_t t21 = -141340186357500LL;

	t21 = (x97*(x98+(x99&x100)));

	if (t21 != 70549132771244LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	int64_t x107 = -1LL;
	volatile int64_t t22 = 53983657485603LL;

	t22 = (x105*(x106+(x107&x108)));

	if (t22 != -4161282LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = -1LL;
	uint8_t x111 = 1U;

	t23 = (x109*(x110+(x111&x112)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = UINT32_MAX;
	uint8_t x118 = 0U;
	volatile uint8_t x119 = UINT8_MAX;
	int16_t x120 = -1;

	t24 = (x117*(x118+(x119&x120)));

	if (t24 != 4294967041U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x121 = 1;
	static volatile uint32_t x122 = 387477235U;
	uint64_t x123 = UINT64_MAX;
	uint8_t x124 = 49U;
	uint64_t t25 = 146995014LLU;

	t25 = (x121*(x122+(x123&x124)));

	if (t25 != 387477284LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = INT32_MIN;
	int32_t x127 = INT32_MAX;
	int16_t x128 = INT16_MIN;
	int32_t t26 = 31389092;

	t26 = (x125*(x126+(x127&x128)));

	if (t26 != 4194304) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	static uint64_t x134 = 491695620739LLU;
	volatile int16_t x135 = INT16_MIN;
	int8_t x136 = -1;
	volatile uint64_t t27 = 1LLU;

	t27 = (x133*(x134+(x135&x136)));

	if (t27 != 14002921313685995520LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x138 = UINT32_MAX;
	static int8_t x139 = INT8_MIN;
	static int16_t x140 = INT16_MIN;
	volatile uint64_t t28 = 1075618LLU;

	t28 = (x137*(x138+(x139&x140)));

	if (t28 != 4328530140520503996LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x144 = -1;
	uint32_t t29 = 607625383U;

	t29 = (x141*(x142+(x143&x144)));

	if (t29 != 2147483648U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x145 = -1;
	volatile uint8_t x147 = 108U;
	volatile int32_t x148 = INT32_MIN;

	t30 = (x145*(x146+(x147&x148)));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = INT16_MIN;
	uint32_t x151 = 86U;
	uint16_t x152 = UINT16_MAX;
	uint32_t t31 = 54U;

	t31 = (x149*(x150+(x151&x152)));

	if (t31 != 4292083712U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x159 = 3;
	uint64_t x160 = 116096LLU;
	volatile uint64_t t32 = 3LLU;

	t32 = (x157*(x158+(x159&x160)));

	if (t32 != 4194304LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x161 = UINT32_MAX;
	uint32_t x163 = 908U;
	uint8_t x164 = 117U;
	static volatile uint64_t t33 = 421921LLU;

	t33 = (x161*(x162+(x163&x164)));

	if (t33 != 3668794461054685920LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x167 = 6;
	volatile int32_t t34 = -7009;

	t34 = (x165*(x166+(x167&x168)));

	if (t34 != -7995270) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x169 = INT8_MAX;
	volatile uint32_t x170 = UINT32_MAX;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = 237932U;
	static uint64_t t35 = 33398364160LLU;

	t35 = (x169*(x170+(x171&x172)));

	if (t35 != 545491063829LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x185 = INT64_MIN;
	int32_t x187 = 207752433;
	uint64_t x188 = 0LLU;
	volatile uint64_t t36 = 1398830675LLU;

	t36 = (x185*(x186+(x187&x188)));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x206 = INT64_MIN;
	static int16_t x207 = INT16_MIN;
	static int64_t x208 = 143473LL;

	t37 = (x205*(x206+(x207&x208)));

	if (t37 != 9223372036854644736LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x209 = UINT16_MAX;
	volatile uint8_t x210 = 3U;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t38 = 11;

	t38 = (x209*(x210+(x211&x212)));

	if (t38 != 196605) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x213 = INT8_MAX;
	int16_t x215 = -1;
	int8_t x216 = INT8_MIN;
	static int32_t t39 = 1611;

	t39 = (x213*(x214+(x215&x216)));

	if (t39 != -32512) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x222 = UINT64_MAX;
	volatile int8_t x223 = INT8_MIN;
	int8_t x224 = 55;
	uint64_t t40 = 158115483606880LLU;

	t40 = (x221*(x222+(x223&x224)));

	if (t40 != 18446744073709537900LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x225 = INT8_MIN;
	static int32_t x227 = INT32_MIN;
	static volatile int16_t x228 = -26;
	volatile uint32_t t41 = 57136U;

	t41 = (x225*(x226+(x227&x228)));

	if (t41 != 128U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x237 = UINT64_MAX;
	int32_t x238 = -1;
	uint16_t x239 = 329U;
	uint64_t t42 = 121576LLU;

	t42 = (x237*(x238+(x239&x240)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x241 = UINT32_MAX;
	uint32_t x242 = 67761939U;
	volatile int16_t x243 = INT16_MIN;
	static uint64_t x244 = 3693629568048760LLU;
	static uint64_t t43 = 199086514791766847LLU;

	t43 = (x241*(x242+(x243&x244)));

	if (t43 != 3049596366232783085LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = 3;
	static uint16_t x247 = 96U;
	int8_t x248 = 0;
	static volatile uint32_t t44 = 36118U;

	t44 = (x245*(x246+(x247&x248)));

	if (t44 != 294651U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x257 = -1LL;
	uint16_t x259 = 13U;

	t45 = (x257*(x258+(x259&x260)));

	if (t45 != -12LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x262 = -2;
	uint32_t x263 = 1646U;
	int64_t x264 = -1LL;
	static volatile int64_t t46 = -2418443906523245LL;

	t46 = (x261*(x262+(x263&x264)));

	if (t46 != -1644LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x265 = 12547;
	uint8_t x267 = 7U;
	int32_t x268 = INT32_MIN;
	volatile uint32_t t47 = 3183U;

	t47 = (x265*(x266+(x267&x268)));

	if (t47 != 3730260311U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x269 = UINT64_MAX;
	uint32_t x270 = UINT32_MAX;
	int64_t x271 = -1LL;
	int8_t x272 = INT8_MIN;

	t48 = (x269*(x270+(x271&x272)));

	if (t48 != 18446744069414584449LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x274 = -4168128197LL;
	int64_t x275 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t49 = 3613LLU;

	t49 = (x273*(x274+(x275&x276)));

	if (t49 != 18446744023692013252LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = 216U;
	int32_t x284 = -1;
	volatile int32_t t50 = -1;

	t50 = (x281*(x282+(x283&x284)));

	if (t50 != 15433257) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = -53;
	uint64_t x287 = 90472738007522LLU;
	uint8_t x288 = 39U;
	volatile uint64_t t51 = 1LLU;

	t51 = (x285*(x286+(x287&x288)));

	if (t51 != 2432LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x297 = INT32_MIN;
	static int8_t x299 = 0;
	volatile uint64_t x300 = 3LLU;
	volatile uint64_t t52 = 8463852894207680LLU;

	t52 = (x297*(x298+(x299&x300)));

	if (t52 != 274877906944LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x302 = INT64_MAX;
	static uint64_t x303 = 452LLU;
	uint32_t x304 = 354U;
	static uint64_t t53 = 269LLU;

	t53 = (x301*(x302+(x303&x304)));

	if (t53 != 3190LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x305 = UINT8_MAX;
	volatile uint16_t x306 = 117U;
	volatile uint16_t x307 = UINT16_MAX;
	int16_t x308 = -1;

	t54 = (x305*(x306+(x307&x308)));

	if (t54 != 16741260) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x309 = UINT16_MAX;
	uint32_t x310 = UINT32_MAX;
	int8_t x311 = -1;
	uint32_t t55 = 1249968689U;

	t55 = (x309*(x310+(x311&x312)));

	if (t55 != 4294901761U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = INT32_MAX;
	int16_t x314 = -7258;
	int64_t x315 = INT64_MIN;
	static int16_t x316 = 1;
	int64_t t56 = -62551LL;

	t56 = (x313*(x314+(x315&x316)));

	if (t56 != -15586436309926LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x317 = INT64_MAX;
	int8_t x318 = 1;
	int64_t x319 = -1LL;
	volatile uint64_t t57 = 4719LLU;

	t57 = (x317*(x318+(x319&x320)));

	if (t57 != 17311227886333209452LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x321 = 27009801613096LLU;
	volatile int64_t x323 = 1933747828LL;
	uint8_t x324 = UINT8_MAX;
	volatile uint64_t t58 = 2810532517633528LLU;

	t58 = (x321*(x322+(x323&x324)));

	if (t58 != 13090970336890253048LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x325 = -15731;
	static uint64_t x326 = 16367LLU;
	uint32_t x327 = 8461U;
	uint64_t t59 = 73683360793053LLU;

	t59 = (x325*(x326+(x327&x328)));

	if (t59 != 18446744073318982348LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x333 = -1;
	static volatile int16_t x334 = 9836;
	volatile int64_t x336 = 2523819754330680LL;
	volatile int64_t t60 = 1040113LL;

	t60 = (x333*(x334+(x335&x336)));

	if (t60 != -16548LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x337 = 508523306LL;
	int8_t x338 = 3;
	uint8_t x339 = 40U;

	t61 = (x337*(x338+(x339&x340)));

	if (t61 != 21866502158LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x341 = UINT8_MAX;
	static uint16_t x342 = UINT16_MAX;
	static uint8_t x343 = 0U;
	static uint32_t x344 = 263214551U;
	volatile uint32_t t62 = 29488631U;

	t62 = (x341*(x342+(x343&x344)));

	if (t62 != 16711425U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x345 = 4;
	int16_t x346 = -1;
	volatile uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	int32_t t63 = -54;

	t63 = (x345*(x346+(x347&x348)));

	if (t63 != 508) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x352 = INT64_MAX;
	volatile int64_t t64 = -973LL;

	t64 = (x349*(x350+(x351&x352)));

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x353 = -1;
	int8_t x354 = -1;
	uint32_t x355 = 1219U;
	static uint16_t x356 = 42U;
	uint32_t t65 = UINT32_MAX;

	t65 = (x353*(x354+(x355&x356)));

	if (t65 != UINT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x357 = -1;
	int16_t x358 = -10654;
	uint64_t x359 = 70189LLU;

	t66 = (x357*(x358+(x359&x360)));

	if (t66 != 10654LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x361 = -1;
	uint16_t x362 = UINT16_MAX;
	uint8_t x363 = UINT8_MAX;
	int64_t x364 = 4350120418136120154LL;
	int64_t t67 = -50LL;

	t67 = (x361*(x362+(x363&x364)));

	if (t67 != -65625LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x365 = -1;
	int32_t x366 = INT32_MIN;
	static int16_t x368 = INT16_MAX;
	int64_t t68 = -3170527732954187466LL;

	t68 = (x365*(x366+(x367&x368)));

	if (t68 != 2147464349LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x369 = 24U;
	static int16_t x370 = INT16_MAX;
	static uint64_t x371 = 39253030986LLU;
	volatile int64_t x372 = -1LL;
	uint64_t t69 = 936364425785761376LLU;

	t69 = (x369*(x370+(x371&x372)));

	if (t69 != 942073530072LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x377 = 42U;
	static uint16_t x378 = 0U;
	volatile int64_t x379 = -130874LL;
	volatile uint64_t t70 = 4032707070993790LLU;

	t70 = (x377*(x378+(x379&x380)));

	if (t70 != 18446744073704054908LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x381 = INT64_MAX;
	uint64_t x383 = 40684LLU;
	static int32_t x384 = -1;
	volatile uint64_t t71 = 63009421LLU;

	t71 = (x381*(x382+(x383&x384)));

	if (t71 != 18446744073709510944LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x385 = -1;
	static uint64_t x386 = UINT64_MAX;
	static int64_t x387 = INT64_MAX;
	uint32_t x388 = 956172598U;

	t72 = (x385*(x386+(x387&x388)));

	if (t72 != 18446744072753379019LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x389 = -1;
	uint32_t x390 = UINT32_MAX;
	static uint32_t x391 = UINT32_MAX;

	t73 = (x389*(x390+(x391&x392)));

	if (t73 != 936506994U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x393 = 358345678359907239LLU;
	static int8_t x394 = 56;
	uint16_t x395 = 1477U;
	int8_t x396 = INT8_MIN;
	uint64_t t74 = 145LLU;

	t74 = (x393*(x394+(x395&x396)));

	if (t74 != 8109239055036752648LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x397 = INT8_MIN;
	volatile uint64_t x398 = 1066714046482196448LLU;
	int16_t x400 = -23;
	volatile uint64_t t75 = 59LLU;

	t75 = (x397*(x398+(x399&x400)));

	if (t75 != 11034554090199456640LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x401 = INT32_MAX;
	static volatile uint16_t x403 = UINT16_MAX;
	int64_t x404 = -1LL;
	int64_t t76 = -28429550922103288LL;

	t76 = (x401*(x402+(x403&x404)));

	if (t76 != 211101937467394LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x405 = -1;
	uint8_t x407 = 8U;
	volatile int16_t x408 = -1;
	uint64_t t77 = 1879531930LLU;

	t77 = (x405*(x406+(x407&x408)));

	if (t77 != 18446742332932187528LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x409 = INT32_MAX;
	int16_t x411 = 4027;
	int64_t x412 = INT64_MIN;
	static volatile int64_t t78 = -1LL;

	t78 = (x409*(x410+(x411&x412)));

	if (t78 != 8589934588LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x414 = UINT16_MAX;
	uint8_t x416 = UINT8_MAX;

	t79 = (x413*(x414+(x415&x416)));

	if (t79 != -13154897490LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x426 = 6883090933607159649LLU;
	int16_t x428 = INT16_MAX;
	volatile uint64_t t80 = 98LLU;

	t80 = (x425*(x426+(x427&x428)));

	if (t80 != 493198737924040608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x430 = INT16_MIN;
	int64_t x431 = -1LL;
	int64_t t81 = 3510LL;

	t81 = (x429*(x430+(x431&x432)));

	if (t81 != 1095208304385LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x433 = 85580914LL;
	static int32_t x434 = -100574;
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = INT64_MIN;
	int64_t t82 = -131LL;

	t82 = (x433*(x434+(x435&x436)));

	if (t82 != -8607214844636LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x437 = -5;
	static int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	uint64_t x440 = 70083361854105LLU;
	volatile uint64_t t83 = 3477670817492289550LLU;

	t83 = (x437*(x438+(x439&x440)));

	if (t83 != 163715LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x445 = UINT64_MAX;
	int16_t x446 = -1;
	volatile uint32_t x447 = UINT32_MAX;
	static uint64_t t84 = 1LLU;

	t84 = (x445*(x446+(x447&x448)));

	if (t84 != 18446744073709461300LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x449 = UINT16_MAX;
	volatile int16_t x450 = -264;
	uint8_t x452 = 7U;
	static volatile int32_t t85 = -24959281;

	t85 = (x449*(x450+(x451&x452)));

	if (t85 != -16842495) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x466 = -1;
	uint16_t x467 = UINT16_MAX;
	int32_t x468 = INT32_MIN;
	int32_t t86 = -112;

	t86 = (x465*(x466+(x467&x468)));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x471 = UINT16_MAX;
	static int64_t x472 = -1LL;

	t87 = (x469*(x470+(x471&x472)));

	if (t87 != -65407LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x473 = -1987474LL;
	static uint64_t x474 = 1893LLU;
	static int16_t x476 = INT16_MIN;

	t88 = (x473*(x474+(x475&x476)));

	if (t88 != 61363259750LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x477 = -1;
	int8_t x478 = INT8_MIN;
	int8_t x479 = INT8_MAX;
	volatile int32_t t89 = 16;

	t89 = (x477*(x478+(x479&x480)));

	if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x481 = INT64_MAX;
	volatile uint8_t x483 = 1U;
	int64_t x484 = INT64_MAX;
	int64_t t90 = INT64_MAX;

	t90 = (x481*(x482+(x483&x484)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x485 = UINT8_MAX;
	int8_t x487 = INT8_MIN;
	uint8_t x488 = 25U;
	int32_t t91 = -1;

	t91 = (x485*(x486+(x487&x488)));

	if (t91 != 3315) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x489 = INT16_MIN;
	uint32_t x491 = 2675093U;
	volatile uint32_t t92 = 0U;

	t92 = (x489*(x490+(x491&x492)));

	if (t92 != 2536898560U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x493 = UINT8_MAX;
	int16_t x494 = 223;
	uint32_t x495 = UINT32_MAX;
	int32_t x496 = INT32_MIN;
	volatile uint32_t t93 = 382478565U;

	t93 = (x493*(x494+(x495&x496)));

	if (t93 != 2147540513U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x498 = INT32_MIN;
	uint32_t x499 = UINT32_MAX;
	volatile uint64_t t94 = 29670LLU;

	t94 = (x497*(x498+(x499&x500)));

	if (t94 != 662942783551569920LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x505 = INT8_MIN;
	static uint64_t x506 = UINT64_MAX;
	volatile int32_t x507 = -1;
	int8_t x508 = 0;
	volatile uint64_t t95 = 3107844832LLU;

	t95 = (x505*(x506+(x507&x508)));

	if (t95 != 128LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x509 = -1;
	int8_t x510 = -1;
	static uint64_t x511 = 240699LLU;
	static uint16_t x512 = 16U;
	volatile uint64_t t96 = 564813886918950973LLU;

	t96 = (x509*(x510+(x511&x512)));

	if (t96 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x517 = -39;
	int16_t x518 = 0;
	int8_t x519 = INT8_MAX;
	int32_t x520 = -1;

	t97 = (x517*(x518+(x519&x520)));

	if (t97 != -4953) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x521 = INT16_MIN;
	int16_t x523 = 1991;
	static volatile int64_t x524 = 6811044887298LL;
	volatile uint64_t t98 = 310944898677558545LLU;

	t98 = (x521*(x522+(x523&x524)));

	if (t98 != 18446744073684353024LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x526 = 5804U;
	volatile int32_t x528 = -1;
	static uint64_t t99 = 234LLU;

	t99 = (x525*(x526+(x527&x528)));

	if (t99 != 18446744073709545813LLU) { NG(); } else { ; }
	
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

