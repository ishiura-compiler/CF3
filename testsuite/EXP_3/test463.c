#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x10 = 1253982772432LL;
uint64_t x11 = UINT64_MAX;
volatile int8_t x12 = INT8_MAX;
int8_t x13 = -1;
uint8_t x16 = 44U;
int32_t t2 = -132691;
volatile int64_t x18 = INT64_MIN;
volatile uint32_t x23 = 6445670U;
static volatile int32_t t4 = 619209;
int32_t x48 = 99891177;
static int32_t t9 = 19308924;
static volatile int64_t x54 = INT64_MAX;
volatile uint64_t x57 = UINT64_MAX;
int8_t x68 = INT8_MIN;
int8_t x77 = INT8_MAX;
static int8_t x81 = 8;
uint64_t x82 = 510460700807258467LLU;
volatile int32_t t17 = 732390985;
volatile uint8_t x92 = 91U;
static int16_t x93 = 43;
static int16_t x103 = INT16_MAX;
volatile int32_t t20 = 1051442920;
static uint8_t x105 = 1U;
int8_t x111 = INT8_MIN;
uint64_t x114 = 480899664549331LLU;
uint64_t x115 = UINT64_MAX;
int64_t x118 = INT64_MIN;
int8_t x123 = INT8_MIN;
int32_t t25 = 1544302;
static volatile uint64_t x126 = UINT64_MAX;
static int32_t t26 = 23843;
int64_t x136 = INT64_MIN;
uint64_t x139 = 3630701474801LLU;
int32_t t28 = -1;
uint8_t x147 = UINT8_MAX;
int32_t t29 = -11;
uint8_t x150 = UINT8_MAX;
static uint16_t x153 = UINT16_MAX;
uint64_t x156 = UINT64_MAX;
uint16_t x157 = 1655U;
uint16_t x168 = 168U;
uint8_t x176 = UINT8_MAX;
static int32_t x182 = INT32_MIN;
static volatile int32_t t36 = 494;
uint32_t x190 = UINT32_MAX;
static int32_t t37 = 696404004;
int64_t x196 = 0LL;
uint32_t x200 = 1749612U;
uint64_t x202 = UINT64_MAX;
static volatile int32_t t42 = -55922;
uint16_t x223 = 93U;
static int8_t x225 = 12;
static int32_t t45 = -60080435;
volatile int32_t x231 = INT32_MAX;
int16_t x234 = -1;
uint8_t x241 = 5U;
uint16_t x242 = 26197U;
volatile uint8_t x273 = 1U;
uint16_t x274 = 12U;
int32_t t52 = -520892;
int8_t x283 = INT8_MIN;
volatile int8_t x297 = -1;
volatile int32_t x302 = 19;
int16_t x307 = INT16_MIN;
int8_t x320 = INT8_MAX;
volatile int8_t x326 = 0;
uint8_t x334 = 43U;
int32_t x339 = -40;
int32_t x346 = INT32_MIN;
uint8_t x347 = UINT8_MAX;
volatile uint8_t x353 = 13U;
int32_t x356 = INT32_MAX;
int32_t x357 = 0;
int16_t x359 = -1364;
int64_t x360 = -23606722896326LL;
int32_t t65 = -310679;
int32_t t68 = 65117205;
static int64_t x387 = INT64_MIN;
volatile uint64_t x388 = 5436745265073LLU;
uint32_t x391 = UINT32_MAX;
static volatile uint8_t x402 = 3U;
volatile int16_t x411 = -1;
uint32_t x412 = 140472867U;
uint32_t x414 = 231U;
uint16_t x415 = 57U;
volatile int64_t x418 = INT64_MAX;
int8_t x420 = INT8_MIN;
volatile int16_t x429 = INT16_MAX;
static int64_t x431 = 33LL;
int8_t x432 = INT8_MIN;
int32_t x456 = -1;
int8_t x461 = 1;
int16_t x462 = -1;
uint16_t x473 = 7U;
uint8_t x481 = 98U;
uint32_t x496 = UINT32_MAX;
uint32_t x515 = 2875925U;
static uint32_t x516 = 157994152U;
int8_t x527 = -1;
volatile int32_t t96 = -4083;
int32_t t97 = -1;
int32_t t98 = 484747807;


void f0(void) {
	int32_t x1 = -1;
	volatile uint64_t x2 = 256LLU;
	int16_t x3 = -2;
	uint64_t x4 = 59939LLU;
	volatile int32_t t0 = 475464716;

	t0 = ((x1<=x2)==(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	volatile int32_t t1 = -13440954;

	t1 = ((x9<=x10)==(x11*x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x14 = INT16_MAX;
	static int16_t x15 = INT16_MIN;

	t2 = ((x13<=x14)==(x15*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = 1;
	int8_t x19 = INT8_MAX;
	static int16_t x20 = INT16_MAX;
	static volatile int32_t t3 = -789;

	t3 = ((x17<=x18)==(x19*x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MAX;
	uint64_t x24 = 12816850714990LLU;

	t4 = ((x21<=x22)==(x23*x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = -35;
	int16_t x26 = INT16_MIN;
	static uint64_t x27 = 81429460LLU;
	uint8_t x28 = UINT8_MAX;
	volatile int32_t t5 = -811;

	t5 = ((x25<=x26)==(x27*x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = -49;
	uint32_t x34 = 201U;
	int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MIN;
	int32_t t6 = 30;

	t6 = ((x33<=x34)==(x35*x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = -14679;
	uint8_t x38 = 56U;
	volatile int16_t x39 = 5996;
	volatile int8_t x40 = -1;
	int32_t t7 = -18259;

	t7 = ((x37<=x38)==(x39*x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MAX;
	uint32_t x42 = 642803631U;
	int32_t x43 = INT32_MAX;
	int16_t x44 = 0;
	int32_t t8 = 1;

	t8 = ((x41<=x42)==(x43*x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	uint16_t x46 = 1U;
	int32_t x47 = -1;

	t9 = ((x45<=x46)==(x47*x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x49 = UINT16_MAX;
	volatile int32_t x50 = 3583;
	static volatile int16_t x51 = 1;
	int16_t x52 = -112;
	int32_t t10 = 815466;

	t10 = ((x49<=x50)==(x51*x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -3;
	volatile int32_t x55 = 125092;
	int8_t x56 = INT8_MAX;
	volatile int32_t t11 = -49760899;

	t11 = ((x53<=x54)==(x55*x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x58 = INT64_MIN;
	static int16_t x59 = 2090;
	static volatile uint32_t x60 = UINT32_MAX;
	int32_t t12 = -244;

	t12 = ((x57<=x58)==(x59*x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	int8_t x66 = -1;
	int32_t x67 = -276;
	static volatile int32_t t13 = 1876;

	t13 = ((x65<=x66)==(x67*x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1922;
	static int16_t x74 = -1;
	uint8_t x75 = 0U;
	volatile uint64_t x76 = UINT64_MAX;
	int32_t t14 = -970493227;

	t14 = ((x73<=x74)==(x75*x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x78 = 2148U;
	volatile int8_t x79 = -3;
	static int64_t x80 = -1LL;
	static volatile int32_t t15 = -32483;

	t15 = ((x77<=x78)==(x79*x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x83 = -1;
	static volatile int32_t x84 = 9149;
	int32_t t16 = 1784;

	t16 = ((x81<=x82)==(x83*x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int32_t x85 = INT32_MAX;
	int64_t x86 = 5LL;
	int8_t x87 = INT8_MAX;
	int16_t x88 = -919;

	t17 = ((x85<=x86)==(x87*x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x89 = 1134U;
	uint64_t x90 = 3093300LLU;
	uint8_t x91 = UINT8_MAX;
	volatile int32_t t18 = 169823591;

	t18 = ((x89<=x90)==(x91*x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 112U;
	int32_t x96 = -1;
	volatile int32_t t19 = -393386680;

	t19 = ((x93<=x94)==(x95*x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 11U;
	static volatile int32_t x102 = INT32_MIN;
	static volatile uint8_t x104 = UINT8_MAX;

	t20 = ((x101<=x102)==(x103*x104));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = -15;
	uint32_t x107 = 68328U;
	int8_t x108 = -1;
	volatile int32_t t21 = 33709;

	t21 = ((x105<=x106)==(x107*x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x109 = INT8_MAX;
	int8_t x110 = 2;
	int8_t x112 = INT8_MAX;
	volatile int32_t t22 = 227612;

	t22 = ((x109<=x110)==(x111*x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x113 = INT64_MIN;
	int16_t x116 = 1351;
	static volatile int32_t t23 = 535437;

	t23 = ((x113<=x114)==(x115*x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	uint16_t x120 = 598U;
	int32_t t24 = -1;

	t24 = ((x117<=x118)==(x119*x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x121 = 10;
	int64_t x122 = 8081659434585LL;
	int64_t x124 = -57302355675699673LL;

	t25 = ((x121<=x122)==(x123*x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = -3;
	uint8_t x127 = 1U;
	int8_t x128 = INT8_MIN;

	t26 = ((x125<=x126)==(x127*x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x133 = INT16_MAX;
	volatile uint32_t x134 = 111937U;
	static int32_t x135 = 1;
	static volatile int32_t t27 = 688688467;

	t27 = ((x133<=x134)==(x135*x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x138 = 456U;
	static int8_t x140 = -1;

	t28 = ((x137<=x138)==(x139*x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x145 = 1197918443036230LLU;
	int8_t x146 = INT8_MIN;
	int8_t x148 = INT8_MIN;

	t29 = ((x145<=x146)==(x147*x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x149 = 1009450U;
	static uint64_t x151 = 205115683518278001LLU;
	int64_t x152 = -78572200362933291LL;
	int32_t t30 = -350634;

	t30 = ((x149<=x150)==(x151*x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x154 = 23404049U;
	volatile int16_t x155 = INT16_MAX;
	volatile int32_t t31 = 786743;

	t31 = ((x153<=x154)==(x155*x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x158 = -1921211827906226LL;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = UINT8_MAX;
	int32_t t32 = 4760969;

	t32 = ((x157<=x158)==(x159*x160));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x165 = -3;
	volatile int16_t x166 = -1;
	volatile uint8_t x167 = UINT8_MAX;
	static int32_t t33 = -7983935;

	t33 = ((x165<=x166)==(x167*x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x174 = 426010LLU;
	static int64_t x175 = -1LL;
	int32_t t34 = 2503150;

	t34 = ((x173<=x174)==(x175*x176));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x177 = UINT32_MAX;
	static int16_t x178 = INT16_MIN;
	int64_t x179 = 124009430LL;
	uint64_t x180 = 15805LLU;
	volatile int32_t t35 = -1579;

	t35 = ((x177<=x178)==(x179*x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = -1LL;
	volatile int8_t x183 = INT8_MIN;
	int64_t x184 = 280742971LL;

	t36 = ((x181<=x182)==(x183*x184));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x189 = 1U;
	volatile int64_t x191 = 319050017190LL;
	int8_t x192 = INT8_MAX;

	t37 = ((x189<=x190)==(x191*x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x193 = -1;
	int32_t x194 = INT32_MIN;
	uint8_t x195 = 62U;
	static int32_t t38 = 936270;

	t38 = ((x193<=x194)==(x195*x196));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x197 = UINT64_MAX;
	volatile int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MAX;
	int32_t t39 = 113;

	t39 = ((x197<=x198)==(x199*x200));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x201 = INT16_MIN;
	uint64_t x203 = 10LLU;
	int32_t x204 = 1;
	int32_t t40 = -5694;

	t40 = ((x201<=x202)==(x203*x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x205 = -3;
	static int64_t x206 = 57LL;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;
	static volatile int32_t t41 = -121072;

	t41 = ((x205<=x206)==(x207*x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x213 = INT16_MAX;
	int32_t x214 = INT32_MAX;
	int16_t x215 = INT16_MIN;
	volatile int32_t x216 = -1;

	t42 = ((x213<=x214)==(x215*x216));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x217 = UINT8_MAX;
	volatile int8_t x218 = -1;
	volatile int16_t x219 = INT16_MAX;
	int8_t x220 = 29;
	int32_t t43 = -33018027;

	t43 = ((x217<=x218)==(x219*x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x221 = 952067;
	int64_t x222 = 1785185016768288085LL;
	static uint32_t x224 = 6956U;
	int32_t t44 = 691667;

	t44 = ((x221<=x222)==(x223*x224));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x226 = 16U;
	static uint64_t x227 = 0LLU;
	uint16_t x228 = UINT16_MAX;

	t45 = ((x225<=x226)==(x227*x228));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = -1;
	int64_t x230 = INT64_MAX;
	volatile uint64_t x232 = 279351551631623LLU;
	static int32_t t46 = 5;

	t46 = ((x229<=x230)==(x231*x232));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x233 = INT64_MAX;
	uint8_t x235 = 117U;
	static int16_t x236 = 139;
	int32_t t47 = -2020135;

	t47 = ((x233<=x234)==(x235*x236));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x243 = INT32_MAX;
	uint32_t x244 = 20105176U;
	volatile int32_t t48 = -3029;

	t48 = ((x241<=x242)==(x243*x244));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x245 = INT64_MAX;
	int64_t x246 = INT64_MAX;
	static int32_t x247 = 124366460;
	volatile uint8_t x248 = 0U;
	int32_t t49 = -602;

	t49 = ((x245<=x246)==(x247*x248));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = 11118U;
	static volatile uint16_t x250 = 313U;
	uint8_t x251 = 1U;
	uint64_t x252 = UINT64_MAX;
	int32_t t50 = -4892143;

	t50 = ((x249<=x250)==(x251*x252));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x275 = INT32_MAX;
	static int8_t x276 = 1;
	volatile int32_t t51 = -4001;

	t51 = ((x273<=x274)==(x275*x276));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x277 = -1;
	volatile int64_t x278 = -31428286515LL;
	uint64_t x279 = UINT64_MAX;
	uint64_t x280 = UINT64_MAX;

	t52 = ((x277<=x278)==(x279*x280));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x281 = -2561LL;
	int64_t x282 = 114118974681LL;
	uint8_t x284 = 26U;
	volatile int32_t t53 = -84227;

	t53 = ((x281<=x282)==(x283*x284));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x289 = 20U;
	int16_t x290 = INT16_MAX;
	static uint8_t x291 = 11U;
	int8_t x292 = -27;
	volatile int32_t t54 = -358439;

	t54 = ((x289<=x290)==(x291*x292));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x298 = 1U;
	static volatile uint64_t x299 = 402761800LLU;
	int16_t x300 = 3267;
	static volatile int32_t t55 = -67221884;

	t55 = ((x297<=x298)==(x299*x300));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x301 = INT16_MAX;
	volatile int16_t x303 = INT16_MIN;
	static uint64_t x304 = UINT64_MAX;
	static int32_t t56 = 0;

	t56 = ((x301<=x302)==(x303*x304));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x305 = 1;
	int16_t x306 = -1;
	static uint32_t x308 = 57U;
	volatile int32_t t57 = -32;

	t57 = ((x305<=x306)==(x307*x308));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x317 = INT32_MIN;
	volatile int8_t x318 = -20;
	int16_t x319 = 507;
	static int32_t t58 = -1;

	t58 = ((x317<=x318)==(x319*x320));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x325 = INT64_MIN;
	uint32_t x327 = UINT32_MAX;
	int16_t x328 = -1;
	volatile int32_t t59 = -1156475;

	t59 = ((x325<=x326)==(x327*x328));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x333 = INT16_MIN;
	int8_t x335 = INT8_MAX;
	int16_t x336 = 1;
	static int32_t t60 = 1474457;

	t60 = ((x333<=x334)==(x335*x336));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x337 = -30436176352LL;
	int16_t x338 = 170;
	uint64_t x340 = 1060272327LLU;
	int32_t t61 = -3994;

	t61 = ((x337<=x338)==(x339*x340));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x345 = 2777U;
	int8_t x348 = INT8_MAX;
	int32_t t62 = -1493;

	t62 = ((x345<=x346)==(x347*x348));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x349 = 3840917LLU;
	static int16_t x350 = INT16_MIN;
	uint64_t x351 = 6408543769LLU;
	uint8_t x352 = 2U;
	int32_t t63 = -18;

	t63 = ((x349<=x350)==(x351*x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x354 = 19U;
	uint64_t x355 = 50LLU;
	volatile int32_t t64 = -299190;

	t64 = ((x353<=x354)==(x355*x356));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x358 = INT64_MIN;

	t65 = ((x357<=x358)==(x359*x360));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x361 = 1;
	uint64_t x362 = 3523666057LLU;
	volatile int32_t x363 = -1;
	volatile int8_t x364 = -1;
	int32_t t66 = 29657;

	t66 = ((x361<=x362)==(x363*x364));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = -1LL;
	volatile uint64_t x374 = 6043396073LLU;
	int8_t x375 = 0;
	int8_t x376 = -1;
	int32_t t67 = 2683;

	t67 = ((x373<=x374)==(x375*x376));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x377 = INT32_MIN;
	static int64_t x378 = 53092724124469LL;
	uint16_t x379 = 5U;
	static int8_t x380 = INT8_MIN;

	t68 = ((x377<=x378)==(x379*x380));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x381 = -1;
	volatile uint32_t x382 = 1711019988U;
	int64_t x383 = -1LL;
	int64_t x384 = INT64_MAX;
	volatile int32_t t69 = 238373;

	t69 = ((x381<=x382)==(x383*x384));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x385 = 3U;
	volatile uint8_t x386 = 0U;
	static volatile int32_t t70 = -621292;

	t70 = ((x385<=x386)==(x387*x388));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x389 = 4;
	volatile uint8_t x390 = UINT8_MAX;
	int32_t x392 = INT32_MAX;
	volatile int32_t t71 = -301;

	t71 = ((x389<=x390)==(x391*x392));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x393 = -1;
	volatile int8_t x394 = INT8_MAX;
	uint64_t x395 = 26965663LLU;
	static uint16_t x396 = 61U;
	static volatile int32_t t72 = 9235870;

	t72 = ((x393<=x394)==(x395*x396));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x401 = 234310826U;
	int32_t x403 = 0;
	volatile int8_t x404 = INT8_MIN;
	int32_t t73 = 249759;

	t73 = ((x401<=x402)==(x403*x404));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x409 = -1;
	static int64_t x410 = INT64_MIN;
	int32_t t74 = 5143;

	t74 = ((x409<=x410)==(x411*x412));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x413 = 17808LLU;
	uint32_t x416 = 48337U;
	int32_t t75 = 405554;

	t75 = ((x413<=x414)==(x415*x416));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x417 = INT32_MIN;
	int16_t x419 = 6292;
	static volatile int32_t t76 = -1;

	t76 = ((x417<=x418)==(x419*x420));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x425 = 352;
	uint16_t x426 = 118U;
	int32_t x427 = INT32_MAX;
	volatile int16_t x428 = -1;
	int32_t t77 = 7092699;

	t77 = ((x425<=x426)==(x427*x428));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x430 = UINT16_MAX;
	int32_t t78 = 368465671;

	t78 = ((x429<=x430)==(x431*x432));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x441 = UINT8_MAX;
	uint32_t x442 = 495957U;
	uint32_t x443 = 197565U;
	static int8_t x444 = -1;
	int32_t t79 = -3;

	t79 = ((x441<=x442)==(x443*x444));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x445 = 0U;
	static volatile int8_t x446 = INT8_MIN;
	int16_t x447 = INT16_MIN;
	volatile int64_t x448 = -1LL;
	static int32_t t80 = 110509680;

	t80 = ((x445<=x446)==(x447*x448));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x449 = INT16_MAX;
	int16_t x450 = INT16_MIN;
	uint64_t x451 = 242714028419343LLU;
	static uint32_t x452 = 16U;
	volatile int32_t t81 = -152;

	t81 = ((x449<=x450)==(x451*x452));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x453 = UINT32_MAX;
	static int8_t x454 = INT8_MIN;
	volatile int32_t x455 = -1;
	volatile int32_t t82 = -32248667;

	t82 = ((x453<=x454)==(x455*x456));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x457 = 980964099;
	static uint8_t x458 = 7U;
	volatile uint16_t x459 = UINT16_MAX;
	int64_t x460 = -1LL;
	volatile int32_t t83 = -143010;

	t83 = ((x457<=x458)==(x459*x460));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x463 = 5LL;
	volatile uint64_t x464 = 42730LLU;
	volatile int32_t t84 = 0;

	t84 = ((x461<=x462)==(x463*x464));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x465 = 125U;
	static uint16_t x466 = 204U;
	int16_t x467 = INT16_MAX;
	uint32_t x468 = UINT32_MAX;
	volatile int32_t t85 = 41771469;

	t85 = ((x465<=x466)==(x467*x468));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x474 = INT32_MAX;
	static int8_t x475 = INT8_MIN;
	static volatile int8_t x476 = INT8_MAX;
	volatile int32_t t86 = 27;

	t86 = ((x473<=x474)==(x475*x476));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x477 = INT32_MIN;
	int64_t x478 = -415730268345885LL;
	static uint32_t x479 = 78365601U;
	int8_t x480 = INT8_MAX;
	volatile int32_t t87 = 10;

	t87 = ((x477<=x478)==(x479*x480));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x482 = 92U;
	static uint8_t x483 = UINT8_MAX;
	int16_t x484 = -1;
	int32_t t88 = -166;

	t88 = ((x481<=x482)==(x483*x484));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x485 = INT16_MIN;
	int16_t x486 = INT16_MIN;
	volatile uint8_t x487 = 7U;
	uint8_t x488 = 122U;
	volatile int32_t t89 = 53;

	t89 = ((x485<=x486)==(x487*x488));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x493 = INT64_MIN;
	int64_t x494 = -1961076861441626346LL;
	int16_t x495 = INT16_MIN;
	int32_t t90 = -23245;

	t90 = ((x493<=x494)==(x495*x496));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x501 = INT16_MIN;
	int16_t x502 = -8430;
	static int64_t x503 = 122297861LL;
	volatile int32_t x504 = INT32_MIN;
	int32_t t91 = 26921178;

	t91 = ((x501<=x502)==(x503*x504));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x509 = -1;
	int64_t x510 = INT64_MAX;
	static uint32_t x511 = 513603U;
	uint16_t x512 = 0U;
	int32_t t92 = 1;

	t92 = ((x509<=x510)==(x511*x512));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x513 = INT16_MIN;
	int8_t x514 = INT8_MIN;
	volatile int32_t t93 = 480729992;

	t93 = ((x513<=x514)==(x515*x516));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x525 = 1U;
	int8_t x526 = -1;
	int8_t x528 = 1;
	static volatile int32_t t94 = 1521;

	t94 = ((x525<=x526)==(x527*x528));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x529 = INT32_MIN;
	volatile uint64_t x530 = 75678LLU;
	volatile int16_t x531 = INT16_MAX;
	int32_t x532 = 0;
	int32_t t95 = -26254509;

	t95 = ((x529<=x530)==(x531*x532));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x533 = -8;
	static int64_t x534 = 24225462533554373LL;
	int8_t x535 = 1;
	volatile int8_t x536 = -1;

	t96 = ((x533<=x534)==(x535*x536));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x537 = 14701816581324112LL;
	static int32_t x538 = INT32_MIN;
	volatile int16_t x539 = -1304;
	static uint64_t x540 = 60012LLU;

	t97 = ((x537<=x538)==(x539*x540));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x541 = INT8_MIN;
	volatile uint16_t x542 = UINT16_MAX;
	int8_t x543 = 37;
	int16_t x544 = INT16_MIN;

	t98 = ((x541<=x542)==(x543*x544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x549 = 0U;
	int16_t x550 = INT16_MIN;
	volatile int16_t x551 = INT16_MIN;
	uint8_t x552 = 101U;
	volatile int32_t t99 = -3;

	t99 = ((x549<=x550)==(x551*x552));

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

