#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = 4U;
int16_t x7 = INT16_MIN;
static volatile int32_t x9 = INT32_MIN;
static int16_t x11 = -1;
int16_t x21 = INT16_MIN;
int32_t t6 = 132597;
int32_t x32 = INT32_MIN;
volatile int32_t t8 = 105;
volatile uint32_t x37 = 1543U;
int32_t x38 = 2577;
int64_t x44 = -1LL;
volatile uint64_t t10 = 161768285544114LLU;
uint16_t x45 = 6U;
volatile int64_t x46 = INT64_MAX;
volatile int16_t x47 = INT16_MIN;
int8_t x48 = 39;
volatile int64_t t11 = -1LL;
int32_t x50 = INT32_MAX;
static volatile int32_t t12 = 14113;
uint32_t x54 = 283603U;
uint64_t x63 = 3LLU;
int32_t t16 = 195763120;
int32_t x71 = 14517;
int64_t x76 = INT64_MIN;
uint32_t x78 = 183643U;
int64_t t21 = -152718277079451684LL;
int32_t x90 = INT32_MIN;
static int8_t x95 = INT8_MAX;
volatile int32_t x96 = 62781;
volatile int32_t t24 = 5;
int8_t x101 = INT8_MAX;
int16_t x112 = INT16_MIN;
uint32_t x113 = 201715U;
uint16_t x114 = 2305U;
static int16_t x121 = INT16_MAX;
int16_t x128 = INT16_MIN;
uint64_t t31 = 383LLU;
volatile int64_t t36 = 252597796603172076LL;
static int64_t x157 = -2769712896256LL;
uint64_t x162 = 3670451270519283LLU;
volatile int8_t x166 = -1;
volatile uint32_t x167 = UINT32_MAX;
volatile int32_t t41 = -19;
int64_t t44 = 5925411956535LL;
int64_t x182 = INT64_MIN;
int8_t x191 = 5;
uint64_t x196 = 179725819966138LLU;
int16_t x200 = INT16_MIN;
uint64_t t49 = 9295616688282798LLU;
static uint8_t x202 = 25U;
int16_t x208 = INT16_MIN;
uint16_t x209 = UINT16_MAX;
uint64_t t52 = 5748715452853LLU;
volatile int16_t x215 = -4;
uint64_t x220 = UINT64_MAX;
int64_t x229 = 0LL;
int64_t t57 = INT64_MIN;
uint32_t x233 = UINT32_MAX;
int64_t x235 = -47958157LL;
int64_t x242 = -1808087609820LL;
int64_t x251 = 176LL;
int32_t x253 = INT32_MAX;
uint16_t x259 = 10276U;
static uint32_t x261 = 4980614U;
static int64_t x262 = INT64_MIN;
uint64_t x263 = 12LLU;
int64_t x271 = -913LL;
uint64_t t68 = 15084131243059288LLU;
uint32_t x282 = 7U;
int64_t t70 = -14023883349128348LL;
int64_t x285 = INT64_MIN;
static int64_t t71 = -10106473176999390LL;
int8_t x292 = INT8_MIN;
int64_t x295 = 13846041080989LL;
static int32_t x303 = INT32_MAX;
volatile uint32_t x305 = UINT32_MAX;
int32_t x312 = -1;
uint32_t x314 = UINT32_MAX;
int32_t x315 = INT32_MIN;
int32_t t79 = 403;
volatile int64_t x321 = -1LL;
uint8_t x323 = 36U;
int8_t x331 = -1;
int64_t t82 = -3866600616434739276LL;
volatile int32_t x335 = INT32_MIN;
int8_t x339 = -45;
volatile int8_t x340 = 3;
int8_t x345 = -1;
int16_t x347 = INT16_MAX;
int8_t x355 = -1;
int32_t x361 = -46078;
static volatile int32_t x362 = -20202759;
volatile uint32_t x368 = UINT32_MAX;
volatile uint8_t x369 = UINT8_MAX;
volatile int64_t x381 = INT64_MIN;
static volatile int64_t x382 = INT64_MAX;
volatile int64_t x393 = INT64_MAX;
int64_t x394 = INT64_MIN;


void f0(void) {
	volatile uint64_t x1 = 28622057643LLU;
	volatile int64_t x2 = -1LL;
	int16_t x3 = 15656;
	uint16_t x4 = 982U;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = ((x1|x2)^(x3<x4));

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	volatile uint64_t x8 = 1235LLU;
	volatile int32_t t1 = INT32_MAX;

	t1 = ((x5|x6)^(x7<x8));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x10 = 6;
	uint8_t x12 = 0U;
	volatile int32_t t2 = 25;

	t2 = ((x9|x10)^(x11<x12));

	if (t2 != -2147483641) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	static int8_t x14 = INT8_MIN;
	volatile uint16_t x15 = 496U;
	volatile uint32_t x16 = 0U;
	int32_t t3 = 468721902;

	t3 = ((x13|x14)^(x15<x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 260LLU;
	volatile int8_t x18 = -1;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = INT64_MAX;
	uint64_t t4 = 24004143077712359LLU;

	t4 = ((x17|x18)^(x19<x20));

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MAX;
	static int64_t t5 = -11LL;

	t5 = ((x21|x22)^(x23<x24));

	if (t5 != -32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	static int64_t x27 = INT64_MAX;
	int8_t x28 = INT8_MIN;

	t6 = ((x25|x26)^(x27<x28));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 34149215444678LL;
	uint32_t x30 = 338U;
	int32_t x31 = INT32_MIN;
	volatile int64_t t7 = 0LL;

	t7 = ((x29|x30)^(x31<x32));

	if (t7 != 34149215444950LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = -1;
	static uint32_t x36 = 698727697U;

	t8 = ((x33|x34)^(x35<x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x39 = 1U;
	int64_t x40 = 85LL;
	volatile uint32_t t9 = 2588588U;

	t9 = ((x37|x38)^(x39<x40));

	if (t9 != 3606U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	volatile uint64_t x42 = 2LLU;
	int64_t x43 = -1LL;

	t10 = ((x41|x42)^(x43<x44));

	if (t10 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f11(void) {


	t11 = ((x45|x46)^(x47<x48));

	if (t11 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x49 = INT32_MIN;
	int16_t x51 = -799;
	volatile uint64_t x52 = 16418150975LLU;

	t12 = ((x49|x50)^(x51<x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	volatile uint32_t t13 = 77839U;

	t13 = ((x53|x54)^(x55<x56));

	if (t13 != 2147483647U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 308430810U;
	int32_t x58 = -1;
	int64_t x59 = 1790449026LL;
	uint64_t x60 = UINT64_MAX;
	volatile uint32_t t14 = 94576U;

	t14 = ((x57|x58)^(x59<x60));

	if (t14 != 4294967294U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint16_t x62 = 11U;
	uint8_t x64 = 34U;
	static volatile int32_t t15 = 14757817;

	t15 = ((x61|x62)^(x63<x64));

	if (t15 != 2147483646) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	int16_t x66 = 442;
	int32_t x67 = INT32_MIN;
	int32_t x68 = INT32_MIN;

	t16 = ((x65|x66)^(x67<x68));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int64_t x70 = -1LL;
	int16_t x72 = 53;
	static volatile int64_t t17 = 752060324061012159LL;

	t17 = ((x69|x70)^(x71<x72));

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = 60374;
	uint16_t x75 = UINT16_MAX;
	int32_t t18 = -636096;

	t18 = ((x73|x74)^(x75<x76));

	if (t18 != -42) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint64_t x79 = 3574848LLU;
	uint8_t x80 = 5U;
	uint32_t t19 = 19413306U;

	t19 = ((x77|x78)^(x79<x80));

	if (t19 != 2147667291U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static volatile int8_t x82 = INT8_MIN;
	static int16_t x83 = INT16_MAX;
	static int16_t x84 = -1;
	volatile int32_t t20 = -940;

	t20 = ((x81|x82)^(x83<x84));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int64_t x86 = INT64_MIN;
	volatile int8_t x87 = INT8_MIN;
	static uint16_t x88 = 29U;

	t21 = ((x85|x86)^(x87<x88));

	if (t21 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	int16_t x91 = -1;
	int32_t x92 = -17086;
	static volatile int32_t t22 = 64959554;

	t22 = ((x89|x90)^(x91<x92));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = INT64_MIN;
	static volatile uint8_t x94 = UINT8_MAX;
	int64_t t23 = 8852LL;

	t23 = ((x93|x94)^(x95<x96));

	if (t23 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 231;
	uint8_t x98 = 1U;
	int16_t x99 = -1;
	volatile int32_t x100 = -1;

	t24 = ((x97|x98)^(x99<x100));

	if (t24 != 231) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = INT32_MIN;
	int32_t x103 = -1855;
	int64_t x104 = -7994384871054106LL;
	int32_t t25 = 1;

	t25 = ((x101|x102)^(x103<x104));

	if (t25 != -2147483521) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MIN;
	static uint16_t x106 = 3080U;
	static int16_t x107 = INT16_MIN;
	static int64_t x108 = INT64_MIN;
	int32_t t26 = 7;

	t26 = ((x105|x106)^(x107<x108));

	if (t26 != -120) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	int64_t x110 = -15844020144LL;
	int16_t x111 = 1;
	volatile int64_t t27 = -6172218383LL;

	t27 = ((x109|x110)^(x111<x112));

	if (t27 != -15844020097LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x115 = 356866U;
	int64_t x116 = INT64_MAX;
	uint32_t t28 = 26482U;

	t28 = ((x113|x114)^(x115<x116));

	if (t28 != 203762U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = -1;
	int8_t x119 = -1;
	uint16_t x120 = 11U;
	int32_t t29 = 61810145;

	t29 = ((x117|x118)^(x119<x120));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = INT64_MAX;
	static uint16_t x123 = 3U;
	volatile int16_t x124 = -1;
	static volatile int64_t t30 = INT64_MAX;

	t30 = ((x121|x122)^(x123<x124));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = 8429954;
	static volatile uint64_t x126 = 31510LLU;
	uint8_t x127 = UINT8_MAX;

	t31 = ((x125|x126)^(x127<x128));

	if (t31 != 8453014LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 10834652LLU;
	int8_t x130 = 52;
	static uint16_t x131 = 297U;
	volatile int8_t x132 = 0;
	volatile uint64_t t32 = 44677459LLU;

	t32 = ((x129|x130)^(x131<x132));

	if (t32 != 10834684LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 75U;
	int32_t x134 = 211500;
	static int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	static int32_t t33 = 5;

	t33 = ((x133|x134)^(x135<x136));

	if (t33 != 211566) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x137 = UINT32_MAX;
	static int64_t x138 = 2839931069874461LL;
	int64_t x139 = -103217289LL;
	static uint32_t x140 = 45309428U;
	volatile int64_t t34 = -12877LL;

	t34 = ((x137|x138)^(x139<x140));

	if (t34 != 2839931160363006LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	volatile uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MIN;
	int32_t x144 = INT32_MIN;
	volatile int64_t t35 = 60260688423720LL;

	t35 = ((x141|x142)^(x143<x144));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 1U;
	int64_t x146 = -81571743LL;
	static uint16_t x147 = 10214U;
	volatile uint32_t x148 = 408638U;

	t36 = ((x145|x146)^(x147<x148));

	if (t36 != -81571744LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 462U;
	int16_t x150 = INT16_MIN;
	uint64_t x151 = 5683LLU;
	int16_t x152 = INT16_MAX;
	int32_t t37 = -30293;

	t37 = ((x149|x150)^(x151<x152));

	if (t37 != -32305) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = INT16_MIN;
	volatile int16_t x154 = -31;
	uint16_t x155 = 1566U;
	int8_t x156 = -1;
	volatile int32_t t38 = -49908;

	t38 = ((x153|x154)^(x155<x156));

	if (t38 != -31) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x158 = INT8_MIN;
	static volatile int16_t x159 = -26;
	static int32_t x160 = INT32_MAX;
	volatile int64_t t39 = -34691036029905LL;

	t39 = ((x157|x158)^(x159<x160));

	if (t39 != -127LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 8009U;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = UINT32_MAX;
	volatile uint64_t t40 = 49LLU;

	t40 = ((x161|x162)^(x163<x164));

	if (t40 != 3670451270524922LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x165 = INT16_MIN;
	int16_t x168 = -10391;

	t41 = ((x165|x166)^(x167<x168));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = INT16_MIN;
	uint16_t x170 = 446U;
	int16_t x171 = -2;
	static volatile int32_t x172 = 841586469;
	int32_t t42 = -40964;

	t42 = ((x169|x170)^(x171<x172));

	if (t42 != -32321) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 1;
	int16_t x174 = 204;
	int8_t x175 = -1;
	int16_t x176 = INT16_MIN;
	volatile int32_t t43 = 339931;

	t43 = ((x173|x174)^(x175<x176));

	if (t43 != 205) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int32_t x178 = -186284;
	int32_t x179 = 33868;
	int32_t x180 = -1;

	t44 = ((x177|x178)^(x179<x180));

	if (t44 != -186284LL) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x181 = 2253623749LLU;
	volatile int64_t x183 = INT64_MAX;
	int64_t x184 = INT64_MAX;
	volatile uint64_t t45 = 3LLU;

	t45 = ((x181|x182)^(x183<x184));

	if (t45 != 9223372039108399557LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint8_t x185 = 46U;
	static volatile int16_t x186 = 28;
	int8_t x187 = -4;
	int16_t x188 = INT16_MIN;
	int32_t t46 = 112;

	t46 = ((x185|x186)^(x187<x188));

	if (t46 != 62) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = 0;
	uint64_t x190 = 8085141LLU;
	uint32_t x192 = 303681276U;
	volatile uint64_t t47 = 11813LLU;

	t47 = ((x189|x190)^(x191<x192));

	if (t47 != 8085140LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x193 = UINT8_MAX;
	int16_t x194 = INT16_MIN;
	uint8_t x195 = 5U;
	volatile int32_t t48 = 273;

	t48 = ((x193|x194)^(x195<x196));

	if (t48 != -32514) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 41747014486LLU;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MIN;

	t49 = ((x197|x198)^(x199<x200));

	if (t49 != 18446744073709544278LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x201 = INT16_MIN;
	int32_t x203 = -1;
	int64_t x204 = -1LL;
	int32_t t50 = 899;

	t50 = ((x201|x202)^(x203<x204));

	if (t50 != -32743) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x205 = -1LL;
	int32_t x206 = -1;
	static int32_t x207 = -1;
	volatile int64_t t51 = -157734468326LL;

	t51 = ((x205|x206)^(x207<x208));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 19223890286864082LLU;
	int32_t x211 = INT32_MAX;
	int8_t x212 = -1;

	t52 = ((x209|x210)^(x211<x212));

	if (t52 != 19223890286870527LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = UINT8_MAX;
	int64_t x214 = INT64_MAX;
	int32_t x216 = INT32_MIN;
	static int64_t t53 = INT64_MAX;

	t53 = ((x213|x214)^(x215<x216));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint32_t x218 = UINT32_MAX;
	int32_t x219 = INT32_MIN;
	volatile uint32_t t54 = 157U;

	t54 = ((x217|x218)^(x219<x220));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = 54;
	uint8_t x222 = 1U;
	static int32_t x223 = -1;
	int64_t x224 = -285LL;
	int32_t t55 = -1;

	t55 = ((x221|x222)^(x223<x224));

	if (t55 != 55) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -31;
	static volatile int32_t x226 = 9654;
	int16_t x227 = INT16_MIN;
	uint8_t x228 = 1U;
	volatile int32_t t56 = 26;

	t56 = ((x225|x226)^(x227<x228));

	if (t56 != -10) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x230 = INT64_MIN;
	uint16_t x231 = UINT16_MAX;
	int8_t x232 = INT8_MAX;

	t57 = ((x229|x230)^(x231<x232));

	if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x234 = 2;
	static int8_t x236 = 10;
	volatile uint32_t t58 = 3U;

	t58 = ((x233|x234)^(x235<x236));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 2;
	static int64_t x238 = -2526695851797923LL;
	uint32_t x239 = 11850U;
	volatile int16_t x240 = -3;
	int64_t t59 = -130759331624799342LL;

	t59 = ((x237|x238)^(x239<x240));

	if (t59 != -2526695851797922LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 119U;
	int8_t x243 = INT8_MIN;
	uint64_t x244 = 25466057LLU;
	static volatile int64_t t60 = -112046912458816913LL;

	t60 = ((x241|x242)^(x243<x244));

	if (t60 != -1808087609737LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -26;
	int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MIN;
	volatile uint16_t x248 = 14U;
	int32_t t61 = -3477;

	t61 = ((x245|x246)^(x247<x248));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = 415919LLU;
	int8_t x250 = INT8_MIN;
	volatile int8_t x252 = -1;
	uint64_t t62 = 2LLU;

	t62 = ((x249|x250)^(x251<x252));

	if (t62 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x254 = INT64_MAX;
	uint64_t x255 = 5509743111860LLU;
	int64_t x256 = INT64_MIN;
	volatile int64_t t63 = -28831347090LL;

	t63 = ((x253|x254)^(x255<x256));

	if (t63 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 10400;
	static volatile int8_t x258 = INT8_MAX;
	int64_t x260 = 181LL;
	static volatile int32_t t64 = 125816364;

	t64 = ((x257|x258)^(x259<x260));

	if (t64 != 10495) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x264 = INT64_MAX;
	static int64_t t65 = 2438406560LL;

	t65 = ((x261|x262)^(x263<x264));

	if (t65 != -9223372036849795193LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -47;
	int16_t x266 = INT16_MIN;
	static int32_t x267 = -1;
	int32_t x268 = INT32_MIN;
	volatile int32_t t66 = 10;

	t66 = ((x265|x266)^(x267<x268));

	if (t66 != -47) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	int32_t x270 = INT32_MIN;
	int64_t x272 = INT64_MIN;
	int32_t t67 = -184354;

	t67 = ((x269|x270)^(x271<x272));

	if (t67 != -2147450881) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 1590U;
	static volatile uint64_t x274 = UINT64_MAX;
	static int16_t x275 = -4;
	int8_t x276 = INT8_MAX;

	t68 = ((x273|x274)^(x275<x276));

	if (t68 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = UINT16_MAX;
	uint16_t x278 = UINT16_MAX;
	int64_t x279 = INT64_MIN;
	static uint8_t x280 = 5U;
	int32_t t69 = 896999;

	t69 = ((x277|x278)^(x279<x280));

	if (t69 != 65534) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	volatile uint64_t x283 = 12661831969540LLU;
	volatile int16_t x284 = INT16_MIN;

	t70 = ((x281|x282)^(x283<x284));

	if (t70 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x286 = -147LL;
	int16_t x287 = -1;
	int8_t x288 = -23;

	t71 = ((x285|x286)^(x287<x288));

	if (t71 != -147LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = -383128547LL;
	volatile uint16_t x291 = 2U;
	static volatile int64_t t72 = 6LL;

	t72 = ((x289|x290)^(x291<x292));

	if (t72 != -5091LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -1;
	volatile int8_t x294 = INT8_MAX;
	volatile uint8_t x296 = 98U;
	int32_t t73 = -759004315;

	t73 = ((x293|x294)^(x295<x296));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = 507588631;
	int32_t x298 = INT32_MIN;
	uint8_t x299 = 1U;
	volatile int32_t x300 = -1;
	int32_t t74 = -708177298;

	t74 = ((x297|x298)^(x299<x300));

	if (t74 != -1639895017) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x301 = 11U;
	uint8_t x302 = 2U;
	int32_t x304 = 54841806;
	int32_t t75 = -237;

	t75 = ((x301|x302)^(x303<x304));

	if (t75 != 11) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x306 = -263;
	int32_t x307 = -1;
	static int8_t x308 = INT8_MAX;
	uint32_t t76 = 497421629U;

	t76 = ((x305|x306)^(x307<x308));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1;
	static volatile int64_t x310 = INT64_MAX;
	int64_t x311 = INT64_MIN;
	int64_t t77 = 15843267448575LL;

	t77 = ((x309|x310)^(x311<x312));

	if (t77 != -2LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x313 = 29U;
	int32_t x316 = -1;
	static uint32_t t78 = 31U;

	t78 = ((x313|x314)^(x315<x316));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = 0;
	volatile uint16_t x318 = 77U;
	volatile int16_t x319 = INT16_MIN;
	static uint64_t x320 = 1066852309276521537LLU;

	t79 = ((x317|x318)^(x319<x320));

	if (t79 != 77) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 226253006LLU;
	int16_t x324 = INT16_MAX;
	volatile uint64_t t80 = 6975862411LLU;

	t80 = ((x321|x322)^(x323<x324));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = 813;
	uint64_t x326 = 520120780LLU;
	static volatile int16_t x327 = -690;
	int16_t x328 = INT16_MIN;
	uint64_t t81 = 503LLU;

	t81 = ((x325|x326)^(x327<x328));

	if (t81 != 520121325LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 2144LL;
	static uint8_t x330 = UINT8_MAX;
	volatile uint16_t x332 = UINT16_MAX;

	t82 = ((x329|x330)^(x331<x332));

	if (t82 != 2302LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = INT64_MIN;
	int32_t x334 = -1;
	int32_t x336 = INT32_MIN;
	int64_t t83 = 6LL;

	t83 = ((x333|x334)^(x335<x336));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MIN;
	static int8_t x338 = INT8_MAX;
	int32_t t84 = -99;

	t84 = ((x337|x338)^(x339<x340));

	if (t84 != -32642) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -1;
	volatile int32_t x342 = 41;
	uint64_t x343 = 2947735955528860LLU;
	volatile int16_t x344 = -1;
	volatile int32_t t85 = 1992035;

	t85 = ((x341|x342)^(x343<x344));

	if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x346 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	volatile int64_t t86 = 2170326320128LL;

	t86 = ((x345|x346)^(x347<x348));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = 1;
	int64_t x350 = INT64_MIN;
	static volatile uint16_t x351 = 20386U;
	int8_t x352 = INT8_MIN;
	int64_t t87 = -216LL;

	t87 = ((x349|x350)^(x351<x352));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = -4467;
	static int32_t x354 = 905;
	uint32_t x356 = UINT32_MAX;
	int32_t t88 = -1915;

	t88 = ((x353|x354)^(x355<x356));

	if (t88 != -4211) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = 10U;
	static int64_t x360 = INT64_MIN;
	int32_t t89 = INT32_MIN;

	t89 = ((x357|x358)^(x359<x360));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x363 = 4U;
	static int32_t x364 = INT32_MAX;
	int32_t t90 = 124;

	t90 = ((x361|x362)^(x363<x364));

	if (t90 != -262) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x365 = INT64_MAX;
	uint64_t x366 = 7668473959LLU;
	int64_t x367 = INT64_MAX;
	uint64_t t91 = 56LLU;

	t91 = ((x365|x366)^(x367<x368));

	if (t91 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = INT16_MIN;
	uint16_t x371 = UINT16_MAX;
	volatile uint64_t x372 = 10834LLU;
	volatile int32_t t92 = 5842308;

	t92 = ((x369|x370)^(x371<x372));

	if (t92 != -32513) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	int8_t x374 = 16;
	uint64_t x375 = UINT64_MAX;
	static uint64_t x376 = UINT64_MAX;
	int32_t t93 = 36245590;

	t93 = ((x373|x374)^(x375<x376));

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = -814;
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = INT16_MIN;
	static int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 5;

	t94 = ((x377|x378)^(x379<x380));

	if (t94 != -769) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x383 = -1;
	int8_t x384 = INT8_MAX;
	volatile int64_t t95 = -5077120998183361LL;

	t95 = ((x381|x382)^(x383<x384));

	if (t95 != -2LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MIN;
	int16_t x386 = INT16_MAX;
	static volatile int64_t x387 = 2638LL;
	int64_t x388 = -1593794217673518LL;
	int32_t t96 = -133204;

	t96 = ((x385|x386)^(x387<x388));

	if (t96 != -2147450881) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	uint16_t x391 = 304U;
	int64_t x392 = INT64_MIN;
	static int32_t t97 = 12;

	t97 = ((x389|x390)^(x391<x392));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x395 = -1LL;
	uint16_t x396 = 24U;
	int64_t t98 = -105LL;

	t98 = ((x393|x394)^(x395<x396));

	if (t98 != -2LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int64_t x398 = -311908LL;
	int64_t x399 = INT64_MAX;
	static int64_t x400 = INT64_MIN;
	int64_t t99 = -20791013786783828LL;

	t99 = ((x397|x398)^(x399<x400));

	if (t99 != -16996LL) { NG(); } else { ; }
	
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

