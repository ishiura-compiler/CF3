#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MAX;
uint32_t x3 = 18043266U;
int32_t t0 = -36;
static volatile uint16_t x9 = 51U;
static int64_t x16 = INT64_MIN;
static volatile int16_t x19 = -3;
static uint8_t x34 = UINT8_MAX;
int32_t x36 = 9;
int32_t t8 = 537822733;
volatile uint32_t x42 = UINT32_MAX;
static int64_t x43 = -1LL;
int16_t x47 = INT16_MIN;
static uint32_t x52 = 73165307U;
int32_t x55 = INT32_MAX;
int64_t x57 = -1LL;
int64_t x59 = INT64_MIN;
volatile int8_t x60 = INT8_MIN;
static int64_t x61 = -1LL;
int64_t x66 = INT64_MIN;
static int32_t t16 = -135385;
uint32_t x70 = 13778388U;
int64_t x83 = INT64_MIN;
static volatile uint8_t x89 = 2U;
static uint16_t x90 = 28U;
int16_t x109 = INT16_MIN;
volatile int8_t x112 = INT8_MIN;
volatile int32_t x113 = INT32_MIN;
int32_t x116 = INT32_MIN;
int16_t x117 = INT16_MAX;
int16_t x128 = 30;
int8_t x132 = INT8_MAX;
uint16_t x144 = 10963U;
uint32_t x147 = UINT32_MAX;
int32_t t36 = -8289549;
static int8_t x150 = INT8_MAX;
uint32_t x152 = 3679U;
uint64_t x157 = 938578201831999844LLU;
int16_t x159 = INT16_MAX;
int32_t x162 = INT32_MIN;
uint16_t x164 = 683U;
int8_t x166 = 9;
static volatile int32_t t41 = 0;
static volatile uint64_t x172 = 47LLU;
uint16_t x173 = UINT16_MAX;
static uint32_t x174 = 12U;
int64_t t44 = -3352LL;
int32_t t45 = 6388144;
int64_t t46 = 2501726LL;
volatile int32_t x189 = INT32_MIN;
int16_t x191 = 30;
int16_t x195 = INT16_MIN;
int32_t t48 = -13515491;
static int64_t x198 = -257444910983155533LL;
volatile uint8_t x201 = 63U;
int16_t x202 = INT16_MIN;
int64_t x207 = INT64_MAX;
static int8_t x215 = INT8_MIN;
uint64_t x219 = UINT64_MAX;
static int8_t x228 = -52;
int32_t t56 = 580143;
uint32_t x230 = UINT32_MAX;
volatile int64_t x233 = -1LL;
int8_t x243 = INT8_MIN;
volatile int64_t x250 = -80528255730LL;
static int64_t x251 = INT64_MIN;
int16_t x253 = INT16_MIN;
static volatile uint8_t x256 = UINT8_MAX;
int8_t x258 = INT8_MIN;
int64_t t64 = 6213LL;
uint16_t x262 = 424U;
int16_t x264 = INT16_MIN;
int64_t x265 = 1LL;
volatile int64_t x276 = -1LL;
volatile int32_t t70 = -416457;
volatile int16_t x292 = -1;
int32_t t73 = 54090117;
int64_t t74 = -7051440801937656LL;
volatile int16_t x302 = -1;
int32_t x309 = INT32_MIN;
volatile uint16_t x310 = 95U;
uint32_t x311 = UINT32_MAX;
volatile int64_t t78 = -39706063527LL;
static uint8_t x319 = 22U;
volatile uint64_t t79 = 533307363166LLU;
int16_t x327 = 0;
int32_t x328 = -46238;
static int64_t x332 = INT64_MIN;
int64_t x333 = INT64_MAX;
volatile uint16_t x334 = 17U;
static uint8_t x336 = 11U;
static int64_t t83 = INT64_MAX;
int16_t x338 = INT16_MIN;
static int64_t x341 = 19LL;
static volatile int64_t x342 = 2695611LL;
volatile uint16_t x344 = 87U;
int32_t x351 = -3941;
volatile int8_t x357 = 0;
static int8_t x358 = -3;
int64_t x359 = -7LL;
int64_t x377 = INT64_MIN;
int64_t x382 = 1071LL;
uint64_t x386 = 8032324178616119LLU;
volatile int32_t t96 = -6255;
int8_t x393 = -9;
static int16_t x399 = INT16_MIN;
volatile int16_t x400 = -1;


void f0(void) {
	volatile int8_t x1 = INT8_MAX;
	int16_t x4 = INT16_MIN;

	t0 = (x1|(x2<(x3%x4)));

	if (t0 != 127) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 0;
	int16_t x6 = -1;
	int64_t x7 = INT64_MIN;
	static uint64_t x8 = UINT64_MAX;
	volatile int32_t t1 = -4838559;

	t1 = (x5|(x6<(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MAX;
	static int8_t x11 = -8;
	uint64_t x12 = UINT64_MAX;
	int32_t t2 = 14497394;

	t2 = (x9|(x10<(x11%x12)));

	if (t2 != 51) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -15;
	uint8_t x14 = 2U;
	int64_t x15 = INT64_MAX;
	volatile int32_t t3 = 3722;

	t3 = (x13|(x14<(x15%x16)));

	if (t3 != -15) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MIN;
	int32_t x18 = INT32_MIN;
	uint32_t x20 = UINT32_MAX;
	int32_t t4 = 27660415;

	t4 = (x17|(x18<(x19%x20)));

	if (t4 != -127) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1825517;
	static int8_t x22 = INT8_MIN;
	uint32_t x23 = 273U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = 682;

	t5 = (x21|(x22<(x23%x24)));

	if (t5 != -1825517) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 35;
	int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	uint64_t x28 = 109427LLU;
	int32_t t6 = -59239;

	t6 = (x25|(x26<(x27%x28)));

	if (t6 != 35) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -52;
	int8_t x30 = INT8_MIN;
	int32_t x31 = INT32_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	int32_t t7 = -1;

	t7 = (x29|(x30<(x31%x32)));

	if (t7 != -52) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = INT8_MIN;
	static int16_t x35 = INT16_MAX;

	t8 = (x33|(x34<(x35%x36)));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int8_t x38 = INT8_MAX;
	uint16_t x39 = 0U;
	int64_t x40 = 198027LL;
	int32_t t9 = INT32_MIN;

	t9 = (x37|(x38<(x39%x40)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	volatile int16_t x44 = 143;
	int32_t t10 = -4;

	t10 = (x41|(x42<(x43%x44)));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x45 = 6674U;
	int32_t x46 = INT32_MIN;
	static int8_t x48 = -27;
	int32_t t11 = -674836955;

	t11 = (x45|(x46<(x47%x48)));

	if (t11 != 6675) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 120U;
	int64_t x50 = 905LL;
	volatile int32_t x51 = INT32_MIN;
	int32_t t12 = 1169;

	t12 = (x49|(x50<(x51%x52)));

	if (t12 != 121) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x54 = -1LL;
	static uint64_t x56 = 19395451277174195LLU;
	int64_t t13 = INT64_MIN;

	t13 = (x53|(x54<(x55%x56)));

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -397319281846642LL;
	volatile int64_t t14 = 6517892727LL;

	t14 = (x57|(x58<(x59%x60)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 495162004LLU;
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = -1;
	int64_t t15 = 40166LL;

	t15 = (x61|(x62<(x63%x64)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int16_t x67 = -1;
	int8_t x68 = 1;

	t16 = (x65|(x66<(x67%x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 746846LL;
	static int64_t x71 = INT64_MIN;
	volatile int64_t x72 = INT64_MAX;
	int64_t t17 = 914546354592157993LL;

	t17 = (x69|(x70<(x71%x72)));

	if (t17 != 746846LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int64_t x74 = -195614341561648LL;
	static int16_t x75 = INT16_MAX;
	int64_t x76 = INT64_MAX;
	volatile int64_t t18 = INT64_MAX;

	t18 = (x73|(x74<(x75%x76)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 250845U;
	int32_t x78 = INT32_MIN;
	volatile int64_t x79 = -1LL;
	static int32_t x80 = -1;
	volatile uint32_t t19 = 685245645U;

	t19 = (x77|(x78<(x79%x80)));

	if (t19 != 250845U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 8492635423692747953LLU;
	int8_t x82 = INT8_MIN;
	static int16_t x84 = INT16_MIN;
	static uint64_t t20 = 113388146165136LLU;

	t20 = (x81|(x82<(x83%x84)));

	if (t20 != 8492635423692747953LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	int64_t x86 = INT64_MAX;
	int8_t x87 = INT8_MIN;
	static int64_t x88 = -1LL;
	static int32_t t21 = 178613175;

	t21 = (x85|(x86<(x87%x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x91 = 15140LLU;
	int8_t x92 = -1;
	int32_t t22 = -139849;

	t22 = (x89|(x90<(x91%x92)));

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 2U;
	int16_t x94 = -1611;
	int64_t x95 = -1LL;
	int64_t x96 = INT64_MIN;
	int32_t t23 = 2698;

	t23 = (x93|(x94<(x95%x96)));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	uint16_t x98 = 4922U;
	int32_t x99 = -463857745;
	static int64_t x100 = INT64_MIN;
	static int32_t t24 = 476836;

	t24 = (x97|(x98<(x99%x100)));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	static uint8_t x102 = 1U;
	static int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MAX;
	volatile int64_t t25 = INT64_MAX;

	t25 = (x101|(x102<(x103%x104)));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -4591829133050LL;
	volatile uint64_t x106 = 4233315909475626LLU;
	int8_t x107 = INT8_MAX;
	static int32_t x108 = INT32_MAX;
	int64_t t26 = -83362843531248513LL;

	t26 = (x105|(x106<(x107%x108)));

	if (t26 != -4591829133050LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x110 = 885344U;
	int16_t x111 = INT16_MIN;
	static volatile int32_t t27 = -304;

	t27 = (x109|(x110<(x111%x112)));

	if (t27 != -32768) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = INT32_MAX;
	int8_t x115 = INT8_MIN;
	static volatile int32_t t28 = INT32_MIN;

	t28 = (x113|(x114<(x115%x116)));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = 1192130123LL;
	uint64_t x119 = 113397897125LLU;
	uint8_t x120 = 13U;
	volatile int32_t t29 = -1296797;

	t29 = (x117|(x118<(x119%x120)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 10;
	uint32_t x122 = 94862U;
	int32_t x123 = INT32_MAX;
	int16_t x124 = -1;
	int32_t t30 = 2633710;

	t30 = (x121|(x122<(x123%x124)));

	if (t30 != 10) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 2797377241LLU;
	uint16_t x126 = 0U;
	int64_t x127 = INT64_MIN;
	volatile uint64_t t31 = 133181695LLU;

	t31 = (x125|(x126<(x127%x128)));

	if (t31 != 2797377241LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = 606677266;
	static uint32_t x130 = UINT32_MAX;
	int64_t x131 = INT64_MIN;
	int32_t t32 = -51;

	t32 = (x129|(x130<(x131%x132)));

	if (t32 != 606677266) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MIN;
	static int16_t x136 = -126;
	static volatile uint32_t t33 = UINT32_MAX;

	t33 = (x133|(x134<(x135%x136)));

	if (t33 != UINT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	int32_t x138 = -432393564;
	static volatile int64_t x139 = -1LL;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 32012109;

	t34 = (x137|(x138<(x139%x140)));

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = INT8_MAX;
	uint8_t x143 = UINT8_MAX;
	int64_t t35 = INT64_MAX;

	t35 = (x141|(x142<(x143%x144)));

	if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -2;
	int8_t x146 = INT8_MAX;
	int64_t x148 = INT64_MIN;

	t36 = (x145|(x146<(x147%x148)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x149 = UINT16_MAX;
	int64_t x151 = -1LL;
	volatile int32_t t37 = -127978114;

	t37 = (x149|(x150<(x151%x152)));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = 3502211240LL;
	int32_t x154 = INT32_MAX;
	int32_t x155 = -1;
	int8_t x156 = 6;
	volatile int64_t t38 = -1446179LL;

	t38 = (x153|(x154<(x155%x156)));

	if (t38 != 3502211240LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x158 = INT32_MAX;
	volatile int8_t x160 = INT8_MIN;
	uint64_t t39 = 2118530737121138LLU;

	t39 = (x157|(x158<(x159%x160)));

	if (t39 != 938578201831999844LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	int32_t x163 = INT32_MAX;
	int64_t t40 = INT64_MAX;

	t40 = (x161|(x162<(x163%x164)));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x167 = INT64_MAX;
	static int16_t x168 = INT16_MIN;

	t41 = (x165|(x166<(x167%x168)));

	if (t41 != 65535) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	static int64_t x170 = INT64_MIN;
	uint64_t x171 = 1902461841750LLU;
	static volatile int64_t t42 = INT64_MAX;

	t42 = (x169|(x170<(x171%x172)));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x175 = UINT32_MAX;
	static int16_t x176 = 77;
	volatile int32_t t43 = 3348955;

	t43 = (x173|(x174<(x175%x176)));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 122LL;
	volatile int64_t x178 = INT64_MIN;
	static int32_t x179 = INT32_MAX;
	uint64_t x180 = UINT64_MAX;

	t44 = (x177|(x178<(x179%x180)));

	if (t44 != 122LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -384715929;
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MAX;
	int8_t x184 = INT8_MIN;

	t45 = (x181|(x182<(x183%x184)));

	if (t45 != -384715929) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = 83640394311025366LL;
	int8_t x186 = INT8_MIN;
	volatile uint16_t x187 = 1831U;
	int32_t x188 = -2167168;

	t46 = (x185|(x186<(x187%x188)));

	if (t46 != 83640394311025367LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x190 = -1LL;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = -5913571;

	t47 = (x189|(x190<(x191%x192)));

	if (t47 != -2147483647) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = -1;
	volatile int32_t x194 = INT32_MAX;
	volatile int64_t x196 = INT64_MAX;

	t48 = (x193|(x194<(x195%x196)));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MIN;
	int64_t x199 = 15912LL;
	volatile int64_t x200 = INT64_MIN;
	int64_t t49 = 0LL;

	t49 = (x197|(x198<(x199%x200)));

	if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x203 = -1;
	uint16_t x204 = 840U;
	static volatile int32_t t50 = -3185;

	t50 = (x201|(x202<(x203%x204)));

	if (t50 != 63) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = INT8_MIN;
	int8_t x206 = -53;
	static uint64_t x208 = 1933479LLU;
	static volatile int32_t t51 = -317;

	t51 = (x205|(x206<(x207%x208)));

	if (t51 != -128) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = UINT16_MAX;
	uint8_t x210 = UINT8_MAX;
	static int64_t x211 = INT64_MIN;
	static int16_t x212 = INT16_MIN;
	int32_t t52 = 241072902;

	t52 = (x209|(x210<(x211%x212)));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	int8_t x214 = 26;
	int16_t x216 = -1;
	volatile int32_t t53 = INT32_MIN;

	t53 = (x213|(x214<(x215%x216)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	uint16_t x218 = UINT16_MAX;
	int8_t x220 = 11;
	int32_t t54 = INT32_MIN;

	t54 = (x217|(x218<(x219%x220)));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 152718U;
	uint8_t x222 = 1U;
	int64_t x223 = -1LL;
	static int64_t x224 = -1LL;
	volatile uint32_t t55 = 5510U;

	t55 = (x221|(x222<(x223%x224)));

	if (t55 != 152718U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x225 = INT8_MAX;
	int16_t x226 = 249;
	static int16_t x227 = -1;

	t56 = (x225|(x226<(x227%x228)));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -55;
	volatile int8_t x231 = INT8_MIN;
	volatile uint16_t x232 = 1U;
	static int32_t t57 = 754252;

	t57 = (x229|(x230<(x231%x232)));

	if (t57 != -55) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	uint64_t x235 = UINT64_MAX;
	uint32_t x236 = 93U;
	volatile int64_t t58 = 1175827803901389374LL;

	t58 = (x233|(x234<(x235%x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 5482U;
	int32_t x238 = INT32_MIN;
	uint8_t x239 = 111U;
	static uint16_t x240 = UINT16_MAX;
	uint32_t t59 = 236U;

	t59 = (x237|(x238<(x239%x240)));

	if (t59 != 5483U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 7581856U;
	int32_t x242 = INT32_MAX;
	int8_t x244 = -1;
	uint32_t t60 = 18427042U;

	t60 = (x241|(x242<(x243%x244)));

	if (t60 != 7581856U) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int16_t x246 = -1487;
	volatile int64_t x247 = -75228329028401685LL;
	uint32_t x248 = 30U;
	int64_t t61 = 0LL;

	t61 = (x245|(x246<(x247%x248)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 5U;
	volatile int32_t x252 = -1;
	static int32_t t62 = 15925;

	t62 = (x249|(x250<(x251%x252)));

	if (t62 != 5) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x254 = 986;
	uint16_t x255 = UINT16_MAX;
	volatile int32_t t63 = -73;

	t63 = (x253|(x254<(x255%x256)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -1843140LL;
	static int64_t x259 = -1LL;
	uint8_t x260 = 1U;

	t64 = (x257|(x258<(x259%x260)));

	if (t64 != -1843139LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x261 = INT16_MAX;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t t65 = -165188;

	t65 = (x261|(x262<(x263%x264)));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 5899949783LLU;
	static uint64_t x267 = 2306283234078LLU;
	volatile int32_t x268 = INT32_MIN;
	int64_t t66 = 4461615892713990352LL;

	t66 = (x265|(x266<(x267%x268)));

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint32_t x269 = 13U;
	uint8_t x270 = 0U;
	uint16_t x271 = 647U;
	volatile uint8_t x272 = 67U;
	static uint32_t t67 = 68800U;

	t67 = (x269|(x270<(x271%x272)));

	if (t67 != 13U) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = -1;
	uint8_t x275 = UINT8_MAX;
	int32_t t68 = 0;

	t68 = (x273|(x274<(x275%x276)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	static int64_t x278 = -1LL;
	uint8_t x279 = 12U;
	static int64_t x280 = -21097934731807360LL;
	static volatile int32_t t69 = -3;

	t69 = (x277|(x278<(x279%x280)));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x281 = 207U;
	int64_t x282 = INT64_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = -151LL;

	t70 = (x281|(x282<(x283%x284)));

	if (t70 != 207) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	static int64_t x286 = INT64_MAX;
	uint64_t x287 = 1LLU;
	int8_t x288 = INT8_MAX;
	static uint32_t t71 = UINT32_MAX;

	t71 = (x285|(x286<(x287%x288)));

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = 228;
	volatile uint64_t x290 = 193890082617852LLU;
	static int16_t x291 = 14;
	int32_t t72 = 16;

	t72 = (x289|(x290<(x291%x292)));

	if (t72 != 228) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = INT8_MIN;
	uint8_t x294 = 2U;
	static uint16_t x295 = 93U;
	uint8_t x296 = UINT8_MAX;

	t73 = (x293|(x294<(x295%x296)));

	if (t73 != -127) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = 124LL;
	static uint64_t x298 = 3LLU;
	int8_t x299 = -1;
	int32_t x300 = INT32_MIN;

	t74 = (x297|(x298<(x299%x300)));

	if (t74 != 125LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x301 = 57LLU;
	int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MIN;
	volatile uint64_t t75 = 391422373082LLU;

	t75 = (x301|(x302<(x303%x304)));

	if (t75 != 57LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MAX;
	int8_t x306 = -1;
	int32_t x307 = -1;
	volatile int32_t x308 = INT32_MAX;
	volatile int32_t t76 = INT32_MAX;

	t76 = (x305|(x306<(x307%x308)));

	if (t76 != INT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x312 = 4U;
	int32_t t77 = INT32_MIN;

	t77 = (x309|(x310<(x311%x312)));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = INT64_MIN;
	int8_t x314 = INT8_MIN;
	int32_t x315 = INT32_MIN;
	volatile int32_t x316 = 74;

	t78 = (x313|(x314<(x315%x316)));

	if (t78 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x317 = 22LLU;
	int8_t x318 = INT8_MAX;
	uint32_t x320 = UINT32_MAX;

	t79 = (x317|(x318<(x319%x320)));

	if (t79 != 22LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -2;
	uint32_t x322 = UINT32_MAX;
	uint16_t x323 = 18786U;
	int32_t x324 = INT32_MIN;
	int32_t t80 = -30377467;

	t80 = (x321|(x322<(x323%x324)));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -1;
	int8_t x326 = INT8_MIN;
	volatile int32_t t81 = -1;

	t81 = (x325|(x326<(x327%x328)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile int16_t x330 = 108;
	uint8_t x331 = 85U;
	uint64_t t82 = UINT64_MAX;

	t82 = (x329|(x330<(x331%x332)));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x335 = 121U;

	t83 = (x333|(x334<(x335%x336)));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	static int32_t t84 = -731669;

	t84 = (x337|(x338<(x339%x340)));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x343 = 14LLU;
	int64_t t85 = 117208371122180441LL;

	t85 = (x341|(x342<(x343%x344)));

	if (t85 != 19LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x345 = INT64_MIN;
	uint64_t x346 = UINT64_MAX;
	static int64_t x347 = INT64_MIN;
	volatile uint32_t x348 = 181U;
	volatile int64_t t86 = INT64_MIN;

	t86 = (x345|(x346<(x347%x348)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 11531U;
	int32_t x350 = INT32_MAX;
	int8_t x352 = 15;
	static int32_t t87 = -11241;

	t87 = (x349|(x350<(x351%x352)));

	if (t87 != 11531) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	int16_t x355 = INT16_MIN;
	static int32_t x356 = INT32_MAX;
	int32_t t88 = 3071;

	t88 = (x353|(x354<(x355%x356)));

	if (t88 != -2147483647) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x360 = UINT16_MAX;
	static volatile int32_t t89 = 2;

	t89 = (x357|(x358<(x359%x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = -355;
	static volatile int16_t x362 = 56;
	static int32_t x363 = INT32_MIN;
	volatile uint32_t x364 = 1669417U;
	volatile int32_t t90 = -6;

	t90 = (x361|(x362<(x363%x364)));

	if (t90 != -355) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int8_t x366 = INT8_MAX;
	uint32_t x367 = UINT32_MAX;
	int16_t x368 = -82;
	volatile int32_t t91 = 164964;

	t91 = (x365|(x366<(x367%x368)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = INT16_MIN;
	static int32_t x371 = 204024;
	int16_t x372 = -1;
	int32_t t92 = 3959678;

	t92 = (x369|(x370<(x371%x372)));

	if (t92 != -127) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 0;
	static uint8_t x374 = 55U;
	volatile int32_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	volatile int32_t t93 = -8463961;

	t93 = (x373|(x374<(x375%x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x378 = -222;
	int32_t x379 = INT32_MAX;
	int32_t x380 = INT32_MIN;
	volatile int64_t t94 = -18340LL;

	t94 = (x377|(x378<(x379%x380)));

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	int8_t x383 = INT8_MAX;
	volatile int32_t x384 = INT32_MIN;
	static int32_t t95 = -116298;

	t95 = (x381|(x382<(x383%x384)));

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -2091709;
	int32_t x387 = 2381255;
	volatile int16_t x388 = INT16_MAX;

	t96 = (x385|(x386<(x387%x388)));

	if (t96 != -2091709) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x389 = INT32_MIN;
	volatile int64_t x390 = INT64_MIN;
	volatile int64_t x391 = 16033LL;
	static int8_t x392 = INT8_MIN;
	static int32_t t97 = -66462514;

	t97 = (x389|(x390<(x391%x392)));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = INT32_MIN;
	uint8_t x395 = 0U;
	uint32_t x396 = 1092740U;
	int32_t t98 = -14510110;

	t98 = (x393|(x394<(x395%x396)));

	if (t98 != -9) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	volatile int16_t x398 = -1;
	int32_t t99 = -1621;

	t99 = (x397|(x398<(x399%x400)));

	if (t99 != -32767) { NG(); } else { ; }
	
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
