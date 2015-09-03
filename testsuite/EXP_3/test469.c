#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = INT8_MIN;
int8_t x17 = INT8_MIN;
int8_t x18 = -1;
volatile uint64_t t4 = 23976109236743332LLU;
uint8_t x25 = 4U;
int64_t x27 = 696583LL;
static uint64_t x37 = 27LLU;
uint32_t x40 = 1042986U;
volatile int32_t t8 = -2349;
int16_t x45 = INT16_MIN;
static uint8_t x48 = 1U;
static volatile int64_t t9 = 328348173472LL;
static int32_t x55 = -1;
uint8_t x57 = 45U;
static volatile uint64_t x60 = 14380239633LLU;
static uint64_t t12 = 5LLU;
static int32_t x65 = -1;
int64_t t15 = -4644601LL;
uint64_t x77 = UINT64_MAX;
volatile uint64_t t17 = 3049LLU;
static int8_t x117 = INT8_MIN;
static volatile int8_t x118 = INT8_MIN;
int16_t x121 = INT16_MIN;
int16_t x123 = INT16_MIN;
static volatile uint32_t t21 = 0U;
int8_t x131 = -8;
int8_t x147 = INT8_MAX;
volatile int64_t t25 = -21656611129LL;
int32_t x149 = INT32_MIN;
int16_t x155 = INT16_MAX;
int16_t x167 = -1;
static int64_t t28 = -3769LL;
int8_t x176 = -1;
volatile int32_t t32 = -93914511;
uint64_t t35 = 52590769101385LLU;
int64_t t36 = -17LL;
static int16_t x201 = 4;
int32_t x209 = -1;
uint32_t t39 = 129U;
volatile uint64_t t40 = 1729639693203LLU;
int32_t x242 = INT32_MIN;
static uint16_t x259 = 12200U;
int8_t x260 = INT8_MAX;
int64_t t48 = 173LL;
static int64_t x285 = INT64_MIN;
int8_t x300 = INT8_MIN;
uint16_t x306 = 11980U;
int32_t t52 = 27;
uint64_t x315 = 12LLU;
static uint16_t x317 = 99U;
int16_t x318 = INT16_MIN;
int32_t x326 = 0;
uint8_t x339 = 14U;
int16_t x340 = INT16_MIN;
volatile int32_t x341 = INT32_MIN;
int8_t x349 = INT8_MIN;
volatile int8_t x352 = -44;
static volatile int8_t x361 = -1;
static int16_t x366 = 2;
int32_t t61 = 80;
volatile int16_t x377 = INT16_MIN;
int8_t x381 = 27;
int32_t x382 = -20640284;
uint64_t x383 = 268798385246LLU;
static volatile int16_t x391 = -1;
int32_t t64 = 1486;
static int16_t x394 = 2;
uint8_t x396 = 1U;
static int16_t x401 = -1;
volatile int32_t x405 = 2325;
int8_t x415 = INT8_MAX;
int8_t x426 = 45;
uint8_t x428 = UINT8_MAX;
static volatile int32_t t71 = 0;
int64_t x429 = 83LL;
uint64_t t72 = 1497208415511579859LLU;
uint8_t x450 = 14U;
static uint32_t x457 = 105189U;
int64_t x470 = -171938164013747LL;
int8_t x474 = 5;
static volatile int8_t x476 = INT8_MAX;
volatile uint8_t x487 = UINT8_MAX;
uint16_t x488 = UINT16_MAX;
uint8_t x491 = 8U;
volatile int32_t x494 = INT32_MIN;
uint32_t x498 = UINT32_MAX;
uint64_t x500 = 46137796LLU;
static uint64_t t85 = 6371910LLU;
int8_t x502 = 0;
static int32_t x517 = INT32_MAX;
int8_t x525 = INT8_MIN;
volatile int16_t x527 = 1;
int32_t t89 = 1496345;
volatile int16_t x530 = INT16_MAX;
int8_t x540 = 50;
volatile int32_t t92 = -405272799;
int8_t x542 = INT8_MAX;
volatile int64_t x554 = 3842628482476788230LL;
int16_t x560 = INT16_MAX;
int16_t x565 = INT16_MIN;
int16_t x568 = -3;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static uint64_t x2 = 380636557391654LLU;
	int8_t x3 = INT8_MAX;
	int64_t x4 = -14267589LL;
	static uint64_t t0 = 1170099588LLU;

	t0 = ((x1&x2)+(x3*x4));

	if (t0 != 18446744071897567813LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int32_t x6 = 2517867;
	static int32_t x7 = -1;
	int32_t x8 = -1;
	int32_t t1 = -4;

	t1 = ((x5&x6)+(x7*x8));

	if (t1 != 2490369) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -1;
	int8_t x14 = -1;
	int16_t x15 = INT16_MAX;
	static int32_t t2 = 0;

	t2 = ((x13&x14)+(x15*x16));

	if (t2 != -4194177) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x19 = INT8_MAX;
	int8_t x20 = -1;
	volatile int32_t t3 = -7069;

	t3 = ((x17&x18)+(x19*x20));

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int32_t x22 = 5102;
	uint32_t x23 = 79399U;
	uint64_t x24 = 221542229325LLU;

	t4 = ((x21&x22)+(x23*x24));

	if (t4 != 17590231466175913LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x26 = INT64_MAX;
	int32_t x28 = 71971617;
	volatile int64_t t5 = -2316030103650823LL;

	t5 = ((x25&x26)+(x27*x28));

	if (t5 != 50134204884715LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 27U;
	int8_t x34 = INT8_MAX;
	static uint64_t x35 = 32907677LLU;
	uint32_t x36 = 74U;
	volatile uint64_t t6 = 1447191349916545923LLU;

	t6 = ((x33&x34)+(x35*x36));

	if (t6 != 2435168125LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x38 = INT64_MIN;
	volatile int16_t x39 = -1;
	static volatile uint64_t t7 = 2865288588798457142LLU;

	t7 = ((x37&x38)+(x39*x40));

	if (t7 != 4293924310LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = INT32_MIN;
	int16_t x43 = -1;
	volatile uint16_t x44 = 92U;

	t8 = ((x41&x42)+(x43*x44));

	if (t8 != -92) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x46 = -1424186LL;
	int64_t x47 = -1LL;

	t9 = ((x45&x46)+(x47*x48));

	if (t9 != -1441793LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x49 = 1U;
	static volatile int16_t x50 = INT16_MIN;
	volatile int8_t x51 = -2;
	int8_t x52 = INT8_MIN;
	int32_t t10 = -1747267;

	t10 = ((x49&x50)+(x51*x52));

	if (t10 != 256) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = 1;
	uint8_t x56 = 0U;
	int32_t t11 = -2813525;

	t11 = ((x53&x54)+(x55*x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = -31387518999776401LL;

	t12 = ((x57&x58)+(x59*x60));

	if (t12 != 17488252680397336460LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x66 = -1;
	int8_t x67 = -21;
	int8_t x68 = INT8_MIN;
	int32_t t13 = 4;

	t13 = ((x65&x66)+(x67*x68));

	if (t13 != 2687) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = 41U;
	int16_t x70 = INT16_MIN;
	static int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t14 = 147775;

	t14 = ((x69&x70)+(x71*x72));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x73 = -31;
	int64_t x74 = -1LL;
	int8_t x75 = -3;
	int32_t x76 = -19913;

	t15 = ((x73&x74)+(x75*x76));

	if (t15 != 59708LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x78 = -6;
	uint32_t x79 = 3484072U;
	static int8_t x80 = INT8_MAX;
	uint64_t t16 = 426074110715500LLU;

	t16 = ((x77&x78)+(x79*x80));

	if (t16 != 442477138LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = 21;
	volatile int32_t x82 = INT32_MAX;
	int32_t x83 = 217;
	uint64_t x84 = 207LLU;

	t17 = ((x81&x82)+(x83*x84));

	if (t17 != 44940LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 3U;
	uint32_t x86 = 2194U;
	uint16_t x87 = 146U;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t18 = 1840862786LLU;

	t18 = ((x85&x86)+(x87*x88));

	if (t18 != 18446744073709551472LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x93 = -4390101196778024LL;
	int16_t x94 = INT16_MAX;
	uint16_t x95 = 0U;
	volatile uint32_t x96 = 1364982539U;
	volatile int64_t t19 = 2265224LL;

	t19 = ((x93&x94)+(x95*x96));

	if (t19 != 21976LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x119 = 40236199U;
	uint64_t x120 = 4820384895LLU;
	static volatile uint64_t t20 = 535LLU;

	t20 = ((x117&x118)+(x119*x120));

	if (t20 != 193953965891813977LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x122 = 10U;
	volatile int16_t x124 = INT16_MIN;

	t21 = ((x121&x122)+(x123*x124));

	if (t21 != 1073741824U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	static volatile uint32_t x132 = UINT32_MAX;
	volatile uint32_t t22 = 1U;

	t22 = ((x129&x130)+(x131*x132));

	if (t22 != 2147483655U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x133 = -2747LL;
	int8_t x134 = -1;
	static int64_t x135 = INT64_MIN;
	uint64_t x136 = 6LLU;
	volatile uint64_t t23 = 698151780783LLU;

	t23 = ((x133&x134)+(x135*x136));

	if (t23 != 18446744073709548869LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x137 = INT16_MIN;
	int64_t x138 = -1LL;
	int16_t x139 = -1;
	int8_t x140 = INT8_MAX;
	static int64_t t24 = 19427798LL;

	t24 = ((x137&x138)+(x139*x140));

	if (t24 != -32895LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = -15;
	int64_t x146 = -39510LL;
	int8_t x148 = -1;

	t25 = ((x145&x146)+(x147*x148));

	if (t25 != -39647LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x150 = 1U;
	uint32_t x151 = 85U;
	uint8_t x152 = UINT8_MAX;
	static uint32_t t26 = 3U;

	t26 = ((x149&x150)+(x151*x152));

	if (t26 != 21675U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x153 = INT16_MAX;
	int16_t x154 = INT16_MAX;
	uint32_t x156 = 53U;
	uint32_t t27 = 34484674U;

	t27 = ((x153&x154)+(x155*x156));

	if (t27 != 1769418U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x165 = -1LL;
	int16_t x166 = INT16_MIN;
	volatile int8_t x168 = 9;

	t28 = ((x165&x166)+(x167*x168));

	if (t28 != -32777LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x169 = 56U;
	int32_t x170 = -39;
	static int8_t x171 = INT8_MAX;
	static uint16_t x172 = UINT16_MAX;
	int32_t t29 = 335817825;

	t29 = ((x169&x170)+(x171*x172));

	if (t29 != 8322969) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = INT64_MAX;
	int32_t x174 = INT32_MIN;
	int64_t x175 = 1LL;
	volatile int64_t t30 = 142291221766281LL;

	t30 = ((x173&x174)+(x175*x176));

	if (t30 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x177 = 8266U;
	static uint16_t x178 = 25379U;
	uint32_t x179 = 20998969U;
	uint8_t x180 = UINT8_MAX;
	static volatile uint32_t t31 = 211U;

	t31 = ((x177&x178)+(x179*x180));

	if (t31 != 1059777993U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = -1;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	static int32_t x184 = -1;

	t32 = ((x181&x182)+(x183*x184));

	if (t32 != -32640) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x185 = 2750579LLU;
	int64_t x186 = -467026623662LL;
	uint32_t x187 = UINT32_MAX;
	static volatile uint32_t x188 = 104U;
	volatile uint64_t t33 = 4LLU;

	t33 = ((x185&x186)+(x187*x188));

	if (t33 != 4295573482LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x189 = 10U;
	uint64_t x190 = UINT64_MAX;
	int16_t x191 = 1335;
	static int16_t x192 = 5285;
	volatile uint64_t t34 = 332482976LLU;

	t34 = ((x189&x190)+(x191*x192));

	if (t34 != 7055485LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x193 = INT16_MAX;
	int64_t x194 = -1LL;
	uint64_t x195 = UINT64_MAX;
	static int32_t x196 = -3400128;

	t35 = ((x193&x194)+(x195*x196));

	if (t35 != 3432895LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = -54LL;
	static int32_t x198 = INT32_MAX;
	static uint8_t x199 = 12U;
	static volatile int16_t x200 = 216;

	t36 = ((x197&x198)+(x199*x200));

	if (t36 != 2147486186LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x202 = 2473U;
	uint8_t x203 = 20U;
	int32_t x204 = -1;
	int32_t t37 = 58;

	t37 = ((x201&x202)+(x203*x204));

	if (t37 != -20) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 20344LLU;
	volatile int64_t x206 = 425110460623693LL;
	int64_t x207 = -1LL;
	uint32_t x208 = UINT32_MAX;
	volatile uint64_t t38 = 464972736981076LLU;

	t38 = ((x205&x206)+(x207*x208));

	if (t38 != 18446744069414603593LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x210 = -944;
	uint32_t x211 = 140104U;
	volatile int16_t x212 = INT16_MIN;

	t39 = ((x209&x210)+(x211*x212));

	if (t39 != 3999005776U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x213 = -14562;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = -1831;
	int64_t x216 = -19619680665936LL;

	t40 = ((x213&x214)+(x215*x216));

	if (t40 != 35923635299314254LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int8_t x217 = 4;
	uint16_t x218 = 1681U;
	int8_t x219 = INT8_MAX;
	uint64_t x220 = 1066785185928LLU;
	volatile uint64_t t41 = 79LLU;

	t41 = ((x217&x218)+(x219*x220));

	if (t41 != 135481718612856LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x229 = -1;
	int16_t x230 = 7857;
	int16_t x231 = INT16_MIN;
	volatile int8_t x232 = INT8_MAX;
	int32_t t42 = 1473697;

	t42 = ((x229&x230)+(x231*x232));

	if (t42 != -4153679) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x241 = INT16_MAX;
	uint16_t x243 = 11481U;
	volatile int64_t x244 = 582917LL;
	volatile int64_t t43 = -1200660LL;

	t43 = ((x241&x242)+(x243*x244));

	if (t43 != 6692470077LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = -1;
	static volatile int32_t x246 = 390478;
	int16_t x247 = -1;
	volatile uint32_t x248 = UINT32_MAX;
	uint32_t t44 = 106989811U;

	t44 = ((x245&x246)+(x247*x248));

	if (t44 != 390479U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x257 = UINT32_MAX;
	volatile int8_t x258 = -1;
	volatile uint32_t t45 = 185U;

	t45 = ((x257&x258)+(x259*x260));

	if (t45 != 1549399U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x261 = 5U;
	int16_t x262 = -1;
	static uint32_t x263 = UINT32_MAX;
	static int32_t x264 = -1;
	uint32_t t46 = 59150U;

	t46 = ((x261&x262)+(x263*x264));

	if (t46 != 6U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x273 = 19919U;
	volatile int64_t x274 = INT64_MIN;
	uint64_t x275 = 221897157128823LLU;
	int64_t x276 = -1LL;
	volatile uint64_t t47 = 8686481690405LLU;

	t47 = ((x273&x274)+(x275*x276));

	if (t47 != 18446522176552422793LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x281 = -1;
	int64_t x282 = 3392833LL;
	static volatile uint8_t x283 = UINT8_MAX;
	uint32_t x284 = UINT32_MAX;

	t48 = ((x281&x282)+(x283*x284));

	if (t48 != 4298359874LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x286 = UINT32_MAX;
	volatile int64_t x287 = -1LL;
	uint32_t x288 = UINT32_MAX;
	int64_t t49 = 386479LL;

	t49 = ((x285&x286)+(x287*x288));

	if (t49 != -4294967295LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x297 = 83U;
	volatile uint8_t x298 = UINT8_MAX;
	int16_t x299 = 1;
	volatile int32_t t50 = 13;

	t50 = ((x297&x298)+(x299*x300));

	if (t50 != -45) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x305 = INT64_MIN;
	volatile int16_t x307 = INT16_MIN;
	int32_t x308 = -1;
	int64_t t51 = -3626735677757LL;

	t51 = ((x305&x306)+(x307*x308));

	if (t51 != 32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x309 = UINT8_MAX;
	static uint16_t x310 = 5U;
	int16_t x311 = -1;
	int8_t x312 = 46;

	t52 = ((x309&x310)+(x311*x312));

	if (t52 != -41) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x313 = 1878200LLU;
	int8_t x314 = -1;
	int8_t x316 = INT8_MIN;
	volatile uint64_t t53 = 6897LLU;

	t53 = ((x313&x314)+(x315*x316));

	if (t53 != 1876664LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x319 = 7U;
	static int16_t x320 = INT16_MIN;
	volatile int32_t t54 = -757561161;

	t54 = ((x317&x318)+(x319*x320));

	if (t54 != -229376) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x325 = UINT8_MAX;
	uint8_t x327 = 102U;
	static int16_t x328 = INT16_MAX;
	int32_t t55 = -10339265;

	t55 = ((x325&x326)+(x327*x328));

	if (t55 != 3342234) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x337 = INT8_MAX;
	static int8_t x338 = INT8_MIN;
	int32_t t56 = -378277;

	t56 = ((x337&x338)+(x339*x340));

	if (t56 != -458752) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x342 = 1010033225U;
	uint64_t x343 = 162410141322470033LLU;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t57 = 20549728LLU;

	t57 = ((x341&x342)+(x343*x344));

	if (t57 != 2397831139143188480LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x350 = -1;
	uint8_t x351 = 51U;
	int32_t t58 = 77077322;

	t58 = ((x349&x350)+(x351*x352));

	if (t58 != -2372) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x353 = INT64_MIN;
	uint8_t x354 = 1U;
	volatile int16_t x355 = -1;
	int8_t x356 = -9;
	int64_t t59 = -6071939554137816LL;

	t59 = ((x353&x354)+(x355*x356));

	if (t59 != 9LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x362 = INT16_MIN;
	static uint32_t x363 = 2840669U;
	int64_t x364 = -1LL;
	static volatile int64_t t60 = 96733707392LL;

	t60 = ((x361&x362)+(x363*x364));

	if (t60 != -2873437LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x365 = 476990;
	int8_t x367 = -54;
	static volatile int16_t x368 = INT16_MAX;

	t61 = ((x365&x366)+(x367*x368));

	if (t61 != -1769416) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x378 = 250;
	static uint64_t x379 = 6892432578126990603LLU;
	static int32_t x380 = INT32_MIN;
	volatile uint64_t t62 = 1500741LLU;

	t62 = ((x377&x378)+(x379*x380));

	if (t62 != 4554433874590957568LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x384 = INT8_MIN;
	volatile uint64_t t63 = 1044913084501494527LLU;

	t63 = ((x381&x382)+(x383*x384));

	if (t63 != 18446709667516240128LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x389 = UINT8_MAX;
	static volatile int8_t x390 = -11;
	static uint16_t x392 = UINT16_MAX;

	t64 = ((x389&x390)+(x391*x392));

	if (t64 != -65290) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x393 = 1U;
	int32_t x395 = INT32_MAX;
	volatile int32_t t65 = INT32_MAX;

	t65 = ((x393&x394)+(x395*x396));

	if (t65 != INT32_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x397 = INT8_MAX;
	int16_t x398 = -1546;
	uint8_t x399 = 60U;
	static uint16_t x400 = 2U;
	int32_t t66 = -47292;

	t66 = ((x397&x398)+(x399*x400));

	if (t66 != 238) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x402 = UINT32_MAX;
	int16_t x403 = INT16_MIN;
	static int64_t x404 = -20371LL;
	static volatile int64_t t67 = -21517349LL;

	t67 = ((x401&x402)+(x403*x404));

	if (t67 != 4962484223LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x406 = UINT8_MAX;
	int16_t x407 = 2;
	int16_t x408 = -7;
	volatile int32_t t68 = -124155;

	t68 = ((x405&x406)+(x407*x408));

	if (t68 != 7) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x413 = UINT32_MAX;
	static uint64_t x414 = 33267157970LLU;
	int64_t x416 = -1LL;
	static volatile uint64_t t69 = 8520889831897LLU;

	t69 = ((x413&x414)+(x415*x416));

	if (t69 != 3202386771LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x417 = 3U;
	uint16_t x418 = 48U;
	uint8_t x419 = 5U;
	uint16_t x420 = 1U;
	static volatile uint32_t t70 = 484U;

	t70 = ((x417&x418)+(x419*x420));

	if (t70 != 5U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x425 = -1;
	int16_t x427 = -479;

	t71 = ((x425&x426)+(x427*x428));

	if (t71 != -122100) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x430 = 70868855620695LLU;
	int16_t x431 = 0;
	volatile uint16_t x432 = 29U;

	t72 = ((x429&x430)+(x431*x432));

	if (t72 != 83LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x437 = UINT64_MAX;
	volatile int8_t x438 = -1;
	int8_t x439 = INT8_MIN;
	uint64_t x440 = UINT64_MAX;
	volatile uint64_t t73 = 57LLU;

	t73 = ((x437&x438)+(x439*x440));

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = 724355LL;
	uint64_t x447 = 258947LLU;
	uint64_t x448 = 1264574863309483LLU;
	uint64_t t74 = 719LLU;

	t74 = ((x445&x446)+(x447*x448));

	if (t74 != 13863217876338316929LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x449 = UINT8_MAX;
	uint16_t x451 = 865U;
	volatile int32_t x452 = -1;
	volatile int32_t t75 = -848964052;

	t75 = ((x449&x450)+(x451*x452));

	if (t75 != -851) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x458 = INT32_MIN;
	int8_t x459 = -1;
	uint16_t x460 = 0U;
	static volatile uint32_t t76 = 4836U;

	t76 = ((x457&x458)+(x459*x460));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x461 = INT16_MAX;
	int8_t x462 = 51;
	int32_t x463 = -1;
	volatile int32_t x464 = -64570743;
	int32_t t77 = 75447;

	t77 = ((x461&x462)+(x463*x464));

	if (t77 != 64570794) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x469 = 3371LLU;
	volatile int64_t x471 = -1LL;
	static uint64_t x472 = 4625911029694782318LLU;
	uint64_t t78 = 478LLU;

	t78 = ((x469&x470)+(x471*x472));

	if (t78 != 13820833044014770587LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x473 = UINT64_MAX;
	uint64_t x475 = 21894349856445LLU;
	uint64_t t79 = 3626LLU;

	t79 = ((x473&x474)+(x475*x476));

	if (t79 != 2780582431768520LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x477 = INT8_MAX;
	int64_t x478 = INT64_MAX;
	static uint8_t x479 = 1U;
	static int16_t x480 = INT16_MAX;
	int64_t t80 = 21994889294922LL;

	t80 = ((x477&x478)+(x479*x480));

	if (t80 != 32894LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x481 = INT8_MIN;
	int32_t x482 = INT32_MAX;
	uint32_t x483 = 700712U;
	int32_t x484 = INT32_MIN;
	uint32_t t81 = 28U;

	t81 = ((x481&x482)+(x483*x484));

	if (t81 != 2147483520U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x485 = -436;
	static int8_t x486 = INT8_MIN;
	volatile int32_t t82 = 55325918;

	t82 = ((x485&x486)+(x487*x488));

	if (t82 != 16710913) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x489 = UINT64_MAX;
	volatile int32_t x490 = INT32_MAX;
	volatile int8_t x492 = INT8_MIN;
	uint64_t t83 = 3479268843LLU;

	t83 = ((x489&x490)+(x491*x492));

	if (t83 != 2147482623LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x493 = INT32_MIN;
	int16_t x495 = INT16_MAX;
	uint8_t x496 = 0U;
	static int32_t t84 = INT32_MIN;

	t84 = ((x493&x494)+(x495*x496));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x497 = 35U;
	uint8_t x499 = UINT8_MAX;

	t85 = ((x497&x498)+(x499*x500));

	if (t85 != 11765138015LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x501 = UINT32_MAX;
	uint64_t x503 = 5LLU;
	static volatile uint64_t x504 = 7LLU;
	uint64_t t86 = 26413204LLU;

	t86 = ((x501&x502)+(x503*x504));

	if (t86 != 35LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x509 = 23U;
	volatile int64_t x510 = INT64_MIN;
	uint64_t x511 = 155812804LLU;
	volatile uint8_t x512 = 39U;
	volatile uint64_t t87 = 32LLU;

	t87 = ((x509&x510)+(x511*x512));

	if (t87 != 6076699356LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x518 = UINT64_MAX;
	int16_t x519 = INT16_MIN;
	static int64_t x520 = 49961939LL;
	uint64_t t88 = 299219920614471859LLU;

	t88 = ((x517&x518)+(x519*x520));

	if (t88 != 18446742438704218111LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x526 = UINT8_MAX;
	int8_t x528 = INT8_MIN;

	t89 = ((x525&x526)+(x527*x528));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x529 = UINT8_MAX;
	uint8_t x531 = 30U;
	volatile int8_t x532 = -14;
	volatile int32_t t90 = -10;

	t90 = ((x529&x530)+(x531*x532));

	if (t90 != -165) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x533 = INT32_MAX;
	int64_t x534 = -1LL;
	uint8_t x535 = 24U;
	int32_t x536 = 6;
	volatile int64_t t91 = -12726592445526211LL;

	t91 = ((x533&x534)+(x535*x536));

	if (t91 != 2147483791LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x537 = INT16_MIN;
	uint8_t x538 = UINT8_MAX;
	int32_t x539 = -1;

	t92 = ((x537&x538)+(x539*x540));

	if (t92 != -50) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x541 = INT8_MAX;
	volatile uint64_t x543 = 451LLU;
	volatile int8_t x544 = -1;
	volatile uint64_t t93 = 1228477358075160LLU;

	t93 = ((x541&x542)+(x543*x544));

	if (t93 != 18446744073709551292LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x545 = 103LL;
	uint8_t x546 = 75U;
	static uint16_t x547 = UINT16_MAX;
	static uint16_t x548 = 1210U;
	volatile int64_t t94 = -55LL;

	t94 = ((x545&x546)+(x547*x548));

	if (t94 != 79297417LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x549 = INT8_MIN;
	static int64_t x550 = INT64_MIN;
	static volatile int8_t x551 = INT8_MAX;
	uint32_t x552 = 1656159U;
	static volatile int64_t t95 = 29987582LL;

	t95 = ((x549&x550)+(x551*x552));

	if (t95 != -9223372036644443615LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x553 = INT8_MIN;
	uint32_t x555 = UINT32_MAX;
	int8_t x556 = INT8_MIN;
	int64_t t96 = -195LL;

	t96 = ((x553&x554)+(x555*x556));

	if (t96 != 3842628482476788352LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x557 = 222U;
	int8_t x558 = INT8_MAX;
	int8_t x559 = -4;
	int32_t t97 = 85694;

	t97 = ((x557&x558)+(x559*x560));

	if (t97 != -130974) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x566 = UINT32_MAX;
	int8_t x567 = INT8_MAX;
	static volatile uint32_t t98 = 0U;

	t98 = ((x565&x566)+(x567*x568));

	if (t98 != 4294934147U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x569 = INT64_MIN;
	volatile int32_t x570 = INT32_MAX;
	int8_t x571 = INT8_MIN;
	uint64_t x572 = UINT64_MAX;
	uint64_t t99 = 544LLU;

	t99 = ((x569&x570)+(x571*x572));

	if (t99 != 128LLU) { NG(); } else { ; }
	
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

