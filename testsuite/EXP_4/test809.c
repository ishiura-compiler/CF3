#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = UINT16_MAX;
int64_t t1 = 347749392LL;
static int32_t t2 = -22111047;
static int64_t x16 = -122258623LL;
static volatile int64_t t3 = -1988337811923061722LL;
static int16_t x24 = INT16_MAX;
uint64_t t5 = 211116405890084736LLU;
int32_t x30 = INT32_MIN;
int32_t x36 = 109;
uint16_t x39 = UINT16_MAX;
static uint64_t x40 = 1501407LLU;
volatile uint64_t t8 = 2665147081393855442LLU;
static uint16_t x44 = 31110U;
int64_t x48 = INT64_MIN;
int64_t t10 = -62829193468313LL;
int32_t x56 = INT32_MIN;
uint8_t x60 = 60U;
int64_t t13 = 59592752186088220LL;
volatile int32_t x80 = -1;
static volatile int8_t x87 = -3;
static int8_t x102 = 3;
int8_t x107 = -8;
int64_t x108 = INT64_MIN;
int64_t x110 = INT64_MAX;
static int16_t x113 = -1;
int8_t x135 = -1;
volatile uint64_t t30 = 15386LLU;
int16_t x151 = INT16_MIN;
static int64_t x152 = -143077053407LL;
uint16_t x158 = UINT16_MAX;
int64_t t39 = -58287132946009LL;
uint32_t t42 = 460239523U;
volatile uint16_t x195 = UINT16_MAX;
static int8_t x201 = -1;
int16_t x212 = -1;
volatile uint32_t t50 = 5093U;
volatile uint32_t x233 = 26570865U;
uint64_t x236 = UINT64_MAX;
int64_t x237 = -1LL;
uint32_t x239 = 412671U;
int64_t x241 = INT64_MAX;
volatile uint32_t x242 = UINT32_MAX;
int8_t x245 = INT8_MIN;
uint16_t x251 = 1U;
volatile uint64_t x260 = 56658LLU;
static uint8_t x261 = 79U;
uint16_t x263 = 530U;
uint64_t x270 = UINT64_MAX;
int8_t x272 = INT8_MAX;
int8_t x282 = -1;
int16_t x284 = INT16_MAX;
int8_t x285 = INT8_MIN;
volatile int16_t x287 = INT16_MIN;
static int64_t x291 = INT64_MIN;
uint64_t x293 = 112LLU;
int32_t x299 = -1;
volatile int32_t x302 = 3934628;
int64_t x305 = INT64_MIN;
uint64_t x306 = 628924424603246LLU;
uint64_t x309 = 145469705398553LLU;
int16_t x311 = INT16_MAX;
volatile int16_t x312 = INT16_MIN;
static volatile int16_t x314 = -10;
int32_t x318 = 14756004;
int32_t x320 = 55;
uint64_t t72 = 3485LLU;
volatile int16_t x343 = 2;
volatile int64_t t78 = -527159412460LL;
volatile int64_t t79 = -76639745756440LL;
int16_t x349 = INT16_MIN;
int8_t x350 = INT8_MIN;
int64_t t80 = 13197483672LL;
int16_t x360 = 584;
uint16_t x367 = 872U;
uint8_t x369 = 42U;
volatile uint64_t t85 = 34LLU;
int8_t x378 = 1;
volatile int16_t x379 = INT16_MIN;
uint64_t t86 = 3LLU;
int32_t x382 = INT32_MAX;
int32_t x383 = INT32_MIN;
int16_t x390 = -1;
volatile uint16_t x394 = UINT16_MAX;
volatile uint64_t t90 = 470LLU;
int32_t x402 = INT32_MAX;
int16_t x403 = 2;
uint64_t t92 = 1667LLU;
uint8_t x420 = UINT8_MAX;
uint16_t x422 = 3822U;
volatile uint64_t t95 = 279178929111LLU;
uint32_t x435 = UINT32_MAX;
uint32_t t98 = 160U;
int16_t x438 = INT16_MIN;
int8_t x440 = INT8_MIN;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int16_t x3 = -14356;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -1;

	t0 = (x1*(x2&(x3%x4)));

	if (t0 != -947898240) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -39LL;
	int64_t x6 = INT64_MIN;
	static volatile int32_t x7 = INT32_MIN;
	int32_t x8 = -1;

	t1 = (x5*(x6&(x7%x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int8_t x10 = INT8_MIN;
	int32_t x11 = -1;
	static volatile int8_t x12 = INT8_MAX;

	t2 = (x9*(x10&(x11%x12)));

	if (t2 != -4194176) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 15U;
	static int64_t x14 = -31570760LL;
	int32_t x15 = INT32_MAX;

	t3 = (x13*(x14&(x15%x16)));

	if (t3 != 1036139760LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = 24696U;
	int32_t x22 = INT32_MIN;
	uint8_t x23 = 15U;
	volatile int32_t t4 = 0;

	t4 = (x21*(x22&(x23%x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = UINT8_MAX;
	static int64_t x26 = INT64_MIN;
	uint64_t x27 = UINT64_MAX;
	static volatile int32_t x28 = INT32_MAX;

	t5 = (x25*(x26&(x27%x28)));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	static int8_t x31 = -1;
	int8_t x32 = -1;
	volatile int32_t t6 = 8363;

	t6 = (x29*(x30&(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = -1335216647110018941LL;
	volatile uint64_t x34 = 166661900875LLU;
	volatile uint16_t x35 = 21U;
	volatile uint64_t t7 = 1028327364089LLU;

	t7 = (x33*(x34&(x35%x36)));

	if (t7 != 17111527426599532675LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -6818;
	static uint8_t x38 = 61U;

	t8 = (x37*(x38&(x39%x40)));

	if (t8 != 18446744073709135718LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = -7;
	int32_t x42 = INT32_MAX;
	uint64_t x43 = 100336708772598LLU;
	volatile uint64_t t9 = 384215LLU;

	t9 = (x41*(x42&(x43%x44)));

	if (t9 != 18446744073709372570LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = INT64_MAX;
	int16_t x46 = INT16_MIN;
	uint8_t x47 = 0U;

	t10 = (x45*(x46&(x47%x48)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MIN;
	uint64_t x50 = 1816271010LLU;
	volatile int64_t x51 = INT64_MIN;
	int32_t x52 = INT32_MIN;
	static volatile uint64_t t11 = 138LLU;

	t11 = (x49*(x50&(x51%x52)));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile int32_t x54 = -1;
	int64_t x55 = INT64_MIN;
	static int64_t t12 = 23LL;

	t12 = (x53*(x54&(x55%x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = 112713109575442LL;
	static uint8_t x58 = 0U;
	uint16_t x59 = 0U;

	t13 = (x57*(x58&(x59%x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	static uint32_t x62 = 208443669U;
	volatile uint16_t x63 = 6U;
	static int64_t x64 = INT64_MIN;
	volatile int64_t t14 = -41042762267932LL;

	t14 = (x61*(x62&(x63%x64)));

	if (t14 != -131072LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x65 = 24U;
	volatile int32_t x66 = -1;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	volatile int64_t t15 = 82LL;

	t15 = (x65*(x66&(x67%x68)));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x77 = 17U;
	int64_t x78 = INT64_MIN;
	static uint8_t x79 = 1U;
	static volatile int64_t t16 = 595847610493541LL;

	t16 = (x77*(x78&(x79%x80)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x81 = UINT64_MAX;
	int16_t x82 = -1;
	int8_t x83 = INT8_MAX;
	int64_t x84 = -1LL;
	uint64_t t17 = 4046165728LLU;

	t17 = (x81*(x82&(x83%x84)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x85 = 1676290338614LL;
	int16_t x86 = INT16_MIN;
	int64_t x88 = INT64_MAX;
	int64_t t18 = -4153665LL;

	t18 = (x85*(x86&(x87%x88)));

	if (t18 != -54928681815703552LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = INT64_MIN;
	int16_t x90 = -1;
	int32_t x91 = -18486;
	static int8_t x92 = -1;
	int64_t t19 = -750699261539LL;

	t19 = (x89*(x90&(x91%x92)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = INT32_MIN;
	int32_t x94 = 43566;
	int8_t x95 = -1;
	int64_t x96 = INT64_MAX;
	volatile int64_t t20 = -77LL;

	t20 = (x93*(x94&(x95%x96)));

	if (t20 != -93557272608768LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = -8294827;
	int16_t x98 = 30;
	int8_t x99 = -3;
	volatile int8_t x100 = -10;
	static volatile int32_t t21 = 1717;

	t21 = (x97*(x98&(x99%x100)));

	if (t21 != -232255156) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = -1;
	int32_t x103 = -1;
	int16_t x104 = INT16_MAX;
	static volatile int32_t t22 = 103120838;

	t22 = (x101*(x102&(x103%x104)));

	if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = -1LL;
	static volatile int32_t x106 = INT32_MAX;
	volatile int64_t t23 = 158696LL;

	t23 = (x105*(x106&(x107%x108)));

	if (t23 != -2147483640LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 1651U;
	uint32_t x111 = UINT32_MAX;
	static int32_t x112 = INT32_MIN;
	int64_t t24 = 1027071142LL;

	t24 = (x109*(x110&(x111%x112)));

	if (t24 != 3545495501197LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint8_t x114 = 0U;
	int16_t x115 = INT16_MAX;
	int64_t x116 = INT64_MIN;
	static volatile int64_t t25 = -548071024255389740LL;

	t25 = (x113*(x114&(x115%x116)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1LL;
	int64_t x118 = INT64_MIN;
	int64_t x119 = INT64_MIN;
	static volatile int8_t x120 = INT8_MIN;
	int64_t t26 = -274828101595LL;

	t26 = (x117*(x118&(x119%x120)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = INT8_MAX;
	uint64_t x122 = UINT64_MAX;
	uint8_t x123 = 0U;
	uint16_t x124 = 13702U;
	volatile uint64_t t27 = 2377119640LLU;

	t27 = (x121*(x122&(x123%x124)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = UINT32_MAX;
	int64_t x126 = 6LL;
	volatile uint8_t x127 = 31U;
	int8_t x128 = INT8_MIN;
	int64_t t28 = -1719388LL;

	t28 = (x125*(x126&(x127%x128)));

	if (t28 != 25769803770LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x133 = 20U;
	static uint8_t x134 = UINT8_MAX;
	volatile int8_t x136 = INT8_MIN;
	volatile int32_t t29 = 5230;

	t29 = (x133*(x134&(x135%x136)));

	if (t29 != 5100) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x137 = 221LLU;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = INT16_MAX;
	uint32_t x140 = 4660475U;

	t30 = (x137*(x138&(x139%x140)));

	if (t30 != 7241507LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x141 = 153U;
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 1U;
	int32_t x144 = 2;
	volatile int64_t t31 = -4222364710738LL;

	t31 = (x141*(x142&(x143%x144)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x145 = UINT32_MAX;
	static int16_t x146 = INT16_MIN;
	uint16_t x147 = 0U;
	volatile uint64_t x148 = 90498259955192214LLU;
	uint64_t t32 = 1268498949LLU;

	t32 = (x145*(x146&(x147%x148)));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -3;
	uint32_t x150 = UINT32_MAX;
	volatile int64_t t33 = -832488263284517LL;

	t33 = (x149*(x150&(x151%x152)));

	if (t33 != -12884803584LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = -1;
	int16_t x154 = INT16_MAX;
	uint32_t x155 = 10U;
	int8_t x156 = INT8_MIN;
	volatile uint32_t t34 = 49U;

	t34 = (x153*(x154&(x155%x156)));

	if (t34 != 4294967286U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = 15;
	static int16_t x159 = INT16_MIN;
	volatile int64_t x160 = INT64_MIN;
	int64_t t35 = 6205612398901LL;

	t35 = (x157*(x158&(x159%x160)));

	if (t35 != 491520LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -1LL;
	volatile uint8_t x162 = 62U;
	uint8_t x163 = 52U;
	int8_t x164 = -1;
	volatile int64_t t36 = -31150325LL;

	t36 = (x161*(x162&(x163%x164)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = UINT8_MAX;
	uint16_t x166 = 5548U;
	uint8_t x167 = 103U;
	int64_t x168 = -1757599190857LL;
	volatile int64_t t37 = 2199592472855658LL;

	t37 = (x165*(x166&(x167%x168)));

	if (t37 != 9180LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	static int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	int64_t x172 = -1LL;
	int64_t t38 = -25970403779276253LL;

	t38 = (x169*(x170&(x171%x172)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x173 = 73U;
	volatile int16_t x174 = 7534;
	int32_t x175 = -1;
	int64_t x176 = INT64_MIN;

	t39 = (x173*(x174&(x175%x176)));

	if (t39 != 549982LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x177 = UINT8_MAX;
	uint8_t x178 = 2U;
	uint32_t x179 = UINT32_MAX;
	int64_t x180 = INT64_MIN;
	volatile int64_t t40 = 366LL;

	t40 = (x177*(x178&(x179%x180)));

	if (t40 != 510LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 121503LLU;
	uint8_t x182 = UINT8_MAX;
	static int32_t x183 = INT32_MIN;
	int32_t x184 = -1;
	uint64_t t41 = 3318128056LLU;

	t41 = (x181*(x182&(x183%x184)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x185 = 1U;
	static int16_t x186 = 6;
	uint32_t x187 = UINT32_MAX;
	volatile int8_t x188 = INT8_MIN;

	t42 = (x185*(x186&(x187%x188)));

	if (t42 != 6U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = -3;
	static int32_t x190 = INT32_MIN;
	volatile int16_t x191 = 15;
	int16_t x192 = INT16_MAX;
	volatile int32_t t43 = 20;

	t43 = (x189*(x190&(x191%x192)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = INT8_MIN;
	volatile int16_t x194 = INT16_MIN;
	static int64_t x196 = INT64_MIN;
	volatile int64_t t44 = -560912879206335978LL;

	t44 = (x193*(x194&(x195%x196)));

	if (t44 != -4194304LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x197 = 1U;
	int8_t x198 = -1;
	int8_t x199 = 0;
	static int32_t x200 = -1;
	volatile int32_t t45 = 247729570;

	t45 = (x197*(x198&(x199%x200)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x202 = 165781516LLU;
	int8_t x203 = -1;
	uint64_t x204 = UINT64_MAX;
	volatile uint64_t t46 = 3861LLU;

	t46 = (x201*(x202&(x203%x204)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x209 = UINT16_MAX;
	int32_t x210 = INT32_MIN;
	int16_t x211 = -26;
	volatile int32_t t47 = -4795368;

	t47 = (x209*(x210&(x211%x212)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = 1999LL;
	static volatile uint64_t x214 = UINT64_MAX;
	volatile uint64_t x215 = UINT64_MAX;
	int64_t x216 = -1LL;
	uint64_t t48 = 2498LLU;

	t48 = (x213*(x214&(x215%x216)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = 600560868092927LL;
	static uint64_t x218 = 40LLU;
	static int64_t x219 = -6709840277513102LL;
	int32_t x220 = INT32_MIN;
	uint64_t t49 = 6609LLU;

	t49 = (x217*(x218&(x219%x220)));

	if (t49 != 19217947778973664LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x225 = 1464045472U;
	int32_t x226 = INT32_MIN;
	static uint32_t x227 = 8723U;
	static uint8_t x228 = 28U;

	t50 = (x225*(x226&(x227%x228)));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x229 = 0;
	uint64_t x230 = UINT64_MAX;
	volatile int8_t x231 = INT8_MIN;
	volatile int64_t x232 = -4429745729166682LL;
	uint64_t t51 = 23219296656LLU;

	t51 = (x229*(x230&(x231%x232)));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x234 = 11U;
	volatile int64_t x235 = INT64_MIN;
	uint64_t t52 = 200610464714LLU;

	t52 = (x233*(x234&(x235%x236)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x238 = 4LLU;
	int16_t x240 = -1;
	static uint64_t t53 = 46611919225267262LLU;

	t53 = (x237*(x238&(x239%x240)));

	if (t53 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x243 = -1;
	static int16_t x244 = -1;
	int64_t t54 = 5864680LL;

	t54 = (x241*(x242&(x243%x244)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x246 = 13832U;
	static int16_t x247 = 476;
	int16_t x248 = 902;
	static volatile int32_t t55 = 185;

	t55 = (x245*(x246&(x247%x248)));

	if (t55 != -1024) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x249 = 454840333076229255LL;
	int8_t x250 = INT8_MIN;
	int32_t x252 = -1;
	volatile int64_t t56 = 243607804LL;

	t56 = (x249*(x250&(x251%x252)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int8_t x255 = INT8_MIN;
	static uint32_t x256 = UINT32_MAX;
	uint32_t t57 = 864U;

	t57 = (x253*(x254&(x255%x256)));

	if (t57 != 128U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = INT16_MIN;
	uint64_t x258 = 1LLU;
	int64_t x259 = -26872056189LL;
	uint64_t t58 = 5628798084238LLU;

	t58 = (x257*(x258&(x259%x260)));

	if (t58 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int64_t x262 = 19778562200LL;
	static volatile uint16_t x264 = UINT16_MAX;
	int64_t t59 = -883LL;

	t59 = (x261*(x262&(x263%x264)));

	if (t59 != 1264LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	int32_t x266 = -1;
	int32_t x267 = -1;
	static uint32_t x268 = UINT32_MAX;
	uint32_t t60 = 507153860U;

	t60 = (x265*(x266&(x267%x268)));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = -1;
	int8_t x271 = -11;
	uint64_t t61 = 7535201854173401119LLU;

	t61 = (x269*(x270&(x271%x272)));

	if (t61 != 11LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x277 = -3;
	uint64_t x278 = 60136422680LLU;
	uint64_t x279 = 339852LLU;
	uint32_t x280 = UINT32_MAX;
	volatile uint64_t t62 = 267990007LLU;

	t62 = (x277*(x278&(x279%x280)));

	if (t62 != 18446744073709517032LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	volatile int64_t x283 = -2192334682007569878LL;
	volatile int64_t t63 = -3390363LL;

	t63 = (x281*(x282&(x283%x284)));

	if (t63 != 21996675006464LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x286 = 0U;
	int8_t x288 = -1;
	static int32_t t64 = -28469633;

	t64 = (x285*(x286&(x287%x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x289 = UINT16_MAX;
	uint64_t x290 = 341LLU;
	int8_t x292 = -6;
	static volatile uint64_t t65 = 16451263295654660LLU;

	t65 = (x289*(x290&(x291%x292)));

	if (t65 != 22281900LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x294 = -1;
	int8_t x295 = INT8_MIN;
	volatile int32_t x296 = INT32_MAX;
	uint64_t t66 = 1921114452609815LLU;

	t66 = (x293*(x294&(x295%x296)));

	if (t66 != 18446744073709537280LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x297 = 15423271U;
	volatile int8_t x298 = INT8_MIN;
	static int64_t x300 = 7793027685522370LL;
	static int64_t t67 = -987682839898046LL;

	t67 = (x297*(x298&(x299%x300)));

	if (t67 != -1974178688LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x301 = INT8_MAX;
	static uint32_t x303 = 811784896U;
	volatile uint8_t x304 = 4U;
	volatile uint32_t t68 = 1003660749U;

	t68 = (x301*(x302&(x303%x304)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x307 = 0U;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t69 = 635446029059606887LLU;

	t69 = (x305*(x306&(x307%x308)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x310 = INT64_MAX;
	static volatile uint64_t t70 = 8103230368381877LLU;

	t70 = (x309*(x310&(x311%x312)));

	if (t70 != 4766605836794386151LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x313 = -1;
	uint32_t x315 = 5U;
	volatile int32_t x316 = INT32_MIN;
	volatile uint32_t t71 = 27327609U;

	t71 = (x313*(x314&(x315%x316)));

	if (t71 != 4294967292U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = 1LL;
	static uint64_t x319 = 12458974LLU;

	t72 = (x317*(x318&(x319%x320)));

	if (t72 != 36LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x321 = UINT8_MAX;
	int8_t x322 = 42;
	int64_t x323 = INT64_MIN;
	int16_t x324 = INT16_MIN;
	int64_t t73 = -3116341726544LL;

	t73 = (x321*(x322&(x323%x324)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x325 = -296498730372661469LL;
	uint8_t x326 = 126U;
	static volatile int8_t x327 = INT8_MIN;
	volatile int16_t x328 = INT16_MAX;
	volatile int64_t t74 = 96398997LL;

	t74 = (x325*(x326&(x327%x328)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x329 = INT8_MAX;
	int16_t x330 = -740;
	int64_t x331 = INT64_MAX;
	static volatile int32_t x332 = 36;
	volatile int64_t t75 = -44652LL;

	t75 = (x329*(x330&(x331%x332)));

	if (t75 != 508LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x333 = -1;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = -1;
	static volatile int64_t x336 = 7640951138221LL;
	static uint64_t t76 = 960922888461334LLU;

	t76 = (x333*(x334&(x335%x336)));

	if (t76 != 1LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x337 = INT8_MIN;
	volatile uint16_t x338 = 22U;
	static int8_t x339 = -1;
	int32_t x340 = -1;
	static volatile int32_t t77 = -139157;

	t77 = (x337*(x338&(x339%x340)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x341 = 256273504;
	int64_t x342 = -1LL;
	int32_t x344 = -1;

	t78 = (x341*(x342&(x343%x344)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x345 = -1LL;
	uint8_t x346 = 3U;
	volatile int16_t x347 = -1;
	int16_t x348 = INT16_MIN;

	t79 = (x345*(x346&(x347%x348)));

	if (t79 != -3LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x351 = INT32_MIN;
	volatile int64_t x352 = -18LL;

	t80 = (x349*(x350&(x351%x352)));

	if (t80 != 4194304LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x353 = INT16_MIN;
	int16_t x354 = -1;
	int64_t x355 = INT64_MIN;
	volatile int16_t x356 = -794;
	volatile int64_t t81 = -376133928761LL;

	t81 = (x353*(x354&(x355%x356)));

	if (t81 != 8126464LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x357 = 4852U;
	int32_t x358 = 18;
	int32_t x359 = INT32_MAX;
	uint32_t t82 = 100U;

	t82 = (x357*(x358&(x359%x360)));

	if (t82 != 9704U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	int32_t x362 = 266;
	volatile int8_t x363 = INT8_MAX;
	uint64_t x364 = 107LLU;
	static uint64_t t83 = 2807LLU;

	t83 = (x361*(x362&(x363%x364)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x365 = UINT64_MAX;
	uint32_t x366 = 49853U;
	uint8_t x368 = UINT8_MAX;
	uint64_t t84 = 2944197LLU;

	t84 = (x365*(x366&(x367%x368)));

	if (t84 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x370 = 3U;
	uint8_t x371 = 99U;
	static uint64_t x372 = 158LLU;

	t85 = (x369*(x370&(x371%x372)));

	if (t85 != 126LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x377 = INT16_MIN;
	volatile uint64_t x380 = UINT64_MAX;

	t86 = (x377*(x378&(x379%x380)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MAX;
	int8_t x384 = -1;
	int32_t t87 = -1;

	t87 = (x381*(x382&(x383%x384)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x385 = INT64_MIN;
	static uint8_t x386 = 4U;
	uint64_t x387 = UINT64_MAX;
	uint64_t x388 = 60962283LLU;
	volatile uint64_t t88 = 27882361681LLU;

	t88 = (x385*(x386&(x387%x388)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = INT32_MIN;
	static int8_t x391 = INT8_MIN;
	int64_t x392 = INT64_MIN;
	volatile int64_t t89 = -12048847739912LL;

	t89 = (x389*(x390&(x391%x392)));

	if (t89 != 274877906944LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x393 = INT8_MAX;
	uint64_t x395 = UINT64_MAX;
	uint8_t x396 = 124U;

	t90 = (x393*(x394&(x395%x396)));

	if (t90 != 1905LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x404 = UINT16_MAX;
	int32_t t91 = -268163929;

	t91 = (x401*(x402&(x403%x404)));

	if (t91 != -65536) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x405 = 795006741;
	int8_t x406 = INT8_MIN;
	int64_t x407 = -310810214884564610LL;
	uint64_t x408 = 241834304528LLU;

	t92 = (x405*(x406&(x407%x408)));

	if (t92 != 7726108706238318848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x413 = 0U;
	int32_t x414 = -1;
	volatile int32_t x415 = -1;
	uint16_t x416 = UINT16_MAX;
	int32_t t93 = 2;

	t93 = (x413*(x414&(x415%x416)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x417 = 14570U;
	int16_t x418 = -1;
	uint32_t x419 = 70965030U;
	volatile uint32_t t94 = 458734U;

	t94 = (x417*(x418&(x419%x420)));

	if (t94 != 874200U) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x421 = 0;
	static int16_t x423 = INT16_MIN;
	uint64_t x424 = 1981172172240204LLU;

	t95 = (x421*(x422&(x423%x424)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x425 = 1448U;
	static uint8_t x426 = UINT8_MAX;
	volatile uint64_t x427 = UINT64_MAX;
	uint64_t x428 = 11454227835894LLU;
	static volatile uint64_t t96 = 3005080395844439454LLU;

	t96 = (x425*(x426&(x427%x428)));

	if (t96 != 50680LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x429 = 38U;
	volatile int8_t x430 = -1;
	int64_t x431 = 29062179329682LL;
	int8_t x432 = INT8_MIN;
	static int64_t t97 = 0LL;

	t97 = (x429*(x430&(x431%x432)));

	if (t97 != 684LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x433 = INT32_MIN;
	uint8_t x434 = 0U;
	static int8_t x436 = INT8_MIN;

	t98 = (x433*(x434&(x435%x436)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x437 = INT32_MAX;
	uint64_t x439 = 25140787LLU;
	uint64_t t99 = 79LLU;

	t99 = (x437*(x438&(x439%x440)));

	if (t99 != 53972826759135232LLU) { NG(); } else { ; }
	
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

