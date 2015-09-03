#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 168950339137LLU;
uint64_t x8 = UINT64_MAX;
static volatile uint64_t t2 = 1295478920001LLU;
int8_t x14 = 1;
volatile uint32_t x16 = UINT32_MAX;
volatile uint32_t t3 = 615144U;
static uint64_t t4 = 131701269LLU;
static int16_t x21 = 32;
static int8_t x24 = INT8_MIN;
volatile uint32_t x25 = 3783126U;
int32_t x30 = -3;
static int64_t x40 = -1LL;
static volatile uint32_t x47 = 9130108U;
static int16_t x50 = -72;
uint32_t x52 = 27282U;
static volatile int64_t x64 = INT64_MAX;
static int64_t x71 = -1LL;
int64_t x72 = 10705LL;
int32_t x75 = 2;
volatile int8_t x83 = INT8_MAX;
static int8_t x88 = INT8_MIN;
uint64_t x90 = 822674812402823LLU;
uint64_t t22 = 2LLU;
volatile uint64_t x93 = 1302LLU;
uint64_t x97 = 7343927775571LLU;
int8_t x98 = INT8_MIN;
volatile uint16_t x101 = UINT16_MAX;
volatile uint64_t x104 = 605613916472756686LLU;
static uint64_t t25 = 805009505614LLU;
int64_t x111 = INT64_MIN;
int16_t x112 = -1;
int64_t t26 = -1LL;
volatile int8_t x118 = 1;
static volatile int64_t x124 = INT64_MAX;
static uint32_t x125 = 7927U;
volatile int8_t x130 = INT8_MIN;
int64_t x133 = INT64_MIN;
int64_t x144 = -1LL;
int32_t x148 = 881;
uint16_t x149 = 4159U;
uint32_t x150 = 9474011U;
static int8_t x153 = INT8_MAX;
static volatile int64_t x161 = 3LL;
int32_t x164 = 1921630;
uint16_t x170 = 9784U;
uint8_t x172 = UINT8_MAX;
int64_t t41 = -483475939858530LL;
volatile int16_t x179 = INT16_MIN;
int64_t t42 = 996472331736LL;
int16_t x182 = INT16_MIN;
int16_t x185 = -1;
int16_t x196 = -1;
static volatile uint64_t t46 = 1590913072062LLU;
static uint8_t x199 = 6U;
int8_t x207 = INT8_MIN;
uint16_t x210 = 127U;
static volatile int32_t t50 = -3853;
int32_t x221 = -1;
volatile uint64_t t53 = 84297077LLU;
static uint16_t x225 = 252U;
volatile int16_t x232 = -7;
static int8_t x235 = INT8_MAX;
volatile int32_t t56 = -29932301;
int64_t x245 = INT64_MIN;
int16_t x248 = INT16_MIN;
int64_t t59 = -2519238977LL;
uint64_t t60 = 1909126LLU;
int64_t x254 = INT64_MAX;
uint16_t x259 = 606U;
volatile int64_t t62 = 0LL;
volatile uint32_t x265 = 178533U;
int32_t x266 = 1;
int8_t x268 = INT8_MIN;
volatile int64_t t65 = 242449357282LL;
uint64_t x275 = 9977353420733697LLU;
uint16_t x280 = 16165U;
volatile uint64_t t67 = 15894318997611LLU;
volatile int64_t x283 = -6854LL;
uint64_t t68 = 37535474836LLU;
int32_t x285 = INT32_MAX;
uint32_t x288 = 480024U;
int16_t x289 = 10935;
int32_t x292 = INT32_MAX;
volatile int32_t t72 = 23026;
int64_t x303 = 68701633818LL;
static volatile int32_t x305 = INT32_MIN;
uint32_t x317 = UINT32_MAX;
int64_t t75 = 626824711323931LL;
static volatile int32_t x327 = INT32_MAX;
int64_t x330 = INT64_MIN;
uint32_t x331 = 498U;
int16_t x340 = -1;
int16_t x342 = INT16_MIN;
int8_t x343 = -1;
int16_t x351 = INT16_MIN;
volatile uint64_t t84 = 414030134LLU;
volatile int32_t t85 = 0;
int32_t x369 = -10256765;
int16_t x374 = INT16_MAX;
int64_t x380 = -1LL;
volatile uint16_t x385 = 89U;
int16_t x388 = INT16_MIN;
static int8_t x389 = INT8_MIN;
static int64_t x392 = INT64_MAX;
int32_t x393 = 262;
uint8_t x396 = UINT8_MAX;
int16_t x397 = INT16_MAX;
volatile int64_t x416 = -102022604LL;
volatile uint64_t t97 = 2866678677523945745LLU;
int8_t x419 = 0;
int64_t x420 = -1LL;
int8_t x423 = INT8_MAX;


void f0(void) {
	int8_t x1 = -1;
	volatile int64_t x2 = INT64_MAX;
	uint64_t x3 = 1751343503157LLU;
	int16_t x4 = INT16_MAX;

	t0 = (x1/(x2+(x3%x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	volatile uint64_t x6 = 2551LLU;
	uint32_t x7 = 2362684U;
	uint64_t t1 = 8409130829966218LLU;

	t1 = (x5/(x6+(x7%x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 2345LLU;
	int16_t x10 = 1;
	static int16_t x11 = -1;
	uint32_t x12 = 852U;

	t2 = (x9/(x10+(x11%x12)));

	if (t2 != 6LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 5058;
	int16_t x15 = INT16_MAX;

	t3 = (x13/(x14+(x15%x16)));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 1641358814406LLU;
	static int8_t x18 = INT8_MAX;
	uint64_t x19 = 86665471793954383LLU;
	int8_t x20 = INT8_MAX;

	t4 = (x17/(x18+(x19%x20)));

	if (t4 != 10388346926LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = UINT8_MAX;
	int32_t x23 = -1;
	volatile int32_t t5 = 0;

	t5 = (x21/(x22+(x23%x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = UINT32_MAX;
	int64_t x27 = -3043733LL;
	volatile int64_t x28 = -1LL;
	int64_t t6 = -512943LL;

	t6 = (x25/(x26+(x27%x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MIN;
	volatile int32_t x31 = 1;
	int8_t x32 = 57;
	static volatile int64_t t7 = -172051LL;

	t7 = (x29/(x30+(x31%x32)));

	if (t7 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -27LL;
	int32_t x34 = -58730144;
	uint64_t x35 = 666165629500645889LLU;
	int64_t x36 = -36LL;
	uint64_t t8 = 1041688LLU;

	t8 = (x33/(x34+(x35%x36)));

	if (t8 != 27LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	volatile int64_t x38 = -1LL;
	static int64_t x39 = -5540LL;
	int64_t t9 = -22619940LL;

	t9 = (x37/(x38+(x39%x40)));

	if (t9 != -65535LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x41 = -1;
	int64_t x42 = 7117112LL;
	volatile int16_t x43 = -1;
	int8_t x44 = INT8_MAX;
	int64_t t10 = 125950038947727488LL;

	t10 = (x41/(x42+(x43%x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	volatile int32_t x46 = -1;
	int64_t x48 = -1LL;
	int64_t t11 = 39966024270530499LL;

	t11 = (x45/(x46+(x47%x48)));

	if (t11 != 128LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 10;
	int16_t x51 = -1;
	uint32_t t12 = 43U;

	t12 = (x49/(x50+(x51%x52)));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	int64_t x54 = -1LL;
	volatile uint32_t x55 = UINT32_MAX;
	static volatile int16_t x56 = 4;
	volatile int64_t t13 = 4818697181053403LL;

	t13 = (x53/(x54+(x55%x56)));

	if (t13 != 63LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 7037U;
	static int16_t x58 = INT16_MAX;
	int64_t x59 = INT64_MIN;
	volatile uint8_t x60 = 1U;
	static volatile int64_t t14 = -358249110LL;

	t14 = (x57/(x58+(x59%x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int32_t x62 = -134029885;
	uint8_t x63 = 6U;
	static volatile int64_t t15 = 897876497073385701LL;

	t15 = (x61/(x62+(x63%x64)));

	if (t15 != -68815790222LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 7U;
	static int64_t x66 = INT64_MIN;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MIN;
	int64_t t16 = 66317963217LL;

	t16 = (x65/(x66+(x67%x68)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	uint8_t x70 = UINT8_MAX;
	int64_t t17 = -29196241349499LL;

	t17 = (x69/(x70+(x71%x72)));

	if (t17 != -36312488334073920LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MAX;
	int8_t x74 = -1;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 0U;

	t18 = (x73/(x74+(x75%x76)));

	if (t18 != 127U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int8_t x78 = 3;
	int32_t x79 = -1;
	uint32_t x80 = 484702U;
	static int64_t t19 = -3277809034373492LL;

	t19 = (x77/(x78+(x79%x80)));

	if (t19 != -403189894949063LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint16_t x81 = 1457U;
	int16_t x82 = INT16_MIN;
	static uint16_t x84 = 2958U;
	static int32_t t20 = 66618883;

	t20 = (x81/(x82+(x83%x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -7;
	uint8_t x86 = 25U;
	static int16_t x87 = -1;
	int32_t t21 = -4303;

	t21 = (x85/(x86+(x87%x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x89 = INT32_MIN;
	int32_t x91 = -19;
	int16_t x92 = INT16_MIN;

	t22 = (x89/(x90+(x91%x92)));

	if (t22 != 22422LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint8_t x94 = 25U;
	static volatile int16_t x95 = INT16_MAX;
	uint32_t x96 = 8227535U;
	volatile uint64_t t23 = 3151447240971121594LLU;

	t23 = (x93/(x94+(x95%x96)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint32_t x99 = 1443U;
	int32_t x100 = INT32_MIN;
	volatile uint64_t t24 = 2001161949277644LLU;

	t24 = (x97/(x98+(x99%x100)));

	if (t24 != 5584735951LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = INT8_MIN;
	static int8_t x103 = -1;

	t25 = (x101/(x102+(x103%x104)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = -1;
	uint32_t x110 = 952967U;

	t26 = (x109/(x110+(x111%x112)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;
	volatile uint32_t t27 = 2540197U;

	t27 = (x117/(x118+(x119%x120)));

	if (t27 != 33554431U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = 0;
	int16_t x122 = INT16_MAX;
	int64_t x123 = -458LL;
	int64_t t28 = 1LL;

	t28 = (x121/(x122+(x123%x124)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MAX;
	int16_t x127 = INT16_MIN;
	uint64_t x128 = 1LLU;
	volatile uint64_t t29 = 339LLU;

	t29 = (x125/(x126+(x127%x128)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x129 = 1249LLU;
	volatile uint16_t x131 = UINT16_MAX;
	static int8_t x132 = INT8_MIN;
	volatile uint64_t t30 = 5329316084383215LLU;

	t30 = (x129/(x130+(x131%x132)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x134 = -256186;
	int16_t x135 = 24;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t31 = 13389109295670696LLU;

	t31 = (x133/(x134+(x135%x136)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	volatile int64_t x138 = INT64_MIN;
	int64_t x139 = INT64_MAX;
	int8_t x140 = INT8_MIN;
	static int64_t t32 = -51960LL;

	t32 = (x137/(x138+(x139%x140)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x141 = 420617162179LLU;
	int64_t x142 = -1LL;
	volatile uint8_t x143 = UINT8_MAX;
	volatile uint64_t t33 = 1LLU;

	t33 = (x141/(x142+(x143%x144)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x145 = 32LLU;
	static volatile uint16_t x146 = 228U;
	static int32_t x147 = INT32_MAX;
	uint64_t t34 = 23551925246LLU;

	t34 = (x145/(x146+(x147%x148)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x151 = -160;
	int16_t x152 = INT16_MIN;
	static uint32_t t35 = 1U;

	t35 = (x149/(x150+(x151%x152)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	int8_t x156 = -1;
	int32_t t36 = -122;

	t36 = (x153/(x154+(x155%x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = INT64_MAX;
	int64_t x158 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	volatile int64_t t37 = 818296798LL;

	t37 = (x157/(x158+(x159%x160)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x162 = UINT64_MAX;
	int32_t x163 = -1;
	volatile uint64_t t38 = 12494LLU;

	t38 = (x161/(x162+(x163%x164)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	volatile int32_t x166 = INT32_MAX;
	int32_t x167 = -1;
	int8_t x168 = -1;
	volatile int32_t t39 = -267119643;

	t39 = (x165/(x166+(x167%x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int64_t x171 = INT64_MIN;
	volatile int64_t t40 = 59945LL;

	t40 = (x169/(x170+(x171%x172)));

	if (t40 != -955195944164744LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = 227707364LL;
	static int16_t x174 = -1;
	int8_t x175 = -4;
	int64_t x176 = INT64_MIN;

	t41 = (x173/(x174+(x175%x176)));

	if (t41 != -45541472LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x177 = 510618913231LL;
	int64_t x178 = -37171150LL;
	uint8_t x180 = UINT8_MAX;

	t42 = (x177/(x178+(x179%x180)));

	if (t42 != -13736LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	static int8_t x183 = INT8_MAX;
	static volatile uint64_t x184 = 193529LLU;
	uint64_t t43 = 23LLU;

	t43 = (x181/(x182+(x183%x184)));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x186 = UINT16_MAX;
	uint32_t x187 = 1293U;
	int32_t x188 = -1;
	uint32_t t44 = 31U;

	t44 = (x185/(x186+(x187%x188)));

	if (t44 != 64268U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = INT64_MAX;
	uint16_t x190 = UINT16_MAX;
	static int16_t x191 = INT16_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t45 = -126626302LL;

	t45 = (x189/(x190+(x191%x192)));

	if (t45 != 281483566907400LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x193 = -43;
	uint64_t x194 = 7681231653394517169LLU;
	int64_t x195 = INT64_MAX;

	t46 = (x193/(x194+(x195%x196)));

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MIN;
	uint16_t x198 = 2253U;
	int64_t x200 = INT64_MIN;
	volatile int64_t t47 = 1425LL;

	t47 = (x197/(x198+(x199%x200)));

	if (t47 != -950634LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = UINT64_MAX;
	static volatile int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MAX;
	static uint64_t t48 = 915633LLU;

	t48 = (x201/(x202+(x203%x204)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x205 = 1;
	static uint64_t x206 = 553280733053842LLU;
	static volatile int8_t x208 = 1;
	static volatile uint64_t t49 = 2642754139LLU;

	t49 = (x205/(x206+(x207%x208)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	int16_t x211 = -1;
	static int32_t x212 = -841;

	t50 = (x209/(x210+(x211%x212)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MIN;
	static volatile uint16_t x214 = 56U;
	int64_t x215 = INT64_MAX;
	static int64_t x216 = INT64_MAX;
	static int64_t t51 = 536847599LL;

	t51 = (x213/(x214+(x215%x216)));

	if (t51 != -38347922LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = -8945;
	uint32_t x218 = UINT32_MAX;
	static int32_t x219 = 52838663;
	int64_t x220 = 3774291LL;
	static volatile int64_t t52 = -4025LL;

	t52 = (x217/(x218+(x219%x220)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x222 = -1;
	volatile uint64_t x223 = 145893905493832LLU;
	int8_t x224 = INT8_MAX;

	t53 = (x221/(x222+(x223%x224)));

	if (t53 != 595056260442243600LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x226 = INT16_MIN;
	static int8_t x227 = INT8_MAX;
	int64_t x228 = INT64_MIN;
	static int64_t t54 = 3557LL;

	t54 = (x225/(x226+(x227%x228)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = INT16_MIN;
	volatile int16_t x230 = INT16_MIN;
	int32_t x231 = INT32_MAX;
	int32_t t55 = -1;

	t55 = (x229/(x230+(x231%x232)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x233 = 12U;
	int32_t x234 = -3226413;
	uint8_t x236 = UINT8_MAX;

	t56 = (x233/(x234+(x235%x236)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x237 = 755U;
	uint16_t x238 = 1575U;
	int8_t x239 = 0;
	int32_t x240 = 45653;
	volatile int32_t t57 = -5716;

	t57 = (x237/(x238+(x239%x240)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x241 = -1;
	int32_t x242 = INT32_MIN;
	int64_t x243 = -643755028861762LL;
	int16_t x244 = INT16_MIN;
	static volatile int64_t t58 = 7717450LL;

	t58 = (x241/(x242+(x243%x244)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = 19;
	int32_t x247 = INT32_MIN;

	t59 = (x245/(x246+(x247%x248)));

	if (t59 != -485440633518672410LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	int8_t x250 = 59;
	int32_t x251 = 12913;
	uint64_t x252 = 13121950923909405LLU;

	t60 = (x249/(x250+(x251%x252)));

	if (t60 != 711021587793306LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -1;
	int8_t x255 = INT8_MAX;
	int32_t x256 = -1;
	int64_t t61 = -235LL;

	t61 = (x253/(x254+(x255%x256)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -1;
	volatile int16_t x258 = INT16_MAX;
	int64_t x260 = INT64_MIN;

	t62 = (x257/(x258+(x259%x260)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int8_t x261 = INT8_MIN;
	int16_t x262 = INT16_MIN;
	int64_t x263 = 184LL;
	uint64_t x264 = 4090LLU;
	static volatile uint64_t t63 = 14LLU;

	t63 = (x261/(x262+(x263%x264)));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x267 = 9;
	volatile uint32_t t64 = 5320U;

	t64 = (x265/(x266+(x267%x268)));

	if (t64 != 17853U) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = -648165LL;
	uint16_t x270 = 1U;
	uint16_t x271 = UINT16_MAX;
	int16_t x272 = INT16_MIN;

	t65 = (x269/(x270+(x271%x272)));

	if (t65 != -19LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x273 = -1;
	static int32_t x274 = INT32_MIN;
	int16_t x276 = 3164;
	static uint64_t t66 = 15074558546166875LLU;

	t66 = (x273/(x274+(x275%x276)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = -1;
	uint64_t x279 = UINT64_MAX;

	t67 = (x277/(x278+(x279%x280)));

	if (t67 != 1233153557972428LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x281 = -7;
	uint64_t x282 = 251162LLU;
	int64_t x284 = INT64_MAX;

	t68 = (x281/(x282+(x283%x284)));

	if (t68 != 75506099160525LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x286 = UINT64_MAX;
	volatile uint16_t x287 = 6U;
	volatile uint64_t t69 = 4434LLU;

	t69 = (x285/(x286+(x287%x288)));

	if (t69 != 429496729LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MAX;
	int32_t x291 = INT32_MAX;
	int32_t t70 = -3322279;

	t70 = (x289/(x290+(x291%x292)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = INT64_MAX;
	volatile uint16_t x294 = 952U;
	uint64_t x295 = UINT64_MAX;
	static uint16_t x296 = UINT16_MAX;
	volatile uint64_t t71 = 1068231046LLU;

	t71 = (x293/(x294+(x295%x296)));

	if (t71 != 9688416005099554LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = INT32_MIN;
	static int16_t x298 = INT16_MIN;
	int8_t x299 = -1;
	volatile int32_t x300 = -5499531;

	t72 = (x297/(x298+(x299%x300)));

	if (t72 != 65534) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = -1;
	int32_t x302 = -1;
	volatile int8_t x304 = 1;
	volatile int64_t t73 = -3161027477LL;

	t73 = (x301/(x302+(x303%x304)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x306 = 7280U;
	uint8_t x307 = 117U;
	uint16_t x308 = 2260U;
	int32_t t74 = -1;

	t74 = (x305/(x306+(x307%x308)));

	if (t74 != -290318) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x318 = -49;
	volatile int32_t x319 = -1;
	volatile int64_t x320 = INT64_MIN;

	t75 = (x317/(x318+(x319%x320)));

	if (t75 != -85899345LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x321 = 1258582960U;
	static int8_t x322 = -1;
	uint8_t x323 = 12U;
	int32_t x324 = 6;
	uint32_t t76 = 115U;

	t76 = (x321/(x322+(x323%x324)));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MIN;
	uint64_t x326 = UINT64_MAX;
	int8_t x328 = -1;
	static volatile uint64_t t77 = 330183096508045447LLU;

	t77 = (x325/(x326+(x327%x328)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint64_t x329 = 126374971342LLU;
	uint16_t x332 = 2U;
	uint64_t t78 = 144278336316773LLU;

	t78 = (x329/(x330+(x331%x332)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x333 = 1635U;
	int64_t x334 = 2232306818666LL;
	uint16_t x335 = 11U;
	volatile uint8_t x336 = 2U;
	volatile int64_t t79 = -21LL;

	t79 = (x333/(x334+(x335%x336)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -30733;
	static int32_t x338 = -507;
	int8_t x339 = -1;
	int32_t t80 = -841;

	t80 = (x337/(x338+(x339%x340)));

	if (t80 != 60) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x341 = INT32_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t81 = -8851;

	t81 = (x341/(x342+(x343%x344)));

	if (t81 != -65534) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x345 = 3033U;
	uint8_t x346 = 6U;
	static int64_t x347 = -38510LL;
	uint16_t x348 = 20U;
	volatile int64_t t82 = -38685012995LL;

	t82 = (x345/(x346+(x347%x348)));

	if (t82 != -758LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = -1;
	volatile uint32_t x352 = UINT32_MAX;
	uint32_t t83 = 208U;

	t83 = (x349/(x350+(x351%x352)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = INT32_MAX;
	volatile uint16_t x354 = UINT16_MAX;
	uint16_t x355 = 277U;
	uint64_t x356 = 27861245397771894LLU;

	t84 = (x353/(x354+(x355%x356)));

	if (t84 != 32630LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = 4606;
	volatile uint8_t x358 = 27U;
	int32_t x359 = INT32_MAX;
	static int32_t x360 = INT32_MAX;

	t85 = (x357/(x358+(x359%x360)));

	if (t85 != 170) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	int8_t x363 = INT8_MAX;
	static int64_t x364 = INT64_MIN;
	int64_t t86 = 8350533157390685LL;

	t86 = (x361/(x362+(x363%x364)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x365 = 0;
	uint8_t x366 = 0U;
	uint8_t x367 = 5U;
	int64_t x368 = INT64_MIN;
	volatile int64_t t87 = 132587341858LL;

	t87 = (x365/(x366+(x367%x368)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x370 = INT64_MIN;
	int32_t x371 = 2525373;
	uint16_t x372 = UINT16_MAX;
	volatile int64_t t88 = -1LL;

	t88 = (x369/(x370+(x371%x372)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x373 = UINT16_MAX;
	int8_t x375 = INT8_MIN;
	static volatile int32_t x376 = INT32_MAX;
	int32_t t89 = 718999247;

	t89 = (x373/(x374+(x375%x376)));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x377 = -1LL;
	int8_t x378 = INT8_MAX;
	static int8_t x379 = INT8_MIN;
	volatile int64_t t90 = -8349897809102662LL;

	t90 = (x377/(x378+(x379%x380)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 6U;
	int16_t x382 = -1;
	volatile int16_t x383 = INT16_MIN;
	uint16_t x384 = 2U;
	int32_t t91 = -1;

	t91 = (x381/(x382+(x383%x384)));

	if (t91 != -6) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x386 = 16147481012897205LLU;
	uint8_t x387 = UINT8_MAX;
	uint64_t t92 = 0LLU;

	t92 = (x385/(x386+(x387%x388)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x390 = UINT8_MAX;
	uint64_t x391 = 18LLU;
	uint64_t t93 = 113550LLU;

	t93 = (x389/(x390+(x391%x392)));

	if (t93 != 67570491112489199LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = -1511160LL;
	uint64_t t94 = 13389505562295LLU;

	t94 = (x393/(x394+(x395%x396)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = INT16_MIN;
	int8_t x399 = INT8_MAX;
	int64_t x400 = INT64_MAX;
	static volatile int64_t t95 = -3591584064LL;

	t95 = (x397/(x398+(x399%x400)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x401 = INT8_MAX;
	int16_t x402 = 4;
	static int32_t x403 = INT32_MIN;
	uint32_t x404 = 62U;
	volatile uint32_t t96 = 973U;

	t96 = (x401/(x402+(x403%x404)));

	if (t96 != 21U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x413 = INT64_MIN;
	volatile uint64_t x414 = 4344056155439560LLU;
	int64_t x415 = 63760LL;

	t97 = (x413/(x414+(x415%x416)));

	if (t97 != 2123LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x417 = 5U;
	static int8_t x418 = INT8_MIN;
	int64_t t98 = -87787632672LL;

	t98 = (x417/(x418+(x419%x420)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x421 = 689754094;
	volatile int8_t x422 = INT8_MIN;
	int64_t x424 = -1LL;
	int64_t t99 = -25412642860392LL;

	t99 = (x421/(x422+(x423%x424)));

	if (t99 != -5388703LL) { NG(); } else { ; }
	
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

