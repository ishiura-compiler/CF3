#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = UINT64_MAX;
volatile uint64_t t0 = 59987291783621LLU;
static uint64_t x11 = 61LLU;
static int32_t t3 = -31;
int32_t x22 = 836363;
int32_t t5 = -5300;
static int8_t x27 = -1;
int32_t t6 = -108;
uint32_t x29 = 2U;
uint64_t x32 = UINT64_MAX;
int16_t x34 = INT16_MIN;
volatile uint32_t x35 = 15122U;
int32_t x38 = INT32_MIN;
static int32_t t11 = INT32_MAX;
static int64_t x49 = INT64_MAX;
int64_t x61 = 73738399LL;
uint16_t x65 = 98U;
int16_t x73 = -587;
static int64_t x86 = -1LL;
int64_t x94 = -1LL;
int8_t x95 = 1;
int8_t x98 = INT8_MAX;
int32_t x108 = 129539;
static volatile uint64_t x112 = 50LLU;
static volatile uint64_t t24 = 363LLU;
int64_t x125 = INT64_MIN;
int32_t x128 = -1;
uint8_t x129 = UINT8_MAX;
uint64_t t29 = UINT64_MAX;
volatile uint32_t x138 = UINT32_MAX;
volatile int16_t x141 = -2;
int16_t x144 = -6043;
volatile uint32_t x153 = UINT32_MAX;
volatile int8_t x154 = INT8_MAX;
volatile int32_t x155 = -1;
int8_t x158 = 48;
int32_t x160 = 423;
int16_t x166 = -5;
uint8_t x182 = 30U;
int8_t x184 = INT8_MIN;
uint64_t x188 = 33421426208303577LLU;
int64_t x192 = -41874099LL;
int64_t x194 = INT64_MAX;
uint8_t x195 = 18U;
static int64_t x203 = -3350712LL;
int32_t x206 = -1;
int8_t x207 = -14;
int16_t x211 = -1;
int32_t t49 = 11263;
static volatile uint32_t x219 = 2753U;
uint32_t t50 = 1656767203U;
uint32_t x232 = 61412U;
volatile int64_t t54 = INT64_MAX;
int64_t x241 = -10LL;
int32_t x242 = -1;
uint16_t x250 = UINT16_MAX;
int64_t t59 = 200LL;
int8_t x274 = 4;
int32_t x286 = INT32_MIN;
uint16_t x290 = 100U;
uint8_t x293 = UINT8_MAX;
uint32_t x295 = 3U;
volatile int16_t x299 = -1513;
int64_t x306 = INT64_MIN;
int32_t x311 = -367045082;
static int16_t x314 = INT16_MIN;
volatile uint64_t t74 = 112848923996276335LLU;
int32_t x332 = INT32_MAX;
int8_t x333 = -1;
uint16_t x341 = UINT16_MAX;
static int8_t x342 = 38;
static uint32_t x350 = 432240766U;
static volatile uint16_t x352 = 0U;
uint32_t x356 = 654U;
static volatile uint64_t t82 = 6964585782043790LLU;
uint16_t x359 = UINT16_MAX;
uint64_t x363 = UINT64_MAX;
static int16_t x368 = -5949;
volatile int32_t x370 = INT32_MIN;
int32_t x376 = -1;
static int32_t x377 = -103;
int16_t x379 = -4583;
static volatile uint64_t t89 = 193152LLU;
volatile uint16_t x390 = UINT16_MAX;
static uint64_t t92 = 195649245893173577LLU;
static int64_t x404 = INT64_MIN;
static volatile int32_t x407 = 1782;
int8_t x408 = INT8_MIN;
int32_t t94 = -5;
uint16_t x415 = 19240U;
uint64_t x423 = 1484009718359204282LLU;
int32_t x424 = INT32_MAX;
volatile uint64_t t98 = 2541437247167LLU;
int32_t x428 = INT32_MIN;


void f0(void) {
	int8_t x1 = -11;
	uint64_t x2 = UINT64_MAX;
	volatile int16_t x4 = 73;

	t0 = (((x1%x2)/x3)+x4);

	if (t0 != 73LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	static int32_t x6 = INT32_MIN;
	int16_t x7 = -1;
	static volatile int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -170;

	t1 = (((x5%x6)/x7)+x8);

	if (t1 != -2147483647) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = INT64_MAX;
	volatile uint8_t x10 = UINT8_MAX;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t2 = 2049649622673LLU;

	t2 = (((x9%x10)/x11)+x12);

	if (t2 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MAX;
	int32_t x15 = 1858261;
	volatile uint16_t x16 = UINT16_MAX;

	t3 = (((x13%x14)/x15)+x16);

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	int64_t x18 = INT64_MIN;
	int8_t x19 = -1;
	static uint32_t x20 = 51601U;
	volatile int64_t t4 = -7LL;

	t4 = (((x17%x18)/x19)+x20);

	if (t4 != 51346LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -20;
	int16_t x23 = INT16_MIN;
	volatile int32_t x24 = 13109095;

	t5 = (((x21%x22)/x23)+x24);

	if (t5 != 13109095) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x26 = UINT8_MAX;
	uint8_t x28 = 25U;

	t6 = (((x25%x26)/x27)+x28);

	if (t6 != 25) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = INT32_MIN;
	int16_t x31 = -58;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x29%x30)/x31)+x32);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = 675LL;
	uint8_t x36 = 111U;
	int64_t t8 = 9533934773LL;

	t8 = (((x33%x34)/x35)+x36);

	if (t8 != 111LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int32_t x39 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	volatile int32_t t9 = 6;

	t9 = (((x37%x38)/x39)+x40);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MAX;
	volatile int16_t x42 = INT16_MAX;
	int64_t x43 = -3145950LL;
	uint32_t x44 = 3U;
	int64_t t10 = -1653532727LL;

	t10 = (((x41%x42)/x43)+x44);

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	uint16_t x46 = UINT16_MAX;
	volatile int8_t x47 = 9;
	int32_t x48 = INT32_MAX;

	t11 = (((x45%x46)/x47)+x48);

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = -1;
	volatile uint8_t x52 = 13U;
	int64_t t12 = 224LL;

	t12 = (((x49%x50)/x51)+x52);

	if (t12 != -2147483634LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -4929916;
	int64_t x54 = -1LL;
	volatile uint32_t x55 = 28404463U;
	volatile int64_t x56 = 29936538299307680LL;
	int64_t t13 = 58316937473110LL;

	t13 = (((x53%x54)/x55)+x56);

	if (t13 != 29936538299307680LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MAX;
	volatile uint16_t x59 = 10422U;
	int32_t x60 = -1;
	static int64_t t14 = -1508843498616LL;

	t14 = (((x57%x58)/x59)+x60);

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x62 = 6020099U;
	int8_t x63 = INT8_MIN;
	int64_t x64 = 149425451LL;
	int64_t t15 = 0LL;

	t15 = (((x61%x62)/x63)+x64);

	if (t15 != 149413755LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x66 = 1U;
	int8_t x67 = -1;
	int8_t x68 = 0;
	volatile int32_t t16 = 919831;

	t16 = (((x65%x66)/x67)+x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x74 = INT32_MIN;
	static int64_t x75 = -1LL;
	int8_t x76 = 0;
	static volatile int64_t t17 = 0LL;

	t17 = (((x73%x74)/x75)+x76);

	if (t17 != 587LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MIN;
	int8_t x82 = -1;
	static int16_t x83 = INT16_MIN;
	int64_t x84 = -1LL;
	volatile int64_t t18 = 47619501LL;

	t18 = (((x81%x82)/x83)+x84);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = 27LLU;
	static uint16_t x87 = 5U;
	volatile uint64_t x88 = UINT64_MAX;
	uint64_t t19 = 15574787LLU;

	t19 = (((x85%x86)/x87)+x88);

	if (t19 != 4LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 0U;
	int8_t x96 = INT8_MAX;
	int64_t t20 = 502497LL;

	t20 = (((x93%x94)/x95)+x96);

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x97 = 29U;
	uint16_t x99 = 2U;
	uint8_t x100 = 31U;
	volatile int32_t t21 = -4907;

	t21 = (((x97%x98)/x99)+x100);

	if (t21 != 45) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = 32203105;
	int8_t x102 = 32;
	volatile int32_t x103 = -62802252;
	volatile uint32_t x104 = 3738618U;
	uint32_t t22 = 280U;

	t22 = (((x101%x102)/x103)+x104);

	if (t22 != 3738618U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	uint64_t x106 = 408LLU;
	int8_t x107 = -1;
	static volatile uint64_t t23 = 1394451538714429LLU;

	t23 = (((x105%x106)/x107)+x108);

	if (t23 != 129539LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = -1;
	volatile uint8_t x110 = UINT8_MAX;
	static volatile uint8_t x111 = UINT8_MAX;

	t24 = (((x109%x110)/x111)+x112);

	if (t24 != 50LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x113 = 0U;
	uint8_t x114 = UINT8_MAX;
	static int64_t x115 = INT64_MIN;
	int16_t x116 = INT16_MIN;
	volatile int64_t t25 = -3569LL;

	t25 = (((x113%x114)/x115)+x116);

	if (t25 != -32768LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x117 = -1;
	uint16_t x118 = 24U;
	volatile uint16_t x119 = 7U;
	static int32_t x120 = INT32_MIN;
	int32_t t26 = INT32_MIN;

	t26 = (((x117%x118)/x119)+x120);

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x121 = 329482740U;
	int8_t x122 = -30;
	int8_t x123 = -26;
	int16_t x124 = INT16_MAX;
	static uint32_t t27 = 1582U;

	t27 = (((x121%x122)/x123)+x124);

	if (t27 != 32767U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x126 = -1;
	int64_t x127 = INT64_MIN;
	static int64_t t28 = 26LL;

	t28 = (((x125%x126)/x127)+x128);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x130 = -149435;
	int64_t x131 = 2168274871872875038LL;
	volatile uint64_t x132 = UINT64_MAX;

	t29 = (((x129%x130)/x131)+x132);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x133 = INT64_MAX;
	static uint32_t x134 = 17345179U;
	uint16_t x135 = UINT16_MAX;
	volatile int64_t x136 = -5631190LL;
	static volatile int64_t t30 = -53584044379LL;

	t30 = (((x133%x134)/x135)+x136);

	if (t30 != -5631095LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x137 = -1LL;
	static volatile int8_t x139 = 1;
	int8_t x140 = 1;
	int64_t t31 = -463355LL;

	t31 = (((x137%x138)/x139)+x140);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x142 = 1991U;
	volatile int8_t x143 = 7;
	volatile int32_t t32 = -284;

	t32 = (((x141%x142)/x143)+x144);

	if (t32 != -6043) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x145 = UINT64_MAX;
	uint32_t x146 = 1749008880U;
	int64_t x147 = INT64_MAX;
	static int32_t x148 = 1891;
	volatile uint64_t t33 = 3894092674LLU;

	t33 = (((x145%x146)/x147)+x148);

	if (t33 != 1891LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x149 = INT64_MAX;
	int32_t x150 = INT32_MAX;
	uint16_t x151 = UINT16_MAX;
	static int16_t x152 = 0;
	int64_t t34 = 519358239LL;

	t34 = (((x149%x150)/x151)+x152);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x156 = 222111032LLU;
	volatile uint64_t t35 = 2LLU;

	t35 = (((x153%x154)/x155)+x156);

	if (t35 != 222111032LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = 247;
	int8_t x159 = INT8_MIN;
	static int32_t t36 = -245;

	t36 = (((x157%x158)/x159)+x160);

	if (t36 != 423) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x161 = INT32_MIN;
	int64_t x162 = INT64_MIN;
	static volatile int8_t x163 = INT8_MIN;
	uint64_t x164 = 1122793375558LLU;
	static uint64_t t37 = 1033106027823LLU;

	t37 = (((x161%x162)/x163)+x164);

	if (t37 != 1122810152774LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = -1;
	uint16_t x167 = 736U;
	int8_t x168 = INT8_MIN;
	volatile int32_t t38 = -1037;

	t38 = (((x165%x166)/x167)+x168);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x169 = 1057U;
	int64_t x170 = 2128027385LL;
	int8_t x171 = INT8_MAX;
	uint64_t x172 = 817000LLU;
	volatile uint64_t t39 = 880993484600176045LLU;

	t39 = (((x169%x170)/x171)+x172);

	if (t39 != 817008LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MAX;
	uint8_t x174 = UINT8_MAX;
	int16_t x175 = INT16_MAX;
	static volatile int32_t x176 = -245;
	int32_t t40 = 351489765;

	t40 = (((x173%x174)/x175)+x176);

	if (t40 != -245) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = 12237;
	static uint8_t x183 = 14U;
	volatile int32_t t41 = -5;

	t41 = (((x181%x182)/x183)+x184);

	if (t41 != -127) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = -1;
	uint64_t x187 = UINT64_MAX;
	static uint64_t t42 = 1283561LLU;

	t42 = (((x185%x186)/x187)+x188);

	if (t42 != 33421426208303577LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x189 = INT16_MAX;
	int8_t x190 = INT8_MIN;
	static int64_t x191 = INT64_MAX;
	volatile int64_t t43 = 61629191063970440LL;

	t43 = (((x189%x190)/x191)+x192);

	if (t43 != -41874099LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x193 = INT64_MAX;
	uint8_t x196 = UINT8_MAX;
	volatile int64_t t44 = 135129585931140983LL;

	t44 = (((x193%x194)/x195)+x196);

	if (t44 != 255LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = UINT32_MAX;
	int8_t x198 = INT8_MIN;
	uint16_t x199 = UINT16_MAX;
	int64_t x200 = -1LL;
	volatile int64_t t45 = -3878741139914672LL;

	t45 = (((x197%x198)/x199)+x200);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x201 = 831U;
	int8_t x202 = -6;
	int32_t x204 = 1768720;
	int64_t t46 = -111147978417143LL;

	t46 = (((x201%x202)/x203)+x204);

	if (t46 != 1768720LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 58U;
	int32_t x208 = -1;
	int32_t t47 = -15204;

	t47 = (((x205%x206)/x207)+x208);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -3;
	volatile uint64_t x210 = 3083LLU;
	int64_t x212 = INT64_MIN;
	uint64_t t48 = 714473331LLU;

	t48 = (((x209%x210)/x211)+x212);

	if (t48 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -1;
	static int16_t x214 = 7718;
	int16_t x215 = 1960;
	uint16_t x216 = 11364U;

	t49 = (((x213%x214)/x215)+x216);

	if (t49 != 11364) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = -1;
	static uint32_t x218 = 1054U;
	int16_t x220 = INT16_MAX;

	t50 = (((x217%x218)/x219)+x220);

	if (t50 != 32767U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x221 = 5U;
	static volatile int64_t x222 = INT64_MIN;
	int16_t x223 = 174;
	int32_t x224 = INT32_MIN;
	int64_t t51 = 417091820204LL;

	t51 = (((x221%x222)/x223)+x224);

	if (t51 != -2147483648LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	int32_t t52 = INT32_MIN;

	t52 = (((x225%x226)/x227)+x228);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x229 = 357U;
	int32_t x230 = -10041;
	int32_t x231 = 1763827;
	volatile uint32_t t53 = 601193991U;

	t53 = (((x229%x230)/x231)+x232);

	if (t53 != 61412U) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MIN;
	int8_t x234 = INT8_MIN;
	volatile int32_t x235 = INT32_MIN;
	static int64_t x236 = INT64_MAX;

	t54 = (((x233%x234)/x235)+x236);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x243 = UINT32_MAX;
	volatile int8_t x244 = -33;
	volatile int64_t t55 = 24LL;

	t55 = (((x241%x242)/x243)+x244);

	if (t55 != -33LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x245 = 1U;
	int8_t x246 = -1;
	int8_t x247 = 1;
	static uint8_t x248 = UINT8_MAX;
	volatile int32_t t56 = -187;

	t56 = (((x245%x246)/x247)+x248);

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x249 = -1LL;
	uint16_t x251 = UINT16_MAX;
	int8_t x252 = INT8_MAX;
	static int64_t t57 = 91148801LL;

	t57 = (((x249%x250)/x251)+x252);

	if (t57 != 127LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MAX;
	uint64_t x254 = 12971098LLU;
	int32_t x255 = -3965;
	uint64_t x256 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (((x253%x254)/x255)+x256);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x257 = 19U;
	int64_t x258 = 1208885613893739957LL;
	uint32_t x259 = 5U;
	static uint8_t x260 = 77U;

	t59 = (((x257%x258)/x259)+x260);

	if (t59 != 80LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x261 = INT64_MAX;
	uint8_t x262 = 14U;
	int8_t x263 = INT8_MAX;
	uint32_t x264 = 589506U;
	volatile int64_t t60 = 559460007LL;

	t60 = (((x261%x262)/x263)+x264);

	if (t60 != 589506LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = INT64_MIN;
	static int8_t x266 = 13;
	static uint8_t x267 = 30U;
	int64_t x268 = 52309619204LL;
	volatile int64_t t61 = 1244926167040010LL;

	t61 = (((x265%x266)/x267)+x268);

	if (t61 != 52309619204LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = -173348590270910LL;
	uint64_t x271 = 143266403664LLU;
	uint64_t x272 = UINT64_MAX;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (((x269%x270)/x271)+x272);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 65U;
	static int16_t x275 = -676;
	int16_t x276 = INT16_MAX;
	uint32_t t63 = 1U;

	t63 = (((x273%x274)/x275)+x276);

	if (t63 != 32767U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = UINT32_MAX;
	int8_t x282 = INT8_MAX;
	int32_t x283 = INT32_MIN;
	static int8_t x284 = INT8_MAX;
	volatile uint32_t t64 = 5U;

	t64 = (((x281%x282)/x283)+x284);

	if (t64 != 127U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x285 = -16185LL;
	static int8_t x287 = INT8_MIN;
	uint8_t x288 = UINT8_MAX;
	volatile int64_t t65 = -8LL;

	t65 = (((x285%x286)/x287)+x288);

	if (t65 != 381LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = INT16_MIN;
	uint32_t x291 = UINT32_MAX;
	static volatile int8_t x292 = INT8_MIN;
	volatile uint32_t t66 = 185466U;

	t66 = (((x289%x290)/x291)+x292);

	if (t66 != 4294967168U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x294 = 116U;
	volatile int16_t x296 = INT16_MIN;
	static uint32_t t67 = 252U;

	t67 = (((x293%x294)/x295)+x296);

	if (t67 != 4294934535U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x297 = 107;
	volatile int8_t x298 = INT8_MIN;
	uint32_t x300 = UINT32_MAX;
	uint32_t t68 = UINT32_MAX;

	t68 = (((x297%x298)/x299)+x300);

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = 73455159;
	volatile uint16_t x302 = UINT16_MAX;
	volatile int8_t x303 = INT8_MAX;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t69 = 29746LLU;

	t69 = (((x301%x302)/x303)+x304);

	if (t69 != 439LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x305 = -1;
	int32_t x307 = -38;
	int32_t x308 = INT32_MIN;
	int64_t t70 = 34016883303071261LL;

	t70 = (((x305%x306)/x307)+x308);

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = INT32_MIN;
	uint8_t x312 = UINT8_MAX;
	int32_t t71 = 1;

	t71 = (((x309%x310)/x311)+x312);

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x313 = 2652;
	uint16_t x315 = UINT16_MAX;
	int32_t x316 = 955339818;
	volatile int32_t t72 = 52780588;

	t72 = (((x313%x314)/x315)+x316);

	if (t72 != 955339818) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = UINT64_MAX;
	volatile int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MIN;
	int32_t x320 = INT32_MIN;
	uint64_t t73 = 472LLU;

	t73 = (((x317%x318)/x319)+x320);

	if (t73 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 84715LLU;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = -111;
	int32_t x324 = INT32_MIN;

	t74 = (((x321%x322)/x323)+x324);

	if (t74 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = INT16_MAX;
	int16_t x326 = INT16_MIN;
	volatile int32_t x327 = INT32_MAX;
	int32_t x328 = INT32_MAX;
	static volatile int32_t t75 = INT32_MAX;

	t75 = (((x325%x326)/x327)+x328);

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x329 = 2U;
	int32_t x330 = -1182057;
	static int8_t x331 = INT8_MIN;
	volatile uint32_t t76 = 240524U;

	t76 = (((x329%x330)/x331)+x332);

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x334 = -1LL;
	int64_t x335 = INT64_MIN;
	static int16_t x336 = -1;
	volatile int64_t t77 = 4093133LL;

	t77 = (((x333%x334)/x335)+x336);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x337 = UINT8_MAX;
	static uint16_t x338 = 243U;
	int8_t x339 = -53;
	uint64_t x340 = 242LLU;
	volatile uint64_t t78 = 149517LLU;

	t78 = (((x337%x338)/x339)+x340);

	if (t78 != 242LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x343 = -1;
	static volatile uint16_t x344 = 2U;
	int32_t t79 = 125091;

	t79 = (((x341%x342)/x343)+x344);

	if (t79 != -21) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x345 = INT16_MIN;
	volatile int8_t x346 = INT8_MIN;
	static uint8_t x347 = 1U;
	volatile int64_t x348 = INT64_MIN;
	static int64_t t80 = INT64_MIN;

	t80 = (((x345%x346)/x347)+x348);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x349 = 88423695;
	static int8_t x351 = 49;
	volatile uint32_t t81 = 96752U;

	t81 = (((x349%x350)/x351)+x352);

	if (t81 != 1804565U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x353 = -1;
	int8_t x354 = INT8_MAX;
	static uint64_t x355 = 536446571893082LLU;

	t82 = (((x353%x354)/x355)+x356);

	if (t82 != 35040LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int32_t x357 = -204056;
	int32_t x358 = INT32_MAX;
	static volatile int16_t x360 = -1;
	volatile int32_t t83 = -14;

	t83 = (((x357%x358)/x359)+x360);

	if (t83 != -4) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = 152U;
	volatile int64_t x362 = INT64_MIN;
	static int8_t x364 = -1;
	uint64_t t84 = UINT64_MAX;

	t84 = (((x361%x362)/x363)+x364);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x365 = 117U;
	static int8_t x366 = INT8_MIN;
	int32_t x367 = -1673;
	volatile uint32_t t85 = 534906U;

	t85 = (((x365%x366)/x367)+x368);

	if (t85 != 4294961347U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x369 = UINT8_MAX;
	volatile int16_t x371 = INT16_MIN;
	uint16_t x372 = 4708U;
	int32_t t86 = 1873;

	t86 = (((x369%x370)/x371)+x372);

	if (t86 != 4708) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x373 = 4103558U;
	uint64_t x374 = 38447399824144LLU;
	static volatile int64_t x375 = 97LL;
	uint64_t t87 = 65504086954023LLU;

	t87 = (((x373%x374)/x375)+x376);

	if (t87 != 42303LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x378 = 13U;
	int64_t x380 = INT64_MIN;
	int64_t t88 = INT64_MIN;

	t88 = (((x377%x378)/x379)+x380);

	if (t88 != INT64_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x385 = INT16_MIN;
	uint64_t x386 = 18399LLU;
	static uint32_t x387 = 2402092U;
	uint8_t x388 = 0U;

	t89 = (((x385%x386)/x387)+x388);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = INT64_MIN;
	int64_t x391 = INT64_MIN;
	int64_t x392 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = (((x389%x390)/x391)+x392);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MIN;
	volatile uint64_t x394 = 263964261455434LLU;
	volatile int32_t x395 = INT32_MIN;
	static volatile int16_t x396 = INT16_MIN;
	volatile uint64_t t91 = 11LLU;

	t91 = (((x393%x394)/x395)+x396);

	if (t91 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x397 = 342794741U;
	uint16_t x398 = UINT16_MAX;
	static uint16_t x399 = 2U;
	uint64_t x400 = UINT64_MAX;

	t92 = (((x397%x398)/x399)+x400);

	if (t92 != 23344LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x401 = 7412;
	int8_t x402 = INT8_MIN;
	uint64_t x403 = UINT64_MAX;
	static uint64_t t93 = 22176476146557662LLU;

	t93 = (((x401%x402)/x403)+x404);

	if (t93 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 12U;
	volatile int8_t x406 = -1;

	t94 = (((x405%x406)/x407)+x408);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x409 = -6632265;
	int16_t x410 = INT16_MAX;
	int64_t x411 = INT64_MIN;
	int8_t x412 = -1;
	int64_t t95 = 47408322654LL;

	t95 = (((x409%x410)/x411)+x412);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x413 = INT16_MAX;
	int64_t x414 = -1LL;
	uint32_t x416 = 711U;
	volatile int64_t t96 = -745762733964913LL;

	t96 = (((x413%x414)/x415)+x416);

	if (t96 != 711LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = -1;
	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	uint16_t x420 = 1852U;
	volatile int32_t t97 = -87;

	t97 = (((x417%x418)/x419)+x420);

	if (t97 != 1852) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x421 = INT64_MAX;
	volatile uint64_t x422 = UINT64_MAX;

	t98 = (((x421%x422)/x423)+x424);

	if (t98 != 2147483653LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x425 = 137613318172366558LLU;
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MIN;
	volatile uint64_t t99 = 4058422736303LLU;

	t99 = (((x425%x426)/x427)+x428);

	if (t99 != 18446744071562067968LLU) { NG(); } else { ; }
	
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

