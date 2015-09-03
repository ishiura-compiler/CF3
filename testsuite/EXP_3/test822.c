#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 193093227426696056LLU;
uint64_t t0 = 128657233368LLU;
static int64_t x11 = 0LL;
int8_t x15 = INT8_MAX;
static int64_t x21 = INT64_MAX;
static volatile int32_t x23 = INT32_MIN;
volatile int64_t t5 = 554LL;
volatile int8_t x43 = INT8_MIN;
int32_t x47 = INT32_MAX;
static uint64_t t10 = 210LLU;
static int8_t x64 = 5;
int64_t x68 = -1LL;
int16_t x83 = INT16_MIN;
uint8_t x84 = 123U;
uint64_t t18 = 79221749LLU;
uint8_t x90 = 56U;
uint16_t x96 = 125U;
uint16_t x101 = UINT16_MAX;
uint8_t x103 = 15U;
static uint16_t x107 = 3U;
uint32_t x109 = 68771532U;
int64_t x111 = INT64_MIN;
uint32_t x112 = UINT32_MAX;
static uint64_t t26 = 26871LLU;
int8_t x125 = -1;
int32_t x131 = INT32_MAX;
volatile int16_t x133 = -7;
int8_t x137 = -1;
static int8_t x143 = INT8_MIN;
volatile int32_t t33 = -1993;
volatile int64_t t35 = -3775351LL;
uint32_t x158 = UINT32_MAX;
static uint64_t x160 = 1LLU;
static int32_t x162 = INT32_MAX;
uint64_t x165 = UINT64_MAX;
volatile int64_t x174 = -1496219042904LL;
uint8_t x176 = 71U;
static volatile int16_t x179 = -7;
int32_t t40 = 1417;
int8_t x184 = INT8_MAX;
volatile int64_t t44 = -3726998809175919LL;
static uint8_t x202 = UINT8_MAX;
volatile uint64_t t45 = 512189419651198LLU;
static uint8_t x226 = 2U;
volatile uint32_t x234 = 21453410U;
int64_t x240 = INT64_MIN;
int64_t x244 = -1LL;
volatile int16_t x246 = INT16_MIN;
static int64_t t56 = 3112LL;
int16_t x253 = 1275;
int8_t x256 = 2;
int32_t x258 = -31561;
uint8_t x260 = 90U;
uint8_t x261 = 0U;
int8_t x264 = INT8_MAX;
volatile int64_t x273 = INT64_MAX;
uint32_t x277 = 5766U;
int32_t x284 = 7;
static uint16_t x289 = UINT16_MAX;
int32_t x290 = INT32_MAX;
volatile int8_t x292 = INT8_MIN;
static int64_t x300 = INT64_MIN;
int64_t x313 = INT64_MIN;
int8_t x315 = INT8_MIN;
int32_t x317 = INT32_MIN;
static int8_t x318 = INT8_MAX;
int32_t x319 = -128269;
volatile int8_t x326 = INT8_MIN;
static volatile int16_t x327 = INT16_MAX;
int8_t x332 = INT8_MIN;
volatile int64_t t72 = 87193522LL;
static uint32_t t73 = 21581607U;
int8_t x346 = INT8_MAX;
uint64_t x357 = UINT64_MAX;
static uint16_t x360 = UINT16_MAX;
volatile int16_t x361 = INT16_MIN;
int64_t x375 = -14803986579929LL;
int8_t x380 = 1;
volatile int32_t x384 = INT32_MAX;
int64_t x385 = INT64_MAX;
int64_t x392 = -1LL;
int64_t t86 = 99176781153040LL;
volatile uint32_t t87 = 8U;
uint32_t x399 = 1085457U;
volatile int8_t x402 = 2;
volatile int64_t x407 = -1LL;
static int16_t x421 = -1;
volatile uint32_t t96 = 6U;
static int8_t x444 = INT8_MIN;
int64_t t97 = -3420113916LL;
uint64_t x451 = 6LLU;
int16_t x456 = -11;
static volatile int32_t t99 = -831274;


void f0(void) {
	uint32_t x1 = 113968U;
	static int64_t x3 = 810860402487LL;
	uint16_t x4 = 58U;

	t0 = ((x1|x2)*(x3%x4));

	if (t0 != 193093227426742136LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 851059U;
	volatile int32_t x6 = INT32_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = -30115;
	volatile uint32_t t1 = 1043U;

	t1 = ((x5|x6)*(x7%x8));

	if (t1 != 4184591417U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	uint32_t x10 = 12799U;
	static volatile uint16_t x12 = 2U;
	int64_t t2 = 2LL;

	t2 = ((x9|x10)*(x11%x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 1;
	int8_t x14 = -1;
	int64_t x16 = -1LL;
	volatile int64_t t3 = -719845669414876LL;

	t3 = ((x13|x14)*(x15%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	uint8_t x18 = 2U;
	int8_t x19 = -11;
	int16_t x20 = -1;
	volatile int64_t t4 = -857LL;

	t4 = ((x17|x18)*(x19%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	int16_t x24 = INT16_MIN;

	t5 = ((x21|x22)*(x23%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int8_t x26 = -6;
	static int64_t x27 = -2546LL;
	int64_t x28 = INT64_MIN;
	int64_t t6 = 753LL;

	t6 = ((x25|x26)*(x27%x28));

	if (t6 != 15276LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x33 = 30522248366LLU;
	int64_t x34 = INT64_MIN;
	int8_t x35 = INT8_MAX;
	int8_t x36 = -1;
	uint64_t t7 = 785905451LLU;

	t7 = ((x33|x34)*(x35%x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -7;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = 15907U;
	int16_t x40 = 6;
	static volatile int64_t t8 = 24358114LL;

	t8 = ((x37|x38)*(x39%x40));

	if (t8 != -7LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x41 = 2;
	int32_t x42 = -1;
	int8_t x44 = 5;
	int32_t t9 = 3;

	t9 = ((x41|x42)*(x43%x44));

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x45 = 748LLU;
	int16_t x46 = INT16_MIN;
	int16_t x48 = INT16_MIN;

	t10 = ((x45|x46)*(x47%x48));

	if (t10 != 18446744072660352276LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -1;
	static volatile int32_t x50 = INT32_MIN;
	static int16_t x51 = INT16_MAX;
	static int32_t x52 = -1;
	int32_t t11 = -406;

	t11 = ((x49|x50)*(x51%x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 747LLU;
	static int16_t x54 = INT16_MAX;
	uint16_t x55 = 166U;
	int32_t x56 = INT32_MAX;
	static volatile uint64_t t12 = 970873193LLU;

	t12 = ((x53|x54)*(x55%x56));

	if (t12 != 5439322LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	uint8_t x58 = 11U;
	int16_t x59 = INT16_MIN;
	uint32_t x60 = 483219562U;
	uint32_t t13 = 110U;

	t13 = ((x57|x58)*(x59%x60));

	if (t13 != 3865789264U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = -1917131714068LL;
	int16_t x63 = INT16_MIN;
	volatile int64_t t14 = -100738LL;

	t14 = ((x61|x62)*(x63%x64));

	if (t14 != 4728900156LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -7504;
	volatile uint64_t x66 = 1LLU;
	uint8_t x67 = 54U;
	uint64_t t15 = 1710488317402838LLU;

	t15 = ((x65|x66)*(x67%x68));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x73 = -475142610;
	uint64_t x74 = 2LLU;
	static volatile uint32_t x75 = 53U;
	static int32_t x76 = -1;
	volatile uint64_t t16 = 14LLU;

	t16 = ((x73|x74)*(x75%x76));

	if (t16 != 18446744048526993286LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = UINT8_MAX;
	int16_t x78 = INT16_MAX;
	uint32_t x79 = 7889498U;
	int64_t x80 = INT64_MIN;
	int64_t t17 = 94LL;

	t17 = ((x77|x78)*(x79%x80));

	if (t17 != 258515180966LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	uint32_t x82 = UINT32_MAX;

	t18 = ((x81|x82)*(x83%x84));

	if (t18 != 50LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x85 = -202421773LL;
	static int32_t x86 = -3;
	uint64_t x87 = 56659338354LLU;
	int64_t x88 = 3232387011787565LL;
	uint64_t t19 = 1551995858549484LLU;

	t19 = ((x85|x86)*(x87%x88));

	if (t19 != 18446744017050213262LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = UINT64_MAX;
	static int64_t x91 = INT64_MIN;
	static int64_t x92 = INT64_MAX;
	uint64_t t20 = 32114347833434LLU;

	t20 = ((x89|x90)*(x91%x92));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int32_t x94 = INT32_MIN;
	uint8_t x95 = 88U;
	int64_t t21 = -283845219878917LL;

	t21 = ((x93|x94)*(x95%x96));

	if (t21 != -188978561024LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 10;
	int16_t x98 = INT16_MIN;
	int8_t x99 = INT8_MIN;
	int64_t x100 = -320042LL;
	volatile int64_t t22 = 21444057896646531LL;

	t22 = ((x97|x98)*(x99%x100));

	if (t22 != 4193024LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x102 = INT64_MAX;
	int16_t x104 = 1;
	volatile int64_t t23 = 1438LL;

	t23 = ((x101|x102)*(x103%x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x105 = 545270LLU;
	uint16_t x106 = 6U;
	int64_t x108 = INT64_MAX;
	static volatile uint64_t t24 = 80665756359LLU;

	t24 = ((x105|x106)*(x107%x108));

	if (t24 != 1635810LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x110 = -1;
	volatile int64_t t25 = 951497514199977008LL;

	t25 = ((x109|x110)*(x111%x112));

	if (t25 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint64_t x113 = 25436197627121LLU;
	int32_t x114 = -1635;
	int64_t x115 = INT64_MAX;
	int16_t x116 = 1559;

	t26 = ((x113|x114)*(x115%x116));

	if (t26 != 18446744073709224076LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x117 = INT64_MIN;
	static uint64_t x118 = UINT64_MAX;
	static int32_t x119 = INT32_MAX;
	static int16_t x120 = 2311;
	uint64_t t27 = 3104LLU;

	t27 = ((x117|x118)*(x119%x120));

	if (t27 != 18446744073709550853LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = INT16_MAX;
	static int8_t x122 = -1;
	volatile int64_t x123 = INT64_MIN;
	int16_t x124 = -1;
	static volatile int64_t t28 = -398978230LL;

	t28 = ((x121|x122)*(x123%x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MIN;
	uint64_t x128 = 2001327LLU;
	uint64_t t29 = 11974119LLU;

	t29 = ((x125|x126)*(x127%x128));

	if (t29 != 18446744073707709548LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x129 = 755824101U;
	int8_t x130 = -1;
	static uint32_t x132 = 7954306U;
	volatile uint32_t t30 = 338066U;

	t30 = ((x129|x130)*(x131%x132));

	if (t30 != 4287191963U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x134 = 54114U;
	static int64_t x135 = -971468LL;
	int64_t x136 = INT64_MIN;
	int64_t t31 = 494292176394909856LL;

	t31 = ((x133|x134)*(x135%x136));

	if (t31 != -4172423284253188LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x138 = UINT64_MAX;
	volatile int16_t x139 = INT16_MIN;
	static volatile int16_t x140 = INT16_MIN;
	uint64_t t32 = 67606LLU;

	t32 = ((x137|x138)*(x139%x140));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x141 = 301U;
	int32_t x142 = -1;
	static int8_t x144 = -1;

	t33 = ((x141|x142)*(x143%x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 3U;
	int16_t x146 = -1;
	static uint64_t x147 = 1006414415386580781LLU;
	uint8_t x148 = 3U;
	uint64_t t34 = 744779226LLU;

	t34 = ((x145|x146)*(x147%x148));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MAX;
	uint8_t x155 = 53U;
	int64_t x156 = -101LL;

	t35 = ((x153|x154)*(x155%x156));

	if (t35 != 227633266635LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = -57782;
	int64_t x159 = INT64_MIN;
	static volatile uint64_t t36 = 14495043801007LLU;

	t36 = ((x157|x158)*(x159%x160));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x161 = 42U;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = 3011261246413LL;
	int64_t t37 = -57760LL;

	t37 = ((x161|x162)*(x163%x164));

	if (t37 != 140735340806145LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = -9;
	int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t38 = 264119226458945LLU;

	t38 = ((x165|x166)*(x167%x168));

	if (t38 != 32768LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x173 = INT16_MIN;
	int32_t x175 = INT32_MIN;
	int64_t t39 = 17284445LL;

	t39 = ((x173|x174)*(x175%x176));

	if (t39 != 699840LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	uint16_t x178 = 236U;
	int16_t x180 = -1;

	t40 = ((x177|x178)*(x179%x180));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1LL;
	int16_t x182 = -1;
	static int8_t x183 = -1;
	int64_t t41 = -4208359100036LL;

	t41 = ((x181|x182)*(x183%x184));

	if (t41 != 1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x185 = 0LLU;
	int64_t x186 = INT64_MIN;
	static volatile uint32_t x187 = 3022U;
	uint16_t x188 = 3553U;
	uint64_t t42 = 3726579LLU;

	t42 = ((x185|x186)*(x187%x188));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x189 = 11793730048928447LLU;
	int8_t x190 = INT8_MIN;
	volatile int64_t x191 = -1LL;
	uint64_t x192 = 1LLU;
	static uint64_t t43 = 2214991073395372LLU;

	t43 = ((x189|x190)*(x191%x192));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = 284946753851787237LL;
	static volatile int32_t x194 = INT32_MIN;
	uint32_t x195 = UINT32_MAX;
	int32_t x196 = 18952420;

	t44 = ((x193|x194)*(x195%x196));

	if (t44 != -19813667430690125LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x201 = 1926516594545622831LLU;
	static volatile int64_t x203 = -2977495137390130874LL;
	int8_t x204 = INT8_MIN;

	t45 = ((x201|x202)*(x203%x204));

	if (t45 != 17389246032320725050LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	int32_t x210 = -1;
	int64_t x211 = -7362848875323LL;
	int64_t x212 = INT64_MIN;
	static volatile int64_t t46 = -11598447799LL;

	t46 = ((x209|x210)*(x211%x212));

	if (t46 != 7362848875323LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 435U;
	uint64_t x215 = 1166LLU;
	int16_t x216 = -1;
	uint64_t t47 = 43990057195342096LLU;

	t47 = ((x213|x214)*(x215%x216));

	if (t47 != 18446744073709461834LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x217 = INT16_MIN;
	int32_t x218 = INT32_MIN;
	volatile uint64_t x219 = 91019LLU;
	static uint8_t x220 = 1U;
	uint64_t t48 = 7767LLU;

	t48 = ((x217|x218)*(x219%x220));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x221 = -1;
	int64_t x222 = INT64_MIN;
	int8_t x223 = -1;
	volatile int64_t x224 = -1385754047896255248LL;
	volatile int64_t t49 = 30578592559029004LL;

	t49 = ((x221|x222)*(x223%x224));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x225 = -1;
	uint64_t x227 = 750980631652609489LLU;
	int8_t x228 = -1;
	static uint64_t t50 = 7908770757952680385LLU;

	t50 = ((x225|x226)*(x227%x228));

	if (t50 != 17695763442056942127LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x229 = 148288193LLU;
	int16_t x230 = -1;
	static int16_t x231 = -1;
	static int32_t x232 = INT32_MAX;
	uint64_t t51 = 168LLU;

	t51 = ((x229|x230)*(x231%x232));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x233 = UINT64_MAX;
	int8_t x235 = -1;
	uint32_t x236 = UINT32_MAX;
	static uint64_t t52 = 24946107LLU;

	t52 = ((x233|x234)*(x235%x236));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x237 = UINT64_MAX;
	volatile uint16_t x238 = UINT16_MAX;
	uint16_t x239 = 9718U;
	static volatile uint64_t t53 = 43529039229929324LLU;

	t53 = ((x237|x238)*(x239%x240));

	if (t53 != 18446744073709541898LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x241 = 0U;
	uint16_t x242 = 760U;
	int32_t x243 = INT32_MAX;
	volatile int64_t t54 = 349703834745979102LL;

	t54 = ((x241|x242)*(x243%x244));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x245 = -237464873LL;
	int32_t x247 = INT32_MAX;
	volatile int8_t x248 = -57;
	volatile int64_t t55 = -16200211416303LL;

	t55 = ((x245|x246)*(x247%x248));

	if (t55 != -1117800LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = -1;
	volatile int64_t x250 = INT64_MIN;
	int64_t x251 = -1LL;
	volatile int64_t x252 = -2415330876808LL;

	t56 = ((x249|x250)*(x251%x252));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x254 = UINT16_MAX;
	uint64_t x255 = 156149412630544LLU;
	static uint64_t t57 = 15808351442512293LLU;

	t57 = ((x253|x254)*(x255%x256));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x259 = UINT8_MAX;
	volatile int64_t t58 = -130451716235093031LL;

	t58 = ((x257|x258)*(x259%x260));

	if (t58 != -2367075LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x262 = UINT64_MAX;
	uint32_t x263 = 17896U;
	static volatile uint64_t t59 = 7LLU;

	t59 = ((x261|x262)*(x263%x264));

	if (t59 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x265 = -3;
	volatile int8_t x266 = INT8_MIN;
	int32_t x267 = INT32_MAX;
	int8_t x268 = 23;
	int32_t t60 = 57904751;

	t60 = ((x265|x266)*(x267%x268));

	if (t60 != -15) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 568010286;
	volatile int32_t x271 = -1;
	static volatile int32_t x272 = -1;
	int32_t t61 = 0;

	t61 = ((x269|x270)*(x271%x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x274 = 14399969745LL;
	static int8_t x275 = INT8_MIN;
	static uint64_t x276 = UINT64_MAX;
	uint64_t t62 = 126LLU;

	t62 = ((x273|x274)*(x275%x276));

	if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x278 = INT64_MIN;
	static int32_t x279 = -1;
	volatile int64_t x280 = INT64_MIN;
	int64_t t63 = 785004LL;

	t63 = ((x277|x278)*(x279%x280));

	if (t63 != 9223372036854770042LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x282 = UINT8_MAX;
	uint16_t x283 = UINT16_MAX;
	volatile int64_t t64 = -14LL;

	t64 = ((x281|x282)*(x283%x284));

	if (t64 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x285 = INT16_MAX;
	int16_t x286 = 13255;
	volatile int8_t x287 = 6;
	int64_t x288 = -1LL;
	volatile int64_t t65 = 21861LL;

	t65 = ((x285|x286)*(x287%x288));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x291 = INT64_MIN;
	static int64_t t66 = 1870234910492LL;

	t66 = ((x289|x290)*(x291%x292));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x297 = UINT16_MAX;
	int16_t x298 = 1;
	static uint32_t x299 = UINT32_MAX;
	volatile int64_t t67 = -12861392361780764LL;

	t67 = ((x297|x298)*(x299%x300));

	if (t67 != 281470681677825LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = 698U;
	volatile uint32_t x302 = 403U;
	static uint8_t x303 = UINT8_MAX;
	int16_t x304 = -1;
	static volatile uint32_t t68 = 107851379U;

	t68 = ((x301|x302)*(x303%x304));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x314 = -1;
	volatile uint32_t x316 = UINT32_MAX;
	volatile int64_t t69 = -1LL;

	t69 = ((x313|x314)*(x315%x316));

	if (t69 != -4294967168LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x320 = 2U;
	static int32_t t70 = -162434634;

	t70 = ((x317|x318)*(x319%x320));

	if (t70 != 2147483521) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x325 = UINT64_MAX;
	int64_t x328 = INT64_MIN;
	static volatile uint64_t t71 = 47LLU;

	t71 = ((x325|x326)*(x327%x328));

	if (t71 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x329 = -1LL;
	int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MAX;

	t72 = ((x329|x330)*(x331%x332));

	if (t72 != -127LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int8_t x334 = INT8_MAX;
	uint16_t x335 = 31841U;
	static int16_t x336 = INT16_MIN;

	t73 = ((x333|x334)*(x335%x336));

	if (t73 != 4294935455U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = -2;
	uint32_t x338 = 11761043U;
	int64_t x339 = INT64_MAX;
	uint64_t x340 = 219LLU;
	volatile uint64_t t74 = 4660LLU;

	t74 = ((x337|x338)*(x339%x340));

	if (t74 != 313532612535LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x341 = 14;
	volatile int64_t x342 = INT64_MAX;
	int16_t x343 = -1;
	int16_t x344 = 113;
	volatile int64_t t75 = -304096491072LL;

	t75 = ((x341|x342)*(x343%x344));

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = 270;
	volatile int64_t x347 = -1LL;
	volatile int16_t x348 = INT16_MIN;
	volatile int64_t t76 = 2197084764562615LL;

	t76 = ((x345|x346)*(x347%x348));

	if (t76 != -383LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = 15239U;
	int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	static volatile int32_t t77 = 77853;

	t77 = ((x349|x350)*(x351%x352));

	if (t77 != 2243712) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = INT8_MIN;
	int16_t x354 = 14;
	volatile int8_t x355 = 12;
	int32_t x356 = -45403478;
	int32_t t78 = -5654;

	t78 = ((x353|x354)*(x355%x356));

	if (t78 != -1368) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x358 = -363374;
	int16_t x359 = INT16_MIN;
	volatile uint64_t t79 = 2365415887LLU;

	t79 = ((x357|x358)*(x359%x360));

	if (t79 != 32768LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x362 = -6;
	static int16_t x363 = INT16_MIN;
	static volatile int32_t x364 = INT32_MIN;
	volatile int32_t t80 = -1282;

	t80 = ((x361|x362)*(x363%x364));

	if (t80 != 196608) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x369 = INT32_MAX;
	uint32_t x370 = UINT32_MAX;
	int32_t x371 = 979;
	static uint32_t x372 = 10093946U;
	volatile uint32_t t81 = 517214U;

	t81 = ((x369|x370)*(x371%x372));

	if (t81 != 4294966317U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = -1;
	static uint32_t x374 = 1887545U;
	static int32_t x376 = -6;
	int64_t t82 = -33633549416007142LL;

	t82 = ((x373|x374)*(x375%x376));

	if (t82 != -21474836475LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MIN;
	volatile uint32_t x379 = UINT32_MAX;
	uint64_t t83 = 24717172014102LLU;

	t83 = ((x377|x378)*(x379%x380));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x381 = -4;
	int64_t x382 = -16310209203063LL;
	int8_t x383 = INT8_MAX;
	volatile int64_t t84 = 218165LL;

	t84 = ((x381|x382)*(x383%x384));

	if (t84 != -381LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x386 = 0U;
	static int16_t x387 = -1;
	volatile int8_t x388 = INT8_MAX;
	int64_t t85 = -168968629848426LL;

	t85 = ((x385|x386)*(x387%x388));

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = INT8_MAX;
	int64_t x390 = INT64_MAX;
	int16_t x391 = INT16_MAX;

	t86 = ((x389|x390)*(x391%x392));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = INT16_MIN;
	uint32_t x394 = UINT32_MAX;
	int8_t x395 = -1;
	int16_t x396 = -48;

	t87 = ((x393|x394)*(x395%x396));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = 3967U;
	int32_t x398 = INT32_MIN;
	int32_t x400 = -1;
	uint32_t t88 = 133758400U;

	t88 = ((x397|x398)*(x399%x400));

	if (t88 != 2158524271U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x401 = 0U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MIN;
	int32_t t89 = 343937777;

	t89 = ((x401|x402)*(x403%x404));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x405 = UINT8_MAX;
	uint64_t x406 = UINT64_MAX;
	static uint16_t x408 = 1710U;
	static volatile uint64_t t90 = 15875985613778LLU;

	t90 = ((x405|x406)*(x407%x408));

	if (t90 != 1LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = -213614074419LL;
	uint64_t x410 = UINT64_MAX;
	static uint32_t x411 = 857604334U;
	uint8_t x412 = 62U;
	uint64_t t91 = 17392497563778LLU;

	t91 = ((x409|x410)*(x411%x412));

	if (t91 != 18446744073709551556LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x413 = 124474516U;
	int8_t x414 = -50;
	int16_t x415 = -26;
	static int64_t x416 = INT64_MIN;
	volatile int64_t t92 = -13613900326208LL;

	t92 = ((x413|x414)*(x415%x416));

	if (t92 != -111669148812LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = -3235784566402LL;
	uint8_t x418 = 12U;
	int8_t x419 = INT8_MIN;
	int64_t x420 = -1LL;
	volatile int64_t t93 = -657381385LL;

	t93 = ((x417|x418)*(x419%x420));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x422 = 189316376U;
	static uint64_t x423 = 31420670LLU;
	uint16_t x424 = UINT16_MAX;
	uint64_t t94 = 46461778477576LLU;

	t94 = ((x421|x422)*(x423%x424));

	if (t94 != 126293513309475LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x429 = INT8_MIN;
	volatile int64_t x430 = 1645868334816LL;
	static int32_t x431 = 3;
	int8_t x432 = 7;
	static int64_t t95 = -2983838679418203519LL;

	t95 = ((x429|x430)*(x431%x432));

	if (t95 != -96LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x437 = UINT16_MAX;
	int8_t x438 = INT8_MIN;
	uint32_t x439 = UINT32_MAX;
	uint16_t x440 = 10639U;

	t96 = ((x437|x438)*(x439%x440));

	if (t96 != 4294964301U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x441 = UINT16_MAX;
	volatile int64_t x442 = INT64_MAX;
	int8_t x443 = -1;

	t97 = ((x441|x442)*(x443%x444));

	if (t97 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x449 = INT8_MIN;
	static uint64_t x450 = UINT64_MAX;
	volatile int32_t x452 = INT32_MAX;
	uint64_t t98 = 52375LLU;

	t98 = ((x449|x450)*(x451%x452));

	if (t98 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x453 = INT8_MAX;
	uint16_t x454 = UINT16_MAX;
	static int16_t x455 = INT16_MIN;

	t99 = ((x453|x454)*(x455%x456));

	if (t99 != -655350) { NG(); } else { ; }
	
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

