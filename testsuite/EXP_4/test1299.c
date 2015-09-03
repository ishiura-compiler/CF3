#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
int32_t x11 = INT32_MIN;
volatile int32_t t3 = 2002230;
volatile int8_t x18 = -1;
uint64_t x22 = UINT64_MAX;
static volatile uint8_t x27 = UINT8_MAX;
volatile uint32_t x30 = 1577782U;
uint32_t x32 = 1420U;
static uint32_t x33 = 222081U;
int16_t x35 = INT16_MIN;
int32_t x36 = INT32_MAX;
volatile uint32_t t8 = 1044168U;
volatile uint64_t x40 = 64291LLU;
volatile int8_t x41 = -1;
static uint32_t x45 = 363U;
volatile int32_t t12 = 463074;
int16_t x59 = -1;
int32_t x63 = 2;
uint64_t x67 = UINT64_MAX;
volatile int32_t x68 = INT32_MIN;
static int64_t x71 = -4753816301LL;
volatile int32_t x73 = INT32_MIN;
static int64_t x76 = 2635707781227711920LL;
static volatile int64_t x82 = -1LL;
static volatile int64_t x83 = -308934186975LL;
int32_t t20 = -331071;
int8_t x86 = INT8_MAX;
static int64_t x87 = INT64_MAX;
uint8_t x92 = 3U;
int32_t x95 = 1051495;
int32_t t24 = 11916;
volatile int64_t t25 = -33493LL;
static int8_t x105 = -1;
volatile int64_t x106 = INT64_MIN;
volatile uint8_t x113 = UINT8_MAX;
volatile int32_t x116 = -59;
static int32_t t28 = 0;
volatile int64_t x119 = -1LL;
volatile int32_t t29 = INT32_MIN;
volatile uint16_t x125 = 15U;
int16_t x129 = INT16_MIN;
uint64_t x131 = 713979033435LLU;
int64_t x133 = INT64_MIN;
int32_t x134 = -240169651;
uint64_t x137 = UINT64_MAX;
int8_t x141 = INT8_MAX;
int8_t x146 = -1;
static uint64_t x148 = UINT64_MAX;
uint32_t t36 = UINT32_MAX;
static uint32_t x149 = 539U;
volatile int32_t x152 = 738;
volatile int32_t x153 = -1;
uint32_t x156 = UINT32_MAX;
volatile int32_t t38 = -183127;
volatile int32_t t39 = 12;
volatile int64_t t40 = 86124LL;
volatile int32_t t42 = -4746;
int32_t x175 = INT32_MIN;
int32_t x179 = INT32_MIN;
static int32_t x183 = -1;
volatile int8_t x191 = INT8_MAX;
volatile uint8_t x196 = 1U;
static volatile int32_t t49 = 852038;
volatile int64_t t51 = INT64_MIN;
static volatile uint8_t x210 = UINT8_MAX;
volatile uint32_t x216 = 8332U;
uint64_t x221 = 0LLU;
uint32_t x225 = UINT32_MAX;
static int64_t x227 = -8827043580542914LL;
int8_t x231 = INT8_MAX;
volatile uint32_t t58 = 157949297U;
static int8_t x239 = INT8_MAX;
int16_t x240 = -1;
volatile int32_t t59 = 38582;
volatile int32_t t61 = 71028;
int16_t x254 = 3;
int64_t x261 = 220852492LL;
volatile uint16_t x262 = 0U;
static uint32_t x264 = UINT32_MAX;
int64_t x266 = -1LL;
volatile int64_t t67 = -5912LL;
int32_t x277 = INT32_MIN;
uint32_t x280 = UINT32_MAX;
int32_t x282 = INT32_MIN;
static int64_t t71 = INT64_MAX;
volatile int32_t x296 = 15;
int64_t t73 = -15400969LL;
static int8_t x299 = 0;
static int32_t t75 = 561;
int32_t x306 = INT32_MIN;
static volatile int16_t x307 = INT16_MIN;
volatile int32_t t80 = 308251;
static volatile uint8_t x325 = 56U;
volatile int32_t t81 = 6018030;
int16_t x331 = INT16_MIN;
int16_t x341 = 0;
int32_t t85 = -197016;
int32_t x347 = 1034397745;
int32_t x349 = INT32_MIN;
static volatile int16_t x353 = -243;
volatile int64_t t89 = 118LL;
int32_t x361 = INT32_MIN;
int64_t x363 = 169980LL;
int32_t t90 = -65281344;
static volatile int64_t x368 = INT64_MIN;
static volatile uint32_t x371 = 56U;
int64_t t92 = -155490198915LL;
static volatile int64_t x374 = -1980061223LL;
volatile int8_t x375 = -1;
static uint8_t x382 = UINT8_MAX;
static uint32_t x384 = 1386474U;
volatile int32_t t98 = -7;
static volatile int16_t x397 = INT16_MIN;
volatile uint32_t x399 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int32_t x2 = 3;
	int32_t x3 = INT32_MIN;
	int32_t t0 = 188;

	t0 = (x1|(x2<(x3==x4)));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -2470496LL;
	static uint16_t x6 = UINT16_MAX;
	volatile int16_t x7 = INT16_MAX;
	int16_t x8 = -1;
	int64_t t1 = -29006743268340LL;

	t1 = (x5|(x6<(x7==x8)));

	if (t1 != -2470496LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	static uint32_t x10 = UINT32_MAX;
	int8_t x12 = INT8_MIN;
	volatile int64_t t2 = -1299384861641292095LL;

	t2 = (x9|(x10<(x11==x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 0U;
	volatile int16_t x14 = -5;
	static int16_t x15 = -1;
	static int64_t x16 = INT64_MIN;

	t3 = (x13|(x14<(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	static uint32_t x19 = 33592U;
	volatile uint16_t x20 = 32U;
	volatile int32_t t4 = 123;

	t4 = (x17|(x18<(x19==x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1383579726LLU;
	static int64_t x23 = 2520604014LL;
	static int64_t x24 = 644622749023672258LL;
	volatile uint64_t t5 = 29460612063738218LLU;

	t5 = (x21|(x22<(x23==x24)));

	if (t5 != 1383579726LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -1;
	volatile uint16_t x26 = UINT16_MAX;
	static int32_t x28 = INT32_MIN;
	int32_t t6 = -2128685;

	t6 = (x25|(x26<(x27==x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -5761LL;
	int16_t x31 = -1;
	volatile int64_t t7 = 53802327217431LL;

	t7 = (x29|(x30<(x31==x32)));

	if (t7 != -5761LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -4154021291855479567LL;

	t8 = (x33|(x34<(x35==x36)));

	if (t8 != 222081U) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	volatile uint16_t x38 = 27378U;
	int8_t x39 = 17;
	int32_t t9 = 4086872;

	t9 = (x37|(x38<(x39==x40)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x42 = INT8_MAX;
	static int64_t x43 = INT64_MIN;
	uint64_t x44 = UINT64_MAX;
	int32_t t10 = 29;

	t10 = (x41|(x42<(x43==x44)));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = -1;
	int16_t x47 = -1;
	int16_t x48 = INT16_MIN;
	uint32_t t11 = 809U;

	t11 = (x45|(x46<(x47==x48)));

	if (t11 != 363U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 19U;
	int8_t x50 = INT8_MAX;
	static uint16_t x51 = UINT16_MAX;
	volatile uint32_t x52 = UINT32_MAX;

	t12 = (x49|(x50<(x51==x52)));

	if (t12 != 19) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int32_t x54 = INT32_MAX;
	int32_t x55 = INT32_MAX;
	int16_t x56 = INT16_MAX;
	int32_t t13 = 12;

	t13 = (x53|(x54<(x55==x56)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = -1;
	uint32_t x58 = UINT32_MAX;
	int16_t x60 = INT16_MAX;
	static int32_t t14 = -2;

	t14 = (x57|(x58<(x59==x60)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MIN;
	static uint64_t x62 = 480LLU;
	int16_t x64 = INT16_MAX;
	int32_t t15 = 1;

	t15 = (x61|(x62<(x63==x64)));

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 0U;
	int32_t x66 = INT32_MIN;
	int32_t t16 = -9;

	t16 = (x65|(x66<(x67==x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 9U;
	static int8_t x70 = INT8_MIN;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t17 = 289;

	t17 = (x69|(x70<(x71==x72)));

	if (t17 != 9) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = INT16_MIN;
	static int8_t x75 = INT8_MAX;
	volatile int32_t t18 = -1;

	t18 = (x73|(x74<(x75==x76)));

	if (t18 != -2147483647) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = UINT32_MAX;
	volatile uint16_t x79 = 444U;
	int8_t x80 = -1;
	static volatile int32_t t19 = -1838;

	t19 = (x77|(x78<(x79==x80)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	volatile uint8_t x84 = 12U;

	t20 = (x81|(x82<(x83==x84)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MAX;
	volatile int16_t x88 = INT16_MIN;
	int32_t t21 = INT32_MAX;

	t21 = (x85|(x86<(x87==x88)));

	if (t21 != INT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint16_t x89 = UINT16_MAX;
	uint8_t x90 = 4U;
	int16_t x91 = 1743;
	static volatile int32_t t22 = 438857;

	t22 = (x89|(x90<(x91==x92)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = INT16_MIN;
	int16_t x94 = -3;
	int32_t x96 = -1;
	static volatile int32_t t23 = 57;

	t23 = (x93|(x94<(x95==x96)));

	if (t23 != -32767) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 2;
	volatile int32_t x98 = -1;
	int8_t x99 = -1;
	int64_t x100 = 7530980404LL;

	t24 = (x97|(x98<(x99==x100)));

	if (t24 != 3) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 592930LL;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	static uint8_t x104 = 2U;

	t25 = (x101|(x102<(x103==x104)));

	if (t25 != 592931LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x107 = -1;
	uint64_t x108 = UINT64_MAX;
	static int32_t t26 = 951765807;

	t26 = (x105|(x106<(x107==x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x109 = 0U;
	int16_t x110 = INT16_MIN;
	volatile int64_t x111 = INT64_MIN;
	int16_t x112 = INT16_MIN;
	volatile int32_t t27 = 1584694;

	t27 = (x109|(x110<(x111==x112)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = INT64_MAX;
	int32_t x115 = INT32_MAX;

	t28 = (x113|(x114<(x115==x116)));

	if (t28 != 255) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int64_t x118 = 1LL;
	uint32_t x120 = UINT32_MAX;

	t29 = (x117|(x118<(x119==x120)));

	if (t29 != INT32_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	static int16_t x122 = 0;
	int64_t x123 = INT64_MIN;
	int64_t x124 = -1LL;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x121|(x122<(x123==x124)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MAX;
	static int8_t x127 = -2;
	int8_t x128 = INT8_MAX;
	int32_t t31 = -10;

	t31 = (x125|(x126<(x127==x128)));

	if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MIN;
	int32_t x132 = -493471;
	int32_t t32 = 493978231;

	t32 = (x129|(x130<(x131==x132)));

	if (t32 != -32767) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x135 = -1LL;
	int16_t x136 = 6;
	volatile int64_t t33 = 751741LL;

	t33 = (x133|(x134<(x135==x136)));

	if (t33 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x138 = 29U;
	static uint64_t x139 = UINT64_MAX;
	int8_t x140 = INT8_MAX;
	uint64_t t34 = UINT64_MAX;

	t34 = (x137|(x138<(x139==x140)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = 1;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -13;

	t35 = (x141|(x142<(x143==x144)));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x147 = -1954;

	t36 = (x145|(x146<(x147==x148)));

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x150 = 0U;
	uint8_t x151 = 58U;
	static volatile uint32_t t37 = 242501U;

	t37 = (x149|(x150<(x151==x152)));

	if (t37 != 539U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x154 = 8LLU;
	volatile int32_t x155 = INT32_MAX;

	t38 = (x153|(x154<(x155==x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	int64_t x158 = -15009161885172315LL;
	int16_t x159 = INT16_MIN;
	static volatile uint16_t x160 = 1U;

	t39 = (x157|(x158<(x159==x160)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	volatile int8_t x162 = -1;
	static int8_t x163 = -3;
	uint8_t x164 = 1U;

	t40 = (x161|(x162<(x163==x164)));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MIN;
	int64_t x166 = 457LL;
	uint8_t x167 = 0U;
	uint32_t x168 = UINT32_MAX;
	volatile int64_t t41 = INT64_MIN;

	t41 = (x165|(x166<(x167==x168)));

	if (t41 != INT64_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	static int8_t x170 = -1;
	static volatile uint32_t x171 = 1246U;
	uint64_t x172 = UINT64_MAX;

	t42 = (x169|(x170<(x171==x172)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = -1;
	uint32_t x176 = 551U;
	static int32_t t43 = 18488;

	t43 = (x173|(x174<(x175==x176)));

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	static uint8_t x178 = UINT8_MAX;
	uint32_t x180 = UINT32_MAX;
	volatile int32_t t44 = 200;

	t44 = (x177|(x178<(x179==x180)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	int32_t x182 = -1;
	uint8_t x184 = 1U;
	int32_t t45 = -12;

	t45 = (x181|(x182<(x183==x184)));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MIN;
	static int32_t x186 = INT32_MIN;
	static int64_t x187 = INT64_MIN;
	static uint8_t x188 = 1U;
	static int32_t t46 = -3449140;

	t46 = (x185|(x186<(x187==x188)));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x189 = -1;
	volatile int8_t x190 = -1;
	int16_t x192 = 1;
	volatile int32_t t47 = -37;

	t47 = (x189|(x190<(x191==x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 7LLU;
	uint32_t x194 = 37272U;
	uint32_t x195 = UINT32_MAX;
	volatile uint64_t t48 = 17LLU;

	t48 = (x193|(x194<(x195==x196)));

	if (t48 != 7LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x197 = 1262U;
	static uint64_t x198 = UINT64_MAX;
	volatile int8_t x199 = -1;
	volatile uint16_t x200 = UINT16_MAX;

	t49 = (x197|(x198<(x199==x200)));

	if (t49 != 1262) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = UINT16_MAX;
	int8_t x202 = INT8_MIN;
	int32_t x203 = -1;
	volatile int64_t x204 = 2769552748096926446LL;
	int32_t t50 = 76474;

	t50 = (x201|(x202<(x203==x204)));

	if (t50 != 65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = 7196180;
	int64_t x207 = INT64_MIN;
	static volatile int32_t x208 = INT32_MIN;

	t51 = (x205|(x206<(x207==x208)));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MAX;
	static uint64_t x211 = 130267283768732301LLU;
	int32_t x212 = 5;
	int32_t t52 = 2485;

	t52 = (x209|(x210<(x211==x212)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = 0;
	static int32_t x214 = INT32_MIN;
	static int64_t x215 = INT64_MIN;
	volatile int32_t t53 = 35865;

	t53 = (x213|(x214<(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	int64_t x218 = INT64_MAX;
	uint8_t x219 = 1U;
	int16_t x220 = -1;
	volatile int64_t t54 = 1736617511464524508LL;

	t54 = (x217|(x218<(x219==x220)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = 1;
	volatile int64_t x223 = INT64_MIN;
	static uint32_t x224 = 2U;
	static uint64_t t55 = 1134217306422LLU;

	t55 = (x221|(x222<(x223==x224)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x226 = 1267244213LLU;
	int16_t x228 = INT16_MIN;
	uint32_t t56 = UINT32_MAX;

	t56 = (x225|(x226<(x227==x228)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MAX;
	uint32_t x232 = 0U;
	volatile uint32_t t57 = UINT32_MAX;

	t57 = (x229|(x230<(x231==x232)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x233 = 81351293U;
	volatile uint32_t x234 = UINT32_MAX;
	int8_t x235 = INT8_MAX;
	uint16_t x236 = UINT16_MAX;

	t58 = (x233|(x234<(x235==x236)));

	if (t58 != 81351293U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -65;
	int64_t x238 = 1968539384170LL;

	t59 = (x237|(x238<(x239==x240)));

	if (t59 != -65) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 1251228LLU;
	uint64_t x242 = 39837536234477LLU;
	int64_t x243 = INT64_MIN;
	static uint64_t x244 = 2LLU;
	volatile uint64_t t60 = 16355488300297429LLU;

	t60 = (x241|(x242<(x243==x244)));

	if (t60 != 1251228LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 0;
	int64_t x246 = INT64_MIN;
	int8_t x247 = INT8_MAX;
	int8_t x248 = 0;

	t61 = (x245|(x246<(x247==x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -3045;
	int64_t x250 = 19593453909988LL;
	static int64_t x251 = 16111505592919130LL;
	static int16_t x252 = INT16_MIN;
	volatile int32_t t62 = 217420;

	t62 = (x249|(x250<(x251==x252)));

	if (t62 != -3045) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	volatile int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -4284;

	t63 = (x253|(x254<(x255==x256)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 1753075166630348325LLU;
	int16_t x258 = -1;
	volatile uint32_t x259 = UINT32_MAX;
	int64_t x260 = -1LL;
	volatile uint64_t t64 = 980118776987397LLU;

	t64 = (x257|(x258<(x259==x260)));

	if (t64 != 1753075166630348325LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = INT32_MAX;
	volatile int64_t t65 = -532415322586307LL;

	t65 = (x261|(x262<(x263==x264)));

	if (t65 != 220852492LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 195403304591284878LLU;
	static uint16_t x267 = UINT16_MAX;
	int64_t x268 = -121903700490276457LL;
	volatile uint64_t t66 = 101279LLU;

	t66 = (x265|(x266<(x267==x268)));

	if (t66 != 195403304591284879LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MIN;
	volatile int32_t x271 = -25;
	int64_t x272 = INT64_MIN;

	t67 = (x269|(x270<(x271==x272)));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	static int64_t x274 = 211761076LL;
	int32_t x275 = -1;
	volatile int16_t x276 = -402;
	volatile int32_t t68 = -21805845;

	t68 = (x273|(x274<(x275==x276)));

	if (t68 != 65535) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = INT32_MAX;
	int8_t x279 = -5;
	int32_t t69 = INT32_MIN;

	t69 = (x277|(x278<(x279==x280)));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = -26;
	static uint64_t x283 = 2344351071522206634LLU;
	int64_t x284 = INT64_MIN;
	int32_t t70 = 1116167;

	t70 = (x281|(x282<(x283==x284)));

	if (t70 != -25) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MAX;
	uint16_t x286 = 5015U;
	volatile uint32_t x287 = 22497388U;
	static int8_t x288 = 27;

	t71 = (x285|(x286<(x287==x288)));

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = 5027538386758LL;
	uint32_t x290 = 53497U;
	uint32_t x291 = 262398163U;
	static volatile int16_t x292 = -2240;
	static volatile int64_t t72 = 235373316005192LL;

	t72 = (x289|(x290<(x291==x292)));

	if (t72 != 5027538386758LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MIN;
	static int8_t x295 = -60;

	t73 = (x293|(x294<(x295==x296)));

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MIN;
	static int8_t x300 = 9;
	static int32_t t74 = 127941265;

	t74 = (x297|(x298<(x299==x300)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int8_t x302 = INT8_MIN;
	static volatile uint16_t x303 = 27U;
	int8_t x304 = -1;

	t75 = (x301|(x302<(x303==x304)));

	if (t75 != -32767) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x305 = 1462819763U;
	static volatile int8_t x308 = 7;
	uint32_t t76 = 3324238U;

	t76 = (x305|(x306<(x307==x308)));

	if (t76 != 1462819763U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x309 = INT16_MIN;
	uint16_t x310 = 61U;
	int64_t x311 = INT64_MAX;
	uint64_t x312 = 60313107194389LLU;
	volatile int32_t t77 = -11;

	t77 = (x309|(x310<(x311==x312)));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x314 = INT64_MIN;
	int64_t x315 = -1LL;
	uint16_t x316 = 63U;
	uint32_t t78 = UINT32_MAX;

	t78 = (x313|(x314<(x315==x316)));

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static uint64_t x318 = UINT64_MAX;
	int16_t x319 = INT16_MAX;
	static int16_t x320 = 2630;
	volatile int32_t t79 = -95262;

	t79 = (x317|(x318<(x319==x320)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 1;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	static uint8_t x324 = 19U;

	t80 = (x321|(x322<(x323==x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 3874U;
	uint64_t x327 = 3360265LLU;
	static int16_t x328 = INT16_MAX;

	t81 = (x325|(x326<(x327==x328)));

	if (t81 != 56) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	static int16_t x330 = -439;
	uint64_t x332 = 1812219368LLU;
	volatile int32_t t82 = -281520;

	t82 = (x329|(x330<(x331==x332)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = INT64_MAX;
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MAX;
	static volatile uint16_t x336 = 34U;
	int64_t t83 = INT64_MAX;

	t83 = (x333|(x334<(x335==x336)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -1055254765LL;
	volatile uint16_t x338 = 6543U;
	volatile int64_t x339 = INT64_MIN;
	uint8_t x340 = 23U;
	static int64_t t84 = -473592146558930895LL;

	t84 = (x337|(x338<(x339==x340)));

	if (t84 != -1055254765LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x342 = 7864078073001LLU;
	int32_t x343 = -853350;
	int16_t x344 = INT16_MAX;

	t85 = (x341|(x342<(x343==x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 20807337U;
	static volatile uint16_t x346 = 7U;
	volatile int16_t x348 = -1;
	uint32_t t86 = 11071841U;

	t86 = (x345|(x346<(x347==x348)));

	if (t86 != 20807337U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -1;
	uint16_t x351 = 200U;
	uint32_t x352 = UINT32_MAX;
	int32_t t87 = -28669200;

	t87 = (x349|(x350<(x351==x352)));

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = INT16_MAX;
	int64_t x355 = INT64_MAX;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = 21513724;

	t88 = (x353|(x354<(x355==x356)));

	if (t88 != -243) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -2129142475LL;
	static uint32_t x358 = UINT32_MAX;
	volatile int64_t x359 = 16373393158829045LL;
	uint16_t x360 = UINT16_MAX;

	t89 = (x357|(x358<(x359==x360)));

	if (t89 != -2129142475LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x362 = INT16_MIN;
	int32_t x364 = -1;

	t90 = (x361|(x362<(x363==x364)));

	if (t90 != -2147483647) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	uint8_t x366 = UINT8_MAX;
	volatile int64_t x367 = INT64_MIN;
	static volatile uint64_t t91 = UINT64_MAX;

	t91 = (x365|(x366<(x367==x368)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 426LL;
	int8_t x370 = INT8_MIN;
	int64_t x372 = 3720425046349LL;

	t92 = (x369|(x370<(x371==x372)));

	if (t92 != 427LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 12473539LLU;
	int16_t x376 = -1;
	volatile uint64_t t93 = 5751767LLU;

	t93 = (x373|(x374<(x375==x376)));

	if (t93 != 12473539LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x377 = UINT8_MAX;
	static int32_t x378 = INT32_MIN;
	volatile int16_t x379 = INT16_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t94 = -140;

	t94 = (x377|(x378<(x379==x380)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MAX;
	volatile int8_t x383 = INT8_MAX;
	int32_t t95 = 2085585;

	t95 = (x381|(x382<(x383==x384)));

	if (t95 != 127) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x385 = 121723943318329LLU;
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = -1;
	static uint16_t x388 = 31U;
	volatile uint64_t t96 = 6519623614729247LLU;

	t96 = (x385|(x386<(x387==x388)));

	if (t96 != 121723943318329LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	volatile int64_t x390 = -5995007LL;
	static int32_t x391 = INT32_MIN;
	uint8_t x392 = 2U;
	static int32_t t97 = -12334297;

	t97 = (x389|(x390<(x391==x392)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	int8_t x394 = INT8_MAX;
	int8_t x395 = INT8_MIN;
	uint64_t x396 = 746914052861LLU;

	t98 = (x393|(x394<(x395==x396)));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x398 = UINT16_MAX;
	int32_t x400 = 1528;
	volatile int32_t t99 = -3;

	t99 = (x397|(x398<(x399==x400)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

