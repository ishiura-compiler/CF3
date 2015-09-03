#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = INT16_MIN;
static volatile int32_t x15 = -67;
uint8_t x21 = 91U;
volatile uint8_t x26 = UINT8_MAX;
static int64_t t7 = 48461760389137446LL;
int64_t x36 = -337739178873268677LL;
uint64_t x38 = UINT64_MAX;
volatile uint8_t x40 = UINT8_MAX;
static uint8_t x44 = 1U;
static int32_t x51 = 13;
volatile int32_t x59 = -1;
int64_t x60 = -11618190037521LL;
static int8_t x63 = INT8_MIN;
static volatile uint8_t x66 = 5U;
uint8_t x70 = 18U;
static uint64_t x71 = UINT64_MAX;
volatile int8_t x72 = INT8_MIN;
uint16_t x73 = UINT16_MAX;
uint8_t x74 = 5U;
volatile int32_t t19 = -899868072;
static int64_t x83 = INT64_MAX;
uint8_t x93 = UINT8_MAX;
static int64_t x94 = INT64_MIN;
static volatile int64_t t23 = -1105290692LL;
int64_t x98 = INT64_MIN;
int32_t t25 = 3118;
uint8_t x110 = UINT8_MAX;
int8_t x115 = INT8_MIN;
volatile int64_t t28 = -522520627052LL;
int32_t x118 = 340619483;
static volatile int64_t x125 = 2733745301424682105LL;
int32_t x127 = 47564;
int8_t x135 = INT8_MIN;
int16_t x146 = INT16_MIN;
int8_t x153 = -1;
int32_t x160 = INT32_MIN;
static int16_t x166 = INT16_MAX;
int8_t x170 = INT8_MAX;
static int8_t x173 = INT8_MAX;
int64_t x174 = -1LL;
static int32_t x183 = -1;
uint8_t x184 = 24U;
int8_t x185 = INT8_MIN;
uint8_t x186 = UINT8_MAX;
volatile uint32_t t46 = 1U;
volatile int32_t t47 = 15035;
volatile int8_t x195 = -1;
volatile int32_t x201 = 2;
int32_t x208 = -1;
uint32_t x215 = UINT32_MAX;
uint32_t x220 = 134012115U;
volatile int64_t x226 = 90595LL;
int8_t x235 = INT8_MAX;
int32_t x239 = INT32_MIN;
static uint8_t x240 = 44U;
int16_t x241 = 0;
int8_t x243 = INT8_MIN;
int32_t x248 = INT32_MAX;
static uint16_t x249 = UINT16_MAX;
uint64_t x251 = 7870732846092582LLU;
volatile uint64_t t61 = 5644212147362458579LLU;
volatile int8_t x260 = -1;
static volatile int64_t t63 = 1622722411981800047LL;
int32_t x261 = 230708;
int64_t x269 = INT64_MAX;
int16_t x270 = 6;
int64_t x272 = INT64_MIN;
int64_t t66 = -1630724807618281530LL;
int64_t x277 = -2705094LL;
volatile int16_t x280 = -1;
int32_t x287 = INT32_MAX;
uint32_t t69 = 273940U;
int16_t x289 = INT16_MIN;
uint32_t x291 = UINT32_MAX;
static int64_t x293 = INT64_MIN;
int64_t x302 = 464699443LL;
int16_t x303 = INT16_MIN;
int32_t x306 = -1;
int16_t x310 = INT16_MIN;
static volatile int8_t x321 = 9;
static volatile uint64_t x324 = 269918405192187433LLU;
uint32_t x326 = 2983U;
static int16_t x330 = -416;
int8_t x342 = -1;
static volatile int32_t t83 = -7261;
uint8_t x352 = UINT8_MAX;
uint8_t x358 = 28U;
int32_t x359 = INT32_MAX;
int8_t x361 = INT8_MIN;
int64_t x362 = INT64_MIN;
uint64_t x369 = UINT64_MAX;
volatile uint64_t t88 = 522102960659202440LLU;
static uint8_t x378 = 14U;
uint64_t x381 = 1398426898752573404LLU;
int32_t x389 = INT32_MAX;
static int16_t x397 = INT16_MIN;
int64_t x400 = 1595883302LL;
static int32_t x404 = -229193742;
int64_t x411 = -170LL;
uint16_t x414 = 13U;
int8_t x415 = -1;


void f0(void) {
	static uint16_t x2 = 5U;
	int16_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	uint32_t t0 = 2025844U;

	t0 = ((x1/x2)|(x3%x4));

	if (t0 != 4294960743U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	static volatile int32_t x6 = INT32_MIN;
	static uint32_t x7 = 50357192U;
	volatile int16_t x8 = -1;
	uint32_t t1 = 18904U;

	t1 = ((x5/x6)|(x7%x8));

	if (t1 != 50357193U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 71LLU;
	static volatile int8_t x10 = INT8_MIN;
	volatile int32_t x11 = -8;
	volatile int64_t x12 = INT64_MIN;
	uint64_t t2 = 127LLU;

	t2 = ((x9/x10)|(x11%x12));

	if (t2 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x13 = 58663LLU;
	uint32_t x14 = 896834909U;
	uint64_t x16 = 2023147142106LLU;
	uint64_t t3 = 688223146333511LLU;

	t3 = ((x13/x14)|(x15%x16));

	if (t3 != 2019794069979LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 3708993;
	int16_t x18 = INT16_MIN;
	uint64_t x19 = 10974406187575684LLU;
	volatile int16_t x20 = -1;
	uint64_t t4 = 67116LLU;

	t4 = ((x17/x18)|(x19%x20));

	if (t4 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x22 = -1986;
	int16_t x23 = -24;
	static uint16_t x24 = 19109U;
	int32_t t5 = -3551332;

	t5 = ((x21/x22)|(x23%x24));

	if (t5 != -24) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	volatile int32_t x27 = 2324;
	int16_t x28 = -5;
	volatile uint64_t t6 = 8479726478LLU;

	t6 = ((x25/x26)|(x27%x28));

	if (t6 != 72340172838076677LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = INT8_MAX;
	volatile int16_t x30 = INT16_MIN;
	static int64_t x31 = -15799073576443LL;
	int16_t x32 = -7832;

	t7 = ((x29/x30)|(x31%x32));

	if (t7 != -6603LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MIN;
	static volatile int64_t x35 = INT64_MIN;
	int64_t t8 = 31579600983721090LL;

	t8 = ((x33/x34)|(x35%x36));

	if (t8 != -32356613238593593LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x39 = -1;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = ((x37/x38)|(x39%x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	int64_t x42 = 57386175LL;
	static int8_t x43 = -1;
	int64_t t10 = 211142153737LL;

	t10 = ((x41/x42)|(x43%x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -94LL;
	int8_t x46 = INT8_MIN;
	volatile int8_t x47 = -24;
	int8_t x48 = INT8_MAX;
	int64_t t11 = -3515302LL;

	t11 = ((x45/x46)|(x47%x48));

	if (t11 != -24LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 7551950640128LL;
	int32_t x50 = -1;
	int32_t x52 = INT32_MIN;
	static int64_t t12 = -2631927581422349LL;

	t12 = ((x49/x50)|(x51%x52));

	if (t12 != -7551950640115LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static volatile uint8_t x54 = UINT8_MAX;
	int32_t x55 = 371907058;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t13 = 1026593341;

	t13 = ((x53/x54)|(x55%x56));

	if (t13 != -14) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 100U;
	int8_t x58 = INT8_MAX;
	volatile int64_t t14 = 491536LL;

	t14 = ((x57/x58)|(x59%x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -30071308LL;
	int32_t x62 = INT32_MIN;
	volatile uint16_t x64 = 372U;
	int64_t t15 = -15LL;

	t15 = ((x61/x62)|(x63%x64));

	if (t15 != -128LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 110728LLU;
	static int64_t x67 = INT64_MIN;
	uint64_t x68 = 354111009731LLU;
	volatile uint64_t t16 = 418511624469887780LLU;

	t16 = ((x65/x66)|(x67%x68));

	if (t16 != 145790754735LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	static volatile uint64_t t17 = 1154512LLU;

	t17 = ((x69/x70)|(x71%x72));

	if (t17 != 17934334516106508543LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x75 = UINT64_MAX;
	volatile int64_t x76 = -145301399599314LL;
	volatile uint64_t t18 = 19179203852301742LLU;

	t18 = ((x73/x74)|(x75%x76));

	if (t18 != 145301399600115LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -7088692;
	int8_t x78 = -3;
	int16_t x79 = INT16_MIN;
	volatile int16_t x80 = INT16_MAX;

	t19 = ((x77/x78)|(x79%x80));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x81 = -844LL;
	uint64_t x82 = UINT64_MAX;
	volatile int64_t x84 = 83946210149956LL;
	volatile uint64_t t20 = 3LLU;

	t20 = ((x81/x82)|(x83%x84));

	if (t20 != 34035258810175LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MAX;
	int16_t x87 = 10;
	int16_t x88 = INT16_MAX;
	static int64_t t21 = 347414765979962LL;

	t21 = ((x85/x86)|(x87%x88));

	if (t21 != 72624976668147851LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = 1U;
	static int64_t x90 = INT64_MIN;
	static int64_t x91 = INT64_MIN;
	volatile uint64_t x92 = 13LLU;
	volatile uint64_t t22 = 12729782LLU;

	t22 = ((x89/x90)|(x91%x92));

	if (t22 != 8LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x95 = -1;
	volatile int8_t x96 = INT8_MIN;

	t23 = ((x93/x94)|(x95%x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -9127578335168133LL;
	int64_t x99 = -1LL;
	uint16_t x100 = UINT16_MAX;
	volatile int64_t t24 = -3945LL;

	t24 = ((x97/x98)|(x99%x100));

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	static uint8_t x102 = 43U;
	int32_t x103 = INT32_MAX;
	static volatile int32_t x104 = INT32_MIN;

	t25 = ((x101/x102)|(x103%x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	int16_t x106 = 2;
	static int32_t x107 = INT32_MAX;
	int16_t x108 = -15;
	int32_t t26 = 23501532;

	t26 = ((x105/x106)|(x107%x108));

	if (t26 != 16383) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 37U;
	int8_t x111 = 2;
	int64_t x112 = INT64_MAX;
	int64_t t27 = 620300LL;

	t27 = ((x109/x110)|(x111%x112));

	if (t27 != 2LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	volatile int64_t x114 = INT64_MIN;
	int64_t x116 = -1LL;

	t28 = ((x113/x114)|(x115%x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	uint16_t x119 = 7093U;
	static int16_t x120 = -1726;
	volatile int32_t t29 = -228870;

	t29 = ((x117/x118)|(x119%x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 3U;
	static int32_t x122 = -3870;
	static int8_t x123 = INT8_MIN;
	volatile int64_t x124 = INT64_MIN;
	volatile int64_t t30 = -82250271429887LL;

	t30 = ((x121/x122)|(x123%x124));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MAX;
	volatile int16_t x128 = -107;
	static int64_t t31 = 698994811187LL;

	t31 = ((x125/x126)|(x127%x128));

	if (t31 != 21525553554525055LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 39799LLU;
	static int64_t x130 = INT64_MIN;
	uint64_t x131 = UINT64_MAX;
	uint32_t x132 = 2143594U;
	static uint64_t t32 = 1LLU;

	t32 = ((x129/x130)|(x131%x132));

	if (t32 != 2048611LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = INT8_MIN;
	int8_t x134 = INT8_MIN;
	uint64_t x136 = 461406990037LLU;
	uint64_t t33 = 0LLU;

	t33 = ((x133/x134)|(x135%x136));

	if (t33 != 370492646167LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -1;
	int16_t x138 = 1011;
	int16_t x139 = INT16_MIN;
	int32_t x140 = INT32_MIN;
	int32_t t34 = 240604;

	t34 = ((x137/x138)|(x139%x140));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -6;
	int16_t x142 = -23;
	volatile int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	int32_t t35 = 1;

	t35 = ((x141/x142)|(x143%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MAX;
	volatile int8_t x147 = INT8_MAX;
	static volatile int16_t x148 = 89;
	volatile int32_t t36 = -1;

	t36 = ((x145/x146)|(x147%x148));

	if (t36 != 38) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MIN;
	int16_t x150 = -1325;
	static int32_t x151 = -1;
	uint16_t x152 = 100U;
	int32_t t37 = 79426;

	t37 = ((x149/x150)|(x151%x152));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = UINT16_MAX;
	uint16_t x155 = 1528U;
	int64_t x156 = INT64_MIN;
	volatile int64_t t38 = 12095393LL;

	t38 = ((x153/x154)|(x155%x156));

	if (t38 != 1528LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	volatile uint16_t x158 = 339U;
	int64_t x159 = -1LL;
	static int64_t t39 = -2208885469LL;

	t39 = ((x157/x158)|(x159%x160));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	volatile int32_t x162 = -1;
	static volatile int32_t x163 = -92;
	static volatile int8_t x164 = INT8_MAX;
	volatile int32_t t40 = 260926;

	t40 = ((x161/x162)|(x163%x164));

	if (t40 != -92) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int32_t x167 = INT32_MIN;
	int16_t x168 = 121;
	int32_t t41 = -38622;

	t41 = ((x165/x166)|(x167%x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = UINT16_MAX;
	int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MIN;
	volatile int64_t t42 = -27841218571LL;

	t42 = ((x169/x170)|(x171%x172));

	if (t42 != 639LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x175 = -1;
	int8_t x176 = INT8_MAX;
	int64_t t43 = -1121172LL;

	t43 = ((x173/x174)|(x175%x176));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x177 = INT8_MIN;
	int32_t x178 = -1;
	int64_t x179 = -684593529540757LL;
	volatile uint64_t x180 = 196375779612538275LLU;
	uint64_t t44 = 5510147949LLU;

	t44 = ((x177/x178)|(x179%x180));

	if (t44 != 183111976213951412LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = -1;
	uint16_t x182 = UINT16_MAX;
	int32_t t45 = -1;

	t45 = ((x181/x182)|(x183%x184));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x187 = -11;
	uint32_t x188 = 300373U;

	t46 = ((x185/x186)|(x187%x188));

	if (t46 != 234131U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -11436;
	int32_t x190 = INT32_MIN;
	static volatile uint16_t x191 = 24U;
	int8_t x192 = INT8_MAX;

	t47 = ((x189/x190)|(x191%x192));

	if (t47 != 24) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 8U;
	int16_t x194 = 7094;
	volatile uint64_t x196 = 1956782025387760507LLU;
	uint64_t t48 = 378802LLU;

	t48 = ((x193/x194)|(x195%x196));

	if (t48 != 835705845219707052LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 0U;
	static volatile int8_t x198 = INT8_MAX;
	uint16_t x199 = UINT16_MAX;
	volatile int64_t x200 = INT64_MIN;
	static volatile int64_t t49 = -7498776489LL;

	t49 = ((x197/x198)|(x199%x200));

	if (t49 != 65535LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x202 = INT64_MIN;
	int32_t x203 = -60;
	static int64_t x204 = INT64_MIN;
	static int64_t t50 = 3037LL;

	t50 = ((x201/x202)|(x203%x204));

	if (t50 != -60LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 1250U;
	uint64_t x206 = 1526039883061LLU;
	static uint16_t x207 = 169U;
	volatile uint64_t t51 = 5373LLU;

	t51 = ((x205/x206)|(x207%x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MIN;
	uint32_t x210 = 1901U;
	int64_t x211 = -33157867166LL;
	static int8_t x212 = -1;
	volatile int64_t t52 = 1949LL;

	t52 = ((x209/x210)|(x211%x212));

	if (t52 != 2259319LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = 925076;
	int32_t x214 = INT32_MIN;
	volatile int64_t x216 = INT64_MIN;
	volatile int64_t t53 = 4500001167362065160LL;

	t53 = ((x213/x214)|(x215%x216));

	if (t53 != 4294967295LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = -1;
	int8_t x218 = -1;
	volatile int8_t x219 = INT8_MAX;
	uint32_t t54 = 1889U;

	t54 = ((x217/x218)|(x219%x220));

	if (t54 != 127U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x221 = -27937;
	int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MAX;
	uint16_t x224 = 5492U;
	volatile int64_t t55 = 10795132016LL;

	t55 = ((x221/x222)|(x223%x224));

	if (t55 != 2247LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 2U;
	uint16_t x227 = 5268U;
	volatile int8_t x228 = INT8_MAX;
	volatile int64_t t56 = -8224604617424195LL;

	t56 = ((x225/x226)|(x227%x228));

	if (t56 != 61LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x233 = UINT8_MAX;
	int16_t x234 = 1;
	int8_t x236 = 1;
	int32_t t57 = 1;

	t57 = ((x233/x234)|(x235%x236));

	if (t57 != 255) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x237 = 1005U;
	int64_t x238 = INT64_MIN;
	volatile int64_t t58 = 90570111173941LL;

	t58 = ((x237/x238)|(x239%x240));

	if (t58 != -24LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x242 = UINT64_MAX;
	uint16_t x244 = 2U;
	uint64_t t59 = 1329LLU;

	t59 = ((x241/x242)|(x243%x244));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x245 = INT32_MAX;
	uint64_t x246 = 18LLU;
	int16_t x247 = -1;
	uint64_t t60 = UINT64_MAX;

	t60 = ((x245/x246)|(x247%x248));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x250 = INT64_MAX;
	int64_t x252 = 3865614731378499664LL;

	t61 = ((x249/x250)|(x251%x252));

	if (t61 != 7870732846092582LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x253 = 1;
	static volatile uint8_t x254 = 23U;
	int8_t x255 = 22;
	int8_t x256 = -13;
	volatile int32_t t62 = -1;

	t62 = ((x253/x254)|(x255%x256));

	if (t62 != 9) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	uint8_t x258 = UINT8_MAX;
	int64_t x259 = INT64_MIN;

	t63 = ((x257/x258)|(x259%x260));

	if (t63 != 8421504LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x262 = 2U;
	int64_t x263 = 0LL;
	uint8_t x264 = 3U;
	int64_t t64 = -57496683145340929LL;

	t64 = ((x261/x262)|(x263%x264));

	if (t64 != 115354LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x271 = INT8_MIN;
	int64_t t65 = 99100800LL;

	t65 = ((x269/x270)|(x271%x272));

	if (t65 != -43LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = 125533779;
	int64_t x274 = INT64_MAX;
	uint16_t x275 = UINT16_MAX;
	static uint16_t x276 = 6949U;

	t66 = ((x273/x274)|(x275%x276));

	if (t66 != 2994LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = INT64_MIN;
	int32_t x279 = 15206056;
	int64_t t67 = -379775389200187965LL;

	t67 = ((x277/x278)|(x279%x280));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = INT8_MIN;
	uint16_t x282 = UINT16_MAX;
	uint16_t x283 = 1087U;
	uint8_t x284 = UINT8_MAX;
	volatile int32_t t68 = 2129;

	t68 = ((x281/x282)|(x283%x284));

	if (t68 != 67) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x285 = UINT8_MAX;
	static uint32_t x286 = UINT32_MAX;
	int8_t x288 = INT8_MAX;

	t69 = ((x285/x286)|(x287%x288));

	if (t69 != 7U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = -1;
	int8_t x292 = -1;
	volatile uint32_t t70 = 1167952U;

	t70 = ((x289/x290)|(x291%x292));

	if (t70 != 32768U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x294 = UINT8_MAX;
	volatile int64_t x295 = INT64_MIN;
	volatile uint16_t x296 = 73U;
	int64_t t71 = 1085496207609LL;

	t71 = ((x293/x294)|(x295%x296));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = -1LL;
	static uint32_t x298 = UINT32_MAX;
	uint16_t x299 = 28075U;
	uint16_t x300 = UINT16_MAX;
	volatile int64_t t72 = 7LL;

	t72 = ((x297/x298)|(x299%x300));

	if (t72 != 28075LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x301 = INT16_MIN;
	int16_t x304 = 25;
	int64_t t73 = 418163655LL;

	t73 = ((x301/x302)|(x303%x304));

	if (t73 != -18LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = -14;
	static uint64_t x307 = 111590LLU;
	uint32_t x308 = 124503U;
	uint64_t t74 = 16982194038LLU;

	t74 = ((x305/x306)|(x307%x308));

	if (t74 != 111598LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x309 = 1918881LLU;
	volatile uint8_t x311 = 15U;
	int64_t x312 = INT64_MIN;
	uint64_t t75 = 7375386261957456LLU;

	t75 = ((x309/x310)|(x311%x312));

	if (t75 != 15LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x313 = INT32_MIN;
	uint16_t x314 = 1U;
	volatile uint32_t x315 = UINT32_MAX;
	int8_t x316 = INT8_MIN;
	uint32_t t76 = 1718U;

	t76 = ((x313/x314)|(x315%x316));

	if (t76 != 2147483775U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x317 = INT16_MIN;
	int8_t x318 = INT8_MAX;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = UINT16_MAX;
	int32_t t77 = 590553;

	t77 = ((x317/x318)|(x319%x320));

	if (t77 != -257) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x322 = -6;
	static int8_t x323 = INT8_MAX;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = ((x321/x322)|(x323%x324));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = -1;
	static int16_t x327 = 104;
	uint32_t x328 = 2U;
	volatile uint32_t t79 = 1U;

	t79 = ((x325/x326)|(x327%x328));

	if (t79 != 1439814U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = -4;
	volatile int8_t x331 = 27;
	uint8_t x332 = 15U;
	volatile int32_t t80 = 25982404;

	t80 = ((x329/x330)|(x331%x332));

	if (t80 != 12) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x333 = 1828U;
	uint16_t x334 = 847U;
	int32_t x335 = -4921361;
	int64_t x336 = INT64_MAX;
	int64_t t81 = 2123LL;

	t81 = ((x333/x334)|(x335%x336));

	if (t81 != -4921361LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x337 = 4U;
	int8_t x338 = -11;
	int8_t x339 = -10;
	static uint16_t x340 = UINT16_MAX;
	int32_t t82 = 0;

	t82 = ((x337/x338)|(x339%x340));

	if (t82 != -10) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x341 = INT16_MIN;
	static int8_t x343 = INT8_MIN;
	int32_t x344 = 1;

	t83 = ((x341/x342)|(x343%x344));

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x349 = UINT8_MAX;
	static uint8_t x350 = 6U;
	int32_t x351 = INT32_MIN;
	volatile int32_t t84 = 334022;

	t84 = ((x349/x350)|(x351%x352));

	if (t84 != -86) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = -1;
	int64_t x354 = -29491262LL;
	volatile int64_t x355 = INT64_MIN;
	int32_t x356 = -1;
	static volatile int64_t t85 = 1LL;

	t85 = ((x353/x354)|(x355%x356));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	volatile int16_t x360 = INT16_MAX;
	static volatile int64_t t86 = -1480567680063148LL;

	t86 = ((x357/x358)|(x359%x360));

	if (t86 != -329406144173384849LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MAX;
	int64_t t87 = 513764282117LL;

	t87 = ((x361/x362)|(x363%x364));

	if (t87 != -8LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x370 = INT64_MIN;
	int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MIN;

	t88 = ((x369/x370)|(x371%x372));

	if (t88 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	static volatile int32_t x375 = INT32_MIN;
	uint64_t x376 = 14249LLU;
	volatile uint64_t t89 = 2352593LLU;

	t89 = ((x373/x374)|(x375%x376));

	if (t89 != 9325LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 1719612680877LLU;
	uint8_t x379 = 79U;
	int32_t x380 = INT32_MIN;
	uint64_t t90 = 155094567648125LLU;

	t90 = ((x377/x378)|(x379%x380));

	if (t90 != 122829477215LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x382 = -1;
	int8_t x383 = INT8_MIN;
	volatile uint8_t x384 = 1U;
	uint64_t t91 = 115590621827LLU;

	t91 = ((x381/x382)|(x383%x384));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x385 = 1419011709311LL;
	uint32_t x386 = UINT32_MAX;
	int32_t x387 = INT32_MIN;
	volatile int64_t x388 = -87865923841401479LL;
	volatile int64_t t92 = 0LL;

	t92 = ((x385/x386)|(x387%x388));

	if (t92 != -2147483318LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x390 = UINT64_MAX;
	static uint32_t x391 = UINT32_MAX;
	int16_t x392 = 564;
	uint64_t t93 = 152118296899022LLU;

	t93 = ((x389/x390)|(x391%x392));

	if (t93 != 135LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x393 = -1;
	static int8_t x394 = INT8_MAX;
	static uint32_t x395 = UINT32_MAX;
	int64_t x396 = INT64_MAX;
	int64_t t94 = -69LL;

	t94 = ((x393/x394)|(x395%x396));

	if (t94 != 4294967295LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x398 = INT8_MIN;
	int8_t x399 = -1;
	int64_t t95 = 420848960734494998LL;

	t95 = ((x397/x398)|(x399%x400));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = 2;
	int32_t x402 = INT32_MIN;
	static int16_t x403 = 1;
	volatile int32_t t96 = -120141;

	t96 = ((x401/x402)|(x403%x404));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x405 = INT8_MAX;
	uint32_t x406 = 46006U;
	uint8_t x407 = 0U;
	int32_t x408 = INT32_MIN;
	uint32_t t97 = 23272U;

	t97 = ((x405/x406)|(x407%x408));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x409 = 0;
	int32_t x410 = INT32_MIN;
	volatile int32_t x412 = INT32_MAX;
	volatile int64_t t98 = -37247015606LL;

	t98 = ((x409/x410)|(x411%x412));

	if (t98 != -170LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x413 = INT8_MIN;
	int16_t x416 = INT16_MAX;
	int32_t t99 = -230620;

	t99 = ((x413/x414)|(x415%x416));

	if (t99 != -1) { NG(); } else { ; }
	
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

