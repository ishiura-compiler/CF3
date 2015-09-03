#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1;
int32_t t1 = -61269;
volatile int64_t x27 = 1LL;
volatile int32_t x36 = INT32_MAX;
static int16_t x41 = 1683;
static uint8_t x45 = 0U;
volatile int16_t x47 = -1;
int64_t t10 = 462402LL;
uint32_t x61 = 21919U;
uint8_t x68 = 2U;
int32_t x69 = INT32_MIN;
int8_t x74 = INT8_MIN;
int16_t x77 = INT16_MAX;
uint64_t t15 = 451788LLU;
volatile int32_t x82 = -1;
volatile int32_t x91 = -24075;
volatile int64_t t18 = 12244157288LL;
uint8_t x93 = 3U;
int8_t x95 = INT8_MIN;
volatile int16_t x96 = INT16_MIN;
int64_t x111 = 8945833LL;
uint8_t x112 = UINT8_MAX;
int64_t t21 = -8558015LL;
int32_t x122 = 4445059;
uint16_t x140 = 714U;
uint32_t x147 = 1671U;
volatile uint32_t t28 = 65011U;
volatile int16_t x156 = 73;
uint64_t x158 = UINT64_MAX;
volatile int32_t x161 = -1;
int32_t x162 = -1;
uint8_t x165 = 4U;
static volatile uint32_t x166 = 1911532U;
int32_t x169 = -111148412;
uint16_t x170 = UINT16_MAX;
volatile int64_t t34 = -6571525788LL;
int64_t x178 = 0LL;
uint8_t x180 = 101U;
volatile int16_t x184 = INT16_MAX;
volatile int64_t t36 = -930858277280940246LL;
static uint64_t x187 = 1693700LLU;
static int32_t x188 = 73622;
uint64_t x196 = 353789140LLU;
int8_t x200 = INT8_MIN;
volatile uint32_t x201 = 136U;
static int64_t x204 = INT64_MIN;
uint32_t x205 = UINT32_MAX;
int32_t t42 = -898;
uint16_t x214 = 247U;
volatile int16_t x217 = 2;
int16_t x227 = INT16_MIN;
volatile int8_t x231 = INT8_MIN;
uint8_t x234 = UINT8_MAX;
uint32_t x235 = 1110149365U;
int32_t x236 = -173;
uint32_t t48 = 3163658U;
uint8_t x245 = 55U;
static volatile uint32_t x247 = UINT32_MAX;
uint32_t t50 = 20145201U;
int16_t x249 = INT16_MAX;
int32_t x250 = -122769;
static volatile uint32_t t51 = 21530U;
volatile int8_t x253 = -1;
int64_t x255 = 171839LL;
volatile int16_t x258 = INT16_MIN;
uint64_t x286 = 0LLU;
uint16_t x287 = 2U;
uint8_t x291 = 5U;
static volatile int8_t x295 = 1;
int64_t t62 = -3LL;
uint64_t x297 = 3692287LLU;
volatile int64_t t66 = -9LL;
int8_t x319 = -3;
volatile int32_t x320 = -3;
int8_t x321 = -1;
int64_t x330 = 1747LL;
uint64_t x336 = 133335915195663LLU;
static volatile int32_t t73 = -48;
static uint64_t t74 = 5581602578813LLU;
static volatile uint16_t x353 = UINT16_MAX;
int64_t x354 = INT64_MAX;
uint32_t x362 = 2252008U;
static volatile uint64_t x366 = 9181683LLU;
static volatile int32_t x368 = INT32_MIN;
static volatile int16_t x369 = INT16_MAX;
uint8_t x374 = 1U;
int8_t x376 = -1;
int64_t x381 = 114854LL;
static int32_t x382 = INT32_MIN;
uint64_t x383 = UINT64_MAX;
int32_t x389 = INT32_MIN;
int64_t x396 = INT64_MIN;
uint32_t x400 = 7380758U;
int32_t x410 = 1040206;
uint32_t x414 = 567U;
uint16_t x417 = 1341U;
volatile int8_t x420 = INT8_MIN;
int32_t x424 = 1;
int16_t x425 = -296;
volatile int8_t x427 = 10;
int8_t x429 = INT8_MIN;
uint16_t x432 = UINT16_MAX;
static int8_t x433 = -2;
volatile int64_t x442 = INT64_MIN;
volatile int32_t x443 = -1;


void f0(void) {
	uint16_t x1 = 2879U;
	uint8_t x2 = UINT8_MAX;
	static volatile int8_t x3 = INT8_MAX;
	volatile int8_t x4 = -1;

	t0 = (((x1-x2)&x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int16_t x6 = -1;
	volatile uint16_t x7 = 25815U;
	static int8_t x8 = -16;

	t1 = (((x5-x6)&x7)%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint32_t x10 = 1574U;
	volatile uint8_t x11 = 1U;
	int64_t x12 = 32703570LL;
	volatile int64_t t2 = 0LL;

	t2 = (((x9-x10)&x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int64_t x21 = -1LL;
	static int16_t x22 = INT16_MIN;
	uint32_t x23 = 21689U;
	int32_t x24 = INT32_MIN;
	static int64_t t3 = 357090LL;

	t3 = (((x21-x22)&x23)%x24);

	if (t3 != 21689LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x25 = 98U;
	int8_t x26 = INT8_MAX;
	volatile int16_t x28 = -414;
	static volatile int64_t t4 = -1LL;

	t4 = (((x25-x26)&x27)%x28);

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x33 = -90955;
	uint32_t x34 = 129872U;
	static uint16_t x35 = UINT16_MAX;
	uint32_t t5 = 1691U;

	t5 = (((x33-x34)&x35)%x36);

	if (t5 != 41317U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x37 = -1;
	volatile int32_t x38 = INT32_MIN;
	volatile int16_t x39 = INT16_MIN;
	int32_t x40 = 790379;
	int32_t t6 = -2021299;

	t6 = (((x37-x38)&x39)%x40);

	if (t6 != 781516) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x42 = -868;
	static volatile int8_t x43 = -1;
	uint32_t x44 = 135905125U;
	volatile uint32_t t7 = 1352818587U;

	t7 = (((x41-x42)&x43)%x44);

	if (t7 != 2551U) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x46 = 10736;
	volatile uint32_t x48 = 28U;
	static uint32_t t8 = 102441099U;

	t8 = (((x45-x46)&x47)%x48);

	if (t8 != 20U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MAX;
	uint32_t x50 = UINT32_MAX;
	volatile int64_t x51 = INT64_MIN;
	int16_t x52 = INT16_MAX;
	int64_t t9 = -10418255226319LL;

	t9 = (((x49-x50)&x51)%x52);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x57 = INT16_MAX;
	int8_t x58 = 13;
	int16_t x59 = INT16_MAX;
	int64_t x60 = INT64_MIN;

	t10 = (((x57-x58)&x59)%x60);

	if (t10 != 32754LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x62 = 1490U;
	static uint16_t x63 = 6154U;
	int64_t x64 = -329197575135695593LL;
	static int64_t t11 = -605265275480980LL;

	t11 = (((x61-x62)&x63)%x64);

	if (t11 != 2056LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 4890U;
	int16_t x66 = INT16_MIN;
	int8_t x67 = -3;
	static int32_t t12 = -6813;

	t12 = (((x65-x66)&x67)%x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x70 = 301234341U;
	int16_t x71 = INT16_MIN;
	volatile int32_t x72 = INT32_MAX;
	static uint32_t t13 = 0U;

	t13 = (((x69-x70)&x71)%x72);

	if (t13 != 1846247424U) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = INT64_MIN;
	int64_t x75 = INT64_MAX;
	int32_t x76 = INT32_MAX;
	volatile int64_t t14 = 165060262593799LL;

	t14 = (((x73-x74)&x75)%x76);

	if (t14 != 128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x78 = INT16_MIN;
	int16_t x79 = -6103;
	uint64_t x80 = UINT64_MAX;

	t15 = (((x77-x78)&x79)%x80);

	if (t15 != 59433LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	int64_t x83 = INT64_MIN;
	volatile uint32_t x84 = 6U;
	volatile int64_t t16 = -220987LL;

	t16 = (((x81-x82)&x83)%x84);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x85 = UINT64_MAX;
	static int16_t x86 = INT16_MIN;
	uint16_t x87 = 24U;
	uint32_t x88 = 900246U;
	static volatile uint64_t t17 = 7LLU;

	t17 = (((x85-x86)&x87)%x88);

	if (t17 != 24LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MIN;
	static int64_t x90 = -1LL;
	int8_t x92 = INT8_MIN;

	t18 = (((x89-x90)&x91)%x92);

	if (t18 != -127LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x94 = 1U;
	volatile int32_t t19 = 23599;

	t19 = (((x93-x94)&x95)%x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 2382090899LL;
	static volatile int32_t x98 = 60874;
	volatile int32_t x99 = INT32_MIN;
	volatile int64_t x100 = 2295610238308LL;
	int64_t t20 = -595910LL;

	t20 = (((x97-x98)&x99)%x100);

	if (t20 != 2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = -1;
	static int32_t x110 = -1;

	t21 = (((x109-x110)&x111)%x112);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = -35;
	int16_t x114 = INT16_MIN;
	uint16_t x115 = UINT16_MAX;
	int16_t x116 = INT16_MIN;
	volatile int32_t t22 = 62216243;

	t22 = (((x113-x114)&x115)%x116);

	if (t22 != 32733) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x117 = INT64_MIN;
	static int32_t x118 = INT32_MIN;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = 207083054LLU;
	volatile uint64_t t23 = 32LLU;

	t23 = (((x117-x118)&x119)%x120);

	if (t23 != 31009856LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = INT16_MIN;
	int32_t x123 = INT32_MIN;
	int16_t x124 = 436;
	int32_t t24 = -210315;

	t24 = (((x121-x122)&x123)%x124);

	if (t24 != -92) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	volatile int64_t x131 = INT64_MIN;
	volatile int64_t x132 = 14501549405494LL;
	int64_t t25 = -132223323862LL;

	t25 = (((x129-x130)&x131)%x132);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x137 = INT16_MIN;
	uint32_t x138 = 19284745U;
	int32_t x139 = -4;
	volatile uint32_t t26 = 7490019U;

	t26 = (((x137-x138)&x139)%x140);

	if (t26 != 10U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x141 = 0;
	static int8_t x142 = -9;
	int32_t x143 = INT32_MAX;
	uint32_t x144 = 4U;
	volatile uint32_t t27 = 703587013U;

	t27 = (((x141-x142)&x143)%x144);

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x145 = UINT8_MAX;
	static int16_t x146 = 1820;
	volatile int16_t x148 = INT16_MAX;

	t28 = (((x145-x146)&x147)%x148);

	if (t28 != 131U) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x153 = -970;
	static uint8_t x154 = 2U;
	int64_t x155 = 26454515LL;
	int64_t t29 = -4048980559467184LL;

	t29 = (((x153-x154)&x155)%x156);

	if (t29 != 32LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x157 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	uint32_t x160 = 49U;
	uint64_t t30 = 5638LLU;

	t30 = (((x157-x158)&x159)%x160);

	if (t30 != 15LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x163 = INT16_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t31 = -13;

	t31 = (((x161-x162)&x163)%x164);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x167 = 400U;
	int16_t x168 = INT16_MIN;
	static volatile uint32_t t32 = 29127136U;

	t32 = (((x165-x166)&x167)%x168);

	if (t32 != 272U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x171 = -224662190805191LL;
	volatile int32_t x172 = INT32_MIN;
	volatile int64_t t33 = -140980494304LL;

	t33 = (((x169-x170)&x171)%x172);

	if (t33 != -1051983359LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x173 = INT64_MAX;
	uint8_t x174 = 7U;
	static int64_t x175 = -41751110576081LL;
	volatile int64_t x176 = INT64_MIN;

	t34 = (((x173-x174)&x175)%x176);

	if (t34 != 9223330285744199720LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -1;
	volatile uint64_t x179 = 4165676987683219156LLU;
	uint64_t t35 = 13223515LLU;

	t35 = (((x177-x178)&x179)%x180);

	if (t35 != 14LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x181 = 1;
	int64_t x182 = -53379441822485356LL;
	int16_t x183 = -1;

	t36 = (((x181-x182)&x183)%x184);

	if (t36 != 31463LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = INT16_MAX;
	volatile uint64_t t37 = 14636LLU;

	t37 = (((x185-x186)&x187)%x188);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x193 = 1U;
	volatile int64_t x194 = 86227LL;
	int8_t x195 = INT8_MAX;
	volatile uint64_t t38 = 4LLU;

	t38 = (((x193-x194)&x195)%x196);

	if (t38 != 46LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = -1;
	volatile int16_t x199 = INT16_MIN;
	volatile int32_t t39 = 5913021;

	t39 = (((x197-x198)&x199)%x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x202 = 19540U;
	int16_t x203 = INT16_MIN;
	static int64_t t40 = -32366339486244LL;

	t40 = (((x201-x202)&x203)%x204);

	if (t40 != 4294934528LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x206 = 283U;
	volatile int8_t x207 = -1;
	static uint8_t x208 = UINT8_MAX;
	static volatile uint32_t t41 = 1870279U;

	t41 = (((x205-x206)&x207)%x208);

	if (t41 != 227U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x209 = INT8_MIN;
	uint16_t x210 = UINT16_MAX;
	int16_t x211 = -1;
	int32_t x212 = INT32_MIN;

	t42 = (((x209-x210)&x211)%x212);

	if (t42 != -65663) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x213 = UINT8_MAX;
	int32_t x215 = -1;
	int8_t x216 = INT8_MIN;
	volatile int32_t t43 = 185984336;

	t43 = (((x213-x214)&x215)%x216);

	if (t43 != 8) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x218 = -5;
	int64_t x219 = 320LL;
	int32_t x220 = -1;
	volatile int64_t t44 = -31599926698101508LL;

	t44 = (((x217-x218)&x219)%x220);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x221 = -1;
	uint8_t x222 = 31U;
	int64_t x223 = -57967179LL;
	uint8_t x224 = 1U;
	int64_t t45 = 23211815544LL;

	t45 = (((x221-x222)&x223)%x224);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = INT64_MIN;
	static volatile int16_t x226 = INT16_MIN;
	volatile int8_t x228 = INT8_MIN;
	int64_t t46 = 29LL;

	t46 = (((x225-x226)&x227)%x228);

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x229 = INT32_MIN;
	static uint64_t x230 = 66915010527LLU;
	int32_t x232 = INT32_MIN;
	uint64_t t47 = 692970799658LLU;

	t47 = (((x229-x230)&x231)%x232);

	if (t47 != 18446744004647057408LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = 4U;

	t48 = (((x233-x234)&x235)%x236);

	if (t48 != 1110149125U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = -15874LL;
	int32_t x242 = -1;
	static uint16_t x243 = 25U;
	int8_t x244 = 13;
	int64_t t49 = -128497501866820176LL;

	t49 = (((x241-x242)&x243)%x244);

	if (t49 != 12LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x246 = UINT32_MAX;
	volatile uint8_t x248 = 20U;

	t50 = (((x245-x246)&x247)%x248);

	if (t50 != 16U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x251 = UINT32_MAX;
	int8_t x252 = -1;

	t51 = (((x249-x250)&x251)%x252);

	if (t51 != 155536U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x254 = 870;
	volatile int16_t x256 = -1;
	int64_t t52 = 7682749070090LL;

	t52 = (((x253-x254)&x255)%x256);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MIN;
	uint64_t x259 = 13523857LLU;
	int64_t x260 = -65LL;
	uint64_t t53 = 6798988311LLU;

	t53 = (((x257-x258)&x259)%x260);

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x261 = 14734;
	int8_t x262 = INT8_MAX;
	int32_t x263 = 1;
	uint32_t x264 = 70260U;
	uint32_t t54 = 11U;

	t54 = (((x261-x262)&x263)%x264);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x265 = 388082407663899LLU;
	int16_t x266 = INT16_MAX;
	int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MIN;
	static volatile uint64_t t55 = 31831445565162LLU;

	t55 = (((x265-x266)&x267)%x268);

	if (t55 != 28LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = -1LL;
	int32_t x270 = INT32_MIN;
	uint16_t x271 = UINT16_MAX;
	int64_t x272 = INT64_MIN;
	static volatile int64_t t56 = -6LL;

	t56 = (((x269-x270)&x271)%x272);

	if (t56 != 65535LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x273 = UINT64_MAX;
	volatile int16_t x274 = 6038;
	uint16_t x275 = 1016U;
	int8_t x276 = -39;
	static volatile uint64_t t57 = 1688LLU;

	t57 = (((x273-x274)&x275)%x276);

	if (t57 != 104LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x277 = INT32_MIN;
	static int8_t x278 = 0;
	static int32_t x279 = INT32_MIN;
	volatile int16_t x280 = INT16_MIN;
	int32_t t58 = 0;

	t58 = (((x277-x278)&x279)%x280);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -1935915907017LL;
	volatile int8_t x282 = -1;
	static int64_t x283 = -1LL;
	int8_t x284 = -1;
	int64_t t59 = -13LL;

	t59 = (((x281-x282)&x283)%x284);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MIN;
	static int32_t x288 = 83;
	uint64_t t60 = 1352640339165902LLU;

	t60 = (((x285-x286)&x287)%x288);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x289 = 2366U;
	static int32_t x290 = INT32_MAX;
	int64_t x292 = INT64_MIN;
	int64_t t61 = 17491987277111LL;

	t61 = (((x289-x290)&x291)%x292);

	if (t61 != 5LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x293 = 15U;
	uint32_t x294 = 64019775U;
	int64_t x296 = -1LL;

	t62 = (((x293-x294)&x295)%x296);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t63 = 892286LLU;

	t63 = (((x297-x298)&x299)%x300);

	if (t63 != 127LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x301 = -1;
	int32_t x302 = INT32_MAX;
	int16_t x303 = INT16_MIN;
	int16_t x304 = -1;
	int32_t t64 = -62484580;

	t64 = (((x301-x302)&x303)%x304);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x305 = INT8_MIN;
	uint64_t x306 = 7554272625872689064LLU;
	int8_t x307 = INT8_MAX;
	uint32_t x308 = UINT32_MAX;
	uint64_t t65 = 4882792555917LLU;

	t65 = (((x305-x306)&x307)%x308);

	if (t65 != 88LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x309 = -1LL;
	volatile int8_t x310 = -7;
	static int16_t x311 = INT16_MIN;
	int16_t x312 = INT16_MAX;

	t66 = (((x309-x310)&x311)%x312);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x313 = UINT32_MAX;
	volatile int64_t x314 = -3021LL;
	uint8_t x315 = UINT8_MAX;
	int64_t x316 = 5718787LL;
	volatile int64_t t67 = -341508LL;

	t67 = (((x313-x314)&x315)%x316);

	if (t67 != 204LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x317 = INT8_MAX;
	int8_t x318 = 0;
	static volatile int32_t t68 = 247003159;

	t68 = (((x317-x318)&x319)%x320);

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x322 = 0;
	volatile int32_t x323 = INT32_MIN;
	uint32_t x324 = 23U;
	uint32_t t69 = 5826587U;

	t69 = (((x321-x322)&x323)%x324);

	if (t69 != 6U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = -1LL;
	volatile int8_t x326 = -5;
	uint64_t x327 = 7557120120LLU;
	uint16_t x328 = 1U;
	volatile uint64_t t70 = 1368756441023207144LLU;

	t70 = (((x325-x326)&x327)%x328);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint8_t x329 = 1U;
	int16_t x331 = 1;
	uint16_t x332 = 51U;
	volatile int64_t t71 = -349LL;

	t71 = (((x329-x330)&x331)%x332);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x333 = INT32_MIN;
	static int8_t x334 = -1;
	static uint16_t x335 = UINT16_MAX;
	volatile uint64_t t72 = 62475896790LLU;

	t72 = (((x333-x334)&x335)%x336);

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x337 = 4372;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = INT16_MAX;
	uint8_t x340 = 6U;

	t73 = (((x337-x338)&x339)%x340);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x345 = -1LL;
	static volatile int16_t x346 = 1317;
	volatile uint64_t x347 = UINT64_MAX;
	volatile int16_t x348 = -1;

	t74 = (((x345-x346)&x347)%x348);

	if (t74 != 18446744073709550298LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x355 = 16U;
	int64_t x356 = INT64_MIN;
	int64_t t75 = -26439330LL;

	t75 = (((x353-x354)&x355)%x356);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x357 = INT8_MIN;
	uint64_t x358 = 4971453LLU;
	int16_t x359 = INT16_MIN;
	int32_t x360 = INT32_MAX;
	uint64_t t76 = 648178429596050LLU;

	t76 = (((x357-x358)&x359)%x360);

	if (t76 != 2142502915LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x361 = INT8_MIN;
	uint64_t x363 = 949434329LLU;
	int16_t x364 = -1;
	uint64_t t77 = 120499522129081228LLU;

	t77 = (((x361-x362)&x363)%x364);

	if (t77 != 949297816LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x365 = INT64_MIN;
	uint32_t x367 = 239718U;
	volatile uint64_t t78 = 38233239345049LLU;

	t78 = (((x365-x366)&x367)%x368);

	if (t78 != 237572LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x370 = 6366U;
	uint16_t x371 = 6U;
	int16_t x372 = INT16_MIN;
	static uint32_t t79 = 4494349U;

	t79 = (((x369-x370)&x371)%x372);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x373 = -6;
	int8_t x375 = 12;
	int32_t t80 = 38;

	t80 = (((x373-x374)&x375)%x376);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x377 = -1;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -1;
	int32_t x380 = INT32_MIN;
	int64_t t81 = 59827572500829131LL;

	t81 = (((x377-x378)&x379)%x380);

	if (t81 != 2147483647LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x384 = 684930445U;
	uint64_t t82 = 440180LLU;

	t82 = (((x381-x382)&x383)%x384);

	if (t82 != 92807167LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int32_t x387 = 79;
	static int8_t x388 = -1;
	static int64_t t83 = -1LL;

	t83 = (((x385-x386)&x387)%x388);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x390 = -1;
	static int32_t x391 = INT32_MAX;
	int32_t x392 = -1;
	volatile int32_t t84 = 110245751;

	t84 = (((x389-x390)&x391)%x392);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = 1751221225768LLU;
	uint16_t x395 = UINT16_MAX;
	volatile uint64_t t85 = 171463310823183LLU;

	t85 = (((x393-x394)&x395)%x396);

	if (t85 != 46808LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x397 = 3U;
	static uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	volatile uint32_t t86 = 22951U;

	t86 = (((x397-x398)&x399)%x400);

	if (t86 != 6681366U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = INT32_MIN;
	volatile uint32_t x402 = 7U;
	int64_t x403 = INT64_MIN;
	static int32_t x404 = -1063;
	volatile int64_t t87 = -1192959262492LL;

	t87 = (((x401-x402)&x403)%x404);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x405 = -52770LL;
	static int32_t x406 = -3200966;
	static int16_t x407 = INT16_MIN;
	int64_t x408 = -572933436249809888LL;
	static volatile int64_t t88 = 1407767586511LL;

	t88 = (((x405-x406)&x407)%x408);

	if (t88 != 3145728LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x409 = INT8_MIN;
	static uint32_t x411 = 72574059U;
	static int16_t x412 = INT16_MIN;
	uint32_t t89 = 257031U;

	t89 = (((x409-x410)&x411)%x412);

	if (t89 != 72359970U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x413 = 498180721LL;
	int16_t x415 = 3457;
	uint32_t x416 = 128796159U;
	int64_t t90 = 91LL;

	t90 = (((x413-x414)&x415)%x416);

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x418 = 90;
	volatile int32_t x419 = INT32_MAX;
	static int32_t t91 = 31913;

	t91 = (((x417-x418)&x419)%x420);

	if (t91 != 99) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x421 = 3596890926057069LLU;
	volatile int64_t x422 = INT64_MAX;
	uint8_t x423 = UINT8_MAX;
	volatile uint64_t t92 = 776709460302LLU;

	t92 = (((x421-x422)&x423)%x424);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x426 = INT16_MAX;
	int64_t x428 = INT64_MIN;
	int64_t t93 = -3012476LL;

	t93 = (((x425-x426)&x427)%x428);

	if (t93 != 8LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x430 = INT8_MAX;
	int32_t x431 = -294977;
	static volatile int32_t t94 = -104217;

	t94 = (((x429-x430)&x431)%x432);

	if (t94 != -33027) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x434 = INT8_MAX;
	int32_t x435 = -85997462;
	int16_t x436 = -220;
	static int32_t t95 = 0;

	t95 = (((x433-x434)&x435)%x436);

	if (t95 != -122) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = INT64_MIN;
	uint16_t x438 = 0U;
	static uint32_t x439 = 977117U;
	int64_t x440 = INT64_MIN;
	static volatile int64_t t96 = -23265681459LL;

	t96 = (((x437-x438)&x439)%x440);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x441 = INT16_MIN;
	uint64_t x444 = 14383559638597826LLU;
	static uint64_t t97 = 1583LLU;

	t97 = (((x441-x442)&x443)%x444);

	if (t97 != 3510308513536574LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x445 = 2U;
	static int16_t x446 = 6056;
	uint32_t x447 = UINT32_MAX;
	uint64_t x448 = 131218463LLU;
	volatile uint64_t t98 = 324LLU;

	t98 = (((x445-x446)&x447)%x448);

	if (t98 != 95970426LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x449 = 2264;
	int16_t x450 = 0;
	int8_t x451 = INT8_MIN;
	int16_t x452 = -1;
	int32_t t99 = 11754696;

	t99 = (((x449-x450)&x451)%x452);

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

