#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 50944LL;
volatile uint32_t x5 = UINT32_MAX;
static int64_t t1 = 2478239LL;
int32_t t5 = 2490;
int32_t x26 = -49500801;
int64_t x27 = INT64_MIN;
static int32_t x28 = -377003;
int8_t x37 = -3;
volatile int64_t t8 = -12833373572050LL;
volatile int64_t x46 = INT64_MAX;
static int32_t x47 = INT32_MAX;
int16_t x65 = -1;
uint32_t x74 = 183U;
volatile uint32_t x78 = UINT32_MAX;
volatile uint8_t x84 = 0U;
uint64_t x86 = 50911LLU;
uint64_t t20 = 48458239940399LLU;
static int8_t x92 = 0;
uint64_t x95 = 58208LLU;
volatile int32_t x96 = -3;
int8_t x114 = -1;
volatile int64_t x121 = INT64_MAX;
uint64_t x123 = UINT64_MAX;
static volatile int8_t x124 = INT8_MIN;
int8_t x127 = INT8_MIN;
static int16_t x128 = INT16_MAX;
uint32_t x131 = 32050035U;
uint32_t x132 = 85764U;
int8_t x138 = -1;
int32_t x140 = INT32_MAX;
static int8_t x143 = INT8_MAX;
volatile uint8_t x148 = 5U;
int8_t x159 = INT8_MAX;
uint32_t x162 = 551015386U;
volatile uint64_t t39 = 63463516LLU;
uint64_t x168 = UINT64_MAX;
int32_t x176 = 2176620;
volatile uint32_t t42 = 98U;
static int32_t x178 = -23;
int32_t x185 = -16326;
volatile int8_t x196 = INT8_MAX;
int64_t x207 = -1LL;
volatile int32_t x208 = INT32_MIN;
uint16_t x210 = UINT16_MAX;
uint8_t x211 = UINT8_MAX;
int16_t x213 = 2092;
int64_t x219 = -1LL;
int32_t x222 = INT32_MIN;
static int64_t x223 = 111LL;
int16_t x227 = INT16_MIN;
int32_t x230 = INT32_MIN;
int16_t x237 = -5062;
int8_t x242 = 3;
volatile uint32_t t59 = 493U;
uint64_t t60 = 2695481097LLU;
volatile int32_t t61 = 7;
static int8_t x261 = INT8_MIN;
int32_t x264 = 17128;
volatile uint32_t t62 = 160410008U;
static int64_t t65 = -4821808644LL;
uint64_t x278 = 5163LLU;
uint16_t x291 = 14841U;
int32_t x292 = 5455;
volatile uint32_t t70 = 2163979U;
int8_t x300 = 5;
int16_t x305 = -1;
int32_t t73 = 1884;
int32_t x309 = INT32_MIN;
volatile int64_t x314 = -1LL;
static uint64_t x320 = 49LLU;
static uint64_t t76 = 2053855527LLU;
int64_t t77 = -11611LL;
static int8_t x331 = -1;
uint64_t x332 = 332862323596LLU;
int8_t x335 = INT8_MIN;
volatile int16_t x336 = 0;
static int8_t x339 = INT8_MIN;
int64_t x342 = -31277297LL;
static volatile int64_t t82 = 54152156257679184LL;
int32_t x351 = 1;
static volatile uint32_t t84 = 1685816591U;
int16_t x355 = 2;
int64_t t86 = INT64_MIN;
static uint8_t x361 = 18U;
volatile uint8_t x363 = UINT8_MAX;
int16_t x366 = -1;
volatile int32_t t88 = INT32_MIN;
int64_t x372 = INT64_MIN;
int64_t t89 = 3531563911LL;
static uint64_t x377 = 5183909856270418533LLU;
int8_t x382 = INT8_MIN;
int8_t x383 = INT8_MIN;
int64_t x386 = -1LL;
int8_t x387 = INT8_MIN;
uint8_t x396 = UINT8_MAX;
int8_t x404 = INT8_MIN;
uint64_t x405 = 142LLU;
uint32_t x408 = 239366U;


void f0(void) {
	volatile int8_t x1 = 1;
	int16_t x2 = INT16_MAX;
	static volatile int64_t x3 = INT64_MAX;
	static int16_t x4 = 6229;

	t0 = (x1^(x2/(x3|x4)));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -6977;
	volatile int64_t x7 = INT64_MIN;
	int8_t x8 = -1;

	t1 = (x5^(x6/(x7|x8)));

	if (t1 != 4294960318LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = UINT8_MAX;
	uint32_t x10 = 1558U;
	int8_t x11 = INT8_MAX;
	int64_t x12 = INT64_MIN;
	int64_t t2 = -126LL;

	t2 = (x9^(x10/(x11|x12)));

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	static int8_t x14 = INT8_MIN;
	static uint8_t x15 = 12U;
	int16_t x16 = INT16_MIN;
	int32_t t3 = -51356110;

	t3 = (x13^(x14/(x15|x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = UINT32_MAX;
	static int32_t x18 = INT32_MAX;
	int64_t x19 = INT64_MIN;
	int32_t x20 = -1;
	volatile int64_t t4 = -34588531281291258LL;

	t4 = (x17^(x18/(x19|x20)));

	if (t4 != -2147483650LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 1740U;
	int8_t x22 = INT8_MIN;
	int8_t x23 = -1;
	int32_t x24 = 169770;

	t5 = (x21^(x22/(x23|x24)));

	if (t5 != 1612) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 0U;
	int64_t t6 = 172LL;

	t6 = (x25^(x26/(x27|x28)));

	if (t6 != 131LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 2522U;
	static uint16_t x30 = 0U;
	static int16_t x31 = -1;
	int8_t x32 = INT8_MIN;
	static volatile int32_t t7 = 6854807;

	t7 = (x29^(x30/(x31|x32)));

	if (t7 != 2522) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x38 = -4131089647119983LL;
	uint8_t x39 = 7U;
	uint32_t x40 = 693U;

	t8 = (x37^(x38/(x39|x40)));

	if (t8 != 5944013880745LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 58505582202021301LLU;
	int64_t x43 = INT64_MAX;
	volatile int32_t x44 = INT32_MIN;
	uint64_t t9 = 14506LLU;

	t9 = (x41^(x42/(x43|x44)));

	if (t9 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	volatile int8_t x48 = -1;
	volatile int64_t t10 = -2LL;

	t10 = (x45^(x46/(x47|x48)));

	if (t10 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 170U;
	int16_t x50 = -1;
	uint64_t x51 = 0LLU;
	int16_t x52 = -1;
	static uint64_t t11 = 469289997456844268LLU;

	t11 = (x49^(x50/(x51|x52)));

	if (t11 != 171LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = INT16_MIN;
	int32_t x55 = INT32_MAX;
	int32_t x56 = -1;
	static volatile int32_t t12 = 174199;

	t12 = (x53^(x54/(x55|x56)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = INT32_MAX;
	int8_t x58 = 1;
	int8_t x59 = INT8_MIN;
	int16_t x60 = -1;
	volatile int32_t t13 = INT32_MIN;

	t13 = (x57^(x58/(x59|x60)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	int64_t x62 = 34LL;
	uint8_t x63 = 110U;
	uint64_t x64 = UINT64_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x61^(x62/(x63|x64)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = 28LL;
	volatile int64_t x67 = INT64_MAX;
	volatile uint8_t x68 = UINT8_MAX;
	volatile int64_t t15 = 148942779LL;

	t15 = (x65^(x66/(x67|x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x69 = INT32_MAX;
	int64_t x70 = INT64_MIN;
	volatile int64_t x71 = 727258367711479LL;
	volatile int32_t x72 = INT32_MIN;
	static volatile int64_t t16 = 0LL;

	t16 = (x69^(x70/(x71|x72)));

	if (t16 != 6130498671LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = -1;
	static int16_t x75 = 6;
	int16_t x76 = 3051;
	uint32_t t17 = UINT32_MAX;

	t17 = (x73^(x74/(x75|x76)));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -10;
	int32_t x79 = INT32_MIN;
	int8_t x80 = -1;
	volatile uint32_t t18 = 902619U;

	t18 = (x77^(x78/(x79|x80)));

	if (t18 != 4294967287U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -44666948357667LL;
	uint64_t x82 = 5414LLU;
	int8_t x83 = -3;
	volatile uint64_t t19 = 785015LLU;

	t19 = (x81^(x82/(x83|x84)));

	if (t19 != 18446699406761193949LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = INT64_MIN;
	int16_t x87 = INT16_MAX;
	volatile int64_t x88 = 66541981332LL;

	t20 = (x85^(x86/(x87|x88)));

	if (t20 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = -1;
	int16_t x90 = INT16_MIN;
	uint16_t x91 = 93U;
	int32_t t21 = 18451;

	t21 = (x89^(x90/(x91|x92)));

	if (t21 != 351) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = 1;
	int16_t x94 = 15671;
	static uint64_t t22 = 17120943926LLU;

	t22 = (x93^(x94/(x95|x96)));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	volatile int64_t x98 = INT64_MIN;
	volatile uint64_t x99 = 31402721555226101LLU;
	uint32_t x100 = 857U;
	volatile uint64_t t23 = 21272LLU;

	t23 = (x97^(x98/(x99|x100)));

	if (t23 != 32474LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -1LL;
	int8_t x102 = -4;
	volatile int16_t x103 = -11312;
	volatile uint8_t x104 = UINT8_MAX;
	volatile int64_t t24 = 430LL;

	t24 = (x101^(x102/(x103|x104)));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = 12;
	int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = UINT16_MAX;
	volatile uint32_t t25 = 4U;

	t25 = (x105^(x106/(x107|x108)));

	if (t25 != 12U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = -271LL;
	int32_t x110 = INT32_MAX;
	volatile int64_t x111 = 1LL;
	uint32_t x112 = 4U;
	int64_t t26 = -1573092283243432937LL;

	t26 = (x109^(x110/(x111|x112)));

	if (t26 != -429496472LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	uint64_t x115 = 1303565555029686LLU;
	uint64_t x116 = 7978190336110LLU;
	uint64_t t27 = 3201LLU;

	t27 = (x113^(x114/(x115|x116)));

	if (t27 != 13827LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	volatile uint32_t x118 = UINT32_MAX;
	int64_t x119 = 4664470100581LL;
	int32_t x120 = INT32_MIN;
	int64_t t28 = -56473355492LL;

	t28 = (x117^(x118/(x119|x120)));

	if (t28 != 32766LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x122 = 1625912193315800871LLU;
	static uint64_t t29 = 187395LLU;

	t29 = (x121^(x122/(x123|x124)));

	if (t29 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	static int8_t x126 = -4;
	volatile int32_t t30 = -2278;

	t30 = (x125^(x126/(x127|x128)));

	if (t30 != 65531) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	volatile uint8_t x130 = 1U;
	volatile uint32_t t31 = 16295U;

	t31 = (x129^(x130/(x131|x132)));

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x133 = -1;
	uint32_t x134 = 332277614U;
	static int16_t x135 = -1;
	volatile int16_t x136 = -1258;
	uint32_t t32 = UINT32_MAX;

	t32 = (x133^(x134/(x135|x136)));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x137 = -1;
	uint8_t x139 = 99U;
	volatile int32_t t33 = 101717;

	t33 = (x137^(x138/(x139|x140)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -3;
	int64_t x142 = INT64_MIN;
	uint64_t x144 = 24105866080LLU;
	uint64_t t34 = 17LLU;

	t34 = (x141^(x142/(x143|x144)));

	if (t34 != 18446744073326932213LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 434862745U;
	int32_t x146 = -43;
	static int8_t x147 = INT8_MAX;
	uint32_t t35 = 0U;

	t35 = (x145^(x146/(x147|x148)));

	if (t35 != 434862745U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = -1;
	static volatile int8_t x150 = INT8_MIN;
	int32_t x151 = -1;
	int32_t x152 = INT32_MIN;
	int32_t t36 = 0;

	t36 = (x149^(x150/(x151|x152)));

	if (t36 != -129) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = 9;
	uint8_t x154 = 2U;
	int16_t x155 = 0;
	volatile int8_t x156 = -1;
	static volatile int32_t t37 = 1;

	t37 = (x153^(x154/(x155|x156)));

	if (t37 != -9) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = INT64_MIN;
	static int64_t x158 = INT64_MIN;
	volatile int64_t x160 = INT64_MIN;
	int64_t t38 = -54603725LL;

	t38 = (x157^(x158/(x159|x160)));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 1795LLU;
	static int16_t x163 = INT16_MIN;
	int16_t x164 = INT16_MAX;

	t39 = (x161^(x162/(x163|x164)));

	if (t39 != 1795LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -214;
	uint16_t x166 = 105U;
	static int32_t x167 = INT32_MIN;
	static uint64_t t40 = 7506LLU;

	t40 = (x165^(x166/(x167|x168)));

	if (t40 != 18446744073709551402LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 8845U;
	uint8_t x170 = UINT8_MAX;
	volatile uint32_t x171 = UINT32_MAX;
	static int32_t x172 = -8628;
	volatile uint32_t t41 = 2107U;

	t41 = (x169^(x170/(x171|x172)));

	if (t41 != 8845U) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint32_t x174 = UINT32_MAX;
	static volatile int16_t x175 = INT16_MAX;

	t42 = (x173^(x174/(x175|x176)));

	if (t42 != 2147485604U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = -1;
	static int64_t x179 = INT64_MIN;
	int32_t x180 = 0;
	int64_t t43 = 9LL;

	t43 = (x177^(x178/(x179|x180)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = INT8_MAX;
	volatile int32_t x182 = 0;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = 0;
	int64_t t44 = -4238489LL;

	t44 = (x181^(x182/(x183|x184)));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x186 = 3046193;
	int8_t x187 = -1;
	volatile int32_t x188 = -21834355;
	volatile int32_t t45 = 2732393;

	t45 = (x185^(x186/(x187|x188)));

	if (t45 != 3032309) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 23691LLU;
	int16_t x194 = 55;
	int16_t x195 = -1;
	volatile uint64_t t46 = 213220001288LLU;

	t46 = (x193^(x194/(x195|x196)));

	if (t46 != 18446744073709527874LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = INT16_MAX;
	int16_t x198 = -1;
	volatile int8_t x199 = INT8_MIN;
	uint64_t x200 = 14303954542291LLU;
	volatile uint64_t t47 = 3457221035LLU;

	t47 = (x197^(x198/(x199|x200)));

	if (t47 != 32766LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = 0;
	int32_t x202 = INT32_MAX;
	volatile int64_t x203 = -2374216LL;
	static int64_t x204 = 5LL;
	static int64_t t48 = -152229459601LL;

	t48 = (x201^(x202/(x203|x204)));

	if (t48 != -904LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	int64_t t49 = -2002714961786LL;

	t49 = (x205^(x206/(x207|x208)));

	if (t49 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x209 = -3;
	volatile int8_t x212 = -1;
	static int32_t t50 = 95420352;

	t50 = (x209^(x210/(x211|x212)));

	if (t50 != 65532) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x214 = -1;
	uint16_t x215 = 250U;
	int16_t x216 = INT16_MIN;
	volatile int32_t t51 = -108983;

	t51 = (x213^(x214/(x215|x216)));

	if (t51 != 2092) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 2U;
	int32_t x218 = INT32_MAX;
	static uint64_t x220 = UINT64_MAX;
	uint64_t t52 = 203217870085002LLU;

	t52 = (x217^(x218/(x219|x220)));

	if (t52 != 2LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x221 = 1440917U;
	static int32_t x224 = -1;
	int64_t t53 = -801602LL;

	t53 = (x221^(x222/(x223|x224)));

	if (t53 != 2148924565LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = INT64_MIN;
	int64_t x228 = INT64_MIN;
	static int64_t t54 = 21547742321LL;

	t54 = (x225^(x226/(x227|x228)));

	if (t54 != -281474976743424LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x229 = INT32_MIN;
	int8_t x231 = INT8_MIN;
	static volatile uint16_t x232 = 0U;
	volatile int32_t t55 = -6413;

	t55 = (x229^(x230/(x231|x232)));

	if (t55 != -2130706432) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 5U;
	int16_t x234 = INT16_MAX;
	static int64_t x235 = INT64_MAX;
	int64_t x236 = 350505399288070LL;
	volatile int64_t t56 = -4919129901472LL;

	t56 = (x233^(x234/(x235|x236)));

	if (t56 != 5LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x238 = INT64_MAX;
	static uint16_t x239 = 18U;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t57 = 504458LLU;

	t57 = (x237^(x238/(x239|x240)));

	if (t57 != 18446744073709546554LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x241 = INT16_MAX;
	static int64_t x243 = -1LL;
	int64_t x244 = INT64_MIN;
	int64_t t58 = 1516757562168497333LL;

	t58 = (x241^(x242/(x243|x244)));

	if (t58 != -32766LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x249 = -1;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = UINT32_MAX;
	int32_t x252 = INT32_MIN;

	t59 = (x249^(x250/(x251|x252)));

	if (t59 != 4294967294U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x253 = 510169124LLU;
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MIN;
	uint8_t x256 = UINT8_MAX;

	t60 = (x253^(x254/(x255|x256)));

	if (t60 != 18446744073199382309LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MAX;
	static volatile int8_t x259 = 0;
	int8_t x260 = -1;

	t61 = (x257^(x258/(x259|x260)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x262 = INT8_MIN;
	static uint32_t x263 = 32689378U;

	t62 = (x261^(x262/(x263|x264)));

	if (t62 != 4294967043U) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x265 = -1;
	int16_t x266 = INT16_MAX;
	uint64_t x267 = UINT64_MAX;
	static int8_t x268 = -1;
	uint64_t t63 = UINT64_MAX;

	t63 = (x265^(x266/(x267|x268)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x269 = UINT16_MAX;
	int64_t x270 = -1LL;
	uint64_t x271 = UINT64_MAX;
	int64_t x272 = -4074145447463432885LL;
	uint64_t t64 = 47990149442002LLU;

	t64 = (x269^(x270/(x271|x272)));

	if (t64 != 65534LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x273 = 850382LL;
	uint16_t x274 = UINT16_MAX;
	static int32_t x275 = -1;
	uint16_t x276 = 36U;

	t65 = (x273^(x274/(x275|x276)));

	if (t65 != -788017LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x277 = 2961U;
	static volatile uint16_t x279 = UINT16_MAX;
	volatile int8_t x280 = INT8_MIN;
	volatile uint64_t t66 = 138275631657864499LLU;

	t66 = (x277^(x278/(x279|x280)));

	if (t66 != 2961LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	int64_t x282 = -1LL;
	int16_t x283 = INT16_MIN;
	uint64_t x284 = 2651340339355LLU;
	uint64_t t67 = 26653080576527325LLU;

	t67 = (x281^(x282/(x283|x284)));

	if (t67 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -1;
	int64_t x286 = INT64_MAX;
	static int64_t x287 = -795141932991207LL;
	int16_t x288 = -1;
	static volatile int64_t t68 = -253LL;

	t68 = (x285^(x286/(x287|x288)));

	if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	static int32_t x290 = -1;
	int32_t t69 = -151425170;

	t69 = (x289^(x290/(x291|x292)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x293 = INT16_MIN;
	static volatile int8_t x294 = INT8_MAX;
	uint32_t x295 = UINT32_MAX;
	uint8_t x296 = 1U;

	t70 = (x293^(x294/(x295|x296)));

	if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x297 = INT8_MIN;
	static int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	volatile int64_t t71 = 929597970LL;

	t71 = (x297^(x298/(x299|x300)));

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x301 = 202104U;
	int64_t x302 = -971392245LL;
	static int16_t x303 = -1;
	int64_t x304 = INT64_MIN;
	volatile int64_t t72 = 2819510LL;

	t72 = (x301^(x302/(x303|x304)));

	if (t72 != 971329933LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x306 = 31;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = INT8_MAX;

	t73 = (x305^(x306/(x307|x308)));

	if (t73 != 30) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x310 = UINT64_MAX;
	static uint64_t x311 = UINT64_MAX;
	static int16_t x312 = -1;
	uint64_t t74 = 584595542296928169LLU;

	t74 = (x309^(x310/(x311|x312)));

	if (t74 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x313 = 29U;
	int32_t x315 = -478;
	int16_t x316 = INT16_MAX;
	int64_t t75 = -253LL;

	t75 = (x313^(x314/(x315|x316)));

	if (t75 != 28LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x317 = 2;
	int8_t x318 = INT8_MIN;
	volatile int8_t x319 = INT8_MAX;

	t76 = (x317^(x318/(x319|x320)));

	if (t76 != 145249953336295683LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = -2716;
	static int32_t x322 = 44567094;
	volatile int64_t x323 = INT64_MAX;
	uint8_t x324 = UINT8_MAX;

	t77 = (x321^(x322/(x323|x324)));

	if (t77 != -2716LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x325 = INT8_MAX;
	int32_t x326 = -1;
	uint16_t x327 = 0U;
	uint8_t x328 = UINT8_MAX;
	int32_t t78 = -36280030;

	t78 = (x325^(x326/(x327|x328)));

	if (t78 != 127) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	uint32_t x330 = 2923U;
	uint64_t t79 = 351407681456339LLU;

	t79 = (x329^(x330/(x331|x332)));

	if (t79 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x333 = 4820309LLU;
	volatile int64_t x334 = -1LL;
	static volatile uint64_t t80 = 18543LLU;

	t80 = (x333^(x334/(x335|x336)));

	if (t80 != 4820309LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x337 = 9LLU;
	static uint8_t x338 = 0U;
	uint32_t x340 = UINT32_MAX;
	volatile uint64_t t81 = 3755257685539484545LLU;

	t81 = (x337^(x338/(x339|x340)));

	if (t81 != 9LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x341 = INT64_MIN;
	int16_t x343 = -1;
	static volatile uint8_t x344 = 7U;

	t82 = (x341^(x342/(x343|x344)));

	if (t82 != -9223372036823498511LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x345 = 6561U;
	volatile int8_t x346 = INT8_MAX;
	static int32_t x347 = INT32_MAX;
	static volatile int8_t x348 = -30;
	volatile int32_t t83 = 109;

	t83 = (x345^(x346/(x347|x348)));

	if (t83 != -6624) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x349 = 10903U;
	int32_t x350 = -1;
	static volatile int16_t x352 = INT16_MAX;

	t84 = (x349^(x350/(x351|x352)));

	if (t84 != 10903U) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x353 = 185;
	int64_t x354 = INT64_MAX;
	uint16_t x356 = UINT16_MAX;
	int64_t t85 = -41559727454LL;

	t85 = (x353^(x354/(x355|x356)));

	if (t85 != 140739635871929LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	uint32_t x360 = 3527192U;

	t86 = (x357^(x358/(x359|x360)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x362 = 549678557923011LL;
	volatile uint64_t x364 = 145388941290LLU;
	uint64_t t87 = 442339LLU;

	t87 = (x361^(x362/(x363|x364)));

	if (t87 != 3798LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	int8_t x367 = INT8_MAX;
	uint16_t x368 = UINT16_MAX;

	t88 = (x365^(x366/(x367|x368)));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x369 = INT32_MAX;
	static int64_t x370 = INT64_MAX;
	int64_t x371 = -63591195296LL;

	t89 = (x369^(x370/(x371|x372)));

	if (t89 != -2002441997LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MAX;
	static int32_t x374 = -1;
	int16_t x375 = -1;
	int32_t x376 = INT32_MIN;
	static volatile int32_t t90 = 351275097;

	t90 = (x373^(x374/(x375|x376)));

	if (t90 != 126) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x378 = 22U;
	int8_t x379 = INT8_MAX;
	static int8_t x380 = INT8_MAX;
	volatile uint64_t t91 = 4690756576LLU;

	t91 = (x377^(x378/(x379|x380)));

	if (t91 != 5183909856270418533LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x381 = 31783U;
	uint32_t x384 = 128U;
	volatile uint32_t t92 = 12656768U;

	t92 = (x381^(x382/(x383|x384)));

	if (t92 != 31782U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x385 = 385036;
	static volatile uint32_t x388 = 360197U;
	int64_t t93 = -324446794445653639LL;

	t93 = (x385^(x386/(x387|x388)));

	if (t93 != 385036LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x389 = -31054;
	int64_t x390 = -81529066943LL;
	static int32_t x391 = INT32_MAX;
	int16_t x392 = -1520;
	volatile int64_t t94 = 2LL;

	t94 = (x389^(x390/(x391|x392)));

	if (t94 != -81529056499LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = -1;
	int32_t x394 = -1;
	uint64_t x395 = UINT64_MAX;
	volatile uint64_t t95 = 2LLU;

	t95 = (x393^(x394/(x395|x396)));

	if (t95 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = 466;
	static uint64_t x399 = UINT64_MAX;
	static int32_t x400 = INT32_MIN;
	uint64_t t96 = 1045300042833038800LLU;

	t96 = (x397^(x398/(x399|x400)));

	if (t96 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x401 = 60282092U;
	int8_t x402 = INT8_MIN;
	static volatile int8_t x403 = INT8_MIN;
	volatile uint32_t t97 = 5233U;

	t97 = (x401^(x402/(x403|x404)));

	if (t97 != 60282093U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x406 = 301U;
	int16_t x407 = INT16_MIN;
	volatile uint64_t t98 = 22595798062LLU;

	t98 = (x405^(x406/(x407|x408)));

	if (t98 != 142LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x413 = 1;
	volatile int8_t x414 = INT8_MAX;
	static uint16_t x415 = UINT16_MAX;
	int32_t x416 = INT32_MIN;
	volatile int32_t t99 = 1339;

	t99 = (x413^(x414/(x415|x416)));

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

