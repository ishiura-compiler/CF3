#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
volatile int8_t x14 = -1;
volatile int8_t x17 = -24;
volatile uint8_t x20 = 1U;
int64_t x24 = -1LL;
static int64_t x27 = 16642056096LL;
uint64_t x29 = 220695LLU;
static volatile uint64_t t7 = 11741665LLU;
int16_t x33 = INT16_MIN;
uint32_t x34 = UINT32_MAX;
int8_t x35 = -11;
int32_t x37 = INT32_MIN;
int8_t x39 = INT8_MIN;
uint32_t x40 = 23679U;
static volatile int16_t x43 = -1;
volatile int32_t t12 = -52123612;
int8_t x66 = -1;
int16_t x69 = -1;
uint8_t x70 = 31U;
volatile int8_t x74 = INT8_MIN;
static int16_t x75 = -1;
int32_t x76 = -1843608;
int32_t t18 = 116452;
uint64_t x79 = UINT64_MAX;
uint32_t x81 = UINT32_MAX;
int32_t x82 = INT32_MAX;
int32_t x83 = INT32_MIN;
uint32_t t20 = 9U;
int8_t x86 = 0;
int32_t x87 = -1;
volatile int32_t t21 = 31;
uint32_t x93 = UINT32_MAX;
uint64_t x98 = 880182837LLU;
static uint8_t x106 = 55U;
int32_t x107 = -10794;
volatile uint32_t x112 = 78307U;
int32_t x117 = INT32_MIN;
volatile int64_t t29 = INT64_MIN;
uint64_t x122 = 11845691624110LLU;
static int16_t x129 = INT16_MIN;
int8_t x137 = INT8_MIN;
int8_t x138 = -1;
uint64_t x141 = UINT64_MAX;
uint64_t x142 = 16470882830LLU;
int8_t x144 = INT8_MIN;
static volatile int8_t x147 = -49;
int16_t x150 = -1;
uint16_t x151 = UINT16_MAX;
volatile int32_t t37 = -88;
int64_t t41 = -156647684774156231LL;
uint16_t x175 = 3698U;
static int8_t x183 = 1;
static uint64_t t45 = 11653203130LLU;
uint32_t x187 = 33U;
int32_t x188 = INT32_MAX;
volatile uint32_t x189 = UINT32_MAX;
int8_t x191 = INT8_MIN;
uint32_t x192 = UINT32_MAX;
uint8_t x200 = 0U;
volatile uint64_t x205 = 13LLU;
static int8_t x206 = INT8_MIN;
uint32_t t56 = 5675151U;
static int64_t t57 = -4LL;
static uint8_t x235 = 1U;
uint16_t x248 = 2U;
int64_t x251 = -33414136612LL;
uint32_t t63 = 1536383U;
volatile int64_t t64 = 1726LL;
int16_t x261 = -16;
static uint64_t t66 = 3822604321828454512LLU;
uint16_t x269 = 19U;
static int8_t x275 = -1;
uint64_t x278 = 86832082871872LLU;
volatile int8_t x279 = INT8_MIN;
volatile int32_t t70 = -2017;
uint64_t x287 = UINT64_MAX;
uint64_t t71 = 123LLU;
volatile int32_t x294 = 329;
int8_t x296 = 3;
uint32_t x297 = 54484565U;
int32_t x300 = INT32_MIN;
int32_t t75 = 1293764;
int32_t x307 = INT32_MIN;
static int64_t x308 = 1LL;
int32_t t76 = 3030412;
int8_t x311 = -1;
volatile int16_t x312 = 3;
int16_t x313 = INT16_MIN;
volatile int64_t x318 = -1LL;
int64_t x320 = INT64_MIN;
static volatile int64_t t79 = 24807785LL;
static int8_t x326 = -1;
uint8_t x327 = UINT8_MAX;
uint64_t x328 = 1795035136216LLU;
volatile int32_t t81 = -130018;
volatile int64_t x333 = -1LL;
int8_t x340 = INT8_MIN;
volatile int8_t x346 = 7;
int8_t x353 = -1;
static volatile int64_t x359 = INT64_MIN;
uint8_t x360 = UINT8_MAX;
static int16_t x361 = 1899;
volatile int32_t t90 = 23810275;
uint16_t x367 = 670U;
uint16_t x368 = UINT16_MAX;
volatile int16_t x369 = -1;
uint8_t x375 = UINT8_MAX;
int32_t x377 = -699;
static uint64_t t96 = 6LLU;
int16_t x392 = INT16_MIN;


void f0(void) {
	uint64_t x1 = 188628269638071LLU;
	static uint32_t x3 = 422952847U;
	uint64_t x4 = 26506159LLU;
	static uint64_t t0 = 97677852LLU;

	t0 = (x1&(x2|(x3<=x4)));

	if (t0 != 188628269638071LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	static volatile uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 188LLU;
	int32_t x8 = -1;
	uint64_t t1 = UINT64_MAX;

	t1 = (x5&(x6|(x7<=x8)));

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 753U;
	volatile uint16_t x10 = UINT16_MAX;
	uint32_t x11 = 131724811U;
	uint32_t x12 = 15U;
	volatile int32_t t2 = -168002663;

	t2 = (x9&(x10|(x11<=x12)));

	if (t2 != 753) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile int8_t x15 = INT8_MIN;
	volatile int8_t x16 = INT8_MAX;
	volatile int32_t t3 = -5883;

	t3 = (x13&(x14|(x15<=x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	uint8_t x19 = 7U;
	volatile int64_t t4 = 7LL;

	t4 = (x17&(x18|(x19<=x20)));

	if (t4 != -24LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 23;
	int32_t x22 = -4;
	uint8_t x23 = 9U;
	static int32_t t5 = 63543;

	t5 = (x21&(x22|(x23<=x24)));

	if (t5 != 20) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	static uint32_t x26 = 5071U;
	int16_t x28 = 6;
	static volatile uint32_t t6 = 140325441U;

	t6 = (x25&(x26|(x27<=x28)));

	if (t6 != 5071U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x30 = 1U;
	int32_t x31 = -614;
	uint8_t x32 = 5U;

	t7 = (x29&(x30|(x31<=x32)));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x36 = 1LL;
	uint32_t t8 = 34150U;

	t8 = (x33&(x34|(x35<=x36)));

	if (t8 != 4294934528U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MIN;
	static volatile int32_t t9 = INT32_MIN;

	t9 = (x37&(x38|(x39<=x40)));

	if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 50U;
	int64_t x42 = INT64_MIN;
	int32_t x44 = -1;
	volatile int64_t t10 = -1748805567521LL;

	t10 = (x41&(x42|(x43<=x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 9U;
	static int32_t x46 = -1174371;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;
	static volatile int32_t t11 = -1894;

	t11 = (x45&(x46|(x47<=x48)));

	if (t11 != 9) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	static uint16_t x50 = 0U;
	volatile int32_t x51 = 39810248;
	int8_t x52 = -1;

	t12 = (x49&(x50|(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int64_t x54 = INT64_MIN;
	static uint8_t x55 = 1U;
	int32_t x56 = -1;
	volatile int64_t t13 = -15781996782LL;

	t13 = (x53&(x54|(x55<=x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = 14780;
	volatile uint16_t x59 = 1U;
	int8_t x60 = INT8_MIN;
	static int32_t t14 = -8715384;

	t14 = (x57&(x58|(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 62U;
	uint32_t x62 = 431170U;
	int8_t x63 = -13;
	uint32_t x64 = UINT32_MAX;
	uint32_t t15 = 119632U;

	t15 = (x61&(x62|(x63<=x64)));

	if (t15 != 2U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = UINT64_MAX;
	uint16_t x67 = 5138U;
	uint32_t x68 = 288487U;
	uint64_t t16 = UINT64_MAX;

	t16 = (x65&(x66|(x67<=x68)));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x71 = INT16_MIN;
	uint8_t x72 = UINT8_MAX;
	volatile int32_t t17 = -1284661;

	t17 = (x69&(x70|(x71<=x72)));

	if (t17 != 31) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;

	t18 = (x73&(x74|(x75<=x76)));

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = 578451405896771640LL;
	int64_t x78 = 46896992775086LL;
	uint32_t x80 = 212805132U;
	static volatile int64_t t19 = -655464263019LL;

	t19 = (x77&(x78|(x79<=x80)));

	if (t19 != 2358071814184LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x84 = INT16_MIN;

	t20 = (x81&(x82|(x83<=x84)));

	if (t20 != 2147483647U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MAX;
	volatile uint8_t x88 = 5U;

	t21 = (x85&(x86|(x87<=x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	volatile int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MAX;
	int32_t x92 = -1;
	int64_t t22 = INT64_MIN;

	t22 = (x89&(x90|(x91<=x92)));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x94 = INT32_MIN;
	volatile uint8_t x95 = UINT8_MAX;
	static int32_t x96 = -64070168;
	uint32_t t23 = 2U;

	t23 = (x93&(x94|(x95<=x96)));

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = 0;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = INT64_MIN;
	volatile uint64_t t24 = 84646581LLU;

	t24 = (x97&(x98|(x99<=x100)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	static int16_t x102 = -1;
	uint32_t x103 = 513U;
	int64_t x104 = -1LL;
	static volatile int32_t t25 = -59060;

	t25 = (x101&(x102|(x103<=x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 1317206440071LLU;
	static int64_t x108 = 1263LL;
	volatile uint64_t t26 = 18302418879663264LLU;

	t26 = (x105&(x106|(x107<=x108)));

	if (t26 != 7LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -702;
	volatile int64_t x110 = INT64_MAX;
	static int64_t x111 = -1LL;
	volatile int64_t t27 = 50945884LL;

	t27 = (x109&(x110|(x111<=x112)));

	if (t27 != 9223372036854775106LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 861838U;
	uint16_t x114 = 3U;
	volatile int64_t x115 = 20832231679814LL;
	int8_t x116 = INT8_MIN;
	uint32_t t28 = 0U;

	t28 = (x113&(x114|(x115<=x116)));

	if (t28 != 2U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;
	int16_t x120 = INT16_MIN;

	t29 = (x117&(x118|(x119<=x120)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x121 = 273545U;
	int16_t x123 = -31;
	static volatile uint16_t x124 = UINT16_MAX;
	volatile uint64_t t30 = 72906945805438254LLU;

	t30 = (x121&(x122|(x123<=x124)));

	if (t30 != 264329LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	volatile int16_t x127 = -1;
	static int32_t x128 = INT32_MIN;
	int32_t t31 = -523518;

	t31 = (x125&(x126|(x127<=x128)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = -7;
	static int8_t x131 = INT8_MIN;
	uint32_t x132 = 462100842U;
	int32_t t32 = 90862479;

	t32 = (x129&(x130|(x131<=x132)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = UINT16_MAX;
	static int64_t x134 = -6LL;
	static int64_t x135 = -1LL;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t33 = 324473LL;

	t33 = (x133&(x134|(x135<=x136)));

	if (t33 != 65530LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x139 = 3U;
	uint16_t x140 = 1U;
	int32_t t34 = -220;

	t34 = (x137&(x138|(x139<=x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x143 = 12LLU;
	uint64_t t35 = 27607LLU;

	t35 = (x141&(x142|(x143<=x144)));

	if (t35 != 16470882831LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -3;
	uint16_t x146 = UINT16_MAX;
	static volatile int32_t x148 = INT32_MAX;
	volatile int32_t t36 = 1735069;

	t36 = (x145&(x146|(x147<=x148)));

	if (t36 != 65533) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = 22;
	int16_t x152 = -1;

	t37 = (x149&(x150|(x151<=x152)));

	if (t37 != 22) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -848;
	static int8_t x154 = 1;
	int16_t x155 = 3;
	uint64_t x156 = 95075683010LLU;
	int32_t t38 = 0;

	t38 = (x153&(x154|(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int64_t x158 = -1490230302238331LL;
	int8_t x159 = 3;
	static int64_t x160 = INT64_MIN;
	volatile int64_t t39 = 1493406967744994068LL;

	t39 = (x157&(x158|(x159<=x160)));

	if (t39 != -1490231245144064LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 2U;
	static int32_t x162 = -146439260;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = 497LL;
	volatile int32_t t40 = 214731;

	t40 = (x161&(x162|(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = -436035165911LL;
	int32_t x166 = INT32_MAX;
	int32_t x167 = INT32_MIN;
	int8_t x168 = 63;

	t41 = (x165&(x166|(x167<=x168)));

	if (t41 != 2051498281LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	static int16_t x172 = -1;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x169&(x170|(x171<=x172)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MAX;
	uint64_t x174 = 2143437382138LLU;
	uint8_t x176 = 13U;
	volatile uint64_t t43 = 2LLU;

	t43 = (x173&(x174|(x175<=x176)));

	if (t43 != 2143437382138LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = 29081669LL;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	int8_t x180 = INT8_MIN;
	static volatile int64_t t44 = 127646928925870LL;

	t44 = (x177&(x178|(x179<=x180)));

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	uint64_t x182 = 16709983875LLU;
	int8_t x184 = -1;

	t45 = (x181&(x182|(x183<=x184)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x185 = 13;
	int8_t x186 = 3;
	volatile int32_t t46 = 940;

	t46 = (x185&(x186|(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MAX;
	static uint32_t t47 = 118351947U;

	t47 = (x189&(x190|(x191<=x192)));

	if (t47 != 32767U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = -1;
	static int16_t x194 = 91;
	int32_t x195 = INT32_MIN;
	volatile uint8_t x196 = 4U;
	volatile int32_t t48 = 49398;

	t48 = (x193&(x194|(x195<=x196)));

	if (t48 != 91) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x197 = UINT32_MAX;
	uint8_t x198 = 122U;
	uint16_t x199 = 1596U;
	volatile uint32_t t49 = 1U;

	t49 = (x197&(x198|(x199<=x200)));

	if (t49 != 122U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 7766025U;
	int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MIN;
	int8_t x204 = -1;
	volatile int64_t t50 = -36115LL;

	t50 = (x201&(x202|(x203<=x204)));

	if (t50 != 7766025LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x207 = UINT32_MAX;
	uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t51 = 5350767369245LLU;

	t51 = (x205&(x206|(x207<=x208)));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = INT64_MAX;
	volatile int8_t x211 = INT8_MIN;
	static int64_t x212 = -1LL;
	static int64_t t52 = 4650715647540LL;

	t52 = (x209&(x210|(x211<=x212)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 23719398U;
	static uint16_t x215 = UINT16_MAX;
	static volatile int32_t x216 = -16508143;
	uint64_t t53 = 391658350916LLU;

	t53 = (x213&(x214|(x215<=x216)));

	if (t53 != 23719398LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x217 = 0;
	uint64_t x218 = 819711LLU;
	static volatile int16_t x219 = 1;
	int64_t x220 = INT64_MIN;
	volatile uint64_t t54 = 181388151LLU;

	t54 = (x217&(x218|(x219<=x220)));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x221 = 63U;
	int32_t x222 = 3574;
	volatile int32_t x223 = -1;
	int32_t x224 = -395000;
	volatile int32_t t55 = 64101537;

	t55 = (x221&(x222|(x223<=x224)));

	if (t55 != 54) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x225 = 41032571U;
	uint32_t x226 = UINT32_MAX;
	volatile int16_t x227 = INT16_MAX;
	int64_t x228 = INT64_MIN;

	t56 = (x225&(x226|(x227<=x228)));

	if (t56 != 41032571U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -10935008284953LL;
	int8_t x230 = INT8_MAX;
	static int64_t x231 = INT64_MIN;
	volatile int32_t x232 = INT32_MAX;

	t57 = (x229&(x230|(x231<=x232)));

	if (t57 != 103LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 111U;
	uint32_t x234 = UINT32_MAX;
	static int8_t x236 = 39;
	volatile uint32_t t58 = 33020463U;

	t58 = (x233&(x234|(x235<=x236)));

	if (t58 != 111U) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 45843U;
	int16_t x238 = 2;
	static uint64_t x239 = 21317337207905LLU;
	static int8_t x240 = -1;
	uint32_t t59 = 109907094U;

	t59 = (x237&(x238|(x239<=x240)));

	if (t59 != 3U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	int8_t x242 = INT8_MAX;
	int16_t x243 = -1;
	int16_t x244 = -2502;
	int64_t t60 = -763838850454618LL;

	t60 = (x241&(x242|(x243<=x244)));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	volatile int8_t x246 = INT8_MIN;
	uint32_t x247 = UINT32_MAX;
	volatile int64_t t61 = INT64_MIN;

	t61 = (x245&(x246|(x247<=x248)));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 22U;
	static int8_t x250 = 1;
	int16_t x252 = INT16_MAX;
	int32_t t62 = 6363;

	t62 = (x249&(x250|(x251<=x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 4986420U;
	volatile int32_t x254 = INT32_MIN;
	volatile int32_t x255 = INT32_MAX;
	int8_t x256 = INT8_MAX;

	t63 = (x253&(x254|(x255<=x256)));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = -4588999811003573974LL;
	static int8_t x258 = INT8_MIN;
	int8_t x259 = INT8_MIN;
	static uint8_t x260 = UINT8_MAX;

	t64 = (x257&(x258|(x259<=x260)));

	if (t64 != -4588999811003574016LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = INT8_MIN;
	int8_t x263 = INT8_MIN;
	int64_t x264 = -1LL;
	int32_t t65 = -1672908;

	t65 = (x261&(x262|(x263<=x264)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 19055280078447LLU;
	static uint16_t x266 = 0U;
	int16_t x267 = -997;
	static int16_t x268 = INT16_MAX;

	t66 = (x265&(x266|(x267<=x268)));

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x270 = UINT64_MAX;
	int32_t x271 = INT32_MIN;
	static int16_t x272 = -1;
	uint64_t t67 = 29636827591137LLU;

	t67 = (x269&(x270|(x271<=x272)));

	if (t67 != 19LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = INT8_MIN;
	volatile uint16_t x274 = UINT16_MAX;
	uint32_t x276 = 222593U;
	volatile int32_t t68 = 0;

	t68 = (x273&(x274|(x275<=x276)));

	if (t68 != 65408) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 0;
	int32_t x280 = -1;
	static volatile uint64_t t69 = 100599384173576LLU;

	t69 = (x277&(x278|(x279<=x280)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 5707;
	int16_t x282 = -12;
	int16_t x283 = -1;
	static volatile int16_t x284 = INT16_MIN;

	t70 = (x281&(x282|(x283<=x284)));

	if (t70 != 5696) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MAX;
	uint64_t x286 = 1790439LLU;
	int8_t x288 = INT8_MAX;

	t71 = (x285&(x286|(x287<=x288)));

	if (t71 != 103LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -559163072;
	int8_t x290 = INT8_MAX;
	int16_t x291 = 1082;
	int32_t x292 = INT32_MIN;
	int32_t t72 = -46;

	t72 = (x289&(x290|(x291<=x292)));

	if (t72 != 64) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MIN;
	int64_t x295 = INT64_MAX;
	static int32_t t73 = 122;

	t73 = (x293&(x294|(x295<=x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x298 = -1;
	int16_t x299 = INT16_MIN;
	uint32_t t74 = 1684151056U;

	t74 = (x297&(x298|(x299<=x300)));

	if (t74 != 54484565U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = -1;
	static int16_t x302 = 25;
	volatile int64_t x303 = -15875227LL;
	static volatile int32_t x304 = -1;

	t75 = (x301&(x302|(x303<=x304)));

	if (t75 != 25) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x306 = 0U;

	t76 = (x305&(x306|(x307<=x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static int64_t x310 = -1LL;
	static volatile int64_t t77 = 512837281253344LL;

	t77 = (x309&(x310|(x311<=x312)));

	if (t77 != 127LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x314 = UINT32_MAX;
	int32_t x315 = -1;
	int64_t x316 = -1LL;
	static uint32_t t78 = 11U;

	t78 = (x313&(x314|(x315<=x316)));

	if (t78 != 4294934528U) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 330944U;
	int64_t x319 = 12742493424080412LL;

	t79 = (x317&(x318|(x319<=x320)));

	if (t79 != 330944LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 1LLU;
	int32_t x322 = -1;
	volatile uint64_t x323 = 214301885953514LLU;
	volatile int64_t x324 = 2454066LL;
	uint64_t t80 = 49009944LLU;

	t80 = (x321&(x322|(x323<=x324)));

	if (t80 != 1LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 4619U;

	t81 = (x325&(x326|(x327<=x328)));

	if (t81 != 4619) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 96;
	int8_t x330 = -1;
	uint8_t x331 = UINT8_MAX;
	int16_t x332 = -1;
	int32_t t82 = -187;

	t82 = (x329&(x330|(x331<=x332)));

	if (t82 != 96) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x334 = 15114U;
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 3611U;
	volatile int64_t t83 = -4593581175089133621LL;

	t83 = (x333&(x334|(x335<=x336)));

	if (t83 != 15114LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = -490;
	int32_t x338 = INT32_MIN;
	static int16_t x339 = INT16_MAX;
	int32_t t84 = INT32_MIN;

	t84 = (x337&(x338|(x339<=x340)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	static int32_t x342 = 3193;
	int32_t x343 = 93474989;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = 1015;

	t85 = (x341&(x342|(x343<=x344)));

	if (t85 != 3072) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	static uint64_t x347 = UINT64_MAX;
	int8_t x348 = INT8_MAX;
	volatile int64_t t86 = -714304LL;

	t86 = (x345&(x346|(x347<=x348)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	volatile int16_t x350 = -1;
	int32_t x351 = INT32_MIN;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = 31622387;

	t87 = (x349&(x350|(x351<=x352)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = -1;
	int8_t x355 = 59;
	int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 9875;

	t88 = (x353&(x354|(x355<=x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = -1;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x357&(x358|(x359<=x360)));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = UINT16_MAX;
	static int32_t x363 = INT32_MIN;
	int64_t x364 = -94753580587390549LL;

	t90 = (x361&(x362|(x363<=x364)));

	if (t90 != 1899) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 1U;
	static uint8_t x366 = 79U;
	int32_t t91 = -306;

	t91 = (x365&(x366|(x367<=x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x370 = -192;
	volatile int8_t x371 = INT8_MAX;
	int32_t x372 = -47;
	static int32_t t92 = -31;

	t92 = (x369&(x370|(x371<=x372)));

	if (t92 != -192) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 286U;
	volatile int64_t x374 = -8LL;
	uint32_t x376 = 962615U;
	static int64_t t93 = 750452347LL;

	t93 = (x373&(x374|(x375<=x376)));

	if (t93 != 280LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x378 = -33529LL;
	volatile int16_t x379 = INT16_MIN;
	int32_t x380 = INT32_MIN;
	int64_t t94 = -1216594081586037LL;

	t94 = (x377&(x378|(x379<=x380)));

	if (t94 != -33531LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = -1;
	uint32_t x382 = 600207609U;
	volatile uint8_t x383 = UINT8_MAX;
	int64_t x384 = -60522583408LL;
	volatile uint32_t t95 = 53663U;

	t95 = (x381&(x382|(x383<=x384)));

	if (t95 != 600207609U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 587LLU;
	int8_t x386 = 7;
	int16_t x387 = INT16_MAX;
	uint32_t x388 = UINT32_MAX;

	t96 = (x385&(x386|(x387<=x388)));

	if (t96 != 3LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	volatile uint8_t x390 = UINT8_MAX;
	int16_t x391 = -13;
	static volatile int32_t t97 = -1;

	t97 = (x389&(x390|(x391<=x392)));

	if (t97 != 255) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -21;
	volatile int32_t x394 = 24256;
	int32_t x395 = INT32_MIN;
	static int8_t x396 = INT8_MIN;
	int32_t t98 = 62846;

	t98 = (x393&(x394|(x395<=x396)));

	if (t98 != 24257) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 7U;
	int8_t x399 = -5;
	uint32_t x400 = 23814526U;
	volatile uint32_t t99 = 119679U;

	t99 = (x397&(x398|(x399<=x400)));

	if (t99 != 7U) { NG(); } else { ; }
	
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

