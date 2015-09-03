#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint8_t x14 = 1U;
uint32_t x16 = 19320697U;
static int8_t x18 = INT8_MIN;
static int64_t x19 = INT64_MIN;
int64_t t3 = 9384339696LL;
uint16_t x25 = 53U;
int8_t x32 = 4;
uint32_t t6 = 31226U;
static int64_t x39 = INT64_MAX;
int32_t x44 = INT32_MIN;
int32_t t8 = 2;
int8_t x47 = 1;
int64_t x52 = 64450534LL;
uint64_t x53 = UINT64_MAX;
static int16_t x57 = -1;
uint32_t x58 = 1815450U;
int32_t x69 = -40;
volatile int32_t t15 = -7581000;
uint32_t x77 = 6746U;
int32_t x79 = INT32_MIN;
uint16_t x81 = UINT16_MAX;
volatile int16_t x84 = -232;
volatile uint64_t t18 = 255912341919LLU;
static int32_t x93 = 14;
uint64_t x94 = 1786465346245LLU;
volatile int16_t x96 = -2;
static int64_t t21 = -1043270152631LL;
int8_t x112 = INT8_MAX;
uint8_t x113 = 1U;
volatile int32_t x118 = -4;
uint64_t x120 = 22LLU;
int64_t x122 = INT64_MAX;
volatile int32_t x150 = -1;
volatile int32_t x159 = 0;
static int8_t x160 = -1;
static int8_t x161 = INT8_MIN;
volatile uint16_t x164 = 8724U;
volatile uint8_t x174 = 56U;
int16_t x175 = -1;
uint16_t x177 = UINT16_MAX;
int32_t x179 = -1;
int32_t x186 = 1;
uint32_t x197 = UINT32_MAX;
int32_t x200 = -1;
uint32_t t43 = 632717U;
static uint32_t x203 = 317461837U;
uint32_t x205 = 4003U;
int16_t x208 = INT16_MIN;
int16_t x210 = -1;
static int32_t t46 = 217777;
int64_t x223 = 2652297LL;
static int32_t x234 = INT32_MIN;
static volatile int64_t x235 = INT64_MAX;
uint8_t x237 = 106U;
static int32_t x240 = INT32_MIN;
int64_t t52 = -4LL;
uint16_t x246 = UINT16_MAX;
static int64_t x250 = INT64_MIN;
volatile int32_t t56 = -12;
int32_t x266 = -1;
int32_t x267 = INT32_MAX;
uint64_t x276 = 7169507215LLU;
uint32_t x278 = UINT32_MAX;
volatile int32_t x285 = INT32_MIN;
volatile uint8_t x292 = UINT8_MAX;
volatile uint64_t t64 = 29779569885649LLU;
int32_t x300 = -1;
int32_t x302 = 0;
int64_t x307 = -3547479LL;
int8_t x315 = INT8_MIN;
volatile uint8_t x320 = 49U;
uint8_t x326 = 52U;
static int8_t x333 = -1;
int64_t x334 = INT64_MIN;
int16_t x337 = INT16_MAX;
int64_t t75 = -136437176148LL;
volatile uint16_t x347 = 8621U;
static uint8_t x353 = UINT8_MAX;
int64_t t78 = 64007038376612665LL;
int32_t x362 = -424741;
volatile int16_t x366 = INT16_MIN;
static int8_t x388 = 12;
int32_t x399 = INT32_MAX;
int16_t x409 = INT16_MIN;
volatile int16_t x411 = 10;
static int32_t x412 = INT32_MAX;
static volatile uint32_t t89 = 23479U;
volatile int32_t x417 = INT32_MAX;
int64_t x423 = INT64_MAX;
int64_t t91 = -38LL;
static volatile uint32_t t92 = 1U;
uint32_t x431 = 274022632U;
static uint64_t t94 = 45810294LLU;
uint16_t x439 = UINT16_MAX;
int64_t x440 = -1LL;
volatile int8_t x445 = -1;
int8_t x446 = -11;
uint64_t t97 = 91LLU;
int8_t x454 = INT8_MIN;
volatile uint64_t t98 = 76799329LLU;
int8_t x458 = -1;


void f0(void) {
	int32_t x5 = 1569;
	int8_t x6 = INT8_MIN;
	int32_t x7 = INT32_MAX;
	int32_t x8 = INT32_MIN;
	volatile int32_t t0 = -7346031;

	t0 = (x5+((x6|x7)%x8));

	if (t0 != 1568) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MIN;
	volatile int8_t x10 = INT8_MAX;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;
	int32_t t1 = -253300021;

	t1 = (x9+((x10|x11)%x12));

	if (t1 != -65409) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int64_t x15 = INT64_MIN;
	volatile int64_t t2 = -526148512LL;

	t2 = (x13+((x14|x15)%x16));

	if (t2 != -13643275LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 9592U;
	volatile uint16_t x20 = 2972U;

	t3 = (x17+((x18|x19)%x20));

	if (t3 != 9464LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	int16_t x23 = -1;
	int16_t x24 = -1;
	int32_t t4 = -829723351;

	t4 = (x21+((x22|x23)%x24));

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x26 = INT8_MIN;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -1LL;
	volatile int64_t t5 = 2LL;

	t5 = (x25+((x26|x27)%x28));

	if (t5 != 53LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -26;
	volatile int8_t x30 = -7;
	uint32_t x31 = 0U;

	t6 = (x29+((x30|x31)%x32));

	if (t6 != 4294967271U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x37 = -14;
	volatile int64_t x38 = INT64_MIN;
	static int8_t x40 = INT8_MIN;
	volatile int64_t t7 = -63319013426LL;

	t7 = (x37+((x38|x39)%x40));

	if (t7 != -15LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = 227U;
	volatile uint8_t x42 = 9U;
	uint16_t x43 = UINT16_MAX;

	t8 = (x41+((x42|x43)%x44));

	if (t8 != 65762) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	static int16_t x46 = INT16_MIN;
	int8_t x48 = -1;
	volatile int32_t t9 = -3389;

	t9 = (x45+((x46|x47)%x48));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = 700U;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	uint64_t t10 = 91602368LLU;

	t10 = (x49+((x50|x51)%x52));

	if (t10 != 61280809LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x54 = INT16_MAX;
	int8_t x55 = INT8_MAX;
	static int16_t x56 = -589;
	uint64_t t11 = 423753232982LLU;

	t11 = (x53+((x54|x55)%x56));

	if (t11 != 371LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int64_t x59 = INT64_MIN;
	static volatile int64_t x60 = 113LL;
	volatile int64_t t12 = -6447469LL;

	t12 = (x57+((x58|x59)%x60));

	if (t12 != -24LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = -544;
	volatile int16_t x62 = -1;
	static volatile int16_t x63 = 0;
	int16_t x64 = INT16_MAX;
	volatile int32_t t13 = -1;

	t13 = (x61+((x62|x63)%x64));

	if (t13 != -545) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	int16_t x68 = -1;
	volatile int32_t t14 = INT32_MIN;

	t14 = (x65+((x66|x67)%x68));

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = -1;
	int32_t x71 = -164;
	int8_t x72 = -26;

	t15 = (x69+((x70|x71)%x72));

	if (t15 != -41) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	static volatile int64_t x74 = -3642655373659LL;
	uint32_t x75 = 4964109U;
	int16_t x76 = INT16_MIN;
	int64_t t16 = 2363429075022311LL;

	t16 = (x73+((x74|x75)%x76));

	if (t16 != -49235LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x78 = INT32_MIN;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t17 = 100433U;

	t17 = (x77+((x78|x79)%x80));

	if (t17 != 6746U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x82 = INT16_MAX;
	static volatile uint64_t x83 = 13120976570LLU;

	t18 = (x81+((x82|x83)%x84));

	if (t18 != 13121060862LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = 64U;
	int16_t x90 = -1;
	int64_t x91 = 2LL;
	int16_t x92 = 6;
	volatile int64_t t19 = 7321770951779LL;

	t19 = (x89+((x90|x91)%x92));

	if (t19 != 63LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x95 = 885U;
	uint64_t t20 = 7566957767749751LLU;

	t20 = (x93+((x94|x95)%x96));

	if (t20 != 1786465346563LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = INT64_MIN;
	volatile int32_t x98 = INT32_MAX;
	static uint16_t x99 = 1116U;
	int64_t x100 = INT64_MAX;

	t21 = (x97+((x98|x99)%x100));

	if (t21 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = 0U;
	uint64_t x102 = 6093458747126747374LLU;
	int64_t x103 = INT64_MAX;
	static volatile int64_t x104 = INT64_MAX;
	static uint64_t t22 = 768935LLU;

	t22 = (x101+((x102|x103)%x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = -103;
	uint64_t x106 = UINT64_MAX;
	static int32_t x107 = INT32_MAX;
	volatile int64_t x108 = -206LL;
	volatile uint64_t t23 = 549074347862LLU;

	t23 = (x105+((x106|x107)%x108));

	if (t23 != 102LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = -1;
	int8_t x110 = INT8_MAX;
	volatile int32_t x111 = INT32_MAX;
	volatile int32_t t24 = 64573758;

	t24 = (x109+((x110|x111)%x112));

	if (t24 != 6) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x114 = 766U;
	int32_t x115 = INT32_MAX;
	uint32_t x116 = 468554365U;
	uint32_t t25 = 1U;

	t25 = (x113+((x114|x115)%x116));

	if (t25 != 273266188U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x117 = UINT32_MAX;
	int8_t x119 = INT8_MAX;
	volatile uint64_t t26 = 3LLU;

	t26 = (x117+((x118|x119)%x120));

	if (t26 != 4294967310LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = UINT16_MAX;
	static int16_t x123 = -1;
	uint32_t x124 = 777U;
	volatile int64_t t27 = 12LL;

	t27 = (x121+((x122|x123)%x124));

	if (t27 != 65534LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = 24U;
	uint8_t x130 = UINT8_MAX;
	uint32_t x131 = 2217691U;
	int64_t x132 = -1LL;
	volatile int64_t t28 = -66260LL;

	t28 = (x129+((x130|x131)%x132));

	if (t28 != 24LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x133 = -1;
	int64_t x134 = 2969070LL;
	volatile int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	int64_t t29 = -4082362433LL;

	t29 = (x133+((x134|x135)%x136));

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x137 = -1;
	volatile int32_t x138 = INT32_MIN;
	uint16_t x139 = 104U;
	volatile int16_t x140 = INT16_MIN;
	static int32_t t30 = -130531;

	t30 = (x137+((x138|x139)%x140));

	if (t30 != -32665) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MAX;
	int16_t x142 = INT16_MIN;
	uint8_t x143 = 0U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t31 = -52620655;

	t31 = (x141+((x142|x143)%x144));

	if (t31 != 32767) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = INT32_MAX;
	int16_t x147 = -1;
	volatile uint16_t x148 = 69U;
	volatile int32_t t32 = -6;

	t32 = (x145+((x146|x147)%x148));

	if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	int64_t x151 = INT64_MIN;
	int8_t x152 = -1;
	static volatile int64_t t33 = -1LL;

	t33 = (x149+((x150|x151)%x152));

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = INT64_MAX;
	static int32_t x158 = INT32_MIN;
	int64_t t34 = INT64_MAX;

	t34 = (x157+((x158|x159)%x160));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x162 = 2;
	int64_t x163 = 73172259575LL;
	int64_t t35 = 128361LL;

	t35 = (x161+((x162|x163)%x164));

	if (t35 != 6063LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x165 = 3U;
	uint64_t x166 = 53850803384910LLU;
	static uint64_t x167 = 37977997752684LLU;
	uint32_t x168 = 84442U;
	volatile uint64_t t36 = 1534153865LLU;

	t36 = (x165+((x166|x167)%x168));

	if (t36 != 8197LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = 9307769209LL;
	uint8_t x170 = 10U;
	int32_t x171 = INT32_MAX;
	volatile int16_t x172 = INT16_MAX;
	static int64_t t37 = 2990825241461922LL;

	t37 = (x169+((x170|x171)%x172));

	if (t37 != 9307769210LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = -1;
	int64_t x176 = -8033122634661585LL;
	int64_t t38 = -104152283520052LL;

	t38 = (x173+((x174|x175)%x176));

	if (t38 != -2LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x178 = 51U;
	static volatile uint32_t x180 = 1734U;
	uint32_t t39 = 876U;

	t39 = (x177+((x178|x179)%x180));

	if (t39 != 65688U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = INT16_MAX;
	int8_t x182 = 33;
	static int32_t x183 = INT32_MIN;
	volatile int64_t x184 = INT64_MIN;
	int64_t t40 = 597666113LL;

	t40 = (x181+((x182|x183)%x184));

	if (t40 != -2147450848LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MIN;
	int64_t t41 = 230790801872592816LL;

	t41 = (x185+((x186|x187)%x188));

	if (t41 != -2147450881LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = INT8_MAX;
	int16_t x194 = INT16_MAX;
	int32_t x195 = INT32_MIN;
	volatile int32_t x196 = INT32_MIN;
	int32_t t42 = -9241106;

	t42 = (x193+((x194|x195)%x196));

	if (t42 != -2147450754) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x198 = 3737892U;
	volatile int8_t x199 = -7;

	t43 = (x197+((x198|x199)%x200));

	if (t43 != 4294967292U) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = INT64_MIN;
	uint64_t x202 = 15LLU;
	int32_t x204 = -1;
	static volatile uint64_t t44 = 72108261029LLU;

	t44 = (x201+((x202|x203)%x204));

	if (t44 != 9223372037172237647LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x206 = INT8_MIN;
	int32_t x207 = 74409;
	static volatile uint32_t t45 = 6333819U;

	t45 = (x205+((x206|x207)%x208));

	if (t45 != 3916U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = -9;
	uint8_t x211 = 67U;
	uint8_t x212 = UINT8_MAX;

	t46 = (x209+((x210|x211)%x212));

	if (t46 != -10) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 32903030816952354LLU;
	volatile int16_t x214 = -1240;
	uint8_t x215 = 4U;
	static int64_t x216 = -1LL;
	static uint64_t t47 = 2945407392LLU;

	t47 = (x213+((x214|x215)%x216));

	if (t47 != 32903030816952354LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x217 = -28633;
	uint64_t x218 = 519247947LLU;
	static uint8_t x219 = 0U;
	volatile uint8_t x220 = 3U;
	volatile uint64_t t48 = 7382614827503013LLU;

	t48 = (x217+((x218|x219)%x220));

	if (t48 != 18446744073709522983LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	volatile uint8_t x224 = UINT8_MAX;
	volatile int64_t t49 = -13036691LL;

	t49 = (x221+((x222|x223)%x224));

	if (t49 != -32769LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x233 = INT8_MIN;
	int32_t x236 = INT32_MAX;
	int64_t t50 = -3LL;

	t50 = (x233+((x234|x235)%x236));

	if (t50 != -129LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x238 = UINT16_MAX;
	volatile int8_t x239 = -6;
	int32_t t51 = -3837442;

	t51 = (x237+((x238|x239)%x240));

	if (t51 != 105) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x241 = INT8_MIN;
	static int16_t x242 = -317;
	static int64_t x243 = INT64_MIN;
	uint32_t x244 = 3U;

	t52 = (x241+((x242|x243)%x244));

	if (t52 != -130LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint8_t x245 = 1U;
	int16_t x247 = 900;
	volatile uint64_t x248 = 4947933296521831551LLU;
	volatile uint64_t t53 = 121108065191963141LLU;

	t53 = (x245+((x246|x247)%x248));

	if (t53 != 65536LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = 20;
	int32_t x251 = -1;
	static int8_t x252 = INT8_MIN;
	static volatile int64_t t54 = -5015731LL;

	t54 = (x249+((x250|x251)%x252));

	if (t54 != 19LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	int32_t x256 = 3777;
	int64_t t55 = 3929915524517673LL;

	t55 = (x253+((x254|x255)%x256));

	if (t55 != -129LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x257 = INT16_MAX;
	int16_t x258 = 3736;
	int16_t x259 = -7;
	static int8_t x260 = 16;

	t56 = (x257+((x258|x259)%x260));

	if (t56 != 32760) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x261 = 3;
	int64_t x262 = 52940155LL;
	int16_t x263 = INT16_MAX;
	static int32_t x264 = INT32_MAX;
	int64_t t57 = 0LL;

	t57 = (x261+((x262|x263)%x264));

	if (t57 != 52953090LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x265 = INT32_MIN;
	int64_t x268 = -239718168886394414LL;
	volatile int64_t t58 = -1398757470687983632LL;

	t58 = (x265+((x266|x267)%x268));

	if (t58 != -2147483649LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x269 = 2LLU;
	int32_t x270 = 201284;
	int64_t x271 = -1LL;
	volatile int16_t x272 = INT16_MIN;
	uint64_t t59 = 56243253611433776LLU;

	t59 = (x269+((x270|x271)%x272));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x273 = 35U;
	volatile int32_t x274 = -873885;
	int8_t x275 = -1;
	uint64_t t60 = 133302376LLU;

	t60 = (x273+((x274|x275)%x276));

	if (t60 != 3199070730LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MIN;
	uint64_t x279 = 1LLU;
	volatile uint8_t x280 = UINT8_MAX;
	uint64_t t61 = 1LLU;

	t61 = (x277+((x278|x279)%x280));

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x281 = UINT16_MAX;
	int16_t x282 = -1;
	volatile int64_t x283 = -1LL;
	int16_t x284 = INT16_MIN;
	int64_t t62 = -364740617502780LL;

	t62 = (x281+((x282|x283)%x284));

	if (t62 != 65534LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x286 = -1;
	int8_t x287 = INT8_MAX;
	int16_t x288 = -1;
	volatile int32_t t63 = INT32_MIN;

	t63 = (x285+((x286|x287)%x288));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 134963084LLU;
	volatile uint16_t x290 = 51U;
	static int32_t x291 = INT32_MAX;

	t64 = (x289+((x290|x291)%x292));

	if (t64 != 134963211LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	int8_t x294 = INT8_MIN;
	uint64_t x295 = 7863LLU;
	static int16_t x296 = -176;
	volatile uint64_t t65 = 887877362059203710LLU;

	t65 = (x293+((x294|x295)%x296));

	if (t65 != 9223372036854775911LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x297 = 3U;
	static int64_t x298 = INT64_MAX;
	uint32_t x299 = 2U;
	volatile int64_t t66 = 2321849LL;

	t66 = (x297+((x298|x299)%x300));

	if (t66 != 3LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x301 = INT8_MIN;
	uint32_t x303 = 110297U;
	static uint16_t x304 = UINT16_MAX;
	volatile uint32_t t67 = 14101913U;

	t67 = (x301+((x302|x303)%x304));

	if (t67 != 44634U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x305 = 68U;
	static int32_t x306 = -1;
	int16_t x308 = -1376;
	int64_t t68 = -677872999318LL;

	t68 = (x305+((x306|x307)%x308));

	if (t68 != 67LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x313 = 14424U;
	static uint8_t x314 = 1U;
	uint64_t x316 = 222945118498232LLU;
	static uint64_t t69 = 665LLU;

	t69 = (x313+((x314|x315)%x316));

	if (t69 != 42024047352001LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x317 = 396U;
	static uint8_t x318 = 1U;
	static uint32_t x319 = UINT32_MAX;
	static volatile uint32_t t70 = 160U;

	t70 = (x317+((x318|x319)%x320));

	if (t70 != 434U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x321 = INT16_MIN;
	static uint8_t x322 = 0U;
	static uint32_t x323 = 494U;
	uint8_t x324 = UINT8_MAX;
	volatile uint32_t t71 = 697367U;

	t71 = (x321+((x322|x323)%x324));

	if (t71 != 4294934767U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x325 = 74960192U;
	int64_t x327 = INT64_MIN;
	int64_t x328 = 40635187890262052LL;
	int64_t t72 = -1587773LL;

	t72 = (x325+((x326|x327)%x328));

	if (t72 != -39819573580591812LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x335 = -1;
	int16_t x336 = INT16_MIN;
	volatile int64_t t73 = 9713008800602140LL;

	t73 = (x333+((x334|x335)%x336));

	if (t73 != -2LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x338 = -3;
	volatile uint16_t x339 = UINT16_MAX;
	int8_t x340 = -1;
	int32_t t74 = -6317;

	t74 = (x337+((x338|x339)%x340));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = 251LL;
	static int8_t x342 = INT8_MAX;
	uint32_t x343 = 120368438U;
	int32_t x344 = -515806543;

	t75 = (x341+((x342|x343)%x344));

	if (t75 != 120368762LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x345 = UINT8_MAX;
	volatile uint32_t x346 = 23410U;
	uint16_t x348 = UINT16_MAX;
	uint32_t t76 = 1057240793U;

	t76 = (x345+((x346|x347)%x348));

	if (t76 != 31998U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x354 = INT16_MIN;
	static int64_t x355 = INT64_MAX;
	int64_t x356 = INT64_MAX;
	volatile int64_t t77 = 1042543372648747195LL;

	t77 = (x353+((x354|x355)%x356));

	if (t77 != 254LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x357 = INT64_MAX;
	int8_t x358 = INT8_MIN;
	static volatile int16_t x359 = -434;
	uint16_t x360 = 57U;

	t78 = (x357+((x358|x359)%x360));

	if (t78 != 9223372036854775757LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x361 = 2U;
	static uint16_t x363 = 56U;
	int8_t x364 = INT8_MAX;
	uint32_t t79 = 41405212U;

	t79 = (x361+((x362|x363)%x364));

	if (t79 != 4294967277U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x365 = -3;
	static uint8_t x367 = UINT8_MAX;
	int32_t x368 = -81229;
	int32_t t80 = -9935084;

	t80 = (x365+((x366|x367)%x368));

	if (t80 != -32516) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x369 = -113;
	volatile int8_t x370 = INT8_MAX;
	int16_t x371 = INT16_MAX;
	int32_t x372 = INT32_MIN;
	int32_t t81 = 1136;

	t81 = (x369+((x370|x371)%x372));

	if (t81 != 32654) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x377 = UINT8_MAX;
	int16_t x378 = -192;
	volatile uint64_t x379 = 4172686055LLU;
	static volatile uint16_t x380 = 2321U;
	static volatile uint64_t t82 = 4711350025868060594LLU;

	t82 = (x377+((x378|x379)%x380));

	if (t82 != 510LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x382 = 4U;
	int32_t x383 = -57;
	int32_t x384 = INT32_MIN;
	volatile uint32_t t83 = 1939991U;

	t83 = (x381+((x382|x383)%x384));

	if (t83 != 4294967239U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	static int16_t x386 = -12753;
	int32_t x387 = INT32_MIN;
	volatile int32_t t84 = 8111;

	t84 = (x385+((x386|x387)%x388));

	if (t84 != -137) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = 1;
	uint32_t x391 = UINT32_MAX;
	int64_t x392 = -10402692498906LL;
	volatile int64_t t85 = -375161310993446152LL;

	t85 = (x389+((x390|x391)%x392));

	if (t85 != 4294967167LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x393 = UINT16_MAX;
	int16_t x394 = -1;
	int32_t x395 = -983058468;
	int32_t x396 = -2062302;
	volatile int32_t t86 = -7781;

	t86 = (x393+((x394|x395)%x396));

	if (t86 != 65534) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x397 = INT8_MIN;
	static int8_t x398 = -3;
	volatile int16_t x400 = 10423;
	int32_t t87 = -10583;

	t87 = (x397+((x398|x399)%x400));

	if (t87 != -129) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x405 = 6;
	int16_t x406 = INT16_MAX;
	int64_t x407 = 474076947954LL;
	int16_t x408 = -1;
	static volatile int64_t t88 = 772666900LL;

	t88 = (x405+((x406|x407)%x408));

	if (t88 != 6LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x410 = 13317U;

	t89 = (x409+((x410|x411)%x412));

	if (t89 != 4294947855U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x418 = 35072062248970402LL;
	uint16_t x419 = UINT16_MAX;
	int8_t x420 = -4;
	static int64_t t90 = -1372188574543LL;

	t90 = (x417+((x418|x419)%x420));

	if (t90 != 2147483650LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x421 = -1;
	volatile int64_t x422 = -1LL;
	static uint16_t x424 = 21378U;

	t91 = (x421+((x422|x423)%x424));

	if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x425 = 115270546U;
	int16_t x426 = INT16_MIN;
	uint32_t x427 = UINT32_MAX;
	int16_t x428 = -5636;

	t92 = (x425+((x426|x427)%x428));

	if (t92 != 115276181U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = INT32_MIN;
	int64_t x430 = -1LL;
	int8_t x432 = INT8_MIN;
	volatile int64_t t93 = -30681881LL;

	t93 = (x429+((x430|x431)%x432));

	if (t93 != -2147483649LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	static int16_t x434 = -1;
	uint64_t x435 = UINT64_MAX;
	uint16_t x436 = 1513U;

	t94 = (x433+((x434|x435)%x436));

	if (t94 != 739LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x437 = 319U;
	int16_t x438 = -21;
	volatile int64_t t95 = 17986819LL;

	t95 = (x437+((x438|x439)%x440));

	if (t95 != 319LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x441 = INT64_MAX;
	int64_t x442 = -601609817141795LL;
	int8_t x443 = 0;
	int32_t x444 = INT32_MIN;
	static int64_t t96 = -141922669239504166LL;

	t96 = (x441+((x442|x443)%x444));

	if (t96 != 9223372035991686620LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x447 = 796425037733LLU;
	static uint32_t x448 = 254U;

	t97 = (x445+((x446|x447)%x448));

	if (t97 != 244LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x453 = INT64_MIN;
	static uint64_t x455 = 35338547271080738LLU;
	int32_t x456 = 1624;

	t98 = (x453+((x454|x455)%x456));

	if (t98 != 9223372036854777130LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x457 = 11U;
	int16_t x459 = INT16_MIN;
	int16_t x460 = INT16_MAX;
	volatile int32_t t99 = 5197;

	t99 = (x457+((x458|x459)%x460));

	if (t99 != 10) { NG(); } else { ; }
	
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

