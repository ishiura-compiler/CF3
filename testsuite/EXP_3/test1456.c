#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 2U;
int64_t x2 = INT64_MAX;
volatile int16_t x3 = -1;
uint32_t x5 = 45U;
volatile int64_t x11 = INT64_MIN;
uint16_t x16 = UINT16_MAX;
static volatile int32_t t5 = -1;
volatile int16_t x26 = -28;
int32_t x30 = 249446496;
static int32_t x36 = -1;
volatile int8_t x37 = INT8_MIN;
static int8_t x39 = 2;
int32_t x41 = -1;
int8_t x46 = INT8_MIN;
volatile int32_t x53 = INT32_MAX;
int32_t t17 = -4;
int8_t x73 = -1;
uint8_t x74 = UINT8_MAX;
uint8_t x78 = 0U;
uint32_t x98 = 24760U;
uint8_t x101 = 109U;
volatile int16_t x106 = INT16_MIN;
uint8_t x111 = 11U;
int32_t x112 = INT32_MIN;
int16_t x115 = INT16_MAX;
uint32_t x117 = 13U;
int8_t x119 = INT8_MAX;
int32_t t29 = -1132;
static uint8_t x122 = 0U;
uint64_t x126 = 2LLU;
static int8_t x127 = INT8_MIN;
uint16_t x128 = 6U;
static int32_t t32 = -1;
int32_t x143 = -3;
uint8_t x144 = 9U;
int32_t t35 = 29726;
uint64_t x145 = 24142125392939LLU;
int8_t x149 = -1;
int16_t x152 = INT16_MAX;
static int8_t x155 = 7;
int16_t x160 = INT16_MIN;
int32_t x167 = 3410604;
static uint64_t x171 = 115870032546528LLU;
int32_t t42 = 0;
uint64_t x197 = 1284096LLU;
static int32_t t49 = 17;
uint8_t x212 = UINT8_MAX;
int32_t t52 = 46;
volatile int32_t t53 = 2;
int16_t x220 = INT16_MAX;
int64_t x223 = INT64_MIN;
volatile int32_t t55 = 201890;
volatile int32_t x226 = INT32_MIN;
volatile int16_t x229 = INT16_MIN;
int32_t x231 = 252253371;
static volatile int32_t x233 = -1;
uint64_t x234 = 136LLU;
int8_t x238 = 41;
int64_t x242 = 12577652403LL;
static int32_t t60 = -2217;
int64_t x245 = INT64_MIN;
int32_t x251 = 537381953;
int16_t x253 = 46;
int8_t x254 = -1;
uint64_t x255 = 126LLU;
uint16_t x257 = UINT16_MAX;
int32_t t64 = 5135808;
uint16_t x268 = UINT16_MAX;
static volatile int32_t t66 = -1;
static uint32_t x270 = 0U;
volatile int32_t t67 = 4285;
int64_t x275 = INT64_MIN;
volatile int8_t x281 = INT8_MIN;
int16_t x282 = -10314;
static int16_t x285 = 21;
int32_t t73 = -8;
volatile int32_t t74 = -4770;
volatile int8_t x308 = INT8_MAX;
int32_t x311 = -1;
static volatile int32_t t78 = 3872;
int8_t x329 = INT8_MIN;
volatile int32_t x335 = INT32_MIN;
int16_t x340 = 8;
int16_t x343 = -1;
uint64_t x345 = 1414363923867229LLU;
int64_t x352 = INT64_MIN;
volatile int16_t x353 = 3947;
int8_t x354 = -37;
static int8_t x355 = -1;
int8_t x356 = 57;
static int32_t t88 = -58271;
int16_t x359 = -1;
int16_t x365 = INT16_MIN;
volatile int32_t x368 = INT32_MAX;
volatile int32_t t92 = 121058;
volatile int32_t t95 = -140;
int8_t x391 = INT8_MIN;
int32_t x393 = -1;
static volatile uint32_t x398 = UINT32_MAX;
int32_t t99 = -5441;


void f0(void) {
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = -3336;

	t0 = ((x1==x2)^(x3<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x6 = INT64_MIN;
	uint64_t x7 = UINT64_MAX;
	int8_t x8 = 3;
	int32_t t1 = 179496630;

	t1 = ((x5==x6)^(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x9 = -636613083LL;
	int64_t x10 = INT64_MIN;
	int8_t x12 = INT8_MAX;
	int32_t t2 = 33199;

	t2 = ((x9==x10)^(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 2708212U;
	int8_t x14 = -5;
	static volatile int32_t x15 = INT32_MIN;
	int32_t t3 = -793;

	t3 = ((x13==x14)^(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = 45738857781069121LL;
	int16_t x18 = INT16_MIN;
	uint32_t x19 = 11U;
	volatile uint64_t x20 = 571LLU;
	volatile int32_t t4 = -250123;

	t4 = ((x17==x18)^(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1LLU;
	uint16_t x22 = 6U;
	volatile uint32_t x23 = 1009U;
	volatile int8_t x24 = -1;

	t5 = ((x21==x22)^(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = 172;
	uint16_t x27 = UINT16_MAX;
	volatile uint16_t x28 = UINT16_MAX;
	int32_t t6 = 1;

	t6 = ((x25==x26)^(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	int32_t x31 = -1;
	int32_t x32 = -20845;
	volatile int32_t t7 = 35992287;

	t7 = ((x29==x30)^(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	static volatile uint64_t x34 = 65077191509LLU;
	int16_t x35 = -2;
	volatile int32_t t8 = -19232758;

	t8 = ((x33==x34)^(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x38 = -1443087184316LL;
	volatile int16_t x40 = 30;
	int32_t t9 = 1;

	t9 = ((x37==x38)^(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = UINT16_MAX;
	static uint8_t x43 = 32U;
	static int16_t x44 = INT16_MAX;
	int32_t t10 = -835552920;

	t10 = ((x41==x42)^(x43<x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	uint8_t x47 = 0U;
	uint64_t x48 = 8219969426205905LLU;
	static volatile int32_t t11 = -3;

	t11 = ((x45==x46)^(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = UINT64_MAX;
	int32_t x50 = INT32_MAX;
	uint64_t x51 = UINT64_MAX;
	static volatile int8_t x52 = INT8_MIN;
	int32_t t12 = -114250;

	t12 = ((x49==x50)^(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 23478LL;
	static uint32_t x55 = 1960U;
	int32_t x56 = INT32_MIN;
	volatile int32_t t13 = 1;

	t13 = ((x53==x54)^(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 9873U;
	static int32_t x58 = INT32_MIN;
	volatile uint32_t x59 = UINT32_MAX;
	volatile int16_t x60 = -56;
	volatile int32_t t14 = -29624127;

	t14 = ((x57==x58)^(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MAX;
	volatile int64_t x62 = INT64_MAX;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = 2U;
	int32_t t15 = 459522377;

	t15 = ((x61==x62)^(x63<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	uint8_t x66 = UINT8_MAX;
	uint16_t x67 = UINT16_MAX;
	uint64_t x68 = 227172LLU;
	volatile int32_t t16 = -210630;

	t16 = ((x65==x66)^(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	volatile int64_t x70 = -102526750631LL;
	int64_t x71 = INT64_MIN;
	uint64_t x72 = 975780402722476657LLU;

	t17 = ((x69==x70)^(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x75 = 4381088457235360708LLU;
	int16_t x76 = INT16_MAX;
	int32_t t18 = 62587;

	t18 = ((x73==x74)^(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	int16_t x79 = INT16_MIN;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -3;

	t19 = ((x77==x78)^(x79<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 21U;
	static int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = 20543;

	t20 = ((x81==x82)^(x83<x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x85 = 121LLU;
	volatile int32_t x86 = INT32_MIN;
	static int32_t x87 = INT32_MIN;
	static int64_t x88 = -815LL;
	int32_t t21 = 223499638;

	t21 = ((x85==x86)^(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	static int16_t x90 = -1;
	uint8_t x91 = 19U;
	int8_t x92 = INT8_MIN;
	int32_t t22 = 298648428;

	t22 = ((x89==x90)^(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x93 = 0U;
	uint8_t x94 = 8U;
	int32_t x95 = INT32_MIN;
	volatile uint32_t x96 = 79U;
	int32_t t23 = 1192;

	t23 = ((x93==x94)^(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MAX;
	volatile uint8_t x99 = 0U;
	uint8_t x100 = 15U;
	volatile int32_t t24 = -71181;

	t24 = ((x97==x98)^(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int64_t x102 = -725310442379297137LL;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = 9907;

	t25 = ((x101==x102)^(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x105 = UINT32_MAX;
	volatile uint16_t x107 = 487U;
	uint32_t x108 = UINT32_MAX;
	int32_t t26 = -303877172;

	t26 = ((x105==x106)^(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x109 = 15LLU;
	int8_t x110 = INT8_MIN;
	int32_t t27 = 4049;

	t27 = ((x109==x110)^(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -421LL;
	int64_t x114 = 181839526195313271LL;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -753608918;

	t28 = ((x113==x114)^(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 106U;
	int8_t x120 = INT8_MIN;

	t29 = ((x117==x118)^(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x123 = UINT32_MAX;
	static int32_t x124 = INT32_MIN;
	static int32_t t30 = -380991709;

	t30 = ((x121==x122)^(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = 2;
	volatile int32_t t31 = -7506;

	t31 = ((x125==x126)^(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = 16;
	volatile int16_t x130 = -1;
	static int8_t x131 = -1;
	static uint32_t x132 = 344U;

	t32 = ((x129==x130)^(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static uint32_t x134 = 25U;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 1;

	t33 = ((x133==x134)^(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = -1LL;
	static int8_t x138 = INT8_MAX;
	int32_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t34 = 26076;

	t34 = ((x137==x138)^(x139<x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x141 = 3926;
	uint64_t x142 = 13LLU;

	t35 = ((x141==x142)^(x143<x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = UINT64_MAX;
	static int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MAX;
	int32_t t36 = 47701032;

	t36 = ((x145==x146)^(x147<x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = 289U;
	uint64_t x151 = 5676LLU;
	volatile int32_t t37 = 2736192;

	t37 = ((x149==x150)^(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = -1;
	static int16_t x154 = -819;
	int8_t x156 = 0;
	static int32_t t38 = -205468;

	t38 = ((x153==x154)^(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	static uint64_t x158 = 1596687LLU;
	static int64_t x159 = INT64_MIN;
	int32_t t39 = 105432;

	t39 = ((x157==x158)^(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	int16_t x162 = INT16_MIN;
	volatile int64_t x163 = 304506276435LL;
	static volatile int32_t x164 = -1;
	volatile int32_t t40 = -6985;

	t40 = ((x161==x162)^(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = 6;
	int8_t x166 = -1;
	int32_t x168 = -1;
	int32_t t41 = 5313617;

	t41 = ((x165==x166)^(x167<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	static volatile uint16_t x170 = 8723U;
	int32_t x172 = INT32_MIN;

	t42 = ((x169==x170)^(x171<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 1096U;
	static int16_t x175 = -2;
	static uint8_t x176 = 5U;
	volatile int32_t t43 = 103;

	t43 = ((x173==x174)^(x175<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int8_t x178 = -7;
	int8_t x179 = -2;
	int64_t x180 = INT64_MIN;
	int32_t t44 = -11201;

	t44 = ((x177==x178)^(x179<x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = 22;
	volatile int32_t x182 = INT32_MIN;
	volatile uint8_t x183 = 51U;
	uint8_t x184 = UINT8_MAX;
	volatile int32_t t45 = -729842;

	t45 = ((x181==x182)^(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 26155572U;
	uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 67U;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t46 = -168;

	t46 = ((x185==x186)^(x187<x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = 6;
	int16_t x190 = -531;
	uint32_t x191 = 207397U;
	int32_t x192 = INT32_MIN;
	int32_t t47 = -131800121;

	t47 = ((x189==x190)^(x191<x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 3817484370LLU;
	uint32_t x194 = 7381093U;
	static int16_t x195 = INT16_MIN;
	int64_t x196 = -1LL;
	int32_t t48 = -4782;

	t48 = ((x193==x194)^(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = 8349720221LL;
	static volatile int8_t x199 = 1;
	static int16_t x200 = INT16_MIN;

	t49 = ((x197==x198)^(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	uint64_t x202 = 499593484774LLU;
	volatile uint32_t x203 = 137230247U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -102993;

	t50 = ((x201==x202)^(x203<x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 312U;
	volatile int16_t x206 = INT16_MIN;
	static int8_t x207 = 9;
	uint64_t x208 = 470LLU;
	volatile int32_t t51 = -381;

	t51 = ((x205==x206)^(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 22U;
	volatile int8_t x210 = 36;
	static int32_t x211 = INT32_MIN;

	t52 = ((x209==x210)^(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -1;
	volatile int8_t x214 = -1;
	uint16_t x215 = 90U;
	uint32_t x216 = 4509790U;

	t53 = ((x213==x214)^(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = -2;
	static int8_t x218 = INT8_MIN;
	uint64_t x219 = 1670149936LLU;
	int32_t t54 = 311;

	t54 = ((x217==x218)^(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 5U;
	volatile int16_t x222 = 10;
	static int16_t x224 = INT16_MIN;

	t55 = ((x221==x222)^(x223<x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	volatile int64_t x227 = INT64_MAX;
	uint64_t x228 = 33LLU;
	static int32_t t56 = 0;

	t56 = ((x225==x226)^(x227<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = INT32_MAX;
	int16_t x232 = -1;
	int32_t t57 = -1;

	t57 = ((x229==x230)^(x231<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x235 = UINT64_MAX;
	static volatile int32_t x236 = -267;
	static volatile int32_t t58 = 56237446;

	t58 = ((x233==x234)^(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -1;
	volatile uint8_t x239 = UINT8_MAX;
	int16_t x240 = -1;
	volatile int32_t t59 = -42;

	t59 = ((x237==x238)^(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	static int8_t x243 = INT8_MAX;
	static int8_t x244 = 7;

	t60 = ((x241==x242)^(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x246 = 61;
	int8_t x247 = -5;
	uint32_t x248 = 409U;
	static volatile int32_t t61 = 8955076;

	t61 = ((x245==x246)^(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 69251291267790805LL;
	int32_t x250 = INT32_MAX;
	static int16_t x252 = INT16_MAX;
	int32_t t62 = -81587845;

	t62 = ((x249==x250)^(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x256 = 2244344;
	static volatile int32_t t63 = 97;

	t63 = ((x253==x254)^(x255<x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 5712LLU;
	uint32_t x259 = 26741327U;
	uint8_t x260 = UINT8_MAX;

	t64 = ((x257==x258)^(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	int8_t x262 = 3;
	static volatile uint16_t x263 = 157U;
	static uint8_t x264 = 33U;
	int32_t t65 = -2;

	t65 = ((x261==x262)^(x263<x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x265 = 71;
	static uint16_t x266 = 0U;
	volatile uint16_t x267 = UINT16_MAX;

	t66 = ((x265==x266)^(x267<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 319U;
	int64_t x271 = INT64_MIN;
	uint32_t x272 = 17U;

	t67 = ((x269==x270)^(x271<x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = UINT16_MAX;
	volatile uint32_t x274 = 11U;
	static uint16_t x276 = 175U;
	static int32_t t68 = -9754;

	t68 = ((x273==x274)^(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x277 = 0;
	volatile int64_t x278 = INT64_MIN;
	int64_t x279 = -1LL;
	static int64_t x280 = INT64_MIN;
	int32_t t69 = -126333;

	t69 = ((x277==x278)^(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = -1;
	int32_t t70 = -475;

	t70 = ((x281==x282)^(x283<x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	uint8_t x288 = 44U;
	volatile int32_t t71 = -479508985;

	t71 = ((x285==x286)^(x287<x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 10U;
	uint8_t x290 = 9U;
	int16_t x291 = 2500;
	int64_t x292 = INT64_MAX;
	static int32_t t72 = -2019;

	t72 = ((x289==x290)^(x291<x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	int8_t x294 = -40;
	int64_t x295 = INT64_MAX;
	uint8_t x296 = 22U;

	t73 = ((x293==x294)^(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -1;
	static uint64_t x298 = UINT64_MAX;
	uint16_t x299 = UINT16_MAX;
	static uint64_t x300 = UINT64_MAX;

	t74 = ((x297==x298)^(x299<x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 448251129719881664LLU;
	int16_t x302 = INT16_MAX;
	static uint64_t x303 = UINT64_MAX;
	int64_t x304 = 9362LL;
	volatile int32_t t75 = 905;

	t75 = ((x301==x302)^(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 126797249432249LL;
	uint8_t x306 = 0U;
	static uint64_t x307 = 217693737300061LLU;
	static int32_t t76 = -62915370;

	t76 = ((x305==x306)^(x307<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x309 = INT32_MIN;
	volatile int64_t x310 = INT64_MIN;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = -4475979;

	t77 = ((x309==x310)^(x311<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = 0;
	uint8_t x314 = 14U;
	volatile int16_t x315 = INT16_MAX;
	uint32_t x316 = UINT32_MAX;

	t78 = ((x313==x314)^(x315<x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 4U;
	static int8_t x318 = 21;
	static int32_t x319 = 0;
	int32_t x320 = -432549;
	int32_t t79 = 533;

	t79 = ((x317==x318)^(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MAX;
	int64_t x322 = INT64_MIN;
	volatile uint64_t x323 = 1806231698LLU;
	int64_t x324 = INT64_MIN;
	int32_t t80 = -1;

	t80 = ((x321==x322)^(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int32_t x326 = 21085465;
	int8_t x327 = INT8_MAX;
	volatile uint8_t x328 = 77U;
	volatile int32_t t81 = 316;

	t81 = ((x325==x326)^(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x330 = 44;
	uint16_t x331 = UINT16_MAX;
	static uint16_t x332 = UINT16_MAX;
	int32_t t82 = -552;

	t82 = ((x329==x330)^(x331<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 4;
	static int16_t x334 = 1;
	static uint16_t x336 = 909U;
	volatile int32_t t83 = 5;

	t83 = ((x333==x334)^(x335<x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	int64_t x338 = INT64_MIN;
	volatile uint8_t x339 = 3U;
	int32_t t84 = 156;

	t84 = ((x337==x338)^(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	uint32_t x342 = 165U;
	volatile uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = -848;

	t85 = ((x341==x342)^(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MAX;
	uint64_t x347 = UINT64_MAX;
	int32_t x348 = -24227;
	static volatile int32_t t86 = -5966670;

	t86 = ((x345==x346)^(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 536441192692LLU;
	static volatile int32_t x350 = INT32_MIN;
	static int64_t x351 = INT64_MIN;
	int32_t t87 = 26;

	t87 = ((x349==x350)^(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {


	t88 = ((x353==x354)^(x355<x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	int32_t x358 = INT32_MIN;
	int16_t x360 = INT16_MAX;
	volatile int32_t t89 = 71494741;

	t89 = ((x357==x358)^(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	int16_t x362 = -1;
	volatile int64_t x363 = INT64_MAX;
	int16_t x364 = 1;
	int32_t t90 = -1425529;

	t90 = ((x361==x362)^(x363<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x366 = INT8_MIN;
	int8_t x367 = 8;
	static int32_t t91 = -4341325;

	t91 = ((x365==x366)^(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 243674319LL;
	int8_t x370 = -3;
	uint64_t x371 = 23432LLU;
	int16_t x372 = INT16_MIN;

	t92 = ((x369==x370)^(x371<x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x373 = INT16_MIN;
	uint8_t x374 = 1U;
	int32_t x375 = INT32_MIN;
	volatile int8_t x376 = 1;
	static int32_t t93 = 20711;

	t93 = ((x373==x374)^(x375<x376));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = INT32_MIN;
	uint32_t x379 = 144U;
	int32_t x380 = -1;
	int32_t t94 = -31800322;

	t94 = ((x377==x378)^(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x381 = 310;
	static volatile uint32_t x382 = 2U;
	int64_t x383 = 4364674298145423LL;
	int16_t x384 = -1;

	t95 = ((x381==x382)^(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	volatile int8_t x386 = 1;
	int8_t x387 = -1;
	volatile uint8_t x388 = UINT8_MAX;
	int32_t t96 = 5144;

	t96 = ((x385==x386)^(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x389 = INT8_MIN;
	volatile uint64_t x390 = 9833264750491383LLU;
	int16_t x392 = -3938;
	volatile int32_t t97 = -75;

	t97 = ((x389==x390)^(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x394 = 5146877693699413LLU;
	int8_t x395 = -1;
	static int8_t x396 = INT8_MIN;
	volatile int32_t t98 = 338491528;

	t98 = ((x393==x394)^(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x397 = -1LL;
	int64_t x399 = 98351505LL;
	static int16_t x400 = -1;

	t99 = ((x397==x398)^(x399<x400));

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

