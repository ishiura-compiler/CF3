#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x3 = 2143248324057LLU;
int32_t x9 = INT32_MAX;
static int32_t x15 = INT32_MAX;
int8_t x17 = INT8_MIN;
uint64_t x21 = UINT64_MAX;
uint8_t x22 = 76U;
int64_t x40 = -1LL;
static uint32_t x43 = 571U;
static volatile uint32_t x44 = 6707U;
static volatile uint32_t t10 = 1580944U;
uint32_t x53 = UINT32_MAX;
int64_t t13 = -36501174286689LL;
static int16_t x59 = INT16_MIN;
uint64_t x67 = 2696690796LLU;
int8_t x70 = -4;
int32_t x72 = -237361552;
volatile int64_t t19 = -15183422438LL;
int8_t x90 = INT8_MAX;
int8_t x93 = INT8_MIN;
int32_t x100 = INT32_MIN;
int64_t x106 = INT64_MAX;
uint64_t t25 = 514257393LLU;
int8_t x112 = 1;
volatile int64_t t27 = -4408998448523490LL;
int8_t x119 = INT8_MIN;
volatile uint64_t x121 = UINT64_MAX;
int64_t t30 = 824788870LL;
static int16_t x133 = 6;
int32_t t32 = 0;
volatile int16_t x142 = 129;
uint16_t x147 = 464U;
volatile int32_t t35 = 14628065;
uint8_t x162 = 15U;
int64_t t38 = 283558933165LL;
volatile uint64_t x168 = UINT64_MAX;
static uint32_t x175 = 5162U;
int64_t x180 = INT64_MAX;
int64_t x181 = -1LL;
static int32_t x186 = INT32_MIN;
uint16_t x191 = UINT16_MAX;
int64_t x200 = -1LL;
static int32_t t48 = 2076;
int32_t x208 = 26380518;
static int64_t t49 = 27702185733LL;
int8_t x210 = INT8_MAX;
uint64_t x216 = 434837773249322587LLU;
int32_t x218 = 15;
int8_t x225 = 25;
int8_t x228 = -1;
static int16_t x240 = -438;
static uint8_t x241 = 3U;
int64_t x243 = INT64_MAX;
volatile int64_t t60 = -23223304557381600LL;
static uint32_t x261 = 3U;
static volatile uint64_t t62 = 4738LLU;
int32_t x273 = INT32_MIN;
static volatile uint64_t t65 = 45890067601499934LLU;
uint64_t x292 = 438261768070974268LLU;
volatile uint64_t t69 = 846128LLU;
int16_t x295 = INT16_MIN;
int32_t t70 = 553041;
int32_t x298 = -9000;
static int16_t x300 = -1779;
volatile int16_t x302 = -158;
static int64_t x304 = INT64_MIN;
static int64_t t72 = -88093LL;
volatile int16_t x307 = -6;
int64_t x312 = 8425713687513LL;
int64_t x319 = INT64_MIN;
volatile int64_t t76 = 522239LL;
volatile int8_t x328 = 1;
uint32_t x331 = UINT32_MAX;
uint32_t t79 = 0U;
volatile uint8_t x335 = 12U;
volatile uint16_t x341 = UINT16_MAX;
volatile int32_t x345 = -4;
int64_t x352 = -4108712441747945LL;
volatile int8_t x354 = INT8_MIN;
int64_t x365 = 72737LL;
static int64_t x375 = -238530367LL;
uint64_t x377 = 8501552532100517264LLU;
uint64_t t91 = 31166994LLU;
uint64_t t95 = 880041179805979LLU;
uint64_t x398 = 2999063988944472207LLU;
uint64_t t96 = 3LLU;
static int16_t x402 = INT16_MAX;
int32_t t97 = 113224;


void f0(void) {
	volatile uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	static volatile int64_t x4 = -1LL;
	volatile uint64_t t0 = 8763LLU;

	t0 = (x1%(x2^(x3%x4)));

	if (t0 != 65535LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	static volatile int8_t x6 = INT8_MAX;
	int32_t x7 = -34585;
	uint64_t x8 = 2573136LLU;
	volatile uint64_t t1 = 384461490LLU;

	t1 = (x5%(x6^(x7%x8)));

	if (t1 != 32767LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = INT16_MIN;
	volatile uint32_t x11 = UINT32_MAX;
	uint16_t x12 = UINT16_MAX;
	uint32_t t2 = 0U;

	t2 = (x9%(x10^(x11%x12)));

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = UINT64_MAX;
	static uint32_t x14 = 1644U;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 46379960883076LLU;

	t3 = (x13%(x14^(x15%x16)));

	if (t3 != 10824099LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 11;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = 3193;
	static int32_t t4 = 1519;

	t4 = (x17%(x18^(x19%x20)));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x23 = UINT16_MAX;
	int16_t x24 = INT16_MAX;
	static volatile uint64_t t5 = 276467LLU;

	t5 = (x21%(x22^(x23%x24)));

	if (t5 != 15LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 0LLU;
	int16_t x26 = -6;
	volatile int64_t x27 = -1LL;
	uint8_t x28 = 1U;
	static uint64_t t6 = 39961521183813LLU;

	t6 = (x25%(x26^(x27%x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int64_t x30 = INT64_MIN;
	static uint8_t x31 = UINT8_MAX;
	uint8_t x32 = UINT8_MAX;
	volatile int64_t t7 = -398172073704180LL;

	t7 = (x29%(x30^(x31%x32)));

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -565;
	static int64_t x34 = INT64_MIN;
	int64_t x35 = -1LL;
	int32_t x36 = INT32_MIN;
	int64_t t8 = -561099LL;

	t8 = (x33%(x34^(x35%x36)));

	if (t8 != -565LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	static int64_t x38 = 1065LL;
	volatile uint32_t x39 = 25371947U;
	int64_t t9 = -479442657288LL;

	t9 = (x37%(x38^(x39%x40)));

	if (t9 != -218LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 117;
	int8_t x42 = -1;

	t10 = (x41%(x42^(x43%x44)));

	if (t10 != 117U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int16_t x46 = INT16_MIN;
	int64_t x47 = INT64_MIN;
	static uint8_t x48 = 1U;
	int64_t t11 = -646489645LL;

	t11 = (x45%(x46^(x47%x48)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MIN;
	static int16_t x50 = 1;
	static uint64_t x51 = UINT64_MAX;
	int64_t x52 = -1LL;
	uint64_t t12 = 3570916349LLU;

	t12 = (x49%(x50^(x51%x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	static int16_t x55 = INT16_MAX;
	int64_t x56 = 26659485850874LL;

	t13 = (x53%(x54^(x55%x56)));

	if (t13 != 65533LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 7437851U;
	volatile int8_t x58 = INT8_MAX;
	uint16_t x60 = 1678U;
	volatile uint32_t t14 = 293U;

	t14 = (x57%(x58^(x59%x60)));

	if (t14 != 7437851U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint32_t x62 = 647U;
	static volatile int8_t x63 = 0;
	uint8_t x64 = 25U;
	static volatile uint32_t t15 = 0U;

	t15 = (x61%(x62^(x63%x64)));

	if (t15 != 188U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x65 = INT8_MIN;
	int64_t x66 = -5407LL;
	int8_t x68 = INT8_MAX;
	static volatile uint64_t t16 = 11362486242531LLU;

	t16 = (x65%(x66^(x67%x68)));

	if (t16 != 5372LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 15508U;
	uint32_t x71 = UINT32_MAX;
	volatile uint32_t t17 = 45U;

	t17 = (x69%(x70^(x71%x72)));

	if (t17 != 15508U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MAX;
	uint64_t x74 = 51975LLU;
	uint16_t x75 = 27723U;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = 218706LLU;

	t18 = (x73%(x74^(x75%x76)));

	if (t18 != 2071LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = INT32_MIN;
	static int32_t x82 = INT32_MIN;
	int64_t x83 = INT64_MAX;
	int16_t x84 = INT16_MIN;

	t19 = (x81%(x82^(x83%x84)));

	if (t19 != -32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -58667825;
	static volatile int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t20 = 12091099;

	t20 = (x85%(x86^(x87%x88)));

	if (t20 != -49) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 231U;
	uint16_t x91 = 479U;
	volatile int16_t x92 = INT16_MIN;
	volatile uint32_t t21 = 4839U;

	t21 = (x89%(x90^(x91%x92)));

	if (t21 != 231U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x94 = 1U;
	volatile int32_t x95 = INT32_MIN;
	uint64_t x96 = 1596412847863LLU;
	static uint64_t t22 = 32084771447LLU;

	t22 = (x93%(x94^(x95%x96)));

	if (t22 != 222743873280LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x97 = -1;
	int32_t x98 = INT32_MIN;
	int16_t x99 = -1;
	volatile int32_t t23 = 31;

	t23 = (x97%(x98^(x99%x100)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -439;
	volatile int8_t x102 = -1;
	int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MAX;
	int64_t t24 = -3LL;

	t24 = (x101%(x102^(x103%x104)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = UINT16_MAX;
	uint32_t x107 = 503U;
	uint64_t x108 = 897990816LLU;

	t25 = (x105%(x106^(x107%x108)));

	if (t25 != 65535LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = 121598658694065LL;
	uint64_t x110 = 78515165LLU;
	int64_t x111 = -152112608368887991LL;
	uint64_t t26 = 478016428576LLU;

	t26 = (x109%(x110^(x111%x112)));

	if (t26 != 24233945LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = INT64_MAX;
	static int16_t x114 = 457;
	int16_t x115 = -12155;
	uint32_t x116 = 2721U;

	t27 = (x113%(x114^(x115%x116)));

	if (t27 != 7LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x117 = INT16_MIN;
	int32_t x118 = INT32_MIN;
	volatile int32_t x120 = -1;
	volatile int32_t t28 = -302283;

	t28 = (x117%(x118^(x119%x120)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x122 = -116;
	int16_t x123 = -17;
	uint8_t x124 = 121U;
	uint64_t t29 = 7352743016LLU;

	t29 = (x121%(x122^(x123%x124)));

	if (t29 != 15LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -54;
	uint8_t x126 = UINT8_MAX;
	static int64_t x127 = INT64_MAX;
	uint32_t x128 = 686496801U;

	t30 = (x125%(x126^(x127%x128)));

	if (t30 != -54LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -1LL;
	int32_t x130 = -573731096;
	volatile int32_t x131 = INT32_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t31 = 7915542508LLU;

	t31 = (x129%(x130^(x131%x132)));

	if (t31 != 793319823LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x134 = 4669;
	int32_t x135 = -1;
	int8_t x136 = INT8_MIN;

	t32 = (x133%(x134^(x135%x136)));

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	volatile uint16_t x138 = 12262U;
	uint8_t x139 = UINT8_MAX;
	volatile int8_t x140 = INT8_MIN;
	int64_t t33 = 430861735521286032LL;

	t33 = (x137%(x138^(x139%x140)));

	if (t33 != 9987LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x141 = 5955LL;
	int32_t x143 = INT32_MAX;
	uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t34 = 15054570464LLU;

	t34 = (x141%(x142^(x143%x144)));

	if (t34 != 5955LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = 0U;
	int8_t x146 = -44;
	static int16_t x148 = INT16_MAX;

	t35 = (x145%(x146^(x147%x148)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 7626U;
	static int8_t x150 = -62;
	int64_t x151 = -19LL;
	static volatile int64_t x152 = INT64_MAX;
	static int64_t t36 = -13338892550977586LL;

	t36 = (x149%(x150^(x151%x152)));

	if (t36 != 12LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MAX;
	uint8_t x158 = 79U;
	static uint8_t x159 = UINT8_MAX;
	static volatile int32_t x160 = 739;
	volatile int32_t t37 = 1;

	t37 = (x157%(x158^(x159%x160)));

	if (t37 != 111) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x163 = -1LL;
	volatile uint32_t x164 = 899526U;

	t38 = (x161%(x162^(x163%x164)));

	if (t38 != 15LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x165 = 2U;
	volatile int8_t x166 = -1;
	static int64_t x167 = INT64_MAX;
	uint64_t t39 = 43681LLU;

	t39 = (x165%(x166^(x167%x168)));

	if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -1;
	int8_t x170 = 1;
	static int8_t x171 = INT8_MIN;
	volatile uint32_t x172 = 887744555U;
	volatile uint32_t t40 = 202911471U;

	t40 = (x169%(x170^(x171%x172)));

	if (t40 != 575022550U) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = -1LL;
	static int16_t x174 = -1;
	int32_t x176 = -1;
	int64_t t41 = -13647LL;

	t41 = (x173%(x174^(x175%x176)));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x177 = INT32_MIN;
	uint8_t x178 = 14U;
	static int64_t x179 = INT64_MAX;
	volatile int64_t t42 = 8020890904085454LL;

	t42 = (x177%(x178^(x179%x180)));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	uint16_t x184 = 155U;
	volatile int64_t t43 = -975102282555336LL;

	t43 = (x181%(x182^(x183%x184)));

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x185 = INT8_MAX;
	uint16_t x187 = 9U;
	int8_t x188 = 27;
	volatile int32_t t44 = -1308773;

	t44 = (x185%(x186^(x187%x188)));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = -1;
	static int8_t x190 = INT8_MIN;
	static volatile int32_t x192 = 38602256;
	volatile int32_t t45 = -791255;

	t45 = (x189%(x190^(x191%x192)));

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 3242101LL;
	volatile int16_t x194 = -2;
	int64_t x195 = 320LL;
	static int8_t x196 = INT8_MIN;
	int64_t t46 = -677950752962783618LL;

	t46 = (x193%(x194^(x195%x196)));

	if (t46 != 49LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x197 = 951058U;
	int32_t x198 = INT32_MIN;
	int64_t x199 = -1LL;
	int64_t t47 = 244624080894618312LL;

	t47 = (x197%(x198^(x199%x200)));

	if (t47 != 951058LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x201 = 45U;
	int16_t x202 = INT16_MIN;
	int8_t x203 = 6;
	volatile int32_t x204 = -3252;

	t48 = (x201%(x202^(x203%x204)));

	if (t48 != 45) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = INT64_MIN;
	static uint32_t x206 = 104023924U;
	uint8_t x207 = UINT8_MAX;

	t49 = (x205%(x206^(x207%x208)));

	if (t49 != -86951015LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = -5896;
	volatile int16_t x211 = INT16_MIN;
	static int32_t x212 = INT32_MIN;
	int32_t t50 = -1;

	t50 = (x209%(x210^(x211%x212)));

	if (t50 != -5896) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x213 = 415U;
	volatile int8_t x214 = -6;
	static int64_t x215 = 5352LL;
	volatile uint64_t t51 = 242231880146434LLU;

	t51 = (x213%(x214^(x215%x216)));

	if (t51 != 415LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint8_t x217 = 60U;
	int64_t x219 = -1LL;
	int32_t x220 = -249;
	static int64_t t52 = 31957LL;

	t52 = (x217%(x218^(x219%x220)));

	if (t52 != 12LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = UINT16_MAX;
	static int8_t x223 = 0;
	uint64_t x224 = 1492LLU;
	static uint64_t t53 = 568189605187120947LLU;

	t53 = (x221%(x222^(x223%x224)));

	if (t53 != 32768LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x226 = INT32_MIN;
	int8_t x227 = INT8_MIN;
	int32_t t54 = 1792661;

	t54 = (x225%(x226^(x227%x228)));

	if (t54 != 25) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = -1;
	int8_t x234 = 0;
	uint8_t x235 = UINT8_MAX;
	volatile uint64_t x236 = 2084LLU;
	uint64_t t55 = 9374129LLU;

	t55 = (x233%(x234^(x235%x236)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x237 = INT8_MIN;
	static volatile int8_t x238 = 3;
	volatile int64_t x239 = INT64_MAX;
	static volatile int64_t t56 = -123523010LL;

	t56 = (x237%(x238^(x239%x240)));

	if (t56 != -54LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x242 = 21103050203933099LL;
	static uint32_t x244 = UINT32_MAX;
	int64_t t57 = -99060471116489292LL;

	t57 = (x241%(x242^(x243%x244)));

	if (t57 != 3LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = UINT64_MAX;
	uint64_t x246 = 7689868441LLU;
	volatile int8_t x247 = 0;
	static int64_t x248 = INT64_MIN;
	uint64_t t58 = 1363847LLU;

	t58 = (x245%(x246^(x247%x248)));

	if (t58 != 2529979128LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x249 = 0U;
	int8_t x250 = 7;
	uint16_t x251 = 10U;
	int32_t x252 = -1;
	volatile int32_t t59 = -28;

	t59 = (x249%(x250^(x251%x252)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = INT64_MAX;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;

	t60 = (x253%(x254^(x255%x256)));

	if (t60 != -128LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x257 = 85LLU;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = 21829796U;
	int8_t x260 = -17;
	uint64_t t61 = 0LLU;

	t61 = (x257%(x258^(x259%x260)));

	if (t61 != 85LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x262 = INT32_MAX;
	uint64_t x263 = UINT64_MAX;
	static int64_t x264 = INT64_MAX;

	t62 = (x261%(x262^(x263%x264)));

	if (t62 != 3LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x265 = INT32_MAX;
	volatile int32_t x266 = INT32_MAX;
	int8_t x267 = -1;
	int32_t x268 = INT32_MIN;
	static volatile int32_t t63 = INT32_MAX;

	t63 = (x265%(x266^(x267%x268)));

	if (t63 != INT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 27U;
	int32_t x270 = INT32_MAX;
	uint8_t x271 = UINT8_MAX;
	int16_t x272 = -2204;
	volatile uint32_t t64 = 3624U;

	t64 = (x269%(x270^(x271%x272)));

	if (t64 != 27U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x274 = 297368586124147LLU;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = 816093;

	t65 = (x273%(x274^(x275%x276)));

	if (t65 != 78568521306292LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int8_t x279 = -1;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t66 = -9;

	t66 = (x277%(x278^(x279%x280)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x281 = INT16_MAX;
	uint8_t x282 = 1U;
	static int32_t x283 = INT32_MIN;
	int8_t x284 = -1;
	int32_t t67 = -362805135;

	t67 = (x281%(x282^(x283%x284)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x285 = -1;
	static volatile int64_t x286 = 30LL;
	uint64_t x287 = 91674125LLU;
	uint8_t x288 = UINT8_MAX;
	volatile uint64_t t68 = 75666763LLU;

	t68 = (x285%(x286^(x287%x288)));

	if (t68 != 15LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 74U;
	int64_t x290 = 8486506220LL;
	int64_t x291 = -9201329405570843LL;

	t69 = (x289%(x290^(x291%x292)));

	if (t69 != 74LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x293 = 4924U;
	int8_t x294 = INT8_MIN;
	uint8_t x296 = 35U;

	t70 = (x293%(x294^(x295%x296)));

	if (t70 != 4) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x297 = -1;
	int16_t x299 = 0;
	volatile int32_t t71 = -4680044;

	t71 = (x297%(x298^(x299%x300)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -57914315LL;
	static int16_t x303 = INT16_MIN;

	t72 = (x301%(x302^(x303%x304)));

	if (t72 != -31565LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x305 = UINT8_MAX;
	static uint64_t x306 = 937350649473462093LLU;
	int32_t x308 = -42450745;
	static uint64_t t73 = 34507312948608LLU;

	t73 = (x305%(x306^(x307%x308)));

	if (t73 != 255LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x310 = INT32_MIN;
	uint16_t x311 = 32U;
	volatile int64_t t74 = -141287239570812435LL;

	t74 = (x309%(x310^(x311%x312)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	int8_t x315 = INT8_MIN;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t75 = 426856;

	t75 = (x313%(x314^(x315%x316)));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	volatile int64_t x318 = -1LL;
	volatile int16_t x320 = INT16_MAX;

	t76 = (x317%(x318^(x319%x320)));

	if (t76 != -2LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MAX;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = 4546;
	volatile int32_t x324 = INT32_MIN;
	volatile uint64_t t77 = 5LLU;

	t77 = (x321%(x322^(x323%x324)));

	if (t77 != 127LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = INT16_MAX;
	int32_t x326 = 1230;
	int64_t x327 = INT64_MIN;
	volatile int64_t t78 = -1385983473LL;

	t78 = (x325%(x326^(x327%x328)));

	if (t78 != 787LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x329 = 8U;
	uint32_t x330 = 276U;
	volatile int8_t x332 = -42;

	t79 = (x329%(x330^(x331%x332)));

	if (t79 != 8U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = 1;
	int8_t x334 = -5;
	uint32_t x336 = UINT32_MAX;
	uint32_t t80 = 531519U;

	t80 = (x333%(x334^(x335%x336)));

	if (t80 != 1U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x337 = 1LL;
	int16_t x338 = -1;
	static int32_t x339 = INT32_MAX;
	int64_t x340 = INT64_MIN;
	int64_t t81 = -712427157LL;

	t81 = (x337%(x338^(x339%x340)));

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x342 = INT16_MAX;
	volatile uint16_t x343 = 85U;
	int8_t x344 = 6;
	volatile int32_t t82 = 13730;

	t82 = (x341%(x342^(x343%x344)));

	if (t82 != 3) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x346 = 1U;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MIN;
	volatile int64_t t83 = 286586582LL;

	t83 = (x345%(x346^(x347%x348)));

	if (t83 != -4LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x349 = UINT8_MAX;
	int32_t x350 = -31364;
	static uint16_t x351 = 1U;
	int64_t t84 = 235627278080219603LL;

	t84 = (x349%(x350^(x351%x352)));

	if (t84 != 255LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = -1;
	int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MIN;
	int64_t t85 = 0LL;

	t85 = (x353%(x354^(x355%x356)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = -18;
	int64_t x358 = -1334350379LL;
	int16_t x359 = -1;
	int16_t x360 = INT16_MAX;
	int64_t t86 = -199799843015728838LL;

	t86 = (x357%(x358^(x359%x360)));

	if (t86 != -18LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x361 = INT8_MAX;
	int16_t x362 = -1;
	int8_t x363 = INT8_MIN;
	uint8_t x364 = UINT8_MAX;
	int32_t t87 = 3;

	t87 = (x361%(x362^(x363%x364)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x366 = INT8_MIN;
	static volatile int64_t x367 = 56071LL;
	uint64_t x368 = 173588977294242LLU;
	volatile uint64_t t88 = 63666052153280935LLU;

	t88 = (x365%(x366^(x367%x368)));

	if (t88 != 72737LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	volatile int64_t x370 = INT64_MIN;
	int32_t x371 = 6857;
	static int32_t x372 = 25;
	static volatile int64_t t89 = 36080887402LL;

	t89 = (x369%(x370^(x371%x372)));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = -229;
	int16_t x374 = INT16_MAX;
	uint16_t x376 = 44U;
	volatile int64_t t90 = -1LL;

	t90 = (x373%(x374^(x375%x376)));

	if (t90 != -229LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x378 = INT64_MIN;
	int8_t x379 = INT8_MAX;
	uint8_t x380 = UINT8_MAX;

	t91 = (x377%(x378^(x379%x380)));

	if (t91 != 8501552532100517264LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int16_t x383 = INT16_MAX;
	int64_t x384 = -1LL;
	int64_t t92 = -17663341LL;

	t92 = (x381%(x382^(x383%x384)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MAX;
	uint16_t x386 = 2922U;
	static volatile int64_t x387 = INT64_MAX;
	static int16_t x388 = -1;
	volatile int64_t t93 = 3756LL;

	t93 = (x385%(x386^(x387%x388)));

	if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x389 = 11;
	int16_t x390 = INT16_MAX;
	volatile int8_t x391 = 38;
	int32_t x392 = -45464737;
	static int32_t t94 = 57;

	t94 = (x389%(x390^(x391%x392)));

	if (t94 != 11) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x394 = 22;
	int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;

	t95 = (x393%(x394^(x395%x396)));

	if (t95 != 15LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x397 = INT64_MIN;
	int32_t x399 = 5067;
	volatile int64_t x400 = 90738209911359LL;

	t96 = (x397%(x398^(x399%x400)));

	if (t96 != 226180070021344820LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x401 = 5567;
	volatile int8_t x403 = INT8_MAX;
	uint16_t x404 = 3967U;

	t97 = (x401%(x402^(x403%x404)));

	if (t97 != 5567) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 2029965926260468LLU;
	int64_t x406 = INT64_MIN;
	int16_t x407 = INT16_MIN;
	static uint64_t x408 = 248702167LLU;
	uint64_t t98 = 21212754LLU;

	t98 = (x405%(x406^(x407%x408)));

	if (t98 != 2029965926260468LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x409 = INT64_MIN;
	uint64_t x410 = 1273464035805721434LLU;
	static int8_t x411 = INT8_MIN;
	int64_t x412 = INT64_MAX;
	static volatile uint64_t t99 = 16267LLU;

	t99 = (x409%(x410^(x411%x412)));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

