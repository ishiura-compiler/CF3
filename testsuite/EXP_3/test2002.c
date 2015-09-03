#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = 123917;
int8_t x7 = INT8_MAX;
uint64_t x9 = UINT64_MAX;
volatile uint32_t t4 = 49U;
int16_t x24 = INT16_MAX;
int64_t x40 = -11896LL;
static int32_t x41 = INT32_MIN;
volatile int64_t x49 = -1LL;
uint8_t x55 = 3U;
volatile int64_t t15 = -10500LL;
volatile uint32_t t18 = 299U;
uint64_t x81 = 213196325LLU;
volatile uint64_t t20 = 983115445LLU;
static volatile int64_t t21 = -2LL;
uint32_t x89 = UINT32_MAX;
uint8_t x94 = 3U;
uint64_t x102 = UINT64_MAX;
int32_t x104 = INT32_MIN;
uint16_t x107 = UINT16_MAX;
int64_t t26 = -106352444LL;
static int32_t x109 = INT32_MAX;
uint16_t x121 = 0U;
uint16_t x125 = 9U;
static uint32_t x128 = 5146U;
volatile int8_t x131 = -1;
volatile uint64_t t32 = 358711466690LLU;
int32_t x135 = INT32_MIN;
int8_t x137 = INT8_MIN;
static int8_t x144 = -1;
static int16_t x153 = INT16_MIN;
static volatile int8_t x155 = INT8_MIN;
volatile int32_t x188 = INT32_MIN;
uint64_t t46 = 1991516653136155769LLU;
int8_t x189 = INT8_MAX;
int16_t x197 = -6514;
uint64_t x199 = 9LLU;
volatile int16_t x200 = INT16_MIN;
int64_t x205 = INT64_MIN;
static uint64_t x206 = 85096174716619LLU;
volatile uint16_t x207 = 30349U;
int8_t x209 = -5;
uint32_t t52 = 14006029U;
static int32_t x216 = 1593;
uint8_t x218 = 29U;
volatile int32_t x221 = -1;
int32_t x227 = INT32_MIN;
static uint32_t x228 = 1075516609U;
static int32_t x234 = INT32_MIN;
int16_t x240 = 50;
int64_t x242 = -17288435LL;
uint64_t x253 = 13871166926586LLU;
static int8_t x262 = INT8_MAX;
int64_t x263 = -1341640206186420908LL;
int16_t x264 = INT16_MIN;
int64_t x271 = -1LL;
volatile int8_t x278 = INT8_MIN;
int32_t x280 = INT32_MIN;
uint16_t x282 = UINT16_MAX;
static int8_t x284 = INT8_MAX;
int16_t x296 = -12;
int16_t x297 = INT16_MIN;
int16_t x298 = -1;
volatile uint64_t x304 = 11986LLU;
static int32_t x309 = -674278087;
int8_t x317 = INT8_MIN;
int64_t x324 = 1306459LL;
uint32_t x329 = UINT32_MAX;
volatile int64_t t82 = 391772LL;
int64_t t84 = 4035861430626LL;
volatile uint32_t x341 = UINT32_MAX;
int32_t x353 = INT32_MAX;
static int8_t x358 = -1;
int32_t x362 = -1;
uint32_t x363 = UINT32_MAX;
int32_t x373 = -1;
volatile int64_t t93 = 39877150431950LL;
static int64_t t94 = 148957LL;
static int16_t x384 = INT16_MAX;
int32_t x388 = -1;
uint32_t x391 = 452228U;
static int16_t x392 = 12;
volatile uint64_t t97 = 134791782238321110LLU;
uint8_t x393 = UINT8_MAX;


void f0(void) {
	volatile int32_t x1 = -1;
	static volatile int32_t x2 = INT32_MIN;
	uint32_t x3 = 1671702U;
	volatile uint32_t t0 = 0U;

	t0 = ((x1&x2)^(x3|x4));

	if (t0 != 2149180959U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 15U;
	static int32_t x6 = -988;
	volatile uint16_t x8 = 1451U;
	volatile uint32_t t1 = 172208174U;

	t1 = ((x5&x6)^(x7|x8));

	if (t1 != 1531U) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	volatile uint16_t x11 = 10U;
	int32_t x12 = -230927511;
	uint64_t t2 = 4781808527627LLU;

	t2 = ((x9&x10)^(x11|x12));

	if (t2 != 9223372036623848299LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x14 = 1273U;
	uint16_t x15 = 14165U;
	volatile int8_t x16 = -1;
	uint32_t t3 = UINT32_MAX;

	t3 = ((x13&x14)^(x15|x16));

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x17 = 7535U;
	volatile int32_t x18 = 1;
	int8_t x19 = INT8_MIN;
	volatile uint16_t x20 = UINT16_MAX;

	t4 = ((x17&x18)^(x19|x20));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint8_t x22 = 30U;
	uint8_t x23 = 13U;
	int32_t t5 = 52391074;

	t5 = ((x21&x22)^(x23|x24));

	if (t5 != 32737) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = 34;
	int8_t x26 = -1;
	uint64_t x27 = UINT64_MAX;
	int8_t x28 = -43;
	static uint64_t t6 = 1376563LLU;

	t6 = ((x25&x26)^(x27|x28));

	if (t6 != 18446744073709551581LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	static uint16_t x30 = 3U;
	volatile int64_t x31 = INT64_MAX;
	static uint32_t x32 = 16U;
	int64_t t7 = INT64_MAX;

	t7 = ((x29&x30)^(x31|x32));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = INT32_MIN;
	uint64_t x34 = 47LLU;
	int16_t x35 = 71;
	static uint64_t x36 = UINT64_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x33&x34)^(x35|x36));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 1597350U;
	int8_t x38 = INT8_MIN;
	volatile uint64_t x39 = 376LLU;
	uint64_t t9 = 60570843193863LLU;

	t9 = ((x37&x38)^(x39|x40));

	if (t9 != 18446744073707949688LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	uint16_t x43 = 1568U;
	static uint32_t x44 = 4275U;
	static volatile uint32_t t10 = 237195380U;

	t10 = ((x41&x42)^(x43|x44));

	if (t10 != 2147489459U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	static int64_t x46 = -1LL;
	int64_t x47 = INT64_MIN;
	uint16_t x48 = 10750U;
	int64_t t11 = 39493243LL;

	t11 = ((x45&x46)^(x47|x48));

	if (t11 != -9223372034707302911LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x50 = -1;
	static volatile uint32_t x51 = UINT32_MAX;
	int32_t x52 = INT32_MIN;
	static int64_t t12 = -41875932LL;

	t12 = ((x49&x50)^(x51|x52));

	if (t12 != -4294967296LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 114;
	int64_t x54 = -42436LL;
	int8_t x56 = INT8_MIN;
	volatile int64_t t13 = -2366049087533029LL;

	t13 = ((x53&x54)^(x55|x56));

	if (t13 != -77LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 15U;
	int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MAX;
	static volatile int32_t x60 = -50003;
	volatile int64_t t14 = 627942880891053LL;

	t14 = ((x57&x58)^(x59|x60));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x61 = 1018U;
	volatile int8_t x62 = INT8_MIN;
	uint16_t x63 = UINT16_MAX;
	int64_t x64 = 1206LL;

	t15 = ((x61&x62)^(x63|x64));

	if (t15 != 64639LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 2U;
	int64_t x66 = -1LL;
	int16_t x67 = 1999;
	int64_t x68 = -83887798228125LL;
	volatile int64_t t16 = 3970438LL;

	t16 = ((x65&x66)^(x67|x68));

	if (t16 != -83887798226963LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int64_t x70 = -826224768942LL;
	static int32_t x71 = -1;
	int64_t x72 = 728173LL;
	static int64_t t17 = 23792539952370821LL;

	t17 = ((x69&x70)^(x71|x72));

	if (t17 != -34899LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MAX;
	static uint32_t x74 = 13U;
	int32_t x75 = INT32_MIN;
	static volatile int16_t x76 = -1;

	t18 = ((x73&x74)^(x75|x76));

	if (t18 != 4294967282U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 68U;
	static uint64_t x78 = UINT64_MAX;
	uint64_t x79 = UINT64_MAX;
	volatile int16_t x80 = INT16_MAX;
	volatile uint64_t t19 = 4178327464009LLU;

	t19 = ((x77&x78)^(x79|x80));

	if (t19 != 18446744073709551547LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x82 = INT16_MAX;
	int16_t x83 = -1;
	int32_t x84 = INT32_MIN;

	t20 = ((x81&x82)^(x83|x84));

	if (t20 != 18446744073709543898LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -1LL;
	uint8_t x86 = 18U;
	int64_t x87 = -1LL;
	volatile uint32_t x88 = 53419U;

	t21 = ((x85&x86)^(x87|x88));

	if (t21 != -19LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	int64_t t22 = -110570450LL;

	t22 = ((x89&x90)^(x91|x92));

	if (t22 != -1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -6;
	int64_t x95 = -3080LL;
	int16_t x96 = -1;
	volatile int64_t t23 = 9904825740171LL;

	t23 = ((x93&x94)^(x95|x96));

	if (t23 != -3LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 21057LLU;
	static volatile int32_t x98 = 819857387;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = -1LL;
	volatile uint64_t t24 = 1887375729LLU;

	t24 = ((x97&x98)^(x99|x100));

	if (t24 != 18446744073709551038LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 928401LL;
	int32_t x103 = INT32_MIN;
	volatile uint64_t t25 = 884LLU;

	t25 = ((x101&x102)^(x103|x104));

	if (t25 != 18446744071562996369LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	int64_t x106 = -32942781LL;
	volatile uint32_t x108 = 110956U;

	t26 = ((x105&x106)^(x107|x108));

	if (t26 != -32986369LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	uint8_t x111 = 3U;
	static uint32_t x112 = 1U;
	volatile uint32_t t27 = 41U;

	t27 = ((x109&x110)^(x111|x112));

	if (t27 != 2147483523U) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int8_t x114 = 3;
	int8_t x115 = INT8_MIN;
	static int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -250727710LL;

	t28 = ((x113&x114)^(x115|x116));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = 851643506;
	uint64_t x118 = 104770LLU;
	int8_t x119 = -1;
	int16_t x120 = INT16_MIN;
	uint64_t t29 = 1LLU;

	t29 = ((x117&x118)^(x119|x120));

	if (t29 != 18446744073709483965LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x122 = INT8_MIN;
	static volatile int16_t x123 = INT16_MIN;
	uint32_t x124 = UINT32_MAX;
	volatile uint32_t t30 = UINT32_MAX;

	t30 = ((x121&x122)^(x123|x124));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x126 = UINT32_MAX;
	uint8_t x127 = UINT8_MAX;
	uint32_t t31 = 1626374U;

	t31 = ((x125&x126)^(x127|x128));

	if (t31 != 5366U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	uint64_t x130 = UINT64_MAX;
	uint64_t x132 = UINT64_MAX;

	t32 = ((x129&x130)^(x131|x132));

	if (t32 != 2147483647LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = 31666337;
	uint32_t x134 = UINT32_MAX;
	int32_t x136 = -341310043;
	uint32_t t33 = 1476U;

	t33 = ((x133&x134)^(x135|x136));

	if (t33 != 3930797316U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x138 = -1;
	volatile uint32_t x139 = 5U;
	int32_t x140 = -1;
	volatile uint32_t t34 = 2U;

	t34 = ((x137&x138)^(x139|x140));

	if (t34 != 127U) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = -62650480;
	int32_t x142 = -19728;
	static int64_t x143 = INT64_MIN;
	static int64_t t35 = -385124936LL;

	t35 = ((x141&x142)^(x143|x144));

	if (t35 != 62651759LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -1;
	int32_t x146 = -1;
	volatile uint32_t x147 = UINT32_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile uint32_t t36 = 4U;

	t36 = ((x145&x146)^(x147|x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 422473404U;
	static uint64_t x150 = UINT64_MAX;
	static int16_t x151 = 0;
	uint8_t x152 = 18U;
	volatile uint64_t t37 = 25LLU;

	t37 = ((x149&x150)^(x151|x152));

	if (t37 != 422473390LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x154 = 9U;
	int64_t x156 = INT64_MAX;
	static int64_t t38 = 286354325388LL;

	t38 = ((x153&x154)^(x155|x156));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int8_t x158 = 24;
	int8_t x159 = INT8_MAX;
	static int64_t x160 = -1LL;
	static volatile int64_t t39 = 63221496850290LL;

	t39 = ((x157&x158)^(x159|x160));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MAX;
	uint32_t x162 = 3980U;
	int32_t x163 = -1;
	uint8_t x164 = 0U;
	volatile int64_t t40 = 1742726LL;

	t40 = ((x161&x162)^(x163|x164));

	if (t40 != -3981LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = UINT16_MAX;
	uint16_t x166 = 1U;
	volatile int32_t x167 = INT32_MIN;
	volatile int8_t x168 = INT8_MAX;
	int32_t t41 = 222;

	t41 = ((x165&x166)^(x167|x168));

	if (t41 != -2147483522) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = UINT8_MAX;
	int32_t x170 = INT32_MIN;
	uint64_t x171 = 49235911339931040LLU;
	static int64_t x172 = 0LL;
	uint64_t t42 = 3345903207812289LLU;

	t42 = ((x169&x170)^(x171|x172));

	if (t42 != 49235911339931040LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -3974786;
	uint16_t x174 = 0U;
	static volatile uint32_t x175 = UINT32_MAX;
	uint32_t x176 = UINT32_MAX;
	uint32_t t43 = UINT32_MAX;

	t43 = ((x173&x174)^(x175|x176));

	if (t43 != UINT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 18U;
	static int8_t x178 = -1;
	int64_t x179 = 280960994LL;
	int8_t x180 = -23;
	volatile int64_t t44 = -530043573341144270LL;

	t44 = ((x177&x178)^(x179|x180));

	if (t44 != -7LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	static uint64_t x182 = 6LLU;
	uint16_t x183 = 411U;
	int8_t x184 = INT8_MIN;
	volatile uint64_t t45 = 257819LLU;

	t45 = ((x181&x182)^(x183|x184));

	if (t45 != 18446744073709551517LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MAX;
	static uint64_t x186 = UINT64_MAX;
	uint8_t x187 = 114U;

	t46 = ((x185&x186)^(x187|x188));

	if (t46 != 18446744071562100621LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint8_t x190 = 0U;
	int32_t x191 = -1;
	int8_t x192 = -1;
	int32_t t47 = 258;

	t47 = ((x189&x190)^(x191|x192));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	volatile int64_t x194 = INT64_MIN;
	static uint32_t x195 = 21412722U;
	int64_t x196 = INT64_MIN;
	volatile int64_t t48 = -115228278744LL;

	t48 = ((x193&x194)^(x195|x196));

	if (t48 != 21412722LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x198 = -1LL;
	static volatile uint64_t t49 = 34951769559402901LLU;

	t49 = ((x197&x198)^(x199|x200));

	if (t49 != 26247LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	volatile int8_t x202 = INT8_MAX;
	int64_t x203 = INT64_MIN;
	static volatile uint32_t x204 = UINT32_MAX;
	static int64_t t50 = 1478309955935LL;

	t50 = ((x201&x202)^(x203|x204));

	if (t50 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x208 = 10134U;
	volatile uint64_t t51 = 66LLU;

	t51 = ((x205&x206)^(x207|x208));

	if (t51 != 30623LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x210 = -1;
	static int32_t x211 = -7060233;
	uint32_t x212 = UINT32_MAX;

	t52 = ((x209&x210)^(x211|x212));

	if (t52 != 4U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	volatile int8_t x214 = INT8_MIN;
	uint32_t x215 = 3386176U;
	uint32_t t53 = 1610944994U;

	t53 = ((x213&x214)^(x215|x216));

	if (t53 != 4291580153U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x219 = -39;
	int64_t x220 = INT64_MAX;
	volatile int64_t t54 = -3885403963087LL;

	t54 = ((x217&x218)^(x219|x220));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MIN;
	uint16_t x223 = 5U;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = -804238372;

	t55 = ((x221&x222)^(x223|x224));

	if (t55 != -2147450881) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 0;
	static uint8_t x226 = UINT8_MAX;
	volatile uint32_t t56 = 892U;

	t56 = ((x225&x226)^(x227|x228));

	if (t56 != 3223000257U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = -1LL;
	int64_t x231 = INT64_MAX;
	int8_t x232 = -3;
	int64_t t57 = -35711817981LL;

	t57 = ((x229&x230)^(x231|x232));

	if (t57 != -65536LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = UINT8_MAX;
	uint32_t x235 = 7U;
	int16_t x236 = -1;
	volatile uint32_t t58 = UINT32_MAX;

	t58 = ((x233&x234)^(x235|x236));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = -34LL;
	static int32_t x238 = INT32_MIN;
	volatile uint8_t x239 = 26U;
	volatile int64_t t59 = -463485996358947187LL;

	t59 = ((x237&x238)^(x239|x240));

	if (t59 != -2147483590LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = UINT8_MAX;
	static uint64_t x243 = UINT64_MAX;
	int8_t x244 = INT8_MAX;
	uint64_t t60 = 5975LLU;

	t60 = ((x241&x242)^(x243|x244));

	if (t60 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int32_t x246 = INT32_MAX;
	uint8_t x247 = 1U;
	int16_t x248 = -1855;
	int64_t t61 = -32030591030719795LL;

	t61 = ((x245&x246)^(x247|x248));

	if (t61 != -1855LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -2;
	static int8_t x250 = -1;
	uint64_t x251 = 5570667483828LLU;
	static uint16_t x252 = 35U;
	static uint64_t t62 = 47203645646072LLU;

	t62 = ((x249&x250)^(x251|x252));

	if (t62 != 18446738503042067785LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x254 = 17872;
	int32_t x255 = INT32_MAX;
	static int8_t x256 = -10;
	static volatile uint64_t t63 = 16227506029964LLU;

	t63 = ((x253&x254)^(x255|x256));

	if (t63 != 18446744073709550383LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x257 = INT32_MIN;
	int32_t x258 = 622440;
	int32_t x259 = -3139;
	int64_t x260 = 0LL;
	int64_t t64 = -1848791LL;

	t64 = ((x257&x258)^(x259|x260));

	if (t64 != -3139LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = 7556931LL;
	static volatile int64_t t65 = -5700460702LL;

	t65 = ((x261&x262)^(x263|x264));

	if (t65 != -6889LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = -1;
	volatile int16_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	volatile uint64_t t66 = 442106LLU;

	t66 = ((x265&x266)^(x267|x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = -426;
	int32_t x270 = -934;
	uint8_t x272 = UINT8_MAX;
	int64_t t67 = 7319689LL;

	t67 = ((x269&x270)^(x271|x272));

	if (t67 != 941LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 12362U;
	volatile int32_t x275 = 16471640;
	int64_t x276 = 20626807890LL;
	int64_t t68 = -1017LL;

	t68 = ((x273&x274)^(x275|x276));

	if (t68 != 20635934298LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int32_t x279 = INT32_MAX;
	volatile int32_t t69 = -5;

	t69 = ((x277&x278)^(x279|x280));

	if (t69 != -32641) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x281 = UINT16_MAX;
	uint16_t x283 = UINT16_MAX;
	static int32_t t70 = 1498;

	t70 = ((x281&x282)^(x283|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x285 = INT32_MAX;
	uint16_t x286 = 3840U;
	int16_t x287 = INT16_MAX;
	uint8_t x288 = UINT8_MAX;
	int32_t t71 = 16218;

	t71 = ((x285&x286)^(x287|x288));

	if (t71 != 28927) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int16_t x290 = INT16_MIN;
	int64_t x291 = INT64_MIN;
	int32_t x292 = INT32_MAX;
	volatile int64_t t72 = 1LL;

	t72 = ((x289&x290)^(x291|x292));

	if (t72 != 9223372034707324927LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int32_t x294 = INT32_MIN;
	uint16_t x295 = 1U;
	static int32_t t73 = 30091;

	t73 = ((x293&x294)^(x295|x296));

	if (t73 != 2147483637) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x299 = INT32_MIN;
	static uint32_t x300 = 90406696U;
	static volatile uint32_t t74 = 484109401U;

	t74 = ((x297&x298)^(x299|x300));

	if (t74 != 2057109288U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = 41;
	volatile uint16_t x302 = UINT16_MAX;
	int64_t x303 = INT64_MAX;
	uint64_t t75 = 658932426801LLU;

	t75 = ((x301&x302)^(x303|x304));

	if (t75 != 9223372036854775766LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	uint16_t x306 = UINT16_MAX;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = -6;
	uint32_t t76 = UINT32_MAX;

	t76 = ((x305&x306)^(x307|x308));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x310 = 673U;
	static uint16_t x311 = 17U;
	int32_t x312 = INT32_MIN;
	volatile int32_t t77 = -6;

	t77 = ((x309&x310)^(x311|x312));

	if (t77 != -2147483600) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	volatile int16_t x314 = -1;
	static int32_t x315 = -947281192;
	volatile uint16_t x316 = UINT16_MAX;
	int32_t t78 = 683529;

	t78 = ((x313&x314)^(x315|x316));

	if (t78 != -947322880) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 0U;
	int32_t x319 = INT32_MIN;
	uint16_t x320 = 2U;
	int32_t t79 = 1659;

	t79 = ((x317&x318)^(x319|x320));

	if (t79 != -2147483646) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 7949U;
	int64_t x322 = -8485435179LL;
	volatile int64_t x323 = -330088417LL;
	static int64_t t80 = -57148338131003LL;

	t80 = ((x321&x322)^(x323|x324));

	if (t80 != -330045606LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MAX;
	volatile uint16_t x326 = UINT16_MAX;
	uint16_t x327 = 3916U;
	volatile int16_t x328 = INT16_MIN;
	volatile int32_t t81 = -83179205;

	t81 = ((x325&x326)^(x327|x328));

	if (t81 != -3917) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x330 = INT8_MIN;
	int64_t x331 = 2205599249LL;
	int32_t x332 = 24;

	t82 = ((x329&x330)^(x331|x332));

	if (t82 != 2089367961LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = 2040073;
	volatile int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -1;
	uint16_t x336 = 4024U;
	int32_t t83 = 10;

	t83 = ((x333&x334)^(x335|x336));

	if (t83 != -2040065) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = -1LL;
	int32_t x338 = INT32_MIN;
	int8_t x339 = -1;
	int32_t x340 = INT32_MIN;

	t84 = ((x337&x338)^(x339|x340));

	if (t84 != 2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = INT64_MAX;
	volatile int8_t x343 = INT8_MIN;
	static int32_t x344 = INT32_MIN;
	int64_t t85 = -870355041LL;

	t85 = ((x341&x342)^(x343|x344));

	if (t85 != -4294967169LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -439LL;
	int16_t x346 = -3;
	static int32_t x347 = -270;
	int32_t x348 = -1;
	volatile int64_t t86 = -25178LL;

	t86 = ((x345&x346)^(x347|x348));

	if (t86 != 438LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = -1;
	static int8_t x351 = INT8_MIN;
	int64_t x352 = INT64_MIN;
	volatile int64_t t87 = -586910LL;

	t87 = ((x349&x350)^(x351|x352));

	if (t87 != 32640LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x354 = INT8_MIN;
	volatile int32_t x355 = INT32_MAX;
	uint8_t x356 = 36U;
	volatile int32_t t88 = -6;

	t88 = ((x353&x354)^(x355|x356));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 558545454115343LLU;
	static uint32_t x359 = UINT32_MAX;
	uint64_t x360 = 24LLU;
	uint64_t t89 = 23634LLU;

	t89 = ((x357&x358)^(x359|x360));

	if (t89 != 558545474803184LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 690LLU;
	int64_t x364 = 0LL;
	volatile uint64_t t90 = 58LLU;

	t90 = ((x361&x362)^(x363|x364));

	if (t90 != 4294966605LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = INT32_MIN;
	uint8_t x367 = 1U;
	int16_t x368 = 332;
	static volatile int64_t t91 = -58454384440631LL;

	t91 = ((x365&x366)^(x367|x368));

	if (t91 != 9223372034707292493LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = 1931LLU;
	uint16_t x370 = 0U;
	volatile uint32_t x371 = UINT32_MAX;
	int16_t x372 = INT16_MAX;
	static volatile uint64_t t92 = 12612LLU;

	t92 = ((x369&x370)^(x371|x372));

	if (t92 != 4294967295LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = INT32_MIN;
	static volatile int64_t x375 = INT64_MIN;
	volatile int64_t x376 = INT64_MIN;

	t93 = ((x373&x374)^(x375|x376));

	if (t93 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = INT16_MAX;
	int64_t x378 = INT64_MAX;
	uint16_t x379 = UINT16_MAX;
	volatile int8_t x380 = -7;

	t94 = ((x377&x378)^(x379|x380));

	if (t94 != -32768LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MAX;
	static volatile int8_t x382 = INT8_MAX;
	volatile int8_t x383 = 4;
	static int32_t t95 = -189;

	t95 = ((x381&x382)^(x383|x384));

	if (t95 != 32640) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	uint32_t x386 = 4U;
	static int8_t x387 = INT8_MIN;
	static volatile uint32_t t96 = 49914579U;

	t96 = ((x385&x386)^(x387|x388));

	if (t96 != 4294967291U) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x389 = -54;
	uint64_t x390 = 25364190677438686LLU;

	t97 = ((x389&x390)^(x391|x392));

	if (t97 != 25364190677890630LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = INT16_MAX;
	static int32_t x395 = 455;
	volatile int32_t x396 = -3;
	int32_t t98 = 220233097;

	t98 = ((x393&x394)^(x395|x396));

	if (t98 != -256) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int64_t x398 = INT64_MIN;
	int16_t x399 = -1;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t99 = 3LLU;

	t99 = ((x397&x398)^(x399|x400));

	if (t99 != 9223372036854775807LLU) { NG(); } else { ; }
	
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

