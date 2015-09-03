#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int8_t x2 = INT8_MAX;
volatile int8_t x4 = 0;
uint32_t x5 = UINT32_MAX;
volatile uint32_t x6 = 48850U;
uint16_t x19 = 2455U;
int8_t x22 = -1;
int8_t x23 = INT8_MAX;
static volatile int16_t x25 = INT16_MIN;
volatile int8_t x29 = -7;
volatile uint8_t x38 = 58U;
volatile int32_t t8 = 504;
uint64_t x44 = 297LLU;
static volatile int64_t x45 = INT64_MIN;
volatile int32_t t17 = 29;
volatile uint64_t x90 = UINT64_MAX;
int32_t x98 = INT32_MAX;
int64_t x106 = -1LL;
int64_t x110 = INT64_MIN;
int32_t t22 = -79440;
int32_t x113 = INT32_MIN;
int64_t x114 = 9396117LL;
uint32_t x115 = 7349U;
volatile int16_t x118 = -7;
volatile int32_t t24 = 1;
static int32_t x122 = INT32_MAX;
volatile int8_t x126 = -1;
static volatile int32_t t26 = 6157;
int32_t x129 = 12;
volatile uint8_t x136 = UINT8_MAX;
int32_t x137 = INT32_MAX;
int32_t t30 = -48;
int8_t x147 = INT8_MAX;
static int8_t x150 = -2;
static uint32_t x152 = 1505428U;
static int32_t t34 = 156153;
int32_t t35 = -7308;
static uint32_t x178 = 0U;
static int32_t t38 = -40641539;
int64_t x182 = INT64_MIN;
volatile int16_t x188 = INT16_MAX;
int64_t x189 = INT64_MAX;
volatile uint16_t x190 = 24U;
int64_t x200 = INT64_MIN;
int32_t x207 = INT32_MIN;
int64_t x210 = -1696588LL;
int8_t x212 = -1;
static volatile uint16_t x216 = 2U;
int16_t x221 = -1;
uint16_t x224 = 22336U;
int32_t x227 = INT32_MAX;
uint16_t x230 = 28U;
static int8_t x231 = INT8_MIN;
volatile int32_t t51 = 127122509;
uint8_t x234 = 4U;
static volatile int64_t x237 = INT64_MIN;
int32_t x238 = -8117;
int32_t x245 = INT32_MIN;
volatile uint64_t x246 = 58285160841519751LLU;
volatile int32_t t55 = -740178;
int16_t x249 = -1;
uint64_t x250 = 12LLU;
int32_t x256 = 6;
volatile int32_t t57 = -35;
static volatile int64_t x267 = INT64_MAX;
static uint8_t x268 = 0U;
uint16_t x284 = UINT16_MAX;
volatile int32_t t64 = -60987244;
int16_t x288 = -1;
int8_t x294 = INT8_MIN;
static int32_t t67 = 3;
uint8_t x308 = UINT8_MAX;
int16_t x309 = INT16_MIN;
uint16_t x311 = 25U;
int8_t x314 = INT8_MIN;
int8_t x317 = 0;
int32_t x322 = 0;
int32_t t75 = -4566;
static uint8_t x332 = 0U;
int64_t x336 = INT64_MIN;
uint8_t x340 = 10U;
volatile uint16_t x341 = 40U;
int32_t x345 = 463376956;
volatile int8_t x350 = INT8_MIN;
int16_t x358 = -1;
int8_t x364 = -1;
volatile int8_t x370 = 0;
static int16_t x387 = INT16_MIN;
int8_t x391 = -3;
volatile int64_t x402 = 335751824668389965LL;
static volatile int32_t t93 = -130764478;
int32_t t95 = 0;
int16_t x417 = INT16_MIN;
uint8_t x419 = 1U;
static int16_t x420 = INT16_MAX;
uint32_t x426 = 225075757U;
int32_t t98 = -1025199;
volatile int32_t t99 = -75077274;


void f0(void) {
	int8_t x3 = INT8_MIN;
	volatile int32_t t0 = -836653380;

	t0 = (x1<=(x2+(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = 14827U;
	static int16_t x8 = INT16_MIN;
	volatile int32_t t1 = -470579;

	t1 = (x5<=(x6+(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -680;
	int64_t x10 = INT64_MAX;
	uint64_t x11 = 95976750827LLU;
	uint64_t x12 = 327014978311LLU;
	static int32_t t2 = -6;

	t2 = (x9<=(x10+(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MIN;
	volatile int64_t x14 = INT64_MIN;
	uint16_t x15 = 87U;
	volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -18643814;

	t3 = (x13<=(x14+(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MIN;
	int32_t x20 = INT32_MIN;
	static int32_t t4 = 27317504;

	t4 = (x17<=(x18+(x19|x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -58;
	int8_t x24 = INT8_MAX;
	int32_t t5 = -2557;

	t5 = (x21<=(x22+(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MAX;
	uint64_t x27 = UINT64_MAX;
	static int64_t x28 = INT64_MAX;
	int32_t t6 = 14632;

	t6 = (x25<=(x26+(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x30 = 2U;
	int32_t x31 = -457;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = 0;

	t7 = (x29<=(x30+(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x37 = 23U;
	static uint32_t x39 = 129498220U;
	uint16_t x40 = 9U;

	t8 = (x37<=(x38+(x39|x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x42 = 39U;
	uint16_t x43 = 6U;
	volatile int32_t t9 = -299;

	t9 = (x41<=(x42+(x43|x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x46 = UINT8_MAX;
	int8_t x47 = -1;
	uint64_t x48 = 1LLU;
	int32_t t10 = 12;

	t10 = (x45<=(x46+(x47|x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x49 = INT8_MIN;
	static int16_t x50 = -26;
	static uint16_t x51 = 2968U;
	uint16_t x52 = 50U;
	volatile int32_t t11 = -355448;

	t11 = (x49<=(x50+(x51|x52)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = 14;
	uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	volatile int32_t t12 = 5;

	t12 = (x53<=(x54+(x55|x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	uint8_t x58 = UINT8_MAX;
	uint32_t x59 = UINT32_MAX;
	int32_t x60 = INT32_MIN;
	int32_t t13 = -14;

	t13 = (x57<=(x58+(x59|x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	uint16_t x62 = 6746U;
	volatile uint32_t x63 = 6835474U;
	static volatile uint8_t x64 = 100U;
	volatile int32_t t14 = -3798829;

	t14 = (x61<=(x62+(x63|x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = -1;
	int8_t x71 = -1;
	int32_t x72 = INT32_MIN;
	static volatile int32_t t15 = 198839;

	t15 = (x69<=(x70+(x71|x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int32_t x74 = -1;
	volatile uint64_t x75 = UINT64_MAX;
	volatile int8_t x76 = -7;
	volatile int32_t t16 = 955227180;

	t16 = (x73<=(x74+(x75|x76)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x81 = 1;
	volatile int64_t x82 = -1LL;
	int64_t x83 = INT64_MIN;
	static int16_t x84 = INT16_MIN;

	t17 = (x81<=(x82+(x83|x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 165U;
	int32_t x86 = 1480808;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = -1;
	volatile int32_t t18 = 48505873;

	t18 = (x85<=(x86+(x87|x88)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x89 = UINT64_MAX;
	int32_t x91 = INT32_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t19 = 10511;

	t19 = (x89<=(x90+(x91|x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x97 = UINT64_MAX;
	static uint32_t x99 = 1U;
	static uint8_t x100 = UINT8_MAX;
	int32_t t20 = -1;

	t20 = (x97<=(x98+(x99|x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = 429LL;
	int32_t x107 = INT32_MAX;
	volatile uint32_t x108 = 261764978U;
	int32_t t21 = 51;

	t21 = (x105<=(x106+(x107|x108)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x109 = -1;
	static volatile int32_t x111 = -1;
	volatile uint32_t x112 = 116U;

	t22 = (x109<=(x110+(x111|x112)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x116 = INT8_MIN;
	int32_t t23 = 444929;

	t23 = (x113<=(x114+(x115|x116)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x117 = -1;
	static int8_t x119 = -30;
	uint64_t x120 = UINT64_MAX;

	t24 = (x117<=(x118+(x119|x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x121 = INT8_MAX;
	static int32_t x123 = INT32_MIN;
	int8_t x124 = -1;
	static int32_t t25 = -2110;

	t25 = (x121<=(x122+(x123|x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 427U;
	uint16_t x127 = UINT16_MAX;
	int16_t x128 = 3;

	t26 = (x125<=(x126+(x127|x128)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x130 = UINT64_MAX;
	uint32_t x131 = 1161U;
	static volatile int64_t x132 = INT64_MIN;
	volatile int32_t t27 = 3525826;

	t27 = (x129<=(x130+(x131|x132)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = INT16_MIN;
	int8_t x135 = 0;
	volatile int32_t t28 = -4992;

	t28 = (x133<=(x134+(x135|x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x138 = 95U;
	static int8_t x139 = INT8_MAX;
	static uint8_t x140 = 0U;
	static int32_t t29 = -1;

	t29 = (x137<=(x138+(x139|x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x141 = 67220233383LLU;
	static int8_t x142 = -1;
	volatile int32_t x143 = -1063;
	uint8_t x144 = 0U;

	t30 = (x141<=(x142+(x143|x144)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x145 = 0U;
	int8_t x146 = INT8_MIN;
	static int64_t x148 = -1LL;
	volatile int32_t t31 = -5240;

	t31 = (x145<=(x146+(x147|x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x149 = 3U;
	int64_t x151 = INT64_MAX;
	int32_t t32 = -8;

	t32 = (x149<=(x150+(x151|x152)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = INT8_MIN;
	volatile uint8_t x154 = 0U;
	static uint16_t x155 = 60U;
	int32_t x156 = -1;
	int32_t t33 = -59974118;

	t33 = (x153<=(x154+(x155|x156)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MIN;
	int64_t x158 = -1LL;
	static volatile int64_t x159 = INT64_MAX;
	uint16_t x160 = 392U;

	t34 = (x157<=(x158+(x159|x160)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x161 = INT16_MIN;
	uint32_t x162 = 6027654U;
	int32_t x163 = 0;
	int32_t x164 = 3187;

	t35 = (x161<=(x162+(x163|x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x165 = 261495438597179LL;
	int16_t x166 = -1;
	uint32_t x167 = 1638U;
	int32_t x168 = 2569;
	int32_t t36 = -31942920;

	t36 = (x165<=(x166+(x167|x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x173 = -1;
	int64_t x174 = 20870567LL;
	int8_t x175 = -1;
	volatile int32_t x176 = -1;
	static volatile int32_t t37 = -269794501;

	t37 = (x173<=(x174+(x175|x176)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 10872044LLU;
	static volatile uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MAX;

	t38 = (x177<=(x178+(x179|x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x181 = 16;
	volatile uint64_t x183 = 18106615257437LLU;
	int16_t x184 = INT16_MAX;
	int32_t t39 = 0;

	t39 = (x181<=(x182+(x183|x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x185 = 21347LLU;
	static int64_t x186 = 2422344218LL;
	static uint16_t x187 = 14U;
	volatile int32_t t40 = -48563009;

	t40 = (x185<=(x186+(x187|x188)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x191 = INT64_MIN;
	uint16_t x192 = 17U;
	int32_t t41 = -54488;

	t41 = (x189<=(x190+(x191|x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -1;
	int32_t x194 = 953827;
	static int32_t x195 = INT32_MAX;
	static uint64_t x196 = UINT64_MAX;
	int32_t t42 = 1;

	t42 = (x193<=(x194+(x195|x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 90700692689085LLU;
	static int32_t x198 = INT32_MAX;
	static volatile int64_t x199 = 11LL;
	static volatile int32_t t43 = 72675;

	t43 = (x197<=(x198+(x199|x200)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x201 = INT32_MAX;
	static volatile int8_t x202 = -30;
	volatile uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t44 = 2387;

	t44 = (x201<=(x202+(x203|x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x205 = INT64_MIN;
	int8_t x206 = -29;
	static uint32_t x208 = 1U;
	static int32_t t45 = 0;

	t45 = (x205<=(x206+(x207|x208)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 1415049U;
	int8_t x211 = INT8_MIN;
	int32_t t46 = -5;

	t46 = (x209<=(x210+(x211|x212)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x213 = -1;
	int64_t x214 = -1LL;
	static int64_t x215 = 2090980923020LL;
	volatile int32_t t47 = 116018;

	t47 = (x213<=(x214+(x215|x216)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = -4583;
	volatile int16_t x218 = INT16_MAX;
	volatile uint32_t x219 = 459U;
	int8_t x220 = INT8_MIN;
	volatile int32_t t48 = 461977;

	t48 = (x217<=(x218+(x219|x220)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x222 = UINT32_MAX;
	int16_t x223 = -8;
	int32_t t49 = -75895;

	t49 = (x221<=(x222+(x223|x224)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = INT16_MIN;
	uint64_t x228 = 4255632654993LLU;
	int32_t t50 = -107650605;

	t50 = (x225<=(x226+(x227|x228)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x229 = INT8_MAX;
	int16_t x232 = INT16_MAX;

	t51 = (x229<=(x230+(x231|x232)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = UINT16_MAX;
	static int32_t x235 = INT32_MIN;
	int64_t x236 = INT64_MAX;
	static volatile int32_t t52 = -259424335;

	t52 = (x233<=(x234+(x235|x236)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x239 = UINT8_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile int32_t t53 = -10559672;

	t53 = (x237<=(x238+(x239|x240)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x241 = -1;
	volatile int8_t x242 = -1;
	volatile int8_t x243 = INT8_MIN;
	volatile int8_t x244 = INT8_MIN;
	int32_t t54 = -56800918;

	t54 = (x241<=(x242+(x243|x244)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x247 = -147523404;
	static uint16_t x248 = 90U;

	t55 = (x245<=(x246+(x247|x248)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x251 = INT8_MAX;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t56 = -394143;

	t56 = (x249<=(x250+(x251|x252)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x253 = 602LL;
	int8_t x254 = -1;
	static int8_t x255 = -56;

	t57 = (x253<=(x254+(x255|x256)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x258 = INT8_MIN;
	int16_t x259 = 76;
	static int64_t x260 = INT64_MAX;
	volatile int32_t t58 = 1;

	t58 = (x257<=(x258+(x259|x260)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x261 = 139;
	int32_t x262 = -114;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MAX;
	int32_t t59 = 0;

	t59 = (x261<=(x262+(x263|x264)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x265 = 3920U;
	uint64_t x266 = 282888330LLU;
	volatile int32_t t60 = -58326158;

	t60 = (x265<=(x266+(x267|x268)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x269 = UINT32_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x271 = -1423139;
	uint32_t x272 = 108388U;
	volatile int32_t t61 = -1;

	t61 = (x269<=(x270+(x271|x272)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x273 = 82503U;
	uint64_t x274 = 192617523497567464LLU;
	int64_t x275 = -6147357285LL;
	uint64_t x276 = 80792512294LLU;
	static volatile int32_t t62 = 218466794;

	t62 = (x273<=(x274+(x275|x276)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x277 = 255591210U;
	uint32_t x278 = 210649U;
	static uint64_t x279 = UINT64_MAX;
	int8_t x280 = INT8_MIN;
	volatile int32_t t63 = 57;

	t63 = (x277<=(x278+(x279|x280)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x281 = INT64_MIN;
	volatile int16_t x282 = -1;
	static uint64_t x283 = UINT64_MAX;

	t64 = (x281<=(x282+(x283|x284)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MIN;
	int8_t x286 = -1;
	int64_t x287 = -1LL;
	static volatile int32_t t65 = -22526971;

	t65 = (x285<=(x286+(x287|x288)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x289 = UINT16_MAX;
	int16_t x290 = -1;
	int32_t x291 = INT32_MIN;
	static int64_t x292 = 177LL;
	volatile int32_t t66 = -3;

	t66 = (x289<=(x290+(x291|x292)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = UINT64_MAX;
	volatile int8_t x295 = INT8_MIN;
	int8_t x296 = -1;

	t67 = (x293<=(x294+(x295|x296)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x297 = INT64_MIN;
	int16_t x298 = INT16_MAX;
	int16_t x299 = -7;
	int64_t x300 = -1LL;
	volatile int32_t t68 = 402;

	t68 = (x297<=(x298+(x299|x300)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x301 = 60639LL;
	int16_t x302 = 47;
	static volatile uint64_t x303 = UINT64_MAX;
	int16_t x304 = INT16_MAX;
	int32_t t69 = 231385;

	t69 = (x301<=(x302+(x303|x304)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x305 = INT8_MIN;
	static volatile int16_t x306 = 591;
	volatile int8_t x307 = -1;
	int32_t t70 = -14874;

	t70 = (x305<=(x306+(x307|x308)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x310 = 6;
	int32_t x312 = INT32_MIN;
	volatile int32_t t71 = -140;

	t71 = (x309<=(x310+(x311|x312)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = 0;
	volatile uint64_t x315 = 855469138322234LLU;
	int64_t x316 = INT64_MAX;
	volatile int32_t t72 = 3509376;

	t72 = (x313<=(x314+(x315|x316)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x318 = 1;
	int8_t x319 = -1;
	int64_t x320 = INT64_MIN;
	int32_t t73 = -494948;

	t73 = (x317<=(x318+(x319|x320)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x321 = -1LL;
	uint32_t x323 = UINT32_MAX;
	int8_t x324 = INT8_MIN;
	volatile int32_t t74 = 15;

	t74 = (x321<=(x322+(x323|x324)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x325 = 139U;
	int32_t x326 = INT32_MIN;
	static int64_t x327 = -1057871LL;
	int8_t x328 = -1;

	t75 = (x325<=(x326+(x327|x328)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x329 = UINT8_MAX;
	int32_t x330 = -3566250;
	static uint8_t x331 = 7U;
	int32_t t76 = 6999;

	t76 = (x329<=(x330+(x331|x332)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MAX;
	static int64_t x334 = -895518106LL;
	int8_t x335 = -1;
	static volatile int32_t t77 = 22443260;

	t77 = (x333<=(x334+(x335|x336)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MIN;
	int16_t x339 = 13187;
	int32_t t78 = 3516372;

	t78 = (x337<=(x338+(x339|x340)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x342 = 53;
	uint64_t x343 = UINT64_MAX;
	uint8_t x344 = 0U;
	volatile int32_t t79 = 1071670;

	t79 = (x341<=(x342+(x343|x344)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x346 = 240;
	static int16_t x347 = -12213;
	int64_t x348 = INT64_MIN;
	static volatile int32_t t80 = -170201;

	t80 = (x345<=(x346+(x347|x348)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x349 = INT32_MIN;
	volatile int16_t x351 = 2;
	volatile uint8_t x352 = UINT8_MAX;
	volatile int32_t t81 = 3;

	t81 = (x349<=(x350+(x351|x352)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 214U;
	uint16_t x354 = UINT16_MAX;
	int32_t x355 = -7;
	uint64_t x356 = UINT64_MAX;
	int32_t t82 = -389032;

	t82 = (x353<=(x354+(x355|x356)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = -141;
	static uint64_t x359 = 329999858356LLU;
	volatile int32_t x360 = -1;
	int32_t t83 = 1744;

	t83 = (x357<=(x358+(x359|x360)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = 87545903LL;
	int8_t x362 = INT8_MIN;
	volatile uint8_t x363 = UINT8_MAX;
	static int32_t t84 = -60855;

	t84 = (x361<=(x362+(x363|x364)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x365 = 11U;
	uint64_t x366 = 124146LLU;
	int64_t x367 = 55257715460418LL;
	uint64_t x368 = UINT64_MAX;
	static volatile int32_t t85 = 2118268;

	t85 = (x365<=(x366+(x367|x368)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x369 = -1LL;
	int8_t x371 = 7;
	int8_t x372 = -1;
	int32_t t86 = 4520;

	t86 = (x369<=(x370+(x371|x372)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x377 = INT64_MIN;
	int32_t x378 = INT32_MAX;
	static uint8_t x379 = 18U;
	static volatile int32_t x380 = INT32_MIN;
	static int32_t t87 = -374;

	t87 = (x377<=(x378+(x379|x380)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x385 = 46U;
	int16_t x386 = INT16_MIN;
	volatile uint32_t x388 = 1787902U;
	volatile int32_t t88 = 53194984;

	t88 = (x385<=(x386+(x387|x388)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x389 = -9;
	volatile int32_t x390 = -1;
	int8_t x392 = INT8_MIN;
	volatile int32_t t89 = -7348;

	t89 = (x389<=(x390+(x391|x392)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x393 = UINT64_MAX;
	static int64_t x394 = 12342488269LL;
	static int16_t x395 = INT16_MAX;
	static int32_t x396 = INT32_MAX;
	volatile int32_t t90 = 113;

	t90 = (x393<=(x394+(x395|x396)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x397 = 1U;
	int8_t x398 = INT8_MAX;
	int16_t x399 = INT16_MAX;
	int64_t x400 = -235LL;
	int32_t t91 = -25192;

	t91 = (x397<=(x398+(x399|x400)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x401 = 2540060503415399838LLU;
	int16_t x403 = INT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	static int32_t t92 = 6;

	t92 = (x401<=(x402+(x403|x404)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x405 = INT64_MIN;
	volatile int16_t x406 = INT16_MIN;
	int16_t x407 = -992;
	int64_t x408 = INT64_MIN;

	t93 = (x405<=(x406+(x407|x408)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x409 = UINT16_MAX;
	static uint64_t x410 = 3341581847938LLU;
	volatile int8_t x411 = -1;
	volatile uint64_t x412 = UINT64_MAX;
	int32_t t94 = 7;

	t94 = (x409<=(x410+(x411|x412)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x413 = INT8_MIN;
	int64_t x414 = 55348921545189597LL;
	int16_t x415 = INT16_MIN;
	int16_t x416 = 0;

	t95 = (x413<=(x414+(x415|x416)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x418 = INT8_MIN;
	int32_t t96 = 4488489;

	t96 = (x417<=(x418+(x419|x420)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x425 = 100147U;
	int64_t x427 = -25244894LL;
	volatile int16_t x428 = INT16_MIN;
	volatile int32_t t97 = -119479494;

	t97 = (x425<=(x426+(x427|x428)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MIN;
	uint16_t x430 = UINT16_MAX;
	int8_t x431 = 34;
	static int16_t x432 = -30;

	t98 = (x429<=(x430+(x431|x432)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x433 = INT8_MAX;
	uint8_t x434 = 117U;
	static int64_t x435 = 1248912LL;
	int32_t x436 = -6;

	t99 = (x433<=(x434+(x435|x436)));

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

