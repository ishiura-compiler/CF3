#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MAX;
static int32_t x6 = INT32_MIN;
static int64_t x7 = 1438534036142LL;
int8_t x8 = -1;
int32_t x12 = INT32_MIN;
volatile int32_t t2 = 46;
int16_t x18 = INT16_MAX;
volatile int64_t x22 = 980999145285967894LL;
static uint64_t x26 = UINT64_MAX;
volatile int64_t x33 = -1092851LL;
uint64_t x40 = UINT64_MAX;
uint8_t x47 = UINT8_MAX;
int16_t x48 = INT16_MIN;
static int64_t x53 = -1LL;
int64_t x54 = INT64_MIN;
int32_t x56 = INT32_MIN;
static int32_t x57 = 410;
int64_t x65 = -1239242938616998985LL;
volatile uint32_t x70 = UINT32_MAX;
static int32_t x72 = INT32_MIN;
int8_t x76 = INT8_MAX;
static int16_t x78 = INT16_MIN;
int16_t x81 = INT16_MIN;
int32_t x84 = INT32_MIN;
uint16_t x86 = 123U;
int8_t x92 = -59;
int32_t t22 = 20157913;
static int16_t x93 = INT16_MAX;
static uint64_t x97 = 161505413576437LLU;
uint8_t x105 = 3U;
volatile uint16_t x106 = UINT16_MAX;
int32_t x108 = 975105;
int32_t x115 = -1;
int64_t x121 = INT64_MAX;
int32_t x132 = -1;
int32_t t32 = 5;
int8_t x137 = 0;
uint8_t x148 = UINT8_MAX;
int64_t x149 = INT64_MIN;
volatile int8_t x153 = INT8_MIN;
int32_t x158 = -1;
volatile int64_t x160 = -1LL;
static int8_t x179 = INT8_MAX;
int32_t x188 = INT32_MIN;
int32_t x189 = INT32_MIN;
int16_t x195 = INT16_MIN;
volatile int32_t t48 = 33985089;
int8_t x204 = 32;
volatile int32_t t50 = -18317;
int16_t x227 = INT16_MAX;
int8_t x230 = INT8_MIN;
static int8_t x233 = -1;
uint16_t x236 = 5327U;
static int64_t x238 = -1LL;
int16_t x245 = INT16_MAX;
uint32_t x249 = UINT32_MAX;
uint64_t x256 = 1073939658948048826LLU;
uint64_t x261 = 11609LLU;
static volatile int8_t x277 = -29;
static volatile int32_t t67 = -23436658;
volatile int32_t x282 = INT32_MAX;
int16_t x284 = -5551;
int8_t x286 = 9;
int64_t x287 = 19LL;
volatile uint32_t t70 = UINT32_MAX;
int64_t x294 = 132158843687LL;
uint64_t x299 = 26930LLU;
int32_t x301 = INT32_MIN;
int32_t t73 = INT32_MIN;
int64_t x306 = -1LL;
static int8_t x314 = INT8_MIN;
int64_t x321 = -1LL;
uint32_t x322 = UINT32_MAX;
int64_t t78 = -417004037305149LL;
static int32_t x325 = -1;
static int16_t x326 = -1;
int64_t x332 = INT64_MAX;
int32_t x338 = INT32_MAX;
uint64_t x340 = 7133LLU;
int64_t x344 = INT64_MAX;
int64_t x346 = -1LL;
volatile int32_t t85 = -1375;
static int32_t x355 = -1;
static volatile int16_t x356 = 1;
int8_t x358 = -7;
int8_t x360 = -1;
static volatile int64_t t87 = INT64_MIN;
uint16_t x368 = 2011U;
static int16_t x373 = INT16_MIN;
static int32_t x387 = -51;
static uint64_t x388 = 259LLU;
int32_t t94 = 17072;
static volatile int8_t x394 = INT8_MAX;
volatile int16_t x395 = -37;
int32_t x397 = -1;
static int32_t x402 = INT32_MIN;
int16_t x403 = 1;


void f0(void) {
	int16_t x1 = 1;
	int16_t x3 = 6;
	volatile int32_t x4 = INT32_MIN;
	volatile int32_t t0 = 0;

	t0 = (x1^(x2==(x3%x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = -368;
	volatile int32_t t1 = 0;

	t1 = (x5^(x6==(x7%x8)));

	if (t1 != -368) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 584722;
	int16_t x10 = INT16_MIN;
	int32_t x11 = -1;

	t2 = (x9^(x10==(x11%x12)));

	if (t2 != 584722) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x13 = 50U;
	int8_t x14 = INT8_MAX;
	volatile int32_t x15 = 97183096;
	int8_t x16 = INT8_MAX;
	static volatile uint32_t t3 = 3481U;

	t3 = (x13^(x14==(x15%x16)));

	if (t3 != 50U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	volatile int8_t x20 = INT8_MIN;
	static volatile int32_t t4 = INT32_MIN;

	t4 = (x17^(x18==(x19%x20)));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	int64_t x23 = INT64_MIN;
	volatile int64_t x24 = INT64_MAX;
	static int32_t t5 = 59;

	t5 = (x21^(x22==(x23%x24)));

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static int16_t x27 = -1;
	uint64_t x28 = 4148354LLU;
	int32_t t6 = -42;

	t6 = (x25^(x26==(x27%x28)));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	volatile uint64_t x30 = 5587222381114LLU;
	uint32_t x31 = UINT32_MAX;
	int8_t x32 = INT8_MIN;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x29^(x30==(x31%x32)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x34 = INT32_MIN;
	static uint64_t x35 = UINT64_MAX;
	volatile uint32_t x36 = UINT32_MAX;
	volatile int64_t t8 = 22611LL;

	t8 = (x33^(x34==(x35%x36)));

	if (t8 != -1092851LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 636U;
	int8_t x38 = INT8_MIN;
	static int16_t x39 = INT16_MIN;
	static int32_t t9 = 301922;

	t9 = (x37^(x38==(x39%x40)));

	if (t9 != 636) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x41 = -3;
	volatile uint8_t x42 = 2U;
	int16_t x43 = INT16_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -1;

	t10 = (x41^(x42==(x43%x44)));

	if (t10 != -3) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = 10946;
	uint64_t x46 = 3460250117LLU;
	volatile int32_t t11 = 56;

	t11 = (x45^(x46==(x47%x48)));

	if (t11 != 10946) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 3262465336269096505LLU;
	int64_t x50 = INT64_MIN;
	int64_t x51 = INT64_MIN;
	static uint16_t x52 = 48U;
	volatile uint64_t t12 = 15LLU;

	t12 = (x49^(x50==(x51%x52)));

	if (t12 != 3262465336269096505LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x55 = 31U;
	volatile int64_t t13 = -86505LL;

	t13 = (x53^(x54==(x55%x56)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x58 = -1;
	static uint64_t x59 = 16892767LLU;
	int32_t x60 = INT32_MIN;
	int32_t t14 = 167889943;

	t14 = (x57^(x58==(x59%x60)));

	if (t14 != 410) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 76378223U;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 233;
	volatile uint32_t x64 = 1333U;
	volatile uint32_t t15 = 3U;

	t15 = (x61^(x62==(x63%x64)));

	if (t15 != 76378223U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = 8864LL;
	int64_t x67 = INT64_MIN;
	int16_t x68 = -90;
	static volatile int64_t t16 = -1975523942LL;

	t16 = (x65^(x66==(x67%x68)));

	if (t16 != -1239242938616998985LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MAX;
	int16_t x71 = 7;
	int64_t t17 = INT64_MAX;

	t17 = (x69^(x70==(x71%x72)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	volatile int8_t x74 = INT8_MIN;
	int16_t x75 = INT16_MIN;
	volatile int32_t t18 = 45052344;

	t18 = (x73^(x74==(x75%x76)));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 127U;
	int8_t x79 = -1;
	int8_t x80 = -1;
	volatile int32_t t19 = 9;

	t19 = (x77^(x78==(x79%x80)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x82 = 10831985340LLU;
	static int16_t x83 = INT16_MIN;
	int32_t t20 = 12;

	t20 = (x81^(x82==(x83%x84)));

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x85 = UINT16_MAX;
	static int8_t x87 = -5;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -629897461;

	t21 = (x85^(x86==(x87%x88)));

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = 25236;
	int16_t x90 = INT16_MIN;
	volatile uint64_t x91 = 290252392851680LLU;

	t22 = (x89^(x90==(x91%x92)));

	if (t22 != 25236) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MAX;
	volatile int8_t x95 = -11;
	int64_t x96 = -1LL;
	int32_t t23 = 5575;

	t23 = (x93^(x94==(x95%x96)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x98 = -1LL;
	int32_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile uint64_t t24 = 21LLU;

	t24 = (x97^(x98==(x99%x100)));

	if (t24 != 161505413576436LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 2326063LL;
	static int16_t x102 = INT16_MIN;
	int16_t x103 = INT16_MIN;
	volatile int16_t x104 = INT16_MAX;
	int64_t t25 = -136578455449164LL;

	t25 = (x101^(x102==(x103%x104)));

	if (t25 != 2326063LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x107 = -1;
	int32_t t26 = 315;

	t26 = (x105^(x106==(x107%x108)));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = INT32_MIN;
	int8_t x110 = INT8_MAX;
	volatile int32_t x111 = 922849815;
	uint32_t x112 = UINT32_MAX;
	volatile int32_t t27 = INT32_MIN;

	t27 = (x109^(x110==(x111%x112)));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	int8_t x114 = -24;
	uint64_t x116 = 306241761667LLU;
	int64_t t28 = 105LL;

	t28 = (x113^(x114==(x115%x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	volatile uint16_t x118 = 7U;
	uint8_t x119 = UINT8_MAX;
	uint8_t x120 = UINT8_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (x117^(x118==(x119%x120)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x122 = INT32_MIN;
	uint64_t x123 = UINT64_MAX;
	int32_t x124 = -7547866;
	int64_t t30 = INT64_MAX;

	t30 = (x121^(x122==(x123%x124)));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x125 = 0U;
	static int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	static int8_t x128 = INT8_MIN;
	int32_t t31 = -612553353;

	t31 = (x125^(x126==(x127%x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x129 = 4394393;
	uint32_t x130 = 892273089U;
	uint64_t x131 = 9077353LLU;

	t32 = (x129^(x130==(x131%x132)));

	if (t32 != 4394393) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	static int64_t x134 = INT64_MAX;
	uint8_t x135 = UINT8_MAX;
	int32_t x136 = INT32_MIN;
	volatile int64_t t33 = 105364833156656367LL;

	t33 = (x133^(x134==(x135%x136)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = UINT8_MAX;
	uint32_t x139 = 97U;
	static volatile int16_t x140 = INT16_MIN;
	volatile int32_t t34 = -248391732;

	t34 = (x137^(x138==(x139%x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1333972410613756059LL;
	int16_t x142 = 14692;
	static int8_t x143 = INT8_MAX;
	int32_t x144 = -1;
	volatile int64_t t35 = 232827379157172471LL;

	t35 = (x141^(x142==(x143%x144)));

	if (t35 != -1333972410613756059LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x145 = INT16_MIN;
	int64_t x146 = INT64_MAX;
	int64_t x147 = -1LL;
	volatile int32_t t36 = 3845790;

	t36 = (x145^(x146==(x147%x148)));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x150 = 7340702046LL;
	static volatile int8_t x151 = INT8_MIN;
	int16_t x152 = INT16_MIN;
	int64_t t37 = INT64_MIN;

	t37 = (x149^(x150==(x151%x152)));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 385923U;
	int32_t x155 = INT32_MIN;
	volatile int64_t x156 = -1LL;
	volatile int32_t t38 = 145355;

	t38 = (x153^(x154==(x155%x156)));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 4457775464761094LLU;
	uint16_t x159 = UINT16_MAX;
	uint64_t t39 = 623233LLU;

	t39 = (x157^(x158==(x159%x160)));

	if (t39 != 4457775464761094LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x161 = 10U;
	uint16_t x162 = 1U;
	static volatile int32_t x163 = -37629525;
	static uint32_t x164 = UINT32_MAX;
	static uint32_t t40 = 1U;

	t40 = (x161^(x162==(x163%x164)));

	if (t40 != 10U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = 126893115678558711LL;
	volatile int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	int64_t x168 = INT64_MAX;
	volatile int64_t t41 = 0LL;

	t41 = (x165^(x166==(x167%x168)));

	if (t41 != 126893115678558711LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	static int8_t x170 = INT8_MAX;
	int32_t x171 = -1;
	static uint32_t x172 = 2021014U;
	volatile uint32_t t42 = UINT32_MAX;

	t42 = (x169^(x170==(x171%x172)));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x174 = 559U;
	volatile int64_t x175 = -1LL;
	int8_t x176 = 2;
	int64_t t43 = INT64_MIN;

	t43 = (x173^(x174==(x175%x176)));

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = -1;
	int8_t x178 = INT8_MIN;
	uint32_t x180 = 28624U;
	static volatile int32_t t44 = -19993954;

	t44 = (x177^(x178==(x179%x180)));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = 373520735101LL;
	int8_t x182 = 0;
	uint32_t x183 = UINT32_MAX;
	int8_t x184 = INT8_MIN;
	volatile int64_t t45 = -952735LL;

	t45 = (x181^(x182==(x183%x184)));

	if (t45 != 373520735101LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	int32_t x186 = INT32_MAX;
	uint32_t x187 = 18246463U;
	volatile int32_t t46 = -47965;

	t46 = (x185^(x186==(x187%x188)));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x190 = 123;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = -1;
	int32_t t47 = INT32_MIN;

	t47 = (x189^(x190==(x191%x192)));

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int8_t x194 = 6;
	uint32_t x196 = UINT32_MAX;

	t48 = (x193^(x194==(x195%x196)));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x201 = 120U;
	int16_t x202 = INT16_MAX;
	int64_t x203 = -1LL;
	static volatile int32_t t49 = -191;

	t49 = (x201^(x202==(x203%x204)));

	if (t49 != 120) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = -1;
	uint16_t x206 = 108U;
	volatile uint64_t x207 = 5225676202LLU;
	static volatile int8_t x208 = INT8_MIN;

	t50 = (x205^(x206==(x207%x208)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	static int8_t x210 = -5;
	int64_t x211 = 1LL;
	static volatile int64_t x212 = INT64_MAX;
	volatile int32_t t51 = -480062604;

	t51 = (x209^(x210==(x211%x212)));

	if (t51 != -32768) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	uint64_t x214 = 2292816715LLU;
	int8_t x215 = -1;
	uint8_t x216 = 6U;
	volatile int64_t t52 = 412LL;

	t52 = (x213^(x214==(x215%x216)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -1;
	int8_t x218 = 1;
	int64_t x219 = INT64_MAX;
	int64_t x220 = 1768940780017611LL;
	volatile int32_t t53 = -478913475;

	t53 = (x217^(x218==(x219%x220)));

	if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x221 = 4U;
	int32_t x222 = INT32_MIN;
	uint16_t x223 = UINT16_MAX;
	uint32_t x224 = 540772U;
	volatile int32_t t54 = -212497;

	t54 = (x221^(x222==(x223%x224)));

	if (t54 != 4) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x225 = 7008356193LL;
	uint64_t x226 = UINT64_MAX;
	uint32_t x228 = 995943U;
	volatile int64_t t55 = -60LL;

	t55 = (x225^(x226==(x227%x228)));

	if (t55 != 7008356193LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int64_t x231 = INT64_MAX;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t56 = INT32_MIN;

	t56 = (x229^(x230==(x231%x232)));

	if (t56 != INT32_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x234 = 127U;
	int32_t x235 = INT32_MIN;
	static volatile int32_t t57 = -30;

	t57 = (x233^(x234==(x235%x236)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = -1;
	int16_t x239 = INT16_MIN;
	int64_t x240 = -1LL;
	volatile int32_t t58 = -5146069;

	t58 = (x237^(x238==(x239%x240)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = -43;
	static int8_t x242 = INT8_MAX;
	static int32_t x243 = INT32_MIN;
	static uint32_t x244 = 12U;
	int32_t t59 = 4049306;

	t59 = (x241^(x242==(x243%x244)));

	if (t59 != -43) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x246 = -1LL;
	volatile int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MAX;
	volatile int32_t t60 = -120926;

	t60 = (x245^(x246==(x247%x248)));

	if (t60 != 32766) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int64_t x250 = INT64_MIN;
	volatile int16_t x251 = 1;
	int32_t x252 = INT32_MIN;
	uint32_t t61 = UINT32_MAX;

	t61 = (x249^(x250==(x251%x252)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x253 = 90U;
	uint64_t x254 = 1852LLU;
	int16_t x255 = INT16_MIN;
	uint32_t t62 = 10U;

	t62 = (x253^(x254==(x255%x256)));

	if (t62 != 90U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x257 = -1;
	int8_t x258 = INT8_MAX;
	uint64_t x259 = 22765928267LLU;
	int16_t x260 = INT16_MIN;
	int32_t t63 = 16358;

	t63 = (x257^(x258==(x259%x260)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x262 = 575360130352704LLU;
	uint8_t x263 = UINT8_MAX;
	int8_t x264 = INT8_MIN;
	uint64_t t64 = 24004LLU;

	t64 = (x261^(x262==(x263%x264)));

	if (t64 != 11609LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	static int8_t x267 = INT8_MIN;
	uint8_t x268 = 25U;
	static int32_t t65 = 3970;

	t65 = (x265^(x266==(x267%x268)));

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x273 = -1;
	static uint16_t x274 = UINT16_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	uint8_t x276 = 91U;
	volatile int32_t t66 = 519358553;

	t66 = (x273^(x274==(x275%x276)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = 1LL;
	volatile uint16_t x279 = UINT16_MAX;
	int16_t x280 = 210;

	t67 = (x277^(x278==(x279%x280)));

	if (t67 != -29) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = -40;
	volatile int32_t x283 = 6;
	volatile int32_t t68 = -426688830;

	t68 = (x281^(x282==(x283%x284)));

	if (t68 != -40) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x285 = 87U;
	int32_t x288 = -1;
	static uint32_t t69 = 15040893U;

	t69 = (x285^(x286==(x287%x288)));

	if (t69 != 87U) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = UINT32_MAX;
	int16_t x290 = INT16_MIN;
	int64_t x291 = -1LL;
	int16_t x292 = INT16_MAX;

	t70 = (x289^(x290==(x291%x292)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x293 = INT8_MAX;
	uint64_t x295 = UINT64_MAX;
	static int64_t x296 = INT64_MIN;
	static volatile int32_t t71 = -248;

	t71 = (x293^(x294==(x295%x296)));

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x297 = INT16_MIN;
	static uint8_t x298 = 30U;
	static int32_t x300 = INT32_MIN;
	int32_t t72 = 2920;

	t72 = (x297^(x298==(x299%x300)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x302 = INT32_MIN;
	int64_t x303 = INT64_MIN;
	static int8_t x304 = INT8_MAX;

	t73 = (x301^(x302==(x303%x304)));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x305 = INT64_MIN;
	volatile int32_t x307 = INT32_MIN;
	volatile int64_t x308 = 501081130780LL;
	int64_t t74 = INT64_MIN;

	t74 = (x305^(x306==(x307%x308)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	int64_t x310 = 5850LL;
	volatile uint32_t x311 = UINT32_MAX;
	static volatile int8_t x312 = -1;
	volatile int32_t t75 = 56636;

	t75 = (x309^(x310==(x311%x312)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x313 = 2;
	static volatile uint32_t x315 = 25454469U;
	static volatile int16_t x316 = -1;
	static volatile int32_t t76 = -15046;

	t76 = (x313^(x314==(x315%x316)));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = -4338;
	int32_t x318 = -1;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t77 = 8012965;

	t77 = (x317^(x318==(x319%x320)));

	if (t77 != -4338) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x323 = 15U;
	uint8_t x324 = 47U;

	t78 = (x321^(x322==(x323%x324)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x327 = INT32_MIN;
	static int32_t x328 = INT32_MIN;
	static int32_t t79 = 105;

	t79 = (x325^(x326==(x327%x328)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = UINT32_MAX;
	int64_t x330 = INT64_MAX;
	int16_t x331 = INT16_MIN;
	static uint32_t t80 = UINT32_MAX;

	t80 = (x329^(x330==(x331%x332)));

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MIN;
	static uint16_t x334 = 100U;
	volatile uint64_t x335 = UINT64_MAX;
	int16_t x336 = -1;
	int64_t t81 = INT64_MIN;

	t81 = (x333^(x334==(x335%x336)));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = 79210LL;
	static uint32_t x339 = UINT32_MAX;
	volatile int64_t t82 = -1129439304403791199LL;

	t82 = (x337^(x338==(x339%x340)));

	if (t82 != 79210LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x341 = UINT8_MAX;
	volatile uint32_t x342 = UINT32_MAX;
	int64_t x343 = -6585174746330517LL;
	static volatile int32_t t83 = -5955;

	t83 = (x341^(x342==(x343%x344)));

	if (t83 != 255) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = -1LL;
	int32_t x347 = -1860;
	static int8_t x348 = INT8_MIN;
	int64_t t84 = -187149434289451770LL;

	t84 = (x345^(x346==(x347%x348)));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = 435303LLU;
	uint8_t x351 = UINT8_MAX;
	uint32_t x352 = 24U;

	t85 = (x349^(x350==(x351%x352)));

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x353 = -1;
	static int16_t x354 = -1;
	int32_t t86 = -341180;

	t86 = (x353^(x354==(x355%x356)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x357 = INT64_MIN;
	uint8_t x359 = UINT8_MAX;

	t87 = (x357^(x358==(x359%x360)));

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x361 = 1;
	uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MAX;
	int64_t x364 = 3604LL;
	volatile int32_t t88 = -1016;

	t88 = (x361^(x362==(x363%x364)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x365 = 62U;
	int16_t x366 = -8;
	volatile int32_t x367 = INT32_MIN;
	int32_t t89 = 889110;

	t89 = (x365^(x366==(x367%x368)));

	if (t89 != 62) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x369 = -1;
	int16_t x370 = 24;
	int8_t x371 = INT8_MIN;
	uint8_t x372 = 114U;
	volatile int32_t t90 = -1;

	t90 = (x369^(x370==(x371%x372)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x374 = 761123361876LL;
	int8_t x375 = -1;
	volatile uint32_t x376 = UINT32_MAX;
	int32_t t91 = 1281768;

	t91 = (x373^(x374==(x375%x376)));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = -1LL;
	volatile uint64_t x378 = UINT64_MAX;
	int16_t x379 = 1;
	static volatile int16_t x380 = -314;
	volatile int64_t t92 = -1735347LL;

	t92 = (x377^(x378==(x379%x380)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x381 = -1;
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = UINT64_MAX;
	int16_t x384 = -1;
	volatile int32_t t93 = 2709147;

	t93 = (x381^(x382==(x383%x384)));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x385 = 10U;
	int8_t x386 = -1;

	t94 = (x385^(x386==(x387%x388)));

	if (t94 != 10) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = 7;
	uint16_t x390 = 376U;
	uint32_t x391 = 1102587U;
	int8_t x392 = -5;
	int32_t t95 = -3572051;

	t95 = (x389^(x390==(x391%x392)));

	if (t95 != 7) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x393 = -1;
	static volatile int8_t x396 = 2;
	int32_t t96 = 123434337;

	t96 = (x393^(x394==(x395%x396)));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x398 = -21;
	int64_t x399 = INT64_MIN;
	static int8_t x400 = INT8_MIN;
	volatile int32_t t97 = -11;

	t97 = (x397^(x398==(x399%x400)));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x401 = UINT64_MAX;
	uint32_t x404 = 1163006U;
	uint64_t t98 = UINT64_MAX;

	t98 = (x401^(x402==(x403%x404)));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MIN;
	static int16_t x406 = INT16_MIN;
	volatile int16_t x407 = -1;
	int64_t x408 = -38935756241LL;
	int32_t t99 = -5;

	t99 = (x405^(x406==(x407%x408)));

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

