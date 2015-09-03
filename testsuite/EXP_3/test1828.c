#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x5 = INT8_MIN;
int8_t x6 = INT8_MAX;
int32_t x7 = INT32_MIN;
int8_t x13 = 0;
int64_t x18 = INT64_MAX;
static uint8_t x20 = 3U;
static uint16_t x24 = 5108U;
int32_t t5 = 5205;
int64_t x25 = INT64_MIN;
static volatile int32_t t6 = -39;
static volatile int32_t t7 = 0;
volatile uint16_t x33 = 194U;
int16_t x40 = -1;
static uint16_t x49 = 17683U;
int8_t x51 = INT8_MIN;
static uint16_t x55 = 1446U;
volatile uint32_t x59 = 5285U;
static volatile uint16_t x61 = 12U;
int32_t t15 = -29609046;
int64_t x65 = -1LL;
static uint64_t x66 = UINT64_MAX;
uint32_t x82 = 177U;
volatile int16_t x87 = INT16_MIN;
uint32_t x93 = 456113844U;
static uint32_t x99 = 29126U;
uint16_t x100 = UINT16_MAX;
static int8_t x103 = INT8_MAX;
static int16_t x104 = -177;
int16_t x106 = INT16_MAX;
uint32_t x109 = 41289337U;
int32_t x135 = INT32_MIN;
int64_t x136 = 9344257LL;
uint16_t x137 = UINT16_MAX;
uint64_t x139 = 255LLU;
int32_t t36 = 233558758;
static int64_t x151 = INT64_MAX;
int64_t x155 = INT64_MAX;
uint32_t x156 = 361573339U;
uint64_t x161 = UINT64_MAX;
int16_t x163 = INT16_MAX;
int32_t t42 = 4009;
int8_t x183 = -1;
static volatile int32_t t45 = 133124077;
int64_t x185 = INT64_MIN;
volatile int32_t x190 = -1;
volatile int32_t x191 = -54322633;
int32_t x200 = INT32_MIN;
static int32_t x205 = INT32_MIN;
int8_t x209 = -2;
volatile int32_t x210 = INT32_MIN;
volatile int32_t t52 = 30360;
static uint32_t x214 = 1620607751U;
int8_t x220 = 7;
int16_t x224 = INT16_MIN;
volatile int32_t t55 = -31678306;
int32_t x229 = -741593;
uint16_t x230 = 1707U;
uint16_t x233 = 1417U;
static volatile uint16_t x247 = 22U;
uint32_t x253 = UINT32_MAX;
int32_t t63 = -1;
uint8_t x267 = 52U;
int16_t x268 = 4100;
static volatile int32_t t67 = 107;
uint64_t x279 = UINT64_MAX;
volatile int16_t x284 = INT16_MAX;
static int32_t t70 = -1;
int64_t x293 = -1LL;
int32_t x296 = 860795505;
static int8_t x299 = INT8_MAX;
static uint64_t x300 = 471710775LLU;
int8_t x301 = -1;
uint32_t x303 = 97002U;
volatile int8_t x304 = -45;
static uint32_t x308 = 1U;
static int32_t t76 = -374669468;
int32_t x312 = -409696573;
int32_t t78 = 0;
volatile int32_t x318 = -1;
volatile uint32_t x319 = 13905U;
volatile int32_t t81 = -56257468;
uint8_t x331 = 7U;
static volatile int32_t t83 = 23514;
int32_t x342 = INT32_MIN;
volatile int8_t x346 = INT8_MIN;
int32_t t86 = 7;
volatile int8_t x350 = INT8_MIN;
uint64_t x351 = UINT64_MAX;
int16_t x356 = -1;
uint16_t x359 = 368U;
int32_t t90 = -194;
volatile uint64_t x366 = 32884023166635819LLU;
static int16_t x369 = 11162;
uint64_t x374 = UINT64_MAX;
static uint64_t x376 = 3479668178660173LLU;
int32_t x379 = -3413972;
int64_t x386 = INT64_MIN;
int8_t x387 = -1;
uint32_t x391 = 3U;
static volatile uint64_t x397 = 4586910868583LLU;
int16_t x398 = INT16_MIN;


void f0(void) {
	volatile uint32_t x1 = 6U;
	int32_t x2 = 7;
	int32_t x3 = -8;
	int64_t x4 = INT64_MIN;
	volatile int32_t t0 = 1;

	t0 = ((x1&x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x8 = 11;
	volatile int32_t t1 = 15811889;

	t1 = ((x5&x6)==(x7&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	volatile int16_t x10 = 81;
	static int8_t x11 = INT8_MIN;
	int32_t x12 = -3105661;
	int32_t t2 = 5884200;

	t2 = ((x9&x10)==(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = 0;
	static volatile int8_t x15 = -1;
	uint32_t x16 = 154U;
	int32_t t3 = 14102;

	t3 = ((x13&x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	static volatile int64_t x19 = -1LL;
	volatile int32_t t4 = -46;

	t4 = ((x17&x18)==(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = 1;
	uint64_t x23 = 11LLU;

	t5 = ((x21&x22)==(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 0U;
	static int32_t x27 = -1;
	int16_t x28 = -1;

	t6 = ((x25&x26)==(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 6U;
	int8_t x30 = -1;
	uint16_t x31 = 58U;
	int64_t x32 = 11551164288755410LL;

	t7 = ((x29&x30)==(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -1;
	uint64_t x35 = 1033LLU;
	int8_t x36 = -28;
	volatile int32_t t8 = -205465917;

	t8 = ((x33&x34)==(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -239;
	int16_t x38 = 512;
	volatile uint64_t x39 = 866360320436LLU;
	static int32_t t9 = -1484;

	t9 = ((x37&x38)==(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 24U;
	int64_t x42 = 602260884LL;
	volatile int64_t x43 = 570971535289543231LL;
	static volatile uint8_t x44 = 20U;
	int32_t t10 = -1939;

	t10 = ((x41&x42)==(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	int8_t x46 = -1;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	int32_t t11 = 26;

	t11 = ((x45&x46)==(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = -1;
	volatile int16_t x52 = INT16_MIN;
	static volatile int32_t t12 = -970926423;

	t12 = ((x49&x50)==(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int32_t x54 = -934308;
	uint8_t x56 = 1U;
	int32_t t13 = -87915;

	t13 = ((x53&x54)==(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = 4;
	uint8_t x58 = 11U;
	int32_t x60 = -10938246;
	volatile int32_t t14 = -447119;

	t14 = ((x57&x58)==(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = 1751653264509330LL;
	volatile int64_t x63 = 6624742LL;
	uint32_t x64 = 196106U;

	t15 = ((x61&x62)==(x63&x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x67 = INT64_MIN;
	int32_t x68 = -11813;
	volatile int32_t t16 = 7413;

	t16 = ((x65&x66)==(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint32_t x70 = 69373U;
	int64_t x71 = -8LL;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t17 = 29731302;

	t17 = ((x69&x70)==(x71&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	int16_t x74 = -296;
	volatile int8_t x75 = -1;
	uint32_t x76 = 4U;
	int32_t t18 = -80622289;

	t18 = ((x73&x74)==(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x77 = 9383055070327LLU;
	uint16_t x78 = UINT16_MAX;
	volatile int64_t x79 = -134541712754872201LL;
	static uint8_t x80 = 2U;
	int32_t t19 = 9744844;

	t19 = ((x77&x78)==(x79&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 755U;
	int64_t x83 = -1LL;
	int64_t x84 = INT64_MAX;
	volatile int32_t t20 = -1;

	t20 = ((x81&x82)==(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	static int8_t x86 = INT8_MIN;
	int8_t x88 = -1;
	int32_t t21 = 4;

	t21 = ((x85&x86)==(x87&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x90 = -1;
	volatile int8_t x91 = INT8_MIN;
	int16_t x92 = -13664;
	int32_t t22 = 888;

	t22 = ((x89&x90)==(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x94 = UINT16_MAX;
	int8_t x95 = INT8_MIN;
	volatile int8_t x96 = INT8_MIN;
	volatile int32_t t23 = 0;

	t23 = ((x93&x94)==(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	static volatile int8_t x98 = -1;
	int32_t t24 = 5832;

	t24 = ((x97&x98)==(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	static uint64_t x102 = 2324778074335LLU;
	int32_t t25 = -696746965;

	t25 = ((x101&x102)==(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = 3U;
	volatile int8_t x107 = -1;
	volatile int32_t x108 = 158333526;
	volatile int32_t t26 = 187613719;

	t26 = ((x105&x106)==(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x110 = 3U;
	int32_t x111 = INT32_MIN;
	volatile uint32_t x112 = 3U;
	volatile int32_t t27 = 4488;

	t27 = ((x109&x110)==(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -54578689;
	int8_t x114 = INT8_MIN;
	static int32_t x115 = INT32_MAX;
	int32_t x116 = 52739574;
	static int32_t t28 = -9;

	t28 = ((x113&x114)==(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MAX;
	volatile int64_t x120 = INT64_MIN;
	int32_t t29 = -52887580;

	t29 = ((x117&x118)==(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	uint64_t x122 = 11007838055LLU;
	volatile int16_t x123 = -3176;
	int64_t x124 = -64857655LL;
	volatile int32_t t30 = -1408;

	t30 = ((x121&x122)==(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int32_t x126 = 213;
	int16_t x127 = INT16_MIN;
	static volatile int64_t x128 = INT64_MIN;
	int32_t t31 = 1;

	t31 = ((x125&x126)==(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -1;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = 651914LLU;
	int64_t x132 = 685512LL;
	static int32_t t32 = 13;

	t32 = ((x129&x130)==(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 176U;
	int64_t x134 = -1LL;
	static volatile int32_t t33 = -51274940;

	t33 = ((x133&x134)==(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x138 = UINT32_MAX;
	int64_t x140 = INT64_MIN;
	static int32_t t34 = 7272;

	t34 = ((x137&x138)==(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = 0;
	uint64_t x142 = 10043LLU;
	uint64_t x143 = 110268800597LLU;
	int64_t x144 = INT64_MAX;
	volatile int32_t t35 = 20;

	t35 = ((x141&x142)==(x143&x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 317U;
	int32_t x146 = 76852782;
	int8_t x147 = -1;
	int64_t x148 = 0LL;

	t36 = ((x145&x146)==(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x149 = 21660454542050LLU;
	int32_t x150 = INT32_MAX;
	int16_t x152 = INT16_MIN;
	int32_t t37 = -1;

	t37 = ((x149&x150)==(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int64_t x154 = INT64_MIN;
	static volatile int32_t t38 = 384;

	t38 = ((x153&x154)==(x155&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	static int16_t x159 = INT16_MIN;
	uint64_t x160 = 5661LLU;
	volatile int32_t t39 = -420388;

	t39 = ((x157&x158)==(x159&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x162 = -1;
	uint8_t x164 = 1U;
	int32_t t40 = -12980961;

	t40 = ((x161&x162)==(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 3003U;
	static int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	uint16_t x168 = 63U;
	volatile int32_t t41 = -8190810;

	t41 = ((x165&x166)==(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = -1;
	volatile uint64_t x170 = 2LLU;
	int64_t x171 = -1LL;
	volatile uint16_t x172 = 1U;

	t42 = ((x169&x170)==(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = UINT32_MAX;
	volatile int8_t x174 = -6;
	int8_t x175 = 0;
	int64_t x176 = 16853045LL;
	int32_t t43 = 29911970;

	t43 = ((x173&x174)==(x175&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 16308LLU;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	uint8_t x180 = 4U;
	int32_t t44 = 523198;

	t44 = ((x177&x178)==(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -1;
	int16_t x182 = INT16_MAX;
	int32_t x184 = INT32_MIN;

	t45 = ((x181&x182)==(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x186 = -1;
	int32_t x187 = -721661;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = 38582012;

	t46 = ((x185&x186)==(x187&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = INT8_MAX;
	volatile uint8_t x192 = UINT8_MAX;
	int32_t t47 = -457367736;

	t47 = ((x189&x190)==(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -5179;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	static volatile int16_t x196 = INT16_MIN;
	volatile int32_t t48 = -2;

	t48 = ((x193&x194)==(x195&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 15U;
	uint32_t x198 = 25907U;
	static uint32_t x199 = 190949U;
	int32_t t49 = 0;

	t49 = ((x197&x198)==(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 1LLU;
	int8_t x202 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 66955;

	t50 = ((x201&x202)==(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = INT16_MIN;
	volatile uint32_t x207 = UINT32_MAX;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = 857458;

	t51 = ((x205&x206)==(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x211 = 112889LL;
	uint64_t x212 = 54867442878LLU;

	t52 = ((x209&x210)==(x211&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int32_t x215 = 1810510;
	static uint8_t x216 = 14U;
	volatile int32_t t53 = 222;

	t53 = ((x213&x214)==(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 13;
	int64_t x218 = -1LL;
	uint32_t x219 = 2553U;
	static volatile int32_t t54 = -367621;

	t54 = ((x217&x218)==(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MAX;
	int8_t x222 = -1;
	volatile int64_t x223 = INT64_MAX;

	t55 = ((x221&x222)==(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 267671U;
	int64_t x227 = -1LL;
	int32_t x228 = -1;
	volatile int32_t t56 = 6;

	t56 = ((x225&x226)==(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x231 = INT32_MAX;
	volatile int32_t x232 = -1;
	volatile int32_t t57 = -267560;

	t57 = ((x229&x230)==(x231&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x234 = 0;
	int64_t x235 = -5919LL;
	volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 739;

	t58 = ((x233&x234)==(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	uint8_t x238 = 120U;
	int32_t x239 = 227271708;
	int8_t x240 = -1;
	int32_t t59 = -30;

	t59 = ((x237&x238)==(x239&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x243 = -1;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t60 = 31246;

	t60 = ((x241&x242)==(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x245 = 1942LLU;
	int8_t x246 = INT8_MIN;
	int32_t x248 = 1032994547;
	int32_t t61 = 1;

	t61 = ((x245&x246)==(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int16_t x250 = -1;
	uint64_t x251 = 2039235095123872753LLU;
	static uint64_t x252 = 54LLU;
	volatile int32_t t62 = -6629210;

	t62 = ((x249&x250)==(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x254 = 1LLU;
	static volatile uint64_t x255 = UINT64_MAX;
	int8_t x256 = 17;

	t63 = ((x253&x254)==(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = -1LL;
	int32_t x258 = INT32_MIN;
	int32_t x259 = INT32_MIN;
	volatile int64_t x260 = 844079LL;
	int32_t t64 = -39296193;

	t64 = ((x257&x258)==(x259&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1903U;
	volatile int16_t x262 = INT16_MAX;
	uint32_t x263 = 19905894U;
	uint16_t x264 = UINT16_MAX;
	static volatile int32_t t65 = -410628;

	t65 = ((x261&x262)==(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x265 = -1;
	uint8_t x266 = 14U;
	int32_t t66 = -30752;

	t66 = ((x265&x266)==(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = 116413851;
	static volatile uint16_t x271 = 0U;
	int32_t x272 = INT32_MIN;

	t67 = ((x269&x270)==(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = -29;
	uint8_t x275 = UINT8_MAX;
	static int32_t x276 = INT32_MIN;
	int32_t t68 = 60;

	t68 = ((x273&x274)==(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x277 = 5614571993119LLU;
	static uint8_t x278 = UINT8_MAX;
	volatile int8_t x280 = -1;
	volatile int32_t t69 = 0;

	t69 = ((x277&x278)==(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static uint64_t x282 = 53711538588447LLU;
	uint32_t x283 = 525570843U;

	t70 = ((x281&x282)==(x283&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 1267U;
	int32_t x286 = INT32_MAX;
	uint32_t x287 = 3472U;
	volatile uint8_t x288 = 1U;
	volatile int32_t t71 = 841;

	t71 = ((x285&x286)==(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	int64_t x291 = -212122LL;
	int64_t x292 = INT64_MIN;
	volatile int32_t t72 = -1578398;

	t72 = ((x289&x290)==(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x294 = 592;
	int64_t x295 = INT64_MIN;
	volatile int32_t t73 = -384705;

	t73 = ((x293&x294)==(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = UINT16_MAX;
	static volatile uint8_t x298 = 32U;
	volatile int32_t t74 = -355506183;

	t74 = ((x297&x298)==(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = -556916;
	static int32_t t75 = -283787032;

	t75 = ((x301&x302)==(x303&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -2;
	uint64_t x306 = UINT64_MAX;
	uint64_t x307 = 66211151456066LLU;

	t76 = ((x305&x306)==(x307&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = 17;
	int32_t x310 = -1;
	uint32_t x311 = 60513U;
	int32_t t77 = 617;

	t77 = ((x309&x310)==(x311&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -2;
	int32_t x314 = -87220;
	uint32_t x315 = UINT32_MAX;
	int64_t x316 = -24650367364443LL;

	t78 = ((x313&x314)==(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 18U;
	int16_t x320 = 1;
	int32_t t79 = -215352682;

	t79 = ((x317&x318)==(x319&x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = -645;
	uint16_t x322 = 31408U;
	volatile int64_t x323 = -1LL;
	int64_t x324 = INT64_MIN;
	static int32_t t80 = -2;

	t80 = ((x321&x322)==(x323&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 11U;
	static uint8_t x326 = UINT8_MAX;
	uint64_t x327 = 876195721205564LLU;
	uint32_t x328 = 265288U;

	t81 = ((x325&x326)==(x327&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -1;
	uint32_t x330 = 4275U;
	static volatile uint8_t x332 = 15U;
	volatile int32_t t82 = 17;

	t82 = ((x329&x330)==(x331&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int16_t x334 = -15974;
	uint32_t x335 = 55U;
	int32_t x336 = INT32_MIN;

	t83 = ((x333&x334)==(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	uint32_t x338 = 11061222U;
	uint64_t x339 = 1LLU;
	uint64_t x340 = UINT64_MAX;
	volatile int32_t t84 = -5152943;

	t84 = ((x337&x338)==(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = -1;
	int8_t x343 = -1;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = 2364;

	t85 = ((x341&x342)==(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	volatile uint64_t x348 = UINT64_MAX;

	t86 = ((x345&x346)==(x347&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 39U;
	uint64_t x352 = UINT64_MAX;
	static int32_t t87 = -4052;

	t87 = ((x349&x350)==(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -27023;
	uint64_t x354 = 23554876387688LLU;
	uint64_t x355 = 3463771551592627LLU;
	int32_t t88 = -2396;

	t88 = ((x353&x354)==(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x357 = 88218U;
	int32_t x358 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	volatile int32_t t89 = -1123;

	t89 = ((x357&x358)==(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = 14;
	uint16_t x362 = UINT16_MAX;
	int32_t x363 = 421417;
	uint16_t x364 = 26U;

	t90 = ((x361&x362)==(x363&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	volatile int64_t x367 = INT64_MIN;
	uint8_t x368 = 0U;
	volatile int32_t t91 = 113445450;

	t91 = ((x365&x366)==(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = -108772279116248949LL;
	int64_t x371 = INT64_MAX;
	volatile int32_t x372 = INT32_MIN;
	static volatile int32_t t92 = 53;

	t92 = ((x369&x370)==(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	uint64_t x375 = UINT64_MAX;
	int32_t t93 = -312468007;

	t93 = ((x373&x374)==(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = -2;
	static uint16_t x378 = 133U;
	int64_t x380 = -1LL;
	int32_t t94 = 606074474;

	t94 = ((x377&x378)==(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = 1;
	int64_t x382 = INT64_MIN;
	volatile int64_t x383 = -1LL;
	uint64_t x384 = UINT64_MAX;
	int32_t t95 = -1152252;

	t95 = ((x381&x382)==(x383&x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 239682516U;
	uint64_t x388 = 155223374380LLU;
	static int32_t t96 = 7290;

	t96 = ((x385&x386)==(x387&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = INT16_MIN;
	uint64_t x392 = 351092434LLU;
	volatile int32_t t97 = 190;

	t97 = ((x389&x390)==(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = UINT8_MAX;
	int16_t x394 = -1;
	int8_t x395 = -1;
	static uint16_t x396 = UINT16_MAX;
	int32_t t98 = 28;

	t98 = ((x393&x394)==(x395&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x399 = -1;
	uint64_t x400 = 13564402911639359LLU;
	int32_t t99 = -14;

	t99 = ((x397&x398)==(x399&x400));

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

