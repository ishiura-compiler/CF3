#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x3 = UINT64_MAX;
int32_t x11 = 87019;
uint32_t x13 = UINT32_MAX;
static volatile uint32_t t3 = 472198U;
int32_t x19 = -4;
int8_t x21 = 6;
volatile int16_t x25 = INT16_MIN;
uint32_t x32 = 25003U;
uint8_t x41 = 7U;
uint8_t x46 = UINT8_MAX;
int64_t x47 = -3148705890838661LL;
int8_t x50 = -48;
static int8_t x51 = -1;
int8_t x55 = INT8_MAX;
static int64_t x72 = INT64_MAX;
int32_t t16 = -399;
uint16_t x81 = 3U;
static volatile uint32_t x87 = 0U;
int64_t x88 = INT64_MIN;
int8_t x102 = INT8_MIN;
uint8_t x106 = UINT8_MAX;
int64_t x110 = 1967470056212788163LL;
volatile int32_t x124 = -1;
int64_t x125 = INT64_MIN;
volatile int32_t x126 = -1;
static volatile int8_t x138 = INT8_MIN;
volatile int32_t x141 = -1;
uint8_t x144 = 0U;
volatile uint64_t t30 = 3303826407323LLU;
volatile int8_t x152 = -1;
volatile int32_t t31 = -350847731;
int32_t x163 = -1;
volatile uint16_t x167 = 1U;
static volatile uint32_t t35 = 3U;
volatile int64_t t36 = 8398952580733366LL;
static int8_t x182 = -9;
uint64_t t39 = 35187LLU;
int32_t x189 = -227061435;
int16_t x194 = INT16_MIN;
int64_t x200 = -3315266882437860LL;
volatile int64_t t43 = -806LL;
int64_t x204 = INT64_MIN;
uint8_t x214 = 0U;
uint8_t x229 = 56U;
volatile int8_t x232 = INT8_MAX;
volatile int16_t x236 = 1;
uint16_t x245 = 8943U;
int32_t x258 = INT32_MAX;
static uint64_t t56 = 814841292284254579LLU;
int64_t x273 = -1LL;
uint64_t x278 = 10308667241488550LLU;
uint32_t x284 = UINT32_MAX;
uint64_t x286 = 1032223685LLU;
int16_t x290 = INT16_MIN;
int16_t x291 = -10759;
uint64_t x297 = 988091722LLU;
volatile uint64_t t64 = 306116945LLU;
volatile int32_t x312 = -1;
volatile uint32_t t66 = 3710263U;
static volatile int16_t x316 = -5370;
static int32_t x318 = INT32_MAX;
int64_t x333 = -1LL;
int8_t x339 = -1;
static volatile uint64_t t72 = 8900442727086317LLU;
int16_t x344 = -1;
int16_t x348 = 184;
int16_t x356 = 1269;
volatile int64_t x358 = INT64_MIN;
uint64_t x359 = 5165LLU;
volatile int64_t x362 = INT64_MAX;
int8_t x364 = -17;
int8_t x373 = INT8_MIN;
int64_t t81 = -6434LL;
volatile int64_t x395 = INT64_MIN;
volatile int8_t x408 = INT8_MIN;
int8_t x417 = INT8_MIN;
int32_t x419 = 10460;
int8_t x422 = -1;
int16_t x423 = 0;
int8_t x425 = 22;
uint64_t x427 = UINT64_MAX;
volatile uint16_t x428 = 22497U;
int16_t x433 = INT16_MIN;
uint16_t x438 = 1343U;
int32_t t91 = -227;
static int32_t x442 = -41;
int8_t x444 = INT8_MIN;
int16_t x449 = INT16_MAX;
int16_t x455 = 3239;
static volatile int64_t t95 = -58969863916375LL;
uint16_t x482 = UINT16_MAX;


void f0(void) {
	int32_t x1 = 77;
	volatile int16_t x2 = 37;
	int64_t x4 = INT64_MAX;
	uint64_t t0 = 2913440305LLU;

	t0 = (x1&(x2-(x3+x4)));

	if (t0 != 5LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int32_t x6 = INT32_MIN;
	volatile int16_t x7 = INT16_MIN;
	static int16_t x8 = INT16_MAX;
	volatile uint64_t t1 = 147387322154882LLU;

	t1 = (x5&(x6-(x7+x8)));

	if (t1 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x10 = 871;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 3860990659LL;

	t2 = (x9&(x10-(x11+x12)));

	if (t2 != 4294881149LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = -37;
	uint32_t x15 = 3763U;
	int32_t x16 = INT32_MIN;

	t3 = (x13&(x14-(x15+x16)));

	if (t3 != 2147479848U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint8_t x18 = UINT8_MAX;
	volatile uint8_t x20 = 34U;
	static volatile int64_t t4 = 22876833512373LL;

	t4 = (x17&(x18-(x19+x20)));

	if (t4 != 225LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = UINT16_MAX;
	int64_t x23 = 29460LL;
	uint16_t x24 = 34U;
	volatile int64_t t5 = -25321LL;

	t5 = (x21&(x22-(x23+x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x26 = -49232;
	uint32_t x27 = UINT32_MAX;
	int32_t x28 = -62;
	volatile uint32_t t6 = 74U;

	t6 = (x25&(x26-(x27+x28)));

	if (t6 != 4294901760U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 180176U;
	int8_t x30 = -1;
	int16_t x31 = 6785;
	volatile uint32_t t7 = 667075676U;

	t7 = (x29&(x30-(x31+x32)));

	if (t7 != 164816U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -4209;
	int16_t x34 = -1;
	static int16_t x35 = INT16_MAX;
	volatile uint64_t x36 = 3750LLU;
	volatile uint64_t t8 = 287475822029219475LLU;

	t8 = (x33&(x34-(x35+x36)));

	if (t8 != 18446744073709510922LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x42 = -13336368LL;
	int16_t x43 = -1;
	volatile uint32_t x44 = UINT32_MAX;
	volatile int64_t t9 = -2LL;

	t9 = (x41&(x42-(x43+x44)));

	if (t9 != 2LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = 763707498LL;
	volatile int8_t x48 = -6;
	int64_t t10 = -2906886LL;

	t10 = (x45&(x46-(x47+x48)));

	if (t10 != 671088650LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = -765636023804470LL;
	uint32_t x52 = 504376476U;
	static volatile int64_t t11 = -2003169108814136505LL;

	t11 = (x49&(x50-(x51+x52)));

	if (t11 != 1623593216LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MAX;
	volatile int8_t x54 = -1;
	int16_t x56 = 2;
	int64_t t12 = -29948654881145LL;

	t12 = (x53&(x54-(x55+x56)));

	if (t12 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x65 = INT32_MIN;
	int8_t x66 = -4;
	volatile int32_t x67 = -1;
	uint32_t x68 = UINT32_MAX;
	static uint32_t t13 = 462U;

	t13 = (x65&(x66-(x67+x68)));

	if (t13 != 2147483648U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = UINT64_MAX;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 4344312605444656416LLU;
	volatile uint64_t t14 = 8157259639844LLU;

	t14 = (x69&(x70-(x71+x72)));

	if (t14 != 4879059431410086625LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x73 = -1;
	uint16_t x74 = 7U;
	static int64_t x75 = INT64_MIN;
	volatile int32_t x76 = 463;
	static int64_t t15 = -140180278257971LL;

	t15 = (x73&(x74-(x75+x76)));

	if (t15 != 9223372036854775352LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x77 = UINT8_MAX;
	int8_t x78 = -1;
	volatile int8_t x79 = -1;
	volatile int16_t x80 = -15;

	t16 = (x77&(x78-(x79+x80)));

	if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = -1LL;
	static int32_t x83 = INT32_MAX;
	int16_t x84 = -1;
	int64_t t17 = 0LL;

	t17 = (x81&(x82-(x83+x84)));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = -1;
	volatile int32_t x86 = INT32_MIN;
	static int64_t t18 = 14224111419LL;

	t18 = (x85&(x86-(x87+x88)));

	if (t18 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = INT32_MIN;
	static uint16_t x90 = 0U;
	int32_t x91 = INT32_MIN;
	uint64_t x92 = 184LLU;
	volatile uint64_t t19 = 4118268262864LLU;

	t19 = (x89&(x90-(x91+x92)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x93 = INT16_MAX;
	uint16_t x94 = 5U;
	int32_t x95 = -1;
	static int8_t x96 = INT8_MIN;
	volatile int32_t t20 = -434690;

	t20 = (x93&(x94-(x95+x96)));

	if (t20 != 134) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = 0;
	volatile int32_t x98 = INT32_MIN;
	uint64_t x99 = 13770LLU;
	volatile uint64_t x100 = 1379712LLU;
	volatile uint64_t t21 = 402LLU;

	t21 = (x97&(x98-(x99+x100)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x101 = INT64_MIN;
	int32_t x103 = INT32_MIN;
	static volatile uint16_t x104 = UINT16_MAX;
	volatile int64_t t22 = -147LL;

	t22 = (x101&(x102-(x103+x104)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x105 = -1661;
	uint32_t x107 = 3U;
	static int16_t x108 = INT16_MAX;
	static volatile uint32_t t23 = 1660U;

	t23 = (x105&(x106-(x107+x108)));

	if (t23 != 4294934657U) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x109 = 19U;
	static uint16_t x111 = 955U;
	uint16_t x112 = 8122U;
	volatile int64_t t24 = -2030LL;

	t24 = (x109&(x110-(x111+x112)));

	if (t24 != 2LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	volatile int16_t x114 = -190;
	volatile uint64_t x115 = 147985311680LLU;
	uint8_t x116 = UINT8_MAX;
	volatile uint64_t t25 = 6152564017933963442LLU;

	t25 = (x113&(x114-(x115+x116)));

	if (t25 != 18446743925724239488LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x117 = 298383622U;
	uint8_t x118 = 3U;
	static uint8_t x119 = 24U;
	static uint8_t x120 = 0U;
	uint32_t t26 = 1U;

	t26 = (x117&(x118-(x119+x120)));

	if (t26 != 298383618U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = -1;
	int32_t x122 = INT32_MAX;
	volatile int16_t x123 = 7530;
	int32_t t27 = 31205;

	t27 = (x121&(x122-(x123+x124)));

	if (t27 != 2147476118) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x127 = 15U;
	int16_t x128 = 0;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x125&(x126-(x127+x128)));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = 3;
	static volatile uint8_t x139 = UINT8_MAX;
	uint32_t x140 = 3801U;
	uint32_t t29 = 76305720U;

	t29 = (x137&(x138-(x139+x140)));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x142 = 12202;
	volatile uint64_t x143 = UINT64_MAX;

	t30 = (x141&(x142-(x143+x144)));

	if (t30 != 12203LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x149 = 12;
	uint8_t x150 = 1U;
	static int32_t x151 = -1;

	t31 = (x149&(x150-(x151+x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = INT32_MIN;
	int8_t x154 = 0;
	int16_t x155 = INT16_MAX;
	volatile int64_t x156 = 5273851LL;
	int64_t t32 = -1424738436321LL;

	t32 = (x153&(x154-(x155+x156)));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = -1LL;
	int64_t x158 = INT64_MAX;
	int32_t x159 = INT32_MAX;
	volatile int32_t x160 = -12843;
	volatile int64_t t33 = -111LL;

	t33 = (x157&(x158-(x159+x160)));

	if (t33 != 9223372034707305003LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x161 = 6U;
	static uint32_t x162 = 14899U;
	int16_t x164 = INT16_MAX;
	volatile uint32_t t34 = 26U;

	t34 = (x161&(x162-(x163+x164)));

	if (t34 != 4U) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x165 = 15U;
	int32_t x166 = 6981;
	static volatile uint16_t x168 = 6U;

	t35 = (x165&(x166-(x167+x168)));

	if (t35 != 14U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = -1LL;
	int16_t x170 = -2;
	int8_t x171 = -1;
	static uint16_t x172 = 1602U;

	t36 = (x169&(x170-(x171+x172)));

	if (t36 != -1603LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = INT64_MIN;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = INT8_MAX;
	uint32_t x176 = 14515U;
	int64_t t37 = 0LL;

	t37 = (x173&(x174-(x175+x176)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = 7;
	int64_t x178 = INT64_MIN;
	static uint64_t x179 = 166199LLU;
	uint64_t x180 = UINT64_MAX;
	uint64_t t38 = 976LLU;

	t38 = (x177&(x178-(x179+x180)));

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -1;
	int32_t x183 = -1;
	uint64_t x184 = UINT64_MAX;

	t39 = (x181&(x182-(x183+x184)));

	if (t39 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = 107397108U;
	uint16_t x186 = UINT16_MAX;
	int16_t x187 = INT16_MIN;
	uint8_t x188 = 108U;
	volatile uint32_t t40 = 114U;

	t40 = (x185&(x186-(x187+x188)));

	if (t40 != 16272U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x190 = UINT8_MAX;
	uint32_t x191 = 1749U;
	int32_t x192 = -3161602;
	volatile uint32_t t41 = 5041U;

	t41 = (x189&(x190-(x191+x192)));

	if (t41 != 3149828U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x193 = -26;
	volatile int32_t x195 = INT32_MIN;
	int64_t x196 = -362678113804251LL;
	volatile int64_t t42 = -1057334411260412LL;

	t42 = (x193&(x194-(x195+x196)));

	if (t42 != 362680261255106LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x197 = 1U;
	uint16_t x198 = UINT16_MAX;
	int32_t x199 = -1;

	t43 = (x197&(x198-(x199+x200)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x201 = 14U;
	int32_t x202 = INT32_MIN;
	uint8_t x203 = 1U;
	volatile int64_t t44 = 12602384847614648LL;

	t44 = (x201&(x202-(x203+x204)));

	if (t44 != 14LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x205 = 0;
	static int64_t x206 = -1LL;
	int16_t x207 = -1;
	static int64_t x208 = 901739976LL;
	int64_t t45 = 197790842LL;

	t45 = (x205&(x206-(x207+x208)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x209 = -1LL;
	uint16_t x210 = UINT16_MAX;
	volatile int32_t x211 = -156881717;
	int16_t x212 = -4;
	static int64_t t46 = -297LL;

	t46 = (x209&(x210-(x211+x212)));

	if (t46 != 156947256LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x213 = 1895U;
	uint64_t x215 = UINT64_MAX;
	uint8_t x216 = 3U;
	volatile uint64_t t47 = 47389LLU;

	t47 = (x213&(x214-(x215+x216)));

	if (t47 != 1894LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MIN;
	uint64_t x218 = UINT64_MAX;
	volatile int32_t x219 = -42444517;
	static int8_t x220 = -1;
	static volatile uint64_t t48 = 383LLU;

	t48 = (x217&(x218-(x219+x220)));

	if (t48 != 42444416LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x230 = INT32_MIN;
	uint64_t x231 = UINT64_MAX;
	uint64_t t49 = 19LLU;

	t49 = (x229&(x230-(x231+x232)));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x233 = 56064086361LL;
	uint16_t x234 = UINT16_MAX;
	uint32_t x235 = 6834U;
	volatile int64_t t50 = 644305110745256LL;

	t50 = (x233&(x234-(x235+x236)));

	if (t50 != 328LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 13U;
	volatile int16_t x238 = -13909;
	volatile int64_t x239 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	static int64_t t51 = 554595LL;

	t51 = (x237&(x238-(x239+x240)));

	if (t51 != 12LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	int16_t x243 = -457;
	uint8_t x244 = UINT8_MAX;
	static int32_t t52 = 42;

	t52 = (x241&(x242-(x243+x244)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x246 = UINT8_MAX;
	int32_t x247 = INT32_MAX;
	int64_t x248 = INT64_MIN;
	static volatile int64_t t53 = 95420047LL;

	t53 = (x245&(x246-(x247+x248)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MIN;
	uint16_t x250 = 572U;
	volatile int32_t x251 = INT32_MIN;
	uint32_t x252 = 123878U;
	uint32_t t54 = 138U;

	t54 = (x249&(x250-(x251+x252)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = -2;
	int32_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = -244;
	volatile int32_t t55 = 77970;

	t55 = (x253&(x254-(x255+x256)));

	if (t55 != -65292) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x257 = 1;
	uint64_t x259 = 912LLU;
	uint32_t x260 = UINT32_MAX;

	t56 = (x257&(x258-(x259+x260)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x261 = -1LL;
	uint16_t x262 = 968U;
	static int64_t x263 = 9LL;
	static int64_t x264 = -262986260200486097LL;
	static volatile int64_t t57 = -1397732020LL;

	t57 = (x261&(x262-(x263+x264)));

	if (t57 != 262986260200487056LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x265 = -9;
	uint64_t x266 = 29513LLU;
	int8_t x267 = -1;
	uint16_t x268 = UINT16_MAX;
	uint64_t t58 = 7078526645693LLU;

	t58 = (x265&(x266-(x267+x268)));

	if (t58 != 18446744073709515587LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 418LLU;
	static volatile uint32_t x276 = 4020U;
	static volatile uint64_t t59 = 693873828LLU;

	t59 = (x273&(x274-(x275+x276)));

	if (t59 != 18446744073709514410LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MIN;
	static int16_t x279 = -1;
	int16_t x280 = -1;
	uint64_t t60 = 109732255610428440LLU;

	t60 = (x277&(x278-(x279+x280)));

	if (t60 != 10308666687225856LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x281 = 105U;
	int8_t x282 = INT8_MIN;
	int16_t x283 = INT16_MIN;
	uint32_t t61 = 43954915U;

	t61 = (x281&(x282-(x283+x284)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	int64_t x287 = INT64_MIN;
	static uint16_t x288 = 56U;
	volatile uint64_t t62 = 61281342225991LLU;

	t62 = (x285&(x286-(x287+x288)));

	if (t62 != 9223372037886967808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x289 = -1LL;
	uint16_t x292 = 157U;
	static volatile int64_t t63 = -11404LL;

	t63 = (x289&(x290-(x291+x292)));

	if (t63 != -22166LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x298 = UINT64_MAX;
	static int8_t x299 = -1;
	static int8_t x300 = INT8_MIN;

	t64 = (x297&(x298-(x299+x300)));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x301 = 3LLU;
	int8_t x302 = INT8_MIN;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = INT16_MAX;
	volatile uint64_t t65 = 2667084625179534475LLU;

	t65 = (x301&(x302-(x303+x304)));

	if (t65 != 2LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x309 = UINT8_MAX;
	static int32_t x310 = INT32_MIN;
	uint32_t x311 = 7U;

	t66 = (x309&(x310-(x311+x312)));

	if (t66 != 250U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x313 = 153U;
	int32_t x314 = INT32_MAX;
	int64_t x315 = INT64_MAX;
	volatile int64_t t67 = 402LL;

	t67 = (x313&(x314-(x315+x316)));

	if (t67 != 152LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x317 = UINT32_MAX;
	uint64_t x319 = 49974982LLU;
	int16_t x320 = INT16_MAX;
	static volatile uint64_t t68 = 5869835742802LLU;

	t68 = (x317&(x318-(x319+x320)));

	if (t68 != 2097475898LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x325 = 61U;
	int64_t x326 = INT64_MIN;
	int16_t x327 = 53;
	int8_t x328 = INT8_MIN;
	int64_t t69 = -15832438LL;

	t69 = (x325&(x326-(x327+x328)));

	if (t69 != 9LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x329 = 139065618226525329LLU;
	volatile uint16_t x330 = UINT16_MAX;
	static int64_t x331 = -1LL;
	uint16_t x332 = 72U;
	static uint64_t t70 = 2418684421946922LLU;

	t70 = (x329&(x330-(x331+x332)));

	if (t70 != 46224LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x334 = -1;
	int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MIN;
	volatile int64_t t71 = -1003958821LL;

	t71 = (x333&(x334-(x335+x336)));

	if (t71 != 32895LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x337 = 13922961521969219LLU;
	int8_t x338 = -1;
	volatile int8_t x340 = INT8_MIN;

	t72 = (x337&(x338-(x339+x340)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x341 = UINT8_MAX;
	uint8_t x342 = 2U;
	static volatile int16_t x343 = INT16_MIN;
	static int32_t t73 = 74;

	t73 = (x341&(x342-(x343+x344)));

	if (t73 != 3) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x345 = UINT64_MAX;
	int8_t x346 = -1;
	int32_t x347 = -1;
	volatile uint64_t t74 = 125121508LLU;

	t74 = (x345&(x346-(x347+x348)));

	if (t74 != 18446744073709551432LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x349 = UINT8_MAX;
	static uint32_t x350 = 6973584U;
	int8_t x351 = -1;
	int16_t x352 = 4;
	uint32_t t75 = 171U;

	t75 = (x349&(x350-(x351+x352)));

	if (t75 != 141U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x353 = 5;
	uint8_t x354 = 5U;
	uint8_t x355 = 0U;
	int32_t t76 = -978946;

	t76 = (x353&(x354-(x355+x356)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x357 = UINT64_MAX;
	uint16_t x360 = UINT16_MAX;
	static volatile uint64_t t77 = 1584LLU;

	t77 = (x357&(x358-(x359+x360)));

	if (t77 != 9223372036854705108LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	volatile int32_t x363 = INT32_MAX;
	static int64_t t78 = -1LL;

	t78 = (x361&(x362-(x363+x364)));

	if (t78 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x365 = INT8_MAX;
	int64_t x366 = INT64_MAX;
	int8_t x367 = INT8_MIN;
	uint8_t x368 = UINT8_MAX;
	int64_t t79 = -29234LL;

	t79 = (x365&(x366-(x367+x368)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	volatile int16_t x376 = 1;
	static int32_t t80 = 0;

	t80 = (x373&(x374-(x375+x376)));

	if (t80 != 32768) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = -25;
	int64_t x378 = -25265LL;
	volatile int16_t x379 = 20;
	uint8_t x380 = UINT8_MAX;

	t81 = (x377&(x378-(x379+x380)));

	if (t81 != -25564LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x381 = 69U;
	int32_t x382 = INT32_MIN;
	static int8_t x383 = -1;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t82 = 8942LLU;

	t82 = (x381&(x382-(x383+x384)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x393 = UINT32_MAX;
	int32_t x394 = -1;
	volatile uint32_t x396 = 3476U;
	int64_t t83 = 419294134200140629LL;

	t83 = (x393&(x394-(x395+x396)));

	if (t83 != 4294963819LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x397 = INT8_MIN;
	volatile uint16_t x398 = UINT16_MAX;
	int16_t x399 = -1;
	uint16_t x400 = 2U;
	int32_t t84 = -46099988;

	t84 = (x397&(x398-(x399+x400)));

	if (t84 != 65408) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint32_t x405 = 92U;
	int32_t x406 = INT32_MIN;
	volatile uint64_t x407 = 4175706LLU;
	volatile uint64_t t85 = 731866757LLU;

	t85 = (x405&(x406-(x407+x408)));

	if (t85 != 4LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x409 = -1LL;
	uint16_t x410 = 0U;
	uint64_t x411 = 845237678233766LLU;
	static uint64_t x412 = 2078201739938196972LLU;
	volatile uint64_t t86 = 3303073LLU;

	t86 = (x409&(x410-(x411+x412)));

	if (t86 != 16367697096093120878LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x418 = UINT32_MAX;
	static uint64_t x420 = 18800027836LLU;
	volatile uint64_t t87 = 1652LLU;

	t87 = (x417&(x418-(x419+x420)));

	if (t87 != 18446744059204480512LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x421 = UINT64_MAX;
	uint16_t x424 = UINT16_MAX;
	uint64_t t88 = 6565935556923LLU;

	t88 = (x421&(x422-(x423+x424)));

	if (t88 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x426 = 2008708LLU;
	volatile uint64_t t89 = 958805434882661LLU;

	t89 = (x425&(x426-(x427+x428)));

	if (t89 != 4LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x434 = INT64_MIN;
	uint64_t x435 = UINT64_MAX;
	static volatile int64_t x436 = INT64_MAX;
	uint64_t t90 = 28286346444539LLU;

	t90 = (x433&(x434-(x435+x436)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x437 = 0;
	static uint16_t x439 = UINT16_MAX;
	static int8_t x440 = -1;

	t91 = (x437&(x438-(x439+x440)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x441 = INT64_MIN;
	static volatile int8_t x443 = INT8_MAX;
	int64_t t92 = INT64_MIN;

	t92 = (x441&(x442-(x443+x444)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x445 = 8U;
	volatile uint32_t x446 = 94232971U;
	uint32_t x447 = 1532999U;
	uint32_t x448 = UINT32_MAX;
	volatile uint32_t t93 = 0U;

	t93 = (x445&(x446-(x447+x448)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x450 = -1;
	uint32_t x451 = UINT32_MAX;
	int16_t x452 = -5708;
	uint32_t t94 = 2U;

	t94 = (x449&(x450-(x451+x452)));

	if (t94 != 5708U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x453 = -3309405LL;
	volatile uint16_t x454 = UINT16_MAX;
	int16_t x456 = -1;

	t95 = (x453&(x454-(x455+x456)));

	if (t95 != 32769LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x457 = 1U;
	static int64_t x458 = -290457649240LL;
	int64_t x459 = 5LL;
	int16_t x460 = 2846;
	int64_t t96 = -7017441490589LL;

	t96 = (x457&(x458-(x459+x460)));

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = -42;
	static int64_t x462 = -1LL;
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = -23;
	uint64_t t97 = 1LLU;

	t97 = (x461&(x462-(x463+x464)));

	if (t97 != 22LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x469 = 5225733U;
	uint16_t x470 = UINT16_MAX;
	uint64_t x471 = 5LLU;
	int32_t x472 = INT32_MAX;
	volatile uint64_t t98 = 10593LLU;

	t98 = (x469&(x470-(x471+x472)));

	if (t98 != 48385LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x481 = 0U;
	static int16_t x483 = -1;
	static int8_t x484 = INT8_MIN;
	int32_t t99 = 25055;

	t99 = (x481&(x482-(x483+x484)));

	if (t99 != 0) { NG(); } else { ; }
	
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

