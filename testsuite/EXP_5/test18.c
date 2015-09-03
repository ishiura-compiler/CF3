#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x1 = 122U;
static uint32_t x13 = 74511U;
int64_t x20 = -3153LL;
uint32_t x23 = UINT32_MAX;
volatile int32_t x30 = INT32_MIN;
static int16_t x41 = -1;
static int32_t x46 = INT32_MAX;
uint8_t x53 = 39U;
uint16_t x58 = UINT16_MAX;
volatile uint64_t t13 = 1622255750324253092LLU;
int8_t x69 = INT8_MIN;
int32_t x71 = -1043522901;
int8_t x72 = 8;
static volatile uint32_t t14 = 547105280U;
int8_t x73 = -1;
static uint64_t t15 = 60206LLU;
int16_t x81 = 4988;
volatile int32_t t17 = 247;
volatile int16_t x86 = INT16_MAX;
static int16_t x88 = -1;
static uint8_t x89 = 1U;
uint8_t x90 = 2U;
uint32_t t19 = 2U;
static int64_t x94 = -678279215LL;
int64_t t20 = -11LL;
int64_t x98 = INT64_MIN;
int8_t x100 = INT8_MAX;
int64_t t21 = -53535LL;
static int32_t x109 = INT32_MAX;
int32_t x110 = 22;
volatile uint32_t x112 = 60587U;
volatile uint32_t t23 = 1279959U;
uint8_t x113 = 0U;
uint64_t x115 = 315708048387844LLU;
static volatile int64_t x120 = INT64_MIN;
static int64_t x123 = -385465964265715LL;
int64_t x145 = INT64_MIN;
volatile uint8_t x149 = 65U;
int16_t x151 = -1;
static uint8_t x153 = 5U;
uint64_t x155 = 6560LLU;
static uint64_t t32 = 2435858792355416044LLU;
int8_t x163 = -5;
int64_t x168 = INT64_MAX;
volatile uint64_t t35 = 596LLU;
int64_t x183 = INT64_MIN;
volatile uint8_t x184 = 4U;
volatile uint64_t t39 = 1390857LLU;
uint16_t x185 = 595U;
static uint32_t x190 = 2U;
volatile uint8_t x202 = UINT8_MAX;
static volatile int16_t x203 = 14;
static uint64_t t43 = 1876533173239747LLU;
int8_t x212 = INT8_MIN;
volatile uint8_t x214 = UINT8_MAX;
volatile int16_t x215 = INT16_MAX;
volatile int8_t x216 = 4;
volatile int32_t t45 = 27;
uint32_t x217 = 1U;
uint8_t x219 = 1U;
uint8_t x222 = 104U;
int8_t x224 = INT8_MIN;
volatile uint64_t x231 = 15460955LLU;
uint64_t t48 = 3701200035410145LLU;
int32_t x235 = INT32_MAX;
static volatile int64_t t49 = 6650230386855LL;
int32_t x238 = 911209;
int32_t x239 = -29;
uint32_t x242 = 15939U;
int32_t x250 = -1;
static uint32_t t52 = 20U;
volatile int32_t x262 = INT32_MIN;
int16_t x266 = 7;
volatile int32_t t55 = 64;
int16_t x273 = INT16_MAX;
uint8_t x274 = 53U;
uint8_t x275 = 8U;
int8_t x281 = INT8_MAX;
volatile int16_t x282 = INT16_MAX;
volatile int64_t t57 = -955732845LL;
uint16_t x288 = 14571U;
static int16_t x292 = -1;
static volatile int32_t t59 = 4221;
int32_t x294 = 31865;
volatile uint32_t t60 = 23834045U;
int64_t x306 = -3LL;
int64_t t62 = 30414LL;
int8_t x311 = 50;
int32_t x312 = INT32_MIN;
int32_t x313 = INT32_MIN;
int64_t x318 = -1LL;
int8_t x319 = INT8_MAX;
volatile int32_t x321 = INT32_MIN;
int16_t x322 = 7;
static int8_t x327 = -1;
uint32_t x348 = UINT32_MAX;
volatile uint16_t x364 = 24U;
int16_t x366 = -10;
static int64_t x372 = -10LL;
int16_t x377 = INT16_MAX;
int8_t x385 = INT8_MIN;
int32_t x396 = -1;
static int32_t x397 = 2452;
uint64_t x411 = UINT64_MAX;
int16_t x412 = INT16_MIN;
int16_t x413 = -1;
static volatile int64_t x430 = -2LL;
volatile int64_t t87 = 15LL;
int16_t x446 = INT16_MIN;
volatile int16_t x452 = INT16_MIN;
uint8_t x457 = UINT8_MAX;
int64_t x463 = 51358858955071836LL;
uint32_t x469 = 96U;
static int64_t t95 = -379616577403LL;
static int16_t x476 = INT16_MIN;
static int8_t x484 = -1;
int16_t x490 = 1;
uint32_t x496 = 977U;


void f0(void) {
	int64_t x2 = INT64_MAX;
	uint16_t x3 = 0U;
	int8_t x4 = 4;
	static volatile int64_t t0 = 358250769105LL;

	t0 = (x1%((x2+x3)-x4));

	if (t0 != 122LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = -994532;
	int8_t x12 = INT8_MIN;
	uint64_t t1 = 12805292LLU;

	t1 = (x9%((x10+x11)-x12));

	if (t1 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x14 = -5082;
	static uint8_t x15 = 0U;
	int16_t x16 = -1;
	volatile uint32_t t2 = 1504827867U;

	t2 = (x13%((x14+x15)-x16));

	if (t2 != 74511U) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = UINT32_MAX;
	int64_t x18 = INT64_MIN;
	static int32_t x19 = INT32_MAX;
	static int64_t t3 = -192LL;

	t3 = (x17%((x18+x19)-x20));

	if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 11774U;
	int16_t x22 = INT16_MAX;
	static int16_t x24 = -1;
	uint32_t t4 = 241389287U;

	t4 = (x21%((x22+x23)-x24));

	if (t4 != 11774U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	uint16_t x31 = 1823U;
	int8_t x32 = -1;
	int32_t t5 = 245169;

	t5 = (x29%((x30+x31)-x32));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x37 = 76950477LLU;
	volatile int16_t x38 = INT16_MIN;
	int64_t x39 = -640404517633258LL;
	volatile int64_t x40 = -4158722LL;
	uint64_t t6 = 761145232473002063LLU;

	t6 = (x37%((x38+x39)-x40));

	if (t6 != 76950477LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x42 = 3147U;
	int16_t x43 = INT16_MIN;
	static int8_t x44 = INT8_MIN;
	static int32_t t7 = -437297738;

	t7 = (x41%((x42+x43)-x44));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = INT8_MAX;
	int8_t x47 = INT8_MIN;
	int8_t x48 = -1;
	volatile int32_t t8 = 344;

	t8 = (x45%((x46+x47)-x48));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 763U;
	volatile int8_t x51 = -1;
	uint32_t x52 = 12U;
	static uint32_t t9 = 11U;

	t9 = (x49%((x50+x51)-x52));

	if (t9 != 668U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x54 = 1U;
	volatile int64_t x55 = -1LL;
	volatile int8_t x56 = 7;
	volatile int64_t t10 = -55804507527906324LL;

	t10 = (x53%((x54+x55)-x56));

	if (t10 != 4LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = INT64_MIN;
	int16_t x59 = INT16_MAX;
	int8_t x60 = INT8_MAX;
	volatile int64_t t11 = 2591LL;

	t11 = (x57%((x58+x59)-x60));

	if (t11 != -57758LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x61 = UINT16_MAX;
	uint64_t x62 = 19122025351LLU;
	int64_t x63 = 75597105706737422LL;
	volatile int64_t x64 = -129LL;
	uint64_t t12 = 12255083LLU;

	t12 = (x61%((x62+x63)-x64));

	if (t12 != 65535LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x65 = INT64_MIN;
	uint64_t x66 = 4497546247876603906LLU;
	uint64_t x67 = UINT64_MAX;
	int16_t x68 = -195;

	t13 = (x65%((x66+x67)-x68));

	if (t13 != 228279541101567608LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x70 = UINT32_MAX;

	t14 = (x69%((x70+x71)-x72));

	if (t14 != 1043522782U) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x74 = 20U;
	uint64_t x75 = 4836477960502120LLU;
	int8_t x76 = -1;

	t15 = (x73%((x74+x75)-x76));

	if (t15 != 417132354385841LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x77 = 238U;
	static volatile int8_t x78 = INT8_MIN;
	static int8_t x79 = 1;
	static uint32_t x80 = UINT32_MAX;
	volatile uint32_t t16 = 9616U;

	t16 = (x77%((x78+x79)-x80));

	if (t16 != 238U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x82 = 9U;
	uint8_t x83 = UINT8_MAX;
	int32_t x84 = -1;

	t17 = (x81%((x82+x83)-x84));

	if (t17 != 218) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x87 = 1U;
	volatile int64_t t18 = 368LL;

	t18 = (x85%((x86+x87)-x88));

	if (t18 != 7LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x91 = UINT32_MAX;
	uint8_t x92 = 4U;

	t19 = (x89%((x90+x91)-x92));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = INT8_MIN;
	uint8_t x95 = 4U;
	int64_t x96 = -126LL;

	t20 = (x93%((x94+x95)-x96));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = -1LL;
	int16_t x99 = 3166;

	t21 = (x97%((x98+x99)-x100));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x105 = 34575785222945069LLU;
	static volatile int8_t x106 = -12;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = UINT16_MAX;
	volatile uint64_t t22 = 744282372999LLU;

	t22 = (x105%((x106+x107)-x108));

	if (t22 != 34575785222945069LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x111 = 1;

	t23 = (x109%((x110+x111)-x112));

	if (t23 != 2147483647U) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int32_t x114 = -1;
	volatile int8_t x116 = 12;
	volatile uint64_t t24 = 16164LLU;

	t24 = (x113%((x114+x115)-x116));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -230682;
	int64_t x118 = INT64_MIN;
	uint16_t x119 = 52U;
	int64_t t25 = -2LL;

	t25 = (x117%((x118+x119)-x120));

	if (t25 != -10LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 30268U;
	volatile int32_t x122 = INT32_MIN;
	volatile uint16_t x124 = 11978U;
	volatile int64_t t26 = 18LL;

	t26 = (x121%((x122+x123)-x124));

	if (t26 != 30268LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x129 = INT64_MAX;
	static uint64_t x130 = 674654628791LLU;
	uint64_t x131 = 244558LLU;
	uint64_t x132 = 7LLU;
	static volatile uint64_t t27 = 1936107426010298796LLU;

	t27 = (x129%((x130+x131)-x132));

	if (t27 != 647607198359LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x133 = 745LL;
	int32_t x134 = -1;
	uint32_t x135 = 1U;
	int64_t x136 = 131499492172LL;
	static volatile int64_t t28 = -1LL;

	t28 = (x133%((x134+x135)-x136));

	if (t28 != 745LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x141 = INT16_MAX;
	static int8_t x142 = INT8_MAX;
	static volatile int8_t x143 = INT8_MAX;
	uint32_t x144 = 503219465U;
	uint32_t t29 = 475206U;

	t29 = (x141%((x142+x143)-x144));

	if (t29 != 32767U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x146 = 0U;
	uint64_t x147 = UINT64_MAX;
	volatile int32_t x148 = -65837042;
	static uint64_t t30 = 1150067397852LLU;

	t30 = (x145%((x146+x147)-x148));

	if (t30 != 13423074LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = -1;
	int8_t x152 = INT8_MAX;
	static int32_t t31 = -1;

	t31 = (x149%((x150+x151)-x152));

	if (t31 != 65) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x154 = 34043U;
	int32_t x156 = -1;

	t32 = (x153%((x154+x155)-x156));

	if (t32 != 5LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x157 = INT8_MIN;
	int8_t x158 = -1;
	int8_t x159 = INT8_MIN;
	int16_t x160 = INT16_MIN;
	volatile int32_t t33 = 138;

	t33 = (x157%((x158+x159)-x160));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = 54779982187991458LL;
	uint64_t x162 = UINT64_MAX;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t34 = 29047396860289LLU;

	t34 = (x161%((x162+x163)-x164));

	if (t34 != 18394LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = 104609283;
	volatile int16_t x166 = -1;
	volatile uint64_t x167 = 102LLU;

	t35 = (x165%((x166+x167)-x168));

	if (t35 != 104609283LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x169 = 24;
	uint16_t x170 = 26U;
	volatile uint32_t x171 = 882U;
	volatile int64_t x172 = -1LL;
	int64_t t36 = 1121933491LL;

	t36 = (x169%((x170+x171)-x172));

	if (t36 != 24LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x173 = INT32_MAX;
	int16_t x174 = -1;
	volatile int8_t x175 = -15;
	int8_t x176 = 1;
	static volatile int32_t t37 = -2738;

	t37 = (x173%((x174+x175)-x176));

	if (t37 != 8) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x177 = -15;
	int16_t x178 = INT16_MIN;
	uint16_t x179 = 12860U;
	int64_t x180 = -7208532LL;
	static int64_t t38 = 692272803126LL;

	t38 = (x177%((x178+x179)-x180));

	if (t38 != -15LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = -1;
	uint64_t x182 = UINT64_MAX;

	t39 = (x181%((x182+x183)-x184));

	if (t39 != 9LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x186 = INT64_MIN;
	volatile uint64_t x187 = 1128440039811781355LLU;
	static int16_t x188 = 2653;
	uint64_t t40 = 70587639576550LLU;

	t40 = (x185%((x186+x187)-x188));

	if (t40 != 595LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MIN;
	int16_t x191 = -25;
	int64_t x192 = 111854789957736LL;
	volatile int64_t t41 = 10LL;

	t41 = (x189%((x190+x191)-x192));

	if (t41 != -128LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x193 = INT16_MIN;
	uint16_t x194 = 5097U;
	int32_t x195 = INT32_MIN;
	int32_t x196 = -1;
	volatile int32_t t42 = -489;

	t42 = (x193%((x194+x195)-x196));

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile uint64_t x204 = 122862067661133LLU;

	t43 = (x201%((x202+x203)-x204));

	if (t43 != 122859920177216LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x209 = INT64_MIN;
	int32_t x210 = INT32_MAX;
	static uint32_t x211 = 24057006U;
	volatile int64_t t44 = -68933161355LL;

	t44 = (x209%((x210+x211)-x212));

	if (t44 != -1428485291LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x213 = 974U;

	t45 = (x213%((x214+x215)-x216));

	if (t45 != 974) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x218 = INT64_MIN;
	int16_t x220 = -1;
	volatile int64_t t46 = -109317961015116LL;

	t46 = (x217%((x218+x219)-x220));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x221 = UINT32_MAX;
	uint64_t x223 = 11LLU;
	volatile uint64_t t47 = 1052994494500734LLU;

	t47 = (x221%((x222+x223)-x224));

	if (t47 != 129LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x229 = 1;
	static uint8_t x230 = UINT8_MAX;
	int16_t x232 = -235;

	t48 = (x229%((x230+x231)-x232));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x233 = -2184907685730985LL;
	int64_t x234 = -1LL;
	int8_t x236 = INT8_MIN;

	t49 = (x233%((x234+x235)-x236));

	if (t49 != -1859485261LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x237 = INT16_MAX;
	static int16_t x240 = INT16_MAX;
	int32_t t50 = 0;

	t50 = (x237%((x238+x239)-x240));

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x241 = INT16_MAX;
	uint8_t x243 = 85U;
	uint16_t x244 = 26U;
	uint32_t t51 = 13U;

	t51 = (x241%((x242+x243)-x244));

	if (t51 != 771U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = INT16_MIN;
	uint32_t x251 = 957142U;
	static volatile uint8_t x252 = UINT8_MAX;

	t52 = (x249%((x250+x251)-x252));

	if (t52 != 430160U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = 1;
	uint16_t x254 = UINT16_MAX;
	int8_t x255 = INT8_MAX;
	static int8_t x256 = 2;
	int32_t t53 = -209032;

	t53 = (x253%((x254+x255)-x256));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x261 = INT64_MAX;
	uint32_t x263 = UINT32_MAX;
	volatile uint8_t x264 = 104U;
	int64_t t54 = -871329242055091036LL;

	t54 = (x261%((x262+x263)-x264));

	if (t54 != 22049LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x265 = -1;
	int16_t x267 = -14003;
	uint8_t x268 = UINT8_MAX;

	t55 = (x265%((x266+x267)-x268));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x276 = -132978271LL;
	int64_t t56 = 1211156478607565LL;

	t56 = (x273%((x274+x275)-x276));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x283 = UINT8_MAX;
	int64_t x284 = -21519779030LL;

	t57 = (x281%((x282+x283)-x284));

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x285 = INT64_MAX;
	uint16_t x286 = 5U;
	int8_t x287 = -1;
	volatile int64_t t58 = -280139234294584LL;

	t58 = (x285%((x286+x287)-x288));

	if (t58 != 3822LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x289 = INT8_MAX;
	int32_t x290 = 19;
	static uint8_t x291 = UINT8_MAX;

	t59 = (x289%((x290+x291)-x292));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x293 = 3110U;
	int8_t x295 = -30;
	volatile uint32_t x296 = 611U;

	t60 = (x293%((x294+x295)-x296));

	if (t60 != 3110U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x297 = UINT32_MAX;
	static int8_t x298 = -1;
	int64_t x299 = -247465901414540LL;
	int32_t x300 = 213;
	volatile int64_t t61 = -171394279455LL;

	t61 = (x297%((x298+x299)-x300));

	if (t61 != 4294967295LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x305 = INT32_MIN;
	int64_t x307 = -105836LL;
	uint8_t x308 = UINT8_MAX;

	t62 = (x305%((x306+x307)-x308));

	if (t62 != -34994LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x309 = 888780810LL;
	static volatile uint64_t x310 = 230497810044876LLU;
	static volatile uint64_t t63 = 45585118128189LLU;

	t63 = (x309%((x310+x311)-x312));

	if (t63 != 888780810LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x314 = UINT8_MAX;
	uint64_t x315 = 7LLU;
	volatile int64_t x316 = -587671261469LL;
	volatile uint64_t t64 = 983336989LLU;

	t64 = (x313%((x314+x315)-x316));

	if (t64 != 565838616146LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x317 = 71U;
	uint64_t x320 = 1584357924LLU;
	volatile uint64_t t65 = 495638981861726LLU;

	t65 = (x317%((x318+x319)-x320));

	if (t65 != 71LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x323 = -409;
	static int8_t x324 = INT8_MIN;
	volatile int32_t t66 = 243137;

	t66 = (x321%((x322+x323)-x324));

	if (t66 != -154) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x325 = 30U;
	int32_t x326 = -1;
	volatile uint8_t x328 = UINT8_MAX;
	volatile int32_t t67 = -15580;

	t67 = (x325%((x326+x327)-x328));

	if (t67 != 30) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x333 = -386231303360433LL;
	uint8_t x334 = UINT8_MAX;
	volatile uint64_t x335 = 106608593614588825LLU;
	volatile int64_t x336 = -1LL;
	uint64_t t68 = 817068884843243197LLU;

	t68 = (x333%((x334+x335)-x336));

	if (t68 != 3071147082280170LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x341 = 8;
	static int32_t x342 = 177;
	int8_t x343 = INT8_MIN;
	volatile uint8_t x344 = 21U;
	static int32_t t69 = -8;

	t69 = (x341%((x342+x343)-x344));

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x345 = UINT16_MAX;
	static int8_t x346 = INT8_MAX;
	int8_t x347 = INT8_MAX;
	uint32_t t70 = 1522418126U;

	t70 = (x345%((x346+x347)-x348));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x349 = 1269;
	static int64_t x350 = INT64_MAX;
	int64_t x351 = INT64_MIN;
	uint8_t x352 = UINT8_MAX;
	int64_t t71 = -157LL;

	t71 = (x349%((x350+x351)-x352));

	if (t71 != 245LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x353 = UINT16_MAX;
	uint32_t x354 = 11179657U;
	int16_t x355 = INT16_MIN;
	volatile int64_t x356 = INT64_MAX;
	volatile int64_t t72 = -1032550LL;

	t72 = (x353%((x354+x355)-x356));

	if (t72 != 65535LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x361 = 59U;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = -1;
	uint64_t t73 = 5584911073343345697LLU;

	t73 = (x361%((x362+x363)-x364));

	if (t73 != 59LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x365 = INT64_MAX;
	int64_t x367 = 47715LL;
	volatile int16_t x368 = 1517;
	int64_t t74 = -28639545LL;

	t74 = (x365%((x366+x367)-x368));

	if (t74 != 16531LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x369 = INT64_MIN;
	int64_t x370 = INT64_MIN;
	static uint16_t x371 = UINT16_MAX;
	int64_t t75 = -95418167LL;

	t75 = (x369%((x370+x371)-x372));

	if (t75 != -65545LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x378 = 7242U;
	int8_t x379 = 7;
	static volatile uint32_t x380 = 42659U;
	uint32_t t76 = 445928U;

	t76 = (x377%((x378+x379)-x380));

	if (t76 != 32767U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x381 = -1;
	int32_t x382 = -3788;
	static volatile uint8_t x383 = UINT8_MAX;
	int8_t x384 = -1;
	volatile int32_t t77 = 257;

	t77 = (x381%((x382+x383)-x384));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x386 = -1;
	volatile int8_t x387 = 1;
	volatile int64_t x388 = -906LL;
	volatile int64_t t78 = -16553965792828359LL;

	t78 = (x385%((x386+x387)-x388));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x393 = 8U;
	uint16_t x394 = 28U;
	int64_t x395 = INT64_MIN;
	volatile int64_t t79 = -257365430218LL;

	t79 = (x393%((x394+x395)-x396));

	if (t79 != 8LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x398 = -1;
	int32_t x399 = -1;
	uint32_t x400 = 49U;
	volatile uint32_t t80 = 316191211U;

	t80 = (x397%((x398+x399)-x400));

	if (t80 != 2452U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x401 = INT32_MAX;
	static int8_t x402 = INT8_MAX;
	int32_t x403 = INT32_MIN;
	int64_t x404 = -1794464LL;
	volatile int64_t t81 = 15557LL;

	t81 = (x401%((x402+x403)-x404));

	if (t81 != 1794590LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x409 = 241;
	volatile uint16_t x410 = UINT16_MAX;
	uint64_t t82 = 2LLU;

	t82 = (x409%((x410+x411)-x412));

	if (t82 != 241LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x414 = UINT32_MAX;
	volatile uint64_t x415 = 93254216LLU;
	static int16_t x416 = -2;
	volatile uint64_t t83 = 324LLU;

	t83 = (x413%((x414+x415)-x416));

	if (t83 != 4169559877LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x417 = 2173;
	int16_t x418 = -1;
	static uint8_t x419 = UINT8_MAX;
	int32_t x420 = -5905742;
	volatile int32_t t84 = 21;

	t84 = (x417%((x418+x419)-x420));

	if (t84 != 2173) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x425 = INT8_MIN;
	int16_t x426 = INT16_MIN;
	int64_t x427 = -1LL;
	static int32_t x428 = -2;
	volatile int64_t t85 = -17896LL;

	t85 = (x425%((x426+x427)-x428));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x429 = 21U;
	int8_t x431 = INT8_MAX;
	volatile uint8_t x432 = 0U;
	volatile int64_t t86 = -298825LL;

	t86 = (x429%((x430+x431)-x432));

	if (t86 != 21LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x433 = INT64_MIN;
	int8_t x434 = -1;
	static int32_t x435 = 2034530;
	volatile uint16_t x436 = 3509U;

	t87 = (x433%((x434+x435)-x436));

	if (t87 != -596268LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x437 = INT8_MAX;
	int16_t x438 = INT16_MAX;
	static int16_t x439 = INT16_MAX;
	volatile int8_t x440 = INT8_MIN;
	int32_t t88 = 4215;

	t88 = (x437%((x438+x439)-x440));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = UINT64_MAX;
	static uint16_t x442 = 104U;
	uint64_t x443 = UINT64_MAX;
	uint32_t x444 = 99951700U;
	uint64_t t89 = 1516267317LLU;

	t89 = (x441%((x442+x443)-x444));

	if (t89 != 99951596LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x445 = -8769;
	int8_t x447 = INT8_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	volatile uint32_t t90 = 122635U;

	t90 = (x445%((x446+x447)-x448));

	if (t90 != 24126U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x449 = 1U;
	int8_t x450 = 1;
	int64_t x451 = INT64_MIN;
	int64_t t91 = -503577482438LL;

	t91 = (x449%((x450+x451)-x452));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x458 = INT8_MIN;
	static int32_t x459 = 1;
	volatile int8_t x460 = -21;
	static volatile int32_t t92 = 19;

	t92 = (x457%((x458+x459)-x460));

	if (t92 != 43) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x461 = INT8_MIN;
	uint16_t x462 = 7U;
	uint32_t x464 = UINT32_MAX;
	volatile int64_t t93 = -116109261188392LL;

	t93 = (x461%((x462+x463)-x464));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x465 = -10109432LL;
	static int32_t x466 = 119927;
	static int32_t x467 = 20457;
	int32_t x468 = 2;
	static int64_t t94 = 247984665295004LL;

	t94 = (x465%((x466+x467)-x468));

	if (t94 != -1928LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x470 = 0;
	int64_t x471 = -1LL;
	int64_t x472 = -674869949937502LL;

	t95 = (x469%((x470+x471)-x472));

	if (t95 != 96LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x473 = INT32_MIN;
	volatile uint16_t x474 = 63U;
	static int64_t x475 = INT64_MIN;
	static int64_t t96 = -5411834295LL;

	t96 = (x473%((x474+x475)-x476));

	if (t96 != -2147483648LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x481 = UINT8_MAX;
	uint8_t x482 = 6U;
	volatile int16_t x483 = 272;
	int32_t t97 = 81038899;

	t97 = (x481%((x482+x483)-x484));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x489 = INT8_MIN;
	int8_t x491 = -1;
	int16_t x492 = 10;
	volatile int32_t t98 = -219;

	t98 = (x489%((x490+x491)-x492));

	if (t98 != -8) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x493 = 5U;
	uint32_t x494 = UINT32_MAX;
	uint16_t x495 = 7904U;
	volatile uint32_t t99 = 1026889827U;

	t99 = (x493%((x494+x495)-x496));

	if (t99 != 5U) { NG(); } else { ; }
	
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

