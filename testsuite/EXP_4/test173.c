#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x6 = INT16_MAX;
int32_t t1 = 5351065;
volatile int8_t x9 = -1;
int8_t x22 = 4;
int64_t x25 = INT64_MIN;
volatile uint8_t x42 = 69U;
static int32_t x45 = INT32_MIN;
volatile int8_t x46 = INT8_MIN;
uint16_t x68 = UINT16_MAX;
uint16_t x69 = 393U;
static int16_t x70 = INT16_MIN;
uint8_t x71 = 1U;
int8_t x72 = INT8_MAX;
uint64_t t16 = 3861825035070LLU;
int32_t x82 = 17592990;
uint64_t x93 = 249681LLU;
int64_t x103 = 21175063952833LL;
uint8_t x105 = 2U;
uint32_t x115 = UINT32_MAX;
static uint32_t x117 = UINT32_MAX;
volatile uint8_t x118 = UINT8_MAX;
int8_t x121 = -2;
static volatile int16_t x130 = -1;
volatile int8_t x131 = INT8_MIN;
volatile int16_t x140 = -780;
volatile uint64_t t30 = 2489790791176119107LLU;
int16_t x141 = -1;
int32_t x149 = 10;
static volatile int16_t x150 = -1;
int16_t x151 = INT16_MIN;
int32_t t33 = 1;
int8_t x154 = INT8_MAX;
int32_t t34 = 810;
uint64_t x158 = 65837424514563041LLU;
int32_t x164 = INT32_MIN;
static volatile int16_t x165 = INT16_MIN;
int8_t x173 = INT8_MAX;
int16_t x175 = INT16_MIN;
uint8_t x178 = UINT8_MAX;
uint64_t x187 = 1737687352114LLU;
uint32_t x201 = 32312865U;
int64_t x210 = INT64_MIN;
static uint64_t x211 = 445LLU;
volatile int32_t x221 = -907137499;
int16_t x226 = -1;
static int16_t x230 = INT16_MIN;
uint8_t x233 = 5U;
int8_t x237 = 1;
uint8_t x246 = 2U;
uint8_t x254 = 36U;
int8_t x261 = INT8_MAX;
volatile int64_t x264 = -242091063LL;
int64_t t58 = -250648037183170LL;
uint8_t x266 = 14U;
int8_t x276 = INT8_MIN;
static int32_t x282 = -1;
int8_t x283 = INT8_MIN;
uint16_t x287 = 23U;
uint64_t t64 = 1770688147LLU;
static uint8_t x297 = 36U;
uint64_t x300 = 270927191012669967LLU;
uint64_t t66 = 28448993096543918LLU;
int16_t x307 = -7;
int16_t x309 = 38;
volatile uint8_t x314 = 3U;
volatile int32_t t69 = -43;
volatile uint8_t x319 = 3U;
volatile int32_t x332 = 419585;
static int64_t t71 = -191428499540148804LL;
uint64_t t74 = 905667003LLU;
int64_t x345 = INT64_MIN;
static uint64_t t75 = 2895LLU;
uint32_t x351 = 3151154U;
int16_t x352 = INT16_MIN;
int8_t x357 = 18;
uint64_t t79 = 106497020LLU;
uint16_t x381 = UINT16_MAX;
int8_t x382 = -15;
volatile int32_t x386 = INT32_MIN;
int8_t x387 = -1;
int32_t x391 = 303517;
volatile int64_t t84 = 8559268344134LL;
uint32_t x397 = 23U;
static int16_t x399 = INT16_MIN;
uint8_t x400 = 92U;
static uint64_t t86 = 11350LLU;
volatile uint32_t x420 = 239U;
static uint64_t x423 = 4400586637146595978LLU;
int64_t x426 = -25442664LL;
int8_t x429 = -20;
int64_t x442 = -1LL;
int16_t x448 = INT16_MAX;
volatile uint32_t x457 = 440804U;
int16_t x458 = -2756;
uint16_t x459 = UINT16_MAX;


void f0(void) {
	uint32_t x1 = 53460U;
	static int64_t x2 = 28966402004320LL;
	volatile uint64_t x3 = 7306610049556060LLU;
	uint32_t x4 = 20644439U;
	volatile uint64_t t0 = 20000721525772011LLU;

	t0 = (x1/(x2+(x3-x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 0U;
	int8_t x7 = -1;
	int32_t x8 = INT32_MAX;

	t1 = (x5/(x6+(x7-x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 2;
	int64_t x11 = 221632500470446LL;
	int16_t x12 = 5;
	int64_t t2 = -1883742LL;

	t2 = (x9/(x10+(x11-x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 237833865157LLU;
	static int32_t x14 = 3004563;
	static int32_t x15 = 4;
	uint32_t x16 = 1509U;
	volatile uint64_t t3 = 1450LLU;

	t3 = (x13/(x14+(x15-x16)));

	if (t3 != 79197LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	int32_t x23 = -1;
	static volatile int32_t x24 = INT32_MAX;
	volatile int64_t t4 = 0LL;

	t4 = (x21/(x22+(x23-x24)));

	if (t4 != 4294967304LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x26 = UINT8_MAX;
	int16_t x27 = -1444;
	int32_t x28 = 673;
	static volatile int64_t t5 = 24324003719467482LL;

	t5 = (x25/(x26+(x27-x28)));

	if (t5 != 4953475852231351LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 17U;
	static uint32_t x30 = UINT32_MAX;
	static int8_t x31 = INT8_MIN;
	uint64_t x32 = 283496785419219397LLU;
	uint64_t t6 = 1306371554429526LLU;

	t6 = (x29/(x30+(x31-x32)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = -1LL;
	static int16_t x34 = INT16_MIN;
	static int32_t x35 = -1;
	volatile int8_t x36 = INT8_MIN;
	volatile int64_t t7 = -29LL;

	t7 = (x33/(x34+(x35-x36)));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	volatile int32_t x38 = INT32_MIN;
	static uint64_t x39 = UINT64_MAX;
	static uint32_t x40 = 2316U;
	volatile uint64_t t8 = 1985LLU;

	t8 = (x37/(x38+(x39-x40)));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x41 = 0;
	int32_t x43 = 40;
	static uint8_t x44 = 1U;
	int32_t t9 = -235;

	t9 = (x41/(x42+(x43-x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x47 = -1;
	uint8_t x48 = 1U;
	int32_t t10 = -799374912;

	t10 = (x45/(x46+(x47-x48)));

	if (t10 != 16519104) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -5846984702327LL;
	int8_t x50 = -1;
	int8_t x51 = -1;
	volatile uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 10092775536549884LLU;

	t11 = (x49/(x50+(x51-x52)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = INT8_MIN;
	uint64_t x54 = 1300045765365295LLU;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	uint64_t t12 = 12802LLU;

	t12 = (x53/(x54+(x55-x56)));

	if (t12 != 14189LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = 29097664U;
	int8_t x58 = -1;
	static int64_t x59 = -1LL;
	static int32_t x60 = INT32_MIN;
	volatile int64_t t13 = -135061LL;

	t13 = (x57/(x58+(x59-x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x65 = 10U;
	uint16_t x66 = UINT16_MAX;
	uint64_t x67 = UINT64_MAX;
	static volatile uint64_t t14 = 241948778347223LLU;

	t14 = (x65/(x66+(x67-x68)));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t t15 = 1;

	t15 = (x69/(x70+(x71-x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = -1;
	volatile uint64_t x74 = 392013647186LLU;
	static int16_t x75 = 7;
	uint32_t x76 = 3550633U;

	t16 = (x73/(x74+(x75-x76)));

	if (t16 != 46546829LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 18U;
	static volatile int16_t x78 = 408;
	int8_t x79 = -1;
	int16_t x80 = 0;
	static int32_t t17 = -37787457;

	t17 = (x77/(x78+(x79-x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	static int32_t x83 = 1361;
	static uint8_t x84 = 28U;
	static int32_t t18 = -187;

	t18 = (x81/(x82+(x83-x84)));

	if (t18 != -122) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MAX;
	int8_t x91 = -1;
	int32_t x92 = -1;
	int64_t t19 = -1323LL;

	t19 = (x89/(x90+(x91-x92)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x94 = INT32_MIN;
	int32_t x95 = -1;
	static int32_t x96 = -2974345;
	uint64_t t20 = 1081685385LLU;

	t20 = (x93/(x94+(x95-x96)));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MAX;
	uint32_t x98 = 59U;
	int32_t x99 = INT32_MAX;
	static uint8_t x100 = 23U;
	volatile int64_t t21 = 1194551513772558957LL;

	t21 = (x97/(x98+(x99-x100)));

	if (t21 != 4294967226LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = UINT8_MAX;
	static volatile int32_t x104 = -1;
	volatile uint64_t t22 = 125811227LLU;

	t22 = (x101/(x102+(x103-x104)));

	if (t22 != 871154LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x106 = 251475068U;
	volatile int64_t x107 = -1LL;
	static int8_t x108 = 29;
	int64_t t23 = -5571LL;

	t23 = (x105/(x106+(x107-x108)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = -1;
	volatile int64_t x111 = INT64_MIN;
	int64_t x112 = INT64_MIN;
	volatile int64_t t24 = -107991387161335864LL;

	t24 = (x109/(x110+(x111-x112)));

	if (t24 != 2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int32_t x114 = -628584;
	static volatile uint8_t x116 = 2U;
	volatile uint64_t t25 = 19LLU;

	t25 = (x113/(x114+(x115-x116)));

	if (t25 != 4295595975LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MAX;
	volatile uint32_t t26 = 388U;

	t26 = (x117/(x118+(x119-x120)));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x122 = UINT8_MAX;
	int64_t x123 = -63329LL;
	int64_t x124 = -1LL;
	int64_t t27 = -3LL;

	t27 = (x121/(x122+(x123-x124)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = INT64_MAX;
	volatile int8_t x126 = -1;
	int8_t x127 = -6;
	int32_t x128 = INT32_MIN;
	volatile int64_t t28 = 8343830LL;

	t28 = (x125/(x126+(x127-x128)));

	if (t28 != 4294967310LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = -5634303;
	volatile int64_t x132 = INT64_MIN;
	int64_t t29 = 887074LL;

	t29 = (x129/(x130+(x131-x132)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = 495698072725196LLU;
	int64_t x138 = -1LL;
	int16_t x139 = INT16_MAX;

	t30 = (x137/(x138+(x139-x140)));

	if (t30 != 14776667046LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x142 = INT64_MIN;
	static volatile uint8_t x143 = UINT8_MAX;
	int64_t x144 = -1LL;
	int64_t t31 = 1686241414LL;

	t31 = (x141/(x142+(x143-x144)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x145 = UINT32_MAX;
	int32_t x146 = -1;
	volatile int32_t x147 = 1368913;
	volatile int8_t x148 = INT8_MIN;
	uint32_t t32 = 220U;

	t32 = (x145/(x146+(x147-x148)));

	if (t32 != 3137U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x152 = 277;

	t33 = (x149/(x150+(x151-x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x153 = UINT8_MAX;
	int32_t x155 = INT32_MAX;
	int16_t x156 = INT16_MAX;

	t34 = (x153/(x154+(x155-x156)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = UINT16_MAX;
	uint8_t x159 = 84U;
	static uint8_t x160 = 13U;
	volatile uint64_t t35 = 8659590LLU;

	t35 = (x157/(x158+(x159-x160)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = UINT32_MAX;
	uint8_t x162 = 7U;
	uint64_t x163 = 0LLU;
	uint64_t t36 = 14289751036749LLU;

	t36 = (x161/(x162+(x163-x164)));

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	int8_t x168 = -1;
	static volatile int32_t t37 = -2;

	t37 = (x165/(x166+(x167-x168)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = 185565119LL;
	int64_t x170 = INT64_MIN;
	int8_t x171 = INT8_MIN;
	uint64_t x172 = 67LLU;
	static uint64_t t38 = 536120086LLU;

	t38 = (x169/(x170+(x171-x172)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x174 = INT64_MAX;
	static int8_t x176 = -1;
	volatile int64_t t39 = -404LL;

	t39 = (x173/(x174+(x175-x176)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	uint32_t x179 = 1U;
	uint8_t x180 = 53U;
	volatile uint32_t t40 = 705503U;

	t40 = (x177/(x178+(x179-x180)));

	if (t40 != 21157312U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x185 = 4LLU;
	uint8_t x186 = 57U;
	uint16_t x188 = UINT16_MAX;
	volatile uint64_t t41 = 153358932196734876LLU;

	t41 = (x185/(x186+(x187-x188)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x189 = UINT8_MAX;
	uint64_t x190 = UINT64_MAX;
	int32_t x191 = 29;
	int8_t x192 = INT8_MIN;
	uint64_t t42 = 57592LLU;

	t42 = (x189/(x190+(x191-x192)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x197 = 21U;
	int8_t x198 = INT8_MIN;
	int32_t x199 = -3641;
	int8_t x200 = -1;
	int32_t t43 = -58542;

	t43 = (x197/(x198+(x199-x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x202 = 0;
	static int8_t x203 = INT8_MIN;
	static uint16_t x204 = UINT16_MAX;
	static uint32_t t44 = 111U;

	t44 = (x201/(x202+(x203-x204)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = -1LL;
	static int64_t x206 = INT64_MIN;
	volatile uint64_t x207 = 642488678LLU;
	int16_t x208 = 0;
	uint64_t t45 = 2217612897699LLU;

	t45 = (x205/(x206+(x207-x208)));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	uint32_t x212 = 8U;
	uint64_t t46 = 30LLU;

	t46 = (x209/(x210+(x211-x212)));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x213 = 1421;
	static volatile int8_t x214 = -1;
	static uint64_t x215 = UINT64_MAX;
	int64_t x216 = INT64_MAX;
	static volatile uint64_t t47 = 128458LLU;

	t47 = (x213/(x214+(x215-x216)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = 26;
	uint64_t x218 = 110569940742LLU;
	int64_t x219 = INT64_MIN;
	int32_t x220 = -148565;
	volatile uint64_t t48 = 32697710LLU;

	t48 = (x217/(x218+(x219-x220)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x222 = INT32_MAX;
	int8_t x223 = 5;
	int64_t x224 = 727174LL;
	volatile int64_t t49 = 10LL;

	t49 = (x221/(x222+(x223-x224)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x225 = INT16_MIN;
	static int8_t x227 = INT8_MAX;
	volatile uint8_t x228 = 2U;
	volatile int32_t t50 = -3266;

	t50 = (x225/(x226+(x227-x228)));

	if (t50 != -264) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x229 = INT32_MIN;
	volatile int32_t x231 = -276681200;
	uint32_t x232 = 531U;
	volatile uint32_t t51 = 1110U;

	t51 = (x229/(x230+(x231-x232)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x234 = 68769801595343107LLU;
	volatile uint32_t x235 = UINT32_MAX;
	int64_t x236 = INT64_MAX;
	uint64_t t52 = 1411843508845LLU;

	t52 = (x233/(x234+(x235-x236)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x238 = 74660717975530LLU;
	volatile int8_t x239 = INT8_MIN;
	static int32_t x240 = -424404;
	volatile uint64_t t53 = 11135287530LLU;

	t53 = (x237/(x238+(x239-x240)));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x241 = INT32_MIN;
	int64_t x242 = INT64_MIN;
	int8_t x243 = -1;
	volatile uint32_t x244 = 205078840U;
	volatile int64_t t54 = 31600236168LL;

	t54 = (x241/(x242+(x243-x244)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x245 = 8077U;
	volatile uint16_t x247 = 14U;
	int8_t x248 = -1;
	int32_t t55 = -176;

	t55 = (x245/(x246+(x247-x248)));

	if (t55 != 475) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x255 = -130210;
	static uint64_t x256 = 33715167244077LLU;
	uint64_t t56 = 2004930148LLU;

	t56 = (x253/(x254+(x255-x256)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x257 = 43697794988978LLU;
	int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MAX;
	volatile uint16_t x260 = 6U;
	uint64_t t57 = 1LLU;

	t57 = (x257/(x258+(x259-x260)));

	if (t57 != 20348LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x262 = -65251LL;
	int32_t x263 = INT32_MIN;

	t58 = (x261/(x262+(x263-x264)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x265 = INT8_MAX;
	int16_t x267 = 0;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t59 = 21;

	t59 = (x265/(x266+(x267-x268)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x273 = INT16_MIN;
	static int32_t x274 = INT32_MIN;
	int64_t x275 = -3LL;
	volatile int64_t t60 = -1876064988LL;

	t60 = (x273/(x274+(x275-x276)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	static int64_t x278 = INT64_MIN;
	volatile uint16_t x279 = 27U;
	uint32_t x280 = UINT32_MAX;
	int64_t t61 = 677148505927750007LL;

	t61 = (x277/(x278+(x279-x280)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x284 = UINT64_MAX;
	volatile uint64_t t62 = 1262650LLU;

	t62 = (x281/(x282+(x283-x284)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = 388773U;
	static volatile uint16_t x286 = 0U;
	int8_t x288 = INT8_MIN;
	static uint32_t t63 = 1576U;

	t63 = (x285/(x286+(x287-x288)));

	if (t63 != 2574U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = INT16_MAX;
	uint64_t x290 = 5128196263763140LLU;
	uint16_t x291 = UINT16_MAX;
	volatile uint16_t x292 = 26U;

	t64 = (x289/(x290+(x291-x292)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x298 = -842469LL;
	int64_t x299 = -8760537837175310LL;
	uint64_t t65 = 274490161787LLU;

	t65 = (x297/(x298+(x299-x300)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x301 = 13U;
	static uint64_t x302 = 113LLU;
	uint8_t x303 = 4U;
	static int8_t x304 = -1;

	t66 = (x301/(x302+(x303-x304)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = -417777291346071LL;
	int16_t x306 = INT16_MIN;
	static volatile uint8_t x308 = 1U;
	volatile int64_t t67 = -14192LL;

	t67 = (x305/(x306+(x307-x308)));

	if (t67 != 12746439203LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x310 = INT64_MIN;
	volatile uint32_t x311 = 806334831U;
	int8_t x312 = -1;
	static int64_t t68 = 2233152989LL;

	t68 = (x309/(x310+(x311-x312)));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x313 = INT8_MIN;
	uint8_t x315 = 11U;
	int16_t x316 = 224;

	t69 = (x313/(x314+(x315-x316)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 4105838U;
	static int8_t x318 = -1;
	uint16_t x320 = 0U;
	static uint32_t t70 = 15U;

	t70 = (x317/(x318+(x319-x320)));

	if (t70 != 2052919U) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x329 = INT64_MAX;
	volatile int64_t x330 = 48507160866614LL;
	int8_t x331 = INT8_MAX;

	t71 = (x329/(x330+(x331-x332)));

	if (t71 != 190144LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x333 = 847346219157602016LL;
	int32_t x334 = INT32_MAX;
	uint64_t x335 = 1122800875144944LLU;
	static int32_t x336 = INT32_MAX;
	uint64_t t72 = 1199191535280LLU;

	t72 = (x333/(x334+(x335-x336)));

	if (t72 != 754LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x337 = 39U;
	int8_t x338 = INT8_MIN;
	volatile int16_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile uint32_t t73 = 16881861U;

	t73 = (x337/(x338+(x339-x340)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x341 = 24U;
	int8_t x342 = 2;
	volatile uint32_t x343 = UINT32_MAX;
	static uint64_t x344 = 4090LLU;

	t74 = (x341/(x342+(x343-x344)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x346 = 29855910676841008LLU;
	uint16_t x347 = 1054U;
	int16_t x348 = INT16_MAX;

	t75 = (x345/(x346+(x347-x348)));

	if (t75 != 308LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = -958745985;
	static volatile uint32_t t76 = 4482044U;

	t76 = (x349/(x350+(x351-x352)));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x353 = 58U;
	static int16_t x354 = -1;
	volatile int8_t x355 = -7;
	static int64_t x356 = -229283889647142537LL;
	volatile int64_t t77 = -369796722437LL;

	t77 = (x353/(x354+(x355-x356)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x358 = -1;
	int32_t x359 = INT32_MAX;
	static uint8_t x360 = UINT8_MAX;
	int32_t t78 = -239512983;

	t78 = (x357/(x358+(x359-x360)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = -1;
	int16_t x366 = -1;
	int8_t x367 = 1;
	volatile uint64_t x368 = 4542711997LLU;

	t79 = (x365/(x366+(x367-x368)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x373 = -3;
	static int8_t x374 = 0;
	static uint16_t x375 = UINT16_MAX;
	uint8_t x376 = UINT8_MAX;
	int32_t t80 = -92969;

	t80 = (x373/(x374+(x375-x376)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x377 = -119670795109LL;
	int64_t x378 = -12871776909610LL;
	static int16_t x379 = INT16_MIN;
	int16_t x380 = 1;
	volatile int64_t t81 = -16362435LL;

	t81 = (x377/(x378+(x379-x380)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x383 = -1;
	volatile uint64_t x384 = 440362615560327299LLU;
	static volatile uint64_t t82 = 7884993156473716165LLU;

	t82 = (x381/(x382+(x383-x384)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x385 = INT32_MAX;
	int64_t x388 = 3LL;
	static volatile int64_t t83 = 1832592498043LL;

	t83 = (x385/(x386+(x387-x388)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = -54;
	int64_t x390 = INT64_MIN;
	static int64_t x392 = -411LL;

	t84 = (x389/(x390+(x391-x392)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x398 = -1;
	volatile uint32_t t85 = 1338U;

	t85 = (x397/(x398+(x399-x400)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x401 = 989513921175LLU;
	int8_t x402 = 0;
	int8_t x403 = 10;
	static int8_t x404 = -1;

	t86 = (x401/(x402+(x403-x404)));

	if (t86 != 89955811015LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = -2677;
	uint16_t x406 = 4U;
	static uint8_t x407 = 2U;
	uint16_t x408 = 101U;
	static int32_t t87 = -520831;

	t87 = (x405/(x406+(x407-x408)));

	if (t87 != 28) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x409 = UINT32_MAX;
	volatile int16_t x410 = -1;
	volatile int16_t x411 = -418;
	volatile int64_t x412 = INT64_MIN;
	volatile int64_t t88 = -23955449LL;

	t88 = (x409/(x410+(x411-x412)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x417 = 1022125884468634975LLU;
	int16_t x418 = -8225;
	volatile int32_t x419 = INT32_MIN;
	volatile uint64_t t89 = 19LLU;

	t89 = (x417/(x418+(x419-x420)));

	if (t89 != 475966331LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x421 = UINT32_MAX;
	int32_t x422 = 1817;
	volatile uint8_t x424 = 1U;
	uint64_t t90 = 1022662036LLU;

	t90 = (x421/(x422+(x423-x424)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x425 = UINT32_MAX;
	int64_t x427 = INT64_MAX;
	static int8_t x428 = 52;
	int64_t t91 = 473648150246083LL;

	t91 = (x425/(x426+(x427-x428)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x430 = INT16_MAX;
	static int64_t x431 = -1LL;
	uint8_t x432 = 26U;
	volatile int64_t t92 = -40345LL;

	t92 = (x429/(x430+(x431-x432)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x433 = INT16_MIN;
	static int32_t x434 = 344;
	uint8_t x435 = UINT8_MAX;
	int64_t x436 = -917120106031413LL;
	static volatile int64_t t93 = 1025646958079767LL;

	t93 = (x433/(x434+(x435-x436)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = INT64_MIN;
	int32_t x438 = INT32_MAX;
	static int16_t x439 = INT16_MAX;
	uint32_t x440 = UINT32_MAX;
	volatile int64_t t94 = -1LL;

	t94 = (x437/(x438+(x439-x440)));

	if (t94 != -4294901762LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x441 = 15872;
	static uint16_t x443 = UINT16_MAX;
	static volatile uint8_t x444 = UINT8_MAX;
	volatile int64_t t95 = -485846356411469LL;

	t95 = (x441/(x442+(x443-x444)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x445 = INT16_MIN;
	volatile uint32_t x446 = UINT32_MAX;
	volatile int16_t x447 = INT16_MIN;
	uint32_t t96 = 486967U;

	t96 = (x445/(x446+(x447-x448)));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x453 = INT32_MIN;
	int8_t x454 = -30;
	int8_t x455 = -2;
	int8_t x456 = 61;
	int32_t t97 = 59246;

	t97 = (x453/(x454+(x455-x456)));

	if (t97 != 23091222) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x460 = -2;
	static uint32_t t98 = 25497028U;

	t98 = (x457/(x458+(x459-x460)));

	if (t98 != 7U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x461 = -1;
	int8_t x462 = INT8_MIN;
	int64_t x463 = -1658082937LL;
	static uint16_t x464 = 9U;
	int64_t t99 = 925LL;

	t99 = (x461/(x462+(x463-x464)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

