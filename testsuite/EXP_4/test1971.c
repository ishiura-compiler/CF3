#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
int32_t t4 = 658771;
int16_t x24 = INT16_MAX;
int32_t t5 = 214473;
int8_t x30 = INT8_MIN;
int16_t x33 = -13713;
uint8_t x44 = UINT8_MAX;
uint32_t x45 = 2152U;
static volatile int64_t x49 = INT64_MAX;
uint32_t x51 = 274304295U;
volatile uint16_t x52 = 7U;
volatile int8_t x55 = INT8_MIN;
int64_t x57 = -1LL;
int16_t x60 = INT16_MAX;
int32_t x63 = INT32_MIN;
int64_t x64 = INT64_MIN;
volatile int32_t t16 = -6795;
int16_t x71 = -421;
volatile int32_t x89 = INT32_MIN;
uint64_t x90 = 14276823LLU;
static uint8_t x92 = UINT8_MAX;
int64_t x95 = INT64_MIN;
static uint8_t x97 = 1U;
int8_t x102 = -32;
int8_t x107 = INT8_MIN;
static volatile int32_t t26 = 1000827;
int32_t t27 = 5461976;
uint16_t x121 = 423U;
static volatile int8_t x134 = INT8_MIN;
int16_t x136 = INT16_MIN;
static int16_t x143 = INT16_MIN;
int8_t x146 = INT8_MAX;
volatile int64_t x147 = -1LL;
volatile int64_t x174 = 1564393707570571LL;
volatile int32_t t43 = -42;
int32_t t47 = 174546078;
uint16_t x195 = 212U;
volatile int32_t t48 = 100217630;
uint8_t x197 = 29U;
uint64_t x199 = UINT64_MAX;
volatile int32_t x202 = -38;
int16_t x204 = INT16_MAX;
static volatile int32_t t51 = -17;
volatile int32_t t53 = -464144;
volatile int16_t x220 = -1;
int16_t x224 = INT16_MIN;
uint64_t x225 = 744547LLU;
int64_t x231 = 495042120LL;
int32_t t58 = 338;
static int32_t x238 = -1;
int16_t x249 = INT16_MIN;
static int8_t x255 = INT8_MAX;
volatile int32_t x257 = 10117682;
int8_t x259 = -8;
int32_t t64 = -2482974;
uint32_t x268 = 11593608U;
static uint16_t x276 = 10U;
volatile int64_t x279 = -1LL;
static uint8_t x281 = 3U;
volatile int32_t t70 = -500;
static int32_t x286 = INT32_MIN;
static volatile int32_t t71 = 18071096;
volatile int32_t x291 = INT32_MAX;
static volatile int32_t t72 = 1;
volatile int32_t x298 = INT32_MIN;
volatile int8_t x301 = 15;
int64_t x302 = -3LL;
volatile int32_t x306 = -351846351;
volatile int64_t x307 = -13551064607497LL;
int8_t x310 = INT8_MIN;
uint32_t x315 = 43273936U;
static int16_t x316 = INT16_MIN;
int8_t x319 = -1;
uint32_t x322 = 119U;
int64_t x335 = INT64_MAX;
int16_t x338 = INT16_MIN;
int64_t x345 = 74127LL;
int64_t x354 = INT64_MIN;
static int64_t x356 = INT64_MAX;
static int64_t x359 = INT64_MAX;
volatile int32_t t89 = 109;
static int32_t x361 = INT32_MAX;
static uint64_t x369 = UINT64_MAX;
uint8_t x370 = UINT8_MAX;
uint32_t x373 = UINT32_MAX;
volatile int8_t x381 = -1;
int16_t x386 = -1;
uint8_t x397 = 6U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile uint16_t x3 = 17255U;
	int64_t x4 = -53358906714476LL;
	int32_t t0 = -150;

	t0 = (x1==(x2<(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5U;
	uint32_t x6 = 226229U;
	static int64_t x7 = INT64_MAX;
	int64_t x8 = 815260478LL;
	static int32_t t1 = 118924;

	t1 = (x5==(x6<(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	volatile int64_t x10 = -1LL;
	uint32_t x11 = UINT32_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = 7;

	t2 = (x9==(x10<(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -986713299;
	volatile uint64_t x14 = 104841126879471520LLU;
	int8_t x15 = 1;
	int16_t x16 = -1;
	volatile int32_t t3 = -57571;

	t3 = (x13==(x14<(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = -1LL;
	uint8_t x18 = UINT8_MAX;
	int8_t x19 = -11;
	static int64_t x20 = INT64_MIN;

	t4 = (x17==(x18<(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	int32_t x22 = -1;
	int16_t x23 = 1;

	t5 = (x21==(x22<(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 117;
	int16_t x26 = INT16_MAX;
	static int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	volatile int32_t t6 = 20095664;

	t6 = (x25==(x26<(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 1U;
	int32_t x31 = INT32_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -2579;

	t7 = (x29==(x30<(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -631;
	uint32_t x35 = 142U;
	uint64_t x36 = 378622721880801LLU;
	volatile int32_t t8 = 311556782;

	t8 = (x33==(x34<(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int8_t x38 = INT8_MIN;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = 4;
	static volatile int32_t t9 = 207864;

	t9 = (x37==(x38<(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 15100;
	static int16_t x42 = 89;
	int32_t x43 = INT32_MIN;
	static volatile int32_t t10 = -302264;

	t10 = (x41==(x42<(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x46 = 3;
	uint16_t x47 = 1U;
	static int8_t x48 = -1;
	static volatile int32_t t11 = -61992897;

	t11 = (x45==(x46<(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MIN;
	static volatile int32_t t12 = 0;

	t12 = (x49==(x50<(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int16_t x54 = 7;
	static int64_t x56 = -1LL;
	int32_t t13 = -87;

	t13 = (x53==(x54<(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	int32_t t14 = -56;

	t14 = (x57==(x58<(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 86385U;
	volatile uint32_t x62 = 48U;
	int32_t t15 = 72116;

	t15 = (x61==(x62<(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x65 = 6U;
	static uint16_t x66 = UINT16_MAX;
	int64_t x67 = -8389LL;
	static int32_t x68 = -1;

	t16 = (x65==(x66<(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	uint16_t x70 = 1U;
	uint8_t x72 = UINT8_MAX;
	int32_t t17 = 247993529;

	t17 = (x69==(x70<(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = UINT64_MAX;
	static int32_t x76 = 412;
	static volatile int32_t t18 = 2013;

	t18 = (x73==(x74<(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	static int32_t x78 = INT32_MIN;
	uint64_t x79 = 142098568LLU;
	volatile int32_t x80 = -6224858;
	int32_t t19 = 0;

	t19 = (x77==(x78<(x79|x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = 330751794LL;
	static uint16_t x82 = UINT16_MAX;
	volatile int8_t x83 = -61;
	int8_t x84 = INT8_MAX;
	int32_t t20 = -443;

	t20 = (x81==(x82<(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = -1;
	int64_t x86 = INT64_MAX;
	uint16_t x87 = 7U;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -5;

	t21 = (x85==(x86<(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x91 = 5602590221339LLU;
	static int32_t t22 = -448293;

	t22 = (x89==(x90<(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile int64_t x94 = INT64_MAX;
	static int32_t x96 = 7676491;
	int32_t t23 = -761899;

	t23 = (x93==(x94<(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -1;
	uint32_t x99 = 514571594U;
	int64_t x100 = INT64_MIN;
	volatile int32_t t24 = 26;

	t24 = (x97==(x98<(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 3U;
	int64_t x103 = -1LL;
	static int16_t x104 = -1;
	volatile int32_t t25 = 27193;

	t25 = (x101==(x102<(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	int64_t x106 = INT64_MIN;
	uint16_t x108 = 87U;

	t26 = (x105==(x106<(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x109 = 7812U;
	static int16_t x110 = INT16_MAX;
	int64_t x111 = INT64_MIN;
	int64_t x112 = 15616044273858LL;

	t27 = (x109==(x110<(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 6U;
	uint64_t x114 = 43614302299584LLU;
	volatile uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MIN;
	volatile int32_t t28 = 552875075;

	t28 = (x113==(x114<(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int64_t x118 = -196944610683285LL;
	int8_t x119 = 20;
	volatile int64_t x120 = INT64_MAX;
	volatile int32_t t29 = 298704951;

	t29 = (x117==(x118<(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MAX;
	static int64_t x123 = INT64_MIN;
	uint16_t x124 = 17571U;
	volatile int32_t t30 = -369071866;

	t30 = (x121==(x122<(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 1986628LLU;
	int16_t x126 = -1;
	volatile int64_t x127 = 15489LL;
	uint64_t x128 = 375186367689582LLU;
	static volatile int32_t t31 = -482;

	t31 = (x125==(x126<(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	uint8_t x130 = UINT8_MAX;
	volatile int16_t x131 = INT16_MIN;
	uint16_t x132 = UINT16_MAX;
	static int32_t t32 = -8343;

	t32 = (x129==(x130<(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static int16_t x135 = INT16_MAX;
	int32_t t33 = 29;

	t33 = (x133==(x134<(x135|x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = 3741;
	uint8_t x138 = UINT8_MAX;
	static volatile uint64_t x139 = UINT64_MAX;
	volatile int16_t x140 = 412;
	int32_t t34 = -92738;

	t34 = (x137==(x138<(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x141 = INT64_MIN;
	uint16_t x142 = 0U;
	int8_t x144 = INT8_MIN;
	int32_t t35 = 28786;

	t35 = (x141==(x142<(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int32_t x148 = INT32_MIN;
	volatile int32_t t36 = 1675;

	t36 = (x145==(x146<(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 500885017703909LLU;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MAX;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = -12540594;

	t37 = (x149==(x150<(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 0;
	static int32_t x154 = INT32_MIN;
	uint8_t x155 = 24U;
	int64_t x156 = -1LL;
	int32_t t38 = -16980;

	t38 = (x153==(x154<(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = 3U;
	uint8_t x158 = UINT8_MAX;
	int32_t x159 = INT32_MIN;
	volatile int8_t x160 = 2;
	int32_t t39 = 4;

	t39 = (x157==(x158<(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -1;
	int16_t x162 = 687;
	uint64_t x163 = 4980LLU;
	uint8_t x164 = 1U;
	static volatile int32_t t40 = -1;

	t40 = (x161==(x162<(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x165 = UINT16_MAX;
	volatile int64_t x166 = INT64_MAX;
	volatile int32_t x167 = INT32_MAX;
	uint8_t x168 = 3U;
	int32_t t41 = 0;

	t41 = (x165==(x166<(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	volatile uint8_t x170 = UINT8_MAX;
	static uint32_t x171 = 0U;
	uint32_t x172 = 142U;
	static volatile int32_t t42 = -29560;

	t42 = (x169==(x170<(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x173 = 6677LLU;
	uint32_t x175 = UINT32_MAX;
	static int16_t x176 = INT16_MIN;

	t43 = (x173==(x174<(x175|x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -1;
	static uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MIN;
	int16_t x180 = 1;
	int32_t t44 = 58793886;

	t44 = (x177==(x178<(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = INT32_MIN;
	static uint8_t x182 = 6U;
	int32_t x183 = INT32_MIN;
	int16_t x184 = 43;
	static volatile int32_t t45 = -2800435;

	t45 = (x181==(x182<(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = UINT64_MAX;
	int16_t x186 = INT16_MIN;
	volatile uint16_t x187 = 178U;
	uint64_t x188 = 20813427LLU;
	int32_t t46 = 13459570;

	t46 = (x185==(x186<(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -634;
	static int16_t x190 = -1025;
	uint16_t x191 = 0U;
	uint8_t x192 = 4U;

	t47 = (x189==(x190<(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x193 = 30U;
	int16_t x194 = INT16_MAX;
	int16_t x196 = INT16_MIN;

	t48 = (x193==(x194<(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x198 = INT16_MAX;
	int32_t x200 = -1;
	static int32_t t49 = -5533799;

	t49 = (x197==(x198<(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = 3549679;
	uint64_t x203 = 5884235582899057LLU;
	int32_t t50 = -79204774;

	t50 = (x201==(x202<(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -720772544;
	uint32_t x206 = UINT32_MAX;
	static int64_t x207 = -2401677323520916LL;
	volatile uint32_t x208 = 130936U;

	t51 = (x205==(x206<(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x209 = UINT8_MAX;
	static uint8_t x210 = UINT8_MAX;
	int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	static int32_t t52 = -1;

	t52 = (x209==(x210<(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x213 = INT8_MIN;
	int8_t x214 = INT8_MIN;
	int32_t x215 = -23837;
	uint32_t x216 = 958U;

	t53 = (x213==(x214<(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -102554;
	int64_t x218 = -2847684LL;
	uint64_t x219 = 1533LLU;
	int32_t t54 = 2068944;

	t54 = (x217==(x218<(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 3390U;
	int8_t x222 = -1;
	int8_t x223 = -1;
	volatile int32_t t55 = 511005;

	t55 = (x221==(x222<(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x226 = 430LL;
	volatile int32_t x227 = -493;
	int8_t x228 = 51;
	int32_t t56 = -117340754;

	t56 = (x225==(x226<(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int32_t x230 = INT32_MIN;
	int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -15524;

	t57 = (x229==(x230<(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	volatile int64_t x234 = 445347009453902LL;
	uint8_t x235 = 6U;
	int64_t x236 = -2063510296626651842LL;

	t58 = (x233==(x234<(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 538U;
	int16_t x239 = -1;
	uint32_t x240 = UINT32_MAX;
	int32_t t59 = 423;

	t59 = (x237==(x238<(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MAX;
	int16_t x242 = INT16_MIN;
	volatile int16_t x243 = INT16_MIN;
	volatile uint8_t x244 = UINT8_MAX;
	volatile int32_t t60 = 44108;

	t60 = (x241==(x242<(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	volatile int32_t x247 = INT32_MAX;
	volatile int16_t x248 = -1;
	int32_t t61 = -15534;

	t61 = (x245==(x246<(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x250 = 414318LL;
	uint8_t x251 = UINT8_MAX;
	volatile int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -310667;

	t62 = (x249==(x250<(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 774268785LLU;
	int32_t x254 = INT32_MIN;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t63 = 5589885;

	t63 = (x253==(x254<(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = UINT64_MAX;
	volatile int64_t x260 = INT64_MIN;

	t64 = (x257==(x258<(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = -1;
	int32_t x262 = 19240059;
	static int32_t x263 = INT32_MIN;
	volatile int32_t x264 = INT32_MAX;
	int32_t t65 = -832817693;

	t65 = (x261==(x262<(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int64_t x266 = -279649104LL;
	static int8_t x267 = INT8_MIN;
	volatile int32_t t66 = -3424;

	t66 = (x265==(x266<(x267|x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = INT64_MIN;
	int8_t x270 = INT8_MAX;
	uint64_t x271 = 6454885039837187755LLU;
	int64_t x272 = -1LL;
	int32_t t67 = -5;

	t67 = (x269==(x270<(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	uint32_t x274 = 211384165U;
	int32_t x275 = 11138;
	volatile int32_t t68 = -34;

	t68 = (x273==(x274<(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	static int32_t x278 = INT32_MIN;
	int8_t x280 = INT8_MAX;
	static int32_t t69 = 13041;

	t69 = (x277==(x278<(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MAX;
	int8_t x283 = -1;
	uint32_t x284 = 779U;

	t70 = (x281==(x282<(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = 645256313224287LL;
	static volatile uint64_t x287 = UINT64_MAX;
	int64_t x288 = INT64_MIN;

	t71 = (x285==(x286<(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	int32_t x292 = -1;

	t72 = (x289==(x290<(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	uint32_t x294 = 481567U;
	int32_t x295 = INT32_MAX;
	int64_t x296 = INT64_MIN;
	int32_t t73 = 3121682;

	t73 = (x293==(x294<(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = -1;
	static int64_t x299 = INT64_MAX;
	int8_t x300 = INT8_MAX;
	volatile int32_t t74 = -209267938;

	t74 = (x297==(x298<(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x303 = -1;
	uint16_t x304 = 1U;
	static volatile int32_t t75 = 56484;

	t75 = (x301==(x302<(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	uint64_t x308 = UINT64_MAX;
	volatile int32_t t76 = -3;

	t76 = (x305==(x306<(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x309 = 71060U;
	static volatile int16_t x311 = INT16_MIN;
	volatile uint8_t x312 = 19U;
	volatile int32_t t77 = 1415154;

	t77 = (x309==(x310<(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -103782342LL;
	volatile int64_t x314 = 8530834064LL;
	volatile int32_t t78 = 481;

	t78 = (x313==(x314<(x315|x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 6U;
	int16_t x318 = 660;
	volatile int16_t x320 = INT16_MIN;
	volatile int32_t t79 = 1988;

	t79 = (x317==(x318<(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -11225;
	int16_t x323 = INT16_MAX;
	int64_t x324 = -1LL;
	volatile int32_t t80 = -654;

	t80 = (x321==(x322<(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MAX;
	uint64_t x326 = 365452227633369LLU;
	static int16_t x327 = INT16_MAX;
	uint8_t x328 = UINT8_MAX;
	int32_t t81 = 1363008;

	t81 = (x325==(x326<(x327|x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	static int8_t x330 = 1;
	uint32_t x331 = 636922U;
	static int8_t x332 = INT8_MIN;
	int32_t t82 = -15576;

	t82 = (x329==(x330<(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 3832U;
	static int64_t x334 = -168727LL;
	volatile uint8_t x336 = 9U;
	int32_t t83 = 26861075;

	t83 = (x333==(x334<(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MIN;
	int16_t x339 = -1;
	volatile uint32_t x340 = UINT32_MAX;
	int32_t t84 = 1955;

	t84 = (x337==(x338<(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = INT64_MIN;
	static volatile uint16_t x342 = 34U;
	volatile int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	static volatile int32_t t85 = -979614305;

	t85 = (x341==(x342<(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x346 = 769LLU;
	volatile int64_t x347 = -1524338931328LL;
	int64_t x348 = INT64_MAX;
	int32_t t86 = 1;

	t86 = (x345==(x346<(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 0U;
	int8_t x350 = INT8_MAX;
	static int16_t x351 = 227;
	int64_t x352 = INT64_MIN;
	static volatile int32_t t87 = -350183;

	t87 = (x349==(x350<(x351|x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	static uint32_t x355 = 14292466U;
	int32_t t88 = 111169;

	t88 = (x353==(x354<(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x358 = 13U;
	volatile int32_t x360 = INT32_MIN;

	t89 = (x357==(x358<(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x362 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	int8_t x364 = -1;
	static volatile int32_t t90 = 804415441;

	t90 = (x361==(x362<(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	static uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	volatile uint16_t x368 = 18U;
	volatile int32_t t91 = -902;

	t91 = (x365==(x366<(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x371 = INT8_MIN;
	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t92 = -91655;

	t92 = (x369==(x370<(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	int8_t x375 = INT8_MAX;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = -606;

	t93 = (x373==(x374<(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x378 = -4072LL;
	int32_t x379 = INT32_MIN;
	static uint16_t x380 = 4U;
	static volatile int32_t t94 = 3516980;

	t94 = (x377==(x378<(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = INT16_MIN;
	volatile int8_t x383 = -1;
	volatile int64_t x384 = INT64_MIN;
	volatile int32_t t95 = -350;

	t95 = (x381==(x382<(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 12;
	static volatile int64_t x387 = INT64_MAX;
	int64_t x388 = -1LL;
	volatile int32_t t96 = 0;

	t96 = (x385==(x386<(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = 47;
	int16_t x390 = INT16_MAX;
	static int64_t x391 = -1LL;
	static int16_t x392 = INT16_MIN;
	int32_t t97 = -121;

	t97 = (x389==(x390<(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = 80124;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	static uint32_t x396 = 466U;
	int32_t t98 = -467213939;

	t98 = (x393==(x394<(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = -3;
	int16_t x399 = INT16_MIN;
	int16_t x400 = INT16_MIN;
	static int32_t t99 = -490;

	t99 = (x397==(x398<(x399|x400)));

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

