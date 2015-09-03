#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
uint32_t x6 = UINT32_MAX;
int16_t x7 = 105;
int32_t x15 = INT32_MAX;
static int32_t x19 = INT32_MIN;
volatile uint32_t t3 = 31461110U;
volatile int8_t x22 = INT8_MAX;
volatile int16_t x40 = INT16_MIN;
volatile uint64_t t9 = 101LLU;
static int64_t t10 = 3687305422810837175LL;
int64_t x49 = 3581LL;
int8_t x62 = -2;
static int64_t x66 = -1LL;
int8_t x68 = INT8_MIN;
static int16_t x70 = 1;
static int8_t x71 = -61;
volatile int16_t x73 = -22;
int8_t x74 = 56;
uint16_t x95 = 56U;
static int8_t x99 = INT8_MAX;
static uint32_t x106 = 516206U;
int16_t x109 = INT16_MAX;
uint32_t x112 = 7894369U;
int64_t x119 = INT64_MAX;
static volatile uint64_t t25 = 90311259LLU;
int16_t x123 = -1;
uint16_t x134 = 711U;
int32_t x147 = -1;
int8_t x152 = INT8_MIN;
static uint64_t x153 = 24701LLU;
int32_t x158 = 968653;
int8_t x169 = -1;
volatile int64_t x179 = -1LL;
static int64_t t39 = -1815895318LL;
uint32_t x183 = 8300U;
uint64_t x188 = 71LLU;
uint16_t x199 = 0U;
uint64_t x200 = 1495LLU;
uint32_t t43 = 223873U;
volatile uint64_t t44 = 246259013884315241LLU;
volatile int32_t x210 = INT32_MIN;
uint64_t x216 = 21612LLU;
static int32_t x221 = 51;
int64_t x222 = -1LL;
int8_t x225 = INT8_MAX;
volatile uint32_t t48 = 378U;
static int16_t x241 = -13;
volatile uint8_t x248 = 3U;
static uint16_t x262 = 1780U;
volatile int32_t x270 = INT32_MAX;
static int64_t t58 = 13032642416779LL;
uint32_t x277 = 1523047U;
int8_t x282 = -1;
static uint64_t x292 = 7858726994747184332LLU;
uint64_t t61 = 14895876160LLU;
static int16_t x299 = INT16_MIN;
static volatile uint32_t x300 = UINT32_MAX;
uint64_t t63 = UINT64_MAX;
int32_t x302 = INT32_MAX;
int64_t x303 = INT64_MIN;
int16_t x307 = INT16_MIN;
static int16_t x308 = INT16_MAX;
int8_t x310 = 1;
int32_t x311 = -1;
uint64_t x312 = 423215LLU;
int8_t x321 = INT8_MAX;
static uint64_t x323 = UINT64_MAX;
int32_t x325 = 47;
int8_t x335 = INT8_MIN;
uint16_t x337 = 210U;
int16_t x339 = INT16_MIN;
volatile int64_t t72 = -9061209197173788LL;
uint8_t x342 = 48U;
int32_t x356 = -27562;
int8_t x357 = INT8_MIN;
int8_t x359 = INT8_MAX;
int8_t x369 = -3;
static int16_t x371 = -1;
static int32_t t78 = 7;
int32_t x374 = -689466077;
volatile uint64_t x377 = UINT64_MAX;
volatile int16_t x382 = -1;
volatile uint16_t x383 = 39U;
int8_t x385 = INT8_MIN;
static int16_t x387 = INT16_MIN;
int64_t t82 = 392900894317288039LL;
volatile uint64_t x419 = 4042327703518918897LLU;
int32_t x421 = 12;
static volatile uint8_t x422 = 19U;
int64_t x428 = -1LL;
uint32_t t91 = 251U;
volatile uint64_t t93 = 2421404524LLU;
uint16_t x454 = UINT16_MAX;
uint32_t x462 = UINT32_MAX;
static int16_t x463 = -4891;
int16_t x464 = 40;
int32_t x465 = INT32_MAX;
int16_t x467 = INT16_MIN;
uint64_t t97 = 562210LLU;
uint64_t x475 = UINT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int8_t x2 = INT8_MAX;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -3341;

	t0 = (x1*(x2&(x3+x4)));

	if (t0 != -4128768) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = 477881;
	int16_t x8 = INT16_MIN;
	static uint32_t t1 = 52207736U;

	t1 = (x5*(x6&(x7+x8)));

	if (t1 != 1570842081U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int8_t x16 = INT8_MIN;
	volatile int32_t t2 = 115;

	t2 = (x13*(x14&(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int32_t x18 = 1829277;
	int16_t x20 = INT16_MAX;

	t3 = (x17*(x18&(x19+x20)));

	if (t3 != 4294940259U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 2U;
	volatile int8_t x23 = -1;
	int8_t x24 = INT8_MIN;
	int32_t t4 = -1127223;

	t4 = (x21*(x22&(x23+x24)));

	if (t4 != 254) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static int8_t x26 = 0;
	int8_t x27 = 1;
	static uint64_t x28 = 53631186426985LLU;
	static uint64_t t5 = 660765816359711429LLU;

	t5 = (x25*(x26&(x27+x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = INT64_MIN;
	int8_t x30 = 0;
	uint32_t x31 = UINT32_MAX;
	volatile uint8_t x32 = 7U;
	volatile int64_t t6 = 881723492695LL;

	t6 = (x29*(x30&(x31+x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	static uint16_t x34 = UINT16_MAX;
	volatile int64_t x35 = INT64_MIN;
	int64_t x36 = INT64_MAX;
	uint64_t t7 = 72579344832LLU;

	t7 = (x33*(x34&(x35+x36)));

	if (t7 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = 1U;
	int64_t x38 = -222LL;
	volatile uint16_t x39 = 3U;
	int64_t t8 = 17422901380003817LL;

	t8 = (x37*(x38&(x39+x40)));

	if (t8 != -32766LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	uint64_t x43 = 10LLU;
	volatile int64_t x44 = 1018655091LL;

	t9 = (x41*(x42&(x43+x44)));

	if (t9 != 18446744073705832832LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	int16_t x46 = -1;
	uint8_t x47 = UINT8_MAX;
	int64_t x48 = INT64_MIN;

	t10 = (x45*(x46&(x47+x48)));

	if (t10 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = -13896126LL;
	static int8_t x51 = -1;
	int8_t x52 = -10;
	int64_t t11 = 521566321116297LL;

	t11 = (x49*(x50&(x51+x52)));

	if (t11 != -49762034368LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x53 = 15;
	uint32_t x54 = 41847317U;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 0U;
	uint32_t t12 = 79723U;

	t12 = (x53*(x54&(x55+x56)));

	if (t12 != 627709440U) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x61 = UINT64_MAX;
	volatile uint16_t x63 = UINT16_MAX;
	volatile int16_t x64 = -1803;
	static volatile uint64_t t13 = 487177989980035629LLU;

	t13 = (x61*(x62&(x63+x64)));

	if (t13 != 18446744073709487884LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 32U;
	static volatile uint8_t x67 = UINT8_MAX;
	volatile int64_t t14 = -391698793936384LL;

	t14 = (x65*(x66&(x67+x68)));

	if (t14 != 4064LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = 1572976LL;
	static int8_t x72 = INT8_MAX;
	static int64_t t15 = -152832LL;

	t15 = (x69*(x70&(x71+x72)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x75 = INT32_MIN;
	uint32_t x76 = 523U;
	volatile uint32_t t16 = 29U;

	t16 = (x73*(x74&(x75+x76)));

	if (t16 != 4294967120U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 124U;
	static uint32_t x78 = UINT32_MAX;
	uint8_t x79 = UINT8_MAX;
	static int32_t x80 = INT32_MIN;
	uint32_t t17 = 103164353U;

	t17 = (x77*(x78&(x79+x80)));

	if (t17 != 31620U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = UINT16_MAX;
	static int64_t x86 = 4105624593LL;
	uint32_t x87 = UINT32_MAX;
	uint16_t x88 = 120U;
	int64_t t18 = 231694062235LL;

	t18 = (x85*(x86&(x87+x88)));

	if (t18 != 1114095LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = 8;
	int8_t x94 = 5;
	int8_t x96 = 0;
	volatile int32_t t19 = -26;

	t19 = (x93*(x94&(x95+x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = INT64_MAX;
	uint8_t x100 = 15U;
	volatile int64_t t20 = 138LL;

	t20 = (x97*(x98&(x99+x100)));

	if (t20 != -4653056LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MIN;
	static volatile int8_t x102 = INT8_MIN;
	static int16_t x103 = INT16_MIN;
	int16_t x104 = INT16_MAX;
	int32_t t21 = 2;

	t21 = (x101*(x102&(x103+x104)));

	if (t21 != 4194304) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 12U;
	volatile uint32_t t22 = 8U;

	t22 = (x105*(x106&(x107+x108)));

	if (t22 != 4294966016U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x110 = INT64_MIN;
	static uint64_t x111 = UINT64_MAX;
	uint64_t t23 = 81166519036LLU;

	t23 = (x109*(x110&(x111+x112)));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MAX;
	uint8_t x114 = 3U;
	int32_t x115 = 4161138;
	int16_t x116 = INT16_MIN;
	int32_t t24 = 1;

	t24 = (x113*(x114&(x115+x116)));

	if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = INT8_MAX;
	static int16_t x118 = INT16_MAX;
	static uint64_t x120 = 1034305076156690LLU;

	t25 = (x117*(x118&(x119+x120)));

	if (t25 != 2895727LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	static uint16_t x122 = 5U;
	uint16_t x124 = 25U;
	static int32_t t26 = -347;

	t26 = (x121*(x122&(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = 30469416U;
	uint32_t x126 = 133U;
	uint64_t x127 = 1282419301828LLU;
	uint32_t x128 = UINT32_MAX;
	uint64_t t27 = 68354LLU;

	t27 = (x125*(x126&(x127+x128)));

	if (t27 != 3930554664LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x129 = INT16_MAX;
	static int16_t x130 = INT16_MIN;
	static int8_t x131 = -9;
	uint32_t x132 = 1698659U;
	uint32_t t28 = 138887683U;

	t28 = (x129*(x130&(x131+x132)));

	if (t28 != 3219554304U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = 2;
	int8_t x135 = INT8_MIN;
	int16_t x136 = -83;
	int32_t t29 = -93;

	t29 = (x133*(x134&(x135+x136)));

	if (t29 != 1034) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = -73157688LL;
	volatile uint16_t x138 = UINT16_MAX;
	int16_t x139 = 124;
	int64_t x140 = -1LL;
	int64_t t30 = 196237LL;

	t30 = (x137*(x138&(x139+x140)));

	if (t30 != -8998395624LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x141 = 28;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MIN;
	static int32_t x144 = -4406855;
	int32_t t31 = -118404134;

	t31 = (x141*(x142&(x143+x144)));

	if (t31 != -123397120) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MAX;
	uint8_t x146 = UINT8_MAX;
	static int64_t x148 = 1414094741LL;
	static volatile int64_t t32 = 387494914606LL;

	t32 = (x145*(x146&(x147+x148)));

	if (t32 != 4849516LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x149 = 7910871804586LLU;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MIN;
	volatile uint64_t t33 = 823LLU;

	t33 = (x149*(x150&(x151+x152)));

	if (t33 != 257198264110700032LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x154 = -1;
	uint8_t x155 = 1U;
	int64_t x156 = INT64_MIN;
	static uint64_t t34 = 449092LLU;

	t34 = (x153*(x154&(x155+x156)));

	if (t34 != 9223372036854800509LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 2U;
	volatile int8_t x159 = 41;
	int64_t x160 = -1LL;
	static int64_t t35 = 404438834424762LL;

	t35 = (x157*(x158&(x159+x160)));

	if (t35 != 16LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 1401175647U;
	int8_t x162 = 0;
	int16_t x163 = INT16_MAX;
	int32_t x164 = INT32_MIN;
	uint32_t t36 = 7624U;

	t36 = (x161*(x162&(x163+x164)));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x170 = INT8_MAX;
	uint16_t x171 = 119U;
	uint64_t x172 = 18494759099041LLU;
	volatile uint64_t t37 = 12014LLU;

	t37 = (x169*(x170&(x171+x172)));

	if (t37 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x173 = UINT64_MAX;
	int8_t x174 = -4;
	volatile int32_t x175 = 108;
	uint32_t x176 = 1533U;
	static uint64_t t38 = 17516660700228LLU;

	t38 = (x173*(x174&(x175+x176)));

	if (t38 != 18446744073709549976LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x177 = -1LL;
	int16_t x178 = INT16_MIN;
	uint16_t x180 = 893U;

	t39 = (x177*(x178&(x179+x180)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = UINT64_MAX;
	int32_t x182 = INT32_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	static volatile uint64_t t40 = 6LLU;

	t40 = (x181*(x182&(x183+x184)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x185 = 30567875;
	static int32_t x186 = INT32_MIN;
	static int16_t x187 = INT16_MAX;
	volatile uint64_t t41 = 93345864LLU;

	t41 = (x185*(x186&(x187+x188)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = INT32_MIN;
	static int32_t x198 = 2492;
	volatile uint64_t t42 = 8273371775LLU;

	t42 = (x197*(x198&(x199+x200)));

	if (t42 != 18446743206126157824LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x201 = 33935U;
	volatile int8_t x202 = -1;
	int32_t x203 = -308837;
	int8_t x204 = INT8_MAX;

	t43 = (x201*(x202&(x203+x204)));

	if (t43 != 2408828038U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x205 = UINT64_MAX;
	int32_t x206 = INT32_MIN;
	volatile int16_t x207 = -1367;
	int16_t x208 = 284;

	t44 = (x205*(x206&(x207+x208)));

	if (t44 != 2147483648LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x209 = -1;
	uint8_t x211 = 53U;
	int32_t x212 = 0;
	volatile int32_t t45 = 13281;

	t45 = (x209*(x210&(x211+x212)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = INT64_MAX;
	uint64_t t46 = 752LLU;

	t46 = (x213*(x214&(x215+x216)));

	if (t46 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x223 = INT8_MAX;
	int32_t x224 = INT32_MIN;
	int64_t t47 = -2302757095072060933LL;

	t47 = (x221*(x222&(x223+x224)));

	if (t47 != -109521659571LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x226 = INT8_MIN;
	int32_t x227 = INT32_MIN;
	uint32_t x228 = 1185221408U;

	t48 = (x225*(x226&(x227+x228)));

	if (t48 != 2346743040U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x229 = 6909016365LL;
	uint32_t x230 = 11622047U;
	volatile int16_t x231 = 4;
	volatile int32_t x232 = 6;
	volatile int64_t t49 = -24698150950539664LL;

	t49 = (x229*(x230&(x231+x232)));

	if (t49 != 69090163650LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x233 = 69LLU;
	int32_t x234 = -1;
	static int32_t x235 = -23;
	volatile int32_t x236 = -1;
	volatile uint64_t t50 = 9LLU;

	t50 = (x233*(x234&(x235+x236)));

	if (t50 != 18446744073709549960LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MIN;
	int16_t x239 = INT16_MIN;
	int32_t x240 = -1;
	static volatile int32_t t51 = -169179776;

	t51 = (x237*(x238&(x239+x240)));

	if (t51 != 1077936128) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x242 = INT32_MAX;
	uint8_t x243 = 80U;
	volatile uint16_t x244 = UINT16_MAX;
	int32_t t52 = 9327513;

	t52 = (x241*(x242&(x243+x244)));

	if (t52 != -852995) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x245 = -1;
	int8_t x246 = INT8_MAX;
	int16_t x247 = -11;
	int32_t t53 = 5;

	t53 = (x245*(x246&(x247+x248)));

	if (t53 != -120) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x249 = 6811U;
	volatile int8_t x250 = INT8_MIN;
	int8_t x251 = 39;
	int16_t x252 = -1;
	int32_t t54 = 215350335;

	t54 = (x249*(x250&(x251+x252)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x261 = INT32_MIN;
	int16_t x263 = 1;
	static uint8_t x264 = UINT8_MAX;
	int32_t t55 = 498379;

	t55 = (x261*(x262&(x263+x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = 17U;
	static uint64_t x266 = UINT64_MAX;
	static volatile int32_t x267 = INT32_MAX;
	static int8_t x268 = 0;
	uint64_t t56 = 83445096623LLU;

	t56 = (x265*(x266&(x267+x268)));

	if (t56 != 36507221999LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x269 = 549U;
	int32_t x271 = INT32_MIN;
	int64_t x272 = INT64_MAX;
	volatile int64_t t57 = 463056771823716431LL;

	t57 = (x269*(x270&(x271+x272)));

	if (t57 != 1178968522203LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x273 = 15;
	volatile int16_t x274 = INT16_MIN;
	int64_t x275 = 506735LL;
	int16_t x276 = INT16_MAX;

	t58 = (x273*(x274&(x275+x276)));

	if (t58 != 7864320LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x278 = INT32_MIN;
	uint64_t x279 = 45330LLU;
	static uint32_t x280 = 30618994U;
	volatile uint64_t t59 = 31018LLU;

	t59 = (x277*(x278&(x279+x280)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = INT32_MIN;
	int16_t x283 = INT16_MIN;
	static uint64_t x284 = UINT64_MAX;
	volatile uint64_t t60 = 5996895496887LLU;

	t60 = (x281*(x282&(x283+x284)));

	if (t60 != 70370891661312LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x289 = 4956479084416489743LLU;
	int8_t x290 = INT8_MIN;
	int16_t x291 = 9;

	t61 = (x289*(x290&(x291+x292)));

	if (t61 != 11172628050591347584LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	uint8_t x295 = UINT8_MAX;
	int8_t x296 = INT8_MIN;
	volatile int32_t t62 = 9301;

	t62 = (x293*(x294&(x295+x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x297 = UINT64_MAX;
	uint8_t x298 = 1U;

	t63 = (x297*(x298&(x299+x300)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x301 = -1;
	uint16_t x304 = 6U;
	static int64_t t64 = 382855LL;

	t64 = (x301*(x302&(x303+x304)));

	if (t64 != -6LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x305 = UINT64_MAX;
	int8_t x306 = 11;
	static volatile uint64_t t65 = 1253157737799729667LLU;

	t65 = (x305*(x306&(x307+x308)));

	if (t65 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x309 = -11;
	static uint64_t t66 = 10508754553972LLU;

	t66 = (x309*(x310&(x311+x312)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = 249U;
	static volatile int8_t x314 = -10;
	int8_t x315 = -61;
	int32_t x316 = -1;
	int32_t t67 = 6668417;

	t67 = (x313*(x314&(x315+x316)));

	if (t67 != -15438) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x322 = -1;
	uint8_t x324 = UINT8_MAX;
	uint64_t t68 = 503940584427074215LLU;

	t68 = (x321*(x322&(x323+x324)));

	if (t68 != 32258LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x326 = 934751607;
	uint16_t x327 = 22U;
	volatile int64_t x328 = INT64_MIN;
	int64_t t69 = 24855588LL;

	t69 = (x325*(x326&(x327+x328)));

	if (t69 != 1034LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x329 = UINT64_MAX;
	static uint32_t x330 = UINT32_MAX;
	volatile int8_t x331 = 11;
	volatile int8_t x332 = -1;
	volatile uint64_t t70 = 0LLU;

	t70 = (x329*(x330&(x331+x332)));

	if (t70 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = -1LL;
	static volatile int64_t x334 = INT64_MIN;
	uint64_t x336 = UINT64_MAX;
	uint64_t t71 = 636LLU;

	t71 = (x333*(x334&(x335+x336)));

	if (t71 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x338 = INT32_MAX;
	volatile int64_t x340 = 9LL;

	t72 = (x337*(x338&(x339+x340)));

	if (t72 != 450964686690LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x341 = -5;
	uint16_t x343 = 0U;
	int8_t x344 = INT8_MAX;
	static int32_t t73 = -1;

	t73 = (x341*(x342&(x343+x344)));

	if (t73 != -240) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x349 = -492505702205355LL;
	int8_t x350 = -2;
	uint8_t x351 = 11U;
	uint16_t x352 = 0U;
	int64_t t74 = 85593278308691LL;

	t74 = (x349*(x350&(x351+x352)));

	if (t74 != -4925057022053550LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = INT32_MIN;
	volatile int64_t x354 = -1LL;
	static int64_t x355 = -1LL;
	static volatile int64_t t75 = 79LL;

	t75 = (x353*(x354&(x355+x356)));

	if (t75 != 59191091789824LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x358 = -1;
	int32_t x360 = -1;
	int32_t t76 = 458138040;

	t76 = (x357*(x358&(x359+x360)));

	if (t76 != -16128) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x361 = INT32_MIN;
	uint64_t x362 = 5628771671400305LLU;
	static volatile uint8_t x363 = 38U;
	uint32_t x364 = 674U;
	volatile uint64_t t77 = 357LLU;

	t77 = (x361*(x362&(x363+x364)));

	if (t77 != 18446742836758970368LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x370 = 31016U;
	volatile int32_t x372 = 1733;

	t78 = (x369*(x370&(x371+x372)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x373 = INT16_MAX;
	uint8_t x375 = UINT8_MAX;
	uint32_t x376 = 9326362U;
	uint32_t t79 = 53841U;

	t79 = (x373*(x374&(x375+x376)));

	if (t79 != 125464575U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x378 = INT16_MAX;
	int64_t x379 = -1LL;
	uint16_t x380 = 4U;
	volatile uint64_t t80 = 94536LLU;

	t80 = (x377*(x378&(x379+x380)));

	if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x381 = -3;
	volatile int8_t x384 = INT8_MAX;
	volatile int32_t t81 = 299109055;

	t81 = (x381*(x382&(x383+x384)));

	if (t81 != -498) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x386 = -30457378241LL;
	int16_t x388 = INT16_MIN;

	t82 = (x385*(x386&(x387+x388)));

	if (t82 != 3898546847744LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x389 = UINT32_MAX;
	uint8_t x390 = UINT8_MAX;
	int32_t x391 = INT32_MIN;
	volatile uint8_t x392 = UINT8_MAX;
	uint32_t t83 = 26625U;

	t83 = (x389*(x390&(x391+x392)));

	if (t83 != 4294967041U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = -1;
	static int64_t x394 = INT64_MAX;
	volatile uint8_t x395 = UINT8_MAX;
	int8_t x396 = -1;
	static volatile int64_t t84 = -2832680565145LL;

	t84 = (x393*(x394&(x395+x396)));

	if (t84 != -254LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x405 = UINT8_MAX;
	uint8_t x406 = UINT8_MAX;
	static volatile int16_t x407 = INT16_MIN;
	int64_t x408 = INT64_MAX;
	static volatile int64_t t85 = -88877104661751LL;

	t85 = (x405*(x406&(x407+x408)));

	if (t85 != 65025LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x409 = 1116380806980441LLU;
	int16_t x410 = -1;
	int16_t x411 = INT16_MIN;
	volatile int8_t x412 = INT8_MIN;
	static volatile uint64_t t86 = 281116188892874690LLU;

	t86 = (x409*(x410&(x411+x412)));

	if (t86 != 169025120990516096LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 119U;
	static int8_t x414 = INT8_MIN;
	static volatile uint32_t x415 = 88U;
	static uint8_t x416 = 1U;
	volatile uint32_t t87 = 1901U;

	t87 = (x413*(x414&(x415+x416)));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x417 = 54;
	uint32_t x418 = UINT32_MAX;
	int64_t x420 = 13431082603LL;
	uint64_t t88 = 2771068LLU;

	t88 = (x417*(x418&(x419+x420)));

	if (t88 != 45770149224LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x423 = 13U;
	int64_t x424 = -2490913055444506541LL;
	int64_t t89 = -215381006655055337LL;

	t89 = (x421*(x422&(x423+x424)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x425 = INT16_MAX;
	volatile uint32_t x426 = 0U;
	int16_t x427 = -1;
	static int64_t t90 = 4590578297246LL;

	t90 = (x425*(x426&(x427+x428)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = INT16_MIN;
	int32_t x430 = INT32_MIN;
	int16_t x431 = INT16_MIN;
	volatile uint32_t x432 = 74U;

	t91 = (x429*(x430&(x431+x432)));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x441 = INT32_MIN;
	static uint32_t x442 = 5U;
	uint16_t x443 = UINT16_MAX;
	volatile int8_t x444 = INT8_MIN;
	volatile uint32_t t92 = 5438075U;

	t92 = (x441*(x442&(x443+x444)));

	if (t92 != 2147483648U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x445 = -2820;
	int16_t x446 = -164;
	volatile int16_t x447 = INT16_MIN;
	uint64_t x448 = 529517138274044LLU;

	t93 = (x445*(x446&(x447+x448)));

	if (t93 != 16953505743869604496LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x449 = -1;
	volatile int8_t x450 = -1;
	static uint8_t x451 = 123U;
	int16_t x452 = -1;
	volatile int32_t t94 = 78428362;

	t94 = (x449*(x450&(x451+x452)));

	if (t94 != -122) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x453 = INT16_MIN;
	static uint16_t x455 = UINT16_MAX;
	int64_t x456 = -340690563162822LL;
	int64_t t95 = 313980032500054LL;

	t95 = (x453*(x454&(x455+x456)));

	if (t95 != -245137408LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x461 = 977U;
	volatile uint32_t t96 = 15U;

	t96 = (x461*(x462&(x463+x464)));

	if (t96 != 4290227869U) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x466 = UINT64_MAX;
	int8_t x468 = 7;

	t97 = (x465*(x466&(x467+x468)));

	if (t97 != 18446673719997792249LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x469 = 7U;
	static int8_t x470 = INT8_MIN;
	uint16_t x471 = 1U;
	uint32_t x472 = 598127085U;
	static volatile uint32_t t98 = 112U;

	t98 = (x469*(x470&(x471+x472)));

	if (t98 != 4186888832U) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x473 = 528U;
	int32_t x474 = INT32_MAX;
	uint16_t x476 = UINT16_MAX;
	static uint64_t t99 = 256LLU;

	t99 = (x473*(x474&(x475+x476)));

	if (t99 != 34601952LLU) { NG(); } else { ; }
	
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

