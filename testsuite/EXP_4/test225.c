#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = -1;
volatile uint32_t t0 = 513U;
static int32_t x15 = -375333002;
int16_t x21 = -12207;
int64_t x24 = 2140823155499881LL;
static uint8_t x25 = 3U;
int8_t x27 = INT8_MIN;
int8_t x52 = INT8_MIN;
int8_t x64 = -1;
static uint64_t t11 = 29LLU;
static int64_t x65 = -1LL;
int8_t x72 = INT8_MAX;
int32_t x81 = -1;
int64_t x82 = -13261097875737253LL;
uint8_t x83 = UINT8_MAX;
volatile int32_t x89 = INT32_MIN;
static uint64_t x95 = 35472LLU;
static volatile int8_t x96 = INT8_MIN;
volatile int32_t x99 = -8873;
int16_t x101 = 34;
uint64_t x103 = 14179873475151027LLU;
int8_t x112 = INT8_MIN;
static int32_t x121 = 5738;
uint16_t x122 = 2198U;
volatile uint64_t x141 = UINT64_MAX;
int16_t x143 = -254;
int8_t x158 = INT8_MIN;
uint32_t t28 = 1260U;
int16_t x164 = INT16_MAX;
int64_t x173 = 1727282016931LL;
uint16_t x180 = 0U;
volatile int64_t t31 = 104589938LL;
static int32_t x183 = -111;
static uint32_t x184 = 740848206U;
static uint32_t x186 = 3U;
uint64_t x187 = UINT64_MAX;
int16_t x188 = INT16_MAX;
int32_t x191 = 9151;
volatile int32_t x192 = -26391;
int8_t x200 = INT8_MIN;
volatile int32_t t36 = 0;
int64_t x203 = 37994LL;
uint32_t x204 = 7873432U;
static int64_t x205 = INT64_MIN;
static uint32_t x206 = UINT32_MAX;
int16_t x207 = -1;
volatile int64_t x222 = INT64_MIN;
int64_t t41 = 41347114LL;
int32_t x230 = -6796129;
volatile uint32_t x234 = 7U;
int64_t x240 = -1LL;
volatile int16_t x241 = INT16_MAX;
static volatile uint16_t x242 = 2U;
int8_t x250 = INT8_MIN;
static int64_t x278 = -1LL;
uint8_t x289 = 9U;
uint16_t x291 = 60U;
int16_t x292 = 29;
volatile int8_t x299 = -1;
int32_t x308 = -406;
uint8_t x309 = 37U;
static int16_t x312 = INT16_MAX;
int32_t x317 = -1;
int64_t x318 = -275442373632862757LL;
volatile int64_t t58 = -76394084LL;
int8_t x331 = INT8_MIN;
uint64_t x332 = 2079248361047LLU;
volatile int16_t x333 = -1;
int32_t x350 = -1;
int8_t x351 = -1;
uint32_t t65 = 25U;
int16_t x361 = INT16_MAX;
int64_t x369 = -1LL;
int16_t x373 = INT16_MIN;
volatile uint64_t x374 = 37544274567203237LLU;
uint16_t x379 = 93U;
int32_t t69 = 1010777;
int16_t x384 = INT16_MIN;
int64_t x388 = INT64_MAX;
volatile int8_t x391 = -1;
volatile int64_t x392 = INT64_MIN;
static uint32_t x396 = UINT32_MAX;
static uint32_t t73 = 3762U;
volatile int32_t x398 = INT32_MAX;
int64_t x399 = INT64_MAX;
volatile int8_t x400 = INT8_MAX;
int64_t t74 = -224175481162538786LL;
int64_t x401 = 202847LL;
uint32_t t82 = 117U;
int16_t x438 = 463;
int8_t x448 = INT8_MAX;
int16_t x479 = -1;
int64_t x483 = -844LL;
volatile int16_t x487 = -3;
volatile uint16_t x488 = 36U;
static int32_t x492 = INT32_MIN;
volatile int32_t x493 = -1;
int16_t x496 = INT16_MIN;
volatile uint64_t t92 = 16204LLU;
volatile int64_t x501 = INT64_MIN;
int64_t t93 = 19810LL;
int64_t x512 = -1LL;
int8_t x522 = -1;
uint64_t x549 = 2LLU;
uint16_t x575 = 23U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = 1793U;
	uint8_t x3 = 11U;

	t0 = (x1/(x2%(x3-x4)));

	if (t0 != 858993433U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	volatile int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	static uint16_t x12 = 13U;
	volatile int64_t t1 = -159678436178864LL;

	t1 = (x9/(x10%(x11-x12)));

	if (t1 != 5478274LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = UINT8_MAX;
	uint8_t x14 = 6U;
	uint8_t x16 = 16U;
	int32_t t2 = -45430;

	t2 = (x13/(x14%(x15-x16)));

	if (t2 != 42) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x22 = INT64_MAX;
	static uint16_t x23 = 2U;
	int64_t t3 = -1943952908439644LL;

	t3 = (x21/(x22%(x23-x24)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x26 = 4074377LL;
	uint16_t x28 = 39U;
	volatile int64_t t4 = 48302LL;

	t4 = (x25/(x26%(x27-x28)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = INT64_MAX;
	volatile int8_t x34 = -1;
	int32_t x35 = INT32_MIN;
	int16_t x36 = -172;
	volatile int64_t t5 = 107942096LL;

	t5 = (x33/(x34%(x35-x36)));

	if (t5 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	static uint32_t x39 = 400151U;
	static uint32_t x40 = 7830543U;
	volatile uint32_t t6 = 29471U;

	t6 = (x37/(x38%(x39-x40)));

	if (t6 != 580U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MAX;
	volatile int64_t x42 = 303699756639272870LL;
	volatile int32_t x43 = INT32_MIN;
	volatile int32_t x44 = -13913026;
	volatile int64_t t7 = 111158299317628202LL;

	t7 = (x41/(x42%(x43-x44)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x49 = 39654481LLU;
	static volatile int64_t x50 = -180821LL;
	int8_t x51 = 2;
	static uint64_t t8 = 2LLU;

	t8 = (x49/(x50%(x51-x52)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x53 = INT16_MAX;
	int16_t x54 = INT16_MAX;
	int16_t x55 = -1;
	volatile uint32_t x56 = 526087358U;
	volatile uint32_t t9 = 74U;

	t9 = (x53/(x54%(x55-x56)));

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 3184U;
	static uint64_t x59 = 215114887670LLU;
	int16_t x60 = INT16_MAX;
	uint64_t t10 = 7LLU;

	t10 = (x57/(x58%(x59-x60)));

	if (t10 != 2896787700017203LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = INT8_MAX;

	t11 = (x61/(x62%(x63-x64)));

	if (t11 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x66 = INT64_MIN;
	uint64_t x67 = 331812300993LLU;
	static volatile int16_t x68 = -3;
	volatile uint64_t t12 = 24492LLU;

	t12 = (x65/(x66%(x67-x68)));

	if (t12 != 174338038LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x69 = 1705LL;
	int64_t x70 = INT64_MIN;
	volatile uint32_t x71 = UINT32_MAX;
	volatile int64_t t13 = 3224LL;

	t13 = (x69/(x70%(x71-x72)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = -2;
	uint64_t x78 = 74148071LLU;
	uint16_t x79 = 3U;
	static int8_t x80 = INT8_MIN;
	volatile uint64_t t14 = 117135734188177594LLU;

	t14 = (x77/(x78%(x79-x80)));

	if (t14 != 174025887487825958LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x84 = -65947496;
	int64_t t15 = 1787902958LL;

	t15 = (x81/(x82%(x83-x84)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x85 = 8010;
	uint32_t x86 = 24U;
	volatile uint8_t x87 = 80U;
	int8_t x88 = 2;
	volatile uint32_t t16 = 286U;

	t16 = (x85/(x86%(x87-x88)));

	if (t16 != 333U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x90 = 4849380U;
	uint32_t x91 = 61313797U;
	int8_t x92 = -26;
	volatile uint32_t t17 = 267770U;

	t17 = (x89/(x90%(x91-x92)));

	if (t17 != 442U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x93 = INT8_MIN;
	int64_t x94 = INT64_MIN;
	uint64_t t18 = 6LLU;

	t18 = (x93/(x94%(x95-x96)));

	if (t18 != 558856764230173LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x97 = -145;
	uint8_t x98 = 54U;
	volatile uint8_t x100 = UINT8_MAX;
	static int32_t t19 = -5233529;

	t19 = (x97/(x98%(x99-x100)));

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x102 = 586684328U;
	int32_t x104 = INT32_MIN;
	uint64_t t20 = 97608LLU;

	t20 = (x101/(x102%(x103-x104)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 51LLU;
	static uint64_t x106 = UINT64_MAX;
	static int16_t x107 = -1;
	int32_t x108 = INT32_MIN;
	static uint64_t t21 = 3096315965576447LLU;

	t21 = (x105/(x106%(x107-x108)));

	if (t21 != 17LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = 3;
	int8_t x110 = INT8_MIN;
	volatile int8_t x111 = 7;
	volatile int32_t t22 = 121;

	t22 = (x109/(x110%(x111-x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = -1;
	static uint32_t x118 = 125U;
	int32_t x119 = -1;
	volatile int8_t x120 = INT8_MIN;
	uint32_t t23 = 24351U;

	t23 = (x117/(x118%(x119-x120)));

	if (t23 != 34359738U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x123 = 82U;
	int16_t x124 = -833;
	static volatile int32_t t24 = 123708284;

	t24 = (x121/(x122%(x123-x124)));

	if (t24 != 15) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x142 = 14827U;
	int16_t x144 = INT16_MIN;
	uint64_t t25 = 209335LLU;

	t25 = (x141/(x142%(x143-x144)));

	if (t25 != 1244131926465876LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = INT64_MIN;
	int16_t x146 = -1179;
	int32_t x147 = -192074931;
	int64_t x148 = 153LL;
	int64_t t26 = 114827833430LL;

	t26 = (x145/(x146%(x147-x148)));

	if (t26 != 7823046680962490LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x153 = 6817;
	uint64_t x154 = 2304007944705635960LLU;
	static uint16_t x155 = UINT16_MAX;
	static int16_t x156 = 0;
	volatile uint64_t t27 = 70327392156953LLU;

	t27 = (x153/(x154%(x155-x156)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x157 = 304796U;
	int16_t x159 = -209;
	uint8_t x160 = 18U;

	t28 = (x157/(x158%(x159-x160)));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x161 = 167LLU;
	volatile int32_t x162 = -1;
	int16_t x163 = -1;
	uint64_t t29 = 14277056LLU;

	t29 = (x161/(x162%(x163-x164)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x174 = INT32_MAX;
	volatile int16_t x175 = -68;
	int64_t x176 = 0LL;
	int64_t t30 = 280658694461LL;

	t30 = (x173/(x174%(x175-x176)));

	if (t30 != 29275966388LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x177 = -1;
	int64_t x178 = -14733185223476LL;
	int8_t x179 = INT8_MIN;

	t31 = (x177/(x178%(x179-x180)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x181 = 9U;
	volatile int16_t x182 = INT16_MAX;
	uint32_t t32 = 10152U;

	t32 = (x181/(x182%(x183-x184)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x185 = INT16_MIN;
	volatile uint64_t t33 = 82LLU;

	t33 = (x185/(x186%(x187-x188)));

	if (t33 != 6148914691236506282LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x189 = 7U;
	int64_t x190 = INT64_MAX;
	int64_t t34 = -12LL;

	t34 = (x189/(x190%(x191-x192)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	uint64_t x195 = 362LLU;
	uint64_t x196 = 460326LLU;
	static uint64_t t35 = 29696502403777LLU;

	t35 = (x193/(x194%(x195-x196)));

	if (t35 != 40115919749018LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x197 = UINT8_MAX;
	int8_t x198 = -2;
	volatile int8_t x199 = 6;

	t36 = (x197/(x198%(x199-x200)));

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 14957521134561LLU;
	uint16_t x202 = UINT16_MAX;
	volatile uint64_t t37 = 72765LLU;

	t37 = (x201/(x202%(x203-x204)));

	if (t37 != 228237142LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x208 = INT32_MIN;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x205/(x206%(x207-x208)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x209 = 37U;
	uint64_t x210 = 1LLU;
	int16_t x211 = INT16_MAX;
	int64_t x212 = INT64_MAX;
	uint64_t t39 = 1080101023303917791LLU;

	t39 = (x209/(x210%(x211-x212)));

	if (t39 != 37LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x213 = -1961;
	uint32_t x214 = 615882315U;
	volatile uint32_t x215 = 16U;
	static volatile uint16_t x216 = UINT16_MAX;
	uint32_t t40 = 19759U;

	t40 = (x213/(x214%(x215-x216)));

	if (t40 != 6U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x221 = 2023U;
	static int32_t x223 = INT32_MIN;
	int32_t x224 = -1;

	t41 = (x221/(x222%(x223-x224)));

	if (t41 != -1011LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x229 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	static int8_t x232 = 18;
	volatile uint64_t t42 = 199LLU;

	t42 = (x229/(x230%(x231-x232)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x233 = INT8_MIN;
	static int16_t x235 = INT16_MIN;
	int64_t x236 = -240408040LL;
	int64_t t43 = -196700760942381LL;

	t43 = (x233/(x234%(x235-x236)));

	if (t43 != -18LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x237 = 17859U;
	uint64_t x238 = UINT64_MAX;
	volatile int64_t x239 = INT64_MIN;
	static uint64_t t44 = 15541784926988LLU;

	t44 = (x237/(x238%(x239-x240)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x243 = -2LL;
	int32_t x244 = -164;
	int64_t t45 = 84LL;

	t45 = (x241/(x242%(x243-x244)));

	if (t45 != 16383LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x249 = UINT8_MAX;
	static uint32_t x251 = 19235U;
	volatile int32_t x252 = -80680;
	uint32_t t46 = 28222U;

	t46 = (x249/(x250%(x251-x252)));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int32_t x255 = -360;
	static uint32_t x256 = 6494U;
	static uint32_t t47 = 716U;

	t47 = (x253/(x254%(x255-x256)));

	if (t47 != 638561U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x257 = 1;
	volatile int64_t x258 = 713306808055640561LL;
	volatile int8_t x259 = INT8_MAX;
	int64_t x260 = INT64_MAX;
	volatile int64_t t48 = 6087548174LL;

	t48 = (x257/(x258%(x259-x260)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x265 = -1228609;
	uint64_t x266 = 5682027053LLU;
	static int8_t x267 = INT8_MAX;
	static uint64_t x268 = UINT64_MAX;
	volatile uint64_t t49 = 7691562375984522LLU;

	t49 = (x265/(x266%(x267-x268)));

	if (t49 != 409927646082407177LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x277 = 1U;
	static int16_t x279 = INT16_MAX;
	volatile int64_t x280 = -1456LL;
	volatile int64_t t50 = 7LL;

	t50 = (x277/(x278%(x279-x280)));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	static int16_t x283 = -1;
	uint8_t x284 = 6U;
	int32_t t51 = 48367;

	t51 = (x281/(x282%(x283-x284)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x285 = -1;
	static int64_t x286 = -1LL;
	static uint32_t x287 = 1139U;
	static volatile int32_t x288 = INT32_MIN;
	static volatile int64_t t52 = -30756395548889LL;

	t52 = (x285/(x286%(x287-x288)));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x290 = -1;
	static volatile int32_t t53 = -110;

	t53 = (x289/(x290%(x291-x292)));

	if (t53 != -9) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x297 = INT64_MIN;
	uint32_t x298 = 8304U;
	int8_t x300 = INT8_MIN;
	volatile int64_t t54 = 1836409112253928785LL;

	t54 = (x297/(x298%(x299-x300)));

	if (t54 != -188232082384791343LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x301 = -61;
	int8_t x302 = INT8_MIN;
	volatile uint8_t x303 = UINT8_MAX;
	int64_t x304 = -4461921585LL;
	int64_t t55 = 46LL;

	t55 = (x301/(x302%(x303-x304)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 8013127147LLU;
	volatile uint64_t t56 = 51491408LLU;

	t56 = (x305/(x306%(x307-x308)));

	if (t56 != 5223542030LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MAX;
	int32_t t57 = -1054972682;

	t57 = (x309/(x310%(x311-x312)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x319 = 6;
	uint8_t x320 = UINT8_MAX;

	t58 = (x317/(x318%(x319-x320)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x329 = -188309975704527011LL;
	static uint32_t x330 = UINT32_MAX;
	volatile uint64_t t59 = 3LLU;

	t59 = (x329/(x330%(x331-x332)));

	if (t59 != 4251122964LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x334 = INT16_MIN;
	volatile uint64_t x335 = 34422357405125334LLU;
	uint16_t x336 = 1U;
	static uint64_t t60 = 46218788LLU;

	t60 = (x333/(x334%(x335-x336)));

	if (t60 != 599LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = -1;
	volatile int16_t x339 = INT16_MIN;
	volatile uint8_t x340 = UINT8_MAX;
	static int32_t t61 = 1207857;

	t61 = (x337/(x338%(x339-x340)));

	if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x341 = INT64_MIN;
	volatile int16_t x342 = INT16_MIN;
	static uint8_t x343 = 3U;
	static volatile uint32_t x344 = 5448U;
	volatile int64_t t62 = 34170177730222LL;

	t62 = (x341/(x342%(x343-x344)));

	if (t62 != -2147500032LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x345 = INT32_MIN;
	int32_t x346 = INT32_MAX;
	int8_t x347 = INT8_MIN;
	volatile uint32_t x348 = 57196U;
	volatile uint32_t t63 = 293422U;

	t63 = (x345/(x346%(x347-x348)));

	if (t63 != 1U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x349 = -1;
	volatile int64_t x352 = INT64_MAX;
	int64_t t64 = 130360616LL;

	t64 = (x349/(x350%(x351-x352)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x357 = INT32_MAX;
	uint16_t x358 = UINT16_MAX;
	uint32_t x359 = 812441014U;
	uint8_t x360 = 59U;

	t65 = (x357/(x358%(x359-x360)));

	if (t65 != 32768U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x362 = -1LL;
	int8_t x363 = INT8_MIN;
	int64_t x364 = -1LL;
	static int64_t t66 = 2141069580952LL;

	t66 = (x361/(x362%(x363-x364)));

	if (t66 != -32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x370 = -1;
	int16_t x371 = -1;
	uint64_t x372 = 785818230196LLU;
	volatile uint64_t t67 = 703879882307772990LLU;

	t67 = (x369/(x370%(x371-x372)));

	if (t67 != 23474568LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x375 = 5U;
	int32_t x376 = 0;
	volatile uint64_t t68 = 166883855LLU;

	t68 = (x373/(x374%(x375-x376)));

	if (t68 != 9223372036854759424LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x377 = -4672457;
	int32_t x378 = INT32_MAX;
	int16_t x380 = 2029;

	t69 = (x377/(x378%(x379-x380)));

	if (t69 != -5733) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MIN;
	volatile int16_t x383 = -1;
	int64_t t70 = 7031951047811LL;

	t70 = (x381/(x382%(x383-x384)));

	if (t70 != 1152921504606846976LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = 3001;
	volatile uint32_t x387 = UINT32_MAX;
	int64_t t71 = -573546250673759388LL;

	t71 = (x385/(x386%(x387-x388)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x389 = INT8_MAX;
	uint8_t x390 = 108U;
	int64_t t72 = 10440LL;

	t72 = (x389/(x390%(x391-x392)));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x393 = INT32_MAX;
	static volatile int16_t x394 = 77;
	uint8_t x395 = 41U;

	t73 = (x393/(x394%(x395-x396)));

	if (t73 != 61356675U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x397 = INT8_MAX;

	t74 = (x397/(x398%(x399-x400)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x402 = 17966008;
	int32_t x403 = INT32_MIN;
	volatile int64_t x404 = -1LL;
	static volatile int64_t t75 = -95768364976440LL;

	t75 = (x401/(x402%(x403-x404)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MAX;
	int64_t x406 = 108423891398123336LL;
	int8_t x407 = INT8_MIN;
	uint8_t x408 = UINT8_MAX;
	int64_t t76 = -7646LL;

	t76 = (x405/(x406%(x407-x408)));

	if (t76 != 8012998LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = 345723802551243786LLU;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;
	volatile uint64_t t77 = 63928LLU;

	t77 = (x409/(x410%(x411-x412)));

	if (t77 != 26LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x413 = INT32_MIN;
	int16_t x414 = INT16_MIN;
	static volatile int8_t x415 = 47;
	int16_t x416 = INT16_MIN;
	volatile int32_t t78 = -1;

	t78 = (x413/(x414%(x415-x416)));

	if (t78 != 65536) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x417 = UINT64_MAX;
	int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t79 = 258335942896LLU;

	t79 = (x417/(x418%(x419-x420)));

	if (t79 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x421 = INT32_MIN;
	static int64_t x422 = 3723322511LL;
	volatile int8_t x423 = -30;
	volatile uint32_t x424 = 4U;
	volatile int64_t t80 = -254443032344LL;

	t80 = (x421/(x422%(x423-x424)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x425 = INT8_MIN;
	volatile int64_t x426 = INT64_MAX;
	uint64_t x427 = 3009836998LLU;
	int16_t x428 = -9153;
	uint64_t t81 = 3LLU;

	t81 = (x425/(x426%(x427-x428)));

	if (t81 != 46774589731LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint32_t x429 = 18680758U;
	volatile int32_t x430 = INT32_MAX;
	volatile uint8_t x431 = UINT8_MAX;
	int32_t x432 = INT32_MAX;

	t82 = (x429/(x430%(x431-x432)));

	if (t82 != 73257U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x437 = -1;
	volatile uint32_t x439 = 299U;
	volatile uint32_t x440 = 2744U;
	volatile uint32_t t83 = 7381201U;

	t83 = (x437/(x438%(x439-x440)));

	if (t83 != 9276387U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x445 = 1783U;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = 187658821LL;
	int64_t t84 = 386LL;

	t84 = (x445/(x446%(x447-x448)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x457 = 10;
	int16_t x458 = INT16_MIN;
	static volatile int8_t x459 = 35;
	static uint8_t x460 = 20U;
	int32_t t85 = 522;

	t85 = (x457/(x458%(x459-x460)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x461 = UINT32_MAX;
	static uint16_t x462 = UINT16_MAX;
	volatile uint16_t x463 = UINT16_MAX;
	int16_t x464 = -1;
	volatile uint32_t t86 = 374U;

	t86 = (x461/(x462%(x463-x464)));

	if (t86 != 65537U) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x477 = 23704620LLU;
	int8_t x478 = -1;
	int32_t x480 = INT32_MAX;
	volatile uint64_t t87 = 6928388LLU;

	t87 = (x477/(x478%(x479-x480)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x481 = -32546LL;
	static int8_t x482 = -1;
	static uint8_t x484 = 7U;
	volatile int64_t t88 = -1386105765229891339LL;

	t88 = (x481/(x482%(x483-x484)));

	if (t88 != 32546LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x485 = INT16_MIN;
	static uint16_t x486 = 1917U;
	int32_t t89 = 721920696;

	t89 = (x485/(x486%(x487-x488)));

	if (t89 != -5461) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x489 = 45U;
	uint64_t x490 = 431LLU;
	uint32_t x491 = 163728999U;
	uint64_t t90 = 13LLU;

	t90 = (x489/(x490%(x491-x492)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x494 = 67U;
	static int32_t x495 = INT32_MIN;
	volatile int32_t t91 = 0;

	t91 = (x493/(x494%(x495-x496)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x497 = 22685335425248320LLU;
	uint32_t x498 = UINT32_MAX;
	int16_t x499 = INT16_MIN;
	static int32_t x500 = -1;

	t92 = (x497/(x498%(x499-x500)));

	if (t92 != 692343753441LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x502 = 3U;
	int32_t x503 = 25;
	int64_t x504 = -57286895079565LL;

	t93 = (x501/(x502%(x503-x504)));

	if (t93 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x509 = 7U;
	static int32_t x510 = INT32_MIN;
	uint8_t x511 = 28U;
	static int64_t t94 = 1LL;

	t94 = (x509/(x510%(x511-x512)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x521 = UINT32_MAX;
	volatile int16_t x523 = INT16_MIN;
	int64_t x524 = INT64_MIN;
	static int64_t t95 = 427114682LL;

	t95 = (x521/(x522%(x523-x524)));

	if (t95 != -4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x529 = 711917109U;
	static uint32_t x530 = UINT32_MAX;
	int64_t x531 = 1662LL;
	uint32_t x532 = UINT32_MAX;
	static volatile int64_t t96 = 118311720875954429LL;

	t96 = (x529/(x530%(x531-x532)));

	if (t96 != 428349LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x550 = 22764000U;
	static uint8_t x551 = UINT8_MAX;
	int8_t x552 = INT8_MIN;
	static volatile uint64_t t97 = 5699796321407181390LLU;

	t97 = (x549/(x550%(x551-x552)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x561 = INT32_MIN;
	static uint32_t x562 = 25981463U;
	uint32_t x563 = UINT32_MAX;
	static int16_t x564 = INT16_MIN;
	uint32_t t98 = 9U;

	t98 = (x561/(x562%(x563-x564)));

	if (t98 != 71585U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x573 = UINT64_MAX;
	volatile uint8_t x574 = 6U;
	int8_t x576 = INT8_MIN;
	uint64_t t99 = 75585757422999997LLU;

	t99 = (x573/(x574%(x575-x576)));

	if (t99 != 3074457345618258602LLU) { NG(); } else { ; }
	
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

