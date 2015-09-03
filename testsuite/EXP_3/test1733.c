#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 82428594507219LLU;
int64_t x5 = INT64_MIN;
volatile int16_t x7 = INT16_MIN;
uint16_t x22 = UINT16_MAX;
int32_t x25 = 6582;
static volatile uint16_t x27 = 28U;
int8_t x35 = 11;
uint32_t x36 = 1209U;
int64_t x38 = -1LL;
volatile int32_t x53 = -1;
uint8_t x59 = 3U;
int32_t t10 = 186;
static uint32_t x68 = 32U;
uint16_t x74 = UINT16_MAX;
int16_t x77 = -1;
static int16_t x79 = INT16_MAX;
int16_t x86 = -97;
uint16_t x92 = UINT16_MAX;
int16_t x93 = INT16_MIN;
int8_t x94 = INT8_MIN;
int16_t x97 = INT16_MIN;
int8_t x101 = INT8_MAX;
int64_t x102 = INT64_MIN;
static int16_t x103 = 10;
volatile uint8_t x106 = 1U;
volatile uint8_t x108 = UINT8_MAX;
volatile int64_t x109 = INT64_MAX;
int8_t x112 = INT8_MAX;
int64_t t22 = 635803180851402700LL;
volatile int8_t x113 = 25;
uint8_t x117 = 1U;
int32_t t24 = 1037;
static int32_t x124 = INT32_MAX;
int8_t x133 = INT8_MIN;
uint16_t x151 = 131U;
int32_t x152 = INT32_MAX;
static volatile int32_t t30 = -120;
static int8_t x154 = INT8_MAX;
int64_t x170 = INT64_MIN;
int8_t x171 = -1;
volatile int32_t x173 = 1164737;
uint32_t x189 = 1144213249U;
uint64_t x206 = 148LLU;
volatile uint64_t x219 = 5034258774617603269LLU;
int16_t x220 = INT16_MAX;
uint64_t t40 = 4LLU;
volatile int32_t x229 = INT32_MIN;
int32_t x235 = INT32_MIN;
int64_t x237 = INT64_MIN;
volatile int32_t x238 = INT32_MAX;
static volatile int64_t t43 = 884LL;
int32_t x258 = INT32_MIN;
static uint32_t x277 = UINT32_MAX;
static int16_t x279 = INT16_MIN;
int32_t x287 = 515405;
static int32_t x295 = -1113;
uint8_t x305 = UINT8_MAX;
static uint32_t t52 = 27057410U;
int32_t x322 = INT32_MAX;
static int32_t x327 = -1796;
volatile int64_t t56 = -3513LL;
uint64_t x337 = 154863766LLU;
volatile uint64_t t57 = 9381489LLU;
uint16_t x348 = 5295U;
static int64_t t60 = -2945196068145LL;
volatile uint64_t t61 = 31532871LLU;
int64_t t62 = -69093864893697LL;
static int32_t x366 = 1;
volatile int64_t t66 = 28731054239686198LL;
static volatile uint16_t x391 = UINT16_MAX;
static int64_t x394 = -1LL;
int64_t t69 = -4LL;
uint16_t x409 = 52U;
volatile int16_t x410 = INT16_MAX;
int8_t x426 = INT8_MAX;
int32_t t73 = 499;
static uint32_t x446 = 42U;
static int16_t x458 = -1;
static int32_t x459 = -2;
static volatile uint32_t t77 = 465298U;
volatile int64_t x461 = -1LL;
volatile int32_t x463 = -1;
int64_t x467 = INT64_MAX;
static int64_t t79 = -76914389208675565LL;
volatile int32_t x469 = INT32_MAX;
int64_t t80 = 35255668LL;
int64_t x474 = -96LL;
volatile int64_t t81 = 115LL;
volatile int64_t t82 = -4321581020782098LL;
volatile int32_t x484 = INT32_MIN;
static int64_t x488 = INT64_MAX;
uint64_t x489 = 57243LLU;
volatile int16_t x492 = 6;
uint64_t t85 = 6601319LLU;
int8_t x504 = -1;
volatile uint64_t t88 = 175631295393781LLU;
int32_t x511 = -1;
int64_t t89 = 24975407734904LL;
volatile int8_t x517 = 1;
static volatile int32_t x526 = -1;
int8_t x537 = INT8_MAX;
int16_t x538 = INT16_MAX;
uint32_t x540 = UINT32_MAX;
int32_t x564 = -1;
int64_t x577 = INT64_MIN;
int32_t x578 = INT32_MAX;
int16_t x579 = -2816;
int32_t x581 = 6129649;


void f0(void) {
	uint64_t x1 = 1376294937471511LLU;
	static int8_t x2 = -1;
	volatile uint64_t x3 = 1690LLU;
	int16_t x4 = -1;

	t0 = ((x1/x2)/(x3&x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 47U;
	static int8_t x8 = INT8_MIN;
	volatile int64_t t1 = -9734899287LL;

	t1 = ((x5/x6)/(x7&x8));

	if (t1 != 5988829291716LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MAX;
	int32_t x23 = INT32_MIN;
	volatile int16_t x24 = -1;
	static volatile int32_t t2 = -27;

	t2 = ((x21/x22)/(x23&x24));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x26 = INT8_MIN;
	int32_t x28 = -1;
	volatile int32_t t3 = 1463;

	t3 = ((x25/x26)/(x27&x28));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x33 = INT64_MIN;
	uint16_t x34 = 3U;
	static volatile int64_t t4 = -196LL;

	t4 = ((x33/x34)/(x35&x36));

	if (t4 != -341606371735362066LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = 25;
	int32_t x39 = INT32_MIN;
	int8_t x40 = INT8_MIN;
	static int64_t t5 = 4159LL;

	t5 = ((x37/x38)/(x39&x40));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x41 = -6;
	volatile int16_t x42 = -1;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 5026823010749LLU;
	uint64_t t6 = 1024682187LLU;

	t6 = ((x41/x42)/(x43&x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x45 = 373641138328LLU;
	uint16_t x46 = 4053U;
	uint32_t x47 = UINT32_MAX;
	uint64_t x48 = 869723LLU;
	static uint64_t t7 = 870187932LLU;

	t7 = ((x45/x46)/(x47&x48));

	if (t7 != 105LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MAX;
	volatile int8_t x51 = -1;
	static uint8_t x52 = UINT8_MAX;
	static volatile int32_t t8 = 2;

	t8 = ((x49/x50)/(x51&x52));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x54 = INT64_MIN;
	uint32_t x55 = 246U;
	uint32_t x56 = 410U;
	volatile int64_t t9 = -16285316LL;

	t9 = ((x53/x54)/(x55&x56));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x57 = 361U;
	int8_t x58 = -1;
	int16_t x60 = 1607;

	t10 = ((x57/x58)/(x59&x60));

	if (t10 != -120) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = -3;
	uint64_t x62 = UINT64_MAX;
	static int16_t x63 = INT16_MAX;
	int16_t x64 = 2;
	uint64_t t11 = 4890563LLU;

	t11 = ((x61/x62)/(x63&x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x65 = 0;
	volatile int64_t x66 = INT64_MIN;
	int64_t x67 = -12584692469483672LL;
	volatile int64_t t12 = -14396059381638972LL;

	t12 = ((x65/x66)/(x67&x68));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x73 = INT64_MIN;
	int32_t x75 = INT32_MAX;
	static int16_t x76 = INT16_MIN;
	int64_t t13 = -121499064LL;

	t13 = ((x73/x74)/(x75&x76));

	if (t13 != -65538LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x78 = -1;
	static uint16_t x80 = 4U;
	volatile int32_t t14 = 16;

	t14 = ((x77/x78)/(x79&x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x81 = 1444;
	int8_t x82 = INT8_MAX;
	volatile int64_t x83 = -3592269563620530924LL;
	int8_t x84 = -6;
	volatile int64_t t15 = -720223886LL;

	t15 = ((x81/x82)/(x83&x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x85 = -1;
	int16_t x87 = INT16_MIN;
	int32_t x88 = INT32_MIN;
	volatile int32_t t16 = 0;

	t16 = ((x85/x86)/(x87&x88));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	volatile uint64_t x91 = UINT64_MAX;
	volatile uint64_t t17 = 20441970LLU;

	t17 = ((x89/x90)/(x91&x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x95 = INT64_MAX;
	static int8_t x96 = INT8_MAX;
	volatile int64_t t18 = -2192747766303418LL;

	t18 = ((x93/x94)/(x95&x96));

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x98 = INT64_MIN;
	int16_t x99 = -1;
	volatile int64_t x100 = INT64_MIN;
	int64_t t19 = 57010785960780650LL;

	t19 = ((x97/x98)/(x99&x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x104 = INT32_MAX;
	volatile int64_t t20 = 318552406LL;

	t20 = ((x101/x102)/(x103&x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x105 = -1LL;
	int32_t x107 = -1;
	volatile int64_t t21 = 33094742LL;

	t21 = ((x105/x106)/(x107&x108));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x110 = INT32_MAX;
	uint16_t x111 = 1505U;

	t22 = ((x109/x110)/(x111&x112));

	if (t22 != 44278013LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x114 = 1;
	int32_t x115 = -4065;
	int32_t x116 = INT32_MIN;
	volatile int32_t t23 = 485;

	t23 = ((x113/x114)/(x115&x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x118 = 4174;
	int32_t x119 = 20649171;
	volatile int32_t x120 = 483459738;

	t24 = ((x117/x118)/(x119&x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = INT16_MIN;
	int64_t x122 = 210368108LL;
	volatile uint32_t x123 = 4201417U;
	int64_t t25 = -12339LL;

	t25 = ((x121/x122)/(x123&x124));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = -22;
	int16_t x131 = INT16_MIN;
	int64_t x132 = -296989461893559486LL;
	int64_t t26 = -54678LL;

	t26 = ((x129/x130)/(x131&x132));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x134 = 1;
	static uint32_t x135 = 482455128U;
	uint16_t x136 = UINT16_MAX;
	volatile uint32_t t27 = 88010401U;

	t27 = ((x133/x134)/(x135&x136));

	if (t27 != 96230U) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = 3U;
	static int32_t x142 = 7998;
	static int64_t x143 = 8017078969091LL;
	int16_t x144 = INT16_MIN;
	int64_t t28 = -34076389606LL;

	t28 = ((x141/x142)/(x143&x144));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = UINT16_MAX;
	static uint16_t x147 = UINT16_MAX;
	volatile int32_t x148 = INT32_MAX;
	int32_t t29 = -3065;

	t29 = ((x145/x146)/(x147&x148));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x149 = 2U;
	uint16_t x150 = 28U;

	t30 = ((x149/x150)/(x151&x152));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x153 = -3;
	uint32_t x155 = 664744494U;
	int32_t x156 = -113401726;
	uint32_t t31 = 1099367139U;

	t31 = ((x153/x154)/(x155&x156));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x157 = -1;
	uint64_t x158 = 2490351662LLU;
	int64_t x159 = -1LL;
	static volatile int8_t x160 = INT8_MIN;
	volatile uint64_t t32 = 150LLU;

	t32 = ((x157/x158)/(x159&x160));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x169 = -10;
	int32_t x172 = INT32_MAX;
	int64_t t33 = -520992850815634LL;

	t33 = ((x169/x170)/(x171&x172));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x174 = 1774;
	int32_t x175 = 71;
	int16_t x176 = INT16_MAX;
	int32_t t34 = -266284184;

	t34 = ((x173/x174)/(x175&x176));

	if (t34 != 9) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x177 = -1LL;
	int32_t x178 = 4009;
	volatile int16_t x179 = -406;
	uint8_t x180 = UINT8_MAX;
	volatile int64_t t35 = -1654LL;

	t35 = ((x177/x178)/(x179&x180));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x190 = UINT8_MAX;
	static int64_t x191 = 28759974051449269LL;
	static volatile int16_t x192 = INT16_MAX;
	volatile int64_t t36 = -3905951LL;

	t36 = ((x189/x190)/(x191&x192));

	if (t36 != 1805LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x193 = 85320;
	int64_t x194 = -1LL;
	int8_t x195 = INT8_MAX;
	uint32_t x196 = 9U;
	volatile int64_t t37 = 1746037509LL;

	t37 = ((x193/x194)/(x195&x196));

	if (t37 != -9480LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x205 = -1;
	int32_t x207 = -1;
	uint16_t x208 = UINT16_MAX;
	uint64_t t38 = 3152016723LLU;

	t38 = ((x205/x206)/(x207&x208));

	if (t38 != 1901886971239LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x218 = UINT8_MAX;
	uint64_t t39 = 7021349LLU;

	t39 = ((x217/x218)/(x219&x220));

	if (t39 != 1183427009532076LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x221 = INT8_MAX;
	uint64_t x222 = 5865217172876568LLU;
	int8_t x223 = 37;
	int16_t x224 = -268;

	t40 = ((x221/x222)/(x223&x224));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x230 = INT16_MIN;
	volatile uint64_t x231 = 4725466298LLU;
	int8_t x232 = INT8_MIN;
	static uint64_t t41 = 25055958LLU;

	t41 = ((x229/x230)/(x231&x232));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x233 = -266LL;
	static int32_t x234 = 73248315;
	int16_t x236 = -1;
	static int64_t t42 = -23568922305LL;

	t42 = ((x233/x234)/(x235&x236));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x239 = INT32_MIN;
	static int16_t x240 = INT16_MIN;

	t43 = ((x237/x238)/(x239&x240));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x249 = INT8_MIN;
	int8_t x250 = 33;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MIN;
	int64_t t44 = 2676LL;

	t44 = ((x249/x250)/(x251&x252));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x257 = 4U;
	static uint32_t x259 = UINT32_MAX;
	uint32_t x260 = UINT32_MAX;
	volatile uint32_t t45 = 25U;

	t45 = ((x257/x258)/(x259&x260));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	uint8_t x263 = UINT8_MAX;
	volatile int64_t x264 = 16689551LL;
	static volatile int64_t t46 = -53168437LL;

	t46 = ((x261/x262)/(x263&x264));

	if (t46 != 503899259006489LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x278 = 1U;
	volatile uint32_t x280 = 911076U;
	volatile uint32_t t47 = 3495U;

	t47 = ((x277/x278)/(x279&x280));

	if (t47 != 4854U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x281 = 2933707577334LLU;
	int16_t x282 = 4;
	int32_t x283 = -1;
	volatile int8_t x284 = INT8_MIN;
	volatile uint64_t t48 = 6556311342314761LLU;

	t48 = ((x281/x282)/(x283&x284));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x285 = INT64_MIN;
	int32_t x286 = INT32_MAX;
	static volatile int64_t x288 = -3212761209874LL;
	volatile int64_t t49 = 936317306370045997LL;

	t49 = ((x285/x286)/(x287&x288));

	if (t49 != -29061LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x293 = -5320888;
	int8_t x294 = -1;
	uint64_t x296 = 211265411851024LLU;
	uint64_t t50 = 53271501031LLU;

	t50 = ((x293/x294)/(x295&x296));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x297 = 0;
	int16_t x298 = INT16_MIN;
	uint16_t x299 = 2U;
	int8_t x300 = INT8_MAX;
	static volatile int32_t t51 = 7706;

	t51 = ((x297/x298)/(x299&x300));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x306 = INT32_MIN;
	uint8_t x307 = UINT8_MAX;
	uint32_t x308 = 785U;

	t52 = ((x305/x306)/(x307&x308));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x313 = 8U;
	int32_t x314 = 142014;
	int16_t x315 = -1;
	int64_t x316 = INT64_MAX;
	volatile int64_t t53 = 2LL;

	t53 = ((x313/x314)/(x315&x316));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x317 = INT16_MIN;
	int8_t x318 = 3;
	int64_t x319 = 1394996130489544605LL;
	int16_t x320 = INT16_MIN;
	volatile int64_t t54 = 199874408251446971LL;

	t54 = ((x317/x318)/(x319&x320));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x321 = 0U;
	int64_t x323 = 3LL;
	static uint16_t x324 = 229U;
	static int64_t t55 = -2226295378LL;

	t55 = ((x321/x322)/(x323&x324));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x325 = -3;
	int32_t x326 = 992239;
	int64_t x328 = -225336937LL;

	t56 = ((x325/x326)/(x327&x328));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x338 = UINT64_MAX;
	static int32_t x339 = INT32_MAX;
	volatile int32_t x340 = -14300;

	t57 = ((x337/x338)/(x339&x340));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = 14U;
	int16_t x343 = INT16_MIN;
	static volatile int8_t x344 = INT8_MIN;
	static volatile int32_t t58 = 927322;

	t58 = ((x341/x342)/(x343&x344));

	if (t58 != 4681) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x345 = -1LL;
	volatile int8_t x346 = INT8_MIN;
	int8_t x347 = INT8_MIN;
	int64_t t59 = 1832391570870788900LL;

	t59 = ((x345/x346)/(x347&x348));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x353 = INT8_MAX;
	int64_t x354 = 954LL;
	static int64_t x355 = -1LL;
	volatile int16_t x356 = INT16_MAX;

	t60 = ((x353/x354)/(x355&x356));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	static volatile int64_t x359 = -1LL;
	uint64_t x360 = 5565661LLU;

	t61 = ((x357/x358)/(x359&x360));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x361 = 1;
	int32_t x362 = -1;
	int64_t x363 = -19668056153504LL;
	uint16_t x364 = 124U;

	t62 = ((x361/x362)/(x363&x364));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x365 = -1;
	int16_t x367 = -546;
	uint8_t x368 = UINT8_MAX;
	int32_t t63 = 1;

	t63 = ((x365/x366)/(x367&x368));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x369 = INT32_MIN;
	uint8_t x370 = 92U;
	int8_t x371 = INT8_MIN;
	static int16_t x372 = 2290;
	volatile int32_t t64 = 795012506;

	t64 = ((x369/x370)/(x371&x372));

	if (t64 != -10727) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x377 = INT8_MIN;
	int64_t x378 = INT64_MIN;
	volatile int32_t x379 = -1;
	int32_t x380 = 9206;
	static volatile int64_t t65 = -6020621948841LL;

	t65 = ((x377/x378)/(x379&x380));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x385 = 8;
	volatile uint32_t x386 = 376U;
	int64_t x387 = -31910321703LL;
	int16_t x388 = INT16_MIN;

	t66 = ((x385/x386)/(x387&x388));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = INT8_MAX;
	volatile int16_t x392 = INT16_MAX;
	static volatile int32_t t67 = -659449;

	t67 = ((x389/x390)/(x391&x392));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x393 = -1;
	uint16_t x395 = 8072U;
	static int32_t x396 = 17219;
	volatile int64_t t68 = -948526LL;

	t68 = ((x393/x394)/(x395&x396));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x397 = -1;
	int16_t x398 = -31;
	int64_t x399 = INT64_MIN;
	int32_t x400 = -2576279;

	t69 = ((x397/x398)/(x399&x400));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x405 = 155576152;
	uint8_t x406 = 68U;
	static volatile uint16_t x407 = UINT16_MAX;
	int64_t x408 = 31086131LL;
	int64_t t70 = 607206156976727LL;

	t70 = ((x405/x406)/(x407&x408));

	if (t70 != 103LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x411 = UINT64_MAX;
	int64_t x412 = -3LL;
	volatile uint64_t t71 = 1473036254917LLU;

	t71 = ((x409/x410)/(x411&x412));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x413 = INT16_MIN;
	int8_t x414 = -60;
	volatile int8_t x415 = INT8_MAX;
	volatile uint8_t x416 = 4U;
	volatile int32_t t72 = 54097;

	t72 = ((x413/x414)/(x415&x416));

	if (t72 != 136) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x425 = INT32_MAX;
	volatile int8_t x427 = INT8_MIN;
	static int8_t x428 = -1;

	t73 = ((x425/x426)/(x427&x428));

	if (t73 != -132104) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x433 = INT64_MAX;
	uint8_t x434 = UINT8_MAX;
	static int32_t x435 = INT32_MIN;
	uint32_t x436 = UINT32_MAX;
	static int64_t t74 = 120027877604822LL;

	t74 = ((x433/x434)/(x435&x436));

	if (t74 != 16843009LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x445 = -1;
	static int8_t x447 = -49;
	int8_t x448 = -3;
	uint32_t t75 = 114856U;

	t75 = ((x445/x446)/(x447&x448));

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x449 = 345688521861163LLU;
	static int64_t x450 = -31LL;
	int32_t x451 = INT32_MAX;
	uint8_t x452 = 56U;
	uint64_t t76 = 5LLU;

	t76 = ((x449/x450)/(x451&x452));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x457 = UINT8_MAX;
	volatile uint32_t x460 = UINT32_MAX;

	t77 = ((x457/x458)/(x459&x460));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x462 = INT16_MIN;
	int32_t x464 = -1;
	volatile int64_t t78 = 1324LL;

	t78 = ((x461/x462)/(x463&x464));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x465 = 870325370U;
	uint8_t x466 = 10U;
	volatile int8_t x468 = 4;

	t79 = ((x465/x466)/(x467&x468));

	if (t79 != 21758134LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x470 = INT8_MAX;
	int64_t x471 = 2044268LL;
	volatile int8_t x472 = -1;

	t80 = ((x469/x470)/(x471&x472));

	if (t80 != 8LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x473 = -61;
	uint32_t x475 = 108792482U;
	int64_t x476 = -61071259LL;

	t81 = ((x473/x474)/(x475&x476));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x477 = -1;
	int32_t x478 = INT32_MIN;
	int8_t x479 = -3;
	int64_t x480 = -1LL;

	t82 = ((x477/x478)/(x479&x480));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x481 = 63491906U;
	volatile uint32_t x482 = 1872126722U;
	static int64_t x483 = INT64_MAX;
	volatile int64_t t83 = -4631LL;

	t83 = ((x481/x482)/(x483&x484));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x485 = UINT32_MAX;
	int16_t x486 = 3466;
	uint8_t x487 = UINT8_MAX;
	int64_t t84 = 0LL;

	t84 = ((x485/x486)/(x487&x488));

	if (t84 != 4859LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x490 = -1;
	uint64_t x491 = 3684LLU;

	t85 = ((x489/x490)/(x491&x492));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x493 = INT32_MIN;
	volatile uint16_t x494 = 145U;
	volatile int32_t x495 = 11185929;
	int32_t x496 = 42649;
	volatile int32_t t86 = 6808327;

	t86 = ((x493/x494)/(x495&x496));

	if (t86 != -348) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x501 = INT64_MIN;
	volatile uint16_t x502 = 744U;
	volatile uint16_t x503 = 113U;
	static volatile int64_t t87 = -227432523795LL;

	t87 = ((x501/x502)/(x503&x504));

	if (t87 != -109708012618407LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x505 = 1647;
	uint32_t x506 = 34U;
	volatile uint8_t x507 = UINT8_MAX;
	uint64_t x508 = 3779029486868228LLU;

	t88 = ((x505/x506)/(x507&x508));

	if (t88 != 12LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x509 = -1LL;
	uint16_t x510 = 2293U;
	int16_t x512 = 5;

	t89 = ((x509/x510)/(x511&x512));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x518 = INT32_MIN;
	uint16_t x519 = 6U;
	volatile int32_t x520 = -23446;
	volatile int32_t t90 = 716240324;

	t90 = ((x517/x518)/(x519&x520));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x521 = 51841930U;
	static volatile uint8_t x522 = UINT8_MAX;
	volatile int64_t x523 = INT64_MAX;
	int8_t x524 = INT8_MIN;
	int64_t t91 = 42576304LL;

	t91 = ((x521/x522)/(x523&x524));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x525 = 0U;
	int64_t x527 = INT64_MIN;
	int16_t x528 = -1;
	static int64_t t92 = -7106261LL;

	t92 = ((x525/x526)/(x527&x528));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x529 = INT16_MIN;
	int8_t x530 = -1;
	static int16_t x531 = -1;
	uint16_t x532 = 7U;
	volatile int32_t t93 = 699283772;

	t93 = ((x529/x530)/(x531&x532));

	if (t93 != 4681) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x539 = 24002739U;
	volatile uint32_t t94 = 11104U;

	t94 = ((x537/x538)/(x539&x540));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x549 = -7;
	volatile int8_t x550 = 29;
	static int64_t x551 = INT64_MAX;
	int16_t x552 = INT16_MAX;
	volatile int64_t t95 = -1596557LL;

	t95 = ((x549/x550)/(x551&x552));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x557 = UINT64_MAX;
	uint16_t x558 = UINT16_MAX;
	int16_t x559 = -1;
	int64_t x560 = -1LL;
	volatile uint64_t t96 = 7897866LLU;

	t96 = ((x557/x558)/(x559&x560));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x561 = -1;
	int8_t x562 = -1;
	int32_t x563 = INT32_MIN;
	volatile int32_t t97 = 21408;

	t97 = ((x561/x562)/(x563&x564));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x580 = INT8_MIN;
	int64_t t98 = -142048688107483833LL;

	t98 = ((x577/x578)/(x579&x580));

	if (t98 != 1525201LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x582 = -1;
	static int16_t x583 = INT16_MIN;
	int32_t x584 = INT32_MIN;
	volatile int32_t t99 = 206948;

	t99 = ((x581/x582)/(x583&x584));

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

