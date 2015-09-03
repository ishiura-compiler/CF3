#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x1 = INT32_MIN;
volatile uint64_t x3 = UINT64_MAX;
static int64_t x4 = 875982213590141242LL;
static int32_t x12 = 1026346;
static int8_t x23 = INT8_MAX;
int16_t x26 = INT16_MIN;
int16_t x30 = 1;
int32_t x35 = -1;
volatile int32_t t7 = -8;
volatile int32_t t8 = -1827927;
int8_t x53 = -1;
uint16_t x60 = UINT16_MAX;
volatile int32_t t12 = 8011011;
static volatile uint64_t x70 = UINT64_MAX;
int8_t x72 = 1;
static int64_t x74 = -1LL;
static int32_t x77 = 57517255;
uint8_t x82 = 47U;
uint16_t x116 = 22722U;
int32_t t24 = -19;
int8_t x121 = INT8_MIN;
static int32_t x126 = INT32_MIN;
static volatile int8_t x129 = -26;
int64_t x134 = -2932937LL;
static volatile uint16_t x136 = 154U;
static int16_t x141 = INT16_MIN;
int8_t x145 = 0;
int32_t t31 = -11788;
int8_t x150 = INT8_MIN;
int64_t x152 = -1LL;
static volatile int64_t x157 = 397919LL;
int32_t x158 = INT32_MAX;
static volatile int32_t t34 = 18971005;
int64_t x162 = -4762790734861790LL;
volatile uint16_t x168 = 88U;
static int64_t x177 = -1LL;
int64_t x180 = -1LL;
uint16_t x182 = 156U;
uint16_t x183 = 1U;
uint16_t x188 = 26758U;
uint64_t x195 = UINT64_MAX;
int8_t x204 = INT8_MAX;
volatile int64_t x212 = INT64_MIN;
int64_t x233 = 118LL;
uint64_t x234 = UINT64_MAX;
volatile int8_t x235 = 17;
volatile uint64_t x239 = UINT64_MAX;
static uint32_t x251 = 171198500U;
int32_t t53 = -503;
uint16_t x275 = UINT16_MAX;
int8_t x281 = 0;
volatile int16_t x284 = INT16_MIN;
static int32_t t55 = 26;
uint64_t x287 = UINT64_MAX;
volatile int32_t t56 = -47086;
static int16_t x297 = INT16_MAX;
static int32_t t59 = -18133225;
volatile int32_t t61 = 820;
int32_t t63 = -44824594;
int8_t x339 = INT8_MIN;
static volatile int64_t x342 = -1LL;
int64_t x355 = -1021658LL;
static int16_t x356 = INT16_MAX;
int64_t x369 = INT64_MAX;
int64_t x389 = -1610336LL;
volatile int16_t x393 = -1;
static uint8_t x405 = 53U;
uint16_t x408 = 432U;
volatile int32_t t77 = 10467;
int32_t x410 = INT32_MIN;
uint16_t x412 = 0U;
volatile int32_t t79 = -1;
volatile int32_t x425 = INT32_MIN;
uint64_t x426 = 3792534793250425456LLU;
static int16_t x430 = INT16_MIN;
volatile int32_t t82 = -14082;
int32_t t83 = -3716142;
static int32_t x444 = INT32_MIN;
int32_t x446 = INT32_MIN;
volatile uint32_t x447 = 736313185U;
static int32_t x448 = INT32_MAX;
int32_t x449 = -1;
static volatile int32_t x450 = INT32_MIN;
volatile int32_t t88 = -485;
uint16_t x469 = 622U;
uint64_t x474 = 20470746986422564LLU;
volatile uint8_t x492 = 12U;
static uint8_t x493 = 3U;
volatile int32_t t95 = -1151;
static uint32_t x505 = UINT32_MAX;
int16_t x508 = INT16_MIN;
uint32_t x515 = 62241259U;
int32_t x516 = INT32_MIN;


void f0(void) {
	uint64_t x2 = UINT64_MAX;
	volatile int32_t t0 = 3566720;

	t0 = (x1==(x2-(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	static int8_t x10 = -1;
	volatile uint8_t x11 = 26U;
	volatile int32_t t1 = 20215584;

	t1 = (x9==(x10-(x11+x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x13 = INT64_MAX;
	static int16_t x14 = -1;
	volatile int32_t x15 = -1;
	static int64_t x16 = INT64_MAX;
	int32_t t2 = 544638461;

	t2 = (x13==(x14-(x15+x16)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MAX;
	uint16_t x19 = UINT16_MAX;
	static int8_t x20 = INT8_MAX;
	int32_t t3 = 51855553;

	t3 = (x17==(x18-(x19+x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 0U;
	int32_t x22 = -7820514;
	int64_t x24 = 938942761370LL;
	volatile int32_t t4 = 2989226;

	t4 = (x21==(x22-(x23+x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MAX;
	int8_t x27 = INT8_MIN;
	uint8_t x28 = 52U;
	volatile int32_t t5 = 6;

	t5 = (x25==(x26-(x27+x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 3140U;
	int64_t x31 = INT64_MIN;
	uint64_t x32 = 108592108404396932LLU;
	volatile int32_t t6 = -3283075;

	t6 = (x29==(x30-(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x33 = 85U;
	uint32_t x34 = 484014534U;
	static uint32_t x36 = UINT32_MAX;

	t7 = (x33==(x34-(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = -1;
	static int64_t x38 = -765554246136LL;
	volatile int64_t x39 = -1218976176051856292LL;
	uint32_t x40 = 4823798U;

	t8 = (x37==(x38-(x39+x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = 429425037U;
	static int32_t x42 = 27;
	static uint64_t x43 = 115069631548LLU;
	volatile int32_t x44 = 802965;
	int32_t t9 = -10853661;

	t9 = (x41==(x42-(x43+x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MIN;
	uint64_t x47 = 51272366824929LLU;
	int16_t x48 = INT16_MAX;
	volatile int32_t t10 = -61460;

	t10 = (x45==(x46-(x47+x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x54 = 1LL;
	int32_t x55 = -13993027;
	int8_t x56 = -1;
	volatile int32_t t11 = 354131;

	t11 = (x53==(x54-(x55+x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = 95750462;
	volatile int32_t x58 = 176;
	int32_t x59 = -325946267;

	t12 = (x57==(x58-(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x61 = 14137U;
	uint16_t x62 = UINT16_MAX;
	static volatile int16_t x63 = -1;
	volatile int8_t x64 = -1;
	int32_t t13 = 9;

	t13 = (x61==(x62-(x63+x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x65 = INT16_MIN;
	static uint8_t x66 = UINT8_MAX;
	int16_t x67 = 76;
	int16_t x68 = -21;
	static volatile int32_t t14 = 15485655;

	t14 = (x65==(x66-(x67+x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	volatile int32_t t15 = -58302;

	t15 = (x69==(x70-(x71+x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MIN;
	volatile uint32_t x75 = UINT32_MAX;
	static uint32_t x76 = 29944U;
	int32_t t16 = -3;

	t16 = (x73==(x74-(x75+x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x78 = INT8_MAX;
	volatile int32_t x79 = -1;
	int8_t x80 = INT8_MAX;
	static int32_t t17 = -26;

	t17 = (x77==(x78-(x79+x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	int32_t x83 = -550826225;
	volatile int64_t x84 = 786398LL;
	int32_t t18 = 3369;

	t18 = (x81==(x82-(x83+x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = UINT16_MAX;
	volatile int8_t x86 = -1;
	int8_t x87 = -31;
	int8_t x88 = INT8_MIN;
	int32_t t19 = -5388866;

	t19 = (x85==(x86-(x87+x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = -1;
	static uint32_t x90 = UINT32_MAX;
	volatile uint32_t x91 = 22710430U;
	volatile int8_t x92 = 1;
	static int32_t t20 = 279467510;

	t20 = (x89==(x90-(x91+x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = -1;
	int32_t x98 = INT32_MAX;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	static int32_t t21 = -68791;

	t21 = (x97==(x98-(x99+x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	static int32_t x103 = -1;
	int64_t x104 = 1367501184890LL;
	volatile int32_t t22 = 270946;

	t22 = (x101==(x102-(x103+x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x105 = UINT8_MAX;
	int32_t x106 = INT32_MIN;
	int8_t x107 = 18;
	int8_t x108 = INT8_MIN;
	int32_t t23 = -49640;

	t23 = (x105==(x106-(x107+x108)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint16_t x113 = 108U;
	static int32_t x114 = 7400;
	uint64_t x115 = 6517LLU;

	t24 = (x113==(x114-(x115+x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x117 = INT64_MIN;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = 17;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t25 = -232;

	t25 = (x117==(x118-(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x122 = 112732008LLU;
	int64_t x123 = 6LL;
	static int16_t x124 = INT16_MIN;
	int32_t t26 = -607928718;

	t26 = (x121==(x122-(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x125 = 0U;
	uint64_t x127 = 21756744LLU;
	volatile int8_t x128 = INT8_MIN;
	volatile int32_t t27 = -251788;

	t27 = (x125==(x126-(x127+x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x130 = UINT8_MAX;
	static int32_t x131 = -1;
	volatile int32_t x132 = INT32_MAX;
	static int32_t t28 = -1;

	t28 = (x129==(x130-(x131+x132)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = 11179260121LL;
	int16_t x135 = -1;
	static int32_t t29 = 23931;

	t29 = (x133==(x134-(x135+x136)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x142 = 0LLU;
	volatile uint64_t x143 = UINT64_MAX;
	int16_t x144 = 111;
	int32_t t30 = 106;

	t30 = (x141==(x142-(x143+x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x146 = UINT64_MAX;
	volatile int16_t x147 = -2854;
	uint16_t x148 = 3U;

	t31 = (x145==(x146-(x147+x148)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x149 = -34;
	int64_t x151 = -1LL;
	volatile int32_t t32 = -144056502;

	t32 = (x149==(x150-(x151+x152)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x153 = UINT16_MAX;
	static volatile int8_t x154 = 1;
	static int8_t x155 = 1;
	volatile uint16_t x156 = 3312U;
	int32_t t33 = -3617;

	t33 = (x153==(x154-(x155+x156)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x159 = UINT8_MAX;
	int8_t x160 = INT8_MIN;

	t34 = (x157==(x158-(x159+x160)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = -1LL;
	int8_t x163 = -1;
	int16_t x164 = -1;
	int32_t t35 = -5291588;

	t35 = (x161==(x162-(x163+x164)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x165 = -1;
	static int16_t x166 = -1;
	int8_t x167 = INT8_MIN;
	static volatile int32_t t36 = 43;

	t36 = (x165==(x166-(x167+x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x178 = -4;
	int8_t x179 = 58;
	static volatile int32_t t37 = 30941;

	t37 = (x177==(x178-(x179+x180)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -2;
	int8_t x184 = INT8_MAX;
	int32_t t38 = 52500917;

	t38 = (x181==(x182-(x183+x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x185 = INT64_MAX;
	volatile int32_t x186 = 0;
	volatile int64_t x187 = INT64_MIN;
	int32_t t39 = 7;

	t39 = (x185==(x186-(x187+x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MIN;
	int32_t x196 = INT32_MIN;
	volatile int32_t t40 = -2140;

	t40 = (x193==(x194-(x195+x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int32_t x202 = -1;
	static int16_t x203 = INT16_MIN;
	static int32_t t41 = -9;

	t41 = (x201==(x202-(x203+x204)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x209 = -40348;
	uint16_t x210 = 1U;
	static int16_t x211 = 408;
	int32_t t42 = 278;

	t42 = (x209==(x210-(x211+x212)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x213 = -1;
	uint8_t x214 = 2U;
	uint16_t x215 = 12U;
	uint16_t x216 = UINT16_MAX;
	int32_t t43 = -43461;

	t43 = (x213==(x214-(x215+x216)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 740396LLU;
	uint64_t x222 = UINT64_MAX;
	static uint16_t x223 = 1U;
	int64_t x224 = INT64_MIN;
	int32_t t44 = 47;

	t44 = (x221==(x222-(x223+x224)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 342U;
	static int16_t x231 = INT16_MIN;
	uint32_t x232 = 0U;
	static volatile int32_t t45 = 1;

	t45 = (x229==(x230-(x231+x232)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x236 = 2033592LL;
	int32_t t46 = -66178824;

	t46 = (x233==(x234-(x235+x236)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = -1;
	static uint8_t x238 = UINT8_MAX;
	int8_t x240 = INT8_MIN;
	volatile int32_t t47 = 188;

	t47 = (x237==(x238-(x239+x240)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = 1;
	uint32_t x242 = 830U;
	volatile uint32_t x243 = UINT32_MAX;
	static int16_t x244 = -1;
	volatile int32_t t48 = -17;

	t48 = (x241==(x242-(x243+x244)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 9419820713776344LLU;
	int32_t x252 = INT32_MIN;
	volatile int32_t t49 = 5664;

	t49 = (x249==(x250-(x251+x252)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MIN;
	volatile uint8_t x255 = 14U;
	int16_t x256 = 13;
	int32_t t50 = 3;

	t50 = (x253==(x254-(x255+x256)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = UINT64_MAX;
	uint8_t x258 = 87U;
	int16_t x259 = INT16_MAX;
	int8_t x260 = 63;
	volatile int32_t t51 = -4;

	t51 = (x257==(x258-(x259+x260)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x261 = 4;
	uint8_t x262 = 1U;
	int64_t x263 = -29215094399885146LL;
	int64_t x264 = INT64_MAX;
	static volatile int32_t t52 = 48391977;

	t52 = (x261==(x262-(x263+x264)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x265 = INT32_MAX;
	int64_t x266 = 1070LL;
	static volatile int32_t x267 = 38;
	int8_t x268 = 45;

	t53 = (x265==(x266-(x267+x268)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 3289533276LLU;
	uint8_t x274 = 108U;
	uint32_t x276 = UINT32_MAX;
	volatile int32_t t54 = 797562716;

	t54 = (x273==(x274-(x275+x276)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x282 = INT8_MAX;
	uint32_t x283 = 12U;

	t55 = (x281==(x282-(x283+x284)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = -1;
	int8_t x286 = INT8_MIN;
	int32_t x288 = -1;

	t56 = (x285==(x286-(x287+x288)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x289 = UINT64_MAX;
	int64_t x290 = -779592131081326LL;
	volatile int8_t x291 = 1;
	volatile int16_t x292 = INT16_MIN;
	static volatile int32_t t57 = -1;

	t57 = (x289==(x290-(x291+x292)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x293 = -1;
	volatile int8_t x294 = -1;
	static int32_t x295 = 318560;
	int64_t x296 = INT64_MIN;
	static volatile int32_t t58 = -310;

	t58 = (x293==(x294-(x295+x296)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MIN;
	int16_t x300 = INT16_MIN;

	t59 = (x297==(x298-(x299+x300)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x313 = INT16_MAX;
	int32_t x314 = INT32_MAX;
	int32_t x315 = -1;
	static volatile uint32_t x316 = 220U;
	int32_t t60 = 1046684;

	t60 = (x313==(x314-(x315+x316)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = -1;
	uint64_t x318 = 306345675210282LLU;
	volatile int8_t x319 = INT8_MAX;
	int32_t x320 = 416;

	t61 = (x317==(x318-(x319+x320)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x321 = 1;
	static int16_t x322 = -1;
	uint64_t x323 = UINT64_MAX;
	uint8_t x324 = 32U;
	static volatile int32_t t62 = 45590221;

	t62 = (x321==(x322-(x323+x324)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x325 = -1;
	int32_t x326 = -1;
	static uint16_t x327 = 812U;
	uint16_t x328 = 16667U;

	t63 = (x325==(x326-(x327+x328)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x333 = 1U;
	static uint32_t x334 = UINT32_MAX;
	volatile int8_t x335 = 13;
	uint16_t x336 = UINT16_MAX;
	int32_t t64 = -23208;

	t64 = (x333==(x334-(x335+x336)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = INT8_MIN;
	volatile int16_t x338 = INT16_MAX;
	uint8_t x340 = UINT8_MAX;
	int32_t t65 = 5983;

	t65 = (x337==(x338-(x339+x340)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x341 = 117;
	int32_t x343 = -3088291;
	int16_t x344 = INT16_MIN;
	static volatile int32_t t66 = -5;

	t66 = (x341==(x342-(x343+x344)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x345 = INT32_MIN;
	static int32_t x346 = -4100;
	volatile int64_t x347 = -3033707368LL;
	uint8_t x348 = UINT8_MAX;
	int32_t t67 = -2;

	t67 = (x345==(x346-(x347+x348)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x349 = UINT32_MAX;
	int32_t x350 = 3350;
	static int32_t x351 = INT32_MAX;
	uint64_t x352 = 3885140322111324LLU;
	static volatile int32_t t68 = -300443;

	t68 = (x349==(x350-(x351+x352)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x353 = INT32_MIN;
	uint64_t x354 = 2661099285485562026LLU;
	volatile int32_t t69 = 1;

	t69 = (x353==(x354-(x355+x356)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	int32_t x359 = -8285704;
	volatile uint16_t x360 = 0U;
	int32_t t70 = 49939478;

	t70 = (x357==(x358-(x359+x360)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x370 = 149LLU;
	static uint64_t x371 = 85LLU;
	uint32_t x372 = 465718U;
	int32_t t71 = 429492;

	t71 = (x369==(x370-(x371+x372)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x373 = UINT16_MAX;
	int64_t x374 = -1LL;
	uint64_t x375 = 5292LLU;
	int16_t x376 = INT16_MAX;
	volatile int32_t t72 = -27619687;

	t72 = (x373==(x374-(x375+x376)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	int32_t x382 = -1;
	uint16_t x383 = 390U;
	int64_t x384 = INT64_MIN;
	volatile int32_t t73 = 1072813;

	t73 = (x381==(x382-(x383+x384)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = 19466LL;
	int16_t x392 = -2220;
	static volatile int32_t t74 = 5817;

	t74 = (x389==(x390-(x391+x392)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x394 = 0U;
	uint8_t x395 = 3U;
	uint32_t x396 = 198501102U;
	int32_t t75 = 465;

	t75 = (x393==(x394-(x395+x396)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x401 = UINT8_MAX;
	uint64_t x402 = 22540691802LLU;
	int32_t x403 = INT32_MAX;
	int16_t x404 = -1;
	int32_t t76 = 787899809;

	t76 = (x401==(x402-(x403+x404)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x406 = INT32_MAX;
	int8_t x407 = -31;

	t77 = (x405==(x406-(x407+x408)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x409 = INT8_MIN;
	static int16_t x411 = INT16_MIN;
	int32_t t78 = 141426;

	t78 = (x409==(x410-(x411+x412)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x413 = 4;
	int16_t x414 = -1;
	volatile int64_t x415 = INT64_MAX;
	int8_t x416 = -1;

	t79 = (x413==(x414-(x415+x416)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x417 = 13U;
	uint32_t x418 = 34308U;
	int32_t x419 = INT32_MAX;
	volatile int16_t x420 = INT16_MIN;
	volatile int32_t t80 = -27295;

	t80 = (x417==(x418-(x419+x420)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x427 = INT16_MAX;
	int16_t x428 = -1735;
	volatile int32_t t81 = 11650;

	t81 = (x425==(x426-(x427+x428)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x429 = 2;
	uint8_t x431 = UINT8_MAX;
	uint16_t x432 = 47U;

	t82 = (x429==(x430-(x431+x432)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x433 = 3;
	int8_t x434 = -1;
	uint64_t x435 = 173541LLU;
	int64_t x436 = -10700077101LL;

	t83 = (x433==(x434-(x435+x436)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x441 = INT32_MIN;
	uint32_t x442 = 2U;
	volatile uint32_t x443 = UINT32_MAX;
	int32_t t84 = -2950981;

	t84 = (x441==(x442-(x443+x444)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x445 = INT64_MIN;
	int32_t t85 = 32590;

	t85 = (x445==(x446-(x447+x448)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x451 = UINT64_MAX;
	int32_t x452 = INT32_MIN;
	volatile int32_t t86 = -20795;

	t86 = (x449==(x450-(x451+x452)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x453 = -1LL;
	uint32_t x454 = UINT32_MAX;
	uint8_t x455 = UINT8_MAX;
	static int16_t x456 = INT16_MIN;
	volatile int32_t t87 = -15064202;

	t87 = (x453==(x454-(x455+x456)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x457 = 6;
	int8_t x458 = -1;
	int64_t x459 = 93766235626LL;
	uint16_t x460 = 38U;

	t88 = (x457==(x458-(x459+x460)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x461 = 2;
	int8_t x462 = INT8_MIN;
	uint8_t x463 = UINT8_MAX;
	int64_t x464 = INT64_MIN;
	volatile int32_t t89 = 10723;

	t89 = (x461==(x462-(x463+x464)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x470 = -2172936918890875726LL;
	int16_t x471 = -1;
	volatile int16_t x472 = -1;
	volatile int32_t t90 = 10232;

	t90 = (x469==(x470-(x471+x472)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x473 = INT16_MIN;
	int8_t x475 = INT8_MAX;
	int64_t x476 = -1LL;
	static volatile int32_t t91 = 1882;

	t91 = (x473==(x474-(x475+x476)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x477 = 11421U;
	static int32_t x478 = -1;
	static uint8_t x479 = 40U;
	static uint16_t x480 = UINT16_MAX;
	volatile int32_t t92 = -2;

	t92 = (x477==(x478-(x479+x480)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x481 = INT32_MIN;
	static uint16_t x482 = UINT16_MAX;
	uint16_t x483 = 8096U;
	static int8_t x484 = INT8_MAX;
	int32_t t93 = 19;

	t93 = (x481==(x482-(x483+x484)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x489 = INT8_MIN;
	static uint32_t x490 = UINT32_MAX;
	int16_t x491 = 1;
	static volatile int32_t t94 = 13394765;

	t94 = (x489==(x490-(x491+x492)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x494 = UINT8_MAX;
	static int32_t x495 = INT32_MIN;
	uint64_t x496 = 507914965LLU;

	t95 = (x493==(x494-(x495+x496)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x497 = INT16_MIN;
	uint32_t x498 = 4U;
	uint32_t x499 = 49U;
	int16_t x500 = -303;
	volatile int32_t t96 = -5;

	t96 = (x497==(x498-(x499+x500)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x506 = 1;
	int16_t x507 = 8202;
	int32_t t97 = 521;

	t97 = (x505==(x506-(x507+x508)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x513 = -1;
	volatile uint64_t x514 = 4LLU;
	int32_t t98 = -1959700;

	t98 = (x513==(x514-(x515+x516)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x517 = -1;
	int64_t x518 = -1LL;
	volatile uint32_t x519 = UINT32_MAX;
	uint64_t x520 = 236601110228214506LLU;
	static int32_t t99 = -1;

	t99 = (x517==(x518-(x519+x520)));

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

