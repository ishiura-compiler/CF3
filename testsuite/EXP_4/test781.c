#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MAX;
volatile int16_t x9 = 567;
uint32_t x12 = 40620U;
static int8_t x15 = -1;
uint32_t x17 = 40U;
uint32_t t4 = 681687890U;
int16_t x26 = INT16_MIN;
uint32_t x27 = UINT32_MAX;
uint8_t x37 = 1U;
static int16_t x38 = -5522;
int32_t x44 = 1369871;
static int64_t x47 = INT64_MAX;
int64_t x49 = -2867365276816LL;
uint32_t x55 = 771242185U;
uint64_t x61 = 55270LLU;
uint16_t x69 = 5U;
uint64_t x73 = 244375980230464LLU;
int8_t x83 = INT8_MIN;
int64_t x84 = INT64_MIN;
int64_t x99 = INT64_MIN;
uint32_t x109 = UINT32_MAX;
int32_t x111 = INT32_MIN;
int8_t x119 = INT8_MIN;
int16_t x120 = INT16_MAX;
volatile int8_t x129 = 0;
int8_t x130 = INT8_MIN;
int32_t t29 = -402573;
int32_t t31 = -86318;
uint64_t x141 = 11LLU;
int32_t x149 = -1;
int8_t x156 = -1;
int32_t x157 = 5211;
int8_t x158 = 22;
volatile int8_t x159 = INT8_MAX;
static int32_t t37 = -96;
static volatile uint64_t t38 = UINT64_MAX;
int8_t x170 = INT8_MIN;
int32_t x179 = 162561306;
int32_t x181 = INT32_MIN;
static int16_t x182 = -1;
int64_t x188 = -1630LL;
uint16_t x189 = UINT16_MAX;
static volatile int32_t t44 = 0;
int32_t x195 = INT32_MIN;
static volatile int32_t x200 = INT32_MIN;
volatile int8_t x201 = INT8_MIN;
int8_t x204 = -1;
int16_t x211 = 187;
uint32_t x212 = 54U;
uint32_t x214 = 1U;
int8_t x221 = INT8_MIN;
static int16_t x226 = -1;
static int16_t x233 = -1;
volatile int16_t x235 = INT16_MIN;
static uint32_t x239 = 1039916620U;
volatile int64_t x240 = -1339577239270107091LL;
int64_t x250 = -1161040504728536570LL;
int32_t x252 = 1;
int32_t x255 = -1;
int64_t x261 = 3413904914763596088LL;
volatile int32_t x262 = 0;
volatile uint16_t x278 = UINT16_MAX;
int64_t t65 = -7LL;
static int8_t x284 = INT8_MIN;
volatile uint32_t t66 = 12509375U;
int64_t x285 = -1LL;
int64_t x288 = 257726896649LL;
static int64_t x302 = INT64_MIN;
int32_t x304 = INT32_MIN;
static int16_t x308 = INT16_MIN;
static volatile int64_t t72 = -135321716041613LL;
volatile int8_t x330 = 28;
uint64_t x333 = 219056438LLU;
volatile uint64_t t78 = 12873227478LLU;
static uint16_t x338 = UINT16_MAX;
volatile int32_t t80 = 520851;
volatile int16_t x350 = -1;
static int16_t x352 = INT16_MIN;
uint16_t x362 = UINT16_MAX;
static int32_t t84 = -21;
static int8_t x365 = INT8_MIN;
static int16_t x371 = INT16_MIN;
uint64_t x372 = 19525785476805016LLU;
volatile int32_t t86 = -28622;
uint32_t x377 = 819U;
static int16_t x383 = -1;
volatile int8_t x388 = 46;
int32_t x389 = -9334;
uint64_t x403 = UINT64_MAX;
int8_t x408 = INT8_MIN;
int64_t t95 = 7263LL;
int32_t x412 = INT32_MIN;
uint64_t x414 = 12272374129344LLU;
int16_t x415 = 22;


void f0(void) {
	static int8_t x1 = -1;
	volatile int16_t x2 = 0;
	volatile uint32_t x4 = 930U;
	volatile int32_t t0 = 72;

	t0 = (x1+(x2<(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x10 = INT16_MIN;
	int64_t x11 = -1949595911491225327LL;
	int32_t t1 = -140441;

	t1 = (x9+(x10<(x11%x12)));

	if (t1 != 568) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x13 = 1U;
	int16_t x14 = INT16_MIN;
	int8_t x16 = -1;
	int32_t t2 = -411395622;

	t2 = (x13+(x14<(x15%x16)));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = UINT8_MAX;
	static int32_t x19 = 591;
	int32_t x20 = 171;
	volatile uint32_t t3 = 5U;

	t3 = (x17+(x18<(x19%x20)));

	if (t3 != 40U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x21 = UINT32_MAX;
	int64_t x22 = INT64_MIN;
	static int32_t x23 = 161635;
	uint8_t x24 = UINT8_MAX;

	t4 = (x21+(x22<(x23%x24)));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x25 = INT32_MIN;
	int8_t x28 = -2;
	volatile int32_t t5 = INT32_MIN;

	t5 = (x25+(x26<(x27%x28)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1802;
	static uint32_t x30 = UINT32_MAX;
	static int8_t x31 = -3;
	static int16_t x32 = INT16_MAX;
	int32_t t6 = 398108163;

	t6 = (x29+(x30<(x31%x32)));

	if (t6 != -1802) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	static int16_t x34 = INT16_MIN;
	int8_t x35 = -3;
	uint32_t x36 = 2U;
	static int32_t t7 = 1;

	t7 = (x33+(x34<(x35%x36)));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x39 = INT16_MAX;
	int64_t x40 = 6618562754LL;
	volatile int32_t t8 = -3;

	t8 = (x37+(x38<(x39%x40)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = -1LL;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MIN;
	int64_t t9 = 2011LL;

	t9 = (x41+(x42<(x43%x44)));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -181806298;
	uint16_t x46 = UINT16_MAX;
	int64_t x48 = INT64_MAX;
	int32_t t10 = 1;

	t10 = (x45+(x46<(x47%x48)));

	if (t10 != -181806298) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = -61;
	int16_t x51 = INT16_MAX;
	int8_t x52 = INT8_MAX;
	volatile int64_t t11 = -1939110795297271LL;

	t11 = (x49+(x50<(x51%x52)));

	if (t11 != -2867365276815LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x53 = 60070832U;
	static volatile uint32_t x54 = UINT32_MAX;
	int16_t x56 = 3;
	static uint32_t t12 = 1U;

	t12 = (x53+(x54<(x55%x56)));

	if (t12 != 60070832U) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	static int32_t x58 = -552085;
	uint16_t x59 = UINT16_MAX;
	int64_t x60 = INT64_MAX;
	int32_t t13 = -491966414;

	t13 = (x57+(x58<(x59%x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x62 = 26U;
	int8_t x63 = -1;
	uint16_t x64 = 187U;
	volatile uint64_t t14 = 47069LLU;

	t14 = (x61+(x62<(x63%x64)));

	if (t14 != 55270LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x70 = INT16_MAX;
	volatile int8_t x71 = -1;
	int64_t x72 = -1LL;
	volatile int32_t t15 = 2;

	t15 = (x69+(x70<(x71%x72)));

	if (t15 != 5) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = INT64_MAX;
	uint8_t x75 = 1U;
	volatile uint8_t x76 = UINT8_MAX;
	volatile uint64_t t16 = 234LLU;

	t16 = (x73+(x74<(x75%x76)));

	if (t16 != 244375980230464LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -77;
	static int16_t x82 = -14;
	volatile int32_t t17 = -1161;

	t17 = (x81+(x82<(x83%x84)));

	if (t17 != -77) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = 7540;
	static uint16_t x86 = 31973U;
	uint16_t x87 = 556U;
	uint32_t x88 = UINT32_MAX;
	volatile int32_t t18 = -233;

	t18 = (x85+(x86<(x87%x88)));

	if (t18 != 7540) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = -1;
	int64_t x90 = -1LL;
	volatile int64_t x91 = -1LL;
	uint16_t x92 = 4349U;
	int32_t t19 = -260;

	t19 = (x89+(x90<(x91%x92)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 3U;
	static volatile int16_t x94 = -1294;
	static int16_t x95 = INT16_MIN;
	int32_t x96 = -4;
	int32_t t20 = 10439146;

	t20 = (x93+(x94<(x95%x96)));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	volatile int16_t x98 = INT16_MIN;
	int16_t x100 = -1;
	volatile int32_t t21 = -100369823;

	t21 = (x97+(x98<(x99%x100)));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = 1;
	uint64_t x103 = 240694719632095946LLU;
	int8_t x104 = INT8_MIN;
	volatile int64_t t22 = -42451LL;

	t22 = (x101+(x102<(x103%x104)));

	if (t22 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = INT64_MIN;
	int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	int64_t x108 = -1LL;
	int64_t t23 = 0LL;

	t23 = (x105+(x106<(x107%x108)));

	if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x110 = INT32_MIN;
	int64_t x112 = -1LL;
	volatile uint32_t t24 = 100U;

	t24 = (x109+(x110<(x111%x112)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = 678U;
	uint64_t x116 = 1750343864629433LLU;
	int32_t t25 = -205027;

	t25 = (x113+(x114<(x115%x116)));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = 1;
	uint8_t x118 = 67U;
	static volatile int32_t t26 = 15;

	t26 = (x117+(x118<(x119%x120)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = -26159148896LL;
	int32_t x122 = INT32_MAX;
	int16_t x123 = 1;
	int64_t x124 = INT64_MAX;
	volatile int64_t t27 = -88LL;

	t27 = (x121+(x122<(x123%x124)));

	if (t27 != -26159148896LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = INT16_MIN;
	int64_t x126 = -32590LL;
	volatile int16_t x127 = -19;
	int32_t x128 = -1;
	int32_t t28 = 303;

	t28 = (x125+(x126<(x127%x128)));

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x131 = 7;
	uint32_t x132 = 3U;

	t29 = (x129+(x130<(x131%x132)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x133 = -10837;
	int8_t x134 = -14;
	int16_t x135 = -1;
	static volatile int32_t x136 = INT32_MAX;
	volatile int32_t t30 = 1;

	t30 = (x133+(x134<(x135%x136)));

	if (t30 != -10836) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x137 = 215;
	int16_t x138 = -3;
	volatile int8_t x139 = 6;
	int8_t x140 = INT8_MIN;

	t31 = (x137+(x138<(x139%x140)));

	if (t31 != 216) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x142 = -1LL;
	static uint64_t x143 = 360LLU;
	int16_t x144 = 10449;
	volatile uint64_t t32 = 903368340219LLU;

	t32 = (x141+(x142<(x143%x144)));

	if (t32 != 11LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x145 = INT8_MIN;
	int8_t x146 = -1;
	int64_t x147 = -1LL;
	int16_t x148 = -1;
	int32_t t33 = -8;

	t33 = (x145+(x146<(x147%x148)));

	if (t33 != -127) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x150 = 0;
	int8_t x151 = -4;
	int64_t x152 = -1LL;
	volatile int32_t t34 = 4542;

	t34 = (x149+(x150<(x151%x152)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x153 = UINT16_MAX;
	int8_t x154 = -1;
	uint32_t x155 = 74862U;
	volatile int32_t t35 = -1;

	t35 = (x153+(x154<(x155%x156)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x160 = INT32_MAX;
	volatile int32_t t36 = -994;

	t36 = (x157+(x158<(x159%x160)));

	if (t36 != 5212) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x161 = 0U;
	int8_t x162 = 1;
	uint8_t x163 = UINT8_MAX;
	static int32_t x164 = 478;

	t37 = (x161+(x162<(x163%x164)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x166 = 2240156530356430687LL;
	static uint64_t x167 = 1120168721313617932LLU;
	int64_t x168 = 17610LL;

	t38 = (x165+(x166<(x167%x168)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = INT32_MIN;
	static int8_t x171 = 61;
	int8_t x172 = -1;
	volatile int32_t t39 = 103;

	t39 = (x169+(x170<(x171%x172)));

	if (t39 != -2147483647) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x173 = 228U;
	uint64_t x174 = 28519597LLU;
	int32_t x175 = INT32_MAX;
	int8_t x176 = -1;
	uint32_t t40 = 33210242U;

	t40 = (x173+(x174<(x175%x176)));

	if (t40 != 228U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = -1;
	int32_t x180 = INT32_MIN;
	static int32_t t41 = -164079;

	t41 = (x177+(x178<(x179%x180)));

	if (t41 != -2147483647) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x183 = -1;
	int16_t x184 = 1354;
	volatile int32_t t42 = INT32_MIN;

	t42 = (x181+(x182<(x183%x184)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = 1U;
	uint8_t x186 = 1U;
	int32_t x187 = INT32_MIN;
	volatile uint32_t t43 = 256596U;

	t43 = (x185+(x186<(x187%x188)));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x190 = INT8_MAX;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;

	t44 = (x189+(x190<(x191%x192)));

	if (t44 != 65535) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	uint32_t x196 = UINT32_MAX;
	static int32_t t45 = 1393;

	t45 = (x193+(x194<(x195%x196)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = UINT16_MAX;
	int16_t x198 = 417;
	uint32_t x199 = 22U;
	int32_t t46 = 5;

	t46 = (x197+(x198<(x199%x200)));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x202 = 1358972607U;
	static int16_t x203 = INT16_MAX;
	volatile int32_t t47 = 5128612;

	t47 = (x201+(x202<(x203%x204)));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = 1U;
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MIN;
	int32_t t48 = -3771270;

	t48 = (x205+(x206<(x207%x208)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = INT64_MAX;
	int8_t x210 = INT8_MIN;
	static volatile int64_t t49 = INT64_MAX;

	t49 = (x209+(x210<(x211%x212)));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x213 = INT16_MAX;
	uint64_t x215 = 58203198206LLU;
	uint64_t x216 = 75207LLU;
	int32_t t50 = -9217;

	t50 = (x213+(x214<(x215%x216)));

	if (t50 != 32768) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	int16_t x218 = INT16_MIN;
	volatile int8_t x219 = -7;
	int32_t x220 = INT32_MIN;
	volatile int32_t t51 = -3165;

	t51 = (x217+(x218<(x219%x220)));

	if (t51 != -32767) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x222 = UINT32_MAX;
	volatile int32_t x223 = INT32_MIN;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t52 = -4038117;

	t52 = (x221+(x222<(x223%x224)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x225 = -43;
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MAX;
	volatile int32_t t53 = 3;

	t53 = (x225+(x226<(x227%x228)));

	if (t53 != -43) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = -72557LL;
	static uint64_t x230 = 4LLU;
	volatile int16_t x231 = 0;
	int32_t x232 = INT32_MAX;
	int64_t t54 = -6056LL;

	t54 = (x229+(x230<(x231%x232)));

	if (t54 != -72557LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x234 = INT32_MAX;
	int16_t x236 = -1;
	volatile int32_t t55 = -12;

	t55 = (x233+(x234<(x235%x236)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = -1;
	int64_t x238 = -1LL;
	int32_t t56 = -1495909;

	t56 = (x237+(x238<(x239%x240)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x241 = 144013030030915871LLU;
	uint8_t x242 = 1U;
	int16_t x243 = -2612;
	static int16_t x244 = -1;
	volatile uint64_t t57 = 422083344692LLU;

	t57 = (x241+(x242<(x243%x244)));

	if (t57 != 144013030030915871LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 701;
	static int16_t x246 = -1;
	int8_t x247 = INT8_MIN;
	static volatile uint64_t x248 = UINT64_MAX;
	volatile int32_t t58 = -6;

	t58 = (x245+(x246<(x247%x248)));

	if (t58 != 701) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = UINT8_MAX;
	static uint16_t x251 = 16213U;
	volatile int32_t t59 = 439;

	t59 = (x249+(x250<(x251%x252)));

	if (t59 != 256) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x253 = INT64_MIN;
	static int32_t x254 = -1;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t60 = INT64_MIN;

	t60 = (x253+(x254<(x255%x256)));

	if (t60 != INT64_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x257 = -16;
	int64_t x258 = INT64_MIN;
	volatile uint8_t x259 = UINT8_MAX;
	int16_t x260 = INT16_MAX;
	int32_t t61 = -14539;

	t61 = (x257+(x258<(x259%x260)));

	if (t61 != -15) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x263 = 4U;
	int32_t x264 = -1;
	static volatile int64_t t62 = 161146827234150LL;

	t62 = (x261+(x262<(x263%x264)));

	if (t62 != 3413904914763596088LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x265 = INT32_MIN;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = INT32_MIN;
	uint8_t x268 = UINT8_MAX;
	static volatile int32_t t63 = 5338;

	t63 = (x265+(x266<(x267%x268)));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 165U;
	uint32_t x270 = 1897U;
	int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MAX;
	static volatile int32_t t64 = -1952757;

	t64 = (x269+(x270<(x271%x272)));

	if (t64 != 165) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = 1122026128709743LL;
	static int16_t x279 = 7;
	int64_t x280 = INT64_MIN;

	t65 = (x277+(x278<(x279%x280)));

	if (t65 != 1122026128709743LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 488462U;
	static int16_t x282 = INT16_MIN;
	int64_t x283 = INT64_MAX;

	t66 = (x281+(x282<(x283%x284)));

	if (t66 != 488463U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x286 = -1;
	static int8_t x287 = -7;
	volatile int64_t t67 = 0LL;

	t67 = (x285+(x286<(x287%x288)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x289 = 35322009U;
	uint16_t x290 = UINT16_MAX;
	static int16_t x291 = INT16_MAX;
	uint8_t x292 = 3U;
	volatile uint32_t t68 = 15235791U;

	t68 = (x289+(x290<(x291%x292)));

	if (t68 != 35322009U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x293 = 24011790018603LLU;
	volatile int64_t x294 = INT64_MAX;
	int8_t x295 = 1;
	int32_t x296 = INT32_MAX;
	static volatile uint64_t t69 = 765174LLU;

	t69 = (x293+(x294<(x295%x296)));

	if (t69 != 24011790018603LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = -1;
	static uint8_t x298 = 41U;
	uint8_t x299 = 12U;
	int32_t x300 = -1;
	int32_t t70 = 351;

	t70 = (x297+(x298<(x299%x300)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x301 = -1;
	int8_t x303 = INT8_MIN;
	volatile int32_t t71 = 89776863;

	t71 = (x301+(x302<(x303%x304)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -3574903648913LL;
	volatile uint32_t x306 = 16837U;
	static int64_t x307 = 32382290LL;

	t72 = (x305+(x306<(x307%x308)));

	if (t72 != -3574903648913LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x309 = 8602506733909LLU;
	int64_t x310 = INT64_MIN;
	uint16_t x311 = UINT16_MAX;
	volatile int16_t x312 = -1;
	uint64_t t73 = 27547227244704844LLU;

	t73 = (x309+(x310<(x311%x312)));

	if (t73 != 8602506733910LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = INT16_MAX;
	int16_t x314 = INT16_MIN;
	int16_t x315 = -16341;
	static int16_t x316 = -70;
	int32_t t74 = -1;

	t74 = (x313+(x314<(x315%x316)));

	if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x317 = INT8_MIN;
	volatile int16_t x318 = INT16_MIN;
	int16_t x319 = 2545;
	int32_t x320 = 804249;
	volatile int32_t t75 = 557;

	t75 = (x317+(x318<(x319%x320)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 10269333304LLU;
	int64_t x326 = -1LL;
	int64_t x327 = INT64_MIN;
	volatile uint16_t x328 = UINT16_MAX;
	static volatile uint64_t t76 = 1650304399179845306LLU;

	t76 = (x325+(x326<(x327%x328)));

	if (t76 != 10269333304LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = 2212841755LL;
	uint8_t x331 = 6U;
	int64_t x332 = INT64_MAX;
	int64_t t77 = 6546LL;

	t77 = (x329+(x330<(x331%x332)));

	if (t77 != 2212841755LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x334 = 259U;
	int64_t x335 = 2016423LL;
	volatile int16_t x336 = INT16_MIN;

	t78 = (x333+(x334<(x335%x336)));

	if (t78 != 219056439LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x337 = 2962U;
	volatile uint8_t x339 = 1U;
	static int16_t x340 = INT16_MAX;
	int32_t t79 = -40784013;

	t79 = (x337+(x338<(x339%x340)));

	if (t79 != 2962) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = INT32_MIN;
	int8_t x342 = INT8_MIN;
	static int64_t x343 = INT64_MIN;
	static uint32_t x344 = 15U;

	t80 = (x341+(x342<(x343%x344)));

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x349 = -10012;
	uint8_t x351 = 0U;
	int32_t t81 = 853206;

	t81 = (x349+(x350<(x351%x352)));

	if (t81 != -10011) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x353 = 119U;
	int8_t x354 = INT8_MIN;
	uint32_t x355 = 4415445U;
	int8_t x356 = -44;
	static int32_t t82 = -5977497;

	t82 = (x353+(x354<(x355%x356)));

	if (t82 != 119) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x357 = INT64_MIN;
	volatile int64_t x358 = INT64_MAX;
	int32_t x359 = -1;
	int64_t x360 = INT64_MIN;
	volatile int64_t t83 = INT64_MIN;

	t83 = (x357+(x358<(x359%x360)));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = 4U;
	int64_t x363 = 5232198LL;
	int32_t x364 = -15777;

	t84 = (x361+(x362<(x363%x364)));

	if (t84 != 4) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x366 = 14221U;
	static int32_t x367 = -1;
	int64_t x368 = INT64_MAX;
	int32_t t85 = -794374;

	t85 = (x365+(x366<(x367%x368)));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x369 = 2;
	int8_t x370 = INT8_MAX;

	t86 = (x369+(x370<(x371%x372)));

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x373 = INT32_MIN;
	int16_t x374 = -15120;
	volatile uint8_t x375 = 0U;
	volatile uint64_t x376 = UINT64_MAX;
	int32_t t87 = INT32_MIN;

	t87 = (x373+(x374<(x375%x376)));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x378 = -30665300LL;
	uint64_t x379 = 2264751959922LLU;
	static uint16_t x380 = 2641U;
	uint32_t t88 = 52474962U;

	t88 = (x377+(x378<(x379%x380)));

	if (t88 != 819U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = 6LL;
	int16_t x382 = INT16_MIN;
	static uint64_t x384 = UINT64_MAX;
	int64_t t89 = 1LL;

	t89 = (x381+(x382<(x383%x384)));

	if (t89 != 6LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = INT32_MIN;
	volatile int16_t x386 = -1141;
	volatile uint32_t x387 = UINT32_MAX;
	int32_t t90 = INT32_MIN;

	t90 = (x385+(x386<(x387%x388)));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x390 = INT8_MAX;
	uint16_t x391 = 1554U;
	int16_t x392 = 495;
	int32_t t91 = 276086;

	t91 = (x389+(x390<(x391%x392)));

	if (t91 != -9334) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x393 = 5U;
	volatile int32_t x394 = INT32_MAX;
	volatile uint16_t x395 = UINT16_MAX;
	static int32_t x396 = INT32_MIN;
	uint32_t t92 = 2045153U;

	t92 = (x393+(x394<(x395%x396)));

	if (t92 != 5U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x397 = INT64_MIN;
	volatile int32_t x398 = -95;
	volatile int16_t x399 = INT16_MAX;
	int32_t x400 = -1;
	static int64_t t93 = 774456811231474288LL;

	t93 = (x397+(x398<(x399%x400)));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x401 = UINT8_MAX;
	uint64_t x402 = 398296576019LLU;
	int16_t x404 = -6605;
	volatile int32_t t94 = -1;

	t94 = (x401+(x402<(x403%x404)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = INT64_MIN;
	volatile uint8_t x406 = 7U;
	uint64_t x407 = 59LLU;

	t95 = (x405+(x406<(x407%x408)));

	if (t95 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = 94U;
	uint8_t x410 = 58U;
	static volatile uint16_t x411 = UINT16_MAX;
	static int32_t t96 = -618322;

	t96 = (x409+(x410<(x411%x412)));

	if (t96 != 95) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x413 = INT64_MIN;
	int8_t x416 = INT8_MIN;
	volatile int64_t t97 = INT64_MIN;

	t97 = (x413+(x414<(x415%x416)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = INT8_MAX;
	uint32_t x418 = UINT32_MAX;
	static int8_t x419 = INT8_MIN;
	uint16_t x420 = 1029U;
	int32_t t98 = 1241958;

	t98 = (x417+(x418<(x419%x420)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = INT64_MAX;
	volatile int8_t x422 = INT8_MAX;
	int32_t x423 = 277342876;
	volatile int8_t x424 = 1;
	int64_t t99 = INT64_MAX;

	t99 = (x421+(x422<(x423%x424)));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

