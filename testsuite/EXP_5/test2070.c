#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x17 = INT8_MIN;
volatile int64_t x30 = 1415584576LL;
int8_t x35 = INT8_MAX;
int64_t x41 = INT64_MIN;
int16_t x43 = -1;
int16_t x46 = INT16_MIN;
int32_t x48 = INT32_MIN;
volatile int64_t t10 = -32517364621163090LL;
uint64_t x58 = 1LLU;
static uint8_t x62 = UINT8_MAX;
int64_t x63 = INT64_MIN;
int64_t t14 = 0LL;
volatile int16_t x65 = INT16_MAX;
static int32_t x75 = -1;
int8_t x87 = INT8_MIN;
int16_t x89 = 3605;
static volatile int32_t t20 = 102845;
int64_t t23 = 111516LL;
int64_t x111 = INT64_MIN;
static volatile int8_t x118 = INT8_MAX;
int64_t t26 = -1122267719756922LL;
static int8_t x122 = -1;
volatile uint64_t t27 = 378376251089755584LLU;
volatile uint8_t x125 = 16U;
uint16_t x130 = 7900U;
int32_t t29 = 581997;
uint16_t x135 = UINT16_MAX;
int64_t x138 = INT64_MAX;
uint16_t x149 = 1U;
volatile uint64_t x158 = 2884262652147714646LLU;
int32_t t38 = -4809;
int16_t x183 = -1;
int32_t x187 = INT32_MIN;
int16_t x196 = -213;
uint8_t x200 = UINT8_MAX;
int16_t x205 = -956;
volatile uint64_t x208 = 421373838LLU;
int64_t x210 = INT64_MIN;
int16_t x218 = -1;
uint64_t x219 = 350LLU;
int64_t x226 = INT64_MIN;
uint64_t t50 = 463017LLU;
volatile uint64_t t51 = 54644790757LLU;
int8_t x239 = INT8_MAX;
volatile uint8_t x241 = 115U;
int16_t x243 = -165;
volatile uint64_t x245 = 1712333244552624921LLU;
uint8_t x257 = 5U;
int32_t x282 = INT32_MAX;
static int8_t x283 = 30;
volatile int64_t x286 = 22LL;
volatile int32_t x288 = INT32_MIN;
int16_t x290 = INT16_MIN;
int16_t x292 = -1;
uint16_t x298 = 27619U;
int32_t t64 = -20231630;
int64_t x305 = INT64_MAX;
uint64_t x311 = UINT64_MAX;
volatile int32_t x313 = -46746861;
uint64_t x318 = 918543251LLU;
uint64_t x329 = 494299275213LLU;
uint64_t t71 = 368525LLU;
uint64_t t73 = 724197614069106LLU;
int32_t x346 = 19;
int8_t x351 = -1;
int32_t x355 = INT32_MIN;
uint8_t x358 = 1U;
uint32_t x362 = UINT32_MAX;
static uint64_t x376 = UINT64_MAX;
static volatile uint64_t t81 = 141579LLU;
uint8_t x382 = 1U;
static int64_t x386 = -1LL;
static int8_t x392 = INT8_MAX;
volatile int8_t x396 = -22;
uint16_t x403 = UINT16_MAX;
int8_t x405 = INT8_MIN;
int32_t x407 = INT32_MIN;
uint32_t x408 = UINT32_MAX;
int32_t x409 = -12663;
uint64_t x410 = 869909078368070LLU;
volatile uint64_t t90 = 1009741299771000932LLU;
int16_t x417 = -147;
volatile int16_t x426 = 1893;
int16_t x428 = INT16_MIN;
volatile uint32_t x440 = 350723031U;
static uint32_t x445 = UINT32_MAX;
int64_t x453 = 49670356816411LL;
int16_t x454 = -1;
uint32_t x455 = 45229U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	uint16_t x2 = 1U;
	int8_t x3 = -3;
	static volatile uint32_t x4 = 15U;
	volatile uint32_t t0 = 204892076U;

	t0 = (x1*((x2^x3)/x4));

	if (t0 != 2004353024U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	static int16_t x6 = -1;
	int16_t x7 = INT16_MIN;
	volatile int16_t x8 = -1;
	int32_t t1 = -658;

	t1 = (x5*((x6^x7)/x8));

	if (t1 != 1073709056) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	volatile uint8_t x10 = 11U;
	volatile uint32_t x11 = 147170992U;
	int8_t x12 = 1;
	uint32_t t2 = 1666199U;

	t2 = (x9*((x10^x11)/x12));

	if (t2 != 4147796293U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 18399625940812300LL;
	uint8_t x14 = 95U;
	uint32_t x15 = 1383221753U;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 512550884321028450LLU;

	t3 = (x13*((x14^x15)/x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 7U;
	static int8_t x20 = INT8_MAX;
	volatile int32_t t4 = 426775155;

	t4 = (x17*((x18^x19)/x20));

	if (t4 != 32896) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int32_t x22 = -1;
	int64_t x23 = INT64_MIN;
	int64_t x24 = INT64_MIN;
	volatile int64_t t5 = 2LL;

	t5 = (x21*((x22^x23)/x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x29 = INT32_MAX;
	static uint64_t x31 = UINT64_MAX;
	static uint64_t x32 = 531126837LLU;
	volatile uint64_t t6 = 57728LLU;

	t6 = (x29*((x30^x31)/x32));

	if (t6 != 797997529439003363LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	static uint8_t x34 = 9U;
	volatile int16_t x36 = -1;
	int32_t t7 = 2481;

	t7 = (x33*((x34^x35)/x36));

	if (t7 != -14986) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	int16_t x38 = 5;
	volatile int8_t x39 = -1;
	uint16_t x40 = 126U;
	int32_t t8 = -43339230;

	t8 = (x37*((x38^x39)/x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x42 = 212236752423LLU;
	volatile uint16_t x44 = 1097U;
	uint64_t t9 = 2904116791LLU;

	t9 = (x41*((x42^x43)/x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int64_t x47 = -92918829LL;

	t10 = (x45*((x46^x47)/x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 1U;
	int64_t x50 = INT64_MIN;
	int8_t x51 = INT8_MIN;
	static uint8_t x52 = UINT8_MAX;
	static volatile int64_t t11 = 57449LL;

	t11 = (x49*((x50^x51)/x52));

	if (t11 != 36170086419038336LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	static volatile int16_t x54 = INT16_MIN;
	volatile int16_t x55 = -1;
	uint8_t x56 = 30U;
	int32_t t12 = -1835;

	t12 = (x53*((x54^x55)/x56));

	if (t12 != -35782656) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	int8_t x59 = INT8_MAX;
	int16_t x60 = 9;
	static volatile uint64_t t13 = 650399401LLU;

	t13 = (x57*((x58^x59)/x60));

	if (t13 != 917490LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 3;
	int64_t x64 = -239LL;

	t14 = (x61*((x62^x63)/x64));

	if (t14 != 115774544395666638LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x66 = 2U;
	int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MAX;
	static int64_t t15 = -870LL;

	t15 = (x65*((x66^x67)/x68));

	if (t15 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x69 = INT16_MAX;
	static int8_t x70 = -24;
	int32_t x71 = 3;
	static int16_t x72 = INT16_MAX;
	int32_t t16 = 0;

	t16 = (x69*((x70^x71)/x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	static int8_t x74 = INT8_MIN;
	volatile uint16_t x76 = 82U;
	volatile int32_t t17 = -130442825;

	t17 = (x73*((x74^x75)/x76));

	if (t17 != 32767) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	static int64_t x82 = INT64_MIN;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 50476LLU;
	static volatile uint64_t t18 = 1179LLU;

	t18 = (x81*((x82^x83)/x84));

	if (t18 != 5987444160814094503LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = 261103499LLU;
	volatile uint64_t x86 = UINT64_MAX;
	volatile uint64_t x88 = UINT64_MAX;
	uint64_t t19 = 8174LLU;

	t19 = (x85*((x86^x87)/x88));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x90 = INT16_MIN;
	static int16_t x91 = INT16_MIN;
	int32_t x92 = INT32_MIN;

	t20 = (x89*((x90^x91)/x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = 5;
	int8_t x94 = -35;
	static int32_t x95 = INT32_MAX;
	volatile int64_t x96 = -1LL;
	volatile int64_t t21 = -76852LL;

	t21 = (x93*((x94^x95)/x96));

	if (t21 != 10737418070LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x97 = 0U;
	uint64_t x98 = 207LLU;
	int16_t x99 = INT16_MIN;
	volatile uint16_t x100 = UINT16_MAX;
	static volatile uint64_t t22 = 177465923LLU;

	t22 = (x97*((x98^x99)/x100));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x101 = INT64_MIN;
	int16_t x102 = -1;
	uint8_t x103 = 3U;
	int64_t x104 = INT64_MIN;

	t23 = (x101*((x102^x103)/x104));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = -21145870LL;
	volatile int16_t x106 = -6050;
	static uint16_t x107 = 33U;
	uint16_t x108 = 30U;
	static int64_t t24 = 34642064657LL;

	t24 = (x105*((x106^x107)/x108));

	if (t24 != 4229174000LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = -1;
	static int32_t x110 = INT32_MIN;
	static volatile uint8_t x112 = 5U;
	volatile int64_t t25 = -58797642140LL;

	t25 = (x109*((x110^x111)/x112));

	if (t25 != -1844674406941458432LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = UINT16_MAX;
	static uint16_t x119 = 6U;
	volatile int64_t x120 = -1LL;

	t26 = (x117*((x118^x119)/x120));

	if (t26 != -7929735LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = -1LL;
	volatile uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MIN;

	t27 = (x121*((x122^x123)/x124));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x126 = -1;
	static int8_t x127 = INT8_MAX;
	volatile uint32_t x128 = 7300668U;
	uint32_t t28 = 3391646U;

	t28 = (x125*((x126^x127)/x128));

	if (t28 != 9408U) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = 66U;
	uint16_t x131 = 114U;
	uint8_t x132 = 75U;

	t29 = (x129*((x130^x131)/x132));

	if (t29 != 6864) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -39;
	static int64_t x134 = -32843872856LL;
	static volatile int32_t x136 = INT32_MIN;
	volatile int64_t t30 = -364471089525967LL;

	t30 = (x133*((x134^x135)/x136));

	if (t30 != -585LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = 2;
	volatile int64_t x139 = -657543LL;
	static uint32_t x140 = 45295U;
	static volatile int64_t t31 = 219729549784474LL;

	t31 = (x137*((x138^x139)/x140));

	if (t31 != -407257844656324LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = 764;
	static uint32_t x142 = 1555U;
	int16_t x143 = INT16_MIN;
	int32_t x144 = -1;
	static volatile uint32_t t32 = 505U;

	t32 = (x141*((x142^x143)/x144));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = INT16_MIN;
	static int8_t x146 = -53;
	volatile int16_t x147 = -1;
	int8_t x148 = -3;
	int32_t t33 = 10717;

	t33 = (x145*((x146^x147)/x148));

	if (t33 != 557056) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x150 = UINT16_MAX;
	int8_t x151 = 0;
	int64_t x152 = -126899655LL;
	static volatile int64_t t34 = -238160LL;

	t34 = (x149*((x150^x151)/x152));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x153 = UINT8_MAX;
	int32_t x154 = -1;
	static int32_t x155 = 184990848;
	int16_t x156 = INT16_MIN;
	int32_t t35 = 1108797;

	t35 = (x153*((x154^x155)/x156));

	if (t35 != 1439475) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x157 = 982462LLU;
	uint32_t x159 = UINT32_MAX;
	volatile uint8_t x160 = UINT8_MAX;
	volatile uint64_t t36 = 720989444665225024LLU;

	t36 = (x157*((x158^x159)/x160));

	if (t36 != 7524583338144313988LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x161 = 622007083648LL;
	int64_t x162 = INT64_MAX;
	int16_t x163 = -1;
	volatile int64_t x164 = -2248720952936693LL;
	static volatile int64_t t37 = 9645308917315LL;

	t37 = (x161*((x162^x163)/x164));

	if (t37 != 2550851050040448LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = -42;
	int8_t x174 = -1;
	int16_t x175 = INT16_MIN;
	volatile int8_t x176 = INT8_MIN;

	t38 = (x173*((x174^x175)/x176));

	if (t38 != 10710) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	static int16_t x178 = INT16_MIN;
	static volatile int8_t x179 = INT8_MIN;
	static int16_t x180 = -1;
	volatile int32_t t39 = -70732752;

	t39 = (x177*((x178^x179)/x180));

	if (t39 != 4177920) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = 8191U;
	static uint8_t x182 = UINT8_MAX;
	static int16_t x184 = -764;
	volatile int32_t t40 = 1;

	t40 = (x181*((x182^x183)/x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x185 = INT8_MIN;
	uint64_t x186 = UINT64_MAX;
	int16_t x188 = INT16_MIN;
	volatile uint64_t t41 = 3475050LLU;

	t41 = (x185*((x186^x187)/x188));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	int8_t x190 = INT8_MIN;
	int8_t x191 = 18;
	int64_t x192 = -244LL;
	volatile int64_t t42 = 92552627LL;

	t42 = (x189*((x190^x191)/x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = 1;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	int32_t t43 = 52884;

	t43 = (x193*((x194^x195)/x196));

	if (t43 != -153) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x197 = INT16_MIN;
	uint64_t x198 = UINT64_MAX;
	int32_t x199 = -8325998;
	volatile uint64_t t44 = 57LLU;

	t44 = (x197*((x198^x199)/x200));

	if (t44 != 18446744072639676416LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x201 = -1;
	uint64_t x202 = 5308352221397LLU;
	int16_t x203 = 14;
	static int16_t x204 = INT16_MAX;
	volatile uint64_t t45 = 179454757864794LLU;

	t45 = (x201*((x202^x203)/x204));

	if (t45 != 18446744073547548619LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x206 = UINT32_MAX;
	int32_t x207 = INT32_MAX;
	volatile uint64_t t46 = 1281542882LLU;

	t46 = (x205*((x206^x207)/x208));

	if (t46 != 18446744073709546836LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MAX;
	uint64_t t47 = 3820901285LLU;

	t47 = (x209*((x210^x211)/x212));

	if (t47 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	volatile int8_t x214 = 1;
	volatile int16_t x215 = -47;
	int32_t x216 = INT32_MIN;
	volatile int64_t t48 = 111589110613LL;

	t48 = (x213*((x214^x215)/x216));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = -453817953114350LL;
	int64_t x220 = INT64_MAX;
	volatile uint64_t t49 = 60550300015353983LLU;

	t49 = (x217*((x218^x219)/x220));

	if (t49 != 18446290255756437266LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x225 = 30U;
	int32_t x227 = -1;
	uint64_t x228 = 32366104948804173LLU;

	t50 = (x225*((x226^x227)/x228));

	if (t50 != 8520LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MAX;
	volatile int32_t x234 = INT32_MIN;
	static int8_t x235 = -1;
	uint64_t x236 = UINT64_MAX;

	t51 = (x233*((x234^x235)/x236));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x237 = 40U;
	volatile int16_t x238 = -1;
	volatile uint8_t x240 = 37U;
	int32_t t52 = 982819007;

	t52 = (x237*((x238^x239)/x240));

	if (t52 != -120) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x242 = -7;
	int64_t x244 = -1LL;
	static volatile int64_t t53 = 25930447LL;

	t53 = (x241*((x242^x243)/x244));

	if (t53 != -18630LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x246 = INT64_MIN;
	static uint64_t x247 = 87LLU;
	int64_t x248 = -1LL;
	volatile uint64_t t54 = 1009260178638580420LLU;

	t54 = (x245*((x246^x247)/x248));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -1;
	int16_t x250 = 307;
	volatile uint16_t x251 = 1880U;
	uint64_t x252 = 1LLU;
	uint64_t t55 = 560215704597583LLU;

	t55 = (x249*((x250^x251)/x252));

	if (t55 != 18446744073709549973LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x258 = INT8_MAX;
	static uint8_t x259 = 3U;
	int32_t x260 = INT32_MAX;
	static volatile int32_t t56 = 4036477;

	t56 = (x257*((x258^x259)/x260));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x261 = -1;
	static uint64_t x262 = 3148486756LLU;
	int64_t x263 = -1LL;
	int32_t x264 = -1;
	static uint64_t t57 = 1765LLU;

	t57 = (x261*((x262^x263)/x264));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x273 = UINT32_MAX;
	volatile uint8_t x274 = 8U;
	int16_t x275 = 1;
	int8_t x276 = INT8_MIN;
	static volatile uint32_t t58 = 33062181U;

	t58 = (x273*((x274^x275)/x276));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = INT8_MIN;
	volatile int64_t x278 = INT64_MIN;
	int32_t x279 = 1097;
	volatile int8_t x280 = INT8_MIN;
	static int64_t t59 = -81901883039LL;

	t59 = (x277*((x278^x279)/x280));

	if (t59 != -9223372036854774656LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x281 = 43U;
	uint16_t x284 = 3324U;
	static volatile int32_t t60 = 1992;

	t60 = (x281*((x282^x283)/x284));

	if (t60 != 27780322) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x285 = 108222U;
	static volatile int16_t x287 = INT16_MIN;
	static volatile int64_t t61 = 768708LL;

	t61 = (x285*((x286^x287)/x288));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x289 = INT8_MAX;
	static int64_t x291 = -24361LL;
	static volatile int64_t t62 = 366105LL;

	t62 = (x289*((x290^x291)/x292));

	if (t62 != -1067689LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = UINT8_MAX;
	uint64_t x294 = 640316797612566LLU;
	uint8_t x295 = 9U;
	int64_t x296 = INT64_MIN;
	volatile uint64_t t63 = 3717443182LLU;

	t63 = (x293*((x294^x295)/x296));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x297 = -1;
	int32_t x299 = INT32_MAX;
	int32_t x300 = -50;

	t64 = (x297*((x298^x299)/x300));

	if (t64 != 42949120) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x301 = 195U;
	volatile int32_t x302 = INT32_MIN;
	static int16_t x303 = INT16_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile uint64_t t65 = 426979813LLU;

	t65 = (x301*((x302^x303)/x304));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x306 = 127LL;
	volatile uint16_t x307 = 31U;
	volatile uint32_t x308 = UINT32_MAX;
	volatile int64_t t66 = 316572139766161153LL;

	t66 = (x305*((x306^x307)/x308));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x309 = INT8_MIN;
	volatile int8_t x310 = 7;
	static uint64_t x312 = UINT64_MAX;
	static volatile uint64_t t67 = 1938295812876451893LLU;

	t67 = (x309*((x310^x311)/x312));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x314 = 304215;
	uint16_t x315 = UINT16_MAX;
	uint32_t x316 = UINT32_MAX;
	uint32_t t68 = 373765652U;

	t68 = (x313*((x314^x315)/x316));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = INT8_MIN;
	volatile int8_t x319 = INT8_MIN;
	volatile int64_t x320 = INT64_MAX;
	volatile uint64_t t69 = 2094LLU;

	t69 = (x317*((x318^x319)/x320));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = -3594;
	int8_t x327 = 1;
	uint64_t x328 = 385187538LLU;
	static uint64_t t70 = 205405120LLU;

	t70 = (x325*((x326^x327)/x328));

	if (t70 != 18445174804586921984LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x330 = 2106797U;
	uint64_t x331 = 25LLU;
	volatile int16_t x332 = -9;

	t71 = (x329*((x330^x331)/x332));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x333 = UINT16_MAX;
	int32_t x334 = INT32_MIN;
	static uint16_t x335 = 294U;
	int32_t x336 = INT32_MAX;
	int32_t t72 = 2686;

	t72 = (x333*((x334^x335)/x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x337 = UINT32_MAX;
	static uint64_t x338 = UINT64_MAX;
	static uint64_t x339 = 1117290251165342LLU;
	volatile int8_t x340 = -1;

	t73 = (x337*((x338^x339)/x340));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = 242834120U;
	volatile uint16_t x342 = 0U;
	int32_t x343 = INT32_MIN;
	volatile uint64_t x344 = 1LLU;
	volatile uint64_t t74 = 9LLU;

	t74 = (x341*((x342^x343)/x344));

	if (t74 != 17925261771833081856LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x345 = UINT8_MAX;
	volatile int8_t x347 = INT8_MAX;
	int32_t x348 = 6512247;
	volatile int32_t t75 = -8565178;

	t75 = (x345*((x346^x347)/x348));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x349 = 2U;
	uint64_t x350 = UINT64_MAX;
	int32_t x352 = 6;
	uint64_t t76 = 27LLU;

	t76 = (x349*((x350^x351)/x352));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x353 = -1;
	int32_t x354 = 0;
	int8_t x356 = -19;
	static volatile int32_t t77 = 1;

	t77 = (x353*((x354^x355)/x356));

	if (t77 != -113025455) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	static int8_t x359 = INT8_MIN;
	int16_t x360 = -1;
	int32_t t78 = -13364;

	t78 = (x357*((x358^x359)/x360));

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x361 = INT16_MIN;
	int8_t x363 = INT8_MAX;
	static uint16_t x364 = UINT16_MAX;
	volatile uint32_t t79 = 260367996U;

	t79 = (x361*((x362^x363)/x364));

	if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x365 = -1;
	uint32_t x366 = 1987700327U;
	int32_t x367 = 18559;
	int8_t x368 = INT8_MAX;
	volatile uint32_t t80 = 7552886U;

	t80 = (x365*((x366^x367)/x368));

	if (t80 != 4279316226U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x373 = 0U;
	volatile uint64_t x374 = UINT64_MAX;
	int16_t x375 = -321;

	t81 = (x373*((x374^x375)/x376));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x377 = UINT32_MAX;
	uint32_t x378 = 2500U;
	uint32_t x379 = UINT32_MAX;
	uint64_t x380 = UINT64_MAX;
	uint64_t t82 = 2LLU;

	t82 = (x377*((x378^x379)/x380));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x381 = UINT8_MAX;
	int16_t x383 = INT16_MAX;
	uint8_t x384 = 5U;
	int32_t t83 = -2666;

	t83 = (x381*((x382^x383)/x384));

	if (t83 != 1671015) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x385 = UINT64_MAX;
	uint16_t x387 = 161U;
	volatile int8_t x388 = -1;
	uint64_t t84 = 169295153444128636LLU;

	t84 = (x385*((x386^x387)/x388));

	if (t84 != 18446744073709551454LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x389 = -1LL;
	int8_t x390 = 1;
	int32_t x391 = INT32_MIN;
	int64_t t85 = 1918LL;

	t85 = (x389*((x390^x391)/x392));

	if (t85 != 16909320LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = 36;
	static uint32_t x394 = UINT32_MAX;
	int64_t x395 = 37LL;
	int64_t t86 = -584LL;

	t86 = (x393*((x394^x395)/x396));

	if (t86 != -7028128224LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x401 = -1;
	uint16_t x402 = 10138U;
	uint64_t x404 = 102705LLU;
	uint64_t t87 = 123LLU;

	t87 = (x401*((x402^x403)/x404));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x406 = -1;
	uint32_t t88 = 780U;

	t88 = (x405*((x406^x407)/x408));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x411 = INT8_MIN;
	static volatile uint8_t x412 = 2U;
	uint64_t t89 = 23035476057058297LLU;

	t89 = (x409*((x410^x411)/x412));

	if (t89 != 14731201366542135035LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x413 = 472U;
	static int64_t x414 = INT64_MIN;
	uint64_t x415 = 687081479525LLU;
	int64_t x416 = INT64_MAX;

	t90 = (x413*((x414^x415)/x416));

	if (t90 != 472LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x418 = 51597U;
	int32_t x419 = INT32_MIN;
	static volatile int32_t x420 = -35;
	uint32_t t91 = 346598U;

	t91 = (x417*((x418^x419)/x420));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x425 = UINT16_MAX;
	volatile uint16_t x427 = UINT16_MAX;
	volatile int32_t t92 = -47537479;

	t92 = (x425*((x426^x427)/x428));

	if (t92 != -65535) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x429 = -1;
	volatile int16_t x430 = INT16_MIN;
	int32_t x431 = INT32_MIN;
	static volatile uint64_t x432 = UINT64_MAX;
	volatile uint64_t t93 = 1LLU;

	t93 = (x429*((x430^x431)/x432));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x433 = INT64_MIN;
	uint32_t x434 = 1764227654U;
	uint16_t x435 = 239U;
	static int32_t x436 = -1;
	static volatile int64_t t94 = -1120784525555LL;

	t94 = (x433*((x434^x435)/x436));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x437 = -23LL;
	static uint16_t x438 = UINT16_MAX;
	volatile uint16_t x439 = 2527U;
	volatile int64_t t95 = 2568751LL;

	t95 = (x437*((x438^x439)/x440));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x441 = 6846768834LLU;
	uint16_t x442 = 2566U;
	static uint16_t x443 = 34U;
	static uint64_t x444 = 835672831355035141LLU;
	volatile uint64_t t96 = 30335725204765LLU;

	t96 = (x441*((x442^x443)/x444));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x446 = 117U;
	int8_t x447 = INT8_MIN;
	uint8_t x448 = 10U;
	volatile uint32_t t97 = 3249151U;

	t97 = (x445*((x446^x447)/x448));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x456 = INT32_MIN;
	int64_t t98 = 994354667681593LL;

	t98 = (x453*((x454^x455)/x456));

	if (t98 != 49670356816411LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x457 = 767;
	static uint16_t x458 = UINT16_MAX;
	static uint16_t x459 = UINT16_MAX;
	static uint64_t x460 = 1497870627277LLU;
	uint64_t t99 = 296614485258LLU;

	t99 = (x457*((x458^x459)/x460));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

