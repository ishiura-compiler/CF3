#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 3;
static int64_t t1 = -756330321LL;
uint64_t x15 = 5553830960498LLU;
uint32_t x16 = 37200U;
static int64_t x20 = -1LL;
static volatile int32_t t4 = 845;
static int64_t x24 = INT64_MIN;
int64_t x44 = INT64_MAX;
uint8_t x52 = UINT8_MAX;
static volatile int64_t t12 = -209314314LL;
uint32_t x55 = UINT32_MAX;
int8_t x62 = INT8_MIN;
int16_t x64 = INT16_MIN;
volatile uint32_t x72 = 10U;
int32_t t18 = 10465;
static int64_t x81 = INT64_MAX;
int16_t x84 = -1;
int64_t x91 = -2916108LL;
int32_t x92 = INT32_MIN;
int8_t x93 = INT8_MIN;
uint32_t x94 = UINT32_MAX;
uint16_t x97 = 14911U;
uint16_t x103 = 27281U;
static volatile int16_t x104 = INT16_MAX;
volatile int32_t t25 = 12;
volatile int16_t x107 = 1780;
int16_t x110 = 2;
static volatile int32_t t28 = -8;
uint8_t x122 = UINT8_MAX;
uint32_t t31 = 849U;
int64_t x130 = INT64_MIN;
static uint64_t x138 = 18200103501LLU;
volatile int32_t x139 = -1;
volatile int32_t t35 = 4;
uint64_t x145 = 1418662788162283311LLU;
static uint8_t x146 = UINT8_MAX;
int64_t x147 = INT64_MAX;
volatile uint64_t t36 = 107502169516LLU;
int32_t x152 = INT32_MIN;
static int8_t x157 = INT8_MIN;
static int32_t x159 = -1;
volatile int8_t x160 = INT8_MIN;
volatile int64_t x163 = INT64_MIN;
volatile uint16_t x169 = 23392U;
static int16_t x183 = -60;
int16_t x184 = -26;
int16_t x188 = -27;
int64_t x189 = INT64_MIN;
int16_t x192 = INT16_MIN;
volatile int64_t x199 = INT64_MIN;
int32_t x205 = INT32_MAX;
uint32_t x212 = 0U;
int64_t x215 = INT64_MAX;
int8_t x219 = INT8_MIN;
volatile uint64_t t55 = 20356675178LLU;
static int64_t x228 = INT64_MIN;
volatile int32_t t57 = 1923;
volatile int32_t t58 = 230989;
volatile int64_t x239 = INT64_MIN;
uint8_t x248 = UINT8_MAX;
int16_t x249 = -194;
int8_t x252 = INT8_MIN;
uint32_t x253 = 6U;
int64_t x259 = -270251210869193LL;
uint8_t x263 = 69U;
int16_t x270 = -1;
static int8_t x274 = 0;
int16_t x277 = INT16_MIN;
int16_t x299 = INT16_MIN;
int16_t x304 = 599;
int64_t x306 = INT64_MIN;
volatile int32_t x307 = INT32_MIN;
int32_t x312 = -59438420;
int16_t x316 = 15;
int64_t t80 = -34908084822681LL;
uint64_t x327 = 1665577351530LLU;
uint8_t x338 = 0U;
uint16_t x340 = UINT16_MAX;
int32_t x348 = INT32_MIN;
volatile uint8_t x349 = UINT8_MAX;
int16_t x351 = -1484;
uint64_t x352 = UINT64_MAX;
volatile int32_t t87 = 621;
volatile uint32_t x353 = 3355U;
static uint8_t x358 = 21U;
int32_t x363 = 37626291;
volatile uint64_t x368 = UINT64_MAX;
int16_t x372 = INT16_MAX;
uint16_t x375 = UINT16_MAX;
int64_t x377 = 1341573117987994738LL;
uint64_t x378 = 3607414112488086LLU;
int8_t x381 = -1;
static uint64_t x383 = 284454LLU;
volatile int64_t x385 = INT64_MIN;
static int64_t t96 = 62LL;


void f0(void) {
	int8_t x1 = 4;
	volatile uint8_t x2 = 19U;
	int16_t x3 = 4335;
	int32_t x4 = INT32_MIN;

	t0 = (x1&((x2==x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	int64_t x6 = INT64_MIN;
	int32_t x7 = -21234;
	static volatile int64_t x8 = INT64_MAX;

	t1 = (x5&((x6==x7)==x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x9 = 691896U;
	int16_t x10 = -26;
	static int32_t x11 = -3;
	uint32_t x12 = 94253U;
	volatile uint32_t t2 = 397539121U;

	t2 = (x9&((x10==x11)==x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 536U;
	static int16_t x14 = INT16_MIN;
	volatile int32_t t3 = 8916107;

	t3 = (x13&((x14==x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 31621U;
	int32_t x18 = -1;
	static uint32_t x19 = UINT32_MAX;

	t4 = (x17&((x18==x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 5836;
	int64_t x22 = -1LL;
	uint8_t x23 = UINT8_MAX;
	int32_t t5 = 30291;

	t5 = (x21&((x22==x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x25 = UINT32_MAX;
	int32_t x26 = INT32_MIN;
	int64_t x27 = INT64_MIN;
	static uint8_t x28 = UINT8_MAX;
	volatile uint32_t t6 = 92904U;

	t6 = (x25&((x26==x27)==x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 3579476;
	volatile uint8_t x30 = UINT8_MAX;
	int64_t x31 = INT64_MAX;
	int64_t x32 = -8263016LL;
	static int32_t t7 = 6051381;

	t7 = (x29&((x30==x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -2166LL;
	static uint8_t x34 = UINT8_MAX;
	uint16_t x35 = UINT16_MAX;
	uint32_t x36 = 7432U;
	int64_t t8 = 352227328LL;

	t8 = (x33&((x34==x35)==x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -198302554263279603LL;
	static uint64_t x38 = 4076LLU;
	uint8_t x39 = 0U;
	int32_t x40 = INT32_MAX;
	int64_t t9 = -930376194893LL;

	t9 = (x37&((x38==x39)==x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -250;
	int64_t x42 = -1672723951931584253LL;
	int32_t x43 = -54166704;
	volatile int32_t t10 = -1568;

	t10 = (x41&((x42==x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 209U;
	int64_t x46 = -87040572LL;
	volatile int8_t x47 = 48;
	int32_t x48 = 92527736;
	int32_t t11 = 34584354;

	t11 = (x45&((x46==x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	int64_t x50 = -1LL;
	uint32_t x51 = 10777541U;

	t12 = (x49&((x50==x51)==x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x53 = -3975363958LL;
	int16_t x54 = INT16_MIN;
	static int32_t x56 = INT32_MIN;
	volatile int64_t t13 = -58104604633LL;

	t13 = (x53&((x54==x55)==x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = 41383881834LL;
	int8_t x59 = INT8_MAX;
	volatile uint8_t x60 = 26U;
	static volatile int64_t t14 = 4047360341812LL;

	t14 = (x57&((x58==x59)==x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x63 = -170816617280322072LL;
	static int32_t t15 = -5370282;

	t15 = (x61&((x62==x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 413387U;
	static int32_t x66 = INT32_MIN;
	int64_t x67 = 179LL;
	int32_t x68 = INT32_MIN;
	volatile uint32_t t16 = 1439U;

	t16 = (x65&((x66==x67)==x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x69 = INT8_MAX;
	volatile int16_t x70 = -1;
	volatile int8_t x71 = INT8_MIN;
	static int32_t t17 = 218323;

	t17 = (x69&((x70==x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1508;
	int16_t x74 = 23;
	int32_t x75 = 28832;
	static int64_t x76 = -14144LL;

	t18 = (x73&((x74==x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 5363085U;
	int32_t x78 = -1;
	static int64_t x79 = INT64_MAX;
	int64_t x80 = -44975909669178171LL;
	uint32_t t19 = 385262U;

	t19 = (x77&((x78==x79)==x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	int32_t x83 = INT32_MIN;
	volatile int64_t t20 = -77017837848464979LL;

	t20 = (x81&((x82==x83)==x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = 32032LL;
	volatile int32_t x86 = -1;
	int8_t x87 = INT8_MIN;
	int16_t x88 = 699;
	volatile int64_t t21 = 311808LL;

	t21 = (x85&((x86==x87)==x88));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	static int8_t x90 = INT8_MIN;
	int32_t t22 = 0;

	t22 = (x89&((x90==x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x95 = 5399736804LLU;
	int64_t x96 = -1LL;
	volatile int32_t t23 = 59281536;

	t23 = (x93&((x94==x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	uint32_t x99 = UINT32_MAX;
	uint64_t x100 = 6430079LLU;
	volatile int32_t t24 = -57461;

	t24 = (x97&((x98==x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	volatile int16_t x102 = 298;

	t25 = (x101&((x102==x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -3649856968019650LL;
	uint32_t x106 = 15623U;
	static volatile uint16_t x108 = UINT16_MAX;
	volatile int64_t t26 = -22174084561230LL;

	t26 = (x105&((x106==x107)==x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = INT8_MAX;
	int16_t x111 = INT16_MAX;
	volatile uint16_t x112 = 23U;
	static int32_t t27 = 12158633;

	t27 = (x109&((x110==x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MAX;

	t28 = (x113&((x114==x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	static int16_t x118 = 1;
	static int64_t x119 = INT64_MAX;
	int8_t x120 = -3;
	volatile int32_t t29 = 226163;

	t29 = (x117&((x118==x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 1U;
	int64_t x123 = INT64_MIN;
	int64_t x124 = -1LL;
	int32_t t30 = 546169708;

	t30 = (x121&((x122==x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 673448911U;
	uint8_t x126 = 0U;
	int8_t x127 = INT8_MIN;
	int8_t x128 = INT8_MIN;

	t31 = (x125&((x126==x127)==x128));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 867U;
	int64_t x131 = 60375781853132786LL;
	volatile int16_t x132 = INT16_MIN;
	static int32_t t32 = 3060096;

	t32 = (x129&((x130==x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x133 = 12650167LLU;
	uint64_t x134 = 135911LLU;
	static int16_t x135 = INT16_MAX;
	volatile int16_t x136 = INT16_MIN;
	volatile uint64_t t33 = 472402749357117428LLU;

	t33 = (x133&((x134==x135)==x136));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MIN;
	static int8_t x140 = INT8_MAX;
	int32_t t34 = -105337;

	t34 = (x137&((x138==x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = INT32_MIN;
	uint8_t x142 = 1U;
	int64_t x143 = 315874110395916911LL;
	int16_t x144 = -1;

	t35 = (x141&((x142==x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x148 = 32938977420658525LLU;

	t36 = (x145&((x146==x147)==x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	int16_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	volatile uint32_t t37 = 7746767U;

	t37 = (x149&((x150==x151)==x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -1;
	static int64_t x154 = INT64_MIN;
	int32_t x155 = INT32_MIN;
	int16_t x156 = 930;
	int32_t t38 = -9871;

	t38 = (x153&((x154==x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = INT32_MIN;
	static int32_t t39 = 368504;

	t39 = (x157&((x158==x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	int16_t x164 = -1;
	volatile int64_t t40 = -30266LL;

	t40 = (x161&((x162==x163)==x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 146U;
	int32_t x166 = -4850644;
	volatile int64_t x167 = -4607LL;
	int16_t x168 = INT16_MIN;
	uint32_t t41 = 11860647U;

	t41 = (x165&((x166==x167)==x168));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = UINT8_MAX;
	static int16_t x171 = -1;
	int64_t x172 = 12017776832207920LL;
	int32_t t42 = -2678772;

	t42 = (x169&((x170==x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -14375805;
	int8_t x174 = INT8_MIN;
	int32_t x175 = INT32_MIN;
	int32_t x176 = INT32_MIN;
	int32_t t43 = 96;

	t43 = (x173&((x174==x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int64_t x178 = -464820515LL;
	int32_t x179 = INT32_MIN;
	static uint8_t x180 = 50U;
	static int32_t t44 = -27;

	t44 = (x177&((x178==x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -25;
	int16_t x182 = INT16_MIN;
	int32_t t45 = 80623791;

	t45 = (x181&((x182==x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x185 = -11420403595137707LL;
	uint16_t x186 = 7U;
	int32_t x187 = -2;
	int64_t t46 = 75950LL;

	t46 = (x185&((x186==x187)==x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x190 = INT64_MIN;
	int64_t x191 = INT64_MAX;
	volatile int64_t t47 = -918156842347368LL;

	t47 = (x189&((x190==x191)==x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	volatile uint32_t x195 = UINT32_MAX;
	static volatile int16_t x196 = 376;
	volatile int64_t t48 = 508224740LL;

	t48 = (x193&((x194==x195)==x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = UINT64_MAX;
	static volatile int16_t x198 = -1;
	int64_t x200 = -9756084559LL;
	static uint64_t t49 = 126633026853697410LLU;

	t49 = (x197&((x198==x199)==x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	int64_t x203 = INT64_MAX;
	uint8_t x204 = 7U;
	int32_t t50 = 7;

	t50 = (x201&((x202==x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 3U;
	volatile int8_t x207 = INT8_MIN;
	static int64_t x208 = -4051943851838630661LL;
	static volatile int32_t t51 = 1;

	t51 = (x205&((x206==x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = 1923LL;
	int8_t x210 = -6;
	int32_t x211 = INT32_MAX;
	volatile int64_t t52 = 573805866701LL;

	t52 = (x209&((x210==x211)==x212));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	uint8_t x214 = UINT8_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t53 = -6011;

	t53 = (x213&((x214==x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1087716LL;
	static uint64_t x218 = 41500794877062843LLU;
	volatile uint8_t x220 = 0U;
	static volatile int64_t t54 = -132928767499107LL;

	t54 = (x217&((x218==x219)==x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 96126LLU;
	int32_t x222 = INT32_MIN;
	volatile int32_t x223 = INT32_MIN;
	volatile int64_t x224 = INT64_MIN;

	t55 = (x221&((x222==x223)==x224));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = 3;
	static int16_t x226 = INT16_MAX;
	volatile uint64_t x227 = 5115330162LLU;
	int32_t t56 = 2;

	t56 = (x225&((x226==x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MAX;
	uint16_t x230 = 1U;
	int16_t x231 = -2301;
	int8_t x232 = -3;

	t57 = (x229&((x230==x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	uint32_t x235 = 1846747U;
	static int16_t x236 = INT16_MAX;

	t58 = (x233&((x234==x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = -206299LL;
	int32_t x240 = INT32_MAX;
	int32_t t59 = 29;

	t59 = (x237&((x238==x239)==x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 14U;
	int8_t x243 = INT8_MIN;
	static int16_t x244 = -1;
	static int32_t t60 = 8588072;

	t60 = (x241&((x242==x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 1;
	volatile int8_t x246 = 2;
	static int16_t x247 = -1;
	static int32_t t61 = 271;

	t61 = (x245&((x246==x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -1;
	uint64_t x251 = UINT64_MAX;
	volatile int32_t t62 = 285;

	t62 = (x249&((x250==x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = INT64_MIN;
	int8_t x255 = -50;
	volatile int32_t x256 = INT32_MIN;
	static uint32_t t63 = 169280U;

	t63 = (x253&((x254==x255)==x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = 2001155474LL;
	static uint16_t x258 = 4898U;
	int8_t x260 = -1;
	volatile int64_t t64 = 3LL;

	t64 = (x257&((x258==x259)==x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = INT8_MIN;
	static volatile int32_t x262 = -46095898;
	int8_t x264 = INT8_MAX;
	int32_t t65 = -2583184;

	t65 = (x261&((x262==x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int16_t x266 = INT16_MIN;
	int64_t x267 = INT64_MAX;
	static uint32_t x268 = UINT32_MAX;
	static int32_t t66 = 4997;

	t66 = (x265&((x266==x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int8_t x271 = -1;
	int32_t x272 = -1;
	int64_t t67 = -734561143071117085LL;

	t67 = (x269&((x270==x271)==x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int32_t x275 = -402126361;
	static volatile int16_t x276 = 335;
	volatile int32_t t68 = -20;

	t68 = (x273&((x274==x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x278 = -249;
	static volatile uint64_t x279 = UINT64_MAX;
	static int16_t x280 = -3081;
	volatile int32_t t69 = 9075502;

	t69 = (x277&((x278==x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = 5516107250047367350LLU;
	volatile int16_t x282 = INT16_MAX;
	int8_t x283 = 47;
	int64_t x284 = 43LL;
	uint64_t t70 = 3466970957234327922LLU;

	t70 = (x281&((x282==x283)==x284));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = INT8_MIN;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = 367176848LL;
	volatile int32_t t71 = 237;

	t71 = (x285&((x286==x287)==x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = -1;
	volatile int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -7970194;

	t72 = (x289&((x290==x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = 11;
	uint16_t x294 = 2U;
	uint64_t x295 = 917509389306371LLU;
	int16_t x296 = 3;
	int32_t t73 = 0;

	t73 = (x293&((x294==x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = INT32_MIN;
	uint8_t x298 = UINT8_MAX;
	uint64_t x300 = 30966998217692475LLU;
	volatile int32_t t74 = -54;

	t74 = (x297&((x298==x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MAX;
	volatile uint64_t t75 = 737289704046LLU;

	t75 = (x301&((x302==x303)==x304));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x305 = 5648707414173LL;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t76 = -281211LL;

	t76 = (x305&((x306==x307)==x308));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 97U;
	static uint8_t x310 = 5U;
	uint8_t x311 = 36U;
	static int32_t t77 = -629;

	t77 = (x309&((x310==x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MAX;
	int64_t x314 = INT64_MAX;
	uint64_t x315 = 948LLU;
	volatile int64_t t78 = -16LL;

	t78 = (x313&((x314==x315)==x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint64_t x317 = UINT64_MAX;
	uint16_t x318 = UINT16_MAX;
	int8_t x319 = 52;
	static uint16_t x320 = UINT16_MAX;
	volatile uint64_t t79 = 45931228LLU;

	t79 = (x317&((x318==x319)==x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = INT64_MIN;
	static int8_t x322 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;
	static int8_t x324 = -3;

	t80 = (x321&((x322==x323)==x324));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = INT64_MIN;
	int8_t x326 = 2;
	uint64_t x328 = 21139937062879LLU;
	int64_t t81 = 177803671LL;

	t81 = (x325&((x326==x327)==x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	int32_t x330 = INT32_MIN;
	int32_t x331 = 51918302;
	static int64_t x332 = INT64_MIN;
	volatile int32_t t82 = -4576;

	t82 = (x329&((x330==x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	int16_t x334 = INT16_MIN;
	int32_t x335 = INT32_MIN;
	int64_t x336 = INT64_MIN;
	volatile int32_t t83 = -8029181;

	t83 = (x333&((x334==x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int16_t x339 = INT16_MIN;
	volatile int32_t t84 = 0;

	t84 = (x337&((x338==x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 1U;
	int64_t x342 = INT64_MIN;
	volatile int64_t x343 = -1LL;
	uint64_t x344 = UINT64_MAX;
	volatile int32_t t85 = -132577403;

	t85 = (x341&((x342==x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 6U;
	volatile int32_t t86 = 1;

	t86 = (x345&((x346==x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x350 = INT64_MIN;

	t87 = (x349&((x350==x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x354 = UINT32_MAX;
	volatile int64_t x355 = 119LL;
	static uint64_t x356 = UINT64_MAX;
	volatile uint32_t t88 = 2350U;

	t88 = (x353&((x354==x355)==x356));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x357 = UINT16_MAX;
	volatile uint8_t x359 = 9U;
	volatile int32_t x360 = -7385413;
	volatile int32_t t89 = 5866;

	t89 = (x357&((x358==x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -843;
	uint64_t x362 = 1281479LLU;
	int16_t x364 = INT16_MIN;
	static int32_t t90 = -3622102;

	t90 = (x361&((x362==x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 10U;
	static int32_t x366 = INT32_MIN;
	int16_t x367 = 0;
	int32_t t91 = -248214;

	t91 = (x365&((x366==x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 529289146711401516LLU;
	int64_t x370 = INT64_MIN;
	volatile int32_t x371 = -1;
	volatile uint64_t t92 = 29849581445727LLU;

	t92 = (x369&((x370==x371)==x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int32_t x374 = INT32_MAX;
	static int32_t x376 = INT32_MIN;
	static int32_t t93 = -1;

	t93 = (x373&((x374==x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x379 = INT16_MAX;
	static int8_t x380 = -7;
	volatile int64_t t94 = 1548LL;

	t94 = (x377&((x378==x379)==x380));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x382 = 31LLU;
	volatile uint16_t x384 = 3U;
	int32_t t95 = 581048;

	t95 = (x381&((x382==x383)==x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x386 = INT8_MAX;
	static int32_t x387 = 0;
	int64_t x388 = INT64_MAX;

	t96 = (x385&((x386==x387)==x388));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int8_t x390 = INT8_MIN;
	volatile uint32_t x391 = 463U;
	static int8_t x392 = INT8_MIN;
	int32_t t97 = 4769898;

	t97 = (x389&((x390==x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x393 = 260U;
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = 0;
	static int32_t x396 = INT32_MIN;
	int32_t t98 = 1;

	t98 = (x393&((x394==x395)==x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x397 = UINT8_MAX;
	static int64_t x398 = INT64_MIN;
	int16_t x399 = -1;
	int16_t x400 = INT16_MIN;
	volatile int32_t t99 = 198242669;

	t99 = (x397&((x398==x399)==x400));

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

