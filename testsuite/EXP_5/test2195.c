#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MIN;
int16_t x6 = INT16_MAX;
uint64_t x8 = 1434244LLU;
int8_t x10 = -1;
int64_t t2 = -1LL;
static uint16_t x15 = UINT16_MAX;
int64_t t3 = -4LL;
uint32_t x18 = UINT32_MAX;
volatile int16_t x24 = -1;
uint32_t x29 = 0U;
volatile uint8_t x36 = 49U;
volatile uint32_t t11 = 2724636U;
uint32_t t12 = 1779495645U;
uint16_t x56 = 28684U;
uint32_t t14 = 883760U;
int64_t x62 = INT64_MAX;
static int64_t t15 = 6009759LL;
int32_t x67 = INT32_MAX;
volatile int8_t x72 = INT8_MAX;
uint16_t x79 = 84U;
volatile int32_t x83 = INT32_MIN;
int32_t t22 = -1;
int16_t x103 = INT16_MAX;
static int32_t t25 = 1260;
uint32_t x110 = UINT32_MAX;
int8_t x111 = 1;
int8_t x112 = 0;
uint32_t x114 = UINT32_MAX;
volatile int64_t x115 = INT64_MIN;
int16_t x119 = -1;
int16_t x125 = 405;
uint8_t x129 = 18U;
volatile uint64_t t34 = 30898820LLU;
int16_t x146 = -1;
int8_t x148 = INT8_MIN;
int32_t t36 = -9622570;
volatile int64_t t37 = -10273327LL;
static int8_t x171 = -1;
uint64_t t45 = 8LLU;
int8_t x185 = -1;
int64_t x187 = INT64_MIN;
volatile uint64_t t46 = 116LLU;
static volatile uint32_t x191 = UINT32_MAX;
int16_t x197 = INT16_MAX;
int64_t t49 = -4706845263100803LL;
volatile uint64_t x201 = UINT64_MAX;
int64_t x202 = -1LL;
volatile int64_t t52 = 1439471853707002856LL;
int64_t t54 = -11449375LL;
volatile int32_t x222 = 1881188;
int32_t x223 = INT32_MIN;
static int32_t x224 = INT32_MAX;
static volatile int64_t x226 = 59LL;
volatile uint64_t t59 = 220758LLU;
uint8_t x241 = UINT8_MAX;
volatile int32_t t60 = 1;
uint8_t x250 = 29U;
volatile uint8_t x251 = UINT8_MAX;
uint64_t x253 = 3896066271608348630LLU;
uint64_t x254 = UINT64_MAX;
volatile int32_t x257 = INT32_MAX;
volatile int32_t x263 = -1;
int64_t x272 = 219623924436LL;
int16_t x275 = INT16_MAX;
static uint32_t x284 = 4055914U;
int64_t x287 = -1LL;
volatile int8_t x288 = 1;
volatile uint8_t x289 = UINT8_MAX;
int8_t x293 = -1;
uint8_t x296 = 7U;
int32_t t73 = 50;
static int16_t x297 = -1;
volatile int32_t x299 = -1;
volatile int16_t x306 = -619;
int16_t x307 = INT16_MIN;
int16_t x308 = INT16_MIN;
int8_t x317 = 0;
static int8_t x320 = 62;
int64_t x323 = INT64_MAX;
uint8_t x325 = 17U;
volatile int32_t x327 = -3757;
int8_t x328 = -3;
uint8_t x336 = UINT8_MAX;
static int64_t t83 = -1823749787LL;
uint8_t x347 = UINT8_MAX;
static uint8_t x353 = 2U;
static int8_t x356 = -1;
int32_t x359 = INT32_MAX;
int64_t t90 = -3592LL;
volatile uint8_t x366 = 0U;
int32_t x367 = -1;
static volatile int64_t t92 = -850520492373595110LL;
int32_t x375 = INT32_MIN;
int64_t x377 = 6535282283LL;
volatile int64_t t94 = -1166809322289781261LL;
int32_t x381 = 164785640;
int8_t x385 = -1;
uint16_t x387 = UINT16_MAX;
uint8_t x388 = 62U;
int32_t t96 = -267678896;
uint64_t x390 = 16742127LLU;
uint8_t x393 = 79U;
volatile uint8_t x395 = 3U;


void f0(void) {
	int8_t x1 = -19;
	int32_t x3 = 421271685;
	static int8_t x4 = 1;
	int64_t t0 = 48714963502201LL;

	t0 = (x1&((x2^x3)^x4));

	if (t0 != -9223372036433504124LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile int64_t x7 = -22465340249700LL;
	static volatile uint64_t t1 = 3337860LLU;

	t1 = (x5&((x6^x7)^x8));

	if (t1 != 18446721608367895783LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile uint8_t x11 = 0U;
	int64_t x12 = INT64_MIN;

	t2 = (x9&((x10^x11)^x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 9;
	static int64_t x14 = INT64_MAX;
	uint16_t x16 = UINT16_MAX;

	t3 = (x13&((x14^x15)^x16));

	if (t3 != 9LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MIN;
	static int64_t t4 = INT64_MIN;

	t4 = (x17&((x18^x19)^x20));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 102U;
	volatile int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	static volatile int32_t t5 = 1;

	t5 = (x21&((x22^x23)^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = 0;
	volatile uint16_t x26 = 10300U;
	static volatile uint8_t x27 = 1U;
	static int8_t x28 = -1;
	static volatile int32_t t6 = -23;

	t6 = (x25&((x26^x27)^x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	uint8_t x31 = 0U;
	volatile int8_t x32 = INT8_MAX;
	volatile int64_t t7 = -6LL;

	t7 = (x29&((x30^x31)^x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int64_t x34 = INT64_MAX;
	static int64_t x35 = -216LL;
	volatile int64_t t8 = -15LL;

	t8 = (x33&((x34^x35)^x36));

	if (t8 != -9223372036854775578LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int16_t x38 = INT16_MIN;
	static int8_t x39 = INT8_MIN;
	static uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -16248129;

	t9 = (x37&((x38^x39)^x40));

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	int8_t x42 = INT8_MIN;
	static int32_t x43 = INT32_MIN;
	int16_t x44 = INT16_MIN;
	int64_t t10 = -46609460790707339LL;

	t10 = (x41&((x42^x43)^x44));

	if (t10 != -2147451008LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 5U;
	volatile uint32_t x46 = 2U;
	static int8_t x47 = INT8_MIN;
	int8_t x48 = 12;

	t11 = (x45&((x46^x47)^x48));

	if (t11 != 4U) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 1U;
	int16_t x50 = INT16_MAX;
	int32_t x51 = INT32_MIN;
	static int32_t x52 = -1;

	t12 = (x49&((x50^x51)^x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int64_t x54 = INT64_MIN;
	volatile int64_t x55 = INT64_MIN;
	volatile int64_t t13 = 11797198LL;

	t13 = (x53&((x54^x55)^x56));

	if (t13 != 28672LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	static int32_t x58 = 2599;
	int16_t x59 = -1;
	volatile int32_t x60 = INT32_MAX;

	t14 = (x57&((x58^x59)^x60));

	if (t14 != 2147486247U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int8_t x61 = -1;
	static int64_t x63 = -1LL;
	int16_t x64 = INT16_MAX;

	t15 = (x61&((x62^x63)^x64));

	if (t15 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	int16_t x66 = -1;
	static volatile int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = -1;

	t16 = (x65&((x66^x67)^x68));

	if (t16 != 2147450880) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	uint8_t x70 = 5U;
	uint32_t x71 = 9627480U;
	volatile uint32_t t17 = 21653U;

	t17 = (x69&((x70^x71)^x72));

	if (t17 != 9627426U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 8U;
	static volatile int64_t x74 = -1LL;
	uint64_t x75 = 67247LLU;
	static int64_t x76 = -7151225830317LL;
	uint64_t t18 = 257118LLU;

	t18 = (x73&((x74^x75)^x76));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	int8_t x78 = INT8_MIN;
	int32_t x80 = 82734689;
	volatile int32_t t19 = 1504;

	t19 = (x77&((x78^x79)^x80));

	if (t19 != 2064748981) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 230;
	uint64_t x82 = 3257799371613363185LLU;
	int16_t x84 = INT16_MAX;
	uint64_t t20 = 23399117166LLU;

	t20 = (x81&((x82^x83)^x84));

	if (t20 != 6LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -32;
	int8_t x86 = -1;
	int64_t x87 = -574475383622479305LL;
	volatile uint64_t x88 = 160382687940418237LLU;
	uint64_t t21 = 10067LLU;

	t21 = (x85&((x86^x87)^x88));

	if (t21 != 414675747249698656LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -13;
	int32_t x90 = -271169;
	static int16_t x91 = -1;
	static volatile uint16_t x92 = 518U;

	t22 = (x89&((x90^x91)^x92));

	if (t22 != 270658) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 663;
	static int16_t x94 = 4775;
	static int8_t x95 = 21;
	static int16_t x96 = -1;
	static volatile int32_t t23 = 249772;

	t23 = (x93&((x94^x95)^x96));

	if (t23 != 5) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 116880LLU;
	static int16_t x98 = 41;
	int8_t x99 = INT8_MIN;
	static volatile int8_t x100 = INT8_MAX;
	static uint64_t t24 = 115926818369153929LLU;

	t24 = (x97&((x98^x99)^x100));

	if (t24 != 116880LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	static int8_t x102 = INT8_MIN;
	int16_t x104 = 98;

	t25 = (x101&((x102^x103)^x104));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	uint16_t x108 = 7U;
	static volatile int64_t t26 = -492697605LL;

	t26 = (x105&((x106^x107)^x108));

	if (t26 != 9223372036854775687LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 495010LL;
	volatile int64_t t27 = -16984073LL;

	t27 = (x109&((x110^x111)^x112));

	if (t27 != 495010LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = UINT64_MAX;
	int64_t x116 = INT64_MAX;
	static uint64_t t28 = 10LLU;

	t28 = (x113&((x114^x115)^x116));

	if (t28 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 23LL;
	int64_t x118 = INT64_MIN;
	int8_t x120 = INT8_MIN;
	int64_t t29 = 59324LL;

	t29 = (x117&((x118^x119)^x120));

	if (t29 != 23LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	int8_t x122 = -60;
	int32_t x123 = -1;
	int32_t x124 = 31;
	volatile int32_t t30 = -125684787;

	t30 = (x121&((x122^x123)^x124));

	if (t30 != 36) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = 5;
	int16_t x127 = -1;
	int16_t x128 = INT16_MAX;
	static volatile int32_t t31 = -15528;

	t31 = (x125&((x126^x127)^x128));

	if (t31 != 5) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = 261925933299LL;
	uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	int64_t t32 = 0LL;

	t32 = (x129&((x130^x131)^x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -6;
	uint16_t x134 = UINT16_MAX;
	static int8_t x135 = 0;
	int16_t x136 = 7173;
	volatile int32_t t33 = -83681;

	t33 = (x133&((x134^x135)^x136));

	if (t33 != 58362) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = 1;
	volatile uint64_t x138 = 493LLU;
	uint16_t x139 = 117U;
	int32_t x140 = 314;

	t34 = (x137&((x138^x139)^x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 864663819;
	volatile uint64_t x142 = 406611378474515284LLU;
	int64_t x143 = 94055740LL;
	uint64_t x144 = 457460LLU;
	uint64_t t35 = 1928629078481LLU;

	t35 = (x141&((x142^x143)^x144));

	if (t35 != 838936584LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	int32_t x147 = 27690;

	t36 = (x145&((x146^x147)^x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x151 = -1LL;
	static volatile int16_t x152 = INT16_MIN;

	t37 = (x149&((x150^x151)^x152));

	if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MAX;
	int16_t x154 = 1;
	static volatile uint16_t x155 = 201U;
	int32_t x156 = 0;
	volatile int64_t t38 = 1686005225424LL;

	t38 = (x153&((x154^x155)^x156));

	if (t38 != 200LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 1LLU;
	int64_t x158 = INT64_MIN;
	int64_t x159 = -1LL;
	uint64_t x160 = 33398945LLU;
	uint64_t t39 = 53615774806357LLU;

	t39 = (x157&((x158^x159)^x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x161 = INT8_MIN;
	int16_t x162 = INT16_MIN;
	static int32_t x163 = -1;
	int16_t x164 = INT16_MIN;
	int32_t t40 = 145377;

	t40 = (x161&((x162^x163)^x164));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 6U;
	uint64_t x166 = 43731145797524447LLU;
	static uint32_t x167 = 2008685955U;
	uint32_t x168 = UINT32_MAX;
	static uint64_t t41 = 438388569423046385LLU;

	t41 = (x165&((x166^x167)^x168));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 827U;
	volatile int8_t x170 = -1;
	static uint32_t x172 = UINT32_MAX;
	static volatile uint32_t t42 = 101U;

	t42 = (x169&((x170^x171)^x172));

	if (t42 != 827U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MIN;
	uint8_t x175 = UINT8_MAX;
	volatile uint64_t x176 = 242564LLU;
	uint64_t t43 = 4617805322387LLU;

	t43 = (x173&((x174^x175)^x176));

	if (t43 != 13179LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 973U;
	volatile int8_t x178 = INT8_MIN;
	static volatile int32_t x179 = 1;
	int32_t x180 = INT32_MIN;
	volatile uint32_t t44 = 46U;

	t44 = (x177&((x178^x179)^x180));

	if (t44 != 897U) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x181 = -1;
	int16_t x182 = 0;
	volatile int64_t x183 = -83LL;
	uint64_t x184 = 979LLU;

	t45 = (x181&((x182^x183)^x184));

	if (t45 != 18446744073709550718LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = UINT64_MAX;
	static uint32_t x188 = 4952133U;

	t46 = (x185&((x186^x187)^x188));

	if (t46 != 9223372036849823674LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 1746271127272473LL;
	uint64_t x190 = 3749734LLU;
	static volatile int32_t x192 = INT32_MIN;
	uint64_t t47 = 37499037LLU;

	t47 = (x189&((x190^x191)^x192));

	if (t47 != 1746271123589145LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 2444;
	volatile uint32_t x194 = UINT32_MAX;
	int8_t x195 = INT8_MIN;
	static int64_t x196 = -28641LL;
	int64_t t48 = 15511112228621LL;

	t48 = (x193&((x194^x195)^x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 856U;
	int64_t x199 = 2624095759371643619LL;
	int8_t x200 = -1;

	t49 = (x197&((x198^x199)^x200));

	if (t49 != 22084LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x203 = -1LL;
	uint8_t x204 = 2U;
	uint64_t t50 = 5LLU;

	t50 = (x201&((x202^x203)^x204));

	if (t50 != 2LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x205 = 296U;
	volatile uint16_t x206 = UINT16_MAX;
	uint8_t x207 = 0U;
	int64_t x208 = 78863112606456LL;
	volatile int64_t t51 = -55438LL;

	t51 = (x205&((x206^x207)^x208));

	if (t51 != 256LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	int16_t x210 = -1;
	int8_t x211 = 1;
	volatile int32_t x212 = INT32_MIN;

	t52 = (x209&((x210^x211)^x212));

	if (t52 != 2147483646LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x214 = 2396U;
	int8_t x215 = -32;
	int64_t x216 = -4553069557957014LL;
	volatile int64_t t53 = -1LL;

	t53 = (x213&((x214^x215)^x216));

	if (t53 != 9218818963996395734LL) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = 0;
	int64_t x218 = 49819958LL;
	uint16_t x219 = 7U;
	volatile int64_t x220 = 827679193819145LL;

	t54 = (x217&((x218^x219)^x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int32_t t55 = 58161;

	t55 = (x221&((x222^x223)^x224));

	if (t55 != -1881189) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x225 = INT32_MAX;
	uint32_t x227 = 53491838U;
	static int64_t x228 = INT64_MAX;
	volatile int64_t t56 = 122580437149155914LL;

	t56 = (x225&((x226^x227)^x228));

	if (t56 != 2093991866LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = -1;
	uint64_t x230 = UINT64_MAX;
	uint64_t x231 = UINT64_MAX;
	int16_t x232 = INT16_MAX;
	static volatile uint64_t t57 = 14LLU;

	t57 = (x229&((x230^x231)^x232));

	if (t57 != 32767LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	static int32_t x234 = INT32_MAX;
	static int64_t x235 = 40714124LL;
	int16_t x236 = -956;
	int64_t t58 = 2772135727342980LL;

	t58 = (x233&((x234^x235)^x236));

	if (t58 != -2106770432LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 29U;
	int16_t x238 = INT16_MIN;
	int16_t x239 = INT16_MAX;
	uint64_t x240 = 59003441972652156LLU;

	t59 = (x237&((x238^x239)^x240));

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x242 = 13U;
	volatile int32_t x243 = INT32_MAX;
	uint8_t x244 = UINT8_MAX;

	t60 = (x241&((x242^x243)^x244));

	if (t60 != 13) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MAX;
	int32_t x246 = -3;
	int64_t x247 = INT64_MAX;
	int64_t x248 = INT64_MAX;
	static volatile int64_t t61 = -5LL;

	t61 = (x245&((x246^x247)^x248));

	if (t61 != 2147483645LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x252 = 1LLU;
	volatile uint64_t t62 = 69534682950LLU;

	t62 = (x249&((x250^x251)^x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x255 = 160900;
	int64_t x256 = INT64_MIN;
	static volatile uint64_t t63 = 51409167377LLU;

	t63 = (x253&((x254^x255)^x256));

	if (t63 != 3896066271608343378LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x258 = INT64_MIN;
	volatile int8_t x259 = -1;
	static int16_t x260 = INT16_MAX;
	volatile int64_t t64 = 132542583504139LL;

	t64 = (x257&((x258^x259)^x260));

	if (t64 != 2147450880LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	uint32_t x262 = UINT32_MAX;
	int32_t x264 = -58;
	volatile uint32_t t65 = 1U;

	t65 = (x261&((x262^x263)^x264));

	if (t65 != 4294967238U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	int64_t x266 = 105317193927LL;
	int16_t x267 = 3;
	static int32_t x268 = INT32_MAX;
	volatile int64_t t66 = -2414400362068276LL;

	t66 = (x265&((x266^x267)^x268));

	if (t66 != 10043LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 2U;
	uint16_t x270 = 3374U;
	volatile uint64_t x271 = UINT64_MAX;
	uint64_t t67 = 585897181LLU;

	t67 = (x269&((x270^x271)^x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = 9;
	int64_t x274 = INT64_MIN;
	static int8_t x276 = INT8_MIN;
	volatile int64_t t68 = 0LL;

	t68 = (x273&((x274^x275)^x276));

	if (t68 != 9LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int16_t x278 = -1;
	int16_t x279 = INT16_MAX;
	volatile int16_t x280 = -1;
	static volatile int32_t t69 = -70804;

	t69 = (x277&((x278^x279)^x280));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = -1;
	int32_t x283 = 387;
	uint32_t t70 = 222488U;

	t70 = (x281&((x282^x283)^x284));

	if (t70 != 22U) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint32_t x286 = 1907416U;
	volatile uint64_t t71 = 5842709525LLU;

	t71 = (x285&((x286^x287)^x288));

	if (t71 != 18446744073707644198LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MAX;
	int16_t x291 = INT16_MIN;
	int8_t x292 = -1;
	volatile int32_t t72 = -3558;

	t72 = (x289&((x290^x291)^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -3;
	uint16_t x295 = 141U;

	t73 = (x293&((x294^x295)^x296));

	if (t73 != -137) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = INT32_MIN;
	volatile int64_t x300 = INT64_MIN;
	int64_t t74 = -154549361649LL;

	t74 = (x297&((x298^x299)^x300));

	if (t74 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = 1;
	volatile int8_t x302 = 59;
	int16_t x303 = 8;
	static int32_t x304 = INT32_MAX;
	int32_t t75 = 695791051;

	t75 = (x301&((x302^x303)^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -1LL;
	static volatile int64_t t76 = 1519125LL;

	t76 = (x305&((x306^x307)^x308));

	if (t76 != -619LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -7;
	volatile int16_t x310 = INT16_MAX;
	uint64_t x311 = 183077LLU;
	int16_t x312 = 3693;
	uint64_t t77 = 2798LLU;

	t77 = (x309&((x310^x311)^x312));

	if (t77 != 178865LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 332;
	volatile uint8_t x314 = UINT8_MAX;
	int64_t x315 = 466871476170LL;
	int64_t x316 = INT64_MIN;
	volatile int64_t t78 = 1531485546092028231LL;

	t78 = (x313&((x314^x315)^x316));

	if (t78 != 260LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MIN;
	uint64_t x319 = UINT64_MAX;
	static volatile uint64_t t79 = 1188565LLU;

	t79 = (x317&((x318^x319)^x320));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	int64_t x322 = 24252LL;
	int64_t x324 = -1LL;
	static int64_t t80 = INT64_MIN;

	t80 = (x321&((x322^x323)^x324));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x326 = INT16_MIN;
	static volatile int32_t t81 = -12;

	t81 = (x325&((x326^x327)^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -254;
	int8_t x330 = -1;
	uint16_t x331 = 25699U;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 137;

	t82 = (x329&((x330^x331)^x332));

	if (t82 != 6912) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = -1;
	int64_t x334 = -1451992LL;
	int8_t x335 = INT8_MAX;

	t83 = (x333&((x334^x335)^x336));

	if (t83 != -1451864LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	static int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	int16_t x340 = -46;
	volatile uint32_t t84 = 230U;

	t84 = (x337&((x338^x339)^x340));

	if (t84 != 2147483693U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -33;
	volatile int64_t x342 = -51426826724298646LL;
	int64_t x343 = -154700545599LL;
	static volatile int32_t x344 = INT32_MAX;
	volatile int64_t t85 = -123LL;

	t85 = (x341&((x342^x343)^x344));

	if (t85 != 51426672761818708LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 7LLU;
	volatile int16_t x346 = -1;
	int32_t x348 = 2604209;
	uint64_t t86 = 64440LLU;

	t86 = (x345&((x346^x347)^x348));

	if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	uint16_t x350 = 59U;
	uint64_t x351 = 240420095167831753LLU;
	int16_t x352 = INT16_MAX;
	uint64_t t87 = 1175008566656LLU;

	t87 = (x349&((x350^x351)^x352));

	if (t87 != 240420095167848717LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MAX;
	int32_t x355 = 4909008;
	int32_t t88 = 4102811;

	t88 = (x353&((x354^x355)^x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static uint32_t x358 = UINT32_MAX;
	static uint8_t x360 = 59U;
	int64_t t89 = 131924479555LL;

	t89 = (x357&((x358^x359)^x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x361 = -1;
	volatile uint8_t x362 = 4U;
	int32_t x363 = 193;
	static int64_t x364 = 132007301620798LL;

	t90 = (x361&((x362^x363)^x364));

	if (t90 != 132007301620987LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = -1;
	volatile int64_t x368 = -67932389545670486LL;
	int64_t t91 = 148702983LL;

	t91 = (x365&((x366^x367)^x368));

	if (t91 != 67932389545670485LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x369 = -845;
	static int64_t x370 = INT64_MAX;
	int64_t x371 = -17063934LL;
	int8_t x372 = INT8_MIN;

	t92 = (x369&((x370^x371)^x372));

	if (t92 != 9223372036837711921LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = INT32_MAX;
	int16_t x374 = -9;
	uint8_t x376 = UINT8_MAX;
	int32_t t93 = 8577;

	t93 = (x373&((x374^x375)^x376));

	if (t93 != 2147483400) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = INT64_MAX;
	uint32_t x379 = 22375U;
	volatile int8_t x380 = 52;

	t94 = (x377&((x378^x379)^x380));

	if (t94 != 6535260200LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	int64_t t95 = 143LL;

	t95 = (x381&((x382^x383)^x384));

	if (t95 != 164757608LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x386 = 15;

	t96 = (x385&((x386^x387)^x388));

	if (t96 != 65486) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 12485;
	static int8_t x391 = INT8_MAX;
	volatile uint8_t x392 = UINT8_MAX;
	volatile uint64_t t97 = 1447LLU;

	t97 = (x389&((x390^x391)^x392));

	if (t97 != 12357LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -11520;
	int64_t x396 = INT64_MIN;
	int64_t t98 = 0LL;

	t98 = (x393&((x394^x395)^x396));

	if (t98 != 3LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x397 = INT16_MIN;
	uint16_t x398 = 42U;
	uint32_t x399 = 10414U;
	int16_t x400 = -1;
	static uint32_t t99 = 12U;

	t99 = (x397&((x398^x399)^x400));

	if (t99 != 4294934528U) { NG(); } else { ; }
	
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

