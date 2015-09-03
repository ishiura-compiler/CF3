#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 27;
static int32_t t2 = 22;
static int32_t x25 = INT32_MAX;
static int8_t x31 = INT8_MIN;
int32_t t7 = -839756;
int8_t x37 = INT8_MIN;
volatile uint8_t x46 = 1U;
static volatile int32_t t11 = 0;
int16_t x50 = INT16_MIN;
static int32_t t12 = -466762;
uint32_t x60 = 47335725U;
static int8_t x65 = -3;
static int32_t t16 = -192176;
static volatile uint32_t x71 = 1922U;
int32_t t17 = 3349007;
int8_t x75 = INT8_MIN;
int32_t t18 = 12;
uint32_t x77 = 6165U;
int16_t x79 = INT16_MIN;
uint8_t x80 = 0U;
static int64_t x81 = -1LL;
volatile int8_t x85 = 1;
static int32_t t23 = 14520;
int64_t x98 = INT64_MIN;
int64_t x106 = -1LL;
int32_t x109 = -1;
int32_t t28 = -2311;
int8_t x118 = 31;
uint32_t x119 = UINT32_MAX;
volatile int16_t x127 = INT16_MAX;
int8_t x129 = INT8_MIN;
static volatile int8_t x136 = -1;
volatile int32_t t33 = 34726;
uint64_t x138 = 359641LLU;
int32_t t35 = -45248582;
volatile int32_t x145 = -1;
static int32_t x151 = INT32_MIN;
int8_t x152 = INT8_MAX;
static uint8_t x156 = 0U;
int64_t x161 = -73103296105775060LL;
int32_t t41 = 0;
int32_t t42 = 482;
volatile int8_t x174 = INT8_MAX;
volatile int32_t t44 = -17;
static uint64_t x181 = 771687516777020051LLU;
int32_t t46 = -548;
int16_t x191 = INT16_MIN;
volatile int32_t t47 = 0;
int32_t x194 = 11069;
int32_t x196 = INT32_MAX;
int32_t x199 = INT32_MIN;
int32_t t49 = -1031582522;
uint32_t x202 = UINT32_MAX;
volatile int32_t t50 = 6674155;
uint16_t x205 = 3U;
volatile int8_t x206 = 5;
static volatile int16_t x210 = INT16_MIN;
int32_t x214 = INT32_MAX;
static int16_t x219 = INT16_MIN;
volatile uint64_t x222 = 9185464374383LLU;
static int16_t x228 = INT16_MIN;
uint8_t x236 = UINT8_MAX;
volatile int32_t t58 = 49;
volatile int32_t t59 = 830683420;
volatile int32_t t61 = -1063716;
int64_t x249 = INT64_MIN;
int32_t x253 = INT32_MIN;
static int8_t x257 = 5;
uint8_t x263 = 3U;
int32_t t65 = -2654555;
volatile int16_t x265 = -1;
int32_t x268 = INT32_MIN;
int64_t x280 = -1LL;
int16_t x282 = INT16_MIN;
static volatile int16_t x289 = INT16_MIN;
volatile int32_t t73 = 936;
int8_t x305 = INT8_MAX;
int8_t x308 = INT8_MAX;
int8_t x309 = INT8_MIN;
volatile int32_t x318 = INT32_MIN;
volatile int32_t t79 = -3540094;
static int16_t x322 = -6;
volatile uint16_t x323 = UINT16_MAX;
int64_t x328 = 387812LL;
static volatile uint64_t x333 = 116710143477361LLU;
volatile int32_t x338 = INT32_MAX;
int16_t x342 = -1;
int64_t x343 = -117LL;
volatile int8_t x347 = INT8_MAX;
int8_t x348 = -1;
int32_t x370 = INT32_MIN;
uint64_t x371 = 3029477LLU;
int8_t x374 = -1;
uint64_t x379 = 1628971876095678LLU;
uint64_t x380 = UINT64_MAX;
int8_t x387 = -1;
static uint8_t x394 = 4U;
uint32_t x400 = 0U;


void f0(void) {
	uint8_t x1 = 11U;
	int8_t x2 = INT8_MAX;
	uint16_t x3 = 7U;
	int32_t x4 = -1;
	volatile int32_t t0 = -38047161;

	t0 = (x1==((x2<x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	int64_t x7 = INT64_MIN;
	int64_t x8 = 2LL;
	volatile int32_t t1 = -26082618;

	t1 = (x5==((x6<x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 18136U;
	int8_t x10 = INT8_MAX;
	static int16_t x11 = INT16_MIN;
	static volatile int32_t x12 = INT32_MIN;

	t2 = (x9==((x10<x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 0;
	int8_t x14 = INT8_MAX;
	int32_t x15 = -1;
	uint32_t x16 = 97U;
	static int32_t t3 = -31184;

	t3 = (x13==((x14<x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	static int8_t x18 = INT8_MIN;
	uint16_t x19 = 7883U;
	static uint32_t x20 = UINT32_MAX;
	volatile int32_t t4 = -7660930;

	t4 = (x17==((x18<x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MAX;
	volatile int64_t x22 = INT64_MIN;
	int32_t x23 = INT32_MIN;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -517331;

	t5 = (x21==((x22<x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	static uint32_t x27 = 4600U;
	int16_t x28 = -91;
	int32_t t6 = 66;

	t6 = (x25==((x26<x27)|x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint8_t x29 = 1U;
	int16_t x30 = INT16_MIN;
	static uint32_t x32 = 39396749U;

	t7 = (x29==((x30<x31)|x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int64_t x34 = -1LL;
	static int8_t x35 = INT8_MIN;
	uint16_t x36 = 2U;
	int32_t t8 = -1661;

	t8 = (x33==((x34<x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;
	int32_t x39 = INT32_MAX;
	uint64_t x40 = 670342322861LLU;
	int32_t t9 = -27678961;

	t9 = (x37==((x38<x39)|x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1484;
	int32_t x42 = -39;
	uint64_t x43 = 14148513695100532LLU;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = -153301104;

	t10 = (x41==((x42<x43)|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 15569U;
	volatile int64_t x47 = INT64_MIN;
	int32_t x48 = INT32_MIN;

	t11 = (x45==((x46<x47)|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int32_t x51 = INT32_MAX;
	int32_t x52 = -1;

	t12 = (x49==((x50<x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x53 = INT8_MIN;
	static uint8_t x54 = UINT8_MAX;
	int16_t x55 = INT16_MIN;
	uint32_t x56 = 89U;
	int32_t t13 = 1;

	t13 = (x53==((x54<x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = INT32_MAX;
	int32_t x58 = INT32_MIN;
	uint8_t x59 = 1U;
	int32_t t14 = -7139;

	t14 = (x57==((x58<x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x61 = 1U;
	uint32_t x62 = UINT32_MAX;
	int64_t x63 = -1LL;
	uint16_t x64 = 592U;
	int32_t t15 = -9554896;

	t15 = (x61==((x62<x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MIN;
	int64_t x67 = INT64_MIN;
	uint64_t x68 = UINT64_MAX;

	t16 = (x65==((x66<x67)|x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MIN;
	uint16_t x70 = UINT16_MAX;
	int64_t x72 = -1LL;

	t17 = (x69==((x70<x71)|x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -119178815627466446LL;
	static int8_t x74 = INT8_MAX;
	uint16_t x76 = 91U;

	t18 = (x73==((x74<x75)|x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x78 = INT32_MIN;
	int32_t t19 = 1;

	t19 = (x77==((x78<x79)|x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x82 = 121381U;
	int16_t x83 = 1;
	int16_t x84 = -182;
	volatile int32_t t20 = 1;

	t20 = (x81==((x82<x83)|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = UINT64_MAX;
	int64_t x87 = 0LL;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = -1326;

	t21 = (x85==((x86<x87)|x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 1131U;
	int32_t x90 = INT32_MIN;
	int8_t x91 = INT8_MAX;
	static int32_t x92 = INT32_MIN;
	int32_t t22 = -5975;

	t22 = (x89==((x90<x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 27514762LLU;
	int16_t x94 = INT16_MIN;
	int64_t x95 = 1885276338679323047LL;
	volatile uint64_t x96 = 5246333LLU;

	t23 = (x93==((x94<x95)|x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	int16_t x99 = 495;
	volatile int32_t x100 = -171;
	volatile int32_t t24 = 53;

	t24 = (x97==((x98<x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = UINT32_MAX;
	int8_t x102 = -1;
	static volatile int64_t x103 = INT64_MAX;
	int8_t x104 = -1;
	volatile int32_t t25 = -1161;

	t25 = (x101==((x102<x103)|x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = -7493184041LL;
	static uint16_t x107 = 19U;
	static volatile int64_t x108 = -29906LL;
	int32_t t26 = -74;

	t26 = (x105==((x106<x107)|x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x110 = 443230928060887LLU;
	static int32_t x111 = INT32_MIN;
	int32_t x112 = INT32_MAX;
	int32_t t27 = 174333401;

	t27 = (x109==((x110<x111)|x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -242389LL;
	int8_t x114 = INT8_MIN;
	uint8_t x115 = UINT8_MAX;
	uint32_t x116 = UINT32_MAX;

	t28 = (x113==((x114<x115)|x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -1;
	volatile uint32_t x120 = 13272U;
	static volatile int32_t t29 = 533932970;

	t29 = (x117==((x118<x119)|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 195742021U;
	uint32_t x122 = 97U;
	uint8_t x123 = 1U;
	uint8_t x124 = 13U;
	int32_t t30 = -56562;

	t30 = (x121==((x122<x123)|x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -1LL;
	int32_t x126 = INT32_MIN;
	static volatile int8_t x128 = INT8_MIN;
	int32_t t31 = -1;

	t31 = (x125==((x126<x127)|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x130 = 10646555LLU;
	int16_t x131 = 7;
	uint32_t x132 = 779U;
	static int32_t t32 = 19244137;

	t32 = (x129==((x130<x131)|x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 11027721158298095LLU;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = -7473;

	t33 = (x133==((x134<x135)|x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	int32_t x139 = -1;
	uint32_t x140 = 796697602U;
	static int32_t t34 = 866334;

	t34 = (x137==((x138<x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 191LLU;
	int8_t x142 = INT8_MIN;
	static int64_t x143 = -58LL;
	uint32_t x144 = UINT32_MAX;

	t35 = (x141==((x142<x143)|x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -1;
	volatile int64_t x147 = INT64_MIN;
	static int16_t x148 = INT16_MIN;
	int32_t t36 = 0;

	t36 = (x145==((x146<x147)|x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 43U;
	uint16_t x150 = 90U;
	int32_t t37 = 35;

	t37 = (x149==((x150<x151)|x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 16598141309618616LLU;
	static int32_t t38 = 86690777;

	t38 = (x153==((x154<x155)|x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x157 = 211U;
	uint64_t x158 = UINT64_MAX;
	uint8_t x159 = 1U;
	volatile int8_t x160 = INT8_MAX;
	volatile int32_t t39 = 1;

	t39 = (x157==((x158<x159)|x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x162 = -18357;
	uint64_t x163 = UINT64_MAX;
	volatile int16_t x164 = INT16_MIN;
	volatile int32_t t40 = 993;

	t40 = (x161==((x162<x163)|x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MIN;
	volatile int32_t x167 = -1;
	int64_t x168 = -1LL;

	t41 = (x165==((x166<x167)|x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 57U;
	volatile int16_t x170 = INT16_MAX;
	uint8_t x171 = UINT8_MAX;
	uint8_t x172 = 4U;

	t42 = (x169==((x170<x171)|x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x173 = INT64_MIN;
	uint64_t x175 = 128910LLU;
	volatile int32_t x176 = -1;
	volatile int32_t t43 = 13895;

	t43 = (x173==((x174<x175)|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -1LL;
	int32_t x178 = INT32_MAX;
	static int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;

	t44 = (x177==((x178<x179)|x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MIN;
	int64_t x183 = -1LL;
	static uint32_t x184 = UINT32_MAX;
	volatile int32_t t45 = 365823341;

	t45 = (x181==((x182<x183)|x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	int32_t x186 = INT32_MIN;
	static int8_t x187 = INT8_MIN;
	int8_t x188 = 5;

	t46 = (x185==((x186<x187)|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	static volatile uint16_t x190 = 1321U;
	volatile int32_t x192 = -1;

	t47 = (x189==((x190<x191)|x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = 40U;
	static int32_t x195 = -2042;
	static volatile int32_t t48 = 1;

	t48 = (x193==((x194<x195)|x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 37U;
	int16_t x198 = 796;
	volatile int8_t x200 = -1;

	t49 = (x197==((x198<x199)|x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	static int8_t x203 = INT8_MIN;
	static volatile uint8_t x204 = UINT8_MAX;

	t50 = (x201==((x202<x203)|x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x207 = INT16_MIN;
	static uint16_t x208 = UINT16_MAX;
	int32_t t51 = 836356830;

	t51 = (x205==((x206<x207)|x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int16_t x211 = INT16_MIN;
	int32_t x212 = 0;
	volatile int32_t t52 = 75192546;

	t52 = (x209==((x210<x211)|x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x215 = 1U;
	volatile int16_t x216 = -6;
	int32_t t53 = 11;

	t53 = (x213==((x214<x215)|x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = 1936;
	static int32_t x218 = INT32_MIN;
	uint8_t x220 = 0U;
	int32_t t54 = -46;

	t54 = (x217==((x218<x219)|x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = 206907327;
	static int8_t x223 = INT8_MIN;
	uint8_t x224 = 47U;
	volatile int32_t t55 = 1;

	t55 = (x221==((x222<x223)|x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = 6622427722769470016LLU;
	uint32_t x226 = UINT32_MAX;
	uint32_t x227 = 2795U;
	volatile int32_t t56 = 2;

	t56 = (x225==((x226<x227)|x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = 503064830493092LL;
	static int8_t x230 = 14;
	int8_t x231 = INT8_MIN;
	volatile int16_t x232 = 141;
	volatile int32_t t57 = -9225942;

	t57 = (x229==((x230<x231)|x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 9U;
	uint32_t x234 = 3U;
	static volatile int16_t x235 = -109;

	t58 = (x233==((x234<x235)|x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -1140331161986529LL;
	int16_t x238 = 272;
	volatile int16_t x239 = INT16_MAX;
	static int64_t x240 = INT64_MIN;

	t59 = (x237==((x238<x239)|x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x242 = -1;
	volatile int64_t x243 = INT64_MAX;
	uint16_t x244 = 1880U;
	static volatile int32_t t60 = 24;

	t60 = (x241==((x242<x243)|x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -1;
	uint8_t x246 = UINT8_MAX;
	int8_t x247 = 1;
	static int16_t x248 = 393;

	t61 = (x245==((x246<x247)|x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x250 = 3287U;
	int8_t x251 = 1;
	static uint32_t x252 = 4U;
	static volatile int32_t t62 = -25609;

	t62 = (x249==((x250<x251)|x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	int8_t x255 = INT8_MAX;
	uint8_t x256 = 119U;
	int32_t t63 = 564;

	t63 = (x253==((x254<x255)|x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MIN;
	volatile uint64_t x259 = 6865LLU;
	int64_t x260 = INT64_MAX;
	int32_t t64 = 467994;

	t64 = (x257==((x258<x259)|x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x262 = 0LLU;
	int16_t x264 = INT16_MIN;

	t65 = (x261==((x262<x263)|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = 7;
	int8_t x267 = INT8_MIN;
	int32_t t66 = -7217;

	t66 = (x265==((x266<x267)|x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x269 = 1069LLU;
	uint64_t x270 = 13806552450727751LLU;
	static volatile uint64_t x271 = 749297065100769205LLU;
	static uint8_t x272 = UINT8_MAX;
	volatile int32_t t67 = 65;

	t67 = (x269==((x270<x271)|x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MIN;
	uint8_t x275 = UINT8_MAX;
	int32_t x276 = -498792705;
	volatile int32_t t68 = -58548;

	t68 = (x273==((x274<x275)|x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int32_t x278 = 1;
	int16_t x279 = INT16_MIN;
	int32_t t69 = -7;

	t69 = (x277==((x278<x279)|x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	static int16_t x283 = INT16_MAX;
	int8_t x284 = 0;
	volatile int32_t t70 = -1;

	t70 = (x281==((x282<x283)|x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int64_t x286 = 2468090293418644821LL;
	volatile uint32_t x287 = 1014U;
	int64_t x288 = -269313472693154LL;
	volatile int32_t t71 = -247;

	t71 = (x285==((x286<x287)|x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x290 = 548U;
	static int32_t x291 = INT32_MAX;
	static int64_t x292 = INT64_MAX;
	static int32_t t72 = 36817;

	t72 = (x289==((x290<x291)|x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	int8_t x294 = 10;
	volatile int64_t x295 = INT64_MAX;
	uint16_t x296 = UINT16_MAX;

	t73 = (x293==((x294<x295)|x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x297 = -47;
	static int32_t x298 = 8773;
	static int8_t x299 = 2;
	volatile int16_t x300 = INT16_MIN;
	int32_t t74 = 2560;

	t74 = (x297==((x298<x299)|x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = 100967299748441371LL;
	int16_t x302 = 11;
	int64_t x303 = -1LL;
	uint8_t x304 = 95U;
	volatile int32_t t75 = 977311407;

	t75 = (x301==((x302<x303)|x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	uint8_t x307 = 6U;
	volatile int32_t t76 = -2994;

	t76 = (x305==((x306<x307)|x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = UINT32_MAX;
	int16_t x311 = INT16_MAX;
	int8_t x312 = INT8_MAX;
	static volatile int32_t t77 = -1153402;

	t77 = (x309==((x310<x311)|x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 68112U;
	static int8_t x314 = INT8_MAX;
	uint32_t x315 = UINT32_MAX;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t78 = -446;

	t78 = (x313==((x314<x315)|x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 1619761858476536651LL;
	static int8_t x319 = INT8_MAX;
	int32_t x320 = INT32_MIN;

	t79 = (x317==((x318<x319)|x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 15U;
	volatile uint32_t x324 = 422U;
	static int32_t t80 = -34;

	t80 = (x321==((x322<x323)|x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MIN;
	int16_t x326 = INT16_MIN;
	int16_t x327 = INT16_MIN;
	static volatile int32_t t81 = 7121791;

	t81 = (x325==((x326<x327)|x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int16_t x330 = INT16_MIN;
	int32_t x331 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	int32_t t82 = -27813;

	t82 = (x329==((x330<x331)|x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MAX;
	int32_t x336 = INT32_MIN;
	static volatile int32_t t83 = -1133;

	t83 = (x333==((x334<x335)|x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = -41LL;
	volatile int64_t x339 = -1718581345LL;
	int64_t x340 = INT64_MIN;
	int32_t t84 = -129886;

	t84 = (x337==((x338<x339)|x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 7U;
	uint16_t x344 = 26570U;
	static volatile int32_t t85 = -463314730;

	t85 = (x341==((x342<x343)|x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x345 = INT8_MIN;
	static int8_t x346 = -1;
	volatile int32_t t86 = -26862845;

	t86 = (x345==((x346<x347)|x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -43;
	uint64_t x350 = 4016889081LLU;
	static volatile int8_t x351 = INT8_MAX;
	int8_t x352 = INT8_MAX;
	volatile int32_t t87 = 5583;

	t87 = (x349==((x350<x351)|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = UINT64_MAX;
	uint16_t x354 = UINT16_MAX;
	uint8_t x355 = 88U;
	uint32_t x356 = 5U;
	int32_t t88 = 462;

	t88 = (x353==((x354<x355)|x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = -1;
	uint64_t x358 = UINT64_MAX;
	volatile int16_t x359 = -1;
	static int32_t x360 = INT32_MIN;
	volatile int32_t t89 = -21662;

	t89 = (x357==((x358<x359)|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x361 = INT16_MIN;
	volatile uint8_t x362 = 3U;
	volatile int64_t x363 = INT64_MIN;
	uint32_t x364 = 701U;
	volatile int32_t t90 = 28957513;

	t90 = (x361==((x362<x363)|x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int32_t x365 = INT32_MIN;
	int16_t x366 = 319;
	int16_t x367 = 1;
	int16_t x368 = 479;
	static volatile int32_t t91 = -7762270;

	t91 = (x365==((x366<x367)|x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -1LL;
	static int16_t x372 = -485;
	volatile int32_t t92 = -314;

	t92 = (x369==((x370<x371)|x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x373 = -1;
	volatile int16_t x375 = INT16_MAX;
	volatile int32_t x376 = INT32_MIN;
	int32_t t93 = 1890;

	t93 = (x373==((x374<x375)|x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 3289U;
	int16_t x378 = INT16_MAX;
	int32_t t94 = 217;

	t94 = (x377==((x378<x379)|x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x381 = 25U;
	int8_t x382 = -1;
	static int32_t x383 = -1;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = -1;

	t95 = (x381==((x382<x383)|x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MAX;
	static uint16_t x386 = 23605U;
	volatile int64_t x388 = INT64_MAX;
	static int32_t t96 = 0;

	t96 = (x385==((x386<x387)|x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	volatile int32_t x390 = 45;
	volatile int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	int32_t t97 = -123134065;

	t97 = (x389==((x390<x391)|x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 7U;
	int64_t x395 = INT64_MAX;
	uint8_t x396 = 0U;
	static int32_t t98 = -28;

	t98 = (x393==((x394<x395)|x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = INT8_MIN;
	volatile int32_t x398 = -36489345;
	static int32_t x399 = INT32_MIN;
	volatile int32_t t99 = -3362796;

	t99 = (x397==((x398<x399)|x400));

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

