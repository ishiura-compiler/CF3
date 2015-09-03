#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = UINT8_MAX;
static uint64_t x6 = 542833191069740720LLU;
uint32_t x7 = UINT32_MAX;
int32_t x14 = INT32_MAX;
int32_t x17 = INT32_MIN;
int16_t x20 = -45;
uint8_t x26 = 43U;
int32_t x27 = -31541109;
volatile int64_t t10 = -1157087LL;
int8_t x51 = 32;
volatile int32_t t14 = -94555;
int8_t x68 = INT8_MIN;
int16_t x70 = -2;
int8_t x75 = 1;
static volatile uint16_t x80 = 6U;
int8_t x84 = INT8_MIN;
int32_t x85 = -304;
int16_t x87 = -1;
int64_t x90 = 21074081155LL;
int64_t t22 = 30768461LL;
static int32_t x101 = INT32_MIN;
uint8_t x111 = UINT8_MAX;
uint32_t x112 = UINT32_MAX;
int64_t x116 = INT64_MIN;
uint16_t x125 = UINT16_MAX;
static int8_t x133 = INT8_MIN;
int8_t x134 = -1;
uint32_t x140 = UINT32_MAX;
int8_t x142 = INT8_MIN;
volatile int32_t t35 = 1819169;
static uint16_t x149 = 39U;
volatile uint16_t x153 = 8807U;
static int64_t x158 = INT64_MAX;
volatile int8_t x164 = INT8_MIN;
static uint64_t t40 = UINT64_MAX;
int64_t x180 = INT64_MIN;
uint8_t x183 = UINT8_MAX;
static int32_t x188 = INT32_MIN;
int64_t x190 = INT64_MIN;
static volatile uint64_t x191 = 468842193187312963LLU;
int8_t x193 = INT8_MIN;
uint16_t x194 = 24924U;
volatile int64_t x199 = INT64_MIN;
static uint32_t x207 = 83U;
uint64_t t51 = UINT64_MAX;
volatile int8_t x216 = INT8_MIN;
static int8_t x219 = 1;
int32_t t53 = 1;
int16_t x223 = INT16_MIN;
uint64_t t54 = 8457949483834LLU;
int16_t x234 = 14;
uint64_t t59 = 882094591561929069LLU;
int16_t x248 = -1;
uint8_t x255 = UINT8_MAX;
volatile int64_t t62 = -15979053791979877LL;
volatile int64_t x257 = -1LL;
uint8_t x260 = 64U;
uint16_t x265 = 662U;
int32_t x268 = INT32_MIN;
int32_t x273 = INT32_MIN;
volatile int32_t x275 = INT32_MAX;
int16_t x276 = -1;
volatile int32_t t67 = INT32_MIN;
uint16_t x277 = 31916U;
volatile int8_t x279 = INT8_MIN;
int8_t x280 = INT8_MAX;
int32_t x287 = INT32_MAX;
int8_t x289 = 1;
int32_t x290 = INT32_MAX;
int8_t x293 = INT8_MAX;
int16_t x297 = -930;
static uint8_t x298 = 19U;
uint64_t x301 = 6154776859LLU;
int16_t x304 = INT16_MIN;
uint64_t x305 = 100LLU;
uint64_t x306 = 725686LLU;
uint32_t x313 = UINT32_MAX;
int16_t x318 = INT16_MAX;
uint16_t x319 = 47U;
uint64_t t78 = 436839497LLU;
volatile int8_t x336 = INT8_MIN;
volatile int64_t t84 = -19474363LL;
int16_t x345 = 5056;
int16_t x350 = 6801;
int8_t x351 = -18;
int8_t x356 = -1;
int64_t t87 = INT64_MAX;
static int32_t t88 = -156183064;
static volatile int64_t t90 = 4105798810LL;
int16_t x376 = -1;
volatile uint32_t x382 = 1573U;
int64_t x388 = INT64_MIN;
volatile uint64_t t95 = 1462LLU;
uint64_t x390 = 84489LLU;
int16_t x403 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int16_t x2 = INT16_MAX;
	int16_t x4 = INT16_MIN;
	volatile int32_t t0 = INT32_MIN;

	t0 = (x1-(x2&(x3<x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 43;
	int16_t x8 = 1;
	uint64_t t1 = 2808377843LLU;

	t1 = (x5-(x6&(x7<x8)));

	if (t1 != 43LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 287U;
	int64_t x10 = INT64_MIN;
	int16_t x11 = INT16_MIN;
	uint64_t x12 = UINT64_MAX;
	volatile int64_t t2 = -19LL;

	t2 = (x9-(x10&(x11<x12)));

	if (t2 != 287LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MAX;
	int32_t t3 = -536096;

	t3 = (x13-(x14&(x15<x16)));

	if (t3 != -129) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = INT32_MIN;
	static int16_t x19 = -1;
	int32_t t4 = INT32_MIN;

	t4 = (x17-(x18&(x19<x20)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MAX;
	int8_t x22 = INT8_MAX;
	int16_t x23 = 353;
	volatile int64_t x24 = INT64_MAX;
	int64_t t5 = -82839895LL;

	t5 = (x21-(x22&(x23<x24)));

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 20;
	static int32_t x28 = INT32_MAX;
	int32_t t6 = -736;

	t6 = (x25-(x26&(x27<x28)));

	if (t6 != 19) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint8_t x30 = UINT8_MAX;
	int8_t x31 = 33;
	static uint8_t x32 = 1U;
	volatile int32_t t7 = 0;

	t7 = (x29-(x30&(x31<x32)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	uint64_t x34 = UINT64_MAX;
	int64_t x35 = -61640185LL;
	uint16_t x36 = UINT16_MAX;
	uint64_t t8 = 9691433874632921LLU;

	t8 = (x33-(x34&(x35<x36)));

	if (t8 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -14201;
	volatile uint32_t x38 = 182493U;
	int64_t x39 = INT64_MIN;
	static int64_t x40 = INT64_MIN;
	static volatile uint32_t t9 = 6U;

	t9 = (x37-(x38&(x39<x40)));

	if (t9 != 4294953095U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -2;
	static int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MAX;
	int8_t x44 = 1;

	t10 = (x41-(x42&(x43<x44)));

	if (t10 != -2LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 274;
	volatile int64_t x46 = INT64_MIN;
	int16_t x47 = INT16_MIN;
	volatile int8_t x48 = -28;
	int64_t t11 = 973LL;

	t11 = (x45-(x46&(x47<x48)));

	if (t11 != 274LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static uint64_t x50 = 33921873548892450LLU;
	volatile int64_t x52 = INT64_MIN;
	static volatile uint64_t t12 = 0LLU;

	t12 = (x49-(x50&(x51<x52)));

	if (t12 != 255LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = -1;
	int16_t x54 = 2508;
	int16_t x55 = INT16_MIN;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t13 = -78603;

	t13 = (x53-(x54&(x55<x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	static volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = -1;
	int16_t x60 = 3;

	t14 = (x57-(x58&(x59<x60)));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -3736701;
	int32_t x62 = 7161;
	int64_t x63 = INT64_MIN;
	static int8_t x64 = 1;
	int32_t t15 = -287;

	t15 = (x61-(x62&(x63<x64)));

	if (t15 != -3736702) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	uint16_t x66 = 134U;
	int8_t x67 = INT8_MIN;
	volatile int64_t t16 = -7562668521963LL;

	t16 = (x65-(x66&(x67<x68)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 10330562487LLU;
	volatile int32_t x71 = INT32_MIN;
	uint32_t x72 = 998U;
	uint64_t t17 = 469550485741LLU;

	t17 = (x69-(x70&(x71<x72)));

	if (t17 != 10330562487LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x73 = 21U;
	static volatile int32_t x74 = -2744;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 2958248;

	t18 = (x73-(x74&(x75<x76)));

	if (t18 != 21) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	volatile uint8_t x78 = 12U;
	int64_t x79 = -1LL;
	volatile int32_t t19 = 70;

	t19 = (x77-(x78&(x79<x80)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x81 = 2356119LLU;
	volatile int64_t x82 = 2859LL;
	int8_t x83 = -6;
	static uint64_t t20 = 2010887780LLU;

	t20 = (x81-(x82&(x83<x84)));

	if (t20 != 2356119LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x86 = -9;
	static volatile uint64_t x88 = 16969546973396LLU;
	int32_t t21 = -285;

	t21 = (x85-(x86&(x87<x88)));

	if (t21 != -304) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int32_t x91 = INT32_MAX;
	static volatile int32_t x92 = 31647;

	t22 = (x89-(x90&(x91<x92)));

	if (t22 != 65535LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	int64_t x94 = -1LL;
	volatile int32_t x95 = INT32_MIN;
	static int16_t x96 = 3;
	int64_t t23 = 0LL;

	t23 = (x93-(x94&(x95<x96)));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = 3;
	static volatile int64_t x98 = -1LL;
	int32_t x99 = INT32_MIN;
	volatile uint32_t x100 = 9U;
	int64_t t24 = 6877907375435LL;

	t24 = (x97-(x98&(x99<x100)));

	if (t24 != 3LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x102 = INT16_MIN;
	int64_t x103 = INT64_MIN;
	int64_t x104 = -1064032088271LL;
	int32_t t25 = INT32_MIN;

	t25 = (x101-(x102&(x103<x104)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int64_t x106 = INT64_MAX;
	int8_t x107 = INT8_MIN;
	int64_t x108 = INT64_MIN;
	int64_t t26 = -2058390566580130441LL;

	t26 = (x105-(x106&(x107<x108)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = 12599392500816LL;
	volatile int8_t x110 = 27;
	int64_t t27 = 44238704686228LL;

	t27 = (x109-(x110&(x111<x112)));

	if (t27 != 12599392500815LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MAX;
	int32_t x114 = -1;
	volatile int8_t x115 = INT8_MIN;
	volatile int64_t t28 = INT64_MAX;

	t28 = (x113-(x114&(x115<x116)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	uint64_t x118 = 4284515057722LLU;
	int32_t x119 = -1774677;
	int16_t x120 = -369;
	static volatile uint64_t t29 = UINT64_MAX;

	t29 = (x117-(x118&(x119<x120)));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	static uint64_t x122 = 479LLU;
	uint8_t x123 = 1U;
	volatile int8_t x124 = -43;
	uint64_t t30 = 190653198851LLU;

	t30 = (x121-(x122&(x123<x124)));

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x126 = 12293919107LL;
	static int8_t x127 = 37;
	int16_t x128 = -1;
	int64_t t31 = -516400700124628948LL;

	t31 = (x125-(x126&(x127<x128)));

	if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MAX;
	static uint32_t x130 = UINT32_MAX;
	volatile int16_t x131 = 0;
	static int32_t x132 = -425893;
	volatile uint32_t t32 = 23036U;

	t32 = (x129-(x130&(x131<x132)));

	if (t32 != 32767U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x135 = 5823U;
	static volatile int16_t x136 = INT16_MAX;
	int32_t t33 = -6;

	t33 = (x133-(x134&(x135<x136)));

	if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	int8_t x138 = INT8_MAX;
	int16_t x139 = INT16_MAX;
	int64_t t34 = 934948513LL;

	t34 = (x137-(x138&(x139<x140)));

	if (t34 != -2LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 1369;
	uint32_t x143 = 1731008556U;
	int16_t x144 = INT16_MIN;

	t35 = (x141-(x142&(x143<x144)));

	if (t35 != 1369) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = 35488619500LLU;
	static volatile int32_t x147 = 3232177;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t36 = 160409430LLU;

	t36 = (x145-(x146&(x147<x148)));

	if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x150 = 15382U;
	static int8_t x151 = 1;
	int32_t x152 = INT32_MIN;
	uint32_t t37 = 1092U;

	t37 = (x149-(x150&(x151<x152)));

	if (t37 != 39U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = UINT16_MAX;
	static int8_t x155 = -1;
	uint64_t x156 = 222LLU;
	volatile int32_t t38 = -17025284;

	t38 = (x153-(x154&(x155<x156)));

	if (t38 != 8807) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int32_t x159 = -1;
	volatile int8_t x160 = 7;
	int64_t t39 = 4005615760690663LL;

	t39 = (x157-(x158&(x159<x160)));

	if (t39 != 65534LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	uint64_t x162 = 177488LLU;
	uint64_t x163 = UINT64_MAX;

	t40 = (x161-(x162&(x163<x164)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MIN;
	int16_t x168 = -1;
	int32_t t41 = 127103;

	t41 = (x165-(x166&(x167<x168)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MIN;
	volatile int16_t x170 = INT16_MIN;
	int8_t x171 = 17;
	uint64_t x172 = 1032925LLU;
	int64_t t42 = INT64_MIN;

	t42 = (x169-(x170&(x171<x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x177 = UINT16_MAX;
	int64_t x178 = INT64_MIN;
	int32_t x179 = INT32_MAX;
	volatile int64_t t43 = -58LL;

	t43 = (x177-(x178&(x179<x180)));

	if (t43 != 65535LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -1;
	int32_t x182 = -200863875;
	volatile uint8_t x184 = 24U;
	int32_t t44 = 103583;

	t44 = (x181-(x182&(x183<x184)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x185 = 1U;
	int64_t x186 = INT64_MIN;
	static int64_t x187 = INT64_MIN;
	volatile int64_t t45 = 0LL;

	t45 = (x185-(x186&(x187<x188)));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = -1;
	int8_t x192 = 2;
	static volatile int64_t t46 = 192557LL;

	t46 = (x189-(x190&(x191<x192)));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x195 = 16U;
	uint64_t x196 = 187515798691869526LLU;
	int32_t t47 = 10291;

	t47 = (x193-(x194&(x195<x196)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x197 = INT16_MIN;
	int32_t x198 = 1272;
	volatile int16_t x200 = INT16_MAX;
	int32_t t48 = 58987;

	t48 = (x197-(x198&(x199<x200)));

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x201 = UINT64_MAX;
	int64_t x202 = -1LL;
	static uint64_t x203 = 0LLU;
	int16_t x204 = INT16_MIN;
	uint64_t t49 = 7648606723253488LLU;

	t49 = (x201-(x202&(x203<x204)));

	if (t49 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x205 = UINT8_MAX;
	uint32_t x206 = 253816468U;
	uint8_t x208 = 26U;
	static uint32_t t50 = 236247U;

	t50 = (x205-(x206&(x207<x208)));

	if (t50 != 255U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = UINT64_MAX;
	int32_t x210 = INT32_MAX;
	int16_t x211 = 631;
	int8_t x212 = INT8_MIN;

	t51 = (x209-(x210&(x211<x212)));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = 9;
	static int32_t x214 = 318890698;
	uint8_t x215 = 5U;
	static volatile int32_t t52 = -258158;

	t52 = (x213-(x214&(x215<x216)));

	if (t52 != 9) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x217 = 1;
	static int32_t x218 = INT32_MIN;
	int32_t x220 = INT32_MAX;

	t53 = (x217-(x218&(x219<x220)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 52521062974572LLU;
	volatile int16_t x222 = INT16_MIN;
	int16_t x224 = 1298;

	t54 = (x221-(x222&(x223<x224)));

	if (t54 != 52521062974572LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x225 = INT32_MAX;
	volatile int64_t x226 = INT64_MAX;
	static int64_t x227 = -1430215LL;
	static uint64_t x228 = UINT64_MAX;
	volatile int64_t t55 = -1310491LL;

	t55 = (x225-(x226&(x227<x228)));

	if (t55 != 2147483646LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 62U;
	int8_t x230 = 0;
	volatile int32_t x231 = INT32_MAX;
	static volatile int64_t x232 = INT64_MIN;
	volatile int32_t t56 = 39278;

	t56 = (x229-(x230&(x231<x232)));

	if (t56 != 62) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x233 = UINT32_MAX;
	uint64_t x235 = UINT64_MAX;
	volatile int16_t x236 = -16;
	uint32_t t57 = UINT32_MAX;

	t57 = (x233-(x234&(x235<x236)));

	if (t57 != UINT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = -1;
	static int16_t x239 = -21;
	int16_t x240 = INT16_MAX;
	int32_t t58 = -1181;

	t58 = (x237-(x238&(x239<x240)));

	if (t58 != 32766) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x241 = 14478491067307956LLU;
	volatile uint64_t x242 = 32886065LLU;
	int16_t x243 = -1;
	int8_t x244 = -1;

	t59 = (x241-(x242&(x243<x244)));

	if (t59 != 14478491067307956LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = -1;
	uint8_t x246 = 13U;
	static int8_t x247 = INT8_MAX;
	int32_t t60 = -2488656;

	t60 = (x245-(x246&(x247<x248)));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	int32_t x250 = -7589325;
	uint16_t x251 = UINT16_MAX;
	static int64_t x252 = INT64_MIN;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x249-(x250&(x251<x252)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = 174060877200347456LL;
	static volatile int64_t x254 = INT64_MIN;
	int64_t x256 = 1034668112376535LL;

	t62 = (x253-(x254&(x255<x256)));

	if (t62 != 174060877200347456LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x258 = 46704LL;
	static int16_t x259 = -1;
	volatile int64_t t63 = -3640372LL;

	t63 = (x257-(x258&(x259<x260)));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = 83U;
	uint64_t x262 = 79718235246LLU;
	int16_t x263 = INT16_MIN;
	int32_t x264 = -2;
	uint64_t t64 = 6929174311641LLU;

	t64 = (x261-(x262&(x263<x264)));

	if (t64 != 83LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x266 = 3LLU;
	static int64_t x267 = 7176855923331836LL;
	volatile uint64_t t65 = 451323LLU;

	t65 = (x265-(x266&(x267<x268)));

	if (t65 != 662LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 526575762035644973LLU;
	int16_t x270 = -1;
	static int32_t x271 = INT32_MIN;
	static uint8_t x272 = 0U;
	uint64_t t66 = 409777734746694287LLU;

	t66 = (x269-(x270&(x271<x272)));

	if (t66 != 526575762035644972LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x274 = -1;

	t67 = (x273-(x274&(x275<x276)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x278 = -1;
	volatile int32_t t68 = -148;

	t68 = (x277-(x278&(x279<x280)));

	if (t68 != 31915) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x281 = INT8_MIN;
	volatile int64_t x282 = INT64_MIN;
	static int8_t x283 = -1;
	int64_t x284 = INT64_MIN;
	int64_t t69 = 30090643853389LL;

	t69 = (x281-(x282&(x283<x284)));

	if (t69 != -128LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x285 = 90692654466LLU;
	int64_t x286 = INT64_MIN;
	int8_t x288 = INT8_MIN;
	static volatile uint64_t t70 = 47825LLU;

	t70 = (x285-(x286&(x287<x288)));

	if (t70 != 90692654466LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x291 = UINT32_MAX;
	int8_t x292 = INT8_MAX;
	int32_t t71 = 2336;

	t71 = (x289-(x290&(x291<x292)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x294 = INT64_MIN;
	volatile int64_t x295 = INT64_MIN;
	static int8_t x296 = INT8_MIN;
	volatile int64_t t72 = 16702158462356090LL;

	t72 = (x293-(x294&(x295<x296)));

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x299 = -3250507910LL;
	int64_t x300 = -1LL;
	volatile int32_t t73 = 1165047;

	t73 = (x297-(x298&(x299<x300)));

	if (t73 != -931) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x302 = -21;
	int8_t x303 = INT8_MIN;
	uint64_t t74 = 66933268329918LLU;

	t74 = (x301-(x302&(x303<x304)));

	if (t74 != 6154776859LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x307 = -1LL;
	int16_t x308 = 6220;
	uint64_t t75 = 11359674593842147LLU;

	t75 = (x305-(x306&(x307<x308)));

	if (t75 != 100LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = -6;
	uint32_t x310 = 919U;
	int8_t x311 = -5;
	int64_t x312 = INT64_MIN;
	static uint32_t t76 = 44U;

	t76 = (x309-(x310&(x311<x312)));

	if (t76 != 4294967290U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x314 = INT64_MIN;
	static int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;
	volatile int64_t t77 = 8288250199500LL;

	t77 = (x313-(x314&(x315<x316)));

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x317 = 20021968LLU;
	int32_t x320 = -1;

	t78 = (x317-(x318&(x319<x320)));

	if (t78 != 20021968LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x321 = 260694U;
	static int32_t x322 = -1;
	int16_t x323 = -46;
	int8_t x324 = INT8_MAX;
	uint32_t t79 = 18U;

	t79 = (x321-(x322&(x323<x324)));

	if (t79 != 260693U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	int32_t x327 = 216814642;
	int16_t x328 = -142;
	volatile int32_t t80 = -48;

	t80 = (x325-(x326&(x327<x328)));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 2U;
	static volatile int64_t x330 = INT64_MAX;
	uint64_t x331 = 28037LLU;
	int16_t x332 = INT16_MIN;
	volatile int64_t t81 = -3927532LL;

	t81 = (x329-(x330&(x331<x332)));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	volatile int32_t x335 = 1005387;
	uint32_t t82 = 1620870597U;

	t82 = (x333-(x334&(x335<x336)));

	if (t82 != 4294967168U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 4U;
	int32_t x338 = 120;
	int64_t x339 = 766345705854901LL;
	int16_t x340 = INT16_MIN;
	int32_t t83 = 50;

	t83 = (x337-(x338&(x339<x340)));

	if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = 1;
	int64_t x342 = INT64_MAX;
	int64_t x343 = -1LL;
	static volatile int32_t x344 = INT32_MIN;

	t84 = (x341-(x342&(x343<x344)));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x346 = INT32_MIN;
	int16_t x347 = -57;
	uint16_t x348 = 0U;
	int32_t t85 = -3515;

	t85 = (x345-(x346&(x347<x348)));

	if (t85 != 5056) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MAX;
	volatile int64_t x352 = -1LL;
	int64_t t86 = -345725119049874677LL;

	t86 = (x349-(x350&(x351<x352)));

	if (t86 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = INT64_MAX;
	volatile uint32_t x354 = 90U;
	int64_t x355 = -1LL;

	t87 = (x353-(x354&(x355<x356)));

	if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = 1U;
	int16_t x358 = -1;
	static int8_t x359 = 0;
	static int16_t x360 = INT16_MIN;

	t88 = (x357-(x358&(x359<x360)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -326899123;
	uint32_t x362 = 267U;
	int8_t x363 = INT8_MIN;
	int16_t x364 = -515;
	uint32_t t89 = 59031885U;

	t89 = (x361-(x362&(x363<x364)));

	if (t89 != 3968068173U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = 14190U;
	int64_t x366 = -170012472480LL;
	int64_t x367 = -1LL;
	static volatile uint16_t x368 = 18601U;

	t90 = (x365-(x366&(x367<x368)));

	if (t90 != 14190LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MIN;
	volatile uint64_t x371 = 368701779LLU;
	uint16_t x372 = UINT16_MAX;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = (x369-(x370&(x371<x372)));

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x373 = INT64_MIN;
	uint8_t x374 = 1U;
	uint8_t x375 = 15U;
	int64_t t92 = INT64_MIN;

	t92 = (x373-(x374&(x375<x376)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x377 = 57U;
	int16_t x378 = INT16_MAX;
	int16_t x379 = -1;
	int64_t x380 = INT64_MIN;
	volatile uint32_t t93 = 7557U;

	t93 = (x377-(x378&(x379<x380)));

	if (t93 != 57U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = 1826084529026804LL;
	volatile int8_t x383 = -1;
	int16_t x384 = -1;
	volatile int64_t t94 = -304596985653LL;

	t94 = (x381-(x382&(x383<x384)));

	if (t94 != 1826084529026804LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = 20LLU;
	uint32_t x386 = UINT32_MAX;
	int8_t x387 = 23;

	t95 = (x385-(x386&(x387<x388)));

	if (t95 != 20LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x389 = UINT8_MAX;
	static uint8_t x391 = 0U;
	volatile int64_t x392 = INT64_MIN;
	static uint64_t t96 = 1018578332862224722LLU;

	t96 = (x389-(x390&(x391<x392)));

	if (t96 != 255LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x393 = INT8_MAX;
	int8_t x394 = 1;
	static int16_t x395 = INT16_MIN;
	volatile int16_t x396 = INT16_MIN;
	volatile int32_t t97 = 370;

	t97 = (x393-(x394&(x395<x396)));

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = UINT64_MAX;
	volatile int32_t t98 = 310066;

	t98 = (x397-(x398&(x399<x400)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x401 = -10;
	int32_t x402 = -1;
	int32_t x404 = -64008;
	static int32_t t99 = -32161;

	t99 = (x401-(x402&(x403<x404)));

	if (t99 != -10) { NG(); } else { ; }
	
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

