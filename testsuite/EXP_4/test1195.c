#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = INT8_MIN;
int32_t x3 = INT32_MIN;
int32_t t0 = -29;
volatile uint8_t x8 = 1U;
volatile int64_t t1 = 0LL;
volatile int32_t x13 = INT32_MAX;
int8_t x14 = -12;
int32_t x18 = INT32_MIN;
int32_t x20 = INT32_MAX;
int32_t t4 = -1;
uint32_t x24 = UINT32_MAX;
uint64_t t7 = UINT64_MAX;
volatile int32_t t8 = 61664;
volatile int64_t x42 = -1LL;
static int64_t t10 = 17496LL;
int64_t x45 = -27152LL;
static uint16_t x46 = 1559U;
int64_t x47 = 8576419011937647LL;
int16_t x52 = INT16_MIN;
volatile int32_t t12 = -2835;
volatile int32_t t13 = 130319032;
static uint16_t x59 = 120U;
static int32_t x60 = INT32_MIN;
uint64_t t14 = 296800606988591601LLU;
static int16_t x72 = -1;
volatile uint16_t x76 = UINT16_MAX;
int8_t x79 = INT8_MIN;
uint16_t x81 = 210U;
static uint32_t x82 = 4598U;
uint64_t x86 = UINT64_MAX;
uint32_t x87 = 574204U;
volatile int8_t x105 = INT8_MIN;
static volatile int8_t x106 = -27;
uint64_t x115 = 998845LLU;
volatile uint32_t t27 = 1574U;
uint8_t x127 = 3U;
volatile int32_t t31 = 11661;
int8_t x136 = 7;
int8_t x137 = INT8_MIN;
int32_t x141 = INT32_MIN;
uint8_t x146 = 11U;
int8_t x152 = 1;
volatile uint64_t t36 = UINT64_MAX;
int16_t x153 = -6489;
uint16_t x159 = UINT16_MAX;
uint64_t x164 = 0LLU;
static int64_t x167 = 3363748LL;
static int64_t x169 = INT64_MIN;
volatile int64_t t43 = 56619510398580LL;
static volatile int32_t t45 = 23822;
int8_t x206 = -1;
int32_t t50 = 3;
int8_t x209 = -1;
int8_t x212 = INT8_MIN;
static uint16_t x215 = 15908U;
uint8_t x216 = 48U;
uint32_t x220 = 28960783U;
int64_t x221 = -1706178LL;
static int32_t x224 = 577;
volatile int64_t t54 = -53861827981741221LL;
volatile int64_t x225 = INT64_MAX;
uint64_t x232 = 15160809LLU;
static int16_t x240 = INT16_MIN;
static int32_t t58 = INT32_MAX;
int32_t x242 = -1;
volatile int16_t x249 = INT16_MIN;
uint64_t x250 = UINT64_MAX;
int32_t x254 = INT32_MIN;
uint32_t x256 = 28001449U;
uint64_t x258 = UINT64_MAX;
int64_t x261 = INT64_MAX;
static int64_t t64 = -6LL;
static int64_t t65 = 56799362LL;
int32_t t66 = -1326;
int32_t x276 = INT32_MIN;
int8_t x278 = INT8_MAX;
uint32_t x281 = 88186U;
int16_t x282 = 38;
int16_t x290 = INT16_MAX;
int16_t x291 = INT16_MIN;
int32_t t70 = -323474309;
uint32_t x296 = UINT32_MAX;
static volatile int64_t t71 = 87889LL;
int8_t x298 = INT8_MIN;
int8_t x299 = 0;
int32_t x310 = INT32_MIN;
volatile int32_t x311 = INT32_MIN;
volatile int64_t x312 = 1926LL;
int64_t x316 = -1LL;
int64_t t77 = 27LL;
uint64_t x322 = 273776884LLU;
volatile uint64_t x325 = UINT64_MAX;
uint32_t x327 = UINT32_MAX;
uint32_t x335 = 9U;
static volatile int8_t x338 = -1;
volatile int8_t x342 = INT8_MIN;
volatile int32_t t83 = 44063;
int32_t x351 = 691;
int32_t x359 = INT32_MIN;
int16_t x360 = INT16_MIN;
uint16_t x363 = UINT16_MAX;
uint64_t t89 = 1199045577476195695LLU;
int32_t x370 = INT32_MIN;
volatile int8_t x374 = 0;
int32_t t91 = -449381;
int8_t x377 = INT8_MIN;
int8_t x382 = -1;
static int16_t x384 = INT16_MAX;
int16_t x387 = INT16_MAX;
static uint64_t x390 = 2LLU;
static uint64_t t95 = 30LLU;
int32_t t96 = 96;
int32_t x403 = INT32_MIN;
static volatile int64_t x406 = 5364782LL;
int32_t x407 = -46291773;


void f0(void) {
	volatile int32_t x2 = -1;
	uint32_t x4 = 727703412U;

	t0 = (x1|(x2+(x3==x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MIN;
	int32_t x6 = INT32_MAX;
	int32_t x7 = 232784815;

	t1 = (x5|(x6+(x7==x8)));

	if (t1 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 14U;
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	volatile int16_t x12 = 1782;
	int32_t t2 = 13;

	t2 = (x9|(x10+(x11==x12)));

	if (t2 != 32767) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MIN;
	int16_t x16 = INT16_MIN;
	static int32_t t3 = 435429974;

	t3 = (x13|(x14+(x15==x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int32_t x19 = -274;

	t4 = (x17|(x18+(x19==x20)));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile uint8_t x22 = 4U;
	volatile uint64_t x23 = UINT64_MAX;
	static volatile int32_t t5 = 38265;

	t5 = (x21|(x22+(x23==x24)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 189U;
	int8_t x26 = INT8_MIN;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = INT8_MAX;
	volatile int32_t t6 = -149407;

	t6 = (x25|(x26+(x27==x28)));

	if (t6 != -67) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = UINT64_MAX;
	static int8_t x31 = INT8_MAX;
	int8_t x32 = -1;

	t7 = (x29|(x30+(x31==x32)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = 1;
	int32_t x34 = -1;
	uint32_t x35 = UINT32_MAX;
	int16_t x36 = -3968;

	t8 = (x33|(x34+(x35==x36)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	static int64_t x38 = INT64_MAX;
	uint8_t x39 = UINT8_MAX;
	int16_t x40 = 40;
	static volatile int64_t t9 = INT64_MAX;

	t9 = (x37|(x38+(x39==x40)));

	if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile int8_t x43 = INT8_MAX;
	static int64_t x44 = -20013678875788LL;

	t10 = (x41|(x42+(x43==x44)));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x48 = INT64_MAX;
	int64_t t11 = -1424908776LL;

	t11 = (x45|(x46+(x47==x48)));

	if (t11 != -26633LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x50 = 1411U;
	volatile uint32_t x51 = UINT32_MAX;

	t12 = (x49|(x50+(x51==x52)));

	if (t12 != -31357) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = -24;
	uint8_t x54 = 85U;
	static int8_t x55 = INT8_MIN;
	uint64_t x56 = 31196100LLU;

	t13 = (x53|(x54+(x55==x56)));

	if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 1807LL;
	volatile uint64_t x58 = 72871619LLU;

	t14 = (x57|(x58+(x59==x60)));

	if (t14 != 72871887LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MIN;
	static int32_t x62 = INT32_MIN;
	int32_t x63 = -1;
	int64_t x64 = -159923036LL;
	static int32_t t15 = 240765;

	t15 = (x61|(x62+(x63==x64)));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	static int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MAX;
	int64_t t16 = 14211736LL;

	t16 = (x65|(x66+(x67==x68)));

	if (t16 != -127LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	static volatile uint64_t x70 = 2582494363840LLU;
	int8_t x71 = 13;
	uint64_t t17 = 5142282156518712LLU;

	t17 = (x69|(x70+(x71==x72)));

	if (t17 != 9223374619349139648LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	volatile int64_t x74 = 1759892637269LL;
	int64_t x75 = -1LL;
	int64_t t18 = 10908076LL;

	t18 = (x73|(x74+(x75==x76)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 0U;
	int32_t x78 = INT32_MIN;
	static int32_t x80 = 1841484;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x77|(x78+(x79==x80)));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	static volatile uint32_t t20 = 31311U;

	t20 = (x81|(x82+(x83==x84)));

	if (t20 != 4598U) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	int8_t x88 = INT8_MAX;
	uint64_t t21 = UINT64_MAX;

	t21 = (x85|(x86+(x87==x88)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	volatile int32_t x90 = INT32_MIN;
	int8_t x91 = -1;
	volatile int16_t x92 = INT16_MIN;
	int32_t t22 = 145358384;

	t22 = (x89|(x90+(x91==x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 1;
	int64_t x94 = -41655300LL;
	volatile int16_t x95 = -73;
	volatile int32_t x96 = INT32_MIN;
	int64_t t23 = -44506847LL;

	t23 = (x93|(x94+(x95==x96)));

	if (t23 != -41655299LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	static volatile uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 5672449790LLU;
	static int16_t x100 = 1;
	static int32_t t24 = -191474454;

	t24 = (x97|(x98+(x99==x100)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x107 = 22062302U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -139952;

	t25 = (x105|(x106+(x107==x108)));

	if (t25 != -27) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = INT64_MIN;
	uint32_t x110 = UINT32_MAX;
	int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	volatile int64_t t26 = -1943LL;

	t26 = (x109|(x110+(x111==x112)));

	if (t26 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x113 = 502846U;
	int16_t x114 = INT16_MIN;
	volatile uint64_t x116 = UINT64_MAX;

	t27 = (x113|(x114+(x115==x116)));

	if (t27 != 4294945854U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	uint32_t x118 = 3U;
	static int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MAX;
	static volatile uint32_t t28 = 25U;

	t28 = (x117|(x118+(x119==x120)));

	if (t28 != 2147483651U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x121 = 605;
	int16_t x122 = INT16_MIN;
	volatile uint32_t x123 = UINT32_MAX;
	uint8_t x124 = 47U;
	static volatile int32_t t29 = -991;

	t29 = (x121|(x122+(x123==x124)));

	if (t29 != -32163) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	uint16_t x126 = UINT16_MAX;
	int32_t x128 = INT32_MAX;
	static volatile uint64_t t30 = UINT64_MAX;

	t30 = (x125|(x126+(x127==x128)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = -14;
	volatile int8_t x130 = INT8_MIN;
	volatile int64_t x131 = -1LL;
	volatile int32_t x132 = INT32_MIN;

	t31 = (x129|(x130+(x131==x132)));

	if (t31 != -14) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 246LLU;
	int8_t x134 = -1;
	int8_t x135 = 10;
	static uint64_t t32 = UINT64_MAX;

	t32 = (x133|(x134+(x135==x136)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x138 = 67U;
	int64_t x139 = -1LL;
	int8_t x140 = INT8_MAX;
	volatile int32_t t33 = -195815926;

	t33 = (x137|(x138+(x139==x140)));

	if (t33 != -61) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	static int8_t x144 = 0;
	volatile int32_t t34 = 18453;

	t34 = (x141|(x142+(x143==x144)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = INT32_MIN;
	volatile int64_t x147 = INT64_MIN;
	static uint32_t x148 = 3671U;
	volatile int32_t t35 = 1988;

	t35 = (x145|(x146+(x147==x148)));

	if (t35 != -2147483637) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x149 = UINT64_MAX;
	int64_t x150 = -1LL;
	static int64_t x151 = -5131449916910LL;

	t36 = (x149|(x150+(x151==x152)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x154 = INT64_MIN;
	uint8_t x155 = UINT8_MAX;
	int16_t x156 = 555;
	static int64_t t37 = -527LL;

	t37 = (x153|(x154+(x155==x156)));

	if (t37 != -6489LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	static int8_t x158 = 25;
	int64_t x160 = -1LL;
	int32_t t38 = -812047;

	t38 = (x157|(x158+(x159==x160)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = -1;
	int16_t x162 = 238;
	int64_t x163 = -1LL;
	int32_t t39 = 241476132;

	t39 = (x161|(x162+(x163==x164)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 2050721347LLU;
	static uint16_t x166 = 2472U;
	uint64_t x168 = 1671266448692LLU;
	volatile uint64_t t40 = 2629LLU;

	t40 = (x165|(x166+(x167==x168)));

	if (t40 != 2050723819LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x170 = INT32_MIN;
	volatile int8_t x171 = INT8_MAX;
	volatile uint16_t x172 = 18597U;
	static int64_t t41 = 1LL;

	t41 = (x169|(x170+(x171==x172)));

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint8_t x174 = UINT8_MAX;
	static uint32_t x175 = 2018971U;
	uint16_t x176 = UINT16_MAX;
	int32_t t42 = -3;

	t42 = (x173|(x174+(x175==x176)));

	if (t42 != -2147483393) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = -4;
	volatile uint16_t x179 = 51U;
	int32_t x180 = INT32_MIN;

	t43 = (x177|(x178+(x179==x180)));

	if (t43 != -4LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = -1;
	static volatile int64_t x182 = -1LL;
	static int64_t x183 = INT64_MAX;
	int32_t x184 = INT32_MIN;
	static int64_t t44 = -125237784LL;

	t44 = (x181|(x182+(x183==x184)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x185 = 1U;
	volatile int32_t x186 = 13154;
	int16_t x187 = -1;
	int32_t x188 = INT32_MIN;

	t45 = (x185|(x186+(x187==x188)));

	if (t45 != 13155) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 2U;
	uint32_t x190 = 192003U;
	static int64_t x191 = INT64_MAX;
	int64_t x192 = 54672867168395006LL;
	static uint32_t t46 = 29665560U;

	t46 = (x189|(x190+(x191==x192)));

	if (t46 != 192003U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -16;
	static volatile uint8_t x194 = 3U;
	int32_t x195 = -1;
	uint8_t x196 = 29U;
	volatile int32_t t47 = -464;

	t47 = (x193|(x194+(x195==x196)));

	if (t47 != -13) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1467;
	int8_t x198 = -29;
	int32_t x199 = -1;
	uint64_t x200 = 544LLU;
	int32_t t48 = 28;

	t48 = (x197|(x198+(x199==x200)));

	if (t48 != -25) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x201 = INT32_MIN;
	volatile int8_t x202 = INT8_MAX;
	int64_t x203 = -41225985096530191LL;
	int8_t x204 = INT8_MIN;
	int32_t t49 = -6911129;

	t49 = (x201|(x202+(x203==x204)));

	if (t49 != -2147483521) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x207 = INT8_MAX;
	static volatile uint16_t x208 = 741U;

	t50 = (x205|(x206+(x207==x208)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x210 = -2;
	int32_t x211 = 7;
	static int32_t t51 = -92;

	t51 = (x209|(x210+(x211==x212)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x213 = UINT8_MAX;
	int32_t x214 = INT32_MIN;
	int32_t t52 = -117501457;

	t52 = (x213|(x214+(x215==x216)));

	if (t52 != -2147483393) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 906954563597LLU;
	static volatile int8_t x218 = INT8_MIN;
	static int32_t x219 = -1;
	uint64_t t53 = 293437143617LLU;

	t53 = (x217|(x218+(x219==x220)));

	if (t53 != 18446744073709551501LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x222 = -3529608362254LL;
	static int8_t x223 = 1;

	t54 = (x221|(x222+(x223==x224)));

	if (t54 != -526338LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x226 = 86U;
	volatile uint32_t x227 = UINT32_MAX;
	int32_t x228 = INT32_MIN;
	volatile int64_t t55 = INT64_MAX;

	t55 = (x225|(x226+(x227==x228)));

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x229 = 45053161794005LLU;
	uint32_t x230 = 180U;
	volatile int64_t x231 = 1194846LL;
	uint64_t t56 = 326776377LLU;

	t56 = (x229|(x230+(x231==x232)));

	if (t56 != 45053161794037LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = 9;
	volatile int8_t x234 = -7;
	int8_t x235 = INT8_MIN;
	int32_t x236 = -1;
	volatile int32_t t57 = 6549;

	t57 = (x233|(x234+(x235==x236)));

	if (t57 != -7) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MAX;
	int32_t x238 = INT32_MAX;
	volatile uint32_t x239 = 13368920U;

	t58 = (x237|(x238+(x239==x240)));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x241 = 1U;
	static uint16_t x243 = UINT16_MAX;
	int16_t x244 = INT16_MIN;
	int32_t t59 = -98;

	t59 = (x241|(x242+(x243==x244)));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = INT32_MIN;
	static uint32_t x246 = 11U;
	int8_t x247 = INT8_MAX;
	int16_t x248 = -248;
	uint32_t t60 = 140U;

	t60 = (x245|(x246+(x247==x248)));

	if (t60 != 2147483659U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x251 = -2064094;
	uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t61 = UINT64_MAX;

	t61 = (x249|(x250+(x251==x252)));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = INT8_MAX;
	static int8_t x255 = -42;
	int32_t t62 = 11071472;

	t62 = (x253|(x254+(x255==x256)));

	if (t62 != -2147483521) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = -1260LL;
	int32_t x259 = INT32_MAX;
	uint16_t x260 = 104U;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = (x257|(x258+(x259==x260)));

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x262 = -114;
	uint32_t x263 = 1454297413U;
	static uint32_t x264 = UINT32_MAX;

	t64 = (x261|(x262+(x263==x264)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MAX;
	int16_t x268 = 7;

	t65 = (x265|(x266+(x267==x268)));

	if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = 0;
	int8_t x270 = -1;
	int16_t x271 = INT16_MAX;
	int16_t x272 = -1902;

	t66 = (x269|(x270+(x271==x272)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x273 = 2743510756946LL;
	uint16_t x274 = 28004U;
	int8_t x275 = INT8_MIN;
	volatile int64_t t67 = -165824LL;

	t67 = (x273|(x274+(x275==x276)));

	if (t67 != 2743510757238LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x277 = INT32_MAX;
	uint64_t x279 = UINT64_MAX;
	uint8_t x280 = 8U;
	static volatile int32_t t68 = INT32_MAX;

	t68 = (x277|(x278+(x279==x280)));

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x283 = INT64_MAX;
	int8_t x284 = -5;
	volatile uint32_t t69 = 116U;

	t69 = (x281|(x282+(x283==x284)));

	if (t69 != 88190U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x289 = -1;
	static int32_t x292 = INT32_MIN;

	t70 = (x289|(x290+(x291==x292)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = 3878LL;
	uint8_t x294 = 3U;
	int64_t x295 = INT64_MAX;

	t71 = (x293|(x294+(x295==x296)));

	if (t71 != 3879LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x297 = INT64_MIN;
	uint64_t x300 = UINT64_MAX;
	int64_t t72 = 0LL;

	t72 = (x297|(x298+(x299==x300)));

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x301 = -19857;
	uint32_t x302 = 569U;
	uint8_t x303 = 39U;
	static uint16_t x304 = 1238U;
	static uint32_t t73 = 3905U;

	t73 = (x301|(x302+(x303==x304)));

	if (t73 != 4294947455U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x305 = -1;
	volatile int8_t x306 = -1;
	uint32_t x307 = UINT32_MAX;
	int32_t x308 = -547615;
	volatile int32_t t74 = -3;

	t74 = (x305|(x306+(x307==x308)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = 0;
	int32_t t75 = INT32_MIN;

	t75 = (x309|(x310+(x311==x312)));

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x313 = -10;
	static volatile uint32_t x314 = UINT32_MAX;
	int8_t x315 = -9;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (x313|(x314+(x315==x316)));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = 55;
	int64_t x318 = INT64_MIN;
	int64_t x319 = 1531LL;
	volatile uint64_t x320 = 769LLU;

	t77 = (x317|(x318+(x319==x320)));

	if (t77 != -9223372036854775753LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x321 = 14086758500291661LLU;
	volatile int32_t x323 = INT32_MAX;
	uint16_t x324 = 5427U;
	uint64_t t78 = 47953999791LLU;

	t78 = (x321|(x322+(x323==x324)));

	if (t78 != 14086758768825597LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x326 = 238974741U;
	int64_t x328 = INT64_MAX;
	uint64_t t79 = UINT64_MAX;

	t79 = (x325|(x326+(x327==x328)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x329 = 88U;
	uint32_t x330 = 203810250U;
	int16_t x331 = INT16_MAX;
	int8_t x332 = 7;
	volatile uint32_t t80 = 130217756U;

	t80 = (x329|(x330+(x331==x332)));

	if (t80 != 203810266U) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x333 = 66568556;
	volatile uint64_t x334 = 986669239LLU;
	static uint32_t x336 = UINT32_MAX;
	volatile uint64_t t81 = 991129659362061693LLU;

	t81 = (x333|(x334+(x335==x336)));

	if (t81 != 1006625279LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x337 = 15957380146298726LL;
	int32_t x339 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;
	int64_t t82 = -1LL;

	t82 = (x337|(x338+(x339==x340)));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x341 = INT8_MIN;
	int16_t x343 = 80;
	int16_t x344 = 145;

	t83 = (x341|(x342+(x343==x344)));

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x345 = 7921U;
	uint32_t x346 = UINT32_MAX;
	int16_t x347 = -3329;
	static volatile int64_t x348 = -1LL;
	volatile uint32_t t84 = UINT32_MAX;

	t84 = (x345|(x346+(x347==x348)));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x349 = INT8_MAX;
	uint64_t x350 = UINT64_MAX;
	int8_t x352 = -1;
	static volatile uint64_t t85 = UINT64_MAX;

	t85 = (x349|(x350+(x351==x352)));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = 10;
	int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MAX;
	int32_t t86 = -222;

	t86 = (x353|(x354+(x355==x356)));

	if (t86 != -118) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = INT64_MIN;
	int16_t x358 = INT16_MAX;
	static volatile int64_t t87 = -773LL;

	t87 = (x357|(x358+(x359==x360)));

	if (t87 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = UINT32_MAX;
	int64_t x362 = INT64_MAX;
	int8_t x364 = INT8_MAX;
	int64_t t88 = INT64_MAX;

	t88 = (x361|(x362+(x363==x364)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x365 = 3415LLU;
	uint32_t x366 = UINT32_MAX;
	static int16_t x367 = INT16_MIN;
	static int64_t x368 = INT64_MIN;

	t89 = (x365|(x366+(x367==x368)));

	if (t89 != 4294967295LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x369 = 2466588LL;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = -7;
	int64_t t90 = 5LL;

	t90 = (x369|(x370+(x371==x372)));

	if (t90 != -2145017060LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x373 = 106U;
	uint64_t x375 = UINT64_MAX;
	int32_t x376 = -55819464;

	t91 = (x373|(x374+(x375==x376)));

	if (t91 != 106) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x378 = -11;
	int32_t x379 = INT32_MAX;
	int16_t x380 = INT16_MAX;
	int32_t t92 = -1702374;

	t92 = (x377|(x378+(x379==x380)));

	if (t92 != -11) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x381 = 1;
	uint16_t x383 = 1U;
	int32_t t93 = 99;

	t93 = (x381|(x382+(x383==x384)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x385 = UINT16_MAX;
	volatile uint32_t x386 = 7374013U;
	static int32_t x388 = 199;
	uint32_t t94 = 413U;

	t94 = (x385|(x386+(x387==x388)));

	if (t94 != 7405567U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int8_t x391 = INT8_MIN;
	static uint8_t x392 = UINT8_MAX;

	t95 = (x389|(x390+(x391==x392)));

	if (t95 != 4294967295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -1054378377;
	static uint16_t x394 = 806U;
	volatile int64_t x395 = -1LL;
	int32_t x396 = 56194;

	t96 = (x393|(x394+(x395==x396)));

	if (t96 != -1054378121) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x397 = 317273600;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = INT16_MIN;
	int32_t x400 = INT32_MAX;
	static volatile int64_t t97 = -319243381066976LL;

	t97 = (x397|(x398+(x399==x400)));

	if (t97 != -9223372036537502208LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = 10;
	volatile uint32_t x402 = 12585U;
	static int32_t x404 = -1;
	uint32_t t98 = 992U;

	t98 = (x401|(x402+(x403==x404)));

	if (t98 != 12587U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = 966;
	static uint64_t x408 = 114389LLU;
	static volatile int64_t t99 = 4862181721510789LL;

	t99 = (x405|(x406+(x407==x408)));

	if (t99 != 5365742LL) { NG(); } else { ; }
	
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

