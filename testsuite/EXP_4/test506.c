#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 4213560;
static uint8_t x3 = 64U;
int32_t x10 = INT32_MIN;
int16_t x11 = INT16_MIN;
int16_t x12 = INT16_MIN;
static volatile uint64_t t3 = 164888LLU;
static int8_t x23 = -1;
int64_t t4 = INT64_MAX;
int8_t x25 = INT8_MIN;
int32_t x30 = INT32_MIN;
int32_t x35 = -697617902;
int16_t x39 = 14;
static int64_t t9 = -57990LL;
volatile int64_t x46 = INT64_MAX;
static volatile uint64_t t10 = 515957747925704LLU;
uint32_t x49 = 47536646U;
int64_t x54 = INT64_MIN;
int64_t t12 = -6935561675127LL;
int32_t x58 = INT32_MIN;
static uint16_t x59 = UINT16_MAX;
static int16_t x69 = -3;
static int64_t x79 = INT64_MIN;
int32_t x81 = INT32_MIN;
uint64_t x83 = 0LLU;
int64_t x85 = INT64_MIN;
uint64_t x86 = 376080978960999LLU;
int16_t x91 = INT16_MIN;
volatile int8_t x97 = INT8_MAX;
int8_t x99 = -14;
int16_t x103 = INT16_MIN;
static volatile uint64_t x108 = 6277LLU;
int64_t t23 = -1LL;
static volatile uint8_t x123 = UINT8_MAX;
int8_t x124 = -1;
int8_t x136 = -25;
int64_t x140 = -1LL;
volatile uint64_t t29 = 2550855459LLU;
int8_t x148 = -10;
static uint32_t x151 = 612863U;
int8_t x152 = -11;
volatile uint32_t t31 = 3550046U;
int32_t x166 = INT32_MAX;
int8_t x169 = -1;
int32_t x170 = INT32_MIN;
volatile int32_t t34 = -30;
static uint64_t x184 = 20322752038619690LLU;
static uint16_t x186 = UINT16_MAX;
volatile uint64_t t38 = 566847447689644LLU;
int8_t x194 = INT8_MIN;
uint16_t x197 = UINT16_MAX;
int32_t t40 = 0;
static uint16_t x208 = 99U;
volatile int8_t x215 = -1;
volatile int16_t x217 = 614;
volatile uint32_t x218 = 350U;
uint32_t x220 = 17U;
uint32_t t44 = 49U;
uint64_t x236 = UINT64_MAX;
uint16_t x238 = UINT16_MAX;
volatile uint16_t x239 = 3U;
static int32_t x251 = -143;
int16_t x259 = 1;
uint16_t x270 = 1U;
int64_t t52 = 139LL;
int16_t x291 = INT16_MIN;
int16_t x308 = INT16_MIN;
int64_t x313 = INT64_MIN;
int64_t x315 = -1LL;
static volatile int32_t t64 = -79103378;
volatile uint32_t t65 = 79U;
static int8_t x349 = -36;
uint16_t x350 = 1U;
int64_t t66 = 685LL;
int16_t x361 = INT16_MIN;
uint32_t x380 = 70U;
int64_t t71 = 64LL;
int64_t x389 = INT64_MIN;
uint64_t x390 = UINT64_MAX;
uint64_t t72 = 3583665LLU;
int8_t x394 = -1;
uint16_t x401 = 934U;
int8_t x407 = 0;
uint64_t t77 = 17330177401LLU;
int64_t t80 = -715436184344177787LL;
static int32_t x448 = -1;
static uint64_t x451 = 755924640034LLU;
static uint8_t x453 = 19U;
volatile int64_t x454 = -1LL;
uint16_t x455 = UINT16_MAX;
uint32_t x458 = UINT32_MAX;
int16_t x459 = INT16_MIN;
uint32_t x460 = 146990U;
volatile uint32_t t88 = 515530839U;
int16_t x495 = -237;
volatile int16_t x503 = INT16_MAX;
int16_t x505 = INT16_MIN;
int8_t x508 = INT8_MIN;
static uint64_t x512 = 1996859197LLU;
int64_t t97 = 194274194LL;
int16_t x527 = INT16_MIN;
volatile int32_t t99 = -2767633;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x4 = INT8_MAX;
	int32_t t0 = INT32_MAX;

	t0 = (x1|(x2^(x3*x4)));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -32308471734LL;
	int16_t x6 = -1;
	int32_t x7 = -1;
	static volatile int16_t x8 = INT16_MAX;
	int64_t t1 = -1LL;

	t1 = (x5|(x6^(x7*x8)));

	if (t1 != -32308461570LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MIN;
	volatile int32_t t2 = -1284;

	t2 = (x9|(x10^(x11*x12)));

	if (t2 != -1073741824) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 2504570504861400789LLU;
	uint8_t x14 = UINT8_MAX;
	uint8_t x15 = 4U;
	static int8_t x16 = -1;

	t3 = (x13|(x14^(x15*x16)));

	if (t3 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int32_t x22 = 685;
	int8_t x24 = INT8_MIN;

	t4 = (x21|(x22^(x23*x24)));

	if (t4 != INT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x26 = INT16_MIN;
	int64_t x27 = -55336224131001LL;
	int16_t x28 = -23;
	int64_t t5 = 158150404231665LL;

	t5 = (x25|(x26^(x27*x28)));

	if (t5 != -97LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = UINT32_MAX;
	int8_t x31 = -14;
	uint64_t x32 = 7733323636782175LLU;
	volatile uint64_t t6 = 46637827LLU;

	t6 = (x29|(x30^(x31*x32)));

	if (t6 != 108266534870188031LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = 258688;
	int8_t x34 = 18;
	int64_t x36 = -1LL;
	int64_t t7 = -418LL;

	t7 = (x33|(x34^(x35*x36)));

	if (t7 != 697827324LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MAX;
	int32_t x38 = INT32_MIN;
	static int64_t x40 = -9432945599171LL;
	volatile int64_t t8 = INT64_MAX;

	t8 = (x37|(x38^(x39*x40)));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x41 = 12;
	uint32_t x42 = UINT32_MAX;
	static int64_t x43 = -1LL;
	volatile int16_t x44 = -1;

	t9 = (x41|(x42^(x43*x44)));

	if (t9 != 4294967294LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	uint64_t x47 = 314483077844139959LLU;
	static volatile int32_t x48 = INT32_MIN;

	t10 = (x45|(x46^(x47*x48)));

	if (t10 != 3990963169269907455LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = INT8_MAX;
	volatile int32_t x51 = -1;
	int16_t x52 = -1;
	uint32_t t11 = 15199116U;

	t11 = (x49|(x50^(x51*x52)));

	if (t11 != 47536766U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = UINT16_MAX;
	int8_t x55 = 1;
	uint8_t x56 = 0U;

	t12 = (x53|(x54^(x55*x56)));

	if (t12 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = INT8_MIN;
	uint16_t x60 = 26369U;
	static int32_t t13 = 2664;

	t13 = (x57|(x58^(x59*x60)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	int8_t x72 = INT8_MIN;
	volatile int32_t t14 = -217348;

	t14 = (x69|(x70^(x71*x72)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x73 = 1552U;
	uint32_t x74 = 646U;
	uint32_t x75 = 13513U;
	volatile uint8_t x76 = UINT8_MAX;
	static volatile uint32_t t15 = 7857529U;

	t15 = (x73|(x74^(x75*x76)));

	if (t15 != 3446449U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = -863900;
	int16_t x78 = -17;
	int8_t x80 = 0;
	int64_t t16 = -2653LL;

	t16 = (x77|(x78^(x79*x80)));

	if (t16 != -17LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x82 = INT16_MIN;
	int64_t x84 = -68815694301LL;
	static uint64_t t17 = 3627611931918415806LLU;

	t17 = (x81|(x82^(x83*x84)));

	if (t17 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x87 = 5686551872627451LLU;
	int16_t x88 = -10587;
	uint64_t t18 = 35603150578LLU;

	t18 = (x85|(x86^(x87*x88)));

	if (t18 != 13583783694037680032LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 1LLU;
	uint32_t x90 = 74427U;
	int32_t x92 = -1;
	volatile uint64_t t19 = 11527835235654502LLU;

	t19 = (x89|(x90^(x91*x92)));

	if (t19 != 107195LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x98 = UINT16_MAX;
	uint8_t x100 = UINT8_MAX;
	int32_t t20 = -587255;

	t20 = (x97|(x98^(x99*x100)));

	if (t20 != -61953) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x101 = 5U;
	int32_t x102 = INT32_MIN;
	volatile uint16_t x104 = 7048U;
	static int32_t t21 = 8920;

	t21 = (x101|(x102^(x103*x104)));

	if (t21 != 1916534789) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -2LL;
	int16_t x106 = 3;
	int64_t x107 = -1LL;
	uint64_t t22 = 7774619LLU;

	t22 = (x105|(x106^(x107*x108)));

	if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x109 = -6;
	int64_t x110 = 386868LL;
	volatile int32_t x111 = INT32_MIN;
	volatile uint32_t x112 = 293U;

	t23 = (x109|(x110^(x111*x112)));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 99U;
	volatile int64_t x114 = INT64_MAX;
	int16_t x115 = -521;
	int32_t x116 = 224756;
	int64_t t24 = 3LL;

	t24 = (x113|(x114^(x115*x116)));

	if (t24 != -9223372036737677837LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x117 = -1LL;
	int8_t x118 = INT8_MIN;
	int64_t x119 = 1444623682452805LL;
	uint16_t x120 = 123U;
	int64_t t25 = -28224372LL;

	t25 = (x117|(x118^(x119*x120)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x121 = -674;
	static int32_t x122 = 353196;
	int32_t t26 = -38;

	t26 = (x121|(x122^(x123*x124)));

	if (t26 != -513) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 205U;
	int8_t x126 = 0;
	static int8_t x127 = 12;
	uint8_t x128 = 12U;
	uint32_t t27 = 0U;

	t27 = (x125|(x126^(x127*x128)));

	if (t27 != 221U) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 19452U;
	int8_t x134 = -4;
	int64_t x135 = -20760322834040LL;
	int64_t t28 = -49784417904LL;

	t28 = (x133|(x134^(x135*x136)));

	if (t28 != -519008070832132LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x137 = 16U;
	uint64_t x138 = UINT64_MAX;
	int16_t x139 = -1;

	t29 = (x137|(x138^(x139*x140)));

	if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x145 = 19U;
	int64_t x146 = -1LL;
	uint32_t x147 = 387634740U;
	static int64_t t30 = 27759408LL;

	t30 = (x145|(x146^(x147*x148)));

	if (t30 != -418619881LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 16537U;
	volatile int8_t x150 = 3;

	t31 = (x149|(x150^(x151*x152)));

	if (t31 != 4288242329U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MAX;
	static int64_t x163 = -1LL;
	static int32_t x164 = -1;
	static volatile int64_t t32 = 1144421224623095763LL;

	t32 = (x161|(x162^(x163*x164)));

	if (t32 != 32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 81U;
	uint32_t x167 = 985U;
	static int16_t x168 = 0;
	volatile uint32_t t33 = 29U;

	t33 = (x165|(x166^(x167*x168)));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x171 = 17U;
	int16_t x172 = -103;

	t34 = (x169|(x170^(x171*x172)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x173 = INT32_MAX;
	static volatile int64_t x174 = INT64_MIN;
	volatile uint64_t x175 = 275451026494LLU;
	uint32_t x176 = 1812723024U;
	uint64_t t35 = 33143700909175617LLU;

	t35 = (x173|(x174^(x175*x176)));

	if (t35 != 10477699757282164735LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x177 = 654824826124650942LLU;
	int64_t x178 = INT64_MIN;
	int64_t x179 = 522750429LL;
	static int32_t x180 = 1;
	static uint64_t t36 = 10359289LLU;

	t36 = (x177|(x178^(x179*x180)));

	if (t36 != 9878196862982081023LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = -3635;
	uint16_t x182 = 17776U;
	int16_t x183 = -1;
	static volatile uint64_t t37 = 264059853947992LLU;

	t37 = (x181|(x182^(x183*x184)));

	if (t37 != 18446744073709548015LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x185 = 30U;
	volatile uint64_t x187 = UINT64_MAX;
	int16_t x188 = INT16_MIN;

	t38 = (x185|(x186^(x187*x188)));

	if (t38 != 32767LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x193 = -1;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = -1LL;
	int64_t t39 = 2247705525LL;

	t39 = (x193|(x194^(x195*x196)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x198 = UINT8_MAX;
	volatile uint16_t x199 = 0U;
	static int16_t x200 = INT16_MIN;

	t40 = (x197|(x198^(x199*x200)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x205 = 4U;
	uint16_t x206 = UINT16_MAX;
	volatile int16_t x207 = INT16_MAX;
	volatile int32_t t41 = 70347845;

	t41 = (x205|(x206^(x207*x208)));

	if (t41 != 3244134) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x209 = 5824;
	volatile int32_t x210 = INT32_MIN;
	static int32_t x211 = -1;
	static int8_t x212 = -1;
	int32_t t42 = 6524;

	t42 = (x209|(x210^(x211*x212)));

	if (t42 != -2147477823) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MAX;
	int16_t x216 = -1873;
	int32_t t43 = 21271;

	t43 = (x213|(x214^(x215*x216)));

	if (t43 != -2147481810) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x219 = -1;

	t44 = (x217|(x218^(x219*x220)));

	if (t44 != 4294967031U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x225 = INT16_MIN;
	int32_t x226 = -1;
	uint16_t x227 = 302U;
	int64_t x228 = -1LL;
	static int64_t t45 = 434907490515702938LL;

	t45 = (x225|(x226^(x227*x228)));

	if (t45 != -32467LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = INT16_MAX;
	uint16_t x234 = UINT16_MAX;
	static int64_t x235 = INT64_MIN;
	volatile uint64_t t46 = 71613624LLU;

	t46 = (x233|(x234^(x235*x236)));

	if (t46 != 9223372036854841343LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x237 = 112U;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t47 = -75;

	t47 = (x237|(x238^(x239*x240)));

	if (t47 != -65153) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x249 = 186470U;
	static volatile int32_t x250 = INT32_MIN;
	int16_t x252 = INT16_MAX;
	uint32_t t48 = 32261U;

	t48 = (x249|(x250^(x251*x252)));

	if (t48 != 2142951663U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x257 = UINT64_MAX;
	uint64_t x258 = 3570150248038LLU;
	uint32_t x260 = 4076U;
	uint64_t t49 = UINT64_MAX;

	t49 = (x257|(x258^(x259*x260)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x261 = -4087538;
	static int32_t x262 = INT32_MIN;
	uint8_t x263 = 47U;
	uint64_t x264 = UINT64_MAX;
	uint64_t t50 = 120LLU;

	t50 = (x261|(x262^(x263*x264)));

	if (t50 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x265 = -1;
	int16_t x266 = 924;
	int32_t x267 = 1;
	static int32_t x268 = INT32_MIN;
	static volatile int32_t t51 = -14;

	t51 = (x265|(x266^(x267*x268)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x269 = 245237U;
	int64_t x271 = INT64_MAX;
	int32_t x272 = -1;

	t52 = (x269|(x270^(x271*x272)));

	if (t52 != -9223372036854530571LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x273 = -20LL;
	volatile int8_t x274 = INT8_MIN;
	uint64_t x275 = 366311075LLU;
	int8_t x276 = INT8_MIN;
	uint64_t t53 = 78LLU;

	t53 = (x273|(x274^(x275*x276)));

	if (t53 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x277 = INT64_MAX;
	static uint16_t x278 = UINT16_MAX;
	int16_t x279 = -10;
	volatile uint16_t x280 = 47U;
	int64_t t54 = -697LL;

	t54 = (x277|(x278^(x279*x280)));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x281 = UINT64_MAX;
	uint32_t x282 = 0U;
	int16_t x283 = -1;
	static int16_t x284 = -1;
	uint64_t t55 = UINT64_MAX;

	t55 = (x281|(x282^(x283*x284)));

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	int16_t x292 = -101;
	uint64_t t56 = UINT64_MAX;

	t56 = (x289|(x290^(x291*x292)));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x297 = UINT16_MAX;
	volatile int8_t x298 = -15;
	int8_t x299 = -23;
	uint32_t x300 = 256U;
	uint32_t t57 = 56794U;

	t57 = (x297|(x298^(x299*x300)));

	if (t57 != 65535U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x301 = INT8_MIN;
	volatile int64_t x302 = INT64_MIN;
	uint64_t x303 = 605682LLU;
	uint8_t x304 = 9U;
	static volatile uint64_t t58 = 934625LLU;

	t58 = (x301|(x302^(x303*x304)));

	if (t58 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x305 = 721970600669352213LLU;
	static int64_t x306 = 3309LL;
	static uint16_t x307 = UINT16_MAX;
	volatile uint64_t t59 = 110LLU;

	t59 = (x305|(x306^(x307*x308)));

	if (t59 != 18446744072219303421LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x314 = INT64_MIN;
	uint16_t x316 = 5U;
	volatile int64_t t60 = -2498276LL;

	t60 = (x313|(x314^(x315*x316)));

	if (t60 != -5LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x329 = 1;
	uint8_t x330 = 3U;
	int8_t x331 = -1;
	volatile int16_t x332 = INT16_MIN;
	static int32_t t61 = 0;

	t61 = (x329|(x330^(x331*x332)));

	if (t61 != 32771) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x333 = 1;
	volatile int16_t x334 = -119;
	uint8_t x335 = UINT8_MAX;
	static int64_t x336 = -1LL;
	volatile int64_t t62 = -30580468LL;

	t62 = (x333|(x334^(x335*x336)));

	if (t62 != 137LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int8_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int16_t x340 = -1;
	static volatile uint64_t t63 = UINT64_MAX;

	t63 = (x337|(x338^(x339*x340)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x341 = 102U;
	int32_t x342 = INT32_MAX;
	int16_t x343 = INT16_MAX;
	uint8_t x344 = 5U;

	t64 = (x341|(x342^(x343*x344)));

	if (t64 != 2147319910) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile uint32_t x346 = UINT32_MAX;
	uint8_t x347 = UINT8_MAX;
	volatile uint8_t x348 = 3U;

	t65 = (x345|(x346^(x347*x348)));

	if (t65 != 4294966783U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x351 = INT64_MIN;
	static int16_t x352 = 1;

	t66 = (x349|(x350^(x351*x352)));

	if (t66 != -35LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x353 = -41233417;
	static int8_t x354 = 5;
	uint32_t x355 = 2955057U;
	int16_t x356 = -15;
	volatile uint32_t t67 = 420U;

	t67 = (x353|(x354^(x355*x356)));

	if (t67 != 4259051511U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x362 = -3;
	int8_t x363 = -1;
	int64_t x364 = -7665899639LL;
	volatile int64_t t68 = -16543609990408LL;

	t68 = (x361|(x362^(x363*x364)));

	if (t68 != -22646LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = 9U;
	uint32_t x367 = 2U;
	int16_t x368 = -1;
	static uint32_t t69 = 7082U;

	t69 = (x365|(x366^(x367*x368)));

	if (t69 != 4294967287U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x377 = INT32_MAX;
	volatile int8_t x378 = -1;
	volatile int16_t x379 = INT16_MAX;
	uint32_t t70 = UINT32_MAX;

	t70 = (x377|(x378^(x379*x380)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x381 = 155550U;
	volatile int64_t x382 = INT64_MIN;
	int8_t x383 = -1;
	int8_t x384 = 40;

	t71 = (x381|(x382^(x383*x384)));

	if (t71 != 9223372036854775774LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x391 = UINT8_MAX;
	int8_t x392 = -20;

	t72 = (x389|(x390^(x391*x392)));

	if (t72 != 9223372036854780907LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x393 = INT64_MAX;
	static int64_t x395 = INT64_MIN;
	static volatile int8_t x396 = 0;
	volatile int64_t t73 = 2428965674857LL;

	t73 = (x393|(x394^(x395*x396)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x397 = INT64_MIN;
	uint8_t x398 = UINT8_MAX;
	static int32_t x399 = -1;
	int16_t x400 = -987;
	int64_t t74 = 16748637261015LL;

	t74 = (x397|(x398^(x399*x400)));

	if (t74 != -9223372036854775004LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x402 = UINT32_MAX;
	volatile uint8_t x403 = 1U;
	int8_t x404 = -1;
	uint32_t t75 = 433U;

	t75 = (x401|(x402^(x403*x404)));

	if (t75 != 934U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x405 = INT32_MIN;
	int64_t x406 = -49LL;
	static int8_t x408 = 3;
	static int64_t t76 = 25176603029LL;

	t76 = (x405|(x406^(x407*x408)));

	if (t76 != -49LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x421 = 206018LLU;
	int32_t x422 = INT32_MAX;
	int32_t x423 = 805616;
	uint16_t x424 = 1686U;

	t77 = (x421|(x422^(x423*x424)));

	if (t77 != 789280735LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x425 = INT16_MAX;
	volatile uint16_t x426 = 252U;
	uint32_t x427 = 21329201U;
	uint16_t x428 = UINT16_MAX;
	static volatile uint32_t t78 = 3U;

	t78 = (x425|(x426^(x427*x428)));

	if (t78 != 1944846335U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x429 = 177;
	uint16_t x430 = 2U;
	uint8_t x431 = UINT8_MAX;
	static int16_t x432 = -32;
	int32_t t79 = 14721032;

	t79 = (x429|(x430^(x431*x432)));

	if (t79 != -8013) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x433 = -1LL;
	int32_t x434 = INT32_MAX;
	static int64_t x435 = -1LL;
	int8_t x436 = INT8_MAX;

	t80 = (x433|(x434^(x435*x436)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x445 = INT8_MIN;
	int8_t x446 = INT8_MIN;
	static uint32_t x447 = 1056144290U;
	uint32_t t81 = 98U;

	t81 = (x445|(x446^(x447*x448)));

	if (t81 != 4294967262U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = 1683U;
	static int32_t x450 = INT32_MIN;
	int64_t x452 = INT64_MAX;
	static volatile uint64_t t82 = 109850802118656208LLU;

	t82 = (x449|(x450^(x451*x452)));

	if (t82 != 758051331807LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x456 = -1;
	int64_t t83 = 875651LL;

	t83 = (x453|(x454^(x455*x456)));

	if (t83 != 65535LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x457 = UINT16_MAX;
	uint32_t t84 = 167517U;

	t84 = (x457|(x458^(x459*x460)));

	if (t84 != 521601023U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x461 = -1;
	static int32_t x462 = INT32_MIN;
	uint64_t x463 = 0LLU;
	uint16_t x464 = UINT16_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x461|(x462^(x463*x464)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x465 = 13U;
	volatile int8_t x466 = -1;
	uint8_t x467 = 62U;
	int8_t x468 = -46;
	static volatile int32_t t86 = -924;

	t86 = (x465|(x466^(x467*x468)));

	if (t86 != 2863) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x469 = INT16_MIN;
	static int32_t x470 = INT32_MIN;
	uint32_t x471 = 15U;
	int32_t x472 = -1;
	uint32_t t87 = 2952U;

	t87 = (x469|(x470^(x471*x472)));

	if (t87 != 4294967281U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x473 = 117U;
	static uint32_t x474 = UINT32_MAX;
	uint32_t x475 = UINT32_MAX;
	static uint16_t x476 = 1U;

	t88 = (x473|(x474^(x475*x476)));

	if (t88 != 117U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x477 = -11;
	static int16_t x478 = 1756;
	volatile uint64_t x479 = 106290409648471LLU;
	int16_t x480 = INT16_MIN;
	uint64_t t89 = 3289032773698LLU;

	t89 = (x477|(x478^(x479*x480)));

	if (t89 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x485 = -21;
	uint64_t x486 = 596027594LLU;
	static int64_t x487 = INT64_MAX;
	volatile uint64_t x488 = UINT64_MAX;
	volatile uint64_t t90 = 11284851502306LLU;

	t90 = (x485|(x486^(x487*x488)));

	if (t90 != 18446744073709551595LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x489 = 3U;
	static uint32_t x490 = 300636716U;
	int64_t x491 = -1LL;
	uint16_t x492 = 9566U;
	volatile int64_t t91 = -55LL;

	t91 = (x489|(x490^(x491*x492)));

	if (t91 != -300646257LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x493 = -160;
	uint64_t x494 = 109632991LLU;
	uint16_t x496 = UINT16_MAX;
	uint64_t t92 = 50913LLU;

	t92 = (x493|(x494^(x495*x496)));

	if (t92 != 18446744073709551474LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x497 = 174813775924LL;
	static int64_t x498 = INT64_MIN;
	int64_t x499 = 72367533173LL;
	volatile uint64_t x500 = UINT64_MAX;
	uint64_t t93 = 21620344558LLU;

	t93 = (x497|(x498^(x499*x500)));

	if (t93 != 9223371966923119551LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x501 = 6U;
	uint32_t x502 = UINT32_MAX;
	int64_t x504 = 524061807LL;
	int64_t t94 = -6907994950LL;

	t94 = (x501|(x502^(x503*x504)));

	if (t94 != 17174920236142LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x506 = 4463U;
	int16_t x507 = INT16_MIN;
	int32_t t95 = 3426;

	t95 = (x505|(x506^(x507*x508)));

	if (t95 != -28305) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x509 = 12874U;
	uint16_t x510 = 1041U;
	static int16_t x511 = INT16_MAX;
	uint64_t t96 = 87354411LLU;

	t96 = (x509|(x510^(x511*x512)));

	if (t96 != 65431085317850LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x517 = INT8_MIN;
	static int32_t x518 = -1;
	int8_t x519 = 1;
	static int64_t x520 = INT64_MIN;

	t97 = (x517|(x518^(x519*x520)));

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x521 = UINT16_MAX;
	int16_t x522 = INT16_MIN;
	int8_t x523 = -1;
	static uint8_t x524 = UINT8_MAX;
	static volatile int32_t t98 = 5;

	t98 = (x521|(x522^(x523*x524)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x525 = INT32_MIN;
	volatile int32_t x526 = INT32_MIN;
	volatile uint8_t x528 = 1U;

	t99 = (x525|(x526^(x527*x528)));

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

