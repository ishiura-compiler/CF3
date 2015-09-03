#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -1LL;
uint64_t x4 = UINT64_MAX;
int64_t x17 = INT64_MIN;
static int32_t x20 = 1;
uint64_t t2 = 59LLU;
static uint8_t x23 = 16U;
uint8_t x24 = UINT8_MAX;
static volatile uint64_t x38 = 893955433969260727LLU;
static volatile int8_t x54 = INT8_MAX;
static uint64_t t11 = 1513077119LLU;
volatile int64_t x77 = -331417369LL;
volatile uint16_t x81 = UINT16_MAX;
volatile int32_t x82 = -1;
volatile int16_t x84 = -1;
int32_t x87 = INT32_MAX;
int16_t x92 = INT16_MIN;
static int8_t x93 = -1;
static int8_t x96 = INT8_MIN;
static volatile int64_t t19 = -2883370LL;
volatile uint8_t x104 = 7U;
uint32_t x105 = 1U;
volatile int16_t x107 = INT16_MIN;
volatile uint8_t x108 = 9U;
volatile uint8_t x111 = 17U;
static volatile int8_t x112 = INT8_MIN;
volatile uint32_t x123 = 216636522U;
static uint64_t x124 = UINT64_MAX;
volatile uint64_t t24 = 3169500076LLU;
static volatile int64_t x129 = 90411277103291439LL;
int16_t x130 = -126;
static int32_t x136 = -8236919;
static volatile uint64_t t28 = 622994LLU;
int32_t x165 = -1;
static uint8_t x169 = 6U;
int8_t x171 = INT8_MIN;
int8_t x174 = INT8_MAX;
uint32_t x175 = 273U;
int64_t x187 = -1434964743LL;
uint64_t t36 = 13230953LLU;
int64_t x189 = -1LL;
uint32_t x191 = 661U;
int16_t x192 = -2;
uint64_t x193 = UINT64_MAX;
int16_t x204 = INT16_MAX;
int64_t x207 = 1435314287601LL;
int64_t x223 = -1LL;
uint64_t x235 = UINT64_MAX;
static int32_t x241 = INT32_MAX;
volatile int64_t t47 = -24509751507990855LL;
static volatile int64_t t48 = 129256458517232LL;
volatile uint64_t x249 = 415118LLU;
int64_t x261 = 39836952100LL;
volatile uint32_t x262 = 361742397U;
volatile uint64_t t52 = 60098438884982LLU;
int64_t x269 = INT64_MIN;
static int8_t x271 = -6;
int16_t x274 = INT16_MAX;
uint64_t x279 = 332LLU;
volatile int64_t x281 = 21955907089LL;
volatile int64_t t56 = -510807656LL;
int8_t x291 = INT8_MAX;
uint16_t x292 = UINT16_MAX;
int8_t x300 = INT8_MIN;
int32_t x309 = INT32_MAX;
static int64_t x310 = INT64_MIN;
int8_t x311 = INT8_MIN;
volatile int32_t t63 = -21866;
uint64_t t67 = 17512109381400995LLU;
uint32_t x342 = UINT32_MAX;
int64_t x347 = 434712107043035LL;
int16_t x349 = INT16_MIN;
static uint16_t x351 = UINT16_MAX;
static volatile int64_t x357 = -1LL;
static uint64_t t74 = 874701222887803LLU;
volatile int64_t t76 = -57866426LL;
int32_t t80 = 9;
int8_t x402 = INT8_MIN;
uint64_t x405 = 7LLU;
volatile int16_t x410 = INT16_MIN;
int8_t x411 = -1;
static volatile uint64_t t85 = 378LLU;
static volatile uint32_t t87 = 184076500U;
uint8_t x438 = 0U;
volatile int64_t x445 = 0LL;
uint8_t x457 = 0U;
uint16_t x458 = 64U;
int8_t x460 = -5;
int8_t x465 = -1;
uint32_t x471 = 660479948U;
int32_t x473 = -534;
volatile uint16_t x476 = 929U;
static uint64_t t99 = 212663273040267LLU;


void f0(void) {
	int8_t x1 = INT8_MAX;
	volatile uint16_t x3 = UINT16_MAX;
	volatile uint64_t t0 = 67428800LLU;

	t0 = (x1-(x2&(x3-x4)));

	if (t0 != 18446744073709486207LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 2LL;
	static uint32_t x6 = 65U;
	int64_t x7 = -1LL;
	int16_t x8 = INT16_MAX;
	volatile int64_t t1 = 3892290233933743LL;

	t1 = (x5-(x6&(x7-x8)));

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x18 = 241683121638117LLU;
	int8_t x19 = INT8_MAX;

	t2 = (x17-(x18&(x19-x20)));

	if (t2 != 9223372036854775708LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = -3440LL;
	int32_t x22 = INT32_MIN;
	int64_t t3 = 391699505736940903LL;

	t3 = (x21-(x22&(x23-x24)));

	if (t3 != 2147480208LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x25 = 23U;
	int32_t x26 = INT32_MIN;
	static int16_t x27 = 60;
	int16_t x28 = INT16_MIN;
	static volatile int32_t t4 = -39645846;

	t4 = (x25-(x26&(x27-x28)));

	if (t4 != 23) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = 5890;
	int64_t x31 = -1LL;
	uint16_t x32 = UINT16_MAX;
	int64_t t5 = -645323012087383894LL;

	t5 = (x29-(x30&(x31-x32)));

	if (t5 != -32768LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	static int64_t x39 = -9747LL;
	volatile int16_t x40 = -1;
	uint64_t t6 = 0LLU;

	t6 = (x37-(x38&(x39-x40)));

	if (t6 != 17552788639740290905LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x41 = UINT8_MAX;
	volatile uint32_t x42 = UINT32_MAX;
	volatile uint32_t x43 = 284U;
	static volatile int16_t x44 = 0;
	volatile uint32_t t7 = 34U;

	t7 = (x41-(x42&(x43-x44)));

	if (t7 != 4294967267U) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = 14;
	uint32_t x47 = 2416064U;
	volatile int64_t x48 = -1364181215009174163LL;
	volatile int64_t t8 = -376LL;

	t8 = (x45-(x46&(x47-x48)));

	if (t8 != 65533LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x49 = 4LLU;
	uint32_t x50 = 2034U;
	uint64_t x51 = 2962857139283492448LLU;
	int64_t x52 = 9801578971LL;
	uint64_t t9 = 224977526321024LLU;

	t9 = (x49-(x50&(x51-x52)));

	if (t9 != 18446744073709550468LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x53 = INT8_MIN;
	uint16_t x55 = UINT16_MAX;
	static uint64_t x56 = 945844LLU;
	uint64_t t10 = 4735LLU;

	t10 = (x53-(x54&(x55-x56)));

	if (t10 != 18446744073709551413LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x65 = 27034U;
	uint64_t x66 = 201640159615LLU;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;

	t11 = (x65-(x66&(x67-x68)));

	if (t11 != 18446743872069451929LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = -20;
	uint32_t x70 = 1236817U;
	static uint8_t x71 = 3U;
	volatile int16_t x72 = INT16_MIN;
	uint32_t t12 = 155U;

	t12 = (x69-(x70&(x71-x72)));

	if (t12 != 4294934507U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x73 = -11;
	int32_t x74 = -1;
	int16_t x75 = 373;
	int8_t x76 = INT8_MAX;
	int32_t t13 = 1928;

	t13 = (x73-(x74&(x75-x76)));

	if (t13 != -257) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = 256;
	uint8_t x79 = 1U;
	int64_t x80 = -393886958990224210LL;
	volatile int64_t t14 = 1781019900LL;

	t14 = (x77-(x78&(x79-x80)));

	if (t14 != -331417625LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x83 = 294U;
	static volatile int32_t t15 = -11052;

	t15 = (x81-(x82&(x83-x84)));

	if (t15 != 65240) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x85 = UINT8_MAX;
	volatile int64_t x86 = INT64_MAX;
	uint16_t x88 = 57U;
	volatile int64_t t16 = -3475LL;

	t16 = (x85-(x86&(x87-x88)));

	if (t16 != -2147483335LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x89 = 14U;
	static int16_t x90 = INT16_MAX;
	static int32_t x91 = 36640;
	static int32_t t17 = -1131;

	t17 = (x89-(x90&(x91-x92)));

	if (t17 != -3858) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x94 = INT16_MAX;
	static int16_t x95 = -4837;
	int32_t t18 = 2019141;

	t18 = (x93-(x94&(x95-x96)));

	if (t18 != -28060) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = -6415620138LL;
	int8_t x98 = INT8_MIN;
	static int8_t x99 = -6;
	static volatile int16_t x100 = 134;

	t19 = (x97-(x98&(x99-x100)));

	if (t19 != -6415619882LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MAX;
	uint8_t x103 = 9U;
	int32_t t20 = 409;

	t20 = (x101-(x102&(x103-x104)));

	if (t20 != -32770) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x106 = 33627LLU;
	uint64_t t21 = 16296186173207LLU;

	t21 = (x105-(x106&(x107-x108)));

	if (t21 != 18446744073709550766LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x109 = UINT32_MAX;
	volatile int64_t x110 = INT64_MAX;
	int64_t t22 = -2123593492321785LL;

	t22 = (x109-(x110&(x111-x112)));

	if (t22 != 4294967150LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = 1;
	int8_t x118 = -1;
	int64_t x119 = 158136775108351LL;
	int64_t x120 = 1842363466LL;
	volatile int64_t t23 = -3350127487772LL;

	t23 = (x117-(x118&(x119-x120)));

	if (t23 != -158134932744884LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	static int16_t x122 = 12938;

	t24 = (x121-(x122&(x123-x124)));

	if (t24 != 18446744073709514742LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x125 = INT8_MIN;
	int32_t x126 = -829;
	volatile int32_t x127 = 8368248;
	uint64_t x128 = 8632601064LLU;
	uint64_t t25 = 35184021498LLU;

	t25 = (x125-(x126&(x127-x128)));

	if (t25 != 8624233216LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x131 = 10;
	int64_t x132 = 87579165334LL;
	volatile int64_t t26 = -8706379899121670LL;

	t26 = (x129-(x130&(x131-x132)));

	if (t26 != 90411364682456879LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x133 = 515191965202334108LLU;
	volatile uint32_t x134 = 41U;
	volatile uint8_t x135 = UINT8_MAX;
	uint64_t t27 = 61835633898667967LLU;

	t27 = (x133-(x134&(x135-x136)));

	if (t27 != 515191965202334076LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x137 = INT16_MIN;
	int8_t x138 = INT8_MAX;
	uint64_t x139 = 14739222628LLU;
	volatile int16_t x140 = -7;

	t28 = (x137-(x138&(x139-x140)));

	if (t28 != 18446744073709518741LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 18U;
	int64_t x142 = -9LL;
	int32_t x143 = -1;
	uint32_t x144 = 25245194U;
	static int64_t t29 = 0LL;

	t29 = (x141-(x142&(x143-x144)));

	if (t29 != -4269722083LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = INT8_MAX;
	uint16_t x150 = 13891U;
	volatile int16_t x151 = -16232;
	volatile int32_t x152 = -1;
	volatile int32_t t30 = 225668710;

	t30 = (x149-(x150&(x151-x152)));

	if (t30 != 126) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x153 = 222U;
	int8_t x154 = -1;
	volatile int16_t x155 = INT16_MIN;
	int8_t x156 = -1;
	int32_t t31 = 17405;

	t31 = (x153-(x154&(x155-x156)));

	if (t31 != 32989) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x157 = UINT8_MAX;
	static uint32_t x158 = 1068966102U;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -2;
	volatile uint32_t t32 = 33547832U;

	t32 = (x157-(x158&(x159-x160)));

	if (t32 != 3226001533U) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x166 = UINT8_MAX;
	uint32_t x167 = UINT32_MAX;
	int64_t x168 = INT64_MAX;
	int64_t t33 = 1011LL;

	t33 = (x165-(x166&(x167-x168)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x170 = UINT16_MAX;
	int8_t x172 = INT8_MIN;
	volatile int32_t t34 = 274412759;

	t34 = (x169-(x170&(x171-x172)));

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MIN;
	uint16_t x176 = 39U;
	static volatile uint32_t t35 = 635841827U;

	t35 = (x173-(x174&(x175-x176)));

	if (t35 != 2147483542U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x185 = UINT32_MAX;
	static int64_t x186 = INT64_MAX;
	uint64_t x188 = 1305227621589503LLU;

	t36 = (x185-(x186&(x187-x188)));

	if (t36 != 9224677270206297349LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x190 = -1;
	volatile int64_t t37 = -32900184615253LL;

	t37 = (x189-(x190&(x191-x192)));

	if (t37 != -664LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x194 = 1U;
	static uint8_t x195 = UINT8_MAX;
	int32_t x196 = INT32_MAX;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x193-(x194&(x195-x196)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x197 = INT16_MIN;
	int32_t x198 = INT32_MIN;
	int64_t x199 = -2LL;
	int16_t x200 = INT16_MIN;
	int64_t t39 = -231735690465LL;

	t39 = (x197-(x198&(x199-x200)));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x201 = UINT8_MAX;
	volatile int32_t x202 = -1;
	uint8_t x203 = 7U;
	static int32_t t40 = 12;

	t40 = (x201-(x202&(x203-x204)));

	if (t40 != 33015) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x205 = 0LLU;
	int8_t x206 = -4;
	volatile uint64_t x208 = 592LLU;
	volatile uint64_t t41 = 5605464147LLU;

	t41 = (x205-(x206&(x207-x208)));

	if (t41 != 18446742638395264608LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x213 = INT64_MIN;
	int8_t x214 = INT8_MAX;
	static int16_t x215 = INT16_MIN;
	int32_t x216 = INT32_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x213-(x214&(x215-x216)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = 14;
	int16_t x222 = INT16_MIN;
	static volatile uint64_t x224 = 205630LLU;
	uint64_t t43 = 379LLU;

	t43 = (x221-(x222&(x223-x224)));

	if (t43 != 229390LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x229 = INT8_MIN;
	int16_t x230 = INT16_MIN;
	uint32_t x231 = UINT32_MAX;
	volatile int16_t x232 = INT16_MIN;
	volatile uint32_t t44 = 24824U;

	t44 = (x229-(x230&(x231-x232)));

	if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = -4;
	int32_t x234 = 1444180;
	int16_t x236 = INT16_MIN;
	uint64_t t45 = 17829887606670LLU;

	t45 = (x233-(x234&(x235-x236)));

	if (t45 != 18446744073709549224LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	int16_t x239 = -1;
	static int64_t x240 = -2853464LL;
	int64_t t46 = -15618507LL;

	t46 = (x237-(x238&(x239-x240)));

	if (t46 != -2853377LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x242 = UINT8_MAX;
	static int64_t x243 = -112395LL;
	int64_t x244 = -1LL;

	t47 = (x241-(x242&(x243-x244)));

	if (t47 != 2147483401LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = -1;
	static int64_t x246 = INT64_MAX;
	int16_t x247 = 1832;
	static uint16_t x248 = UINT16_MAX;

	t48 = (x245-(x246&(x247-x248)));

	if (t48 != -9223372036854712106LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x250 = -1LL;
	int8_t x251 = 14;
	int16_t x252 = INT16_MIN;
	uint64_t t49 = 9074321373575448LLU;

	t49 = (x249-(x250&(x251-x252)));

	if (t49 != 382336LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x253 = 7986LL;
	volatile int16_t x254 = INT16_MIN;
	volatile int16_t x255 = -135;
	int8_t x256 = INT8_MIN;
	volatile int64_t t50 = -156404LL;

	t50 = (x253-(x254&(x255-x256)));

	if (t50 != 40754LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = -3;
	volatile uint32_t x258 = 270U;
	volatile uint16_t x259 = 9468U;
	uint64_t x260 = UINT64_MAX;
	uint64_t t51 = 208842496713509756LLU;

	t51 = (x257-(x258&(x259-x260)));

	if (t51 != 18446744073709551601LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x263 = 52LLU;
	static volatile uint32_t x264 = 241U;

	t52 = (x261-(x262&(x263-x264)));

	if (t52 != 39475209763LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x270 = INT64_MIN;
	int8_t x272 = 14;
	int64_t t53 = -7035692520LL;

	t53 = (x269-(x270&(x271-x272)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x273 = INT32_MAX;
	int64_t x275 = 5906355LL;
	int64_t x276 = 75341225492847741LL;
	volatile int64_t t54 = -113096171018967LL;

	t54 = (x273-(x274&(x275-x276)));

	if (t54 != 2147482825LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x277 = 6U;
	uint16_t x278 = UINT16_MAX;
	static int32_t x280 = INT32_MAX;
	volatile uint64_t t55 = 622412178132LLU;

	t55 = (x277-(x278&(x279-x280)));

	if (t55 != 18446744073709551289LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x282 = INT64_MAX;
	static int8_t x283 = -3;
	int64_t x284 = -1LL;

	t56 = (x281-(x282&(x283-x284)));

	if (t56 != -9223372014898868717LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x289 = -1;
	int8_t x290 = INT8_MIN;
	static int32_t t57 = -3;

	t57 = (x289-(x290&(x291-x292)));

	if (t57 != 65407) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x297 = INT8_MIN;
	volatile uint32_t x298 = 713038U;
	int64_t x299 = 330597640629LL;
	static volatile int64_t t58 = -3363159LL;

	t58 = (x297-(x298&(x299-x300)));

	if (t58 != -172164LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x301 = 308;
	int8_t x302 = INT8_MAX;
	uint8_t x303 = 3U;
	static volatile int16_t x304 = INT16_MAX;
	int32_t t59 = 2;

	t59 = (x301-(x302&(x303-x304)));

	if (t59 != 304) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x305 = -531434966LL;
	static uint32_t x306 = 1885522993U;
	static uint8_t x307 = UINT8_MAX;
	int64_t x308 = -1LL;
	int64_t t60 = -4773508743034348LL;

	t60 = (x305-(x306&(x307-x308)));

	if (t60 != -531434966LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x312 = 15213953U;
	static volatile int64_t t61 = -7306LL;

	t61 = (x309-(x310&(x311-x312)));

	if (t61 != 2147483647LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x317 = INT8_MIN;
	int8_t x318 = -1;
	uint16_t x319 = 0U;
	uint16_t x320 = 52U;
	volatile int32_t t62 = 131819625;

	t62 = (x317-(x318&(x319-x320)));

	if (t62 != -76) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x321 = 11037;
	uint8_t x322 = 3U;
	int16_t x323 = 2;
	int8_t x324 = 3;

	t63 = (x321-(x322&(x323-x324)));

	if (t63 != 11034) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x326 = 63959U;
	int16_t x327 = -1;
	int16_t x328 = INT16_MIN;
	volatile uint32_t t64 = 13907620U;

	t64 = (x325-(x326&(x327-x328)));

	if (t64 != 34344U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = -1;
	volatile int16_t x330 = INT16_MAX;
	int8_t x331 = INT8_MAX;
	uint16_t x332 = UINT16_MAX;
	volatile int32_t t65 = -2;

	t65 = (x329-(x330&(x331-x332)));

	if (t65 != -129) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = INT64_MAX;
	uint64_t x334 = 4288425491LLU;
	static volatile int32_t x335 = INT32_MAX;
	uint32_t x336 = 666601U;
	volatile uint64_t t66 = 432529007108071LLU;

	t66 = (x333-(x334&(x335-x336)));

	if (t66 != 9223372034714369005LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = INT64_MAX;
	static int64_t x338 = INT64_MIN;
	static uint64_t x339 = 124567LLU;
	volatile int8_t x340 = INT8_MIN;

	t67 = (x337-(x338&(x339-x340)));

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x341 = -1;
	int32_t x343 = 3551;
	uint32_t x344 = UINT32_MAX;
	uint32_t t68 = 49700103U;

	t68 = (x341-(x342&(x343-x344)));

	if (t68 != 4294963743U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = INT16_MIN;
	static int8_t x348 = INT8_MIN;
	int64_t t69 = 203705LL;

	t69 = (x345-(x346&(x347-x348)));

	if (t69 != -434714254508032LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x350 = 336980572LLU;
	static uint32_t x352 = 1U;
	uint64_t t70 = 1LLU;

	t70 = (x349-(x350&(x351-x352)));

	if (t70 != 18446744073709458852LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x353 = UINT64_MAX;
	int32_t x354 = INT32_MIN;
	volatile uint64_t x355 = UINT64_MAX;
	uint32_t x356 = UINT32_MAX;
	uint64_t t71 = 133942976775568472LLU;

	t71 = (x353-(x354&(x355-x356)));

	if (t71 != 4294967295LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x358 = INT8_MIN;
	int16_t x359 = INT16_MIN;
	uint16_t x360 = UINT16_MAX;
	int64_t t72 = -162551227691290LL;

	t72 = (x357-(x358&(x359-x360)));

	if (t72 != 98303LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -77;
	uint32_t x362 = UINT32_MAX;
	uint8_t x363 = 4U;
	static int8_t x364 = 0;
	static volatile uint32_t t73 = 50496928U;

	t73 = (x361-(x362&(x363-x364)));

	if (t73 != 4294967215U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x369 = INT16_MAX;
	uint16_t x370 = UINT16_MAX;
	uint64_t x371 = 123814208279535LLU;
	volatile uint8_t x372 = 0U;

	t74 = (x369-(x370&(x371-x372)));

	if (t74 != 27664LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x373 = -6;
	uint64_t x374 = 3368491694578879LLU;
	int8_t x375 = INT8_MIN;
	static int32_t x376 = INT32_MIN;
	uint64_t t75 = 75706266099LLU;

	t75 = (x373-(x374&(x375-x376)));

	if (t75 != 18446744073325618042LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x377 = 865264085778305624LL;
	volatile int32_t x378 = 308974727;
	uint32_t x379 = 102U;
	uint16_t x380 = UINT16_MAX;

	t76 = (x377-(x378&(x379-x380)));

	if (t76 != 865264085469368913LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x381 = 0U;
	uint16_t x382 = 5626U;
	uint8_t x383 = 68U;
	int16_t x384 = INT16_MIN;
	static uint32_t t77 = 1258131U;

	t77 = (x381-(x382&(x383-x384)));

	if (t77 != 4294967232U) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x385 = UINT8_MAX;
	volatile int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = 3U;
	int32_t x388 = INT32_MIN;
	volatile uint32_t t78 = 2296U;

	t78 = (x385-(x386&(x387-x388)));

	if (t78 != 2147483903U) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x389 = 11U;
	static int32_t x390 = 6784;
	static int32_t x391 = 1376988;
	int8_t x392 = INT8_MIN;
	int32_t t79 = 34916;

	t79 = (x389-(x390&(x391-x392)));

	if (t79 != -501) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x393 = INT8_MIN;
	int16_t x394 = INT16_MAX;
	int32_t x395 = 4001420;
	int16_t x396 = -1147;

	t80 = (x393-(x394&(x395-x396)));

	if (t80 != -4999) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = -13;
	uint16_t x398 = 75U;
	int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = 12U;
	static volatile uint32_t t81 = 43352194U;

	t81 = (x397-(x398&(x399-x400)));

	if (t81 != 4294967219U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x401 = 1;
	static int16_t x403 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	volatile int32_t t82 = 8962;

	t82 = (x401-(x402&(x403-x404)));

	if (t82 != 98305) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x406 = UINT16_MAX;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = UINT64_MAX;
	static volatile uint64_t t83 = 419281282094855585LLU;

	t83 = (x405-(x406&(x407-x408)));

	if (t83 != 18446744073709486214LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x409 = 12;
	int32_t x412 = INT32_MIN;
	volatile int32_t t84 = -65;

	t84 = (x409-(x410&(x411-x412)));

	if (t84 != -2147450868) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x413 = 117U;
	static uint8_t x414 = 112U;
	uint64_t x415 = 4539633645332768584LLU;
	int32_t x416 = INT32_MIN;

	t85 = (x413-(x414&(x415-x416)));

	if (t85 != 53LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x421 = INT16_MIN;
	static int64_t x422 = INT64_MIN;
	static int8_t x423 = -1;
	static uint8_t x424 = UINT8_MAX;
	int64_t t86 = 107944807614LL;

	t86 = (x421-(x422&(x423-x424)));

	if (t86 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x425 = UINT32_MAX;
	volatile uint32_t x426 = UINT32_MAX;
	uint16_t x427 = UINT16_MAX;
	int32_t x428 = -1;

	t87 = (x425-(x426&(x427-x428)));

	if (t87 != 4294901759U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = -1LL;
	static volatile int16_t x430 = -1;
	int64_t x431 = -1LL;
	uint8_t x432 = UINT8_MAX;
	volatile int64_t t88 = -182LL;

	t88 = (x429-(x430&(x431-x432)));

	if (t88 != 255LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x437 = INT16_MIN;
	static int32_t x439 = -1;
	int64_t x440 = -13027055LL;
	int64_t t89 = -170352626LL;

	t89 = (x437-(x438&(x439-x440)));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x441 = INT16_MAX;
	volatile uint8_t x442 = 91U;
	uint16_t x443 = UINT16_MAX;
	int16_t x444 = 0;
	int32_t t90 = 270949;

	t90 = (x441-(x442&(x443-x444)));

	if (t90 != 32676) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x446 = 4067968785LLU;
	int16_t x447 = INT16_MIN;
	static volatile uint64_t x448 = UINT64_MAX;
	uint64_t t91 = 196007706077LLU;

	t91 = (x445-(x446&(x447-x448)));

	if (t91 != 18446744069641601023LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x449 = UINT16_MAX;
	volatile int8_t x450 = -1;
	uint32_t x451 = 188U;
	static uint32_t x452 = 286225U;
	volatile uint32_t t92 = 909060533U;

	t92 = (x449-(x450&(x451-x452)));

	if (t92 != 351572U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x453 = INT32_MIN;
	static int64_t x454 = -99845314329LL;
	int8_t x455 = INT8_MAX;
	static int16_t x456 = -39;
	volatile int64_t t93 = -1891LL;

	t93 = (x453-(x454&(x455-x456)));

	if (t93 != -2147483814LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x459 = -1LL;
	volatile int64_t t94 = -352797695994LL;

	t94 = (x457-(x458&(x459-x460)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = 30429;
	uint8_t x462 = UINT8_MAX;
	int32_t x463 = 570678;
	int64_t x464 = 171390223052LL;
	static volatile int64_t t95 = -34353187218036LL;

	t95 = (x461-(x462&(x463-x464)));

	if (t95 != 30323LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x466 = 2U;
	int16_t x467 = 4;
	volatile int8_t x468 = 40;
	volatile int32_t t96 = -664415;

	t96 = (x465-(x466&(x467-x468)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x469 = -1;
	uint64_t x470 = 49555604194574LLU;
	int32_t x472 = 52255305;
	volatile uint64_t t97 = 641113837LLU;

	t97 = (x469-(x470&(x471-x472)));

	if (t97 != 18446744073709533949LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x474 = 6462;
	volatile int16_t x475 = -1;
	int32_t t98 = -12623885;

	t98 = (x473-(x474&(x475-x476)));

	if (t98 != -6708) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x477 = INT16_MIN;
	int64_t x478 = -1LL;
	uint8_t x479 = 0U;
	uint64_t x480 = 514687LLU;

	t99 = (x477-(x478&(x479-x480)));

	if (t99 != 481919LLU) { NG(); } else { ; }
	
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

