#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
volatile uint32_t t0 = 14889116U;
int8_t x5 = -17;
int32_t x6 = INT32_MIN;
int16_t x8 = INT16_MIN;
volatile int32_t t1 = 727036599;
uint16_t x15 = 291U;
int64_t x17 = -1LL;
static int16_t x20 = -1;
static volatile int16_t x29 = INT16_MIN;
uint32_t x34 = 245116U;
volatile int64_t t9 = -15981823979338328LL;
uint32_t x49 = UINT32_MAX;
volatile uint64_t t12 = 602621831553594108LLU;
int64_t x63 = INT64_MIN;
int8_t x64 = -61;
int64_t t15 = -3004674LL;
uint8_t x65 = UINT8_MAX;
int8_t x66 = -21;
int8_t x69 = -1;
int8_t x83 = -1;
int64_t x85 = INT64_MIN;
volatile int64_t t21 = 2262917422206400LL;
uint32_t x90 = 807U;
int8_t x91 = -1;
static int64_t x95 = INT64_MAX;
uint64_t x101 = 8590LLU;
uint8_t x104 = 91U;
volatile uint8_t x107 = UINT8_MAX;
int64_t t29 = 11LL;
int8_t x121 = -1;
int16_t x125 = INT16_MAX;
volatile uint64_t t31 = 1825644LLU;
static int32_t x131 = INT32_MIN;
volatile int32_t x132 = INT32_MIN;
volatile uint64_t t33 = 6LLU;
int16_t x138 = INT16_MAX;
int64_t x140 = INT64_MAX;
volatile int64_t t36 = 162520LL;
uint8_t x153 = 1U;
int32_t x155 = INT32_MAX;
static int32_t x156 = -1;
static volatile uint64_t x160 = 689539416455532187LLU;
volatile uint64_t t39 = 10387506084LLU;
int64_t x166 = -529009128905722590LL;
int64_t t41 = -15LL;
int64_t x169 = 3140360343LL;
int16_t x170 = 3759;
volatile uint8_t x174 = 1U;
int16_t x175 = INT16_MIN;
static int16_t x179 = -38;
static volatile uint32_t t44 = 1259985U;
int16_t x181 = INT16_MIN;
uint64_t x190 = 414552478964LLU;
int16_t x191 = -1;
int8_t x193 = INT8_MAX;
uint64_t x195 = UINT64_MAX;
int8_t x200 = INT8_MIN;
int32_t x202 = INT32_MIN;
volatile uint16_t x215 = 4527U;
uint64_t x218 = 2416399555610LLU;
int32_t x223 = INT32_MAX;
int8_t x225 = INT8_MIN;
volatile int16_t x228 = -1;
static int32_t x232 = INT32_MAX;
volatile uint64_t x234 = UINT64_MAX;
uint64_t t58 = 5961LLU;
int16_t x240 = INT16_MAX;
uint16_t x243 = 8U;
volatile int16_t x245 = INT16_MAX;
uint32_t x250 = UINT32_MAX;
uint32_t x256 = 621U;
int64_t x262 = -1LL;
static volatile int64_t x263 = -1LL;
int32_t x269 = INT32_MIN;
int32_t x270 = 25936;
int64_t x272 = 8209LL;
int64_t x277 = 27677975895LL;
volatile uint64_t t71 = 251872244376LLU;
volatile int16_t x293 = INT16_MIN;
volatile uint16_t x298 = 22285U;
uint64_t x300 = 235351LLU;
int32_t x310 = INT32_MIN;
volatile uint64_t t77 = 7100607674970382LLU;
uint16_t x323 = 20U;
int8_t x324 = -1;
volatile int32_t t80 = -6845528;
volatile int16_t x331 = INT16_MIN;
static int32_t x336 = INT32_MIN;
int32_t x339 = -2225;
int16_t x350 = INT16_MIN;
int32_t x361 = -64621303;
volatile uint64_t x362 = 34926805725039120LLU;
uint32_t x364 = 26591U;
int64_t x371 = INT64_MIN;
int64_t t92 = -781LL;
volatile int64_t t93 = 109603238165074LL;
volatile int16_t x380 = -1;
int8_t x381 = INT8_MIN;
uint32_t x383 = 9847U;
static uint32_t x388 = 70U;
volatile int64_t t96 = 10162989253LL;
uint8_t x392 = 6U;
volatile uint16_t x398 = 0U;
volatile int64_t t99 = -288860250937764LL;


void f0(void) {
	static uint8_t x1 = UINT8_MAX;
	uint16_t x2 = 16U;
	uint32_t x3 = 306984U;

	t0 = (((x1&x2)|x3)^x4);

	if (t0 != 315591U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x7 = UINT8_MAX;

	t1 = (((x5&x6)|x7)^x8);

	if (t1 != 2147451135) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 88U;
	int32_t x10 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	static uint64_t x12 = 98LLU;
	volatile uint64_t t2 = 9062365245LLU;

	t2 = (((x9&x10)|x11)^x12);

	if (t2 != 18446744071562068026LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -3510658LL;
	int64_t x14 = INT64_MIN;
	uint64_t x16 = UINT64_MAX;
	static volatile uint64_t t3 = 10LLU;

	t3 = (((x13&x14)|x15)^x16);

	if (t3 != 9223372036854775516LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 13U;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t t4 = -51LL;

	t4 = (((x17&x18)|x19)^x20);

	if (t4 != -256LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 55574474LL;
	int32_t x22 = -1;
	uint8_t x23 = UINT8_MAX;
	uint32_t x24 = 6037U;
	int64_t t5 = -3354078265406LL;

	t5 = (((x21&x22)|x23)^x24);

	if (t5 != 55568490LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x25 = 1508U;
	volatile uint32_t x26 = 737U;
	int64_t x27 = INT64_MAX;
	int8_t x28 = -1;
	int64_t t6 = INT64_MIN;

	t6 = (((x25&x26)|x27)^x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = 0;
	static volatile uint8_t x31 = 51U;
	volatile int8_t x32 = -1;
	static int32_t t7 = -676727;

	t7 = (((x29&x30)|x31)^x32);

	if (t7 != -52) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	int16_t x35 = INT16_MIN;
	static volatile int64_t x36 = INT64_MIN;
	static volatile int64_t t8 = 70455016LL;

	t8 = (((x33&x34)|x35)^x36);

	if (t8 != -9223372032559825664LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	uint16_t x38 = 1908U;
	int64_t x39 = -1LL;
	int32_t x40 = INT32_MIN;

	t9 = (((x37&x38)|x39)^x40);

	if (t9 != 2147483647LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int32_t x42 = INT32_MIN;
	static uint8_t x43 = 7U;
	uint16_t x44 = 1U;
	int32_t t10 = -1;

	t10 = (((x41&x42)|x43)^x44);

	if (t10 != -2147483642) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MAX;
	uint64_t x48 = UINT64_MAX;
	static uint64_t t11 = 5809175461LLU;

	t11 = (((x45&x46)|x47)^x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = INT32_MAX;
	int16_t x51 = -1;
	static uint64_t x52 = UINT64_MAX;

	t12 = (((x49&x50)|x51)^x52);

	if (t12 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x53 = 54U;
	int8_t x54 = -10;
	static int64_t x55 = 53LL;
	uint32_t x56 = 4280U;
	int64_t t13 = 2559855LL;

	t13 = (((x53&x54)|x55)^x56);

	if (t13 != 4239LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	int32_t x58 = -202;
	volatile uint8_t x59 = 68U;
	volatile uint8_t x60 = 36U;
	volatile uint64_t t14 = 6LLU;

	t14 = (((x57&x58)|x59)^x60);

	if (t14 != 18446744073709551442LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 401LL;
	int64_t x62 = -1LL;

	t15 = (((x61&x62)|x63)^x64);

	if (t15 != 9223372036854775378LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = INT16_MIN;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 31699500;

	t16 = (((x65&x66)|x67)^x68);

	if (t16 != 235) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int8_t x72 = INT8_MIN;
	static volatile int32_t t17 = 1156;

	t17 = (((x69&x70)|x71)^x72);

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x73 = 0U;
	int32_t x74 = -1;
	int64_t x75 = INT64_MIN;
	uint64_t x76 = 223929853299981LLU;
	static volatile uint64_t t18 = 32954838LLU;

	t18 = (((x73&x74)|x75)^x76);

	if (t18 != 9223595966708075789LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	static volatile int32_t x78 = INT32_MIN;
	int32_t x79 = -1;
	static int8_t x80 = 2;
	volatile int32_t t19 = -243972;

	t19 = (((x77&x78)|x79)^x80);

	if (t19 != -3) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -6;
	static int8_t x82 = INT8_MAX;
	uint16_t x84 = 1U;
	volatile int32_t t20 = -2776863;

	t20 = (((x81&x82)|x83)^x84);

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	int8_t x87 = 0;
	uint32_t x88 = 288800U;

	t21 = (((x85&x86)|x87)^x88);

	if (t21 != 288800LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;
	volatile uint32_t t22 = 7592031U;

	t22 = (((x89&x90)|x91)^x92);

	if (t22 != 4294967040U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 104U;
	volatile int8_t x94 = -22;
	uint8_t x96 = 0U;
	int64_t t23 = INT64_MAX;

	t23 = (((x93&x94)|x95)^x96);

	if (t23 != INT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 1LLU;
	static int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MAX;
	int8_t x100 = -1;
	static volatile uint64_t t24 = 118543147044004841LLU;

	t24 = (((x97&x98)|x99)^x100);

	if (t24 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x102 = -478594917LL;
	static volatile uint32_t x103 = 14U;
	volatile uint64_t t25 = 107184614161170685LLU;

	t25 = (((x101&x102)|x103)^x104);

	if (t25 != 8405LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	volatile int8_t x106 = -1;
	static int16_t x108 = 1;
	volatile int32_t t26 = 446381951;

	t26 = (((x105&x106)|x107)^x108);

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	uint32_t x110 = 35127154U;
	static uint64_t x111 = 710327LLU;
	uint8_t x112 = UINT8_MAX;
	volatile uint64_t t27 = 57050951893652LLU;

	t27 = (((x109&x110)|x111)^x112);

	if (t27 != 710216LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = 502698172148LLU;
	volatile int16_t x116 = INT16_MIN;
	volatile uint64_t t28 = 1066974184109810398LLU;

	t28 = (((x113&x114)|x115)^x116);

	if (t28 != 18446743566903434996LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = 2U;
	int64_t x119 = INT64_MAX;
	static int64_t x120 = -29256816920LL;

	t29 = (((x117&x118)|x119)^x120);

	if (t29 != -9223372007597958889LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x122 = UINT64_MAX;
	static int16_t x123 = -1;
	int8_t x124 = -1;
	static uint64_t t30 = 31LLU;

	t30 = (((x121&x122)|x123)^x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 1847461863835210LLU;
	int32_t x127 = INT32_MIN;
	int16_t x128 = 1;

	t31 = (((x125&x126)|x127)^x128);

	if (t31 != 18446744071562085963LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = -59;
	int32_t x130 = INT32_MIN;
	static int32_t t32 = 7528571;

	t32 = (((x129&x130)|x131)^x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 120740195192311LLU;
	volatile int8_t x134 = INT8_MIN;
	uint16_t x135 = UINT16_MAX;
	volatile int16_t x136 = INT16_MIN;

	t33 = (((x133&x134)|x135)^x136);

	if (t33 != 18446623333514379263LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	static int16_t x139 = -1;
	volatile int64_t t34 = INT64_MIN;

	t34 = (((x137&x138)|x139)^x140);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int64_t x142 = -1LL;
	int64_t x143 = -84098LL;
	uint32_t x144 = UINT32_MAX;
	volatile int64_t t35 = 1113321LL;

	t35 = (((x141&x142)|x143)^x144);

	if (t35 != -4294967296LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MIN;
	uint16_t x146 = 47U;
	int32_t x147 = -449837983;
	volatile int64_t x148 = INT64_MIN;

	t36 = (((x145&x146)|x147)^x148);

	if (t36 != 9223372036404937825LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int16_t x150 = -1;
	static volatile int16_t x151 = -1255;
	int8_t x152 = 6;
	volatile uint64_t t37 = 23LLU;

	t37 = (((x149&x150)|x151)^x152);

	if (t37 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 2U;
	volatile int32_t t38 = INT32_MIN;

	t38 = (((x153&x154)|x155)^x156);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	uint32_t x159 = 21447963U;

	t39 = (((x157&x158)|x159)^x160);

	if (t39 != 689539416467770240LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int8_t x162 = -1;
	uint16_t x163 = 1U;
	uint32_t x164 = 2154390U;
	volatile uint32_t t40 = 948372097U;

	t40 = (((x161&x162)|x163)^x164);

	if (t40 != 4292812905U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -1591LL;
	int16_t x167 = -1;
	volatile int32_t x168 = INT32_MIN;

	t41 = (((x165&x166)|x167)^x168);

	if (t41 != 2147483647LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x171 = INT8_MAX;
	int64_t x172 = INT64_MAX;
	int64_t t42 = -10522795595939LL;

	t42 = (((x169&x170)|x171)^x172);

	if (t42 != 9223372036854773504LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -58744075;
	int16_t x176 = -10;
	volatile int32_t t43 = 2010737;

	t43 = (((x173&x174)|x175)^x176);

	if (t43 != 32759) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 7U;
	int8_t x178 = -42;
	int32_t x180 = INT32_MIN;

	t44 = (((x177&x178)|x179)^x180);

	if (t44 != 2147483614U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MAX;
	int32_t x183 = -1;
	uint16_t x184 = 51U;
	int32_t t45 = -954745;

	t45 = (((x181&x182)|x183)^x184);

	if (t45 != -52) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	static int64_t x186 = INT64_MIN;
	static volatile uint64_t x187 = 8736LLU;
	volatile int16_t x188 = INT16_MIN;
	volatile uint64_t t46 = 238138LLU;

	t46 = (((x185&x186)|x187)^x188);

	if (t46 != 18446744073709527584LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x189 = 30196U;
	volatile uint32_t x192 = 136U;
	uint64_t t47 = 63690497256850LLU;

	t47 = (((x189&x190)|x191)^x192);

	if (t47 != 18446744073709551479LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = 817;
	int64_t x196 = -1LL;
	uint64_t t48 = 525064104LLU;

	t48 = (((x193&x194)|x195)^x196);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = INT64_MIN;
	static int16_t x198 = INT16_MIN;
	int16_t x199 = -423;
	volatile int64_t t49 = -191537LL;

	t49 = (((x197&x198)|x199)^x200);

	if (t49 != 473LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x201 = 8162;
	int16_t x203 = -1;
	int32_t x204 = INT32_MIN;
	int32_t t50 = INT32_MAX;

	t50 = (((x201&x202)|x203)^x204);

	if (t50 != INT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x205 = -1;
	uint32_t x206 = 1762883938U;
	uint16_t x207 = 14U;
	volatile int16_t x208 = INT16_MIN;
	volatile uint32_t t51 = 3261320U;

	t51 = (((x205&x206)|x207)^x208);

	if (t51 != 2532112750U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -7;
	volatile int16_t x210 = -474;
	int8_t x211 = 1;
	volatile uint16_t x212 = 2U;
	int32_t t52 = -64573;

	t52 = (((x209&x210)|x211)^x212);

	if (t52 != -477) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	uint8_t x214 = 2U;
	int16_t x216 = INT16_MAX;
	static volatile int64_t t53 = 577208242573156LL;

	t53 = (((x213&x214)|x215)^x216);

	if (t53 != 28240LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	volatile uint8_t x219 = UINT8_MAX;
	volatile int16_t x220 = INT16_MIN;
	volatile uint64_t t54 = 32179789881580LLU;

	t54 = (((x217&x218)|x219)^x220);

	if (t54 != 18446744073709519103LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static uint64_t x222 = 45353201273761486LLU;
	uint8_t x224 = 121U;
	uint64_t t55 = 1587541125251592716LLU;

	t55 = (((x221&x222)|x223)^x224);

	if (t55 != 45353203230834566LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x226 = UINT64_MAX;
	volatile uint32_t x227 = 1180778731U;
	volatile uint64_t t56 = 27670349388953254LLU;

	t56 = (((x225&x226)|x227)^x228);

	if (t56 != 20LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x229 = 10169U;
	volatile uint16_t x230 = UINT16_MAX;
	static int8_t x231 = INT8_MAX;
	static uint32_t t57 = 16U;

	t57 = (((x229&x230)|x231)^x232);

	if (t57 != 2147473408U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MIN;
	volatile uint64_t x235 = 731019652LLU;
	int8_t x236 = INT8_MIN;

	t58 = (((x233&x234)|x235)^x236);

	if (t58 != 1416463876LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static volatile int8_t x238 = INT8_MAX;
	uint16_t x239 = 14239U;
	int32_t t59 = -13567;

	t59 = (((x237&x238)|x239)^x240);

	if (t59 != 18528) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 18U;
	volatile int16_t x242 = INT16_MAX;
	uint8_t x244 = 3U;
	int32_t t60 = 802631;

	t60 = (((x241&x242)|x243)^x244);

	if (t60 != 25) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = UINT16_MAX;
	uint32_t x247 = 3950U;
	static int64_t x248 = -303606544305LL;
	int64_t t61 = 35432002367763LL;

	t61 = (((x245&x246)|x247)^x248);

	if (t61 != -303606548560LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	volatile uint32_t x251 = 2452U;
	int32_t x252 = INT32_MIN;
	uint32_t t62 = 19U;

	t62 = (((x249&x250)|x251)^x252);

	if (t62 != 2147486207U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int64_t x254 = INT64_MIN;
	volatile int8_t x255 = INT8_MAX;
	int64_t t63 = -2102738179LL;

	t63 = (((x253&x254)|x255)^x256);

	if (t63 != 530LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int8_t x258 = INT8_MIN;
	int32_t x259 = 24097023;
	int32_t x260 = INT32_MIN;
	int32_t t64 = -249111532;

	t64 = (((x257&x258)|x259)^x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = 3220U;
	uint8_t x264 = 43U;
	static volatile int64_t t65 = 224797445LL;

	t65 = (((x261&x262)|x263)^x264);

	if (t65 != -44LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 1;
	static int32_t x266 = -4641;
	int8_t x267 = INT8_MAX;
	volatile int8_t x268 = INT8_MIN;
	volatile int32_t t66 = 479;

	t66 = (((x265&x266)|x267)^x268);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x271 = INT32_MAX;
	volatile int64_t t67 = 12166202717333LL;

	t67 = (((x269&x270)|x271)^x272);

	if (t67 != 2147475438LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x273 = UINT64_MAX;
	volatile int64_t x274 = -1LL;
	static volatile uint8_t x275 = UINT8_MAX;
	int16_t x276 = 12;
	static volatile uint64_t t68 = 241LLU;

	t68 = (((x273&x274)|x275)^x276);

	if (t68 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = -1LL;
	static int8_t x279 = -1;
	static uint16_t x280 = 8087U;
	volatile int64_t t69 = 8928045LL;

	t69 = (((x277&x278)|x279)^x280);

	if (t69 != -8088LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	int32_t x282 = INT32_MAX;
	uint32_t x283 = 431033132U;
	int8_t x284 = 1;
	uint32_t t70 = 0U;

	t70 = (((x281&x282)|x283)^x284);

	if (t70 != 431095806U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = INT8_MIN;
	uint32_t x286 = 5140U;
	int16_t x287 = -1;
	uint64_t x288 = 4586931341562825837LLU;

	t71 = (((x285&x286)|x287)^x288);

	if (t71 != 4586931340255605650LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 884679163205LLU;
	int32_t x290 = INT32_MIN;
	static int8_t x291 = 4;
	volatile uint32_t x292 = 9U;
	uint64_t t72 = 11299767LLU;

	t72 = (((x289&x290)|x291)^x292);

	if (t72 != 882615779341LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x294 = -1LL;
	int16_t x295 = 494;
	uint32_t x296 = 1732493U;
	int64_t t73 = 618779927840178428LL;

	t73 = (((x293&x294)|x295)^x296);

	if (t73 != -1708445LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = INT16_MIN;
	static int64_t x299 = INT64_MIN;
	uint64_t t74 = 278729065617LLU;

	t74 = (((x297&x298)|x299)^x300);

	if (t74 != 9223372036855011159LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 786849226711516520LLU;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	int32_t x304 = -3275;
	uint64_t t75 = 22LLU;

	t75 = (((x301&x302)|x303)^x304);

	if (t75 != 29493LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	uint8_t x306 = 43U;
	int16_t x307 = 1;
	volatile int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -11417;

	t76 = (((x305&x306)|x307)^x308);

	if (t76 != -2147483605) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x309 = 14752LLU;
	int32_t x311 = -28780119;
	volatile int32_t x312 = -1;

	t77 = (((x309&x310)|x311)^x312);

	if (t77 != 28780118LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = -1;
	volatile int16_t x314 = INT16_MIN;
	int64_t x315 = INT64_MIN;
	uint16_t x316 = 7197U;
	int64_t t78 = 2358628524264LL;

	t78 = (((x313&x314)|x315)^x316);

	if (t78 != -25571LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 520;
	int32_t x318 = 29;
	volatile int64_t x319 = INT64_MAX;
	volatile uint32_t x320 = 3311U;
	int64_t t79 = 1892316LL;

	t79 = (((x317&x318)|x319)^x320);

	if (t79 != 9223372036854772496LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x321 = INT32_MIN;
	int32_t x322 = 155444072;

	t80 = (((x321&x322)|x323)^x324);

	if (t80 != -21) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	volatile int64_t x326 = INT64_MIN;
	static int32_t x327 = INT32_MIN;
	static int8_t x328 = INT8_MIN;
	uint64_t t81 = 49129LLU;

	t81 = (((x325&x326)|x327)^x328);

	if (t81 != 2147483520LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	uint16_t x330 = UINT16_MAX;
	uint64_t x332 = 6333568139800850LLU;
	volatile uint64_t t82 = 1626658315723241LLU;

	t82 = (((x329&x330)|x331)^x332);

	if (t82 != 18440410505569750765LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MAX;
	static uint16_t x334 = 20845U;
	int64_t x335 = INT64_MIN;
	int64_t t83 = 1550098LL;

	t83 = (((x333&x334)|x335)^x336);

	if (t83 != 9223372034707313005LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = -50;
	volatile int32_t x338 = INT32_MIN;
	int16_t x340 = 248;
	int32_t t84 = 25795;

	t84 = (((x337&x338)|x339)^x340);

	if (t84 != -2121) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x341 = -1;
	int16_t x342 = 4;
	static volatile int64_t x343 = INT64_MAX;
	volatile uint16_t x344 = UINT16_MAX;
	static int64_t t85 = -16LL;

	t85 = (((x341&x342)|x343)^x344);

	if (t85 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x345 = -11242;
	uint16_t x346 = 8U;
	int8_t x347 = -1;
	static int32_t x348 = -1;
	volatile int32_t t86 = -1900;

	t86 = (((x345&x346)|x347)^x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int32_t x351 = INT32_MAX;
	uint64_t x352 = 4810673LLU;
	static uint64_t t87 = 135719163241008LLU;

	t87 = (((x349&x350)|x351)^x352);

	if (t87 != 18446744073704740942LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 2475U;
	static int32_t x354 = -1;
	int8_t x355 = INT8_MIN;
	int16_t x356 = -237;
	static uint32_t t88 = 1778456U;

	t88 = (((x353&x354)|x355)^x356);

	if (t88 != 184U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 1U;
	uint32_t x358 = 88386U;
	volatile uint8_t x359 = 26U;
	volatile uint32_t x360 = 0U;
	uint32_t t89 = 82045U;

	t89 = (((x357&x358)|x359)^x360);

	if (t89 != 26U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x363 = 2218821LLU;
	volatile uint64_t t90 = 273379610807LLU;

	t90 = (((x361&x362)|x363)^x364);

	if (t90 != 34926805720874138LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = -1;
	volatile int64_t x366 = 10434LL;
	volatile int32_t x367 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	volatile int64_t t91 = 7821550LL;

	t91 = (((x365&x366)|x367)^x368);

	if (t91 != 10434LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = UINT32_MAX;
	volatile int8_t x370 = INT8_MAX;
	int64_t x372 = INT64_MIN;

	t92 = (((x369&x370)|x371)^x372);

	if (t92 != 127LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -1;
	int32_t x374 = -1;
	int64_t x375 = INT64_MIN;
	int32_t x376 = -1;

	t93 = (((x373&x374)|x375)^x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = INT16_MAX;
	static uint16_t x379 = UINT16_MAX;
	volatile uint32_t t94 = 18961U;

	t94 = (((x377&x378)|x379)^x380);

	if (t94 != 4294901760U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x382 = 14;
	int16_t x384 = -1;
	uint32_t t95 = 1745211U;

	t95 = (((x381&x382)|x383)^x384);

	if (t95 != 4294957448U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int16_t x386 = INT16_MIN;
	volatile uint32_t x387 = UINT32_MAX;

	t96 = (((x385&x386)|x387)^x388);

	if (t96 != -9223372032559808583LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = INT16_MAX;
	int16_t x391 = INT16_MIN;
	static volatile uint64_t t97 = 7LLU;

	t97 = (((x389&x390)|x391)^x392);

	if (t97 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = INT16_MAX;
	static int64_t x394 = 19484446178834747LL;
	int64_t x395 = INT64_MIN;
	uint32_t x396 = 56035809U;
	int64_t t98 = 1524736LL;

	t98 = (((x393&x394)|x395)^x396);

	if (t98 != -9223372036798713638LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -1LL;
	static uint16_t x399 = 22451U;
	volatile int32_t x400 = INT32_MIN;

	t99 = (((x397&x398)|x399)^x400);

	if (t99 != -2147461197LL) { NG(); } else { ; }
	
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

