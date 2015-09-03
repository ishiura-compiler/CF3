#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x3 = 14U;
int8_t x9 = -1;
int8_t x29 = INT8_MIN;
volatile uint32_t t6 = 5876U;
uint32_t x37 = 44U;
uint8_t x38 = UINT8_MAX;
static int16_t x40 = INT16_MAX;
volatile int32_t x41 = -1;
volatile int64_t t8 = -18291063740LL;
volatile int8_t x46 = 12;
uint8_t x47 = UINT8_MAX;
int64_t t9 = -7397208960956629LL;
uint64_t t11 = 99245814848LLU;
int8_t x69 = INT8_MIN;
int32_t x72 = -1;
int32_t t13 = INT32_MIN;
int64_t x76 = 2452507178LL;
uint16_t x82 = 28739U;
volatile int32_t x83 = -7274;
uint32_t x85 = 12179552U;
uint32_t t16 = 2U;
int64_t x89 = INT64_MIN;
static volatile uint64_t t17 = 81LLU;
int16_t x93 = INT16_MAX;
static volatile int8_t x94 = -1;
int64_t x96 = -1LL;
volatile uint64_t t18 = 1517LLU;
int64_t x99 = 223038588837122639LL;
volatile int64_t x108 = INT64_MAX;
int64_t x113 = INT64_MIN;
volatile uint64_t t23 = 53280522LLU;
int8_t x125 = -1;
int64_t x127 = -7LL;
static uint64_t x128 = 7015076783964LLU;
int32_t x141 = -1;
static volatile int32_t t29 = -512;
int8_t x145 = INT8_MIN;
uint64_t x148 = 167LLU;
volatile int64_t x150 = 0LL;
volatile int64_t t31 = 55832446LL;
int64_t x153 = -1LL;
volatile int32_t x155 = -1;
volatile int8_t x160 = INT8_MIN;
int64_t x170 = -1LL;
volatile int64_t t35 = -5593LL;
static int64_t t40 = 84016LL;
int16_t x194 = 99;
int16_t x195 = INT16_MAX;
static uint64_t x198 = UINT64_MAX;
int8_t x207 = 2;
static uint8_t x209 = UINT8_MAX;
int16_t x210 = -11648;
static uint16_t x212 = 6U;
volatile int32_t t44 = 4983;
volatile uint32_t x229 = 151531885U;
uint16_t x232 = UINT16_MAX;
volatile int64_t t48 = 37582885LL;
volatile int64_t t49 = 2255942910LL;
int32_t x242 = INT32_MIN;
volatile int32_t t50 = 607002;
int64_t x254 = INT64_MAX;
static volatile uint8_t x258 = UINT8_MAX;
int32_t x268 = INT32_MIN;
int64_t x269 = -4962348369453076LL;
uint64_t t57 = 7384111657992361LLU;
int8_t x274 = -1;
volatile int8_t x278 = INT8_MIN;
int32_t x280 = -1;
volatile int32_t t59 = INT32_MIN;
static int8_t x282 = INT8_MAX;
volatile uint64_t t60 = 6344976529952LLU;
volatile int16_t x303 = -1;
int16_t x305 = INT16_MIN;
uint32_t x311 = 31006803U;
int32_t x312 = INT32_MAX;
uint32_t t65 = 70U;
volatile int64_t t66 = -4233569571306LL;
uint32_t x324 = 28420U;
uint16_t x326 = 13396U;
uint16_t x334 = UINT16_MAX;
static int8_t x338 = -16;
volatile int8_t x339 = INT8_MIN;
volatile int16_t x354 = INT16_MAX;
static int32_t t74 = 5;
uint64_t x368 = 203781444006205324LLU;
int16_t x370 = 2644;
int8_t x375 = 3;
int16_t x376 = INT16_MIN;
volatile uint8_t x382 = 66U;
int64_t x391 = INT64_MIN;
volatile int16_t x392 = INT16_MIN;
int64_t x400 = 38262499355868LL;
volatile int64_t t84 = -469721829193843LL;
static uint64_t x403 = 16680717652382LLU;
static uint64_t t85 = 7920039646680907LLU;
static volatile uint64_t t86 = 157574738858386773LLU;
int8_t x418 = 2;
int64_t x425 = -1LL;
int8_t x429 = INT8_MAX;
int32_t x436 = -1;
volatile int64_t t93 = 123900598LL;
uint64_t t94 = 4021734135662295003LLU;
uint64_t x445 = UINT64_MAX;
int8_t x459 = 1;
uint64_t x460 = UINT64_MAX;
static volatile int32_t x461 = -1;


void f0(void) {
	uint8_t x1 = 57U;
	static uint64_t x2 = UINT64_MAX;
	volatile uint64_t x4 = UINT64_MAX;
	uint64_t t0 = 21815LLU;

	t0 = ((x1&x2)&(x3-x4));

	if (t0 != 9LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -1840117692353446311LL;
	volatile int32_t x6 = -1;
	int64_t x7 = INT64_MIN;
	int8_t x8 = 0;
	volatile int64_t t1 = INT64_MIN;

	t1 = ((x5&x6)&(x7-x8));

	if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x10 = 8;
	int8_t x11 = INT8_MIN;
	volatile uint16_t x12 = UINT16_MAX;
	static volatile int32_t t2 = -8;

	t2 = ((x9&x10)&(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x17 = INT64_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	int64_t x19 = -1LL;
	volatile int16_t x20 = -1;
	static uint64_t t3 = 27LLU;

	t3 = ((x17&x18)&(x19-x20));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 12763U;
	int16_t x22 = INT16_MAX;
	int32_t x23 = INT32_MIN;
	static int16_t x24 = INT16_MIN;
	volatile int32_t t4 = -170081684;

	t4 = ((x21&x22)&(x23-x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MAX;
	uint64_t x26 = UINT64_MAX;
	int32_t x27 = -1;
	uint8_t x28 = 6U;
	volatile uint64_t t5 = 435048420455185LLU;

	t5 = ((x25&x26)&(x27-x28));

	if (t5 != 121LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x30 = 279628U;
	int8_t x31 = INT8_MIN;
	volatile uint16_t x32 = UINT16_MAX;

	t6 = ((x29&x30)&(x31-x32));

	if (t6 != 279552U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x39 = -1;
	uint32_t t7 = 20470072U;

	t7 = ((x37&x38)&(x39-x40));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x42 = 7785023507105LL;
	int8_t x43 = 51;
	int8_t x44 = INT8_MIN;

	t8 = ((x41&x42)&(x43-x44));

	if (t8 != 161LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = -1LL;
	uint16_t x48 = 17513U;

	t9 = ((x45&x46)&(x47-x48));

	if (t9 != 4LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x57 = 5626863032898526078LLU;
	uint32_t x58 = 11547309U;
	int8_t x59 = -1;
	static volatile int64_t x60 = 7341864LL;
	volatile uint64_t t10 = 5309219825687297732LLU;

	t10 = ((x57&x58)&(x59-x60));

	if (t10 != 8392708LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = 945;
	uint8_t x62 = 127U;
	uint64_t x63 = 12646LLU;
	int32_t x64 = -28;

	t11 = ((x61&x62)&(x63-x64));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x65 = -141;
	int16_t x66 = -1;
	int8_t x67 = -1;
	int64_t x68 = 2698957788378LL;
	volatile int64_t t12 = 1948706301LL;

	t12 = ((x65&x66)&(x67-x68));

	if (t12 != -2698957788383LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x70 = INT8_MIN;
	volatile int32_t x71 = INT32_MIN;

	t13 = ((x69&x70)&(x71-x72));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = 792;
	int64_t x74 = INT64_MIN;
	static int32_t x75 = INT32_MIN;
	volatile int64_t t14 = 53185848029239626LL;

	t14 = ((x73&x74)&(x75-x76));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = 0U;
	int64_t x84 = INT64_MIN;
	int64_t t15 = 1LL;

	t15 = ((x81&x82)&(x83-x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x86 = INT16_MIN;
	int8_t x87 = -4;
	volatile uint16_t x88 = 418U;

	t16 = ((x85&x86)&(x87-x88));

	if (t16 != 12156928U) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x90 = 70450U;
	uint64_t x91 = 67320438981LLU;
	int32_t x92 = 28660091;

	t17 = ((x89&x90)&(x91-x92));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x95 = 187965LLU;

	t18 = ((x93&x94)&(x95-x96));

	if (t18 != 24126LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x97 = 0;
	volatile int16_t x98 = -12;
	static int8_t x100 = 0;
	volatile int64_t t19 = 151896192025561279LL;

	t19 = ((x97&x98)&(x99-x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x101 = INT64_MIN;
	static volatile int32_t x102 = INT32_MAX;
	uint32_t x103 = 194329516U;
	volatile int16_t x104 = INT16_MIN;
	volatile int64_t t20 = 17247333102364549LL;

	t20 = ((x101&x102)&(x103-x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = INT64_MIN;
	volatile int64_t x106 = -81214498821044LL;
	static int32_t x107 = 460201175;
	int64_t t21 = INT64_MIN;

	t21 = ((x105&x106)&(x107-x108));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x109 = -33;
	int32_t x110 = -13637098;
	volatile uint64_t x111 = 4080718454381382LLU;
	int8_t x112 = 11;
	volatile uint64_t t22 = 40178243LLU;

	t22 = ((x109&x110)&(x111-x112));

	if (t22 != 4080718441794066LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x114 = 15;
	volatile uint64_t x115 = UINT64_MAX;
	volatile uint32_t x116 = UINT32_MAX;

	t23 = ((x113&x114)&(x115-x116));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x117 = -1;
	static uint8_t x118 = UINT8_MAX;
	uint64_t x119 = 22386LLU;
	int8_t x120 = INT8_MIN;
	static volatile uint64_t t24 = 521236654562LLU;

	t24 = ((x117&x118)&(x119-x120));

	if (t24 != 242LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x126 = UINT8_MAX;
	static volatile uint64_t t25 = 0LLU;

	t25 = ((x125&x126)&(x127-x128));

	if (t25 != 157LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x129 = 1;
	static volatile uint16_t x130 = UINT16_MAX;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = 4408482LLU;
	static volatile uint64_t t26 = 13885LLU;

	t26 = ((x129&x130)&(x131-x132));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x133 = -22780043152LL;
	uint16_t x134 = UINT16_MAX;
	uint64_t x135 = UINT64_MAX;
	int64_t x136 = 5434068998LL;
	uint64_t t27 = 1LLU;

	t27 = ((x133&x134)&(x135-x136));

	if (t27 != 8304LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint16_t x137 = 9U;
	static int64_t x138 = 79LL;
	int64_t x139 = INT64_MIN;
	int64_t x140 = INT64_MIN;
	volatile int64_t t28 = -701817223830701LL;

	t28 = ((x137&x138)&(x139-x140));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x142 = 9255U;
	static int16_t x143 = INT16_MIN;
	int32_t x144 = -1;

	t29 = ((x141&x142)&(x143-x144));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x146 = UINT32_MAX;
	uint16_t x147 = 18058U;
	static volatile uint64_t t30 = 21100805LLU;

	t30 = ((x145&x146)&(x147-x148));

	if (t30 != 17792LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = INT64_MAX;
	uint16_t x151 = 3681U;
	int8_t x152 = INT8_MAX;

	t31 = ((x149&x150)&(x151-x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x154 = -9LL;
	volatile uint32_t x156 = 145U;
	volatile int64_t t32 = 213513970378135812LL;

	t32 = ((x153&x154)&(x155-x156));

	if (t32 != 4294967142LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x157 = UINT8_MAX;
	int32_t x158 = INT32_MAX;
	int16_t x159 = INT16_MIN;
	volatile int32_t t33 = -46537;

	t33 = ((x157&x158)&(x159-x160));

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x165 = INT32_MIN;
	static int32_t x166 = 35317;
	int8_t x167 = INT8_MIN;
	int16_t x168 = 17;
	int32_t t34 = 731;

	t34 = ((x165&x166)&(x167-x168));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = 259762U;
	static int16_t x171 = INT16_MIN;
	static volatile int32_t x172 = INT32_MIN;

	t35 = ((x169&x170)&(x171-x172));

	if (t35 != 229376LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	int16_t x174 = 28;
	int32_t x175 = 8460353;
	uint16_t x176 = 781U;
	static volatile int32_t t36 = 2415118;

	t36 = ((x173&x174)&(x175-x176));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = INT16_MAX;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 0U;
	int8_t x180 = -26;
	volatile int32_t t37 = 1022405159;

	t37 = ((x177&x178)&(x179-x180));

	if (t37 != 26) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x181 = -1LL;
	static int64_t x182 = -57LL;
	int8_t x183 = -1;
	int16_t x184 = 8;
	volatile int64_t t38 = -36560471120LL;

	t38 = ((x181&x182)&(x183-x184));

	if (t38 != -57LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x185 = INT64_MIN;
	int64_t x186 = 17214LL;
	int32_t x187 = INT32_MIN;
	int8_t x188 = -1;
	volatile int64_t t39 = 592634LL;

	t39 = ((x185&x186)&(x187-x188));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	int16_t x190 = -533;
	static uint16_t x191 = 433U;
	static int64_t x192 = INT64_MAX;

	t40 = ((x189&x190)&(x191-x192));

	if (t40 != -9223372036854775424LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x193 = UINT64_MAX;
	int64_t x196 = -1LL;
	uint64_t t41 = 13703LLU;

	t41 = ((x193&x194)&(x195-x196));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x197 = INT16_MIN;
	uint16_t x199 = 29U;
	static int16_t x200 = INT16_MAX;
	uint64_t t42 = 21886627043LLU;

	t42 = ((x197&x198)&(x199-x200));

	if (t42 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = UINT32_MAX;
	uint16_t x206 = 1992U;
	volatile uint8_t x208 = 9U;
	uint32_t t43 = 65979127U;

	t43 = ((x205&x206)&(x207-x208));

	if (t43 != 1992U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x211 = 59U;

	t44 = ((x209&x210)&(x211-x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x221 = -1;
	uint8_t x222 = 54U;
	volatile uint32_t x223 = 225779397U;
	uint16_t x224 = 13U;
	volatile uint32_t t45 = 156196531U;

	t45 = ((x221&x222)&(x223-x224));

	if (t45 != 48U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x225 = -1;
	static int16_t x226 = 1381;
	int16_t x227 = -1;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t46 = 17490LLU;

	t46 = ((x225&x226)&(x227-x228));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x230 = 85U;
	int8_t x231 = -1;
	uint32_t t47 = 15814U;

	t47 = ((x229&x230)&(x231-x232));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = -1;
	volatile uint32_t x234 = 41U;
	int32_t x235 = 2;
	int64_t x236 = INT64_MAX;

	t48 = ((x233&x234)&(x235-x236));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x237 = INT32_MAX;
	static int32_t x238 = 12427701;
	static volatile int64_t x239 = 317621610196509820LL;
	int16_t x240 = INT16_MIN;

	t49 = ((x237&x238)&(x239-x240));

	if (t49 != 8429620LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x241 = 876U;
	int16_t x243 = INT16_MIN;
	int16_t x244 = INT16_MIN;

	t50 = ((x241&x242)&(x243-x244));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x245 = UINT8_MAX;
	uint8_t x246 = UINT8_MAX;
	static uint8_t x247 = 2U;
	volatile uint32_t x248 = 30113362U;
	static volatile uint32_t t51 = 188197089U;

	t51 = ((x245&x246)&(x247-x248));

	if (t51 != 176U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x249 = 3798080959780138141LLU;
	int8_t x250 = INT8_MIN;
	uint8_t x251 = 15U;
	uint16_t x252 = UINT16_MAX;
	uint64_t t52 = 382809439LLU;

	t52 = ((x249&x250)&(x251-x252));

	if (t52 != 3798080959780093952LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x253 = 3;
	uint64_t x255 = 1804943536117961858LLU;
	static uint32_t x256 = 59U;
	uint64_t t53 = 8952458677242228339LLU;

	t53 = ((x253&x254)&(x255-x256));

	if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = INT32_MAX;
	int64_t x259 = INT64_MIN;
	int32_t x260 = INT32_MIN;
	static volatile int64_t t54 = 114043LL;

	t54 = ((x257&x258)&(x259-x260));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = 0;
	int8_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	int16_t x264 = -1;
	int32_t t55 = 18789;

	t55 = ((x261&x262)&(x263-x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x265 = -6183878;
	int16_t x266 = -1;
	static volatile int16_t x267 = -1165;
	int32_t t56 = -108028;

	t56 = ((x265&x266)&(x267-x268));

	if (t56 != 2141298738) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x270 = -4000985884614413LL;
	static int16_t x271 = INT16_MIN;
	uint64_t x272 = 84LLU;

	t57 = ((x269&x270)&(x271-x272));

	if (t57 != 18437816061304242336LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x273 = UINT8_MAX;
	int64_t x275 = -1LL;
	int64_t x276 = INT64_MAX;
	volatile int64_t t58 = -39127417696131941LL;

	t58 = ((x273&x274)&(x275-x276));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x277 = -1;
	int32_t x279 = INT32_MIN;

	t59 = ((x277&x278)&(x279-x280));

	if (t59 != INT32_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = INT16_MIN;
	volatile uint64_t x283 = 1329348130345521353LLU;
	volatile int8_t x284 = 5;

	t60 = ((x281&x282)&(x283-x284));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x285 = 664415;
	uint8_t x286 = 0U;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	uint64_t t61 = 10934995214405720LLU;

	t61 = ((x285&x286)&(x287-x288));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x297 = 21U;
	int32_t x298 = 1;
	volatile int16_t x299 = INT16_MIN;
	uint64_t x300 = 3574LLU;
	uint64_t t62 = 55696292LLU;

	t62 = ((x297&x298)&(x299-x300));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = 3426254573864LL;
	static uint8_t x302 = 0U;
	int32_t x304 = -1;
	static int64_t t63 = -6LL;

	t63 = ((x301&x302)&(x303-x304));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x306 = 55U;
	int16_t x307 = INT16_MIN;
	int32_t x308 = 64814801;
	int32_t t64 = -258;

	t64 = ((x305&x306)&(x307-x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x309 = INT16_MIN;
	int16_t x310 = -1;

	t65 = ((x309&x310)&(x311-x312));

	if (t65 != 2178482176U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MAX;
	uint8_t x315 = UINT8_MAX;
	uint16_t x316 = 24709U;

	t66 = ((x313&x314)&(x315-x316));

	if (t66 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x317 = UINT8_MAX;
	int32_t x318 = 100;
	int32_t x319 = INT32_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t67 = 4022227LLU;

	t67 = ((x317&x318)&(x319-x320));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x321 = 448150917580LLU;
	uint32_t x322 = 222860396U;
	uint8_t x323 = UINT8_MAX;
	static volatile uint64_t t68 = 9312571325624599LLU;

	t68 = ((x321&x322)&(x323-x324));

	if (t68 != 88084552LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x325 = -35;
	int16_t x327 = INT16_MIN;
	uint64_t x328 = 5462609399057797LLU;
	uint64_t t69 = 1576830826066973LLU;

	t69 = ((x325&x326)&(x327-x328));

	if (t69 != 12368LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = INT16_MIN;
	uint8_t x330 = 79U;
	static uint8_t x331 = UINT8_MAX;
	uint8_t x332 = UINT8_MAX;
	int32_t t70 = -35;

	t70 = ((x329&x330)&(x331-x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x333 = INT16_MAX;
	static int16_t x335 = 1;
	static volatile int64_t x336 = -1LL;
	volatile int64_t t71 = -112755300LL;

	t71 = ((x333&x334)&(x335-x336));

	if (t71 != 2LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x337 = INT64_MAX;
	uint8_t x340 = 104U;
	int64_t t72 = 153952887398LL;

	t72 = ((x337&x338)&(x339-x340));

	if (t72 != 9223372036854775568LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x341 = 10670823083328355LLU;
	static int8_t x342 = 0;
	static uint8_t x343 = 4U;
	volatile uint32_t x344 = 1U;
	uint64_t t73 = 416538LLU;

	t73 = ((x341&x342)&(x343-x344));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x353 = 0;
	int32_t x355 = -35;
	uint16_t x356 = UINT16_MAX;

	t74 = ((x353&x354)&(x355-x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = -2088;
	uint8_t x358 = UINT8_MAX;
	uint64_t x359 = 254007045332LLU;
	int32_t x360 = INT32_MIN;
	volatile uint64_t t75 = 54581690902LLU;

	t75 = ((x357&x358)&(x359-x360));

	if (t75 != 208LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x361 = -1;
	int64_t x362 = INT64_MAX;
	volatile uint32_t x363 = 0U;
	static int32_t x364 = INT32_MIN;
	int64_t t76 = 85747556LL;

	t76 = ((x361&x362)&(x363-x364));

	if (t76 != 2147483648LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x365 = -22381172;
	static uint64_t x366 = 26237LLU;
	int32_t x367 = 394426;
	static volatile uint64_t t77 = 18165207LLU;

	t77 = ((x365&x366)&(x367-x368));

	if (t77 != 9228LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = -1;
	volatile uint16_t x371 = 0U;
	volatile int16_t x372 = 20;
	int32_t t78 = 0;

	t78 = ((x369&x370)&(x371-x372));

	if (t78 != 2628) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = INT64_MAX;
	int8_t x374 = 1;
	volatile int64_t t79 = 239LL;

	t79 = ((x373&x374)&(x375-x376));

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x377 = 3U;
	int64_t x378 = -1LL;
	static int64_t x379 = -1LL;
	static uint8_t x380 = 0U;
	int64_t t80 = -2321499873718560963LL;

	t80 = ((x377&x378)&(x379-x380));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x381 = INT8_MIN;
	int16_t x383 = 3;
	uint64_t x384 = UINT64_MAX;
	static volatile uint64_t t81 = 199893717942704LLU;

	t81 = ((x381&x382)&(x383-x384));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x389 = -1LL;
	int16_t x390 = INT16_MIN;
	volatile int64_t t82 = -15833826800477376LL;

	t82 = ((x389&x390)&(x391-x392));

	if (t82 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x393 = 50U;
	int64_t x394 = -407LL;
	volatile int64_t x395 = -154657612109552516LL;
	int16_t x396 = INT16_MAX;
	static int64_t t83 = -8577441550LL;

	t83 = ((x393&x394)&(x395-x396));

	if (t83 != 32LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = INT8_MIN;
	int32_t x398 = INT32_MAX;
	int16_t x399 = -6851;

	t84 = ((x397&x398)&(x399-x400));

	if (t84 != 1364277248LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x401 = INT64_MAX;
	int8_t x402 = INT8_MAX;
	volatile uint16_t x404 = UINT16_MAX;

	t85 = ((x401&x402)&(x403-x404));

	if (t85 != 31LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x405 = 2849352LLU;
	int32_t x406 = INT32_MIN;
	static int64_t x407 = INT64_MIN;
	int16_t x408 = -4;

	t86 = ((x405&x406)&(x407-x408));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x409 = 246;
	uint8_t x410 = UINT8_MAX;
	uint64_t x411 = 2664651185LLU;
	int16_t x412 = INT16_MIN;
	volatile uint64_t t87 = 1621473926LLU;

	t87 = ((x409&x410)&(x411-x412));

	if (t87 != 176LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = -1;
	int16_t x414 = INT16_MAX;
	int64_t x415 = 129220840991309662LL;
	volatile int16_t x416 = INT16_MIN;
	int64_t t88 = 1506458478308611LL;

	t88 = ((x413&x414)&(x415-x416));

	if (t88 != 16222LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x417 = 3U;
	int16_t x419 = INT16_MIN;
	static volatile uint8_t x420 = 21U;
	volatile int32_t t89 = 320926396;

	t89 = ((x417&x418)&(x419-x420));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x426 = INT32_MAX;
	static int64_t x427 = -209988656LL;
	int32_t x428 = INT32_MAX;
	int64_t t90 = -12036388677LL;

	t90 = ((x425&x426)&(x427-x428));

	if (t90 != 1937494993LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x430 = 8180190;
	uint8_t x431 = UINT8_MAX;
	int64_t x432 = -101429760LL;
	volatile int64_t t91 = 2693426LL;

	t91 = ((x429&x430)&(x431-x432));

	if (t91 != 94LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x433 = INT8_MAX;
	static int16_t x434 = -1;
	static volatile int32_t x435 = INT32_MIN;
	volatile int32_t t92 = -13;

	t92 = ((x433&x434)&(x435-x436));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x437 = 867U;
	int64_t x438 = -103250LL;
	uint32_t x439 = UINT32_MAX;
	static int64_t x440 = -1LL;

	t93 = ((x437&x438)&(x439-x440));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x441 = -1;
	static volatile int16_t x442 = INT16_MIN;
	uint16_t x443 = 134U;
	static uint64_t x444 = UINT64_MAX;

	t94 = ((x441&x442)&(x443-x444));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x446 = -1LL;
	int16_t x447 = -250;
	uint32_t x448 = 106390169U;
	volatile uint64_t t95 = 106104958LLU;

	t95 = ((x445&x446)&(x447-x448));

	if (t95 != 4188576877LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x449 = INT8_MIN;
	static uint8_t x450 = UINT8_MAX;
	static int64_t x451 = 3240173695057155492LL;
	uint64_t x452 = UINT64_MAX;
	uint64_t t96 = 6582528855532609674LLU;

	t96 = ((x449&x450)&(x451-x452));

	if (t96 != 128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x453 = -1;
	uint8_t x454 = 48U;
	uint16_t x455 = UINT16_MAX;
	int8_t x456 = INT8_MAX;
	int32_t t97 = -13828698;

	t97 = ((x453&x454)&(x455-x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x457 = 8U;
	uint8_t x458 = 74U;
	volatile uint64_t t98 = 189LLU;

	t98 = ((x457&x458)&(x459-x460));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x462 = 58;
	int64_t x463 = 1941LL;
	int8_t x464 = INT8_MIN;
	volatile int64_t t99 = 2479483609448910510LL;

	t99 = ((x461&x462)&(x463-x464));

	if (t99 != 16LL) { NG(); } else { ; }
	
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

