#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 211;
static int8_t x8 = 3;
int32_t x14 = -62190;
volatile uint8_t x15 = UINT8_MAX;
uint16_t x24 = 4U;
int8_t x43 = INT8_MIN;
int32_t x50 = -214;
int16_t x53 = INT16_MIN;
int64_t x58 = 35LL;
int32_t x60 = 4;
int64_t x70 = -1LL;
volatile uint64_t x73 = 413421784878771LLU;
uint8_t x75 = 4U;
int32_t t14 = -7;
uint64_t x85 = UINT64_MAX;
volatile int32_t t15 = 65923574;
static int64_t x92 = 82321LL;
uint64_t x100 = 91490415024070LLU;
uint32_t x103 = 55473190U;
static int16_t x106 = INT16_MIN;
int64_t x115 = INT64_MIN;
static uint32_t x116 = 1088567429U;
int32_t x119 = INT32_MIN;
volatile int16_t x120 = INT16_MAX;
int32_t t23 = 53142;
int16_t x136 = INT16_MIN;
uint32_t x142 = UINT32_MAX;
int32_t x143 = 203;
int8_t x145 = INT8_MIN;
uint16_t x153 = 5U;
volatile uint64_t x155 = 75792709009LLU;
volatile uint64_t x162 = 14628918775LLU;
static uint32_t x164 = UINT32_MAX;
static int8_t x165 = 3;
int8_t x167 = INT8_MIN;
int8_t x171 = -61;
int16_t x172 = INT16_MAX;
static int32_t x174 = 66;
volatile int32_t t37 = 2616;
int8_t x177 = INT8_MIN;
static int8_t x178 = 32;
uint64_t x181 = 62099LLU;
int16_t x185 = INT16_MIN;
uint32_t x187 = UINT32_MAX;
static volatile int32_t x193 = -1;
volatile int32_t x197 = -3;
int8_t x206 = INT8_MIN;
int32_t t44 = -297223417;
int64_t x216 = INT64_MAX;
int32_t t48 = 1376498;
int64_t x227 = -15LL;
uint32_t x228 = 9983U;
volatile int32_t t52 = 147110;
static uint64_t x244 = 1478129450LLU;
int32_t t53 = -13;
uint8_t x245 = 30U;
int32_t x258 = -91;
volatile uint64_t x261 = 2722827LLU;
volatile int8_t x268 = INT8_MIN;
static int32_t t59 = -18;
int32_t x281 = INT32_MAX;
int8_t x299 = -1;
volatile int32_t x303 = INT32_MIN;
static uint64_t x307 = UINT64_MAX;
static int32_t t68 = 14164318;
int16_t x322 = INT16_MIN;
int64_t x326 = INT64_MIN;
uint16_t x328 = 1U;
static volatile int16_t x331 = -1;
volatile int32_t t71 = 928630;
int32_t x333 = -37774385;
static volatile int32_t t72 = 236788188;
int32_t x340 = INT32_MIN;
int64_t x343 = -1LL;
static int32_t t74 = 990120747;
int8_t x349 = -6;
int64_t x353 = -1LL;
static int64_t x368 = INT64_MIN;
volatile int32_t t78 = -2819930;
int32_t x369 = 219647349;
int64_t x374 = INT64_MAX;
volatile uint32_t x377 = UINT32_MAX;
uint64_t x381 = 2005632548779099LLU;
volatile int32_t x382 = -1;
int32_t t82 = 28;
int32_t t83 = 28587577;
int64_t x391 = -1237050835351LL;
static int16_t x407 = INT16_MIN;
uint8_t x408 = 19U;
volatile int32_t t87 = 42951987;
uint16_t x410 = 2U;
volatile int32_t t90 = 1;
int64_t x427 = INT64_MIN;
int32_t t91 = 220;
int32_t x435 = INT32_MIN;
static int32_t t93 = 653653;
static volatile int64_t x437 = -112LL;
int16_t x439 = -1;
volatile int32_t t95 = 29449;
int32_t x453 = INT32_MIN;
volatile int64_t x455 = -92LL;
volatile int16_t x459 = INT16_MAX;
uint32_t x462 = UINT32_MAX;
int8_t x467 = -2;
int32_t t99 = -27907142;


void f0(void) {
	int8_t x1 = 0;
	int8_t x2 = INT8_MIN;
	static int32_t x3 = 122081;
	uint16_t x4 = UINT16_MAX;

	t0 = ((x1|x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	volatile int16_t x6 = -1;
	uint16_t x7 = 51U;
	int32_t t1 = -3904708;

	t1 = ((x5|x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x13 = -1;
	volatile uint32_t x16 = 123U;
	static int32_t t2 = 469149360;

	t2 = ((x13|x14)==(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -1;
	static uint32_t x22 = 476U;
	static int8_t x23 = -27;
	int32_t t3 = -51;

	t3 = ((x21|x22)==(x23+x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	int16_t x26 = -1;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = 4494U;
	int32_t t4 = 916115;

	t4 = ((x25|x26)==(x27+x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = 2689068;
	int16_t x31 = INT16_MIN;
	static int8_t x32 = INT8_MIN;
	int32_t t5 = -552;

	t5 = ((x29|x30)==(x31+x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = UINT32_MAX;
	int8_t x42 = 12;
	int32_t x44 = INT32_MAX;
	volatile int32_t t6 = -142926804;

	t6 = ((x41|x42)==(x43+x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x49 = 10197LLU;
	int64_t x51 = -1601689715723LL;
	int8_t x52 = -1;
	volatile int32_t t7 = 164023;

	t7 = ((x49|x50)==(x51+x52));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x54 = 96311630LLU;
	volatile int64_t x55 = 341241276807034917LL;
	static int64_t x56 = INT64_MIN;
	volatile int32_t t8 = 921;

	t8 = ((x53|x54)==(x55+x56));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = 0U;
	static volatile uint16_t x59 = 344U;
	int32_t t9 = -14953;

	t9 = ((x57|x58)==(x59+x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = -3;
	uint8_t x63 = 9U;
	uint16_t x64 = UINT16_MAX;
	static int32_t t10 = 2871198;

	t10 = ((x61|x62)==(x63+x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x65 = -614213237;
	uint64_t x66 = 87LLU;
	uint64_t x67 = 23281108385993LLU;
	static int64_t x68 = -103LL;
	volatile int32_t t11 = 34;

	t11 = ((x65|x66)==(x67+x68));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x69 = INT64_MAX;
	uint16_t x71 = UINT16_MAX;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t12 = 170;

	t12 = ((x69|x70)==(x71+x72));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x74 = 71U;
	int8_t x76 = -16;
	volatile int32_t t13 = -5330709;

	t13 = ((x73|x74)==(x75+x76));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	int64_t x82 = -1LL;
	uint64_t x83 = 134110262558422278LLU;
	uint64_t x84 = 22LLU;

	t14 = ((x81|x82)==(x83+x84));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x86 = 14;
	int8_t x87 = INT8_MIN;
	static int16_t x88 = INT16_MAX;

	t15 = ((x85|x86)==(x87+x88));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x89 = -1LL;
	int16_t x90 = 46;
	static int16_t x91 = INT16_MIN;
	int32_t t16 = -5;

	t16 = ((x89|x90)==(x91+x92));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x93 = UINT64_MAX;
	static volatile int64_t x94 = INT64_MAX;
	uint16_t x95 = 1U;
	uint8_t x96 = 0U;
	int32_t t17 = 366168878;

	t17 = ((x93|x94)==(x95+x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = -1;
	int16_t x98 = 1;
	uint32_t x99 = 1021U;
	int32_t t18 = 243634;

	t18 = ((x97|x98)==(x99+x100));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x101 = INT64_MAX;
	uint8_t x102 = 3U;
	uint16_t x104 = 721U;
	volatile int32_t t19 = 23303;

	t19 = ((x101|x102)==(x103+x104));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x105 = 105925U;
	static volatile int8_t x107 = -1;
	int64_t x108 = -1LL;
	int32_t t20 = 2751;

	t20 = ((x105|x106)==(x107+x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MAX;
	int64_t x110 = INT64_MAX;
	static uint32_t x111 = UINT32_MAX;
	int16_t x112 = INT16_MIN;
	volatile int32_t t21 = -145232096;

	t21 = ((x109|x110)==(x111+x112));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	static uint64_t x114 = 978LLU;
	int32_t t22 = -58409371;

	t22 = ((x113|x114)==(x115+x116));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x117 = -1;
	int8_t x118 = -7;

	t23 = ((x117|x118)==(x119+x120));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x121 = -1;
	volatile int64_t x122 = INT64_MIN;
	int8_t x123 = -14;
	volatile int32_t x124 = -1;
	int32_t t24 = 14;

	t24 = ((x121|x122)==(x123+x124));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x125 = INT16_MAX;
	volatile uint8_t x126 = 6U;
	static int16_t x127 = 1985;
	volatile int16_t x128 = -1;
	volatile int32_t t25 = -331384913;

	t25 = ((x125|x126)==(x127+x128));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = 286;
	static int32_t x130 = -1;
	uint16_t x131 = 1U;
	volatile int8_t x132 = INT8_MIN;
	volatile int32_t t26 = 1;

	t26 = ((x129|x130)==(x131+x132));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x133 = INT32_MIN;
	static int8_t x134 = 29;
	uint16_t x135 = 15U;
	volatile int32_t t27 = -6;

	t27 = ((x133|x134)==(x135+x136));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x137 = 28893LLU;
	volatile int64_t x138 = -25259345LL;
	int16_t x139 = INT16_MIN;
	volatile int32_t x140 = -1;
	int32_t t28 = -6200183;

	t28 = ((x137|x138)==(x139+x140));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x141 = INT8_MIN;
	int8_t x144 = INT8_MAX;
	int32_t t29 = -8508;

	t29 = ((x141|x142)==(x143+x144));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x146 = INT32_MIN;
	uint16_t x147 = 3U;
	volatile uint16_t x148 = 2322U;
	volatile int32_t t30 = 996;

	t30 = ((x145|x146)==(x147+x148));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x149 = UINT16_MAX;
	static volatile int32_t x150 = INT32_MIN;
	int64_t x151 = -11LL;
	int64_t x152 = INT64_MAX;
	volatile int32_t t31 = 263168;

	t31 = ((x149|x150)==(x151+x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int64_t x154 = INT64_MIN;
	int64_t x156 = -1LL;
	volatile int32_t t32 = -88292534;

	t32 = ((x153|x154)==(x155+x156));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = -1;
	int64_t x158 = -1176080627LL;
	int16_t x159 = 13;
	volatile int8_t x160 = -6;
	int32_t t33 = 397066593;

	t33 = ((x157|x158)==(x159+x160));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x161 = INT64_MIN;
	static int16_t x163 = INT16_MAX;
	int32_t t34 = -182499700;

	t34 = ((x161|x162)==(x163+x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x166 = 0U;
	static uint8_t x168 = UINT8_MAX;
	volatile int32_t t35 = 2339199;

	t35 = ((x165|x166)==(x167+x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = 3967375795958LL;
	static volatile uint8_t x170 = 1U;
	volatile int32_t t36 = 734909856;

	t36 = ((x169|x170)==(x171+x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x173 = 1U;
	uint16_t x175 = 10U;
	volatile int64_t x176 = -1934464396240171992LL;

	t37 = ((x173|x174)==(x175+x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x179 = INT32_MAX;
	volatile int8_t x180 = -1;
	volatile int32_t t38 = 1925;

	t38 = ((x177|x178)==(x179+x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x182 = UINT8_MAX;
	int16_t x183 = INT16_MIN;
	static volatile uint32_t x184 = 2523U;
	int32_t t39 = -55853;

	t39 = ((x181|x182)==(x183+x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x186 = INT16_MIN;
	uint32_t x188 = 1698U;
	int32_t t40 = -107339214;

	t40 = ((x185|x186)==(x187+x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x194 = INT8_MAX;
	int64_t x195 = -462146049660363LL;
	int32_t x196 = INT32_MAX;
	volatile int32_t t41 = 2674965;

	t41 = ((x193|x194)==(x195+x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x198 = 3768U;
	int32_t x199 = 9;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t42 = -7548544;

	t42 = ((x197|x198)==(x199+x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x201 = 491U;
	int8_t x202 = INT8_MIN;
	int64_t x203 = INT64_MAX;
	static volatile int16_t x204 = INT16_MIN;
	volatile int32_t t43 = 10975;

	t43 = ((x201|x202)==(x203+x204));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x205 = 218U;
	int8_t x207 = 5;
	volatile int16_t x208 = INT16_MAX;

	t44 = ((x205|x206)==(x207+x208));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x209 = 35395U;
	int16_t x210 = -1;
	int8_t x211 = -1;
	int64_t x212 = -1072832298854026LL;
	volatile int32_t t45 = 3230;

	t45 = ((x209|x210)==(x211+x212));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x213 = -1;
	uint64_t x214 = 4348295899627711LLU;
	static volatile int16_t x215 = INT16_MIN;
	int32_t t46 = 726924;

	t46 = ((x213|x214)==(x215+x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x218 = INT8_MIN;
	static uint64_t x219 = UINT64_MAX;
	int32_t x220 = -1134153;
	static volatile int32_t t47 = -5;

	t47 = ((x217|x218)==(x219+x220));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = INT16_MIN;
	int8_t x222 = -1;
	static int32_t x223 = INT32_MAX;
	int64_t x224 = -14LL;

	t48 = ((x221|x222)==(x223+x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x225 = 519589U;
	static int16_t x226 = -1;
	int32_t t49 = -185770;

	t49 = ((x225|x226)==(x227+x228));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = INT8_MAX;
	volatile int8_t x230 = INT8_MIN;
	int32_t x231 = -1;
	uint8_t x232 = 2U;
	int32_t t50 = -3;

	t50 = ((x229|x230)==(x231+x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	int8_t x234 = -1;
	int64_t x235 = -1LL;
	static volatile int8_t x236 = 25;
	volatile int32_t t51 = 25435;

	t51 = ((x233|x234)==(x235+x236));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x237 = 10U;
	int32_t x238 = 1;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = 55U;

	t52 = ((x237|x238)==(x239+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = -1490;
	int16_t x242 = 0;
	static uint64_t x243 = 8592442449102LLU;

	t53 = ((x241|x242)==(x243+x244));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x246 = 1508559LL;
	int32_t x247 = 966129;
	int16_t x248 = -89;
	static volatile int32_t t54 = 4;

	t54 = ((x245|x246)==(x247+x248));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x249 = 1529123932668LLU;
	int16_t x250 = INT16_MIN;
	int8_t x251 = 5;
	volatile int16_t x252 = INT16_MAX;
	int32_t t55 = 0;

	t55 = ((x249|x250)==(x251+x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = INT16_MIN;
	int64_t x254 = 55701627199LL;
	int8_t x255 = -1;
	int8_t x256 = -1;
	static int32_t t56 = -298960318;

	t56 = ((x253|x254)==(x255+x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x257 = UINT32_MAX;
	int16_t x259 = -7935;
	uint64_t x260 = UINT64_MAX;
	int32_t t57 = 323226;

	t57 = ((x257|x258)==(x259+x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x262 = -923183;
	static int64_t x263 = 123983309LL;
	static volatile uint64_t x264 = 37703250LLU;
	int32_t t58 = 3167;

	t58 = ((x261|x262)==(x263+x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x265 = 7436908915665LLU;
	int32_t x266 = -166259799;
	static uint32_t x267 = 119484U;

	t59 = ((x265|x266)==(x267+x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = -1;
	int8_t x270 = INT8_MIN;
	static int64_t x271 = 1825LL;
	uint32_t x272 = UINT32_MAX;
	int32_t t60 = 3687423;

	t60 = ((x269|x270)==(x271+x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x282 = INT8_MIN;
	volatile uint8_t x283 = 4U;
	static int64_t x284 = INT64_MIN;
	int32_t t61 = -2825264;

	t61 = ((x281|x282)==(x283+x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = INT8_MAX;
	uint32_t x286 = 12U;
	static uint16_t x287 = UINT16_MAX;
	uint64_t x288 = 2329938612588881LLU;
	volatile int32_t t62 = 3;

	t62 = ((x285|x286)==(x287+x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x293 = INT32_MAX;
	int32_t x294 = 77;
	uint16_t x295 = UINT16_MAX;
	int16_t x296 = 340;
	volatile int32_t t63 = -1979498;

	t63 = ((x293|x294)==(x295+x296));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x297 = 243380;
	volatile int64_t x298 = INT64_MIN;
	int32_t x300 = -1;
	static int32_t t64 = 13037;

	t64 = ((x297|x298)==(x299+x300));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MIN;
	int8_t x302 = INT8_MIN;
	uint64_t x304 = UINT64_MAX;
	volatile int32_t t65 = 385;

	t65 = ((x301|x302)==(x303+x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x305 = UINT32_MAX;
	uint16_t x306 = 2995U;
	volatile int8_t x308 = INT8_MAX;
	volatile int32_t t66 = 105;

	t66 = ((x305|x306)==(x307+x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x309 = 80U;
	int64_t x310 = 1620979LL;
	int16_t x311 = INT16_MAX;
	int64_t x312 = -1520546781606069609LL;
	static volatile int32_t t67 = 13222;

	t67 = ((x309|x310)==(x311+x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = 346;
	int8_t x314 = 4;
	static int8_t x315 = 7;
	int32_t x316 = INT32_MIN;

	t68 = ((x313|x314)==(x315+x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x321 = INT16_MAX;
	int16_t x323 = -1;
	int16_t x324 = -14564;
	volatile int32_t t69 = -4;

	t69 = ((x321|x322)==(x323+x324));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x327 = INT16_MIN;
	int32_t t70 = 53099971;

	t70 = ((x325|x326)==(x327+x328));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x329 = INT16_MIN;
	int16_t x330 = INT16_MAX;
	static int64_t x332 = -1LL;

	t71 = ((x329|x330)==(x331+x332));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x334 = 12335289726908897LLU;
	uint64_t x335 = 29963092622LLU;
	volatile uint64_t x336 = 27LLU;

	t72 = ((x333|x334)==(x335+x336));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x337 = 7U;
	volatile int16_t x338 = -1;
	int64_t x339 = -4672LL;
	static volatile int32_t t73 = 9;

	t73 = ((x337|x338)==(x339+x340));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x341 = INT64_MAX;
	uint64_t x342 = 500218974950470LLU;
	static int32_t x344 = INT32_MIN;

	t74 = ((x341|x342)==(x343+x344));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x350 = INT64_MAX;
	int8_t x351 = -1;
	int64_t x352 = -1LL;
	volatile int32_t t75 = 2;

	t75 = ((x349|x350)==(x351+x352));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x354 = 435328105076922LL;
	uint32_t x355 = 7239U;
	volatile uint32_t x356 = 149223U;
	static volatile int32_t t76 = -2790;

	t76 = ((x353|x354)==(x355+x356));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x361 = INT16_MIN;
	static uint16_t x362 = 1754U;
	uint32_t x363 = 1791552U;
	uint64_t x364 = UINT64_MAX;
	int32_t t77 = -13;

	t77 = ((x361|x362)==(x363+x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile int64_t x366 = INT64_MAX;
	uint8_t x367 = 9U;

	t78 = ((x365|x366)==(x367+x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x370 = -220688;
	static int16_t x371 = 235;
	uint32_t x372 = UINT32_MAX;
	int32_t t79 = -9;

	t79 = ((x369|x370)==(x371+x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x373 = -101;
	uint32_t x375 = UINT32_MAX;
	int8_t x376 = INT8_MIN;
	volatile int32_t t80 = -971;

	t80 = ((x373|x374)==(x375+x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x378 = 439LLU;
	int64_t x379 = -1LL;
	static volatile uint64_t x380 = UINT64_MAX;
	volatile int32_t t81 = 1851;

	t81 = ((x377|x378)==(x379+x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x383 = 2;
	static uint8_t x384 = 1U;

	t82 = ((x381|x382)==(x383+x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = -1;
	uint16_t x386 = UINT16_MAX;
	int32_t x387 = INT32_MIN;
	int64_t x388 = -1LL;

	t83 = ((x385|x386)==(x387+x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x389 = -1;
	static uint8_t x390 = 1U;
	uint16_t x392 = 1U;
	int32_t t84 = 0;

	t84 = ((x389|x390)==(x391+x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = 3572U;
	volatile int16_t x399 = -130;
	volatile int8_t x400 = 17;
	int32_t t85 = -6482;

	t85 = ((x397|x398)==(x399+x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x401 = INT8_MIN;
	static uint8_t x402 = 61U;
	uint16_t x403 = 13033U;
	int64_t x404 = INT64_MIN;
	int32_t t86 = -20313;

	t86 = ((x401|x402)==(x403+x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x405 = 173473;
	static volatile int16_t x406 = -45;

	t87 = ((x405|x406)==(x407+x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x409 = INT64_MAX;
	int64_t x411 = 20645LL;
	int16_t x412 = 84;
	int32_t t88 = 4;

	t88 = ((x409|x410)==(x411+x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x417 = INT8_MIN;
	volatile uint16_t x418 = 2591U;
	int32_t x419 = INT32_MIN;
	uint64_t x420 = 25051LLU;
	volatile int32_t t89 = -227445785;

	t89 = ((x417|x418)==(x419+x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x421 = 30U;
	volatile uint32_t x422 = 1087U;
	static int16_t x423 = -1;
	int16_t x424 = INT16_MAX;

	t90 = ((x421|x422)==(x423+x424));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x425 = 175057LLU;
	volatile int16_t x426 = 31;
	uint32_t x428 = UINT32_MAX;

	t91 = ((x425|x426)==(x427+x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x429 = 2992154;
	int8_t x430 = -1;
	uint32_t x431 = 3264U;
	int16_t x432 = INT16_MIN;
	static int32_t t92 = 196047061;

	t92 = ((x429|x430)==(x431+x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	volatile uint32_t x436 = 43089639U;

	t93 = ((x433|x434)==(x435+x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x438 = INT64_MIN;
	volatile int8_t x440 = -1;
	volatile int32_t t94 = -105556500;

	t94 = ((x437|x438)==(x439+x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = INT16_MIN;
	int16_t x442 = 22;
	static int8_t x443 = -3;
	uint16_t x444 = UINT16_MAX;

	t95 = ((x441|x442)==(x443+x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x454 = 3280534715218533LLU;
	int16_t x456 = 3;
	static int32_t t96 = 450513697;

	t96 = ((x453|x454)==(x455+x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x457 = 5651594425LL;
	int32_t x458 = -101;
	volatile int16_t x460 = -1;
	int32_t t97 = 588;

	t97 = ((x457|x458)==(x459+x460));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x461 = 260018;
	static uint32_t x463 = 40311557U;
	int16_t x464 = -3;
	int32_t t98 = -41;

	t98 = ((x461|x462)==(x463+x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = -255422382528397596LL;
	uint16_t x466 = 3U;
	static uint16_t x468 = 0U;

	t99 = ((x465|x466)==(x467+x468));

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

