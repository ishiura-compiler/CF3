#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t t0 = 212931187813904LLU;
volatile uint64_t x8 = 7987099101992148852LLU;
static volatile int32_t x17 = INT32_MIN;
static int8_t x20 = -1;
int64_t x23 = INT64_MIN;
int64_t x30 = -126648511241LL;
int16_t x32 = 1436;
uint32_t x36 = 8U;
volatile uint64_t t8 = 544267871048611528LLU;
int16_t x37 = -1599;
static int16_t x40 = INT16_MIN;
int8_t x44 = -1;
int32_t x46 = -130;
int32_t t11 = 1;
int32_t x50 = -40585532;
int64_t x52 = INT64_MIN;
static int8_t x54 = INT8_MAX;
int8_t x55 = INT8_MIN;
int8_t x61 = INT8_MAX;
volatile int64_t t16 = -15LL;
int16_t x70 = 173;
volatile uint32_t x75 = 57203537U;
uint16_t x81 = 1100U;
static uint64_t x88 = 251722472395473546LLU;
uint64_t x92 = UINT64_MAX;
static int32_t x102 = -20394523;
uint16_t x103 = 3685U;
int16_t x107 = -5375;
volatile uint64_t x110 = 23021LLU;
int64_t x116 = 7424323693776631LL;
int64_t x119 = INT64_MIN;
volatile uint32_t x134 = 115303060U;
static uint64_t x138 = 23211686LLU;
int32_t x142 = 6249;
uint64_t x160 = 3672822094914907682LLU;
int32_t x161 = INT32_MIN;
int8_t x169 = INT8_MIN;
int16_t x173 = INT16_MIN;
volatile int8_t x174 = INT8_MIN;
static volatile uint32_t x175 = 3694124U;
static int16_t x177 = INT16_MAX;
int8_t x180 = 9;
static int64_t x183 = -1LL;
uint16_t x188 = 322U;
volatile int32_t t47 = -55778;
volatile uint32_t x204 = 112U;
volatile uint64_t x206 = UINT64_MAX;
int64_t x212 = 756LL;
volatile int8_t x223 = INT8_MIN;
int64_t t54 = -167773400515536LL;
uint8_t x227 = UINT8_MAX;
int32_t x234 = INT32_MIN;
volatile int64_t t57 = -1LL;
uint16_t x238 = 392U;
int64_t x239 = INT64_MAX;
static int16_t x245 = -10745;
uint32_t x246 = 4424U;
int64_t x247 = INT64_MIN;
uint64_t x259 = UINT64_MAX;
static int64_t t64 = 3727596347650336LL;
int64_t x267 = INT64_MIN;
uint32_t x268 = UINT32_MAX;
volatile uint64_t t66 = 3527899683LLU;
int64_t x273 = INT64_MIN;
static int8_t x274 = -15;
int64_t x277 = INT64_MAX;
uint64_t x280 = 3813LLU;
int32_t x284 = INT32_MIN;
uint32_t x286 = 194809201U;
static int32_t x287 = 1545373;
uint64_t t71 = 3340LLU;
int16_t x297 = 2330;
static uint32_t x300 = 96150144U;
static int32_t x303 = -1;
uint32_t x304 = 1362041070U;
volatile int64_t t73 = -27473553637380693LL;
static volatile uint64_t t74 = 174028302531313399LLU;
int32_t x312 = -144212813;
static int8_t x313 = -2;
uint16_t x314 = 28U;
int8_t x316 = 1;
volatile int64_t x323 = INT64_MIN;
volatile int8_t x333 = INT8_MAX;
uint32_t x339 = UINT32_MAX;
int64_t t83 = -32LL;
volatile uint16_t x354 = UINT16_MAX;
int64_t x356 = -124281781LL;
int32_t x364 = -4090632;
volatile uint8_t x368 = UINT8_MAX;
volatile int32_t t89 = 2164835;
volatile uint64_t x369 = UINT64_MAX;
static volatile int8_t x371 = -1;
static volatile int64_t x381 = 245745LL;
int16_t x386 = 1;
static volatile uint64_t t94 = 6523494825377416LLU;
volatile int16_t x393 = -1;
int16_t x398 = 7;
int8_t x400 = -2;
int32_t x402 = -17910;


void f0(void) {
	static int64_t x1 = INT64_MIN;
	static uint64_t x2 = UINT64_MAX;
	static volatile int64_t x3 = INT64_MIN;
	uint32_t x4 = 1843175245U;

	t0 = ((x1%x2)/(x3|x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int32_t x6 = INT32_MAX;
	uint8_t x7 = UINT8_MAX;
	volatile uint64_t t1 = 2258300787339871420LLU;

	t1 = ((x5%x6)/(x7|x8));

	if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MAX;
	volatile int32_t x10 = -1;
	volatile int32_t x11 = -58048;
	static int64_t x12 = INT64_MAX;
	int64_t t2 = 912LL;

	t2 = ((x9%x10)/(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 830237U;
	uint64_t x14 = 1LLU;
	int8_t x15 = INT8_MIN;
	int64_t x16 = -13713905436LL;
	uint64_t t3 = 6LLU;

	t3 = ((x13%x14)/(x15|x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	static volatile uint8_t x19 = 118U;
	volatile int32_t t4 = 31;

	t4 = ((x17%x18)/(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	volatile int64_t x22 = -5934960LL;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = -980482663147LL;

	t5 = ((x21%x22)/(x23|x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 4668908357667LLU;
	int8_t x26 = -1;
	static uint16_t x27 = UINT16_MAX;
	int8_t x28 = INT8_MIN;
	uint64_t t6 = 2433560187889650682LLU;

	t6 = ((x25%x26)/(x27|x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 1644835U;
	int32_t x31 = -2;
	int64_t t7 = -3542215762914792193LL;

	t7 = ((x29%x30)/(x31|x32));

	if (t7 != -822417LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = 7LLU;

	t8 = ((x33%x34)/(x35|x36));

	if (t8 != 1229782938247303441LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = -2708LL;
	int64_t t9 = 3173935LL;

	t9 = ((x37%x38)/(x39|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 21U;
	int16_t x42 = INT16_MIN;
	int16_t x43 = INT16_MAX;
	int32_t t10 = -3739;

	t10 = ((x41%x42)/(x43|x44));

	if (t10 != -21) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	int32_t x47 = -6574;
	static volatile int16_t x48 = -439;

	t11 = ((x45%x46)/(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x49 = INT64_MIN;
	uint32_t x51 = 3U;
	static int64_t t12 = 54880261729334LL;

	t12 = ((x49%x50)/(x51|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	uint64_t x56 = 211692747974279LLU;
	uint64_t t13 = 100057102602126093LLU;

	t13 = ((x53%x54)/(x55|x56));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int64_t x58 = INT64_MIN;
	int64_t x59 = INT64_MAX;
	static int8_t x60 = -1;
	static int64_t t14 = 276521495LL;

	t14 = ((x57%x58)/(x59|x60));

	if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = INT64_MIN;
	static int64_t x64 = INT64_MIN;
	volatile int64_t t15 = 52332404270595LL;

	t15 = ((x61%x62)/(x63|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = INT64_MIN;
	int32_t x66 = -32312;
	static uint32_t x67 = 12U;
	int32_t x68 = INT32_MIN;

	t16 = ((x65%x66)/(x67|x68));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -3;
	int8_t x71 = -1;
	int8_t x72 = INT8_MIN;
	int32_t t17 = -23164;

	t17 = ((x69%x70)/(x71|x72));

	if (t17 != 3) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	static uint8_t x74 = 7U;
	static uint8_t x76 = 1U;
	volatile uint32_t t18 = 5983U;

	t18 = ((x73%x74)/(x75|x76));

	if (t18 != 75U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x77 = 11U;
	int8_t x78 = INT8_MIN;
	static int16_t x79 = INT16_MAX;
	volatile uint64_t x80 = 113267593LLU;
	volatile uint64_t t19 = 1LLU;

	t19 = ((x77%x78)/(x79|x80));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = 266552983U;
	int16_t x83 = -3612;
	static uint16_t x84 = UINT16_MAX;
	uint32_t t20 = 5274U;

	t20 = ((x81%x82)/(x83|x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -186;
	static uint32_t x86 = 13U;
	int8_t x87 = 5;
	volatile uint64_t t21 = 21LLU;

	t21 = ((x85%x86)/(x87|x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = INT16_MIN;
	int8_t x90 = INT8_MAX;
	int32_t x91 = INT32_MIN;
	uint64_t t22 = 718229839952554LLU;

	t22 = ((x89%x90)/(x91|x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = -1;
	int8_t x94 = INT8_MIN;
	int64_t x95 = -14LL;
	uint8_t x96 = UINT8_MAX;
	int64_t t23 = -159784828501456LL;

	t23 = ((x93%x94)/(x95|x96));

	if (t23 != 1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -44LL;
	volatile int64_t x98 = 2299029879LL;
	int32_t x99 = INT32_MIN;
	volatile int8_t x100 = INT8_MIN;
	int64_t t24 = 970899422565LL;

	t24 = ((x97%x98)/(x99|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -4;
	int64_t x104 = -191938LL;
	int64_t t25 = -200031253LL;

	t25 = ((x101%x102)/(x103|x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MIN;
	int64_t x106 = -1LL;
	uint64_t x108 = 1624464948010997LLU;
	static uint64_t t26 = 4332649180650624LLU;

	t26 = ((x105%x106)/(x107|x108));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 13464355042456067LLU;
	int64_t x111 = INT64_MIN;
	uint64_t x112 = 14375576114248LLU;
	uint64_t t27 = 81147760580450299LLU;

	t27 = ((x109%x110)/(x111|x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	static int32_t x114 = INT32_MIN;
	static int32_t x115 = INT32_MIN;
	volatile int64_t t28 = 11589796508654LL;

	t28 = ((x113%x114)/(x115|x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MIN;
	int16_t x120 = -764;
	volatile int64_t t29 = 3199405004225779498LL;

	t29 = ((x117%x118)/(x119|x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 60U;
	volatile int32_t x122 = INT32_MIN;
	static int8_t x123 = 15;
	int16_t x124 = INT16_MIN;
	uint32_t t30 = 27U;

	t30 = ((x121%x122)/(x123|x124));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 5;
	int32_t x126 = -756638985;
	volatile uint64_t x127 = 26LLU;
	volatile uint16_t x128 = 2833U;
	volatile uint64_t t31 = 254453LLU;

	t31 = ((x125%x126)/(x127|x128));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 1614739785LLU;
	int64_t x131 = INT64_MIN;
	uint32_t x132 = 1539053U;
	volatile uint64_t t32 = 247927222320722LLU;

	t32 = ((x129%x130)/(x131|x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int64_t x135 = -1LL;
	uint16_t x136 = 7011U;
	int64_t t33 = -16943694219002LL;

	t33 = ((x133%x134)/(x135|x136));

	if (t33 != -72028568LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 3U;
	int32_t x139 = INT32_MIN;
	int64_t x140 = -753404936471LL;
	volatile uint64_t t34 = 2342725899998523LLU;

	t34 = ((x137%x138)/(x139|x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	static uint64_t x143 = 46695420262395464LLU;
	int16_t x144 = 47;
	volatile uint64_t t35 = 12824LLU;

	t35 = ((x141%x142)/(x143|x144));

	if (t35 != 395LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x145 = 19464U;
	int16_t x146 = -1;
	int8_t x147 = -1;
	uint64_t x148 = 4218150824038LLU;
	volatile uint64_t t36 = 206960721387834474LLU;

	t36 = ((x145%x146)/(x147|x148));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -13;
	static volatile int8_t x150 = -1;
	static int32_t x151 = INT32_MIN;
	uint32_t x152 = 3523U;
	volatile uint32_t t37 = 231865258U;

	t37 = ((x149%x150)/(x151|x152));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = 47576234337893302LLU;
	int32_t x154 = INT32_MIN;
	static uint32_t x155 = 151U;
	int64_t x156 = INT64_MIN;
	volatile uint64_t t38 = 2074267475LLU;

	t38 = ((x153%x154)/(x155|x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	static volatile int8_t x158 = INT8_MAX;
	volatile int8_t x159 = -1;
	volatile uint64_t t39 = 77653132057LLU;

	t39 = ((x157%x158)/(x159|x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x162 = -8098831686695975LL;
	int64_t x163 = 14LL;
	static int64_t x164 = INT64_MIN;
	int64_t t40 = 448208927011404737LL;

	t40 = ((x161%x162)/(x163|x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x165 = 27573968221145LLU;
	volatile int8_t x166 = -1;
	int64_t x167 = INT64_MAX;
	volatile uint16_t x168 = 1341U;
	volatile uint64_t t41 = 492757465790125LLU;

	t41 = ((x165%x166)/(x167|x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x170 = 4U;
	int8_t x171 = INT8_MAX;
	volatile uint16_t x172 = UINT16_MAX;
	static int32_t t42 = -462079;

	t42 = ((x169%x170)/(x171|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x176 = INT16_MIN;
	uint32_t t43 = 227U;

	t43 = ((x173%x174)/(x175|x176));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int32_t x178 = INT32_MIN;
	int32_t x179 = 986;
	volatile int32_t t44 = 236;

	t44 = ((x177%x178)/(x179|x180));

	if (t44 != 33) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	int32_t x182 = 16698720;
	uint16_t x184 = 13443U;
	int64_t t45 = 31311907LL;

	t45 = ((x181%x182)/(x183|x184));

	if (t45 != -65535LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	volatile int32_t x186 = INT32_MAX;
	int16_t x187 = -1;
	int32_t t46 = -2336;

	t46 = ((x185%x186)/(x187|x188));

	if (t46 != -127) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = INT16_MIN;
	int32_t x191 = INT32_MIN;
	uint16_t x192 = UINT16_MAX;

	t47 = ((x189%x190)/(x191|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 84067150LLU;
	int32_t x194 = INT32_MAX;
	int16_t x195 = 1;
	uint64_t x196 = 287112809LLU;
	uint64_t t48 = 1LLU;

	t48 = ((x193%x194)/(x195|x196));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = -1LL;
	int8_t x198 = -29;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -175;
	volatile int64_t t49 = 165LL;

	t49 = ((x197%x198)/(x199|x200));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 34U;
	uint32_t x202 = 11357566U;
	uint8_t x203 = UINT8_MAX;
	uint32_t t50 = 14U;

	t50 = ((x201%x202)/(x203|x204));

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 259U;
	int32_t x207 = -3844917;
	static int8_t x208 = -1;
	uint64_t t51 = 69247050633045695LLU;

	t51 = ((x205%x206)/(x207|x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	static uint8_t x210 = 1U;
	int32_t x211 = 16718189;
	static int64_t t52 = -37596052LL;

	t52 = ((x209%x210)/(x211|x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	volatile int8_t x218 = -63;
	uint32_t x219 = 1U;
	int16_t x220 = -1;
	uint32_t t53 = 1503070U;

	t53 = ((x217%x218)/(x219|x220));

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x221 = INT64_MIN;
	int8_t x222 = INT8_MAX;
	volatile int32_t x224 = 12769;

	t54 = ((x221%x222)/(x223|x224));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x225 = 5850;
	int16_t x226 = 2777;
	static volatile uint8_t x228 = 3U;
	volatile int32_t t55 = 221985626;

	t55 = ((x225%x226)/(x227|x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = 117;
	int64_t x230 = -1LL;
	static int16_t x231 = 7;
	int32_t x232 = -1590941;
	volatile int64_t t56 = -12458441609521LL;

	t56 = ((x229%x230)/(x231|x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x233 = -1LL;
	int8_t x235 = -1;
	volatile int8_t x236 = -1;

	t57 = ((x233%x234)/(x235|x236));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int32_t x240 = INT32_MIN;
	static volatile int64_t t58 = -1027659491697984LL;

	t58 = ((x237%x238)/(x239|x240));

	if (t58 != 344LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = 26130572U;
	int64_t x242 = INT64_MIN;
	static int8_t x243 = INT8_MIN;
	volatile int32_t x244 = -155623479;
	volatile int64_t t59 = -5336483LL;

	t59 = ((x241%x242)/(x243|x244));

	if (t59 != -475101LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x248 = INT64_MIN;
	volatile int64_t t60 = -68890266768756LL;

	t60 = ((x245%x246)/(x247|x248));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x249 = UINT32_MAX;
	static uint32_t x250 = 6U;
	int16_t x251 = 3916;
	uint32_t x252 = 73115U;
	volatile uint32_t t61 = 12466U;

	t61 = ((x249%x250)/(x251|x252));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	uint32_t x254 = 6U;
	int32_t x255 = -1;
	int16_t x256 = INT16_MIN;
	uint32_t t62 = 1257U;

	t62 = ((x253%x254)/(x255|x256));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 2919184U;
	int16_t x258 = 5;
	int16_t x260 = -62;
	uint64_t t63 = 4LLU;

	t63 = ((x257%x258)/(x259|x260));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x261 = 1891U;
	uint16_t x262 = UINT16_MAX;
	int64_t x263 = 4LL;
	int8_t x264 = -1;

	t64 = ((x261%x262)/(x263|x264));

	if (t64 != -1891LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	volatile int64_t t65 = -4552958172816291LL;

	t65 = ((x265%x266)/(x267|x268));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x269 = -1;
	int8_t x270 = -1;
	int16_t x271 = 3;
	volatile uint64_t x272 = 835625980322083599LLU;

	t66 = ((x269%x270)/(x271|x272));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x275 = INT8_MIN;
	static int32_t x276 = 198442;
	volatile int64_t t67 = 24342115LL;

	t67 = ((x273%x274)/(x275|x276));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x278 = -1;
	uint32_t x279 = 23235U;
	uint64_t t68 = 40LLU;

	t68 = ((x277%x278)/(x279|x280));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x281 = INT32_MIN;
	static int32_t x282 = INT32_MIN;
	uint64_t x283 = 4287505525629522262LLU;
	volatile uint64_t t69 = 4564403758980LLU;

	t69 = ((x281%x282)/(x283|x284));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x285 = 624;
	int16_t x288 = 36;
	static volatile uint32_t t70 = 541814364U;

	t70 = ((x285%x286)/(x287|x288));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x289 = INT32_MIN;
	int64_t x290 = -13324964431LL;
	uint64_t x291 = UINT64_MAX;
	volatile uint64_t x292 = 1851335303648940LLU;

	t71 = ((x289%x290)/(x291|x292));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x298 = 1747U;
	int32_t x299 = 26;
	uint32_t t72 = 48U;

	t72 = ((x297%x298)/(x299|x300));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x301 = 5063;
	int64_t x302 = -19404976385LL;

	t73 = ((x301%x302)/(x303|x304));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x305 = UINT8_MAX;
	int32_t x306 = -1;
	static uint16_t x307 = 7U;
	uint64_t x308 = UINT64_MAX;

	t74 = ((x305%x306)/(x307|x308));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x309 = 20U;
	int64_t x310 = -122896791782985083LL;
	volatile int32_t x311 = INT32_MIN;
	static int64_t t75 = 934578964018190473LL;

	t75 = ((x309%x310)/(x311|x312));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x315 = -1;
	int32_t t76 = -10270071;

	t76 = ((x313%x314)/(x315|x316));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MAX;
	static volatile uint64_t x320 = UINT64_MAX;
	static uint64_t t77 = 1050283631755825LLU;

	t77 = ((x317%x318)/(x319|x320));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x321 = INT16_MIN;
	int64_t x322 = INT64_MIN;
	int16_t x324 = -188;
	int64_t t78 = -247815LL;

	t78 = ((x321%x322)/(x323|x324));

	if (t78 != 174LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = -15;
	volatile int16_t x326 = INT16_MIN;
	static uint32_t x327 = 3994U;
	static uint32_t x328 = 3111548U;
	volatile uint32_t t79 = 21U;

	t79 = ((x325%x326)/(x327|x328));

	if (t79 != 1379U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x329 = UINT64_MAX;
	uint16_t x330 = 27221U;
	int16_t x331 = INT16_MIN;
	int64_t x332 = -1LL;
	uint64_t t80 = 91LLU;

	t80 = ((x329%x330)/(x331|x332));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x334 = UINT64_MAX;
	uint16_t x335 = UINT16_MAX;
	uint32_t x336 = 13865U;
	static volatile uint64_t t81 = 2126221616LLU;

	t81 = ((x333%x334)/(x335|x336));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x337 = 1LLU;
	uint32_t x338 = 12808439U;
	uint8_t x340 = 103U;
	uint64_t t82 = 87557384LLU;

	t82 = ((x337%x338)/(x339|x340));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x341 = 77U;
	int64_t x342 = INT64_MIN;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MIN;

	t83 = ((x341%x342)/(x343|x344));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = 1668;
	uint16_t x346 = UINT16_MAX;
	int16_t x347 = INT16_MIN;
	volatile int32_t x348 = INT32_MIN;
	int32_t t84 = -33834228;

	t84 = ((x345%x346)/(x347|x348));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = -1;
	static int32_t x350 = INT32_MIN;
	uint8_t x351 = UINT8_MAX;
	static volatile int64_t x352 = INT64_MAX;
	static volatile int64_t t85 = -194412910923342264LL;

	t85 = ((x349%x350)/(x351|x352));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x353 = -1;
	int64_t x355 = -1LL;
	static volatile int64_t t86 = 3362000444087LL;

	t86 = ((x353%x354)/(x355|x356));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x357 = -1LL;
	int64_t x358 = -20868672988LL;
	int32_t x359 = INT32_MIN;
	uint32_t x360 = 1409008U;
	static int64_t t87 = -5LL;

	t87 = ((x357%x358)/(x359|x360));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x361 = -1;
	volatile int8_t x362 = 46;
	volatile int64_t x363 = 1179772654319LL;
	int64_t t88 = 28LL;

	t88 = ((x361%x362)/(x363|x364));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x365 = INT16_MIN;
	int32_t x366 = INT32_MIN;
	int8_t x367 = -51;

	t89 = ((x365%x366)/(x367|x368));

	if (t89 != 32768) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x370 = -7657;
	int64_t x372 = INT64_MIN;
	uint64_t t90 = 1686419989LLU;

	t90 = ((x369%x370)/(x371|x372));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x373 = INT16_MIN;
	int64_t x374 = -1LL;
	volatile int8_t x375 = -1;
	volatile int32_t x376 = 179;
	static int64_t t91 = 141447411484315164LL;

	t91 = ((x373%x374)/(x375|x376));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = -14;
	volatile int8_t x378 = -1;
	int8_t x379 = -12;
	int64_t x380 = INT64_MAX;
	int64_t t92 = 107487LL;

	t92 = ((x377%x378)/(x379|x380));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x382 = INT16_MIN;
	int64_t x383 = INT64_MIN;
	int32_t x384 = INT32_MIN;
	static int64_t t93 = -250134629LL;

	t93 = ((x381%x382)/(x383|x384));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x385 = 5U;
	volatile int16_t x387 = INT16_MIN;
	uint64_t x388 = 76LLU;

	t94 = ((x385%x386)/(x387|x388));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x389 = -1;
	static int16_t x390 = INT16_MIN;
	uint64_t x391 = 1LLU;
	int8_t x392 = -15;
	static volatile uint64_t t95 = 6365LLU;

	t95 = ((x389%x390)/(x391|x392));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x394 = 3LL;
	int8_t x395 = -1;
	int16_t x396 = -2;
	int64_t t96 = -6LL;

	t96 = ((x393%x394)/(x395|x396));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = UINT32_MAX;
	static int16_t x399 = INT16_MIN;
	static volatile uint32_t t97 = 1992475U;

	t97 = ((x397%x398)/(x399|x400));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x401 = INT16_MIN;
	int32_t x403 = INT32_MIN;
	int16_t x404 = INT16_MIN;
	int32_t t98 = -1950831;

	t98 = ((x401%x402)/(x403|x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x405 = INT16_MIN;
	uint16_t x406 = UINT16_MAX;
	int64_t x407 = -10724689856432655LL;
	int32_t x408 = 1;
	int64_t t99 = 6802015LL;

	t99 = ((x405%x406)/(x407|x408));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

