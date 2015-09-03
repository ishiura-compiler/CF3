#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 37923655;
uint32_t x10 = 125027358U;
uint16_t x19 = UINT16_MAX;
static int32_t x20 = INT32_MIN;
uint32_t x31 = 4709361U;
int32_t t6 = -2699;
static int8_t x38 = INT8_MIN;
int32_t x42 = INT32_MAX;
uint8_t x47 = UINT8_MAX;
uint16_t x50 = 15U;
int32_t x57 = INT32_MAX;
int32_t x60 = INT32_MAX;
uint64_t x65 = UINT64_MAX;
volatile int8_t x68 = INT8_MIN;
uint32_t x84 = 2U;
volatile uint64_t t18 = UINT64_MAX;
int8_t x86 = INT8_MAX;
uint16_t x87 = 4731U;
int32_t t19 = -32;
int32_t x91 = -1;
volatile int32_t t20 = -395280329;
int64_t x95 = INT64_MAX;
volatile int32_t t21 = -2510401;
int16_t x97 = -1;
int8_t x101 = INT8_MIN;
uint64_t x104 = 1808LLU;
volatile int64_t x125 = INT64_MIN;
uint32_t x128 = UINT32_MAX;
static int16_t x133 = -1;
int16_t x138 = INT16_MIN;
int8_t x140 = INT8_MAX;
uint64_t x142 = 1261895078LLU;
int32_t t33 = -4208431;
static int32_t x149 = 4478281;
uint8_t x151 = 24U;
static uint8_t x158 = 0U;
static volatile int8_t x160 = -1;
volatile int32_t t36 = 1081;
int8_t x162 = -52;
volatile uint32_t t39 = 540992320U;
int8_t x176 = INT8_MAX;
volatile int32_t t40 = 8052;
uint32_t x177 = 1242339740U;
static int64_t x186 = -32038110LL;
int32_t x187 = INT32_MIN;
uint64_t t45 = 342013698556538961LLU;
uint16_t x201 = 31371U;
volatile int16_t x215 = -1;
int32_t x217 = 8;
int16_t x219 = INT16_MIN;
uint16_t x228 = 7U;
static uint16_t x230 = UINT16_MAX;
volatile uint16_t x233 = 39U;
volatile int32_t t55 = -5;
uint16_t x241 = 543U;
static int32_t x243 = INT32_MAX;
volatile int16_t x244 = -1;
int16_t x245 = 1901;
uint64_t x247 = 4358998039078199LLU;
int8_t x250 = 1;
uint64_t x257 = 249903264669LLU;
uint64_t x262 = 44588203LLU;
uint16_t x277 = 9U;
int16_t x290 = 60;
int32_t x291 = -1;
int16_t x295 = INT16_MAX;
int16_t x296 = -1;
uint64_t t72 = 5957332561738693LLU;
int16_t x314 = INT16_MAX;
int16_t x316 = INT16_MIN;
uint64_t x319 = 3218796034729LLU;
int32_t x323 = -1;
int32_t x328 = INT32_MIN;
int16_t x329 = INT16_MIN;
volatile int32_t t78 = 16867;
uint8_t x335 = 1U;
static volatile int32_t t81 = 6;
volatile uint64_t x348 = 110230344815375475LLU;
volatile int32_t t82 = -211228893;
uint8_t x368 = 0U;
uint32_t x372 = 371140232U;
int64_t x374 = INT64_MAX;
static int16_t x375 = -10339;
int16_t x379 = INT16_MIN;
uint64_t x382 = 5LLU;
static volatile int32_t x384 = 39281751;
volatile int32_t x386 = -1;
int16_t x388 = INT16_MAX;
volatile int32_t t91 = -2658;
int64_t x389 = INT64_MAX;
uint32_t x395 = 116U;
int8_t x398 = INT8_MAX;
static uint32_t x400 = 542893793U;
int8_t x404 = -1;
static int16_t x411 = -252;
int32_t t97 = -101186334;
int32_t x415 = -1;
uint64_t x421 = UINT64_MAX;


void f0(void) {
	static int8_t x5 = -1;
	static uint16_t x6 = UINT16_MAX;
	int8_t x7 = INT8_MAX;
	uint16_t x8 = 814U;

	t0 = (x5-(x6<(x7&x8)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 2441;
	volatile int8_t x11 = INT8_MAX;
	volatile int32_t x12 = -1;
	static volatile int32_t t1 = -1948825;

	t1 = (x9-(x10<(x11&x12)));

	if (t1 != 2441) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = -425LL;
	int64_t x14 = INT64_MIN;
	int32_t x15 = -1;
	int16_t x16 = -5;
	volatile int64_t t2 = -539014019LL;

	t2 = (x13-(x14<(x15&x16)));

	if (t2 != -426LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = -1;
	static volatile int64_t x18 = INT64_MIN;
	static volatile int32_t t3 = -109350631;

	t3 = (x17-(x18<(x19&x20)));

	if (t3 != -2) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 35062374;
	uint8_t x26 = 0U;
	static int8_t x27 = INT8_MAX;
	int32_t x28 = 2;
	int32_t t4 = -3273;

	t4 = (x25-(x26<(x27&x28)));

	if (t4 != 35062373) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = UINT32_MAX;
	uint8_t x30 = UINT8_MAX;
	int64_t x32 = -1LL;
	volatile uint32_t t5 = 116891688U;

	t5 = (x29-(x30<(x31&x32)));

	if (t5 != 4294967294U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = 0;
	int16_t x34 = -2256;
	int8_t x35 = -1;
	int8_t x36 = -1;

	t6 = (x33-(x34<(x35&x36)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x37 = 341U;
	int8_t x39 = INT8_MIN;
	uint32_t x40 = 44U;
	static volatile int32_t t7 = -1;

	t7 = (x37-(x38<(x39&x40)));

	if (t7 != 341) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = INT16_MIN;
	static volatile int8_t x43 = INT8_MAX;
	volatile uint8_t x44 = UINT8_MAX;
	static int32_t t8 = 5182;

	t8 = (x41-(x42<(x43&x44)));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	volatile int16_t x46 = 338;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t9 = 1;

	t9 = (x45-(x46<(x47&x48)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MAX;
	static uint64_t x51 = 2LLU;
	volatile int8_t x52 = -27;
	int32_t t10 = 3;

	t10 = (x49-(x50<(x51&x52)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = 16;
	int64_t x54 = 268134449LL;
	static uint16_t x55 = 3U;
	int32_t x56 = -24822;
	volatile int32_t t11 = 92139;

	t11 = (x53-(x54<(x55&x56)));

	if (t11 != 16) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = 19243;
	int16_t x59 = -1;
	static int32_t t12 = 4724;

	t12 = (x57-(x58<(x59&x60)));

	if (t12 != 2147483646) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 22U;
	int64_t x62 = INT64_MIN;
	static volatile int8_t x63 = INT8_MAX;
	uint8_t x64 = 80U;
	volatile int32_t t13 = 351408;

	t13 = (x61-(x62<(x63&x64)));

	if (t13 != 21) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x66 = -1;
	uint64_t x67 = 0LLU;
	uint64_t t14 = UINT64_MAX;

	t14 = (x65-(x66<(x67&x68)));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	int32_t x70 = -129510509;
	uint64_t x71 = 3916494247522848942LLU;
	int8_t x72 = 0;
	volatile uint32_t t15 = UINT32_MAX;

	t15 = (x69-(x70<(x71&x72)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x73 = 4923836276633984LLU;
	static int16_t x74 = INT16_MIN;
	int8_t x75 = 62;
	int64_t x76 = INT64_MIN;
	volatile uint64_t t16 = 51LLU;

	t16 = (x73-(x74<(x75&x76)));

	if (t16 != 4923836276633983LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	static uint32_t x78 = 2896440U;
	static int64_t x79 = INT64_MAX;
	static uint64_t x80 = 81084065LLU;
	static int32_t t17 = -87527201;

	t17 = (x77-(x78<(x79&x80)));

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = UINT64_MAX;
	uint8_t x82 = UINT8_MAX;
	uint16_t x83 = UINT16_MAX;

	t18 = (x81-(x82<(x83&x84)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 4U;
	int32_t x88 = -1;

	t19 = (x85-(x86<(x87&x88)));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x89 = -1;
	volatile int32_t x90 = -6;
	int8_t x92 = -1;

	t20 = (x89-(x90<(x91&x92)));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = -1;
	int8_t x94 = INT8_MAX;
	int8_t x96 = INT8_MIN;

	t21 = (x93-(x94<(x95&x96)));

	if (t21 != -2) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x98 = 4932155746998925054LLU;
	int64_t x99 = -1LL;
	static uint16_t x100 = 1183U;
	int32_t t22 = -62;

	t22 = (x97-(x98<(x99&x100)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x102 = INT16_MIN;
	static int8_t x103 = INT8_MAX;
	int32_t t23 = 7;

	t23 = (x101-(x102<(x103&x104)));

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = INT8_MIN;
	static int8_t x106 = 19;
	static uint8_t x107 = 36U;
	volatile int8_t x108 = -1;
	volatile int32_t t24 = -3;

	t24 = (x105-(x106<(x107&x108)));

	if (t24 != -129) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = 1542U;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -1;
	volatile int16_t x116 = INT16_MAX;
	uint32_t t25 = 982U;

	t25 = (x113-(x114<(x115&x116)));

	if (t25 != 1541U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x117 = 9769187790371799LLU;
	static uint16_t x118 = 126U;
	volatile int32_t x119 = -4423;
	uint64_t x120 = 8493141290LLU;
	volatile uint64_t t26 = 356743112766LLU;

	t26 = (x117-(x118<(x119&x120)));

	if (t26 != 9769187790371798LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x121 = INT16_MIN;
	static volatile int64_t x122 = INT64_MAX;
	uint64_t x123 = UINT64_MAX;
	static int32_t x124 = -1;
	int32_t t27 = -629;

	t27 = (x121-(x122<(x123&x124)));

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = INT32_MAX;
	volatile uint8_t x127 = UINT8_MAX;
	int64_t t28 = INT64_MIN;

	t28 = (x125-(x126<(x127&x128)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	int32_t x130 = -121757977;
	int64_t x131 = 2428LL;
	int32_t x132 = -1;
	volatile int64_t t29 = -98003880879269LL;

	t29 = (x129-(x130<(x131&x132)));

	if (t29 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x134 = UINT16_MAX;
	uint8_t x135 = UINT8_MAX;
	static volatile int16_t x136 = 10;
	static int32_t t30 = 300641;

	t30 = (x133-(x134<(x135&x136)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 460868562853046LLU;
	int8_t x139 = INT8_MIN;
	static uint64_t t31 = 71LLU;

	t31 = (x137-(x138<(x139&x140)));

	if (t31 != 460868562853045LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -19;
	uint64_t x143 = 5461LLU;
	uint16_t x144 = 187U;
	volatile int32_t t32 = -1;

	t32 = (x141-(x142<(x143&x144)));

	if (t32 != -19) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = INT8_MIN;
	static int8_t x146 = -1;
	int8_t x147 = INT8_MAX;
	int32_t x148 = INT32_MAX;

	t33 = (x145-(x146<(x147&x148)));

	if (t33 != -129) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x150 = UINT8_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t34 = 0;

	t34 = (x149-(x150<(x151&x152)));

	if (t34 != 4478281) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x153 = INT32_MIN;
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MAX;
	int16_t x156 = -1;
	int32_t t35 = INT32_MIN;

	t35 = (x153-(x154<(x155&x156)));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int32_t x159 = -22243;

	t36 = (x157-(x158<(x159&x160)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = UINT16_MAX;
	int8_t x163 = INT8_MAX;
	int8_t x164 = INT8_MIN;
	int32_t t37 = -4;

	t37 = (x161-(x162<(x163&x164)));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = -1;
	static volatile int8_t x167 = -1;
	uint64_t x168 = 1188870LLU;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x165-(x166<(x167&x168)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 3672302U;
	uint64_t x170 = UINT64_MAX;
	int64_t x171 = INT64_MIN;
	int16_t x172 = 0;

	t39 = (x169-(x170<(x171&x172)));

	if (t39 != 3672302U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = INT8_MIN;
	int32_t x174 = -65;
	int16_t x175 = -9194;

	t40 = (x173-(x174<(x175&x176)));

	if (t40 != -129) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x178 = -1LL;
	uint32_t x179 = 1802U;
	static int64_t x180 = INT64_MIN;
	uint32_t t41 = 1U;

	t41 = (x177-(x178<(x179&x180)));

	if (t41 != 1242339739U) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x181 = UINT16_MAX;
	int64_t x182 = INT64_MIN;
	uint8_t x183 = 1U;
	static uint32_t x184 = 307U;
	volatile int32_t t42 = -202;

	t42 = (x181-(x182<(x183&x184)));

	if (t42 != 65534) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x185 = 8U;
	static volatile int8_t x188 = -1;
	static int32_t t43 = 196;

	t43 = (x185-(x186<(x187&x188)));

	if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = INT8_MIN;
	static uint32_t x190 = 465U;
	volatile int64_t x191 = -211667314LL;
	int32_t x192 = INT32_MIN;
	static int32_t t44 = 1254;

	t44 = (x189-(x190<(x191&x192)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 59536LLU;
	int16_t x194 = INT16_MIN;
	int64_t x195 = INT64_MIN;
	uint8_t x196 = UINT8_MAX;

	t45 = (x193-(x194<(x195&x196)));

	if (t45 != 59535LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x197 = INT16_MIN;
	static int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MAX;
	volatile uint16_t x200 = 17U;
	int32_t t46 = 3;

	t46 = (x197-(x198<(x199&x200)));

	if (t46 != -32769) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x202 = 0;
	uint32_t x203 = UINT32_MAX;
	int64_t x204 = INT64_MIN;
	volatile int32_t t47 = -27522848;

	t47 = (x201-(x202<(x203&x204)));

	if (t47 != 31371) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x205 = UINT16_MAX;
	uint64_t x206 = 4212028190730657LLU;
	static volatile uint8_t x207 = 67U;
	uint64_t x208 = 6106577460871LLU;
	int32_t t48 = 392394918;

	t48 = (x205-(x206<(x207&x208)));

	if (t48 != 65535) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = INT64_MIN;
	uint32_t x210 = UINT32_MAX;
	static int32_t x211 = INT32_MIN;
	volatile uint32_t x212 = 19372874U;
	volatile int64_t t49 = INT64_MIN;

	t49 = (x209-(x210<(x211&x212)));

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x214 = 0;
	static uint32_t x216 = 1070450894U;
	int32_t t50 = 372;

	t50 = (x213-(x214<(x215&x216)));

	if (t50 != -129) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x218 = INT32_MAX;
	uint32_t x220 = 2683U;
	volatile int32_t t51 = -2;

	t51 = (x217-(x218<(x219&x220)));

	if (t51 != 8) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x221 = INT32_MIN;
	int32_t x222 = INT32_MAX;
	static int8_t x223 = 29;
	int64_t x224 = INT64_MIN;
	static int32_t t52 = INT32_MIN;

	t52 = (x221-(x222<(x223&x224)));

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x225 = 89994LLU;
	volatile int64_t x226 = 773817937403050LL;
	volatile int32_t x227 = -18;
	volatile uint64_t t53 = 4LLU;

	t53 = (x225-(x226<(x227&x228)));

	if (t53 != 89994LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x229 = INT32_MIN;
	static volatile int64_t x231 = INT64_MIN;
	uint32_t x232 = UINT32_MAX;
	int32_t t54 = INT32_MIN;

	t54 = (x229-(x230<(x231&x232)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x234 = INT32_MIN;
	static int64_t x235 = INT64_MIN;
	volatile uint8_t x236 = UINT8_MAX;

	t55 = (x233-(x234<(x235&x236)));

	if (t55 != 38) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = 30;
	static int64_t x238 = -1LL;
	int32_t x239 = -1;
	volatile int8_t x240 = INT8_MIN;
	int32_t t56 = -3;

	t56 = (x237-(x238<(x239&x240)));

	if (t56 != 30) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x242 = UINT8_MAX;
	int32_t t57 = 732772;

	t57 = (x241-(x242<(x243&x244)));

	if (t57 != 542) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = INT16_MIN;
	int8_t x248 = 1;
	volatile int32_t t58 = 0;

	t58 = (x245-(x246<(x247&x248)));

	if (t58 != 1901) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x251 = 5U;
	int64_t x252 = 579LL;
	static volatile int64_t t59 = INT64_MIN;

	t59 = (x249-(x250<(x251&x252)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x253 = 126LLU;
	int8_t x254 = INT8_MIN;
	int16_t x255 = 43;
	int32_t x256 = INT32_MIN;
	uint64_t t60 = 8LLU;

	t60 = (x253-(x254<(x255&x256)));

	if (t60 != 125LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x258 = INT8_MAX;
	int16_t x259 = -1;
	uint16_t x260 = UINT16_MAX;
	static uint64_t t61 = 1LLU;

	t61 = (x257-(x258<(x259&x260)));

	if (t61 != 249903264668LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = -4126320673LL;
	uint32_t x263 = 2113336U;
	static int64_t x264 = -7874023263489LL;
	volatile int64_t t62 = -67861173706LL;

	t62 = (x261-(x262<(x263&x264)));

	if (t62 != -4126320673LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x265 = 64176U;
	uint16_t x266 = 980U;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	uint32_t t63 = 330U;

	t63 = (x265-(x266<(x267&x268)));

	if (t63 != 64176U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 11773927;
	volatile int16_t x271 = INT16_MIN;
	int64_t x272 = INT64_MAX;
	volatile int32_t t64 = 1;

	t64 = (x269-(x270<(x271&x272)));

	if (t64 != -129) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x273 = 0;
	uint16_t x274 = 15790U;
	static volatile int8_t x275 = INT8_MIN;
	volatile int32_t x276 = -1;
	static int32_t t65 = 128;

	t65 = (x273-(x274<(x275&x276)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x278 = 50276878670168LLU;
	uint32_t x279 = UINT32_MAX;
	uint8_t x280 = 24U;
	int32_t t66 = -255;

	t66 = (x277-(x278<(x279&x280)));

	if (t66 != 9) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = 20U;
	static int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint8_t x284 = UINT8_MAX;
	int32_t t67 = 41093;

	t67 = (x281-(x282<(x283&x284)));

	if (t67 != 19) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x289 = INT64_MAX;
	static uint64_t x292 = 285727LLU;
	volatile int64_t t68 = 29LL;

	t68 = (x289-(x290<(x291&x292)));

	if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = INT32_MAX;
	static volatile int32_t t69 = 723507429;

	t69 = (x293-(x294<(x295&x296)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = -29443936842583188LL;
	static int64_t x298 = -1LL;
	uint64_t x299 = 13100603145841LLU;
	uint8_t x300 = 7U;
	int64_t t70 = -13LL;

	t70 = (x297-(x298<(x299&x300)));

	if (t70 != -29443936842583188LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = INT8_MAX;
	int64_t x302 = -4145176LL;
	volatile int32_t x303 = -654481;
	int8_t x304 = INT8_MIN;
	volatile int32_t t71 = 7313655;

	t71 = (x301-(x302<(x303&x304)));

	if (t71 != 126) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x305 = UINT64_MAX;
	int32_t x306 = INT32_MIN;
	int32_t x307 = -3;
	volatile int32_t x308 = -980931458;

	t72 = (x305-(x306<(x307&x308)));

	if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x309 = UINT16_MAX;
	volatile int64_t x310 = INT64_MAX;
	volatile int64_t x311 = 1466868978LL;
	static volatile int32_t x312 = INT32_MIN;
	int32_t t73 = 142;

	t73 = (x309-(x310<(x311&x312)));

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x313 = -42950;
	static volatile int8_t x315 = 1;
	static volatile int32_t t74 = 122539035;

	t74 = (x313-(x314<(x315&x316)));

	if (t74 != -42950) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = -1LL;
	int32_t x318 = 976;
	uint32_t x320 = UINT32_MAX;
	int64_t t75 = -15264277300LL;

	t75 = (x317-(x318<(x319&x320)));

	if (t75 != -2LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x321 = UINT8_MAX;
	int64_t x322 = -14974LL;
	static int32_t x324 = 127474915;
	volatile int32_t t76 = 0;

	t76 = (x321-(x322<(x323&x324)));

	if (t76 != 254) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -3;
	uint8_t x326 = 43U;
	int8_t x327 = INT8_MAX;
	volatile int32_t t77 = -28675309;

	t77 = (x325-(x326<(x327&x328)));

	if (t77 != -3) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x330 = INT16_MIN;
	int32_t x331 = 44138;
	uint32_t x332 = UINT32_MAX;

	t78 = (x329-(x330<(x331&x332)));

	if (t78 != -32768) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = INT16_MAX;
	int32_t x334 = -1;
	static uint8_t x336 = 6U;
	static volatile int32_t t79 = 258926126;

	t79 = (x333-(x334<(x335&x336)));

	if (t79 != 32766) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = 72;
	int8_t x339 = INT8_MIN;
	static uint64_t x340 = UINT64_MAX;
	static int32_t t80 = -24900;

	t80 = (x337-(x338<(x339&x340)));

	if (t80 != -129) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x341 = -645;
	uint16_t x342 = UINT16_MAX;
	uint16_t x343 = 7U;
	int16_t x344 = 1;

	t81 = (x341-(x342<(x343&x344)));

	if (t81 != -645) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x345 = -1;
	int8_t x346 = -1;
	static volatile int16_t x347 = INT16_MIN;

	t82 = (x345-(x346<(x347&x348)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x349 = 0;
	int8_t x350 = INT8_MIN;
	int8_t x351 = 0;
	int32_t x352 = INT32_MIN;
	int32_t t83 = -955972;

	t83 = (x349-(x350<(x351&x352)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 52U;
	static volatile int32_t x354 = 104;
	int32_t x355 = -1;
	uint8_t x356 = 17U;
	int32_t t84 = -14921;

	t84 = (x353-(x354<(x355&x356)));

	if (t84 != 52) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MIN;
	static uint32_t x358 = 20014U;
	int16_t x359 = INT16_MAX;
	volatile uint8_t x360 = 54U;
	volatile int64_t t85 = INT64_MIN;

	t85 = (x357-(x358<(x359&x360)));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = INT32_MAX;
	uint32_t x366 = 37U;
	int8_t x367 = -1;
	int32_t t86 = INT32_MAX;

	t86 = (x365-(x366<(x367&x368)));

	if (t86 != INT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x369 = -1LL;
	static int64_t x370 = -1LL;
	static int16_t x371 = -1;
	int64_t t87 = 3691139LL;

	t87 = (x369-(x370<(x371&x372)));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x373 = 1100U;
	volatile int64_t x376 = -1LL;
	volatile int32_t t88 = 456615751;

	t88 = (x373-(x374<(x375&x376)));

	if (t88 != 1100) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -13216545LL;
	volatile int16_t x378 = INT16_MAX;
	uint32_t x380 = 786920873U;
	int64_t t89 = 9LL;

	t89 = (x377-(x378<(x379&x380)));

	if (t89 != -13216546LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x381 = INT8_MIN;
	int32_t x383 = -3451491;
	int32_t t90 = -1308601;

	t90 = (x381-(x382<(x383&x384)));

	if (t90 != -129) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -28;
	static volatile int16_t x387 = 0;

	t91 = (x385-(x386<(x387&x388)));

	if (t91 != -29) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x390 = INT16_MIN;
	uint64_t x391 = 2021LLU;
	int16_t x392 = 8;
	int64_t t92 = INT64_MAX;

	t92 = (x389-(x390<(x391&x392)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x393 = 39;
	int16_t x394 = INT16_MIN;
	int16_t x396 = INT16_MIN;
	int32_t t93 = -211135;

	t93 = (x393-(x394<(x395&x396)));

	if (t93 != 39) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = 281LL;
	static int8_t x399 = INT8_MAX;
	int64_t t94 = 28613339881726LL;

	t94 = (x397-(x398<(x399&x400)));

	if (t94 != 281LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x401 = 35U;
	volatile int32_t x402 = -57;
	static uint64_t x403 = UINT64_MAX;
	volatile int32_t t95 = 305017;

	t95 = (x401-(x402<(x403&x404)));

	if (t95 != 34) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = UINT32_MAX;
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = 2;
	int64_t x408 = INT64_MIN;
	uint32_t t96 = UINT32_MAX;

	t96 = (x405-(x406<(x407&x408)));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	int32_t x410 = -27892;
	uint16_t x412 = UINT16_MAX;

	t97 = (x409-(x410<(x411&x412)));

	if (t97 != 65534) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x413 = 188LL;
	int64_t x414 = -29829454685LL;
	int16_t x416 = INT16_MIN;
	volatile int64_t t98 = 59756426594248LL;

	t98 = (x413-(x414<(x415&x416)));

	if (t98 != 187LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x422 = INT32_MIN;
	uint64_t x423 = UINT64_MAX;
	static volatile int8_t x424 = 1;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x421-(x422<(x423&x424)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

