#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
static int8_t x10 = INT8_MIN;
static int64_t x14 = 3169649490457LL;
int64_t x20 = INT64_MIN;
static int32_t t4 = -2191;
volatile uint8_t x30 = 0U;
int32_t x31 = INT32_MIN;
uint16_t x32 = UINT16_MAX;
int16_t x36 = INT16_MAX;
int32_t t8 = -120858;
volatile int32_t x39 = -1;
int32_t t9 = -420628;
int16_t x54 = -9;
static int32_t x56 = -1;
int32_t x62 = 7049209;
static uint8_t x66 = 5U;
static int16_t x67 = INT16_MIN;
int16_t x70 = 1302;
volatile int32_t t17 = 77;
static int8_t x77 = 0;
uint64_t x79 = UINT64_MAX;
static int32_t t19 = 12;
static int64_t x81 = 43483LL;
static int32_t x84 = -1;
int64_t x87 = -1LL;
uint8_t x88 = 0U;
int32_t t21 = 12862;
int8_t x89 = INT8_MAX;
int64_t x100 = INT64_MAX;
uint64_t x104 = 8867211119474504LLU;
static int16_t x105 = INT16_MAX;
int64_t x113 = -1LL;
int32_t t29 = -21254840;
static volatile int32_t t30 = 533382677;
int16_t x127 = -35;
int32_t t32 = -807243;
int8_t x134 = INT8_MAX;
uint32_t x135 = 2330U;
int32_t t34 = -24872199;
int32_t x151 = INT32_MIN;
int32_t x156 = INT32_MAX;
int64_t x159 = INT64_MIN;
static uint64_t x162 = 965894574396LLU;
int8_t x164 = -1;
uint64_t x170 = UINT64_MAX;
volatile int32_t t42 = -85;
int64_t x174 = INT64_MIN;
int8_t x177 = -1;
volatile int64_t x179 = 98413259588LL;
int8_t x180 = 2;
int64_t x183 = INT64_MIN;
static int32_t t46 = 7542;
static volatile int8_t x190 = INT8_MIN;
volatile int32_t t48 = 0;
int64_t x197 = -144433239637LL;
int32_t t50 = -14;
static uint8_t x206 = 48U;
uint32_t x207 = 997663U;
volatile int8_t x210 = 28;
int64_t x212 = -1LL;
static uint64_t x216 = 11LLU;
int32_t t53 = -31656;
int16_t x219 = INT16_MIN;
int8_t x223 = 1;
volatile uint16_t x225 = 3U;
static int32_t x230 = INT32_MAX;
static int32_t x234 = INT32_MIN;
uint16_t x235 = 6657U;
int64_t x242 = 3190950893734765LL;
int8_t x243 = -1;
int64_t x244 = -548208202698208LL;
int32_t x247 = INT32_MAX;
volatile int32_t t61 = 0;
int32_t x251 = INT32_MIN;
static volatile uint8_t x259 = 55U;
volatile uint32_t x268 = UINT32_MAX;
int64_t x270 = INT64_MAX;
static int32_t t67 = 887;
static uint8_t x273 = 0U;
uint32_t x274 = UINT32_MAX;
int64_t x282 = -1LL;
volatile int32_t t70 = -110;
int64_t x287 = INT64_MAX;
int32_t x288 = -2475;
static int32_t t71 = -1529264;
int8_t x291 = INT8_MIN;
static int8_t x296 = -6;
static volatile int32_t x297 = INT32_MIN;
int16_t x307 = 1;
volatile int32_t t77 = 2;
int8_t x313 = INT8_MIN;
uint16_t x320 = UINT16_MAX;
int8_t x325 = INT8_MIN;
int16_t x331 = -5108;
int32_t t82 = 717;
static int32_t x335 = -388114;
int32_t x339 = -266;
int64_t x349 = INT64_MAX;
int8_t x351 = -27;
int32_t t87 = 7;
int64_t x355 = INT64_MAX;
uint8_t x358 = UINT8_MAX;
volatile uint8_t x360 = 10U;
int64_t x364 = -1LL;
static volatile int32_t t90 = -34309084;
volatile uint32_t x365 = 3473U;
int32_t t93 = 221;
static int32_t x377 = -1;
int32_t x388 = INT32_MIN;
int32_t t96 = 113741;
uint32_t x390 = UINT32_MAX;
int16_t x392 = INT16_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	static int16_t x2 = -1;
	uint32_t x3 = UINT32_MAX;
	int32_t t0 = -11094;

	t0 = (x1<(x2<=(x3|x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 33217580336035LL;
	volatile int64_t x6 = INT64_MIN;
	uint16_t x7 = 5215U;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = -406339744;

	t1 = (x5<(x6<=(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 31U;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	int32_t t2 = -26747;

	t2 = (x9<(x10<=(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1U;
	int8_t x15 = 0;
	int16_t x16 = -1;
	int32_t t3 = -40245642;

	t3 = (x13<(x14<=(x15|x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 345LLU;
	int8_t x18 = INT8_MIN;
	static uint8_t x19 = 67U;

	t4 = (x17<(x18<=(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 115U;
	int16_t x22 = -1;
	int64_t x23 = INT64_MAX;
	int8_t x24 = INT8_MIN;
	static volatile int32_t t5 = 25;

	t5 = (x21<(x22<=(x23|x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 76U;
	int64_t x26 = 141LL;
	int8_t x27 = INT8_MAX;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -15;

	t6 = (x25<(x26<=(x27|x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static int32_t t7 = 12;

	t7 = (x29<(x30<=(x31|x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	static volatile uint16_t x34 = 1866U;
	uint16_t x35 = 437U;

	t8 = (x33<(x34<=(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint32_t x38 = 45003494U;
	int64_t x40 = 3661218819LL;

	t9 = (x37<(x38<=(x39|x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = -48LL;
	uint32_t x43 = 205U;
	int32_t x44 = -1;
	int32_t t10 = -3;

	t10 = (x41<(x42<=(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 16288U;
	static int16_t x46 = -127;
	int64_t x47 = -20LL;
	int16_t x48 = 6;
	int32_t t11 = -464232;

	t11 = (x45<(x46<=(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	volatile uint32_t x50 = UINT32_MAX;
	int32_t x51 = INT32_MAX;
	int64_t x52 = 805956790300LL;
	int32_t t12 = 5;

	t12 = (x49<(x50<=(x51|x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int16_t x55 = INT16_MAX;
	volatile int32_t t13 = -178531;

	t13 = (x53<(x54<=(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x57 = INT32_MIN;
	int16_t x58 = 14172;
	int32_t x59 = 3077118;
	volatile uint64_t x60 = UINT64_MAX;
	volatile int32_t t14 = 112;

	t14 = (x57<(x58<=(x59|x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	int8_t x63 = INT8_MAX;
	volatile int8_t x64 = 33;
	volatile int32_t t15 = -448936;

	t15 = (x61<(x62<=(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 19509270U;
	uint32_t x68 = UINT32_MAX;
	static volatile int32_t t16 = 2;

	t16 = (x65<(x66<=(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	uint32_t x71 = 1654U;
	static volatile int32_t x72 = -1972666;

	t17 = (x69<(x70<=(x71|x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = 21;
	int64_t x74 = INT64_MIN;
	int32_t x75 = 13650019;
	volatile uint8_t x76 = UINT8_MAX;
	static volatile int32_t t18 = 12938103;

	t18 = (x73<(x74<=(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 27U;
	static uint32_t x80 = 35U;

	t19 = (x77<(x78<=(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	int64_t x83 = -334071785678LL;
	volatile int32_t t20 = 1;

	t20 = (x81<(x82<=(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 29U;
	int32_t x86 = -21;

	t21 = (x85<(x86<=(x87|x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = -13510269444LL;
	volatile int32_t x91 = INT32_MIN;
	static uint16_t x92 = 3920U;
	int32_t t22 = 326033513;

	t22 = (x89<(x90<=(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint8_t x94 = UINT8_MAX;
	int16_t x95 = INT16_MAX;
	static int8_t x96 = INT8_MAX;
	int32_t t23 = 766199;

	t23 = (x93<(x94<=(x95|x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = INT32_MIN;
	volatile uint16_t x98 = UINT16_MAX;
	int32_t x99 = INT32_MIN;
	int32_t t24 = -814;

	t24 = (x97<(x98<=(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MAX;
	int8_t x102 = INT8_MIN;
	int16_t x103 = INT16_MIN;
	int32_t t25 = 719092194;

	t25 = (x101<(x102<=(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x106 = -1;
	uint8_t x107 = 16U;
	static int16_t x108 = -1;
	int32_t t26 = -6;

	t26 = (x105<(x106<=(x107|x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	static volatile int8_t x110 = -1;
	static volatile uint16_t x111 = 272U;
	uint64_t x112 = 16LLU;
	int32_t t27 = 18;

	t27 = (x109<(x110<=(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x114 = -20849722;
	uint64_t x115 = UINT64_MAX;
	int64_t x116 = -1LL;
	volatile int32_t t28 = -161;

	t28 = (x113<(x114<=(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 1;
	volatile int8_t x118 = INT8_MIN;
	static uint16_t x119 = 109U;
	static int8_t x120 = INT8_MAX;

	t29 = (x117<(x118<=(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 1;
	int32_t x122 = -1;
	int64_t x123 = -13167369LL;
	int16_t x124 = -1;

	t30 = (x121<(x122<=(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	static uint64_t x126 = 1152051644391728LLU;
	uint16_t x128 = 2U;
	volatile int32_t t31 = -1691300;

	t31 = (x125<(x126<=(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x129 = INT64_MIN;
	int32_t x130 = INT32_MIN;
	uint32_t x131 = 2986U;
	int16_t x132 = INT16_MIN;

	t32 = (x129<(x130<=(x131|x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	uint32_t x136 = UINT32_MAX;
	int32_t t33 = 960;

	t33 = (x133<(x134<=(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	uint16_t x138 = 0U;
	uint8_t x139 = UINT8_MAX;
	uint32_t x140 = UINT32_MAX;

	t34 = (x137<(x138<=(x139|x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int16_t x142 = -1;
	static uint8_t x143 = 3U;
	uint8_t x144 = 5U;
	volatile int32_t t35 = 0;

	t35 = (x141<(x142<=(x143|x144)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = -117LL;
	volatile uint32_t x146 = UINT32_MAX;
	volatile int8_t x147 = -7;
	static uint32_t x148 = 22U;
	volatile int32_t t36 = -168564310;

	t36 = (x145<(x146<=(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = -1;
	uint16_t x150 = 238U;
	static volatile int32_t x152 = 30683070;
	int32_t t37 = -20469222;

	t37 = (x149<(x150<=(x151|x152)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 6265LLU;
	volatile uint64_t x154 = UINT64_MAX;
	int32_t x155 = -1;
	int32_t t38 = 18027;

	t38 = (x153<(x154<=(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x157 = INT8_MAX;
	volatile int16_t x158 = INT16_MAX;
	int8_t x160 = INT8_MAX;
	volatile int32_t t39 = -3343;

	t39 = (x157<(x158<=(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int64_t x163 = INT64_MIN;
	volatile int32_t t40 = 652;

	t40 = (x161<(x162<=(x163|x164)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	static uint64_t x166 = 1684728516903078282LLU;
	int16_t x167 = INT16_MIN;
	static int64_t x168 = -1LL;
	int32_t t41 = -1;

	t41 = (x165<(x166<=(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x169 = 12146U;
	int64_t x171 = 456212431786491LL;
	static uint8_t x172 = 1U;

	t42 = (x169<(x170<=(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	static volatile int8_t x175 = -1;
	int32_t x176 = 256274576;
	volatile int32_t t43 = -11976;

	t43 = (x173<(x174<=(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x178 = 1U;
	volatile int32_t t44 = -66555910;

	t44 = (x177<(x178<=(x179|x180)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	uint8_t x182 = 0U;
	volatile int32_t x184 = INT32_MIN;
	int32_t t45 = 370171599;

	t45 = (x181<(x182<=(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x185 = 0;
	int32_t x186 = INT32_MIN;
	volatile int64_t x187 = -1LL;
	int32_t x188 = INT32_MIN;

	t46 = (x185<(x186<=(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	static int8_t x191 = INT8_MIN;
	int32_t x192 = INT32_MAX;
	int32_t t47 = -306;

	t47 = (x189<(x190<=(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x193 = UINT32_MAX;
	int64_t x194 = 3999523568406LL;
	int8_t x195 = 1;
	int32_t x196 = 89;

	t48 = (x193<(x194<=(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MIN;
	int32_t x200 = INT32_MAX;
	static int32_t t49 = -96351304;

	t49 = (x197<(x198<=(x199|x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	volatile int32_t x202 = -1;
	int8_t x203 = 1;
	volatile int32_t x204 = -1;

	t50 = (x201<(x202<=(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -730166451LL;
	volatile uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -124867864;

	t51 = (x205<(x206<=(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 155985LL;
	int8_t x211 = INT8_MIN;
	static int32_t t52 = 10958094;

	t52 = (x209<(x210<=(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -2;
	static volatile uint16_t x214 = 3546U;
	static uint16_t x215 = UINT16_MAX;

	t53 = (x213<(x214<=(x215|x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -1;
	int8_t x218 = 18;
	uint32_t x220 = UINT32_MAX;
	static volatile int32_t t54 = 0;

	t54 = (x217<(x218<=(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = 14;
	int8_t x222 = INT8_MAX;
	int32_t x224 = 0;
	volatile int32_t t55 = 457014;

	t55 = (x221<(x222<=(x223|x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 13086U;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 5;

	t56 = (x225<(x226<=(x227|x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	uint32_t x231 = UINT32_MAX;
	volatile int64_t x232 = INT64_MAX;
	static int32_t t57 = -13;

	t57 = (x229<(x230<=(x231|x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -102173;

	t58 = (x233<(x234<=(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1287830114890581256LLU;
	int16_t x238 = INT16_MIN;
	volatile int64_t x239 = 313LL;
	int8_t x240 = 0;
	int32_t t59 = 0;

	t59 = (x237<(x238<=(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -1;
	int32_t t60 = -14358;

	t60 = (x241<(x242<=(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	static uint8_t x246 = 1U;
	static uint16_t x248 = UINT16_MAX;

	t61 = (x245<(x246<=(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = UINT16_MAX;
	volatile uint8_t x250 = 100U;
	int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -24177;

	t62 = (x249<(x250<=(x251|x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint16_t x254 = 351U;
	int16_t x255 = -1;
	int64_t x256 = 2460LL;
	volatile int32_t t63 = 38;

	t63 = (x253<(x254<=(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = -1;
	static int16_t x258 = 43;
	int32_t x260 = -1;
	int32_t t64 = 0;

	t64 = (x257<(x258<=(x259|x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = -1;
	int32_t x262 = INT32_MAX;
	int16_t x263 = -1;
	volatile int8_t x264 = -1;
	static int32_t t65 = 0;

	t65 = (x261<(x262<=(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = INT8_MIN;
	volatile int16_t x266 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	volatile int32_t t66 = 52087972;

	t66 = (x265<(x266<=(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x271 = -1;
	int64_t x272 = -1LL;

	t67 = (x269<(x270<=(x271|x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x275 = 0U;
	static uint16_t x276 = 0U;
	int32_t t68 = -3;

	t68 = (x273<(x274<=(x275|x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	volatile int8_t x278 = -2;
	volatile int8_t x279 = INT8_MAX;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 4;

	t69 = (x277<(x278<=(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = 247011;
	uint64_t x283 = UINT64_MAX;
	volatile uint32_t x284 = 4124820U;

	t70 = (x281<(x282<=(x283|x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x285 = INT32_MAX;
	static int8_t x286 = INT8_MAX;

	t71 = (x285<(x286<=(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	static uint8_t x290 = 0U;
	volatile int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -1;

	t72 = (x289<(x290<=(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	uint16_t x294 = UINT16_MAX;
	uint64_t x295 = 495116569818LLU;
	int32_t t73 = -54619;

	t73 = (x293<(x294<=(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x298 = INT8_MIN;
	uint16_t x299 = UINT16_MAX;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -168320998;

	t74 = (x297<(x298<=(x299|x300)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	static uint16_t x302 = 1652U;
	int8_t x303 = 44;
	static int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 681877495;

	t75 = (x301<(x302<=(x303|x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 24819U;
	int32_t x306 = INT32_MAX;
	int64_t x308 = -1LL;
	volatile int32_t t76 = 97724;

	t76 = (x305<(x306<=(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 16U;
	static uint16_t x310 = UINT16_MAX;
	int16_t x311 = INT16_MIN;
	int8_t x312 = INT8_MAX;

	t77 = (x309<(x310<=(x311|x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MAX;
	static int16_t x316 = -1;
	int32_t t78 = 1;

	t78 = (x313<(x314<=(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 200U;
	volatile uint16_t x318 = 297U;
	uint8_t x319 = UINT8_MAX;
	int32_t t79 = 938589742;

	t79 = (x317<(x318<=(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = -1;
	volatile uint32_t x322 = UINT32_MAX;
	int32_t x323 = -1803;
	volatile int32_t x324 = INT32_MAX;
	int32_t t80 = 2439;

	t80 = (x321<(x322<=(x323|x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MIN;
	int64_t x327 = -4100128733960252396LL;
	uint64_t x328 = 9155797LLU;
	static int32_t t81 = -250;

	t81 = (x325<(x326<=(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	uint32_t x330 = UINT32_MAX;
	uint16_t x332 = 2U;

	t82 = (x329<(x330<=(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 48LL;
	uint32_t x334 = 5404431U;
	static int32_t x336 = INT32_MAX;
	volatile int32_t t83 = -497174683;

	t83 = (x333<(x334<=(x335|x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	volatile uint8_t x338 = 4U;
	volatile int32_t x340 = INT32_MIN;
	int32_t t84 = 812990780;

	t84 = (x337<(x338<=(x339|x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x341 = UINT64_MAX;
	int64_t x342 = 111519365990294LL;
	volatile uint64_t x343 = 115299455976844767LLU;
	volatile int64_t x344 = -935088LL;
	static volatile int32_t t85 = 598;

	t85 = (x341<(x342<=(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = 0;
	int8_t x346 = INT8_MAX;
	int64_t x347 = -1LL;
	int32_t x348 = -1;
	volatile int32_t t86 = 108;

	t86 = (x345<(x346<=(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x350 = 44U;
	static int8_t x352 = INT8_MIN;

	t87 = (x349<(x350<=(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -1LL;
	uint32_t x354 = UINT32_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile int32_t t88 = -1;

	t88 = (x353<(x354<=(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int32_t x359 = INT32_MIN;
	volatile int32_t t89 = -1374075;

	t89 = (x357<(x358<=(x359|x360)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 388U;
	uint8_t x362 = 0U;
	int64_t x363 = 215889LL;

	t90 = (x361<(x362<=(x363|x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x366 = INT16_MIN;
	static volatile int16_t x367 = INT16_MIN;
	uint32_t x368 = 1286961U;
	int32_t t91 = -984;

	t91 = (x365<(x366<=(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 198LL;
	volatile int32_t x370 = INT32_MIN;
	int32_t x371 = INT32_MIN;
	int8_t x372 = -1;
	volatile int32_t t92 = 162354;

	t92 = (x369<(x370<=(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	volatile int16_t x374 = -1;
	uint32_t x375 = 31239U;
	uint64_t x376 = UINT64_MAX;

	t93 = (x373<(x374<=(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = INT16_MIN;
	uint64_t x379 = 388162649332LLU;
	static uint8_t x380 = UINT8_MAX;
	volatile int32_t t94 = 45791;

	t94 = (x377<(x378<=(x379|x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = UINT16_MAX;
	static int32_t x382 = -260074340;
	uint16_t x383 = UINT16_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t95 = 986591;

	t95 = (x381<(x382<=(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 5U;
	volatile int16_t x386 = INT16_MIN;
	int8_t x387 = 18;

	t96 = (x385<(x386<=(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1038413U;
	int16_t x391 = -5874;
	int32_t t97 = 7;

	t97 = (x389<(x390<=(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 0;
	int64_t x394 = -45962257593488LL;
	int16_t x395 = INT16_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t98 = -437963392;

	t98 = (x393<(x394<=(x395|x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static int64_t x398 = -1LL;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MIN;
	static int32_t t99 = 41379312;

	t99 = (x397<(x398<=(x399|x400)));

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

