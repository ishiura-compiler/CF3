#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -4;
uint32_t x8 = 982U;
int8_t x9 = 15;
uint32_t t2 = 1522665242U;
uint64_t x25 = UINT64_MAX;
uint32_t x26 = 169U;
static int16_t x27 = -1;
volatile int8_t x30 = INT8_MIN;
static int16_t x32 = -1;
uint64_t t8 = 25LLU;
static int16_t x37 = -1;
int16_t x41 = INT16_MIN;
int32_t t10 = -1;
int16_t x57 = -1;
int32_t x58 = INT32_MAX;
volatile uint8_t x59 = UINT8_MAX;
volatile int32_t t12 = -219052;
volatile int16_t x62 = INT16_MIN;
int16_t x64 = INT16_MIN;
uint32_t x66 = 1985U;
uint32_t x69 = UINT32_MAX;
int64_t x71 = INT64_MAX;
int16_t x72 = INT16_MAX;
static uint64_t x75 = 106368876965262077LLU;
uint32_t x84 = UINT32_MAX;
volatile uint32_t x85 = UINT32_MAX;
int64_t x86 = INT64_MAX;
volatile int32_t t20 = -345790393;
uint8_t x94 = 0U;
int32_t x97 = INT32_MIN;
uint64_t x109 = 6604366LLU;
int8_t x122 = INT8_MIN;
volatile uint16_t x127 = 22346U;
uint32_t x134 = UINT32_MAX;
int64_t x139 = -48511380063759815LL;
volatile int64_t x145 = 460462686372LL;
volatile int32_t x146 = INT32_MAX;
static int64_t x156 = INT64_MIN;
volatile int32_t t37 = -219624;
static uint16_t x168 = 137U;
static int16_t x174 = INT16_MIN;
volatile int64_t t41 = 11258834383659528LL;
uint16_t x180 = UINT16_MAX;
int32_t x187 = INT32_MIN;
uint16_t x189 = UINT16_MAX;
int32_t t45 = 7570492;
int64_t x193 = -4216621133419LL;
int64_t t46 = 1655643254LL;
int32_t x199 = INT32_MIN;
int32_t x201 = 1915;
volatile uint64_t x206 = 9057LLU;
uint16_t x208 = 12037U;
int64_t t49 = -3082545LL;
int64_t x212 = -8491LL;
uint32_t x214 = 0U;
uint32_t x215 = UINT32_MAX;
int32_t t54 = -29;
volatile int8_t x230 = -2;
static int64_t x231 = INT64_MIN;
static uint32_t x235 = 46U;
static uint64_t t56 = 787074373LLU;
int32_t x238 = 2744;
volatile uint32_t x242 = 443167U;
uint64_t x247 = 1LLU;
static uint16_t x248 = UINT16_MAX;
volatile int64_t t60 = 24092402702LL;
static int32_t t63 = -3209503;
uint16_t x281 = 3292U;
static int16_t x282 = INT16_MIN;
uint64_t x284 = 21445384973849768LLU;
int32_t x293 = -1;
volatile uint64_t x295 = 18990432189LLU;
static int32_t x297 = INT32_MIN;
static int64_t x300 = INT64_MIN;
volatile int32_t x305 = 43;
uint16_t x309 = UINT16_MAX;
int8_t x312 = -1;
uint32_t x317 = UINT32_MAX;
int16_t x319 = INT16_MIN;
int64_t x320 = -2846578759LL;
uint32_t x334 = 49438279U;
volatile uint32_t t78 = 166698U;
int32_t t79 = -18864921;
volatile uint64_t x343 = 52196038907LLU;
int8_t x370 = INT8_MAX;
volatile uint16_t x377 = 831U;
int16_t x392 = INT16_MIN;
static int32_t x401 = -31;
uint32_t x404 = UINT32_MAX;
volatile uint8_t x408 = UINT8_MAX;
uint16_t x409 = UINT16_MAX;
static volatile int64_t x414 = INT64_MAX;
int16_t x421 = INT16_MIN;
static uint32_t t95 = 642918201U;
volatile uint64_t t98 = 136799LLU;
volatile uint32_t t99 = 183U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int64_t x2 = INT64_MIN;
	uint64_t x3 = 3195732722689LLU;
	volatile int32_t t0 = 87769;

	t0 = ((x1+(x2<x3))/x4);

	if (t0 != -16383) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -41;
	static int16_t x6 = INT16_MIN;
	static uint64_t x7 = 2802214595528LLU;
	volatile uint32_t t1 = 159442U;

	t1 = ((x5+(x6<x7))/x8);

	if (t1 != 4373693U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int64_t x11 = INT64_MAX;
	uint32_t x12 = UINT32_MAX;

	t2 = ((x9+(x10<x11))/x12);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int32_t x14 = -1;
	uint8_t x15 = 0U;
	static int64_t x16 = INT64_MIN;
	int64_t t3 = 537289506162485LL;

	t3 = ((x13+(x14<x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -23942;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = UINT8_MAX;
	static int8_t x20 = -1;
	volatile int32_t t4 = -1;

	t4 = ((x17+(x18<x19))/x20);

	if (t4 != 23941) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int64_t x22 = 438291942943185602LL;
	static uint32_t x23 = UINT32_MAX;
	uint8_t x24 = 5U;
	volatile int32_t t5 = 127259;

	t5 = ((x21+(x22<x23))/x24);

	if (t5 != -6553) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x28 = 1318U;
	volatile uint64_t t6 = 281486LLU;

	t6 = ((x25+(x26<x27))/x28);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x29 = 939633359U;
	int8_t x31 = 0;
	uint32_t t7 = 5711U;

	t7 = ((x29+(x30<x31))/x32);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	static int32_t x34 = -7;
	uint8_t x35 = 5U;
	uint64_t x36 = UINT64_MAX;

	t8 = ((x33+(x34<x35))/x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MIN;
	volatile int32_t x39 = INT32_MAX;
	int32_t x40 = -933033097;
	int32_t t9 = -30339121;

	t9 = ((x37+(x38<x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x42 = -1;
	uint64_t x43 = 981586879153966518LLU;
	uint8_t x44 = 2U;

	t10 = ((x41+(x42<x43))/x44);

	if (t10 != -16384) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	uint64_t x46 = 661875555281542LLU;
	uint16_t x47 = 12U;
	int16_t x48 = -59;
	static int64_t t11 = -58423565444823196LL;

	t11 = ((x45+(x46<x47))/x48);

	if (t11 != -156328339607708064LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x60 = UINT8_MAX;

	t12 = ((x57+(x58<x59))/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x63 = INT16_MIN;
	uint64_t t13 = 18858324238759LLU;

	t13 = ((x61+(x62<x63))/x64);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x65 = 1;
	static int64_t x67 = INT64_MIN;
	uint16_t x68 = 782U;
	int32_t t14 = 292;

	t14 = ((x65+(x66<x67))/x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x70 = 3;
	static volatile uint32_t t15 = 27U;

	t15 = ((x69+(x70<x71))/x72);

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	uint16_t x74 = UINT16_MAX;
	int8_t x76 = 1;
	static volatile int32_t t16 = 0;

	t16 = ((x73+(x74<x75))/x76);

	if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 4744U;
	volatile uint8_t x78 = 0U;
	int32_t x79 = -1;
	static uint64_t x80 = UINT64_MAX;
	static uint64_t t17 = 6LLU;

	t17 = ((x77+(x78<x79))/x80);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	uint64_t x82 = 1820569872100671LLU;
	static uint8_t x83 = 1U;
	uint32_t t18 = 1093892924U;

	t18 = ((x81+(x82<x83))/x84);

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x87 = -11;
	uint16_t x88 = UINT16_MAX;
	volatile uint32_t t19 = 1018252979U;

	t19 = ((x85+(x86<x87))/x88);

	if (t19 != 65537U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MAX;
	static int64_t x90 = -43190435792LL;
	int32_t x91 = -6355981;
	int32_t x92 = INT32_MAX;

	t20 = ((x89+(x90<x91))/x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = INT32_MIN;
	int16_t x95 = -1;
	uint32_t x96 = 214266938U;
	uint32_t t21 = 11476566U;

	t21 = ((x93+(x94<x95))/x96);

	if (t21 != 10U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 6397311LLU;
	int8_t x100 = INT8_MIN;
	int32_t t22 = -42537;

	t22 = ((x97+(x98<x99))/x100);

	if (t22 != 16777215) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x101 = 7;
	int8_t x102 = -6;
	uint16_t x103 = UINT16_MAX;
	uint16_t x104 = UINT16_MAX;
	int32_t t23 = -1577197;

	t23 = ((x101+(x102<x103))/x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x105 = UINT16_MAX;
	volatile int16_t x106 = INT16_MIN;
	int32_t x107 = -238249;
	int32_t x108 = -1;
	static volatile int32_t t24 = 53072692;

	t24 = ((x105+(x106<x107))/x108);

	if (t24 != -65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x110 = 39U;
	int64_t x111 = 4540909103LL;
	int64_t x112 = -7778088876LL;
	uint64_t t25 = 2176491LLU;

	t25 = ((x109+(x110<x111))/x112);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x113 = -21;
	static int32_t x114 = INT32_MIN;
	volatile int32_t x115 = -8385892;
	int32_t x116 = INT32_MIN;
	int32_t t26 = 2;

	t26 = ((x113+(x114<x115))/x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x117 = 30U;
	int8_t x118 = -1;
	int16_t x119 = INT16_MAX;
	int32_t x120 = 17919581;
	volatile int32_t t27 = 1408;

	t27 = ((x117+(x118<x119))/x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x121 = -1;
	uint64_t x123 = UINT64_MAX;
	static uint32_t x124 = UINT32_MAX;
	uint32_t t28 = 20681U;

	t28 = ((x121+(x122<x123))/x124);

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	volatile int64_t x126 = INT64_MIN;
	volatile int64_t x128 = -1LL;
	volatile int64_t t29 = -12577537LL;

	t29 = ((x125+(x126<x127))/x128);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = INT32_MIN;
	int32_t x130 = INT32_MIN;
	uint16_t x131 = 171U;
	volatile int16_t x132 = -9;
	int32_t t30 = -2381;

	t30 = ((x129+(x130<x131))/x132);

	if (t30 != 238609294) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x133 = -7668720874LL;
	volatile int64_t x135 = -7632889LL;
	int32_t x136 = INT32_MIN;
	int64_t t31 = 1LL;

	t31 = ((x133+(x134<x135))/x136);

	if (t31 != 3LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MAX;
	volatile int8_t x140 = 12;
	int32_t t32 = -684;

	t32 = ((x137+(x138<x139))/x140);

	if (t32 != 10) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -59;
	uint8_t x142 = 15U;
	uint16_t x143 = 470U;
	int16_t x144 = 5;
	volatile int32_t t33 = 63878053;

	t33 = ((x141+(x142<x143))/x144);

	if (t33 != -11) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x147 = INT16_MAX;
	int8_t x148 = 20;
	static volatile int64_t t34 = 41045542650220774LL;

	t34 = ((x145+(x146<x147))/x148);

	if (t34 != 23023134318LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MAX;
	volatile int32_t x150 = INT32_MAX;
	volatile int64_t x151 = INT64_MIN;
	uint64_t x152 = UINT64_MAX;
	uint64_t t35 = 510620027424LLU;

	t35 = ((x149+(x150<x151))/x152);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x153 = 24923925U;
	uint16_t x154 = 17U;
	static int16_t x155 = -1;
	static volatile int64_t t36 = 148099686658553288LL;

	t36 = ((x153+(x154<x155))/x156);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x157 = 1;
	uint16_t x158 = 19083U;
	static int32_t x159 = INT32_MIN;
	int8_t x160 = -3;

	t37 = ((x157+(x158<x159))/x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x161 = -3964033LL;
	int8_t x162 = 28;
	volatile int8_t x163 = 15;
	int16_t x164 = INT16_MAX;
	int64_t t38 = 1618LL;

	t38 = ((x161+(x162<x163))/x164);

	if (t38 != -120LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = -1;
	static int64_t x166 = INT64_MIN;
	uint32_t x167 = 319821U;
	static int32_t t39 = -2075910;

	t39 = ((x165+(x166<x167))/x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = INT64_MIN;
	uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MAX;
	static int64_t t40 = 7882475082LL;

	t40 = ((x169+(x170<x171))/x172);

	if (t40 != -281483566907400LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	uint16_t x175 = 20U;
	int32_t x176 = INT32_MAX;

	t41 = ((x173+(x174<x175))/x176);

	if (t41 != -4294967298LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -2052;
	int16_t x178 = INT16_MIN;
	int16_t x179 = -16321;
	volatile int32_t t42 = 13600;

	t42 = ((x177+(x178<x179))/x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = INT16_MIN;
	volatile int32_t x182 = 3062630;
	volatile int8_t x183 = INT8_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	uint64_t t43 = 8938278687642952041LLU;

	t43 = ((x181+(x182<x183))/x184);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -1;
	int16_t x186 = INT16_MIN;
	int8_t x188 = INT8_MIN;
	volatile int32_t t44 = -2;

	t44 = ((x185+(x186<x187))/x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x190 = UINT8_MAX;
	volatile uint8_t x191 = 5U;
	uint8_t x192 = 8U;

	t45 = ((x189+(x190<x191))/x192);

	if (t45 != 8191) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x194 = UINT32_MAX;
	uint64_t x195 = UINT64_MAX;
	int8_t x196 = -1;

	t46 = ((x193+(x194<x195))/x196);

	if (t46 != 4216621133418LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x197 = 17549U;
	static int16_t x198 = INT16_MIN;
	uint16_t x200 = 592U;
	static uint32_t t47 = 0U;

	t47 = ((x197+(x198<x199))/x200);

	if (t47 != 29U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MIN;
	int64_t x204 = -776016718611168LL;
	volatile int64_t t48 = 11242LL;

	t48 = ((x201+(x202<x203))/x204);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x205 = -13LL;
	uint8_t x207 = 5U;

	t49 = ((x205+(x206<x207))/x208);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x209 = INT16_MAX;
	int32_t x210 = INT32_MIN;
	static volatile uint8_t x211 = UINT8_MAX;
	int64_t t50 = 305665724786LL;

	t50 = ((x209+(x210<x211))/x212);

	if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x213 = INT64_MIN;
	uint8_t x216 = 4U;
	volatile int64_t t51 = -1477424875842LL;

	t51 = ((x213+(x214<x215))/x216);

	if (t51 != -2305843009213693951LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x217 = -1LL;
	static int8_t x218 = INT8_MAX;
	int32_t x219 = INT32_MIN;
	int32_t x220 = -8382667;
	volatile int64_t t52 = -15140768055504LL;

	t52 = ((x217+(x218<x219))/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x221 = UINT8_MAX;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	static uint8_t x224 = UINT8_MAX;
	static volatile int32_t t53 = -519123549;

	t53 = ((x221+(x222<x223))/x224);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = -1;
	int64_t x226 = 7LL;
	uint16_t x227 = UINT16_MAX;
	static int16_t x228 = -1;

	t54 = ((x225+(x226<x227))/x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x229 = INT8_MIN;
	uint32_t x232 = 690U;
	volatile uint32_t t55 = 1313754921U;

	t55 = ((x229+(x230<x231))/x232);

	if (t55 != 6224590U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x233 = 13U;
	int32_t x234 = -1;
	uint64_t x236 = 111460005152LLU;

	t56 = ((x233+(x234<x235))/x236);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = -19619;
	volatile int64_t x239 = 3369LL;
	uint64_t x240 = 552LLU;
	volatile uint64_t t57 = 7063723937408LLU;

	t57 = ((x237+(x238<x239))/x240);

	if (t57 != 33418014626285384LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x241 = -111;
	static int64_t x243 = INT64_MAX;
	uint32_t x244 = UINT32_MAX;
	static uint32_t t58 = 270676178U;

	t58 = ((x241+(x242<x243))/x244);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = -4980;
	int16_t x246 = INT16_MIN;
	static volatile int32_t t59 = -46562;

	t59 = ((x245+(x246<x247))/x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = 11009008LL;
	static int16_t x250 = INT16_MIN;
	int32_t x251 = INT32_MAX;
	int32_t x252 = 22328;

	t60 = ((x249+(x250<x251))/x252);

	if (t60 != 493LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MIN;
	int64_t x255 = INT64_MAX;
	static int32_t x256 = INT32_MIN;
	volatile int32_t t61 = -24557;

	t61 = ((x253+(x254<x255))/x256);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x257 = 8U;
	int16_t x258 = -5;
	uint32_t x259 = UINT32_MAX;
	uint16_t x260 = 527U;
	int32_t t62 = -3439;

	t62 = ((x257+(x258<x259))/x260);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	int8_t x267 = 1;
	static int8_t x268 = INT8_MAX;

	t63 = ((x265+(x266<x267))/x268);

	if (t63 != 516) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x269 = UINT64_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x271 = INT32_MIN;
	int8_t x272 = INT8_MAX;
	static uint64_t t64 = 1LLU;

	t64 = ((x269+(x270<x271))/x272);

	if (t64 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = 1;
	volatile int32_t x274 = 267531940;
	int16_t x275 = 2664;
	uint32_t x276 = 500946U;
	volatile uint32_t t65 = 1874730U;

	t65 = ((x273+(x274<x275))/x276);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x283 = 9U;
	volatile uint64_t t66 = 211459LLU;

	t66 = ((x281+(x282<x283))/x284);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	int8_t x286 = INT8_MIN;
	int64_t x287 = -14636310LL;
	int64_t x288 = INT64_MIN;
	volatile int64_t t67 = 520356585242LL;

	t67 = ((x285+(x286<x287))/x288);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x289 = UINT8_MAX;
	int8_t x290 = INT8_MIN;
	int16_t x291 = -1;
	volatile uint8_t x292 = UINT8_MAX;
	int32_t t68 = -29;

	t68 = ((x289+(x290<x291))/x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x294 = 1575239LLU;
	int8_t x296 = -1;
	static volatile int32_t t69 = 824101612;

	t69 = ((x293+(x294<x295))/x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x298 = -1;
	static volatile int16_t x299 = -22;
	volatile int64_t t70 = 35436208LL;

	t70 = ((x297+(x298<x299))/x300);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x301 = 3746LL;
	uint16_t x302 = 24U;
	uint32_t x303 = 318405U;
	int32_t x304 = 18603736;
	int64_t t71 = 4793861606LL;

	t71 = ((x301+(x302<x303))/x304);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x306 = -754;
	int64_t x307 = INT64_MIN;
	volatile int16_t x308 = INT16_MAX;
	int32_t t72 = -360315616;

	t72 = ((x305+(x306<x307))/x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	int32_t t73 = 340;

	t73 = ((x309+(x310<x311))/x312);

	if (t73 != -65535) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x313 = 51U;
	static uint8_t x314 = UINT8_MAX;
	int32_t x315 = INT32_MIN;
	uint16_t x316 = UINT16_MAX;
	volatile int32_t t74 = 14667;

	t74 = ((x313+(x314<x315))/x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x318 = INT8_MIN;
	int64_t t75 = 0LL;

	t75 = ((x317+(x318<x319))/x320);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = 54;
	static uint32_t x326 = 4058U;
	uint64_t x327 = 2LLU;
	int64_t x328 = -996180844897581LL;
	int64_t t76 = 30559079165382LL;

	t76 = ((x325+(x326<x327))/x328);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x329 = INT8_MAX;
	int32_t x330 = INT32_MIN;
	static volatile uint64_t x331 = UINT64_MAX;
	volatile int8_t x332 = -7;
	volatile int32_t t77 = 1;

	t77 = ((x329+(x330<x331))/x332);

	if (t77 != -18) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x333 = 0;
	volatile int16_t x335 = INT16_MIN;
	uint32_t x336 = UINT32_MAX;

	t78 = ((x333+(x334<x335))/x336);

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MAX;
	int64_t x338 = INT64_MIN;
	static int32_t x339 = 47103;
	int8_t x340 = INT8_MIN;

	t79 = ((x337+(x338<x339))/x340);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x341 = -1;
	uint16_t x342 = 55U;
	static int8_t x344 = INT8_MAX;
	int32_t t80 = 1;

	t80 = ((x341+(x342<x343))/x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x345 = 1;
	int16_t x346 = INT16_MIN;
	static int64_t x347 = -1LL;
	int8_t x348 = -1;
	int32_t t81 = -1;

	t81 = ((x345+(x346<x347))/x348);

	if (t81 != -2) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	uint64_t x350 = UINT64_MAX;
	int64_t x351 = 14252056856LL;
	int32_t x352 = 34481253;
	volatile int32_t t82 = -3;

	t82 = ((x349+(x350<x351))/x352);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MAX;
	uint16_t x358 = 381U;
	int32_t x359 = -1;
	int16_t x360 = -1;
	int32_t t83 = 2845;

	t83 = ((x357+(x358<x359))/x360);

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x365 = 4432U;
	static int32_t x366 = INT32_MIN;
	uint8_t x367 = 5U;
	int16_t x368 = 14;
	volatile int32_t t84 = 9861295;

	t84 = ((x365+(x366<x367))/x368);

	if (t84 != 316) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x369 = UINT16_MAX;
	int64_t x371 = -6116426131298LL;
	uint32_t x372 = 640255U;
	volatile uint32_t t85 = 245006U;

	t85 = ((x369+(x370<x371))/x372);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x373 = 0;
	volatile int8_t x374 = INT8_MAX;
	static int64_t x375 = -219073623360LL;
	volatile uint32_t x376 = 2245949U;
	uint32_t t86 = 117292262U;

	t86 = ((x373+(x374<x375))/x376);

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int16_t x380 = -1;
	int32_t t87 = -216097357;

	t87 = ((x377+(x378<x379))/x380);

	if (t87 != -831) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x381 = UINT32_MAX;
	uint16_t x382 = 2U;
	int32_t x383 = INT32_MIN;
	volatile uint64_t x384 = UINT64_MAX;
	volatile uint64_t t88 = 49723LLU;

	t88 = ((x381+(x382<x383))/x384);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = INT16_MAX;
	uint32_t x390 = UINT32_MAX;
	uint32_t x391 = 4U;
	int32_t t89 = 0;

	t89 = ((x389+(x390<x391))/x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 33U;
	int8_t x394 = INT8_MIN;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MIN;
	int32_t t90 = 337961;

	t90 = ((x393+(x394<x395))/x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x402 = INT8_MIN;
	static uint64_t x403 = UINT64_MAX;
	uint32_t t91 = 20394U;

	t91 = ((x401+(x402<x403))/x404);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = 1313U;
	int32_t x406 = -47;
	int16_t x407 = -9064;
	volatile int32_t t92 = -1;

	t92 = ((x405+(x406<x407))/x408);

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x410 = 31U;
	int32_t x411 = INT32_MIN;
	volatile int32_t x412 = INT32_MIN;
	int32_t t93 = 12;

	t93 = ((x409+(x410<x411))/x412);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x413 = 1U;
	volatile int8_t x415 = INT8_MAX;
	int8_t x416 = INT8_MAX;
	static volatile int32_t t94 = -816247;

	t94 = ((x413+(x414<x415))/x416);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x422 = 10284U;
	uint16_t x423 = 20U;
	uint32_t x424 = 122235157U;

	t95 = ((x421+(x422<x423))/x424);

	if (t95 != 35U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x425 = 719825821LLU;
	uint32_t x426 = UINT32_MAX;
	volatile int64_t x427 = INT64_MAX;
	uint16_t x428 = 23U;
	volatile uint64_t t96 = 8487918012LLU;

	t96 = ((x425+(x426<x427))/x428);

	if (t96 != 31296774LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = 30436LLU;
	int16_t x434 = -1;
	volatile int64_t x435 = INT64_MIN;
	int32_t x436 = INT32_MIN;
	static uint64_t t97 = 6155LLU;

	t97 = ((x433+(x434<x435))/x436);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x437 = 0U;
	int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MAX;
	uint64_t x440 = UINT64_MAX;

	t98 = ((x437+(x438<x439))/x440);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x441 = INT16_MIN;
	volatile uint8_t x442 = UINT8_MAX;
	volatile uint16_t x443 = UINT16_MAX;
	static volatile uint32_t x444 = UINT32_MAX;

	t99 = ((x441+(x442<x443))/x444);

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

