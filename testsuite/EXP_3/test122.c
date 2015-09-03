#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x7 = INT64_MIN;
int64_t x14 = INT64_MIN;
static int64_t t2 = 2295920859507428654LL;
static uint64_t x19 = 235176128LLU;
uint8_t x20 = 35U;
uint16_t x25 = 5U;
int16_t x29 = 2266;
volatile int64_t x30 = INT64_MIN;
uint16_t x40 = 0U;
int32_t t7 = -11;
int32_t x42 = -1;
static volatile uint32_t x43 = 1U;
volatile uint32_t x44 = 7U;
int32_t x50 = INT32_MAX;
int8_t x51 = 7;
static int8_t x52 = INT8_MIN;
uint32_t t13 = 130933269U;
volatile int16_t x76 = INT16_MAX;
int64_t x78 = INT64_MAX;
int8_t x84 = -1;
static int64_t x95 = -2921203297LL;
volatile int64_t x106 = INT64_MAX;
static uint64_t x108 = UINT64_MAX;
int64_t x113 = -56181896772LL;
uint16_t x119 = UINT16_MAX;
int8_t x130 = -1;
static uint64_t x139 = 465510539382313606LLU;
int8_t x146 = -1;
int16_t x148 = INT16_MIN;
int32_t x150 = -1;
uint64_t x151 = UINT64_MAX;
volatile int32_t x155 = INT32_MIN;
int16_t x161 = -1;
uint32_t x171 = UINT32_MAX;
volatile int32_t t36 = 27;
static int32_t t37 = 3;
uint32_t x194 = 518677U;
int8_t x199 = INT8_MIN;
int64_t t40 = -2270LL;
int64_t x205 = -2047LL;
uint8_t x206 = 38U;
volatile int32_t t42 = -50164918;
uint32_t x219 = 94552231U;
volatile uint16_t x228 = 123U;
volatile int16_t x231 = 0;
uint16_t x238 = UINT16_MAX;
int8_t x243 = -44;
volatile uint16_t x245 = 534U;
static int16_t x246 = -2;
int64_t x247 = INT64_MAX;
static uint64_t x248 = 515263308157LLU;
int32_t x266 = INT32_MIN;
static volatile int64_t t59 = 4011542502LL;
static int8_t x298 = 0;
uint64_t x299 = 75051960552936LLU;
int64_t x302 = INT64_MAX;
int16_t x312 = INT16_MIN;
volatile int32_t t65 = 357507;
static int32_t x314 = -1;
static int8_t x315 = 1;
uint16_t x319 = UINT16_MAX;
volatile int8_t x324 = 0;
int16_t x325 = INT16_MIN;
volatile int32_t x326 = INT32_MIN;
static uint8_t x327 = UINT8_MAX;
static volatile uint64_t x337 = UINT64_MAX;
volatile int32_t x343 = -1;
static int16_t x356 = -1;
static int32_t t76 = 1867;
static int16_t x357 = -1;
int32_t x364 = -1;
volatile uint64_t t78 = 1337167177413LLU;
int16_t x365 = -2350;
volatile int8_t x368 = 1;
volatile int32_t t80 = 54;
static uint32_t x379 = UINT32_MAX;
static volatile int32_t t85 = 8;
int64_t x394 = INT64_MIN;
static int32_t x400 = INT32_MIN;
uint8_t x403 = UINT8_MAX;
uint32_t x405 = 13462458U;
uint8_t x408 = UINT8_MAX;
int32_t x417 = 0;
int16_t x425 = INT16_MAX;
uint32_t x426 = UINT32_MAX;
static volatile int16_t x427 = 0;
static uint64_t x428 = 21751167842274174LLU;
volatile uint64_t t95 = 400138626666LLU;
static int32_t x440 = INT32_MIN;
volatile int16_t x451 = -1;
int32_t t99 = 267995592;


void f0(void) {
	int8_t x5 = 15;
	int32_t x6 = INT32_MAX;
	static uint8_t x8 = 39U;
	int64_t t0 = 6181651672LL;

	t0 = ((x5<=x6)%(x7+x8));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x9 = 1;
	uint32_t x10 = 9U;
	volatile int32_t x11 = -1363;
	volatile int64_t x12 = INT64_MAX;
	int64_t t1 = -6529094537773LL;

	t1 = ((x9<=x10)%(x11+x12));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MAX;
	static volatile int64_t x15 = -107108LL;
	int16_t x16 = 5291;

	t2 = ((x13<=x14)%(x15+x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = 3U;
	volatile int16_t x18 = 243;
	static volatile uint64_t t3 = 5198850489063LLU;

	t3 = ((x17<=x18)%(x19+x20));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = -681;
	int64_t x22 = -1LL;
	int32_t x23 = INT32_MIN;
	uint8_t x24 = 25U;
	volatile int32_t t4 = -112322;

	t4 = ((x21<=x22)%(x23+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x26 = 522294U;
	uint64_t x27 = 7934449LLU;
	volatile uint8_t x28 = 1U;
	uint64_t t5 = 447673781LLU;

	t5 = ((x25<=x26)%(x27+x28));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x31 = INT8_MAX;
	int64_t x32 = 13864LL;
	int64_t t6 = -1074893755616LL;

	t6 = ((x29<=x30)%(x31+x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MAX;
	int16_t x38 = -1;
	int16_t x39 = -1;

	t7 = ((x37<=x38)%(x39+x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = 28U;
	static uint32_t t8 = 11932168U;

	t8 = ((x41<=x42)%(x43+x44));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x49 = 2984520LLU;
	int32_t t9 = 2;

	t9 = ((x49<=x50)%(x51+x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = -13;
	static int16_t x55 = -1;
	uint64_t x56 = 23755211060673LLU;
	volatile uint64_t t10 = 634808571LLU;

	t10 = ((x53<=x54)%(x55+x56));

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	volatile int8_t x60 = INT8_MIN;
	volatile int32_t t11 = 6431;

	t11 = ((x57<=x58)%(x59+x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x61 = INT32_MAX;
	volatile int32_t x62 = INT32_MIN;
	static int8_t x63 = INT8_MIN;
	volatile int8_t x64 = INT8_MAX;
	int32_t t12 = 7;

	t12 = ((x61<=x62)%(x63+x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x65 = INT16_MAX;
	int8_t x66 = INT8_MIN;
	volatile int16_t x67 = -24;
	static uint32_t x68 = 365U;

	t13 = ((x65<=x66)%(x67+x68));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x69 = 34U;
	int32_t x70 = -1;
	int64_t x71 = -1LL;
	int16_t x72 = INT16_MIN;
	int64_t t14 = 16307LL;

	t14 = ((x69<=x70)%(x71+x72));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x73 = INT8_MAX;
	static int64_t x74 = INT64_MAX;
	int32_t x75 = INT32_MIN;
	int32_t t15 = 74;

	t15 = ((x73<=x74)%(x75+x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x77 = UINT8_MAX;
	uint32_t x79 = 896U;
	int64_t x80 = INT64_MIN;
	volatile int64_t t16 = -217574060396825LL;

	t16 = ((x77<=x78)%(x79+x80));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 30997U;
	int8_t x82 = 8;
	uint64_t x83 = 1213973461352469116LLU;
	uint64_t t17 = 2020350272290LLU;

	t17 = ((x81<=x82)%(x83+x84));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x93 = 848U;
	static int64_t x94 = INT64_MIN;
	int32_t x96 = INT32_MIN;
	int64_t t18 = 141774084033LL;

	t18 = ((x93<=x94)%(x95+x96));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = INT16_MAX;
	uint32_t x99 = 60590U;
	volatile uint8_t x100 = 127U;
	uint32_t t19 = 108U;

	t19 = ((x97<=x98)%(x99+x100));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 1181670LLU;
	static int32_t x102 = -1;
	uint16_t x103 = 1047U;
	int8_t x104 = -1;
	int32_t t20 = 6;

	t20 = ((x101<=x102)%(x103+x104));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x105 = 15LLU;
	static int64_t x107 = -1LL;
	uint64_t t21 = 858LLU;

	t21 = ((x105<=x106)%(x107+x108));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x114 = INT8_MIN;
	uint64_t x115 = UINT64_MAX;
	static uint64_t x116 = UINT64_MAX;
	uint64_t t22 = 1888900484663368LLU;

	t22 = ((x113<=x114)%(x115+x116));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x117 = UINT32_MAX;
	uint16_t x118 = 44U;
	volatile int64_t x120 = 22151746080850LL;
	static int64_t t23 = 95LL;

	t23 = ((x117<=x118)%(x119+x120));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x125 = 473U;
	int16_t x126 = INT16_MIN;
	uint8_t x127 = UINT8_MAX;
	uint16_t x128 = 2519U;
	static volatile int32_t t24 = -21;

	t24 = ((x125<=x126)%(x127+x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 2U;
	uint64_t x131 = 5008361LLU;
	uint32_t x132 = UINT32_MAX;
	static uint64_t t25 = 1LLU;

	t25 = ((x129<=x130)%(x131+x132));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x133 = 2U;
	int32_t x134 = INT32_MIN;
	volatile uint64_t x135 = 629796974612064LLU;
	int8_t x136 = INT8_MIN;
	volatile uint64_t t26 = 716999732322769819LLU;

	t26 = ((x133<=x134)%(x135+x136));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x137 = UINT16_MAX;
	uint64_t x138 = UINT64_MAX;
	static volatile int32_t x140 = INT32_MIN;
	uint64_t t27 = 8568032458424542LLU;

	t27 = ((x137<=x138)%(x139+x140));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	volatile int8_t x142 = INT8_MIN;
	uint8_t x143 = 21U;
	int32_t x144 = -1;
	static int32_t t28 = 27058199;

	t28 = ((x141<=x142)%(x143+x144));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x145 = 3865588204423LLU;
	int16_t x147 = 76;
	volatile int32_t t29 = -185;

	t29 = ((x145<=x146)%(x147+x148));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x149 = 0U;
	int8_t x152 = -1;
	uint64_t t30 = 6713954294338027LLU;

	t30 = ((x149<=x150)%(x151+x152));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = INT64_MAX;
	volatile uint64_t x154 = 0LLU;
	volatile int16_t x156 = 114;
	static volatile int32_t t31 = 7631511;

	t31 = ((x153<=x154)%(x155+x156));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = INT16_MAX;
	int32_t x163 = INT32_MIN;
	volatile int16_t x164 = INT16_MAX;
	volatile int32_t t32 = 613;

	t32 = ((x161<=x162)%(x163+x164));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x165 = -1;
	volatile uint16_t x166 = 1U;
	int8_t x167 = INT8_MIN;
	static int8_t x168 = INT8_MAX;
	volatile int32_t t33 = 0;

	t33 = ((x165<=x166)%(x167+x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x169 = 128430U;
	static uint16_t x170 = 1U;
	volatile int8_t x172 = INT8_MAX;
	static uint32_t t34 = 250346U;

	t34 = ((x169<=x170)%(x171+x172));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 392U;
	int64_t x174 = -1LL;
	int32_t x175 = -65634390;
	uint64_t x176 = 967949221674141LLU;
	volatile uint64_t t35 = 110352536896157115LLU;

	t35 = ((x173<=x174)%(x175+x176));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = 185244;
	uint64_t x178 = UINT64_MAX;
	static uint16_t x179 = 81U;
	uint8_t x180 = UINT8_MAX;

	t36 = ((x177<=x178)%(x179+x180));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = 90;
	int64_t x182 = INT64_MAX;
	int16_t x183 = INT16_MIN;
	int8_t x184 = INT8_MAX;

	t37 = ((x181<=x182)%(x183+x184));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = 2961;
	int64_t x186 = 48369466100926LL;
	volatile int16_t x187 = INT16_MAX;
	uint16_t x188 = 936U;
	int32_t t38 = 8785085;

	t38 = ((x185<=x186)%(x187+x188));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = -15998127415625676LL;
	uint16_t x195 = UINT16_MAX;
	static uint8_t x196 = 94U;
	static volatile int32_t t39 = 0;

	t39 = ((x193<=x194)%(x195+x196));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x197 = INT8_MIN;
	int8_t x198 = -1;
	static int64_t x200 = -114127319463855302LL;

	t40 = ((x197<=x198)%(x199+x200));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x201 = INT64_MIN;
	static uint8_t x202 = 87U;
	int32_t x203 = -1;
	int8_t x204 = 0;
	static volatile int32_t t41 = 77;

	t41 = ((x201<=x202)%(x203+x204));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x207 = INT8_MIN;
	uint8_t x208 = 13U;

	t42 = ((x205<=x206)%(x207+x208));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint64_t x209 = 22911060890636LLU;
	uint16_t x210 = 11U;
	volatile uint16_t x211 = 1754U;
	uint32_t x212 = 14U;
	volatile uint32_t t43 = 5717025U;

	t43 = ((x209<=x210)%(x211+x212));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MAX;
	uint64_t x214 = 13741666LLU;
	int8_t x215 = -5;
	uint32_t x216 = 93797958U;
	uint32_t t44 = 59U;

	t44 = ((x213<=x214)%(x215+x216));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x217 = INT64_MIN;
	static volatile uint8_t x218 = 0U;
	int64_t x220 = -1LL;
	volatile int64_t t45 = 8120305LL;

	t45 = ((x217<=x218)%(x219+x220));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x221 = 2304672743LLU;
	static int32_t x222 = -1;
	volatile int32_t x223 = INT32_MAX;
	static int64_t x224 = -2892624LL;
	int64_t t46 = 1956299559LL;

	t46 = ((x221<=x222)%(x223+x224));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x225 = INT32_MAX;
	volatile uint8_t x226 = 4U;
	int8_t x227 = 0;
	volatile int32_t t47 = 34810;

	t47 = ((x225<=x226)%(x227+x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x229 = 1255437U;
	static uint8_t x230 = 56U;
	uint32_t x232 = 473266005U;
	uint32_t t48 = 89766U;

	t48 = ((x229<=x230)%(x231+x232));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = -381977217600178842LL;
	uint16_t x234 = UINT16_MAX;
	int8_t x235 = -1;
	uint8_t x236 = 3U;
	volatile int32_t t49 = 6;

	t49 = ((x233<=x234)%(x235+x236));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x237 = 1908021U;
	uint16_t x239 = UINT16_MAX;
	volatile int8_t x240 = -1;
	int32_t t50 = -24996869;

	t50 = ((x237<=x238)%(x239+x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x241 = UINT64_MAX;
	static int64_t x242 = INT64_MIN;
	static int16_t x244 = INT16_MIN;
	int32_t t51 = -2091167;

	t51 = ((x241<=x242)%(x243+x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t t52 = 798868846247180009LLU;

	t52 = ((x245<=x246)%(x247+x248));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x257 = 9U;
	int32_t x258 = -64273;
	volatile int16_t x259 = INT16_MIN;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t53 = -19530652;

	t53 = ((x257<=x258)%(x259+x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x265 = INT32_MIN;
	uint32_t x267 = UINT32_MAX;
	uint8_t x268 = 3U;
	volatile uint32_t t54 = 29U;

	t54 = ((x265<=x266)%(x267+x268));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x269 = INT64_MAX;
	int8_t x270 = 0;
	int16_t x271 = -1;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t55 = 168647148025427LLU;

	t55 = ((x269<=x270)%(x271+x272));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x273 = INT32_MIN;
	int8_t x274 = -1;
	int8_t x275 = INT8_MIN;
	static volatile int8_t x276 = INT8_MIN;
	int32_t t56 = -4;

	t56 = ((x273<=x274)%(x275+x276));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 1U;
	static uint16_t x280 = 0U;
	static volatile uint32_t t57 = 2U;

	t57 = ((x277<=x278)%(x279+x280));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x281 = -1;
	uint64_t x282 = 3152772448735LLU;
	uint8_t x283 = UINT8_MAX;
	static int32_t x284 = INT32_MIN;
	int32_t t58 = -24787617;

	t58 = ((x281<=x282)%(x283+x284));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x285 = -20902740;
	uint8_t x286 = 8U;
	static int64_t x287 = -90915269095LL;
	int64_t x288 = -1LL;

	t59 = ((x285<=x286)%(x287+x288));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x289 = 375573U;
	int32_t x290 = INT32_MAX;
	int16_t x291 = 2;
	volatile int64_t x292 = INT64_MIN;
	volatile int64_t t60 = -2LL;

	t60 = ((x289<=x290)%(x291+x292));

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x293 = -336379360LL;
	uint32_t x294 = 2U;
	static int32_t x295 = 398993434;
	int64_t x296 = 4068614438988978301LL;
	int64_t t61 = 237239742LL;

	t61 = ((x293<=x294)%(x295+x296));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = -1;
	volatile int16_t x300 = INT16_MIN;
	uint64_t t62 = 48381LLU;

	t62 = ((x297<=x298)%(x299+x300));

	if (t62 != 1LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x301 = 209276731U;
	uint16_t x303 = 0U;
	int16_t x304 = 2;
	volatile int32_t t63 = 1;

	t63 = ((x301<=x302)%(x303+x304));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x305 = INT8_MAX;
	uint64_t x306 = 272711427568LLU;
	static int8_t x307 = INT8_MIN;
	static volatile uint8_t x308 = UINT8_MAX;
	volatile int32_t t64 = -18144534;

	t64 = ((x305<=x306)%(x307+x308));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x309 = INT8_MIN;
	int32_t x310 = INT32_MIN;
	uint8_t x311 = 14U;

	t65 = ((x309<=x310)%(x311+x312));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x313 = 22LL;
	volatile uint32_t x316 = 744333U;
	static volatile uint32_t t66 = 85828U;

	t66 = ((x313<=x314)%(x315+x316));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = -1;
	int16_t x318 = -1531;
	int32_t x320 = INT32_MIN;
	static volatile int32_t t67 = 41052932;

	t67 = ((x317<=x318)%(x319+x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x321 = 3;
	int16_t x322 = -5045;
	uint16_t x323 = UINT16_MAX;
	static volatile int32_t t68 = -176977;

	t68 = ((x321<=x322)%(x323+x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t69 = 100747646U;

	t69 = ((x325<=x326)%(x327+x328));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = -7;
	static volatile int64_t x331 = 188LL;
	int32_t x332 = INT32_MIN;
	volatile int64_t t70 = -43671133006LL;

	t70 = ((x329<=x330)%(x331+x332));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x333 = -9510844;
	uint16_t x334 = 11U;
	uint16_t x335 = 3U;
	int32_t x336 = -8233416;
	static int32_t t71 = -52;

	t71 = ((x333<=x334)%(x335+x336));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x338 = -2554869760795613LL;
	int64_t x339 = INT64_MIN;
	uint64_t x340 = UINT64_MAX;
	volatile uint64_t t72 = 5614LLU;

	t72 = ((x337<=x338)%(x339+x340));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x341 = -15;
	int8_t x342 = -1;
	static int8_t x344 = 0;
	int32_t t73 = -9528105;

	t73 = ((x341<=x342)%(x343+x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x345 = 17U;
	int16_t x346 = INT16_MAX;
	int16_t x347 = 1023;
	int16_t x348 = INT16_MAX;
	volatile int32_t t74 = 108556;

	t74 = ((x345<=x346)%(x347+x348));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x349 = 5;
	static int64_t x350 = -7LL;
	int8_t x351 = -4;
	int16_t x352 = -42;
	static volatile int32_t t75 = -185201557;

	t75 = ((x349<=x350)%(x351+x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x353 = INT8_MIN;
	uint8_t x354 = UINT8_MAX;
	uint8_t x355 = UINT8_MAX;

	t76 = ((x353<=x354)%(x355+x356));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x358 = INT32_MIN;
	static int32_t x359 = INT32_MAX;
	int16_t x360 = 0;
	volatile int32_t t77 = 11629;

	t77 = ((x357<=x358)%(x359+x360));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x361 = -1;
	int16_t x362 = -2649;
	static uint64_t x363 = UINT64_MAX;

	t78 = ((x361<=x362)%(x363+x364));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x366 = -6819710588191LL;
	static uint8_t x367 = 85U;
	int32_t t79 = -221886628;

	t79 = ((x365<=x366)%(x367+x368));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	uint8_t x371 = UINT8_MAX;
	uint16_t x372 = UINT16_MAX;

	t80 = ((x369<=x370)%(x371+x372));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x373 = -1954452;
	int8_t x374 = 6;
	static int64_t x375 = INT64_MIN;
	int32_t x376 = INT32_MAX;
	int64_t t81 = -32201570LL;

	t81 = ((x373<=x374)%(x375+x376));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = 708347LL;
	uint16_t x380 = 4U;
	static volatile uint32_t t82 = 112452971U;

	t82 = ((x377<=x378)%(x379+x380));

	if (t82 != 1U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = INT32_MIN;
	uint32_t x382 = UINT32_MAX;
	int8_t x383 = INT8_MIN;
	uint32_t x384 = UINT32_MAX;
	uint32_t t83 = 1442U;

	t83 = ((x381<=x382)%(x383+x384));

	if (t83 != 1U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x385 = 1U;
	uint64_t x386 = 1540497156934LLU;
	volatile int16_t x387 = INT16_MIN;
	int16_t x388 = -5;
	volatile int32_t t84 = -13123475;

	t84 = ((x385<=x386)%(x387+x388));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x389 = -6LL;
	int32_t x390 = -1;
	int32_t x391 = INT32_MIN;
	uint8_t x392 = 0U;

	t85 = ((x389<=x390)%(x391+x392));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x393 = 20U;
	static volatile int32_t x395 = 2300;
	volatile uint64_t x396 = 101624LLU;
	uint64_t t86 = 964223457LLU;

	t86 = ((x393<=x394)%(x395+x396));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x397 = 48U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = -1LL;
	int64_t t87 = 2649561725LL;

	t87 = ((x397<=x398)%(x399+x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x401 = INT8_MIN;
	int8_t x402 = -1;
	int8_t x404 = INT8_MIN;
	volatile int32_t t88 = -29975298;

	t88 = ((x401<=x402)%(x403+x404));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x406 = -9;
	volatile int64_t x407 = INT64_MIN;
	int64_t t89 = -6036131705456LL;

	t89 = ((x405<=x406)%(x407+x408));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x409 = INT8_MAX;
	int64_t x410 = INT64_MIN;
	volatile int64_t x411 = INT64_MAX;
	static int8_t x412 = INT8_MIN;
	volatile int64_t t90 = -4150973LL;

	t90 = ((x409<=x410)%(x411+x412));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x413 = 6645U;
	int8_t x414 = INT8_MIN;
	int64_t x415 = 4LL;
	static int8_t x416 = INT8_MIN;
	volatile int64_t t91 = -802403945689613LL;

	t91 = ((x413<=x414)%(x415+x416));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x418 = INT8_MAX;
	int64_t x419 = INT64_MAX;
	int8_t x420 = -6;
	static volatile int64_t t92 = 4130005625506LL;

	t92 = ((x417<=x418)%(x419+x420));

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x421 = 122710;
	int64_t x422 = 1644303LL;
	uint8_t x423 = 4U;
	int8_t x424 = INT8_MIN;
	int32_t t93 = 15265763;

	t93 = ((x421<=x422)%(x423+x424));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t t94 = 91051972547317472LLU;

	t94 = ((x425<=x426)%(x427+x428));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x429 = INT64_MIN;
	uint8_t x430 = UINT8_MAX;
	uint64_t x431 = 16055059423LLU;
	int64_t x432 = INT64_MIN;

	t95 = ((x429<=x430)%(x431+x432));

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x433 = 0;
	int16_t x434 = -1;
	int16_t x435 = -1;
	volatile int16_t x436 = 2;
	volatile int32_t t96 = -47;

	t96 = ((x433<=x434)%(x435+x436));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x437 = INT64_MIN;
	int8_t x438 = INT8_MIN;
	uint8_t x439 = 0U;
	int32_t t97 = -1;

	t97 = ((x437<=x438)%(x439+x440));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = 0LL;
	static uint16_t x442 = 295U;
	int64_t x443 = INT64_MAX;
	int64_t x444 = INT64_MIN;
	volatile int64_t t98 = 144040529LL;

	t98 = ((x441<=x442)%(x443+x444));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x449 = INT32_MIN;
	int32_t x450 = 2705827;
	int16_t x452 = 18;

	t99 = ((x449<=x450)%(x451+x452));

	if (t99 != 1) { NG(); } else { ; }
	
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

