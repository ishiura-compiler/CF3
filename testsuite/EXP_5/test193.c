#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x14 = 1;
int64_t x23 = INT64_MAX;
volatile int32_t x25 = -24467;
int8_t x29 = INT8_MAX;
static int32_t x36 = 19087;
volatile uint64_t t7 = 166581330686705579LLU;
static int32_t x72 = -12236940;
uint32_t x76 = 179U;
uint32_t x78 = UINT32_MAX;
static volatile int64_t t17 = -3LL;
static volatile uint16_t x85 = 15U;
static uint16_t x87 = UINT16_MAX;
static int8_t x89 = -1;
int16_t x90 = -1;
int64_t x91 = -6281059LL;
volatile int64_t t19 = 2182195667730373500LL;
int64_t x101 = INT64_MIN;
static int8_t x102 = INT8_MAX;
volatile int64_t t22 = INT64_MIN;
static uint64_t x107 = UINT64_MAX;
uint32_t x108 = 9734U;
volatile uint64_t t23 = 1263158354210105LLU;
volatile int64_t t24 = 82025955137518881LL;
int32_t x120 = INT32_MAX;
volatile int32_t t26 = INT32_MIN;
volatile uint64_t t27 = 0LLU;
volatile uint16_t x126 = 109U;
volatile int16_t x127 = INT16_MIN;
static int16_t x136 = INT16_MAX;
static volatile int64_t t30 = -33077186748345LL;
volatile uint64_t t32 = 17306764LLU;
volatile int64_t x148 = INT64_MIN;
uint32_t x157 = 5292386U;
int8_t x171 = -1;
volatile uint64_t x180 = 35959LLU;
uint64_t t38 = 2197671882605007LLU;
static int8_t x184 = -36;
volatile uint64_t t39 = 159549LLU;
int8_t x186 = 1;
int8_t x188 = INT8_MIN;
volatile int64_t x192 = -3021552373755599LL;
static int8_t x196 = -24;
uint64_t x202 = 1872664104230436LLU;
volatile int32_t x208 = 5401534;
static volatile int32_t x211 = INT32_MIN;
static volatile uint32_t t46 = 223U;
int8_t x233 = INT8_MIN;
uint64_t x246 = UINT64_MAX;
uint64_t t51 = 2LLU;
uint16_t x253 = 2833U;
int8_t x254 = -5;
volatile int16_t x256 = -1;
uint16_t x259 = 3143U;
volatile uint16_t x272 = 153U;
static uint64_t x277 = 69448895540303507LLU;
uint8_t x288 = UINT8_MAX;
volatile int8_t x292 = INT8_MAX;
volatile int64_t t59 = 380102436597168LL;
int16_t x304 = 31;
static int16_t x312 = -1;
int64_t t65 = INT64_MIN;
static int8_t x336 = -28;
int16_t x338 = -1;
int16_t x339 = -444;
volatile int32_t x341 = INT32_MIN;
volatile int64_t t68 = -100476138283506000LL;
int16_t x347 = INT16_MAX;
uint8_t x348 = 3U;
int8_t x352 = INT8_MIN;
uint16_t x353 = 6U;
uint16_t x359 = 1344U;
volatile int32_t t72 = 1064948470;
static uint64_t t73 = 3219577LLU;
uint8_t x376 = 38U;
static volatile uint64_t t77 = 5488168LLU;
volatile int16_t x387 = 875;
static int16_t x388 = INT16_MIN;
volatile int32_t t78 = -9;
static volatile uint64_t x391 = 21779167806370LLU;
uint32_t t80 = 5861770U;
int8_t x397 = -28;
volatile int32_t x398 = INT32_MIN;
uint64_t x418 = 474071522LLU;
uint64_t x426 = 128554LLU;
int32_t x430 = -35290380;
uint32_t t86 = 1043490U;
int16_t x437 = 99;
uint32_t x440 = 987171U;
volatile int64_t x445 = INT64_MAX;
uint64_t x446 = UINT64_MAX;
static uint8_t x449 = 28U;
static uint32_t x457 = UINT32_MAX;
static volatile int64_t x467 = 3LL;
static uint16_t x468 = 10U;
int64_t t94 = 794647997LL;
uint64_t x478 = UINT64_MAX;
uint64_t t95 = 343235052523651LLU;
static int8_t x499 = INT8_MAX;


void f0(void) {
	int16_t x5 = 1;
	uint16_t x6 = 404U;
	static int16_t x7 = INT16_MIN;
	uint32_t x8 = UINT32_MAX;
	uint32_t t0 = 5843U;

	t0 = (x5&((x6-x7)-x8));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x9 = UINT64_MAX;
	volatile int8_t x10 = -7;
	uint64_t x11 = 0LLU;
	int32_t x12 = INT32_MIN;
	volatile uint64_t t1 = 13LLU;

	t1 = (x9&((x10-x11)-x12));

	if (t1 != 2147483641LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 5U;
	int16_t x15 = INT16_MAX;
	uint8_t x16 = 125U;
	int32_t t2 = 228282966;

	t2 = (x13&((x14-x15)-x16));

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x21 = UINT32_MAX;
	uint32_t x22 = UINT32_MAX;
	uint32_t x24 = 1U;
	static volatile int64_t t3 = 883382701LL;

	t3 = (x21&((x22-x23)-x24));

	if (t3 != 4294967295LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x26 = 8821U;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 4210462U;
	static volatile uint32_t t4 = 6175U;

	t4 = (x25&((x26-x27)-x28));

	if (t4 != 4290781253U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x30 = INT16_MIN;
	uint64_t x31 = 4LLU;
	int64_t x32 = -1LL;
	volatile uint64_t t5 = 15LLU;

	t5 = (x29&((x30-x31)-x32));

	if (t5 != 125LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -19347LL;
	uint16_t x34 = 0U;
	int8_t x35 = -1;
	volatile int64_t t6 = 4348817161LL;

	t6 = (x33&((x34-x35)-x36));

	if (t6 != -19360LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = -1;
	static volatile uint32_t x38 = 65464U;
	uint64_t x39 = UINT64_MAX;
	volatile int16_t x40 = 2014;

	t7 = (x37&((x38-x39)-x40));

	if (t7 != 63451LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = 11;
	int64_t x43 = -5LL;
	int8_t x44 = INT8_MAX;
	volatile int64_t t8 = -495LL;

	t8 = (x41&((x42-x43)-x44));

	if (t8 != 4294967185LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x45 = -3;
	volatile int32_t x46 = INT32_MIN;
	int32_t x47 = INT32_MIN;
	int32_t x48 = -1;
	int32_t t9 = -425;

	t9 = (x45&((x46-x47)-x48));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -1LL;
	uint16_t x50 = 1U;
	int64_t x51 = 1LL;
	static int32_t x52 = INT32_MIN;
	volatile int64_t t10 = 3966949657694698LL;

	t10 = (x49&((x50-x51)-x52));

	if (t10 != 2147483648LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = -8758716;
	volatile int64_t x58 = 4111499107552LL;
	int8_t x59 = INT8_MAX;
	uint64_t x60 = UINT64_MAX;
	volatile uint64_t t11 = 25500810973LLU;

	t11 = (x57&((x58-x59)-x60));

	if (t11 != 4111499008064LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = 11;
	volatile uint8_t x63 = 42U;
	int16_t x64 = -1;
	int64_t t12 = INT64_MIN;

	t12 = (x61&((x62-x63)-x64));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = -1;
	static int8_t x66 = INT8_MAX;
	int64_t x67 = -1LL;
	volatile int16_t x68 = -6;
	volatile int64_t t13 = 374610336LL;

	t13 = (x65&((x66-x67)-x68));

	if (t13 != 134LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MAX;
	volatile uint32_t x70 = 2866115U;
	volatile int8_t x71 = INT8_MIN;
	int64_t t14 = -2007792746023766LL;

	t14 = (x69&((x70-x71)-x72));

	if (t14 != 15103183LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x73 = 7243U;
	static volatile int32_t x74 = 251248810;
	uint32_t x75 = 2U;
	volatile uint32_t t15 = 147355U;

	t15 = (x73&((x74-x75)-x76));

	if (t15 != 7233U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = 32;
	uint32_t x79 = 59U;
	int16_t x80 = INT16_MIN;
	volatile uint32_t t16 = 2125508U;

	t16 = (x77&((x78-x79)-x80));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = UINT8_MAX;
	uint16_t x82 = 627U;
	uint16_t x83 = 1670U;
	int64_t x84 = INT64_MIN;

	t17 = (x81&((x82-x83)-x84));

	if (t17 != 237LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x86 = -1;
	static uint16_t x88 = UINT16_MAX;
	int32_t t18 = -2587513;

	t18 = (x85&((x86-x87)-x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x92 = INT16_MIN;

	t19 = (x89&((x90-x91)-x92));

	if (t19 != 6313826LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = -26;
	int16_t x94 = INT16_MIN;
	int8_t x95 = INT8_MIN;
	uint8_t x96 = UINT8_MAX;
	static int32_t t20 = 131006550;

	t20 = (x93&((x94-x95)-x96));

	if (t20 != -32896) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x97 = INT32_MIN;
	static uint8_t x98 = 31U;
	static int16_t x99 = INT16_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t21 = -2902618629146844744LL;

	t21 = (x97&((x98-x99)-x100));

	if (t21 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x103 = -1;
	int16_t x104 = INT16_MAX;

	t22 = (x101&((x102-x103)-x104));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = INT32_MIN;
	static uint64_t x106 = UINT64_MAX;

	t23 = (x105&((x106-x107)-x108));

	if (t23 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	int64_t x110 = -1LL;
	int32_t x111 = -3522;
	static int64_t x112 = -1LL;

	t24 = (x109&((x110-x111)-x112));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x113 = UINT16_MAX;
	volatile uint64_t x114 = 3LLU;
	volatile uint16_t x115 = UINT16_MAX;
	int32_t x116 = 1;
	volatile uint64_t t25 = 90LLU;

	t25 = (x113&((x114-x115)-x116));

	if (t25 != 3LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MIN;
	int32_t x118 = INT32_MIN;
	volatile int32_t x119 = INT32_MIN;

	t26 = (x117&((x118-x119)-x120));

	if (t26 != INT32_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x121 = INT16_MAX;
	static volatile uint64_t x122 = UINT64_MAX;
	uint32_t x123 = UINT32_MAX;
	int16_t x124 = INT16_MAX;

	t27 = (x121&((x122-x123)-x124));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -494;
	int32_t x128 = -124;
	volatile int32_t t28 = 117367706;

	t28 = (x125&((x126-x127)-x128));

	if (t28 != 32768) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x129 = 0;
	static uint64_t x130 = 761038LLU;
	static int8_t x131 = 26;
	uint8_t x132 = UINT8_MAX;
	volatile uint64_t t29 = 560993387326LLU;

	t29 = (x129&((x130-x131)-x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = -1;
	int64_t x135 = -890110036098499LL;

	t30 = (x133&((x134-x135)-x136));

	if (t30 != 890108349775872LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x137 = INT16_MIN;
	volatile int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	volatile uint64_t x140 = 157LLU;
	uint64_t t31 = 74497907LLU;

	t31 = (x137&((x138-x139)-x140));

	if (t31 != 9223372039002226688LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = UINT64_MAX;
	uint8_t x142 = 4U;
	uint32_t x143 = 0U;
	volatile uint8_t x144 = 29U;

	t32 = (x141&((x142-x143)-x144));

	if (t32 != 4294967271LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -855248115043120LL;
	int8_t x146 = INT8_MIN;
	int16_t x147 = 2230;
	static int64_t t33 = -136813LL;

	t33 = (x145&((x146-x147)-x148));

	if (t33 != 9222516788739732672LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	volatile int32_t x150 = INT32_MIN;
	int16_t x151 = -322;
	uint8_t x152 = UINT8_MAX;
	static uint64_t t34 = 0LLU;

	t34 = (x149&((x150-x151)-x152));

	if (t34 != 18446744071562068035LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x158 = 133;
	static uint8_t x159 = 106U;
	int8_t x160 = -1;
	volatile uint32_t t35 = 589456508U;

	t35 = (x157&((x158-x159)-x160));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x169 = INT16_MIN;
	uint32_t x170 = 147301224U;
	uint32_t x172 = 15U;
	static volatile uint32_t t36 = 89554U;

	t36 = (x169&((x170-x171)-x172));

	if (t36 != 147292160U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = INT16_MAX;
	volatile int16_t x175 = INT16_MAX;
	int64_t x176 = 505217666333LL;
	volatile int64_t t37 = 117362LL;

	t37 = (x173&((x174-x175)-x176));

	if (t37 != 1588474595LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = INT8_MAX;
	uint32_t x178 = 3336U;
	static int8_t x179 = -1;

	t38 = (x177&((x178-x179)-x180));

	if (t38 != 18LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -576850;
	volatile uint64_t x182 = 5796853219491LLU;
	int16_t x183 = INT16_MAX;

	t39 = (x181&((x182-x183)-x184));

	if (t39 != 5796853186696LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x185 = -1;
	int16_t x187 = -14919;
	volatile int32_t t40 = -70;

	t40 = (x185&((x186-x187)-x188));

	if (t40 != 15048) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MIN;
	volatile uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = 0;
	int64_t t41 = 121890346464876LL;

	t41 = (x189&((x190-x191)-x192));

	if (t41 != 3021556668722816LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -1LL;
	uint64_t x194 = 2443542592556117LLU;
	volatile int16_t x195 = INT16_MAX;
	uint64_t t42 = 867248LLU;

	t42 = (x193&((x194-x195)-x196));

	if (t42 != 2443542592523374LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -1;
	int32_t x203 = INT32_MIN;
	uint64_t x204 = 304101657080444300LLU;
	uint64_t t43 = 86660778341188258LLU;

	t43 = (x201&((x202-x203)-x204));

	if (t43 != 18144515082880821400LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x205 = -1;
	static int16_t x206 = INT16_MAX;
	static int64_t x207 = 26747363500570957LL;
	int64_t t44 = -25153939031055LL;

	t44 = (x205&((x206-x207)-x208));

	if (t44 != -26747363505939724LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x209 = -638511528;
	int8_t x210 = INT8_MIN;
	static uint16_t x212 = 18U;
	volatile int32_t t45 = -15;

	t45 = (x209&((x210-x211)-x212));

	if (t45 != 1508972104) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x213 = INT32_MIN;
	static volatile int32_t x214 = INT32_MAX;
	volatile uint32_t x215 = 59594U;
	int32_t x216 = 15404;

	t46 = (x213&((x214-x215)-x216));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x225 = -6222;
	int32_t x226 = -50639889;
	static int16_t x227 = -1;
	uint32_t x228 = 3U;
	uint32_t t47 = 1057266U;

	t47 = (x225&((x226-x227)-x228));

	if (t47 != 4244325280U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x229 = UINT16_MAX;
	int64_t x230 = -1LL;
	uint32_t x231 = UINT32_MAX;
	uint32_t x232 = UINT32_MAX;
	int64_t t48 = 260757LL;

	t48 = (x229&((x230-x231)-x232));

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = INT64_MIN;
	volatile int64_t x236 = 106991090LL;
	static volatile int64_t t49 = 3280LL;

	t49 = (x233&((x234-x235)-x236));

	if (t49 != 9223372036747784576LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x237 = -1LL;
	static uint8_t x238 = UINT8_MAX;
	uint64_t x239 = 11464213LLU;
	uint16_t x240 = UINT16_MAX;
	uint64_t t50 = 55017LLU;

	t50 = (x237&((x238-x239)-x240));

	if (t50 != 18446744073698022123LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = INT32_MIN;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;

	t51 = (x245&((x246-x247)-x248));

	if (t51 != 2147483648LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x255 = INT32_MIN;
	volatile int32_t t52 = 65455;

	t52 = (x253&((x254-x255)-x256));

	if (t52 != 2832) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x257 = INT8_MAX;
	static volatile uint32_t x258 = 746U;
	volatile int16_t x260 = -44;
	uint32_t t53 = 283336968U;

	t53 = (x257&((x258-x259)-x260));

	if (t53 != 79U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x269 = 20;
	uint8_t x270 = UINT8_MAX;
	static uint32_t x271 = UINT32_MAX;
	static uint32_t t54 = 884U;

	t54 = (x269&((x270-x271)-x272));

	if (t54 != 4U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x273 = 1U;
	int32_t x274 = -1252;
	uint8_t x275 = 3U;
	int8_t x276 = INT8_MAX;
	static volatile int32_t t55 = -3120;

	t55 = (x273&((x274-x275)-x276));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x278 = -1;
	volatile uint8_t x279 = UINT8_MAX;
	static int8_t x280 = INT8_MIN;
	volatile uint64_t t56 = 132LLU;

	t56 = (x277&((x278-x279)-x280));

	if (t56 != 69448895540303488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x285 = -56;
	int64_t x286 = -17584298LL;
	volatile uint16_t x287 = 27U;
	int64_t t57 = -33LL;

	t57 = (x285&((x286-x287)-x288));

	if (t57 != -17584632LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x289 = INT16_MAX;
	static volatile int64_t x290 = -18730019619703LL;
	uint8_t x291 = 23U;
	int64_t t58 = 127984458449LL;

	t58 = (x289&((x290-x291)-x292));

	if (t58 != 31731LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x293 = INT64_MAX;
	static int8_t x294 = 1;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 12135000U;

	t59 = (x293&((x294-x295)-x296));

	if (t59 != 4282865065LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x297 = -1;
	volatile int16_t x298 = 15584;
	int64_t x299 = 560747000384417LL;
	uint8_t x300 = 27U;
	volatile int64_t t60 = -15344326351LL;

	t60 = (x297&((x298-x299)-x300));

	if (t60 != -560747000368860LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = -1;
	uint64_t x302 = 423949570776266LLU;
	int8_t x303 = 1;
	volatile uint64_t t61 = 68155642428LLU;

	t61 = (x301&((x302-x303)-x304));

	if (t61 != 423949570776234LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x309 = INT64_MIN;
	volatile int16_t x310 = INT16_MIN;
	static int8_t x311 = INT8_MIN;
	static volatile int64_t t62 = INT64_MIN;

	t62 = (x309&((x310-x311)-x312));

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x313 = 60U;
	int64_t x314 = 1772LL;
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MAX;
	static int64_t t63 = 34348914149370LL;

	t63 = (x313&((x314-x315)-x316));

	if (t63 != 44LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	int64_t x319 = -2225153LL;
	volatile int8_t x320 = -1;
	volatile int64_t t64 = 178025005LL;

	t64 = (x317&((x318-x319)-x320));

	if (t64 != 2225024LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x325 = INT64_MIN;
	int64_t x326 = -3194940312428LL;
	int8_t x327 = -13;
	volatile int64_t x328 = 1877969933LL;

	t65 = (x325&((x326-x327)-x328));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = 7;
	static volatile int16_t x335 = 176;
	volatile uint32_t t66 = 5719U;

	t66 = (x333&((x334-x335)-x336));

	if (t66 != 4294967155U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = -1000;
	static uint32_t x340 = UINT32_MAX;
	uint32_t t67 = 966U;

	t67 = (x337&((x338-x339)-x340));

	if (t67 != 24U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x342 = 3;
	static int64_t x343 = 83LL;
	volatile int32_t x344 = -7;

	t68 = (x341&((x342-x343)-x344));

	if (t68 != -2147483648LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x345 = 31;
	int32_t x346 = -1066843919;
	static volatile int32_t t69 = -1;

	t69 = (x345&((x346-x347)-x348));

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x349 = 0U;
	int16_t x350 = INT16_MAX;
	static int64_t x351 = -2912449LL;
	static volatile int64_t t70 = 1062637LL;

	t70 = (x349&((x350-x351)-x352));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MAX;
	volatile int16_t x356 = 14;
	volatile int32_t t71 = -1830;

	t71 = (x353&((x354-x355)-x356));

	if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x357 = -3889;
	static uint8_t x358 = 7U;
	volatile int16_t x360 = INT16_MAX;

	t72 = (x357&((x358-x359)-x360));

	if (t72 != -36664) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x361 = 8LLU;
	volatile uint32_t x362 = 102145U;
	static int64_t x363 = -1LL;
	int16_t x364 = 777;

	t73 = (x361&((x362-x363)-x364));

	if (t73 != 8LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x365 = 0;
	static int64_t x366 = -1LL;
	int8_t x367 = INT8_MIN;
	volatile int32_t x368 = -115;
	volatile int64_t t74 = 901359048157LL;

	t74 = (x365&((x366-x367)-x368));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x369 = 25718LL;
	int32_t x370 = INT32_MIN;
	volatile uint64_t x371 = 9864477893LLU;
	int8_t x372 = -1;
	uint64_t t75 = 118916389LLU;

	t75 = (x369&((x370-x371)-x372));

	if (t75 != 52LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x373 = 1;
	volatile int32_t x374 = INT32_MIN;
	static volatile int64_t x375 = INT64_MIN;
	static int64_t t76 = 24LL;

	t76 = (x373&((x374-x375)-x376));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x377 = 1U;
	uint64_t x378 = 794418552406984167LLU;
	volatile int16_t x379 = 1;
	int64_t x380 = INT64_MAX;

	t77 = (x377&((x378-x379)-x380));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x385 = -2836;
	int16_t x386 = INT16_MIN;

	t78 = (x385&((x386-x387)-x388));

	if (t78 != -2940) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = 2;
	int16_t x390 = INT16_MIN;
	volatile int32_t x392 = -1;
	static volatile uint64_t t79 = 3301434434284368922LLU;

	t79 = (x389&((x390-x391)-x392));

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x393 = -26;
	static int16_t x394 = INT16_MAX;
	int8_t x395 = INT8_MIN;
	static uint32_t x396 = 12U;

	t80 = (x393&((x394-x395)-x396));

	if (t80 != 32866U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x399 = -137115729924775483LL;
	uint64_t x400 = 76197694LLU;
	volatile uint64_t t81 = 108239282126821LLU;

	t81 = (x397&((x398-x399)-x400));

	if (t81 != 137115727701094116LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x409 = INT16_MIN;
	uint8_t x410 = 6U;
	uint16_t x411 = 7U;
	static volatile int16_t x412 = INT16_MAX;
	volatile int32_t t82 = -6680258;

	t82 = (x409&((x410-x411)-x412));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x417 = INT32_MAX;
	uint64_t x419 = 132699321760LLU;
	uint32_t x420 = UINT32_MAX;
	volatile uint64_t t83 = 258849489191492LLU;

	t83 = (x417&((x418-x419)-x420));

	if (t83 != 918735939LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x421 = INT8_MIN;
	uint32_t x422 = UINT32_MAX;
	static int8_t x423 = INT8_MIN;
	static volatile int8_t x424 = INT8_MIN;
	uint32_t t84 = 60214U;

	t84 = (x421&((x422-x423)-x424));

	if (t84 != 128U) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x425 = -1;
	int32_t x427 = INT32_MAX;
	int8_t x428 = INT8_MAX;
	uint64_t t85 = 45035664312670107LLU;

	t85 = (x425&((x426-x427)-x428));

	if (t85 != 18446744071562196396LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x429 = UINT32_MAX;
	volatile int32_t x431 = INT32_MIN;
	uint8_t x432 = 5U;

	t86 = (x429&((x430-x431)-x432));

	if (t86 != 2112193263U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x438 = INT32_MIN;
	uint32_t x439 = 4821814U;
	static uint32_t t87 = 1208U;

	t87 = (x437&((x438-x439)-x440));

	if (t87 != 35U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x447 = INT64_MIN;
	int64_t x448 = INT64_MIN;
	uint64_t t88 = 18239017294346LLU;

	t88 = (x445&((x446-x447)-x448));

	if (t88 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x450 = 5U;
	int8_t x451 = INT8_MIN;
	uint8_t x452 = 1U;
	int32_t t89 = 264;

	t89 = (x449&((x450-x451)-x452));

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x453 = UINT8_MAX;
	int16_t x454 = INT16_MIN;
	static int8_t x455 = -1;
	uint8_t x456 = 0U;
	int32_t t90 = -23255;

	t90 = (x453&((x454-x455)-x456));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x458 = 69U;
	static int8_t x459 = -1;
	static int16_t x460 = 4730;
	uint32_t t91 = 0U;

	t91 = (x457&((x458-x459)-x460));

	if (t91 != 4294962636U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x461 = UINT64_MAX;
	int8_t x462 = -1;
	int8_t x463 = INT8_MAX;
	uint64_t x464 = UINT64_MAX;
	volatile uint64_t t92 = 267341553752173LLU;

	t92 = (x461&((x462-x463)-x464));

	if (t92 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x465 = UINT8_MAX;
	static volatile int32_t x466 = INT32_MAX;
	volatile int64_t t93 = -1762425LL;

	t93 = (x465&((x466-x467)-x468));

	if (t93 != 242LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MIN;
	int64_t x475 = INT64_MIN;
	int64_t x476 = -10105909204804842LL;

	t94 = (x473&((x474-x475)-x476));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x477 = 4U;
	uint64_t x479 = UINT64_MAX;
	uint16_t x480 = UINT16_MAX;

	t95 = (x477&((x478-x479)-x480));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x481 = INT16_MAX;
	volatile uint8_t x482 = UINT8_MAX;
	static volatile uint64_t x483 = 12800610504506LLU;
	int32_t x484 = 39629364;
	volatile uint64_t t96 = 390353189LLU;

	t96 = (x481&((x482-x483)-x484));

	if (t96 != 16273LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x485 = 666;
	uint16_t x486 = 2031U;
	int32_t x487 = -4376445;
	int8_t x488 = INT8_MIN;
	volatile int32_t t97 = -7;

	t97 = (x485&((x486-x487)-x488));

	if (t97 != 648) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x497 = -10366033;
	int64_t x498 = -1LL;
	static uint64_t x500 = 7562248798LLU;
	uint64_t t98 = 649268220088160369LLU;

	t98 = (x497&((x498-x499)-x500));

	if (t98 != 18446744066147291426LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x505 = 2;
	int8_t x506 = -3;
	volatile int16_t x507 = -1;
	uint32_t x508 = 250U;
	static volatile uint32_t t99 = 1U;

	t99 = (x505&((x506-x507)-x508));

	if (t99 != 0U) { NG(); } else { ; }
	
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

