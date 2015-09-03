#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 7U;
uint16_t x16 = 4U;
volatile uint64_t x17 = 245908LLU;
int64_t x18 = -1LL;
uint16_t x23 = 1U;
volatile int32_t x38 = INT32_MIN;
volatile int16_t x39 = 1956;
int8_t x44 = INT8_MIN;
volatile int32_t t8 = -216919170;
static uint32_t x45 = 4903U;
static volatile int8_t x51 = -1;
int16_t x59 = INT16_MAX;
static int8_t x63 = -1;
static uint8_t x64 = UINT8_MAX;
uint16_t x67 = UINT16_MAX;
int32_t x73 = INT32_MAX;
volatile int32_t t17 = 24;
volatile int64_t t18 = 14346055755010LL;
static volatile int64_t x92 = INT64_MIN;
volatile uint32_t x93 = 3768772U;
uint8_t x95 = UINT8_MAX;
static volatile uint64_t x96 = UINT64_MAX;
volatile int16_t x97 = -13;
int32_t x106 = INT32_MIN;
volatile uint64_t x107 = UINT64_MAX;
static volatile uint64_t t23 = 1047822LLU;
volatile uint64_t t24 = 104612531LLU;
static int8_t x115 = 27;
static volatile uint64_t t26 = 1963043LLU;
uint64_t x131 = UINT64_MAX;
int32_t x135 = INT32_MIN;
static int16_t x142 = INT16_MIN;
int64_t t32 = -511227646666LL;
uint8_t x145 = 1U;
uint8_t x146 = 3U;
uint64_t x150 = 8368LLU;
uint32_t x159 = 45561190U;
static int32_t x162 = INT32_MIN;
int32_t x165 = INT32_MAX;
static int64_t t38 = -24764LL;
int16_t x170 = INT16_MIN;
uint64_t x174 = 31601LLU;
uint16_t x179 = 2U;
volatile int16_t x184 = -1;
uint64_t x188 = UINT64_MAX;
volatile uint64_t t43 = 4549305227916969910LLU;
int64_t x192 = INT64_MIN;
int32_t x195 = INT32_MIN;
int16_t x196 = -1;
static int32_t x197 = INT32_MIN;
static int16_t x203 = -1;
volatile int8_t x213 = INT8_MIN;
int8_t x220 = INT8_MIN;
uint8_t x224 = 6U;
volatile int64_t x225 = 27476LL;
int64_t x227 = INT64_MIN;
static int16_t x235 = INT16_MIN;
volatile int16_t x238 = -52;
int64_t x239 = INT64_MAX;
static uint32_t x240 = UINT32_MAX;
volatile int16_t x242 = 3;
int64_t x243 = INT64_MIN;
int8_t x244 = INT8_MIN;
volatile int64_t t57 = 4LL;
uint64_t x249 = 677180497669104LLU;
int16_t x252 = INT16_MIN;
int64_t x256 = 68561750884LL;
volatile uint64_t x259 = 627133LLU;
static int16_t x263 = 10206;
volatile int16_t x264 = -71;
volatile uint32_t t63 = 14U;
volatile int8_t x292 = INT8_MIN;
int32_t t68 = -112231;
int64_t x299 = INT64_MIN;
int32_t x307 = -1;
uint64_t t73 = 247974134794101376LLU;
uint64_t t75 = 43197663282LLU;
uint8_t x323 = 3U;
static uint64_t t76 = 86434286285LLU;
uint64_t x328 = UINT64_MAX;
static volatile int32_t x331 = -1;
volatile int16_t x339 = 1;
volatile int64_t t80 = -17312022938752LL;
uint64_t x344 = 480641123685LLU;
uint64_t x348 = UINT64_MAX;
uint64_t t82 = 493249244871LLU;
static int16_t x349 = -1;
int32_t x356 = 378696;
static int16_t x357 = INT16_MIN;
int32_t x359 = INT32_MIN;
static volatile int8_t x365 = INT8_MAX;
int16_t x374 = -1;
volatile int64_t t89 = -7547339327LL;
static int32_t t92 = -32430103;
int32_t x405 = INT32_MIN;
volatile int8_t x411 = 38;


void f0(void) {
	static int8_t x1 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	static int8_t x4 = 1;
	int32_t t0 = 1;

	t0 = (x1%(x2+(x3&x4)));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x9 = 0U;
	uint8_t x10 = UINT8_MAX;
	static int32_t x11 = INT32_MIN;
	int16_t x12 = -348;
	int32_t t1 = 78495;

	t1 = (x9%(x10+(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	static int16_t x14 = -1;
	static volatile uint16_t x15 = 15364U;
	volatile int32_t t2 = 0;

	t2 = (x13%(x14+(x15&x16)));

	if (t2 != -2) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;
	static volatile uint64_t t3 = 3956209695846LLU;

	t3 = (x17%(x18+(x19&x20)));

	if (t3 != 245908LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x21 = INT32_MAX;
	int16_t x22 = -1;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 4;

	t4 = (x21%(x22+(x23&x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = 488;
	uint32_t x26 = 10U;
	volatile int16_t x27 = INT16_MAX;
	int16_t x28 = -1998;
	uint32_t t5 = 194150U;

	t5 = (x25%(x26+(x27&x28)));

	if (t5 != 488U) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x33 = INT16_MIN;
	uint32_t x34 = 4899U;
	static int16_t x35 = INT16_MIN;
	static int64_t x36 = INT64_MIN;
	volatile int64_t t6 = 1LL;

	t6 = (x33%(x34+(x35&x36)));

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 445U;
	int64_t x40 = 0LL;
	int64_t t7 = 0LL;

	t7 = (x37%(x38+(x39&x40)));

	if (t7 != 445LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 7;
	uint16_t x42 = 3663U;
	int8_t x43 = 1;

	t8 = (x41%(x42+(x43&x44)));

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x46 = 7U;
	int8_t x47 = INT8_MIN;
	int32_t x48 = INT32_MAX;
	volatile uint32_t t9 = 276926101U;

	t9 = (x45%(x46+(x47&x48)));

	if (t9 != 4903U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x49 = INT32_MAX;
	int16_t x50 = INT16_MIN;
	static volatile uint8_t x52 = 52U;
	int32_t t10 = -11322;

	t10 = (x49%(x50+(x51&x52)));

	if (t10 != 5407) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x53 = 6U;
	int32_t x54 = INT32_MAX;
	int64_t x55 = INT64_MAX;
	static int64_t x56 = -444248494934LL;
	volatile int64_t t11 = 559629964LL;

	t11 = (x53%(x54+(x55&x56)));

	if (t11 != 6LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = INT8_MIN;
	static int8_t x58 = INT8_MIN;
	uint8_t x60 = 77U;
	volatile int32_t t12 = -629338;

	t12 = (x57%(x58+(x59&x60)));

	if (t12 != -26) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = UINT32_MAX;
	volatile uint16_t x62 = 221U;
	volatile uint32_t t13 = 850482389U;

	t13 = (x61%(x62+(x63&x64)));

	if (t13 != 255U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = 235008298LL;
	static int8_t x66 = INT8_MIN;
	int16_t x68 = 12;
	static volatile int64_t t14 = 149712LL;

	t14 = (x65%(x66+(x67&x68)));

	if (t14 != 70LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 25U;
	volatile int32_t x70 = -3302269;
	uint16_t x71 = 39U;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t15 = 1073583095;

	t15 = (x69%(x70+(x71&x72)));

	if (t15 != 25) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x74 = UINT16_MAX;
	int64_t x75 = -1LL;
	int16_t x76 = -1283;
	static int64_t t16 = 8026LL;

	t16 = (x73%(x74+(x75&x76)));

	if (t16 != 53303LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -1;
	int16_t x82 = INT16_MIN;
	int8_t x83 = -1;
	int8_t x84 = -1;

	t17 = (x81%(x82+(x83&x84)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 4U;
	uint16_t x86 = 3237U;
	int32_t x87 = INT32_MIN;
	volatile int64_t x88 = -1LL;

	t18 = (x85%(x86+(x87&x88)));

	if (t18 != 4LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = 22U;
	uint32_t x90 = 912589038U;
	int32_t x91 = -24389;
	static int64_t t19 = 983744LL;

	t19 = (x89%(x90+(x91&x92)));

	if (t19 != 22LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x94 = 52;
	volatile uint64_t t20 = 10722449LLU;

	t20 = (x93%(x94+(x95&x96)));

	if (t20 != 40LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x98 = -1;
	int16_t x99 = -5;
	uint64_t x100 = UINT64_MAX;
	uint64_t t21 = 271904944675637909LLU;

	t21 = (x97%(x98+(x99&x100)));

	if (t21 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	static volatile int8_t x102 = -1;
	int64_t x103 = -1LL;
	uint16_t x104 = UINT16_MAX;
	volatile int64_t t22 = -739717LL;

	t22 = (x101%(x102+(x103&x104)));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = 1;
	volatile int64_t x108 = INT64_MAX;

	t23 = (x105%(x106+(x107&x108)));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x109 = 0LLU;
	uint8_t x110 = 25U;
	int32_t x111 = INT32_MAX;
	static volatile uint8_t x112 = 14U;

	t24 = (x109%(x110+(x111&x112)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	int16_t x114 = -1;
	uint16_t x116 = 55U;
	int64_t t25 = -29LL;

	t25 = (x113%(x114+(x115&x116)));

	if (t25 != -8LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	volatile uint64_t x120 = 15LLU;

	t26 = (x117%(x118+(x119&x120)));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 2U;
	int32_t x122 = INT32_MIN;
	static int8_t x123 = -1;
	int64_t x124 = INT64_MAX;
	volatile int64_t t27 = -36992984764385LL;

	t27 = (x121%(x122+(x123&x124)));

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x125 = -953;
	uint8_t x126 = 11U;
	volatile int64_t x127 = -267290788857313LL;
	int16_t x128 = INT16_MIN;
	volatile int64_t t28 = 66LL;

	t28 = (x125%(x126+(x127&x128)));

	if (t28 != -953LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = -1LL;
	uint64_t x130 = 7471785177194840922LLU;
	int8_t x132 = INT8_MIN;
	volatile uint64_t t29 = 222377LLU;

	t29 = (x129%(x130+(x131&x132)));

	if (t29 != 3503173719319870027LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -26;
	int64_t x134 = INT64_MIN;
	static volatile int16_t x136 = INT16_MAX;
	volatile int64_t t30 = -163944721LL;

	t30 = (x133%(x134+(x135&x136)));

	if (t30 != -26LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x137 = 27462LLU;
	int32_t x138 = INT32_MAX;
	static int8_t x139 = INT8_MIN;
	int8_t x140 = 4;
	static uint64_t t31 = 11898LLU;

	t31 = (x137%(x138+(x139&x140)));

	if (t31 != 27462LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x141 = -1LL;
	int32_t x143 = -1;
	uint32_t x144 = UINT32_MAX;

	t32 = (x141%(x142+(x143&x144)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x147 = 896LL;
	volatile int8_t x148 = 5;
	int64_t t33 = -7728004LL;

	t33 = (x145%(x146+(x147&x148)));

	if (t33 != 1LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = 0;
	static int16_t x151 = INT16_MAX;
	uint64_t x152 = 0LLU;
	uint64_t t34 = 129200749LLU;

	t34 = (x149%(x150+(x151&x152)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MIN;
	static uint8_t x154 = 1U;
	int16_t x155 = -1;
	int32_t x156 = INT32_MIN;
	volatile int32_t t35 = 117828586;

	t35 = (x153%(x154+(x155&x156)));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = 632211383;
	int32_t x160 = INT32_MIN;
	volatile uint32_t t36 = 5U;

	t36 = (x157%(x158+(x159&x160)));

	if (t36 != 501698870U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	uint16_t x163 = UINT16_MAX;
	int8_t x164 = -1;
	volatile uint32_t t37 = 244014901U;

	t37 = (x161%(x162+(x163&x164)));

	if (t37 != 2147418112U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = INT64_MAX;
	int8_t x167 = INT8_MIN;
	int16_t x168 = INT16_MIN;

	t38 = (x165%(x166+(x167&x168)));

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 1994482808U;
	uint16_t x171 = 7U;
	int8_t x172 = INT8_MAX;
	volatile uint32_t t39 = 426442325U;

	t39 = (x169%(x170+(x171&x172)));

	if (t39 != 1994482808U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = 789841439LL;
	volatile int8_t x175 = INT8_MIN;
	volatile int32_t x176 = 962;
	uint64_t t40 = 116209993248LLU;

	t40 = (x173%(x174+(x175&x176)));

	if (t40 != 1854LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	volatile int32_t x178 = -26643;
	int32_t x180 = -232912417;
	int32_t t41 = 65786851;

	t41 = (x177%(x178+(x179&x180)));

	if (t41 != -128) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = -1;
	int64_t x182 = -1LL;
	static uint32_t x183 = UINT32_MAX;
	int64_t t42 = -74367540680962804LL;

	t42 = (x181%(x182+(x183&x184)));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -1;
	uint8_t x186 = 67U;
	int64_t x187 = INT64_MIN;

	t43 = (x185%(x186+(x187&x188)));

	if (t43 != 9223372036854775740LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x189 = -1;
	static int16_t x190 = INT16_MAX;
	uint8_t x191 = UINT8_MAX;
	static int64_t t44 = -33788907LL;

	t44 = (x189%(x190+(x191&x192)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x193 = INT8_MIN;
	uint8_t x194 = 6U;
	static int32_t t45 = 145811;

	t45 = (x193%(x194+(x195&x196)));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x198 = 1U;
	static int16_t x199 = INT16_MIN;
	int16_t x200 = 0;
	volatile int32_t t46 = -6;

	t46 = (x197%(x198+(x199&x200)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	static uint32_t x202 = 10769U;
	static int8_t x204 = -1;
	volatile uint32_t t47 = 124U;

	t47 = (x201%(x202+(x203&x204)));

	if (t47 != 10384U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = -11775;
	int32_t x206 = INT32_MIN;
	int64_t x207 = -1LL;
	static int64_t x208 = -10767LL;
	volatile int64_t t48 = 1460194694LL;

	t48 = (x205%(x206+(x207&x208)));

	if (t48 != -11775LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = -1LL;
	int8_t x210 = INT8_MIN;
	volatile int32_t x211 = INT32_MIN;
	volatile uint64_t x212 = 830982LLU;
	uint64_t t49 = 8446685385624016LLU;

	t49 = (x209%(x210+(x211&x212)));

	if (t49 != 127LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x214 = 3646U;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	volatile int32_t t50 = -9223;

	t50 = (x213%(x214+(x215&x216)));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = INT16_MIN;
	uint32_t x218 = 118258U;
	uint16_t x219 = 7U;
	uint32_t t51 = 317261U;

	t51 = (x217%(x218+(x219&x220)));

	if (t51 != 40484U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x221 = 0U;
	static uint64_t x222 = UINT64_MAX;
	int8_t x223 = -28;
	volatile uint64_t t52 = 7913605875024145LLU;

	t52 = (x221%(x222+(x223&x224)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x226 = INT64_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t53 = 34LLU;

	t53 = (x225%(x226+(x227&x228)));

	if (t53 != 27476LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x229 = 683037U;
	uint32_t x230 = UINT32_MAX;
	static int32_t x231 = INT32_MIN;
	volatile int32_t x232 = 1;
	uint32_t t54 = 3U;

	t54 = (x229%(x230+(x231&x232)));

	if (t54 != 683037U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = INT8_MIN;
	static uint16_t x234 = UINT16_MAX;
	static int32_t x236 = 8702;
	volatile int32_t t55 = 460989;

	t55 = (x233%(x234+(x235&x236)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = -1249LL;
	int64_t t56 = 2043363LL;

	t56 = (x237%(x238+(x239&x240)));

	if (t56 != -1249LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x241 = 0;

	t57 = (x241%(x242+(x243&x244)));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x250 = UINT8_MAX;
	static int16_t x251 = -69;
	static volatile uint64_t t58 = 501707672553342LLU;

	t58 = (x249%(x250+(x251&x252)));

	if (t58 != 677180497669104LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = INT64_MIN;
	static int8_t x254 = INT8_MIN;
	volatile int32_t x255 = 1;
	volatile int64_t t59 = 2LL;

	t59 = (x253%(x254+(x255&x256)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = -1;
	int8_t x258 = INT8_MIN;
	int64_t x260 = -1LL;
	uint64_t t60 = 5112674724408469383LLU;

	t60 = (x257%(x258+(x259&x260)));

	if (t60 != 269825LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x261 = -1;
	static int8_t x262 = -23;
	volatile int32_t t61 = -3405;

	t61 = (x261%(x262+(x263&x264)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = -1;
	int64_t x266 = INT64_MIN;
	uint64_t x267 = UINT64_MAX;
	uint32_t x268 = UINT32_MAX;
	uint64_t t62 = 15496714065794LLU;

	t62 = (x265%(x266+(x267&x268)));

	if (t62 != 9223372032559808512LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x269 = UINT16_MAX;
	static uint32_t x270 = 26U;
	static int32_t x271 = 2670783;
	static int32_t x272 = INT32_MIN;

	t63 = (x269%(x270+(x271&x272)));

	if (t63 != 15U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -1LL;
	uint8_t x274 = UINT8_MAX;
	int64_t x275 = -1LL;
	volatile int32_t x276 = -10;
	volatile int64_t t64 = 50LL;

	t64 = (x273%(x274+(x275&x276)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x277 = UINT64_MAX;
	uint8_t x278 = 116U;
	int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	uint64_t t65 = 26616LLU;

	t65 = (x277%(x278+(x279&x280)));

	if (t65 != 2147483531LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x281 = INT8_MIN;
	uint64_t x282 = UINT64_MAX;
	int16_t x283 = INT16_MAX;
	volatile int16_t x284 = -1;
	uint64_t t66 = 1138648668131613LLU;

	t66 = (x281%(x282+(x283&x284)));

	if (t66 != 128LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x285 = -23;
	uint8_t x286 = 71U;
	int16_t x287 = INT16_MIN;
	static int32_t x288 = -1;
	static volatile int32_t t67 = 0;

	t67 = (x285%(x286+(x287&x288)));

	if (t67 != -23) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x289 = UINT16_MAX;
	uint16_t x290 = UINT16_MAX;
	volatile int16_t x291 = -1;

	t68 = (x289%(x290+(x291&x292)));

	if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -92115;
	int64_t x294 = -33396054LL;
	static int32_t x295 = INT32_MAX;
	volatile uint64_t x296 = UINT64_MAX;
	volatile uint64_t t69 = 4049446486837LLU;

	t69 = (x293%(x294+(x295&x296)));

	if (t69 != 265834711LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = INT64_MIN;
	static volatile uint32_t x298 = 869623U;
	volatile int32_t x300 = INT32_MIN;
	volatile int64_t t70 = 22LL;

	t70 = (x297%(x298+(x299&x300)));

	if (t70 != -869623LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x301 = INT32_MAX;
	uint16_t x302 = 739U;
	volatile int64_t x303 = INT64_MAX;
	uint16_t x304 = UINT16_MAX;
	int64_t t71 = -28275051931321LL;

	t71 = (x301%(x302+(x303&x304)));

	if (t71 != 7225LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = -31510677;
	volatile int64_t x306 = -1LL;
	uint32_t x308 = 113946U;
	static int64_t t72 = 1067761121253720955LL;

	t72 = (x305%(x306+(x307&x308)));

	if (t72 != -61857LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = -25LL;
	static int32_t x310 = -2860;
	uint64_t x311 = UINT64_MAX;
	uint64_t x312 = 122832570607532LLU;

	t73 = (x309%(x310+(x311&x312)));

	if (t73 != 117118011724647LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 2U;
	static int8_t x314 = INT8_MIN;
	volatile uint64_t x315 = 530915700226LLU;
	int32_t x316 = INT32_MIN;
	volatile uint64_t t74 = 777939631612340LLU;

	t74 = (x313%(x314+(x315&x316)));

	if (t74 != 2LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x317 = -1728922;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	uint64_t x320 = 72208428LLU;

	t75 = (x317%(x318+(x319&x320)));

	if (t75 != 2145734202LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int32_t x321 = INT32_MIN;
	uint64_t x322 = 641LLU;
	static int8_t x324 = INT8_MAX;

	t76 = (x321%(x322+(x323&x324)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x325 = 25115U;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 13U;
	volatile uint64_t t77 = 6LLU;

	t77 = (x325%(x326+(x327&x328)));

	if (t77 != 25115LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 3U;
	volatile int64_t x332 = -1LL;
	volatile int64_t t78 = 34968LL;

	t78 = (x329%(x330+(x331&x332)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x333 = 14U;
	volatile uint16_t x334 = 209U;
	int32_t x335 = 1500147;
	int32_t x336 = INT32_MIN;
	static uint32_t t79 = 743306905U;

	t79 = (x333%(x334+(x335&x336)));

	if (t79 != 14U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	uint32_t x340 = UINT32_MAX;

	t80 = (x337%(x338+(x339&x340)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x341 = 6473U;
	volatile uint16_t x342 = UINT16_MAX;
	volatile int8_t x343 = -3;
	volatile uint64_t t81 = 1655450540215494688LLU;

	t81 = (x341%(x342+(x343&x344)));

	if (t81 != 6473LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -1;
	int8_t x346 = INT8_MIN;
	static int64_t x347 = INT64_MAX;

	t82 = (x345%(x346+(x347&x348)));

	if (t82 != 257LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x350 = -1;
	volatile int8_t x351 = INT8_MIN;
	volatile uint16_t x352 = 754U;
	volatile int32_t t83 = -110367145;

	t83 = (x349%(x350+(x351&x352)));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x353 = INT64_MIN;
	uint16_t x354 = 369U;
	uint32_t x355 = UINT32_MAX;
	static int64_t t84 = 1LL;

	t84 = (x353%(x354+(x355&x356)));

	if (t84 != -124733LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x358 = 5250669580741LLU;
	int16_t x360 = -2290;
	static volatile uint64_t t85 = 193117LLU;

	t85 = (x357%(x358+(x359&x360)));

	if (t85 != 4891073218026LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x361 = INT8_MIN;
	static int8_t x362 = INT8_MIN;
	uint64_t x363 = 364832208123LLU;
	int8_t x364 = -10;
	uint64_t t86 = 984358541257988LLU;

	t86 = (x361%(x362+(x363&x364)));

	if (t86 != 198489679240LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x366 = -1;
	int8_t x367 = INT8_MAX;
	static volatile int8_t x368 = INT8_MAX;
	static int32_t t87 = -5;

	t87 = (x365%(x366+(x367&x368)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x369 = -449588719943LL;
	volatile int64_t x370 = -17864148LL;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 6475U;
	volatile int64_t t88 = 31867982146181LL;

	t88 = (x369%(x370+(x371&x372)));

	if (t88 != -1707227LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = -1;
	uint32_t x375 = 87087U;
	int64_t x376 = 21980388864226LL;

	t89 = (x373%(x374+(x375&x376)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint64_t x377 = UINT64_MAX;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MIN;
	int64_t x380 = -1LL;
	static volatile uint64_t t90 = 2478166712430602LLU;

	t90 = (x377%(x378+(x379&x380)));

	if (t90 != 32895LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = UINT64_MAX;
	int32_t x382 = -1;
	uint16_t x383 = UINT16_MAX;
	int16_t x384 = INT16_MIN;
	uint64_t t91 = 12659LLU;

	t91 = (x381%(x382+(x383&x384)));

	if (t91 != 15LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x385 = 16786U;
	int16_t x386 = 97;
	int32_t x387 = INT32_MIN;
	int32_t x388 = INT32_MIN;

	t92 = (x385%(x386+(x387&x388)));

	if (t92 != 16786) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x393 = INT16_MAX;
	volatile int32_t x394 = -1;
	int16_t x395 = 0;
	int8_t x396 = INT8_MAX;
	static volatile int32_t t93 = -993419;

	t93 = (x393%(x394+(x395&x396)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x397 = -1;
	static int16_t x398 = -1;
	static volatile uint16_t x399 = 1U;
	uint8_t x400 = 2U;
	volatile int32_t t94 = 23;

	t94 = (x397%(x398+(x399&x400)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x401 = 438;
	int8_t x402 = INT8_MIN;
	int16_t x403 = 12;
	uint64_t x404 = 8565062144315084641LLU;
	static uint64_t t95 = 35719LLU;

	t95 = (x401%(x402+(x403&x404)));

	if (t95 != 438LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x406 = -1658;
	uint8_t x407 = 1U;
	int64_t x408 = 7992605096123LL;
	volatile int64_t t96 = 1LL;

	t96 = (x405%(x406+(x407&x408)));

	if (t96 != -49LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x409 = -16;
	int32_t x410 = INT32_MIN;
	int8_t x412 = INT8_MIN;
	int32_t t97 = -595;

	t97 = (x409%(x410+(x411&x412)));

	if (t97 != -16) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x413 = INT32_MIN;
	int64_t x414 = INT64_MIN;
	static int64_t x415 = 30154LL;
	volatile int16_t x416 = 6269;
	int64_t t98 = -4428202122187136262LL;

	t98 = (x413%(x414+(x415&x416)));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = INT32_MIN;
	volatile uint32_t x418 = UINT32_MAX;
	int32_t x419 = -1;
	int32_t x420 = INT32_MAX;
	static volatile uint32_t t99 = 3879U;

	t99 = (x417%(x418+(x419&x420)));

	if (t99 != 2U) { NG(); } else { ; }
	
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

