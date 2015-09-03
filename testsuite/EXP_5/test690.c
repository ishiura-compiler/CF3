#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t t0 = 0U;
int64_t x10 = INT64_MAX;
static int32_t x12 = INT32_MAX;
int8_t x13 = -1;
int16_t x19 = -1;
int32_t x23 = 475359474;
uint8_t x24 = UINT8_MAX;
uint16_t x26 = UINT16_MAX;
int8_t x29 = INT8_MAX;
static uint16_t x30 = 2U;
static uint64_t x35 = 164495796898320518LLU;
int16_t x37 = 816;
volatile int32_t x39 = 182263;
uint64_t x40 = UINT64_MAX;
int16_t x45 = 231;
uint64_t x47 = 172255100428498058LLU;
static uint64_t t10 = 6796LLU;
static volatile int16_t x52 = INT16_MIN;
int64_t t11 = -61LL;
static int32_t x53 = INT32_MIN;
static volatile int32_t x57 = INT32_MIN;
static int64_t x58 = INT64_MIN;
uint8_t x61 = 31U;
volatile uint16_t x63 = 14083U;
volatile int16_t x68 = INT16_MIN;
uint64_t t15 = 92883LLU;
int32_t x71 = -142214;
static uint8_t x72 = 12U;
volatile int32_t t16 = 47072136;
volatile uint64_t t17 = 667LLU;
volatile uint64_t t18 = 3600769515080806LLU;
volatile int8_t x84 = 57;
static uint32_t x89 = UINT32_MAX;
int32_t x93 = INT32_MAX;
int8_t x96 = INT8_MIN;
volatile int64_t t21 = 1264LL;
int64_t x98 = -12719524LL;
int64_t x105 = 53LL;
volatile int64_t t24 = -953LL;
uint64_t x110 = 53575778502395LLU;
uint64_t t25 = 1115177645328LLU;
int32_t x124 = INT32_MIN;
int16_t x145 = INT16_MIN;
int8_t x151 = 4;
int64_t x156 = INT64_MAX;
volatile uint16_t x158 = UINT16_MAX;
int32_t x163 = 311654734;
uint32_t x165 = 1715123399U;
volatile int64_t t36 = -3767498995LL;
uint64_t t39 = 817599455530805LLU;
volatile int64_t x188 = -1LL;
volatile uint64_t t43 = 237834794333LLU;
volatile int64_t t44 = 456777580719LL;
uint32_t x208 = UINT32_MAX;
int64_t t47 = -105063LL;
int8_t x220 = 4;
int64_t x221 = -1LL;
int64_t x222 = INT64_MIN;
int8_t x229 = INT8_MAX;
int16_t x232 = INT16_MIN;
int64_t x238 = 2400107LL;
uint16_t x252 = UINT16_MAX;
int8_t x255 = INT8_MIN;
int64_t x260 = -2116LL;
static int8_t x264 = INT8_MIN;
static int64_t x267 = -1LL;
int16_t x277 = INT16_MIN;
uint32_t x283 = 1U;
int16_t x284 = INT16_MAX;
int64_t t61 = -275791927830487833LL;
uint32_t x287 = UINT32_MAX;
int16_t x290 = INT16_MIN;
int8_t x296 = INT8_MIN;
int32_t t67 = 1;
int8_t x315 = -3;
uint64_t t68 = 2389344259LLU;
static int16_t x319 = 2753;
int64_t x321 = INT64_MIN;
uint8_t x323 = 13U;
uint32_t x329 = 1671577U;
int64_t x335 = INT64_MIN;
volatile int8_t x336 = -1;
static int16_t x348 = INT16_MIN;
volatile uint64_t t74 = 105754572LLU;
static int32_t x350 = INT32_MIN;
volatile uint16_t x363 = 485U;
static int16_t x368 = -1;
int16_t x379 = INT16_MIN;
volatile uint64_t t81 = 24413860LLU;
uint16_t x385 = 3U;
volatile int32_t x386 = INT32_MIN;
static uint16_t x387 = UINT16_MAX;
volatile int32_t t83 = 1948315;
static uint32_t x395 = 543074U;
int16_t x405 = -1;
int32_t x406 = -1;
uint64_t x408 = 26092371873LLU;
volatile uint64_t x412 = 499490810763659083LLU;
volatile uint32_t x413 = 45U;
volatile uint8_t x442 = 0U;
volatile int64_t t95 = 1LL;
uint16_t x451 = UINT16_MAX;
int16_t x452 = -735;
volatile int64_t t97 = -76233LL;
static uint64_t x458 = UINT64_MAX;
uint32_t x459 = 454247U;


void f0(void) {
	uint32_t x1 = 88148U;
	volatile int16_t x2 = -1;
	int32_t x3 = INT32_MIN;
	int8_t x4 = INT8_MAX;

	t0 = (x1+((x2%x3)-x4));

	if (t0 != 88020U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = -1;
	uint32_t x11 = 415U;
	volatile int64_t t1 = 1LL;

	t1 = (x9+((x10%x11)-x12));

	if (t1 != -2147483631LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	uint8_t x15 = UINT8_MAX;
	static int16_t x16 = -1;
	volatile int32_t t2 = -1;

	t2 = (x13+((x14%x15)-x16));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x17 = INT16_MIN;
	int16_t x18 = 2688;
	uint64_t x20 = UINT64_MAX;
	static volatile uint64_t t3 = 2640580065760011LLU;

	t3 = (x17+((x18%x19)-x20));

	if (t3 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 58;
	int8_t x22 = INT8_MAX;
	volatile int32_t t4 = -1703894;

	t4 = (x21+((x22%x23)-x24));

	if (t4 != -70) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x25 = 3U;
	int64_t x27 = INT64_MIN;
	int64_t x28 = -1LL;
	volatile int64_t t5 = 797678LL;

	t5 = (x25+((x26%x27)-x28));

	if (t5 != 65539LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x31 = 95946443192LLU;
	volatile int32_t x32 = INT32_MIN;
	volatile uint64_t t6 = 1953670400540473540LLU;

	t6 = (x29+((x30%x31)-x32));

	if (t6 != 2147483777LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 3762U;
	static int8_t x34 = INT8_MIN;
	int64_t x36 = 14340546977769966LL;
	uint64_t t7 = 17336LLU;

	t7 = (x33+((x34%x35)-x36));

	if (t7 != 8874274119887268LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = 18U;
	volatile uint64_t t8 = 3896374314902438LLU;

	t8 = (x37+((x38%x39)-x40));

	if (t8 != 835LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 93319U;
	int64_t x42 = -985449584353LL;
	uint64_t x43 = 133403988857LLU;
	static uint64_t x44 = 542684720375204LLU;
	static uint64_t t9 = 32209902LLU;

	t9 = (x41+((x42%x43)-x44));

	if (t9 != 18446201489085157465LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x46 = INT64_MIN;
	int8_t x48 = -17;

	t10 = (x45+((x46%x47)-x48));

	if (t10 != 93851714144378982LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 2;
	static int32_t x50 = INT32_MAX;
	int64_t x51 = -1LL;

	t11 = (x49+((x50%x51)-x52));

	if (t11 != 32770LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = -3;
	uint32_t x55 = 28U;
	volatile int64_t x56 = -1LL;
	int64_t t12 = -278LL;

	t12 = (x53+((x54%x55)-x56));

	if (t12 != -2147483646LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x59 = -1LL;
	int8_t x60 = INT8_MIN;
	int64_t t13 = 1692LL;

	t13 = (x57+((x58%x59)-x60));

	if (t13 != -2147483520LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = 10223998;
	uint64_t x64 = 486LLU;
	volatile uint64_t t14 = 337219851LLU;

	t14 = (x61+((x62%x63)-x64));

	if (t14 != 13368LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 10957133LLU;
	int64_t x66 = INT64_MAX;
	int8_t x67 = 1;

	t15 = (x65+((x66%x67)-x68));

	if (t15 != 10989901LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x69 = -6;
	volatile uint8_t x70 = 10U;

	t16 = (x69+((x70%x71)-x72));

	if (t16 != -8) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	static uint64_t x74 = 30697712802LLU;
	volatile int8_t x75 = -4;
	int16_t x76 = INT16_MIN;

	t17 = (x73+((x74%x75)-x76));

	if (t17 != 34992712865LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x77 = UINT8_MAX;
	uint64_t x78 = UINT64_MAX;
	static int32_t x79 = INT32_MAX;
	int16_t x80 = -1;

	t18 = (x77+((x78%x79)-x80));

	if (t18 != 259LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = 0;
	uint32_t x82 = UINT32_MAX;
	uint8_t x83 = 127U;
	uint32_t t19 = 116U;

	t19 = (x81+((x82%x83)-x84));

	if (t19 != 4294967254U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x90 = INT16_MIN;
	uint32_t x91 = 488U;
	static int64_t x92 = INT64_MAX;
	int64_t t20 = -725385695LL;

	t20 = (x89+((x90%x91)-x92));

	if (t20 != -9223372032559808344LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x94 = INT8_MIN;
	int64_t x95 = -2205114285083669LL;

	t21 = (x93+((x94%x95)-x96));

	if (t21 != 2147483647LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = -1LL;
	static volatile int8_t x99 = INT8_MIN;
	volatile int32_t x100 = INT32_MAX;
	int64_t t22 = -18506130182433440LL;

	t22 = (x97+((x98%x99)-x100));

	if (t22 != -2147483684LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = 15U;
	uint16_t x102 = 51U;
	static int8_t x103 = -4;
	static int8_t x104 = INT8_MAX;
	int32_t t23 = -7275360;

	t23 = (x101+((x102%x103)-x104));

	if (t23 != -109) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x106 = 0U;
	static int64_t x107 = -1LL;
	volatile int64_t x108 = INT64_MAX;

	t24 = (x105+((x106%x107)-x108));

	if (t24 != -9223372036854775754LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = 2;
	int16_t x111 = -1;
	static uint64_t x112 = 7982LLU;

	t25 = (x109+((x110%x111)-x112));

	if (t25 != 53575778494415LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	int8_t x118 = -1;
	volatile int16_t x119 = -1;
	int16_t x120 = INT16_MIN;
	volatile int32_t t26 = -345399438;

	t26 = (x117+((x118%x119)-x120));

	if (t26 != 33023) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = -1;
	uint32_t x122 = 563419821U;
	int8_t x123 = INT8_MAX;
	static volatile uint32_t t27 = 0U;

	t27 = (x121+((x122%x123)-x124));

	if (t27 != 2147483716U) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x129 = INT32_MIN;
	uint64_t x130 = UINT64_MAX;
	int16_t x131 = INT16_MIN;
	int32_t x132 = -8;
	uint64_t t28 = 1937LLU;

	t28 = (x129+((x130%x131)-x132));

	if (t28 != 18446744071562100743LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x133 = 55U;
	volatile int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MIN;
	static int8_t x136 = INT8_MIN;
	static volatile uint32_t t29 = 3080574U;

	t29 = (x133+((x134%x135)-x136));

	if (t29 != 32950U) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x146 = -978201;
	uint16_t x147 = 51U;
	static uint8_t x148 = 33U;
	int32_t t30 = -1437;

	t30 = (x145+((x146%x147)-x148));

	if (t30 != -32822) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	uint8_t x150 = UINT8_MAX;
	int32_t x152 = 5216;
	int32_t t31 = -212;

	t31 = (x149+((x150%x151)-x152));

	if (t31 != -5214) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x153 = INT16_MIN;
	volatile int32_t x154 = INT32_MAX;
	uint16_t x155 = UINT16_MAX;
	int64_t t32 = INT64_MIN;

	t32 = (x153+((x154%x155)-x156));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = INT8_MIN;
	volatile uint32_t x159 = 491446U;
	static uint64_t x160 = UINT64_MAX;
	volatile uint64_t t33 = 78807182509717LLU;

	t33 = (x157+((x158%x159)-x160));

	if (t33 != 65408LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = -1LL;
	int64_t x162 = -1LL;
	static uint64_t x164 = UINT64_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x161+((x162%x163)-x164));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x166 = 114U;
	volatile uint32_t x167 = UINT32_MAX;
	static int8_t x168 = INT8_MAX;
	uint32_t t35 = 5566U;

	t35 = (x165+((x166%x167)-x168));

	if (t35 != 1715123386U) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = 1534803;
	static int64_t x170 = -1LL;
	volatile int64_t x171 = INT64_MAX;
	static int16_t x172 = 4;

	t36 = (x169+((x170%x171)-x172));

	if (t36 != 1534798LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = -7;
	volatile uint8_t x174 = UINT8_MAX;
	int64_t x175 = -1LL;
	volatile uint32_t x176 = 37396U;
	volatile int64_t t37 = 729150LL;

	t37 = (x173+((x174%x175)-x176));

	if (t37 != -37403LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x177 = INT32_MIN;
	uint32_t x178 = UINT32_MAX;
	int16_t x179 = -1;
	static int8_t x180 = -11;
	uint32_t t38 = 31258618U;

	t38 = (x177+((x178%x179)-x180));

	if (t38 != 2147483659U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MAX;
	int64_t x183 = INT64_MAX;
	uint32_t x184 = UINT32_MAX;

	t39 = (x181+((x182%x183)-x184));

	if (t39 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = UINT16_MAX;
	uint16_t x186 = 121U;
	int16_t x187 = INT16_MIN;
	volatile int64_t t40 = 1867792799754LL;

	t40 = (x185+((x186%x187)-x188));

	if (t40 != 65657LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x189 = -1;
	static int32_t x190 = INT32_MIN;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	int64_t t41 = 2LL;

	t41 = (x189+((x190%x191)-x192));

	if (t41 != -2147483521LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 336462U;
	static int32_t x194 = INT32_MIN;
	int64_t x195 = INT64_MIN;
	int64_t x196 = -589144219LL;
	int64_t t42 = -687LL;

	t42 = (x193+((x194%x195)-x196));

	if (t42 != -1558002967LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x197 = INT8_MAX;
	uint32_t x198 = 8033U;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = UINT64_MAX;

	t43 = (x197+((x198%x199)-x200));

	if (t43 != 8161LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = INT16_MIN;
	int64_t x202 = 31127074928400105LL;
	int32_t x203 = INT32_MIN;
	volatile int32_t x204 = INT32_MIN;

	t44 = (x201+((x202%x203)-x204));

	if (t44 != 3825243881LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x205 = INT32_MAX;
	int8_t x206 = -61;
	uint16_t x207 = 28150U;
	static volatile uint32_t t45 = 1716052U;

	t45 = (x205+((x206%x207)-x208));

	if (t45 != 2147483587U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x209 = 232U;
	int64_t x210 = INT64_MIN;
	static int8_t x211 = INT8_MAX;
	static int16_t x212 = -1;
	volatile int64_t t46 = -41720LL;

	t46 = (x209+((x210%x211)-x212));

	if (t46 != 232LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = -1LL;
	int64_t x214 = INT64_MAX;
	static int16_t x215 = -15879;
	uint8_t x216 = 89U;

	t47 = (x213+((x214%x215)-x216));

	if (t47 != 7321LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x217 = 799U;
	volatile int32_t x218 = -1;
	int64_t x219 = -1LL;
	volatile int64_t t48 = -30905943191335352LL;

	t48 = (x217+((x218%x219)-x220));

	if (t48 != 795LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x223 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	uint64_t t49 = UINT64_MAX;

	t49 = (x221+((x222%x223)-x224));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x230 = INT16_MIN;
	int32_t x231 = 35825;
	int32_t t50 = -107999;

	t50 = (x229+((x230%x231)-x232));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = 3;
	uint32_t x234 = 343U;
	volatile int8_t x235 = -15;
	static uint16_t x236 = 21U;
	volatile uint32_t t51 = 258416436U;

	t51 = (x233+((x234%x235)-x236));

	if (t51 != 325U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x237 = INT16_MIN;
	int8_t x239 = INT8_MIN;
	static uint16_t x240 = UINT16_MAX;
	volatile int64_t t52 = 7252851808LL;

	t52 = (x237+((x238%x239)-x240));

	if (t52 != -98196LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x241 = UINT16_MAX;
	int8_t x242 = -1;
	uint32_t x243 = UINT32_MAX;
	uint32_t x244 = UINT32_MAX;
	volatile uint32_t t53 = 9658U;

	t53 = (x241+((x242%x243)-x244));

	if (t53 != 65536U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x249 = -214428039LL;
	static int64_t x250 = INT64_MIN;
	static volatile int8_t x251 = INT8_MAX;
	int64_t t54 = 562731LL;

	t54 = (x249+((x250%x251)-x252));

	if (t54 != -214493575LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = 0U;
	uint32_t x254 = UINT32_MAX;
	int64_t x256 = INT64_MAX;
	static int64_t t55 = 39876233LL;

	t55 = (x253+((x254%x255)-x256));

	if (t55 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x257 = 8208U;
	int16_t x258 = INT16_MIN;
	int8_t x259 = -1;
	volatile int64_t t56 = -3988207LL;

	t56 = (x257+((x258%x259)-x260));

	if (t56 != 10324LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -1;
	static int16_t x262 = INT16_MIN;
	uint64_t x263 = 15LLU;
	uint64_t t57 = 20328959953LLU;

	t57 = (x261+((x262%x263)-x264));

	if (t57 != 135LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x265 = 6U;
	uint64_t x266 = 2246000764LLU;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t58 = 1129022461824LLU;

	t58 = (x265+((x266%x267)-x268));

	if (t58 != 2246000898LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x269 = INT16_MAX;
	uint32_t x270 = 960U;
	int32_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	static uint64_t t59 = 717221783761LLU;

	t59 = (x269+((x270%x271)-x272));

	if (t59 != 33728LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x278 = -442;
	int32_t x279 = INT32_MAX;
	int8_t x280 = INT8_MAX;
	volatile int32_t t60 = 29147973;

	t60 = (x277+((x278%x279)-x280));

	if (t60 != -33337) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x281 = 113622986U;
	int64_t x282 = -1LL;

	t61 = (x281+((x282%x283)-x284));

	if (t61 != 113590219LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = 1464;
	uint32_t x286 = 175915U;
	int16_t x288 = -6;
	uint32_t t62 = 8725033U;

	t62 = (x285+((x286%x287)-x288));

	if (t62 != 177385U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x289 = 710338971U;
	static int64_t x291 = INT64_MIN;
	static int8_t x292 = INT8_MIN;
	volatile int64_t t63 = -4634745740347LL;

	t63 = (x289+((x290%x291)-x292));

	if (t63 != 710306331LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 224118625105236LLU;
	uint64_t x294 = 4858362718223LLU;
	uint32_t x295 = 122223459U;
	volatile uint64_t t64 = 2019743530134758LLU;

	t64 = (x293+((x294%x295)-x296));

	if (t64 != 224118727551796LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 1U;
	volatile uint32_t x298 = 226865U;
	volatile int64_t x299 = INT64_MIN;
	static int32_t x300 = INT32_MIN;
	volatile int64_t t65 = 366LL;

	t65 = (x297+((x298%x299)-x300));

	if (t65 != 2147710514LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x301 = 7U;
	int8_t x302 = INT8_MIN;
	uint64_t x303 = 3509191LLU;
	uint8_t x304 = 60U;
	static volatile uint64_t t66 = 493548134LLU;

	t66 = (x301+((x302%x303)-x304));

	if (t66 != 466623LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = 16;
	int8_t x306 = 2;
	int16_t x307 = INT16_MIN;
	int8_t x308 = -1;

	t67 = (x305+((x306%x307)-x308));

	if (t67 != 19) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 59658134392LLU;
	int8_t x316 = -11;

	t68 = (x313+((x314%x315)-x316));

	if (t68 != 57510650755LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = 18596U;
	volatile uint64_t x318 = UINT64_MAX;
	int8_t x320 = -1;
	volatile uint64_t t69 = 1676335668316491357LLU;

	t69 = (x317+((x318%x319)-x320));

	if (t69 != 20549LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x322 = 255668596218LLU;
	int32_t x324 = INT32_MIN;
	uint64_t t70 = 1794241371186282LLU;

	t70 = (x321+((x322%x323)-x324));

	if (t70 != 9223372039002259465LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x330 = INT8_MIN;
	uint8_t x331 = 3U;
	volatile int8_t x332 = INT8_MIN;
	uint32_t t71 = 2579585U;

	t71 = (x329+((x330%x331)-x332));

	if (t71 != 1671703U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x333 = INT16_MAX;
	volatile int64_t x334 = -688LL;
	volatile int64_t t72 = 15100365350941LL;

	t72 = (x333+((x334%x335)-x336));

	if (t72 != 32080LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x337 = INT8_MIN;
	uint64_t x338 = 1LLU;
	int16_t x339 = 23;
	volatile uint8_t x340 = 1U;
	volatile uint64_t t73 = 17835960LLU;

	t73 = (x337+((x338%x339)-x340));

	if (t73 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x345 = UINT8_MAX;
	static uint64_t x346 = UINT64_MAX;
	int16_t x347 = INT16_MAX;

	t74 = (x345+((x346%x347)-x348));

	if (t74 != 33038LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = UINT8_MAX;
	static int64_t x351 = -232707975718LL;
	static volatile int16_t x352 = INT16_MAX;
	int64_t t75 = -4339214575219LL;

	t75 = (x349+((x350%x351)-x352));

	if (t75 != -2147516160LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x353 = -1;
	int8_t x354 = INT8_MAX;
	volatile int64_t x355 = 27987081550817360LL;
	int64_t x356 = -1LL;
	volatile int64_t t76 = -5929LL;

	t76 = (x353+((x354%x355)-x356));

	if (t76 != 127LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x361 = 6537341U;
	int32_t x362 = INT32_MAX;
	static uint16_t x364 = UINT16_MAX;
	uint32_t t77 = 23U;

	t77 = (x361+((x362%x363)-x364));

	if (t77 != 6471968U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = INT8_MIN;
	int8_t x366 = 1;
	int64_t x367 = -396LL;
	volatile int64_t t78 = 49165934601LL;

	t78 = (x365+((x366%x367)-x368));

	if (t78 != -126LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x369 = -1744546888435305096LL;
	int32_t x370 = INT32_MIN;
	int16_t x371 = -1;
	int8_t x372 = INT8_MIN;
	volatile int64_t t79 = 92507064LL;

	t79 = (x369+((x370%x371)-x372));

	if (t79 != -1744546888435304968LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x373 = 60U;
	uint64_t x374 = 8393385473731880900LLU;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MIN;
	uint64_t t80 = 599290006510757LLU;

	t80 = (x373+((x374%x375)-x376));

	if (t80 != 8393385475879364608LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x377 = UINT64_MAX;
	int32_t x378 = 241267;
	static int32_t x380 = 265;

	t81 = (x377+((x378%x379)-x380));

	if (t81 != 11625LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int8_t x383 = 4;
	uint16_t x384 = 821U;
	static int32_t t82 = 519198075;

	t82 = (x381+((x382%x383)-x384));

	if (t82 != -822) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x388 = INT32_MIN;

	t83 = (x385+((x386%x387)-x388));

	if (t83 != 2147450883) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x393 = INT32_MAX;
	int32_t x394 = INT32_MIN;
	uint32_t x396 = 1506298030U;
	volatile uint32_t t84 = 171336385U;

	t84 = (x393+((x394%x395)-x396));

	if (t84 != 641354669U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x397 = 52LL;
	int64_t x398 = INT64_MIN;
	volatile int64_t x399 = -1LL;
	uint16_t x400 = 73U;
	volatile int64_t t85 = -350561685524LL;

	t85 = (x397+((x398%x399)-x400));

	if (t85 != -21LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 14U;
	int32_t x402 = INT32_MIN;
	static int8_t x403 = -1;
	static int32_t x404 = 15700;
	static int32_t t86 = 5;

	t86 = (x401+((x402%x403)-x404));

	if (t86 != -15686) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x407 = -1;
	uint64_t t87 = 105LLU;

	t87 = (x405+((x406%x407)-x408));

	if (t87 != 18446744047617179742LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x409 = 311U;
	int16_t x410 = INT16_MIN;
	static int8_t x411 = INT8_MAX;
	static uint64_t t88 = 177912297407966395LLU;

	t88 = (x409+((x410%x411)-x412));

	if (t88 != 17947253262945892842LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x414 = INT16_MIN;
	uint8_t x415 = UINT8_MAX;
	int8_t x416 = INT8_MIN;
	static uint32_t t89 = 47746531U;

	t89 = (x413+((x414%x415)-x416));

	if (t89 != 45U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x417 = INT8_MAX;
	int64_t x418 = -1LL;
	volatile int16_t x419 = -166;
	volatile int8_t x420 = 3;
	int64_t t90 = -3214267413853551089LL;

	t90 = (x417+((x418%x419)-x420));

	if (t90 != 123LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x421 = -1;
	int16_t x422 = INT16_MIN;
	uint16_t x423 = 43U;
	volatile int16_t x424 = INT16_MIN;
	int32_t t91 = 1169;

	t91 = (x421+((x422%x423)-x424));

	if (t91 != 32765) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x425 = UINT64_MAX;
	static int32_t x426 = INT32_MIN;
	uint64_t x427 = UINT64_MAX;
	int32_t x428 = INT32_MIN;
	volatile uint64_t t92 = UINT64_MAX;

	t92 = (x425+((x426%x427)-x428));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x433 = 1126175607673877LLU;
	static int8_t x434 = -1;
	int16_t x435 = 37;
	uint16_t x436 = 0U;
	static volatile uint64_t t93 = 7LLU;

	t93 = (x433+((x434%x435)-x436));

	if (t93 != 1126175607673876LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x437 = INT64_MIN;
	volatile int8_t x438 = 1;
	uint8_t x439 = 36U;
	volatile uint32_t x440 = UINT32_MAX;
	static volatile int64_t t94 = 3LL;

	t94 = (x437+((x438%x439)-x440));

	if (t94 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x441 = -7919609659LL;
	static volatile int8_t x443 = -1;
	volatile uint32_t x444 = 85359340U;

	t95 = (x441+((x442%x443)-x444));

	if (t95 != -3710001703LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x449 = 37U;
	int64_t x450 = 27141971359492LL;
	int64_t t96 = -22958217170019LL;

	t96 = (x449+((x450%x451)-x452));

	if (t96 != 20039LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x453 = INT64_MIN;
	int8_t x454 = -1;
	int64_t x455 = -1LL;
	int8_t x456 = INT8_MIN;

	t97 = (x453+((x454%x455)-x456));

	if (t97 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = INT64_MAX;
	int16_t x460 = INT16_MAX;
	uint64_t t98 = 3LLU;

	t98 = (x457+((x458%x459)-x460));

	if (t98 != 9223372036854778774LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x461 = -3221478281LL;
	uint16_t x462 = 2U;
	int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MAX;
	volatile int64_t t99 = 8877265462597601LL;

	t99 = (x461+((x462%x463)-x464));

	if (t99 != -5368961926LL) { NG(); } else { ; }
	
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

