#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = 2;
int8_t x11 = -35;
volatile int8_t x14 = INT8_MIN;
uint32_t x18 = 73564U;
volatile int16_t x21 = 0;
volatile uint16_t x24 = 13196U;
volatile int32_t t6 = 7;
int16_t x35 = INT16_MAX;
uint8_t x43 = 43U;
int8_t x53 = 0;
int32_t x56 = INT32_MAX;
static int64_t x106 = INT64_MIN;
int32_t x110 = 28;
int16_t x111 = INT16_MAX;
uint32_t x115 = 222965374U;
int64_t x120 = -1LL;
int32_t t29 = 28574214;
uint16_t x121 = UINT16_MAX;
int64_t x128 = 206243284393934632LL;
static uint8_t x129 = UINT8_MAX;
int16_t x131 = 9079;
volatile int64_t x133 = -1LL;
uint8_t x136 = 6U;
static int64_t x137 = -1LL;
int32_t x142 = INT32_MAX;
static uint32_t x143 = 16894U;
int32_t t35 = -579775580;
volatile uint16_t x148 = 0U;
int64_t x151 = -58625838655LL;
static uint16_t x152 = 0U;
volatile int32_t t37 = -443319133;
int8_t x154 = 1;
int64_t x163 = 1872158880395425777LL;
volatile int16_t x172 = INT16_MIN;
static volatile uint16_t x178 = 299U;
volatile int64_t t44 = 8375043973800633LL;
int16_t x184 = INT16_MIN;
static int8_t x187 = INT8_MIN;
static uint64_t x192 = 470LLU;
int16_t x194 = INT16_MIN;
int16_t x195 = INT16_MIN;
volatile int32_t t49 = -39;
int16_t x201 = INT16_MAX;
volatile int32_t t51 = -227808704;
uint32_t x211 = 239698U;
static int8_t x218 = 42;
static volatile int64_t x223 = -1LL;
volatile int32_t t57 = 21684303;
static volatile uint8_t x236 = 3U;
static uint64_t x239 = UINT64_MAX;
int32_t t59 = -774;
uint64_t x244 = 1149622967540928260LLU;
uint64_t x245 = UINT64_MAX;
uint8_t x249 = 39U;
int16_t x258 = INT16_MIN;
static int16_t x270 = -29;
volatile int32_t t67 = 716184;
int16_t x275 = INT16_MIN;
static int8_t x276 = INT8_MIN;
int32_t t69 = -187654753;
static volatile int16_t x283 = -112;
uint16_t x287 = 6951U;
int64_t x290 = 17200151972419735LL;
volatile int32_t t73 = -224;
volatile uint64_t t74 = 398LLU;
static int8_t x302 = -1;
uint32_t x310 = 1U;
volatile int16_t x314 = INT16_MAX;
volatile int32_t t78 = -1243;
int32_t x317 = INT32_MAX;
volatile int32_t t80 = -1;
uint32_t x327 = 5783821U;
int64_t x331 = 15815861303020LL;
volatile int64_t t82 = 4LL;
uint16_t x333 = UINT16_MAX;
int64_t x334 = INT64_MAX;
int8_t x336 = 4;
uint32_t x337 = 13461090U;
uint8_t x338 = 1U;
int8_t x339 = INT8_MAX;
int32_t x341 = -23473;
volatile int32_t x342 = -1;
static int32_t x347 = 477091;
int32_t t86 = -225598045;
volatile int32_t t87 = 1;
volatile int32_t x355 = INT32_MIN;
volatile int32_t t90 = -1;
static int8_t x365 = INT8_MAX;
int8_t x366 = INT8_MIN;
uint32_t x369 = UINT32_MAX;
static uint32_t x370 = 333438U;
volatile int64_t x372 = INT64_MIN;
volatile int8_t x376 = -10;
volatile int32_t t93 = -1;
int32_t x387 = INT32_MIN;
int16_t x388 = 1;
int8_t x389 = -1;
volatile int32_t x392 = INT32_MAX;
int16_t x394 = INT16_MIN;
uint16_t x396 = UINT16_MAX;
uint32_t x399 = 997U;


void f0(void) {
	int32_t x1 = -1;
	uint16_t x2 = UINT16_MAX;
	volatile int64_t x3 = -1587881871790626LL;
	volatile int8_t x4 = 33;
	volatile int32_t t0 = -71;

	t0 = (x1&(x2<(x3==x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	int32_t x6 = INT32_MAX;
	int8_t x7 = -1;
	static int32_t x8 = 54728671;

	t1 = (x5&(x6<(x7==x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = 686;

	t2 = (x9&(x10<(x11==x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 105;
	static int32_t x15 = INT32_MAX;
	uint16_t x16 = UINT16_MAX;
	int32_t t3 = 6;

	t3 = (x13&(x14<(x15==x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	int16_t x20 = 5348;
	int32_t t4 = -9237;

	t4 = (x17&(x18<(x19==x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = INT16_MAX;
	int16_t x23 = -51;
	int32_t t5 = -112;

	t5 = (x21&(x22<(x23==x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 769;
	volatile int16_t x26 = -2;
	volatile int64_t x27 = -1LL;
	uint32_t x28 = 108U;

	t6 = (x25&(x26<(x27==x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint32_t x30 = 1993U;
	uint8_t x31 = UINT8_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t7 = 3349;

	t7 = (x29&(x30<(x31==x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	static int8_t x34 = INT8_MIN;
	volatile uint64_t x36 = UINT64_MAX;
	static int32_t t8 = -1;

	t8 = (x33&(x34<(x35==x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MIN;
	volatile int64_t x39 = 39592074352LL;
	static int64_t x40 = INT64_MIN;
	volatile int32_t t9 = -487156380;

	t9 = (x37&(x38<(x39==x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 3;
	int32_t x42 = -1;
	int64_t x44 = INT64_MIN;
	int32_t t10 = -6142978;

	t10 = (x41&(x42<(x43==x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -60072444;
	uint32_t x46 = 6U;
	int16_t x47 = INT16_MIN;
	volatile int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -14324;

	t11 = (x45&(x46<(x47==x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = 14;
	int8_t x50 = INT8_MAX;
	uint8_t x51 = 11U;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = -1;

	t12 = (x49&(x50<(x51==x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	volatile uint8_t x55 = 0U;
	int32_t t13 = 44;

	t13 = (x53&(x54<(x55==x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 20U;
	uint16_t x58 = 9139U;
	static int32_t x59 = -50;
	uint16_t x60 = UINT16_MAX;
	int32_t t14 = -75294;

	t14 = (x57&(x58<(x59==x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -5;
	int16_t x62 = 10;
	static volatile int32_t x63 = -1;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 66780263;

	t15 = (x61&(x62<(x63==x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -64070;
	volatile int16_t x66 = -1;
	volatile int8_t x67 = -3;
	static int32_t x68 = 4537412;
	volatile int32_t t16 = 7026;

	t16 = (x65&(x66<(x67==x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x69 = 496472455499LLU;
	static volatile uint64_t x70 = UINT64_MAX;
	uint64_t x71 = 17420226690065LLU;
	static volatile int32_t x72 = INT32_MIN;
	uint64_t t17 = 7419193937LLU;

	t17 = (x69&(x70<(x71==x72)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint32_t x74 = UINT32_MAX;
	uint16_t x75 = 4U;
	int16_t x76 = INT16_MIN;
	int32_t t18 = -704726;

	t18 = (x73&(x74<(x75==x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 19096U;
	static int64_t x78 = 119820952LL;
	int8_t x79 = -1;
	uint8_t x80 = UINT8_MAX;
	int32_t t19 = -122;

	t19 = (x77&(x78<(x79==x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MIN;
	static int64_t x82 = INT64_MAX;
	int8_t x83 = -1;
	int32_t x84 = 22241981;
	int32_t t20 = 32525590;

	t20 = (x81&(x82<(x83==x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x85 = 18083U;
	int8_t x86 = -4;
	static volatile int8_t x87 = INT8_MIN;
	uint16_t x88 = 120U;
	int32_t t21 = 981494;

	t21 = (x85&(x86<(x87==x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x89 = INT64_MIN;
	volatile uint16_t x90 = UINT16_MAX;
	uint64_t x91 = 57517928698449LLU;
	uint32_t x92 = UINT32_MAX;
	int64_t t22 = 263478691725LL;

	t22 = (x89&(x90<(x91==x92)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint64_t x94 = 2700951820LLU;
	uint8_t x95 = UINT8_MAX;
	uint64_t x96 = 1826265LLU;
	int32_t t23 = 0;

	t23 = (x93&(x94<(x95==x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x97 = 255U;
	int64_t x98 = -1LL;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = -1LL;
	volatile int32_t t24 = -57;

	t24 = (x97&(x98<(x99==x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint32_t x101 = 352950877U;
	int32_t x102 = INT32_MIN;
	static volatile int16_t x103 = INT16_MAX;
	static int32_t x104 = -1;
	volatile uint32_t t25 = 11U;

	t25 = (x101&(x102<(x103==x104)));

	if (t25 != 1U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	int8_t x107 = -3;
	int16_t x108 = -10;
	uint32_t t26 = 2503640U;

	t26 = (x105&(x106<(x107==x108)));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int16_t x112 = 11;
	int32_t t27 = 0;

	t27 = (x109&(x110<(x111==x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x113 = UINT16_MAX;
	int16_t x114 = -9;
	volatile int32_t x116 = INT32_MIN;
	int32_t t28 = 130244173;

	t28 = (x113&(x114<(x115==x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x117 = INT16_MAX;
	uint16_t x118 = 880U;
	uint8_t x119 = UINT8_MAX;

	t29 = (x117&(x118<(x119==x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x122 = INT32_MIN;
	volatile int8_t x123 = INT8_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t30 = -542336;

	t30 = (x121&(x122<(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	uint32_t x126 = UINT32_MAX;
	volatile uint32_t x127 = UINT32_MAX;
	static int32_t t31 = -3660;

	t31 = (x125&(x126<(x127==x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -51;
	volatile int8_t x132 = INT8_MIN;
	static volatile int32_t t32 = 609009;

	t32 = (x129&(x130<(x131==x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x134 = 8698;
	static int16_t x135 = 19;
	int64_t t33 = 29LL;

	t33 = (x133&(x134<(x135==x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -1681624284LL;
	volatile uint16_t x139 = 950U;
	volatile int64_t x140 = 6188259445LL;
	volatile int64_t t34 = -169102315813LL;

	t34 = (x137&(x138<(x139==x140)));

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 1165U;
	volatile int32_t x144 = 2954030;

	t35 = (x141&(x142<(x143==x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 23128U;
	int16_t x146 = -1;
	uint8_t x147 = 0U;
	int32_t t36 = 1;

	t36 = (x145&(x146<(x147==x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MAX;
	int16_t x150 = 8;

	t37 = (x149&(x150<(x151==x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	uint64_t x155 = 2387LLU;
	static int16_t x156 = 35;
	static volatile int32_t t38 = 45046;

	t38 = (x153&(x154<(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = 292;
	int64_t x158 = INT64_MIN;
	static int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	int32_t t39 = 73;

	t39 = (x157&(x158<(x159==x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = 60;
	int16_t x164 = INT16_MIN;
	int32_t t40 = -3505;

	t40 = (x161&(x162<(x163==x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 75898625830267825LLU;
	int8_t x166 = INT8_MIN;
	volatile uint8_t x167 = 10U;
	uint64_t x168 = 4905882LLU;
	static uint64_t t41 = 70626LLU;

	t41 = (x165&(x166<(x167==x168)));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -2;
	int64_t x170 = -126751637052606LL;
	int16_t x171 = 61;
	int32_t t42 = 13112;

	t42 = (x169&(x170<(x171==x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MAX;
	volatile uint64_t x174 = 6782845145LLU;
	uint32_t x175 = UINT32_MAX;
	static int32_t x176 = -1;
	int32_t t43 = 3158;

	t43 = (x173&(x174<(x175==x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	uint32_t x180 = UINT32_MAX;

	t44 = (x177&(x178<(x179==x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	static uint32_t x182 = 2144U;
	volatile int64_t x183 = 13776358LL;
	static volatile int32_t t45 = -486181;

	t45 = (x181&(x182<(x183==x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = 0LL;
	int64_t x186 = INT64_MIN;
	volatile uint64_t x188 = UINT64_MAX;
	int64_t t46 = -1697732166307232218LL;

	t46 = (x185&(x186<(x187==x188)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 13U;
	int8_t x190 = -1;
	uint64_t x191 = UINT64_MAX;
	static int32_t t47 = 1080;

	t47 = (x189&(x190<(x191==x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x196 = 0;
	uint64_t t48 = 1112534742LLU;

	t48 = (x193&(x194<(x195==x196)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	static int16_t x198 = INT16_MIN;
	static uint64_t x199 = 55654701700LLU;
	int16_t x200 = INT16_MIN;

	t49 = (x197&(x198<(x199==x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x202 = INT64_MAX;
	int16_t x203 = -1;
	int32_t x204 = -1;
	static int32_t t50 = -300;

	t50 = (x201&(x202<(x203==x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	volatile int16_t x206 = -13;
	volatile int64_t x207 = INT64_MIN;
	static uint8_t x208 = 10U;

	t51 = (x205&(x206<(x207==x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = 27;
	uint8_t x210 = 1U;
	uint8_t x212 = 3U;
	static int32_t t52 = -56;

	t52 = (x209&(x210<(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	static int32_t x214 = INT32_MIN;
	volatile int32_t x215 = INT32_MIN;
	volatile int8_t x216 = 29;
	int32_t t53 = -9;

	t53 = (x213&(x214<(x215==x216)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int64_t x219 = -176312331LL;
	int16_t x220 = 9;
	static int32_t t54 = -42;

	t54 = (x217&(x218<(x219==x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = UINT64_MAX;
	int16_t x222 = -1;
	int8_t x224 = 3;
	volatile uint64_t t55 = 837LLU;

	t55 = (x221&(x222<(x223==x224)));

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = 3U;
	static int8_t x226 = -1;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t56 = 1570;

	t56 = (x225&(x226<(x227==x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	static volatile int8_t x230 = INT8_MAX;
	int16_t x231 = 192;
	int8_t x232 = INT8_MIN;

	t57 = (x229&(x230<(x231==x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 1U;
	uint32_t x234 = 7U;
	static int64_t x235 = INT64_MIN;
	volatile int32_t t58 = 103693477;

	t58 = (x233&(x234<(x235==x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MIN;
	static uint16_t x240 = UINT16_MAX;

	t59 = (x237&(x238<(x239==x240)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	uint64_t x242 = 63541114213LLU;
	uint64_t x243 = 0LLU;
	int32_t t60 = -209506;

	t60 = (x241&(x242<(x243==x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 498U;
	uint32_t x248 = 50040500U;
	uint64_t t61 = 811613LLU;

	t61 = (x245&(x246<(x247==x248)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x250 = 13771496437521LLU;
	static int16_t x251 = INT16_MIN;
	static int64_t x252 = INT64_MIN;
	volatile int32_t t62 = -1;

	t62 = (x249&(x250<(x251==x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	uint32_t x254 = UINT32_MAX;
	int16_t x255 = 4096;
	int64_t x256 = -1LL;
	volatile int32_t t63 = 0;

	t63 = (x253&(x254<(x255==x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 3427LL;
	static int32_t x259 = INT32_MAX;
	static int32_t x260 = INT32_MAX;
	int64_t t64 = -165LL;

	t64 = (x257&(x258<(x259==x260)));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 15U;
	int32_t x262 = -46;
	int16_t x263 = INT16_MAX;
	uint64_t x264 = 267209171081597LLU;
	static volatile int32_t t65 = 0;

	t65 = (x261&(x262<(x263==x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	static uint32_t x266 = 1935876U;
	int32_t x267 = -1;
	int32_t x268 = INT32_MAX;
	volatile int32_t t66 = 13457;

	t66 = (x265&(x266<(x267==x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -13477;
	int64_t x271 = -1LL;
	int16_t x272 = INT16_MAX;

	t67 = (x269&(x270<(x271==x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int16_t x274 = -1;
	static volatile int32_t t68 = -257341438;

	t68 = (x273&(x274<(x275==x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 56;
	static volatile uint64_t x278 = UINT64_MAX;
	static int16_t x279 = -1;
	uint8_t x280 = UINT8_MAX;

	t69 = (x277&(x278<(x279==x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 22U;
	int64_t x282 = 1054105LL;
	int8_t x284 = -1;
	static volatile int32_t t70 = -6;

	t70 = (x281&(x282<(x283==x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static int8_t x286 = INT8_MIN;
	int16_t x288 = INT16_MIN;
	volatile int32_t t71 = -246674;

	t71 = (x285&(x286<(x287==x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 3U;
	int64_t x291 = INT64_MIN;
	uint64_t x292 = UINT64_MAX;
	int32_t t72 = -235;

	t72 = (x289&(x290<(x291==x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 3338763;
	uint32_t x294 = UINT32_MAX;
	static volatile uint32_t x295 = 1U;
	static int32_t x296 = INT32_MIN;

	t73 = (x293&(x294<(x295==x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 3LLU;
	static int8_t x298 = 45;
	volatile int64_t x299 = INT64_MAX;
	uint8_t x300 = UINT8_MAX;

	t74 = (x297&(x298<(x299==x300)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	int16_t x303 = 1;
	int64_t x304 = -1LL;
	int32_t t75 = 79921;

	t75 = (x301&(x302<(x303==x304)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint64_t x306 = 17304426576512320LLU;
	int8_t x307 = 1;
	volatile uint64_t x308 = UINT64_MAX;
	static volatile int32_t t76 = -14869;

	t76 = (x305&(x306<(x307==x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -1;
	static uint16_t x311 = 689U;
	int64_t x312 = 1344301LL;
	volatile int32_t t77 = -474207922;

	t77 = (x309&(x310<(x311==x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MAX;
	int64_t x315 = -65660LL;
	int8_t x316 = INT8_MAX;

	t78 = (x313&(x314<(x315==x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = 0;
	int8_t x319 = INT8_MAX;
	int64_t x320 = -40672813LL;
	volatile int32_t t79 = -277169;

	t79 = (x317&(x318<(x319==x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = UINT8_MAX;
	volatile uint64_t x322 = 1LLU;
	int32_t x323 = -1;
	static volatile uint64_t x324 = UINT64_MAX;

	t80 = (x321&(x322<(x323==x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MIN;
	uint32_t x326 = 0U;
	uint32_t x328 = 50392U;
	int32_t t81 = 551718395;

	t81 = (x325&(x326<(x327==x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	int32_t x330 = INT32_MAX;
	int64_t x332 = INT64_MAX;

	t82 = (x329&(x330<(x331==x332)));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = 23;
	int32_t t83 = 51;

	t83 = (x333&(x334<(x335==x336)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x340 = 582212LL;
	static volatile uint32_t t84 = 1708367U;

	t84 = (x337&(x338<(x339==x340)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x343 = UINT8_MAX;
	volatile int32_t x344 = -15590;
	volatile int32_t t85 = 0;

	t85 = (x341&(x342<(x343==x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = 0U;
	int64_t x346 = INT64_MIN;
	uint8_t x348 = 31U;

	t86 = (x345&(x346<(x347==x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	int64_t x351 = INT64_MAX;
	uint8_t x352 = 91U;

	t87 = (x349&(x350<(x351==x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	static int8_t x354 = INT8_MIN;
	uint16_t x356 = 4U;
	volatile int32_t t88 = 7123;

	t88 = (x353&(x354<(x355==x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 368U;
	uint8_t x358 = 0U;
	int64_t x359 = -1LL;
	static uint8_t x360 = UINT8_MAX;
	static int32_t t89 = -97124;

	t89 = (x357&(x358<(x359==x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 49;
	volatile int8_t x362 = 57;
	int16_t x363 = -1;
	uint16_t x364 = 68U;

	t90 = (x361&(x362<(x363==x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x367 = 927622;
	uint32_t x368 = UINT32_MAX;
	volatile int32_t t91 = 6;

	t91 = (x365&(x366<(x367==x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x371 = 2040110700U;
	uint32_t t92 = 3U;

	t92 = (x369&(x370<(x371==x372)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -1;
	volatile int8_t x374 = INT8_MAX;
	static int8_t x375 = INT8_MIN;

	t93 = (x373&(x374<(x375==x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 12816;
	uint64_t x378 = 33LLU;
	uint32_t x379 = 20173994U;
	static volatile int8_t x380 = -1;
	int32_t t94 = -6;

	t94 = (x377&(x378<(x379==x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 460159568U;
	volatile int8_t x382 = INT8_MIN;
	volatile uint32_t x383 = UINT32_MAX;
	int16_t x384 = -1;
	uint32_t t95 = 13441980U;

	t95 = (x381&(x382<(x383==x384)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = 1;
	uint8_t x386 = UINT8_MAX;
	volatile int32_t t96 = 60;

	t96 = (x385&(x386<(x387==x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = 1663LLU;
	int32_t x391 = INT32_MAX;
	volatile int32_t t97 = -4736;

	t97 = (x389&(x390<(x391==x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 6U;
	uint64_t x395 = 50LLU;
	int32_t t98 = 1354;

	t98 = (x393&(x394<(x395==x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x398 = 28U;
	int16_t x400 = INT16_MAX;
	volatile int32_t t99 = 3951500;

	t99 = (x397&(x398<(x399==x400)));

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

