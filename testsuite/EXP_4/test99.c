#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x16 = 6U;
volatile int32_t t1 = -419250;
volatile int32_t t2 = -118298836;
volatile int64_t x23 = 7287549212068LL;
volatile int32_t t3 = -11283;
static uint32_t x29 = 1037908U;
int8_t x32 = -48;
int32_t t4 = -5702919;
int32_t x38 = INT32_MIN;
uint16_t x41 = 2266U;
volatile int32_t t8 = -13;
uint64_t x51 = 949997826405198352LLU;
volatile int64_t x54 = INT64_MIN;
volatile int32_t x68 = -7074;
int32_t t14 = 43436828;
static int64_t x73 = 1893279580LL;
static int8_t x77 = -1;
int64_t x79 = -126747366629132263LL;
int32_t t16 = -471;
uint64_t x84 = 26011005LLU;
static volatile int8_t x88 = 1;
volatile int32_t t18 = -95182;
int32_t x95 = INT32_MAX;
int32_t t21 = -184389993;
static volatile int64_t x110 = INT64_MIN;
int32_t x112 = -136;
static uint32_t x115 = UINT32_MAX;
uint16_t x119 = 1520U;
int32_t t27 = 1344;
int8_t x133 = INT8_MAX;
uint32_t x137 = 90U;
int8_t x138 = INT8_MIN;
int64_t x139 = INT64_MIN;
uint64_t x141 = 4241020564LLU;
uint64_t x149 = UINT64_MAX;
volatile int32_t t32 = -268673;
int16_t x163 = INT16_MIN;
int64_t x166 = 4521743482064LL;
static int8_t x183 = -1;
static volatile int32_t t39 = -53;
static int8_t x195 = -1;
int16_t x200 = INT16_MIN;
static uint64_t x202 = UINT64_MAX;
uint8_t x203 = UINT8_MAX;
uint32_t x207 = 109U;
uint64_t x211 = 513835933297852LLU;
volatile int32_t x217 = INT32_MIN;
static int8_t x222 = INT8_MIN;
volatile int64_t x230 = 36522293890536LL;
uint8_t x231 = 1U;
static volatile int32_t t50 = -662325;
int8_t x237 = INT8_MIN;
uint8_t x239 = UINT8_MAX;
static int32_t t51 = -27;
static int32_t x251 = -1;
int32_t x259 = -1;
volatile int16_t x265 = -5972;
int64_t x266 = 15996329169LL;
int32_t t57 = 19949197;
volatile int8_t x273 = INT8_MIN;
int8_t x288 = 31;
volatile int32_t t61 = -1051718593;
static int64_t x301 = INT64_MIN;
int16_t x302 = 866;
int32_t t65 = -24439;
int64_t x319 = 15LL;
int32_t x329 = INT32_MIN;
int16_t x335 = INT16_MIN;
volatile int32_t t70 = -125;
int32_t t71 = 335;
int8_t x346 = -4;
uint32_t x348 = UINT32_MAX;
static volatile int32_t t72 = 13951;
int32_t x353 = 5;
static int64_t x355 = INT64_MIN;
volatile int16_t x357 = INT16_MIN;
int8_t x359 = INT8_MIN;
volatile int32_t t76 = 1014;
int16_t x371 = 1008;
volatile int32_t t77 = -28115;
int64_t x382 = INT64_MIN;
int32_t x385 = INT32_MAX;
int32_t x386 = INT32_MIN;
int64_t x390 = INT64_MIN;
static uint64_t x391 = 68173140173362781LLU;
int32_t t81 = 741728;
volatile int32_t x395 = -1;
static uint32_t x404 = UINT32_MAX;
volatile int32_t t83 = 0;
uint64_t x412 = 8507280404153LLU;
static uint8_t x415 = 48U;
static uint8_t x424 = 19U;
int8_t x426 = -4;
volatile int64_t x430 = -1LL;
int32_t t90 = 1505;
uint8_t x434 = 7U;
int8_t x441 = INT8_MIN;
static int16_t x447 = INT16_MIN;
int16_t x449 = INT16_MAX;
uint16_t x450 = 8673U;
volatile int32_t t95 = 0;
int8_t x456 = 0;
int8_t x458 = INT8_MIN;
int8_t x459 = INT8_MIN;
static int32_t t97 = -24;
int16_t x462 = -15;


void f0(void) {
	int8_t x5 = -26;
	volatile int64_t x6 = -181789618LL;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 296U;
	static int32_t t0 = -35773;

	t0 = (x5==(x6==(x7+x8)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x13 = -1;
	volatile int8_t x14 = -1;
	static uint64_t x15 = 4410279861525632LLU;

	t1 = (x13==(x14==(x15+x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = -1LL;
	volatile int16_t x18 = INT16_MAX;
	static int8_t x19 = -1;
	uint32_t x20 = UINT32_MAX;

	t2 = (x17==(x18==(x19+x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = 18;
	volatile int16_t x22 = INT16_MAX;
	volatile uint8_t x24 = 26U;

	t3 = (x21==(x22==(x23+x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x30 = -1LL;
	int8_t x31 = INT8_MIN;

	t4 = (x29==(x30==(x31+x32)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x33 = UINT64_MAX;
	int64_t x34 = -1LL;
	uint64_t x35 = 193783204036568LLU;
	uint16_t x36 = 1461U;
	int32_t t5 = 1;

	t5 = (x33==(x34==(x35+x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1660;
	int8_t x39 = 1;
	volatile int16_t x40 = 2119;
	volatile int32_t t6 = 4083;

	t6 = (x37==(x38==(x39+x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x42 = INT8_MAX;
	static int16_t x43 = 1906;
	volatile uint64_t x44 = 2278856145195298014LLU;
	int32_t t7 = -3833;

	t7 = (x41==(x42==(x43+x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	static uint64_t x47 = UINT64_MAX;
	volatile int32_t x48 = 0;

	t8 = (x45==(x46==(x47+x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = -1;
	volatile int16_t x50 = -1;
	uint64_t x52 = 10LLU;
	volatile int32_t t9 = -1548325;

	t9 = (x49==(x50==(x51+x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x53 = 1112LL;
	int8_t x55 = INT8_MIN;
	uint32_t x56 = 15934U;
	int32_t t10 = -82285;

	t10 = (x53==(x54==(x55+x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	uint16_t x58 = UINT16_MAX;
	int8_t x59 = INT8_MIN;
	uint16_t x60 = 15U;
	volatile int32_t t11 = 3563516;

	t11 = (x57==(x58==(x59+x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = 56;
	uint16_t x62 = 3000U;
	volatile uint64_t x63 = 47029319284109LLU;
	int8_t x64 = INT8_MAX;
	int32_t t12 = 851234;

	t12 = (x61==(x62==(x63+x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	int8_t x66 = INT8_MAX;
	uint64_t x67 = UINT64_MAX;
	static volatile int32_t t13 = 9;

	t13 = (x65==(x66==(x67+x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x69 = 20326LLU;
	uint64_t x70 = 2871900585289410LLU;
	static int16_t x71 = INT16_MAX;
	uint16_t x72 = UINT16_MAX;

	t14 = (x69==(x70==(x71+x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x74 = -253;
	int8_t x75 = -1;
	uint8_t x76 = 10U;
	int32_t t15 = 16614;

	t15 = (x73==(x74==(x75+x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x78 = 2LLU;
	static int8_t x80 = -1;

	t16 = (x77==(x78==(x79+x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = -14;
	int16_t x82 = -1;
	static int8_t x83 = INT8_MIN;
	int32_t t17 = -923479835;

	t17 = (x81==(x82==(x83+x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MIN;
	int64_t x87 = INT64_MIN;

	t18 = (x85==(x86==(x87+x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 10342LLU;
	static int64_t x90 = 2009602898537LL;
	uint64_t x91 = 195194880186516LLU;
	int64_t x92 = INT64_MIN;
	static volatile int32_t t19 = -1;

	t19 = (x89==(x90==(x91+x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 1U;
	volatile uint8_t x94 = 66U;
	int16_t x96 = INT16_MIN;
	static volatile int32_t t20 = -72958254;

	t20 = (x93==(x94==(x95+x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 1U;
	static int64_t x98 = 57577342951LL;
	uint32_t x99 = UINT32_MAX;
	volatile int8_t x100 = -1;

	t21 = (x97==(x98==(x99+x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = INT16_MIN;
	uint64_t x104 = 170976LLU;
	volatile int32_t t22 = 9778689;

	t22 = (x101==(x102==(x103+x104)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x109 = INT32_MAX;
	int16_t x111 = INT16_MIN;
	int32_t t23 = 59706316;

	t23 = (x109==(x110==(x111+x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MIN;
	uint64_t x114 = 12358435689069LLU;
	static int32_t x116 = INT32_MIN;
	int32_t t24 = -107368;

	t24 = (x113==(x114==(x115+x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = 1606;
	int16_t x118 = -484;
	static int8_t x120 = 1;
	volatile int32_t t25 = 249297;

	t25 = (x117==(x118==(x119+x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = -370LL;
	volatile int32_t x123 = INT32_MAX;
	int8_t x124 = -13;
	volatile int32_t t26 = -35548;

	t26 = (x121==(x122==(x123+x124)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x125 = 3391U;
	int64_t x126 = -945408435308497058LL;
	uint32_t x127 = 35U;
	int8_t x128 = 1;

	t27 = (x125==(x126==(x127+x128)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x134 = INT16_MIN;
	uint32_t x135 = 17236816U;
	uint16_t x136 = 77U;
	volatile int32_t t28 = -8;

	t28 = (x133==(x134==(x135+x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x140 = 119;
	int32_t t29 = 43115;

	t29 = (x137==(x138==(x139+x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x142 = UINT64_MAX;
	uint16_t x143 = 1U;
	int8_t x144 = 3;
	static int32_t t30 = -34791;

	t30 = (x141==(x142==(x143+x144)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	static int16_t x152 = 1;
	static int32_t t31 = -3878;

	t31 = (x149==(x150==(x151+x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x153 = INT16_MAX;
	int8_t x154 = -3;
	int8_t x155 = -24;
	volatile int64_t x156 = -1LL;

	t32 = (x153==(x154==(x155+x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = 0;
	int8_t x158 = 0;
	volatile uint32_t x159 = 263948402U;
	volatile int64_t x160 = -196LL;
	volatile int32_t t33 = 17528;

	t33 = (x157==(x158==(x159+x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x161 = 4U;
	int16_t x162 = INT16_MIN;
	int8_t x164 = INT8_MIN;
	volatile int32_t t34 = -147235;

	t34 = (x161==(x162==(x163+x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x165 = 5;
	volatile uint16_t x167 = 13235U;
	volatile int8_t x168 = INT8_MAX;
	int32_t t35 = 350082577;

	t35 = (x165==(x166==(x167+x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x169 = 279889408LLU;
	static uint32_t x170 = 21778U;
	static volatile uint32_t x171 = 6511U;
	int64_t x172 = -1546LL;
	int32_t t36 = 368;

	t36 = (x169==(x170==(x171+x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = INT8_MAX;
	int16_t x178 = -184;
	uint8_t x179 = 2U;
	int32_t x180 = -10599;
	int32_t t37 = 10;

	t37 = (x177==(x178==(x179+x180)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x181 = UINT8_MAX;
	static int32_t x182 = -1;
	int8_t x184 = -1;
	volatile int32_t t38 = -8;

	t38 = (x181==(x182==(x183+x184)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = 17251833U;
	uint8_t x186 = 2U;
	int64_t x187 = -2487417615139079LL;
	volatile uint16_t x188 = 13U;

	t39 = (x185==(x186==(x187+x188)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x193 = UINT32_MAX;
	int16_t x194 = INT16_MIN;
	uint16_t x196 = 1926U;
	int32_t t40 = -10;

	t40 = (x193==(x194==(x195+x196)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x197 = 40U;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MAX;
	int32_t t41 = -220597539;

	t41 = (x197==(x198==(x199+x200)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x201 = INT32_MAX;
	uint16_t x204 = 2U;
	static volatile int32_t t42 = 1;

	t42 = (x201==(x202==(x203+x204)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x205 = INT64_MIN;
	int32_t x206 = -172;
	uint32_t x208 = 3901767U;
	volatile int32_t t43 = -375986;

	t43 = (x205==(x206==(x207+x208)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = INT8_MAX;
	int64_t x210 = INT64_MIN;
	volatile uint16_t x212 = UINT16_MAX;
	static volatile int32_t t44 = -179183;

	t44 = (x209==(x210==(x211+x212)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x213 = INT16_MIN;
	uint16_t x214 = UINT16_MAX;
	int64_t x215 = INT64_MAX;
	int64_t x216 = INT64_MIN;
	int32_t t45 = -28;

	t45 = (x213==(x214==(x215+x216)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x218 = -1;
	uint8_t x219 = 0U;
	int16_t x220 = -1;
	volatile int32_t t46 = 122159856;

	t46 = (x217==(x218==(x219+x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	int8_t x223 = INT8_MAX;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int32_t t47 = -1;

	t47 = (x221==(x222==(x223+x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x225 = INT16_MAX;
	int16_t x226 = 15671;
	static int32_t x227 = 0;
	static volatile int8_t x228 = 0;
	static int32_t t48 = -12;

	t48 = (x225==(x226==(x227+x228)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = INT32_MAX;
	int8_t x232 = 1;
	volatile int32_t t49 = 1471538;

	t49 = (x229==(x230==(x231+x232)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x233 = -358091193;
	static int16_t x234 = INT16_MAX;
	uint64_t x235 = 2986689782984LLU;
	int16_t x236 = INT16_MIN;

	t50 = (x233==(x234==(x235+x236)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x238 = -37;
	static volatile uint16_t x240 = 4660U;

	t51 = (x237==(x238==(x239+x240)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x241 = 32464U;
	int16_t x242 = -18;
	int16_t x243 = -12583;
	int16_t x244 = -1;
	volatile int32_t t52 = 32748;

	t52 = (x241==(x242==(x243+x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x249 = -227849205;
	uint64_t x250 = 11911LLU;
	int16_t x252 = INT16_MAX;
	volatile int32_t t53 = 29;

	t53 = (x249==(x250==(x251+x252)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x253 = 395694307U;
	int32_t x254 = INT32_MIN;
	volatile int8_t x255 = 0;
	int32_t x256 = INT32_MAX;
	int32_t t54 = 1;

	t54 = (x253==(x254==(x255+x256)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x257 = 6;
	static int64_t x258 = 3LL;
	volatile int16_t x260 = INT16_MAX;
	volatile int32_t t55 = -202954486;

	t55 = (x257==(x258==(x259+x260)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x261 = -1LL;
	static uint8_t x262 = 6U;
	int16_t x263 = INT16_MAX;
	static int32_t x264 = INT32_MIN;
	int32_t t56 = 13437;

	t56 = (x261==(x262==(x263+x264)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x267 = INT64_MIN;
	static uint16_t x268 = 2U;

	t57 = (x265==(x266==(x267+x268)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x269 = INT8_MAX;
	uint8_t x270 = 16U;
	int8_t x271 = INT8_MIN;
	int8_t x272 = 15;
	static int32_t t58 = -433368;

	t58 = (x269==(x270==(x271+x272)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x274 = INT64_MIN;
	volatile uint64_t x275 = 8998480276544136LLU;
	uint16_t x276 = 6786U;
	int32_t t59 = 1;

	t59 = (x273==(x274==(x275+x276)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x281 = -24349LL;
	int8_t x282 = INT8_MAX;
	int64_t x283 = -39526804910LL;
	static volatile int64_t x284 = INT64_MAX;
	static int32_t t60 = -2807;

	t60 = (x281==(x282==(x283+x284)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x285 = 1;
	volatile int32_t x286 = INT32_MIN;
	int8_t x287 = INT8_MIN;

	t61 = (x285==(x286==(x287+x288)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x293 = -18;
	int8_t x294 = INT8_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	int32_t x296 = 1982325;
	int32_t t62 = 12481;

	t62 = (x293==(x294==(x295+x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x297 = 609146;
	static int64_t x298 = INT64_MAX;
	uint64_t x299 = 10LLU;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t63 = 599243;

	t63 = (x297==(x298==(x299+x300)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x303 = 309299665U;
	uint16_t x304 = 52U;
	int32_t t64 = -15;

	t64 = (x301==(x302==(x303+x304)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x313 = INT8_MIN;
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = 9093;
	int32_t x316 = -206;

	t65 = (x313==(x314==(x315+x316)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x317 = 1098597892421887LLU;
	uint8_t x318 = 121U;
	static int64_t x320 = 336422067914LL;
	static volatile int32_t t66 = -12602473;

	t66 = (x317==(x318==(x319+x320)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x321 = 57U;
	int8_t x322 = INT8_MIN;
	static int16_t x323 = INT16_MAX;
	int32_t x324 = 20;
	int32_t t67 = -244839046;

	t67 = (x321==(x322==(x323+x324)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x325 = UINT64_MAX;
	int8_t x326 = 19;
	uint64_t x327 = UINT64_MAX;
	uint64_t x328 = 195862232376546015LLU;
	int32_t t68 = -66105083;

	t68 = (x325==(x326==(x327+x328)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x330 = INT8_MIN;
	int64_t x331 = 426801544582468LL;
	uint8_t x332 = 13U;
	int32_t t69 = 1;

	t69 = (x329==(x330==(x331+x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x333 = 3;
	int32_t x334 = 59833;
	int16_t x336 = INT16_MIN;

	t70 = (x333==(x334==(x335+x336)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x341 = UINT8_MAX;
	volatile int16_t x342 = -62;
	static uint8_t x343 = 15U;
	uint8_t x344 = UINT8_MAX;

	t71 = (x341==(x342==(x343+x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x345 = -94205051691103LL;
	volatile int32_t x347 = INT32_MAX;

	t72 = (x345==(x346==(x347+x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = INT8_MIN;
	volatile int64_t x350 = INT64_MIN;
	int16_t x351 = INT16_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t73 = -82492258;

	t73 = (x349==(x350==(x351+x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x354 = 22;
	static uint32_t x356 = 348U;
	int32_t t74 = 373884682;

	t74 = (x353==(x354==(x355+x356)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x358 = INT16_MIN;
	static int16_t x360 = INT16_MIN;
	int32_t t75 = 7;

	t75 = (x357==(x358==(x359+x360)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x365 = 15695;
	uint64_t x366 = 0LLU;
	volatile int8_t x367 = -1;
	uint64_t x368 = 3519571437676LLU;

	t76 = (x365==(x366==(x367+x368)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x369 = -8;
	uint32_t x370 = UINT32_MAX;
	int64_t x372 = 208712162608215940LL;

	t77 = (x369==(x370==(x371+x372)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x373 = -1LL;
	int16_t x374 = INT16_MIN;
	volatile int8_t x375 = -5;
	int32_t x376 = INT32_MAX;
	volatile int32_t t78 = -119479;

	t78 = (x373==(x374==(x375+x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x381 = 5939;
	int32_t x383 = 1690;
	uint32_t x384 = 856U;
	volatile int32_t t79 = 2458;

	t79 = (x381==(x382==(x383+x384)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	volatile int32_t t80 = 235232967;

	t80 = (x385==(x386==(x387+x388)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x389 = INT64_MAX;
	static volatile uint32_t x392 = 70U;

	t81 = (x389==(x390==(x391+x392)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x393 = 12U;
	uint16_t x394 = 81U;
	int16_t x396 = INT16_MIN;
	int32_t t82 = -6;

	t82 = (x393==(x394==(x395+x396)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x401 = UINT8_MAX;
	int16_t x402 = 48;
	int64_t x403 = INT64_MIN;

	t83 = (x401==(x402==(x403+x404)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x405 = 311268894089LLU;
	int64_t x406 = -1LL;
	static int8_t x407 = 8;
	static uint16_t x408 = 382U;
	int32_t t84 = 1;

	t84 = (x405==(x406==(x407+x408)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x409 = INT16_MIN;
	static uint32_t x410 = 142U;
	uint8_t x411 = UINT8_MAX;
	int32_t t85 = 55;

	t85 = (x409==(x410==(x411+x412)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x413 = 504677970009415LL;
	int64_t x414 = INT64_MIN;
	int8_t x416 = 1;
	volatile int32_t t86 = 1;

	t86 = (x413==(x414==(x415+x416)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = 11800463857LL;
	static int16_t x418 = -28;
	int16_t x419 = 1;
	int8_t x420 = INT8_MIN;
	int32_t t87 = -7;

	t87 = (x417==(x418==(x419+x420)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x421 = UINT64_MAX;
	int8_t x422 = -32;
	uint16_t x423 = 561U;
	static int32_t t88 = 1;

	t88 = (x421==(x422==(x423+x424)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = INT64_MIN;
	uint16_t x427 = 502U;
	int64_t x428 = -1780586212831370LL;
	static volatile int32_t t89 = -4402;

	t89 = (x425==(x426==(x427+x428)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x429 = INT16_MIN;
	int64_t x431 = -270449238110490611LL;
	volatile int64_t x432 = 27756030125LL;

	t90 = (x429==(x430==(x431+x432)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x433 = -422533459;
	int8_t x435 = 5;
	uint64_t x436 = UINT64_MAX;
	static int32_t t91 = -201;

	t91 = (x433==(x434==(x435+x436)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x437 = INT64_MAX;
	static int32_t x438 = -3534983;
	volatile int16_t x439 = 32;
	int8_t x440 = -1;
	int32_t t92 = 177924557;

	t92 = (x437==(x438==(x439+x440)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x442 = 0;
	uint16_t x443 = 152U;
	volatile int64_t x444 = INT64_MIN;
	int32_t t93 = 443741630;

	t93 = (x441==(x442==(x443+x444)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x445 = -31;
	int64_t x446 = INT64_MAX;
	int32_t x448 = INT32_MAX;
	static volatile int32_t t94 = 246;

	t94 = (x445==(x446==(x447+x448)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x451 = UINT8_MAX;
	uint16_t x452 = 172U;

	t95 = (x449==(x450==(x451+x452)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = -116450;
	static int8_t x454 = -28;
	int16_t x455 = 3;
	int32_t t96 = -1;

	t96 = (x453==(x454==(x455+x456)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x457 = 13U;
	int64_t x460 = -1LL;

	t97 = (x457==(x458==(x459+x460)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x461 = 5U;
	int32_t x463 = 487427339;
	int32_t x464 = -2544;
	volatile int32_t t98 = 65972;

	t98 = (x461==(x462==(x463+x464)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x465 = INT16_MIN;
	int32_t x466 = -1;
	int32_t x467 = INT32_MAX;
	volatile uint64_t x468 = 249LLU;
	volatile int32_t t99 = -2877345;

	t99 = (x465==(x466==(x467+x468)));

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

