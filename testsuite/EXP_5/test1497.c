#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x9 = 211659556231925LLU;
static int32_t x11 = INT32_MAX;
static volatile int32_t x12 = INT32_MIN;
int8_t x18 = 63;
int16_t x19 = INT16_MIN;
int8_t x22 = INT8_MAX;
volatile uint32_t x33 = UINT32_MAX;
volatile int32_t x40 = 126648173;
int32_t x48 = -1;
int32_t x52 = 60;
volatile int64_t t11 = 2008822LL;
int8_t x66 = INT8_MIN;
static int32_t x69 = -1;
volatile int16_t x71 = -11197;
int32_t x73 = -124189385;
uint32_t t15 = 40446581U;
int64_t x83 = INT64_MIN;
volatile int8_t x85 = INT8_MIN;
int32_t x87 = 613289;
int8_t x92 = -1;
int64_t x101 = INT64_MIN;
uint64_t x103 = 521072054848039480LLU;
int64_t x104 = INT64_MIN;
volatile int64_t t21 = -2LL;
uint32_t x108 = 130905404U;
uint32_t t22 = 60380854U;
static volatile int32_t t24 = 0;
volatile int8_t x117 = 1;
volatile uint8_t x118 = 2U;
int16_t x120 = 0;
uint64_t t26 = 872031354LLU;
int32_t x130 = -190825;
int8_t x131 = -45;
volatile int32_t t28 = -61;
volatile uint8_t x139 = 20U;
static uint32_t x162 = 568438406U;
int64_t x163 = -1LL;
static volatile int16_t x168 = 26;
static int32_t t37 = 511324674;
volatile uint64_t t38 = 9421343424LLU;
uint8_t x180 = 6U;
uint32_t x188 = 18605U;
volatile uint8_t x189 = 25U;
int16_t x203 = -1;
uint8_t x204 = UINT8_MAX;
volatile int8_t x217 = -1;
static int8_t x220 = INT8_MAX;
int32_t x224 = INT32_MIN;
volatile uint8_t x225 = 22U;
static uint8_t x226 = UINT8_MAX;
int64_t x231 = -860LL;
volatile int32_t t54 = 1;
int64_t x253 = -1LL;
int64_t t60 = -622668581251466825LL;
volatile int8_t x264 = INT8_MAX;
uint64_t x270 = 7513248736LLU;
volatile int8_t x271 = 50;
int32_t x273 = -1;
int32_t x275 = INT32_MIN;
static int16_t x279 = -1;
int8_t x280 = -1;
int16_t x283 = 5;
volatile int8_t x289 = 0;
static uint16_t x294 = 728U;
volatile int16_t x301 = INT16_MAX;
volatile int32_t t70 = 2640224;
uint32_t x308 = 875891U;
int16_t x312 = 23;
uint8_t x340 = 0U;
uint32_t t79 = 1861U;
volatile int32_t t83 = 203;
uint8_t x362 = 6U;
int64_t x365 = 165976LL;
int8_t x367 = -11;
volatile int64_t x371 = 2045625405868029LL;
int32_t t86 = -12;
int8_t x375 = INT8_MIN;
int16_t x382 = INT16_MIN;
int8_t x383 = -1;
volatile uint32_t x384 = UINT32_MAX;
int64_t t89 = -43762736LL;
static uint16_t x386 = 0U;
int32_t t90 = -325754;
uint16_t x395 = UINT16_MAX;
int8_t x396 = INT8_MIN;
static int64_t t94 = -4255319048LL;
static volatile uint64_t t96 = 15LLU;
uint64_t x422 = UINT64_MAX;


void f0(void) {
	static uint8_t x1 = 25U;
	volatile int32_t x2 = INT32_MAX;
	uint64_t x3 = 5260099567688952LLU;
	int32_t x4 = 75110;
	static volatile int32_t t0 = 169572;

	t0 = (x1-((x2<x3)|x4));

	if (t0 != -75086) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	int8_t x6 = -1;
	volatile int8_t x7 = INT8_MAX;
	static volatile int16_t x8 = INT16_MIN;
	int32_t t1 = -1;

	t1 = (x5-((x6<x7)|x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 2181;
	uint64_t t2 = 14748589075597001LLU;

	t2 = (x9-((x10<x11)|x12));

	if (t2 != 211661703715572LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	volatile int32_t x14 = INT32_MIN;
	uint16_t x15 = 2793U;
	int32_t x16 = -12347008;
	int32_t t3 = -23292475;

	t3 = (x13-((x14<x15)|x16));

	if (t3 != 12346879) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = 5697;
	int16_t x20 = INT16_MAX;
	int32_t t4 = -991;

	t4 = (x17-((x18<x19)|x20));

	if (t4 != -27070) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x23 = 5762508773LLU;
	int32_t x24 = INT32_MIN;
	int64_t t5 = -3394676075626794LL;

	t5 = (x21-((x22<x23)|x24));

	if (t5 != 2147483646LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x34 = INT32_MIN;
	int8_t x35 = INT8_MIN;
	static volatile int8_t x36 = -23;
	volatile uint32_t t6 = 136702U;

	t6 = (x33-((x34<x35)|x36));

	if (t6 != 22U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x37 = -1;
	static uint64_t x38 = 45191LLU;
	int16_t x39 = INT16_MIN;
	volatile int32_t t7 = -42201;

	t7 = (x37-((x38<x39)|x40));

	if (t7 != -126648174) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x41 = -1;
	uint16_t x42 = UINT16_MAX;
	int64_t x43 = -1LL;
	static int64_t x44 = INT64_MIN;
	int64_t t8 = INT64_MAX;

	t8 = (x41-((x42<x43)|x44));

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 972246873;
	uint8_t x46 = 37U;
	uint8_t x47 = 2U;
	volatile int32_t t9 = 1684353;

	t9 = (x45-((x46<x47)|x48));

	if (t9 != 972246874) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	int64_t x50 = -27407146946781620LL;
	int8_t x51 = -1;
	volatile int32_t t10 = -5237982;

	t10 = (x49-((x50<x51)|x52));

	if (t10 != -62) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	int16_t x54 = -4051;
	volatile int64_t x55 = -97360LL;
	int16_t x56 = INT16_MIN;

	t11 = (x53-((x54<x55)|x56));

	if (t11 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x61 = -463277;
	int64_t x62 = INT64_MIN;
	static int32_t x63 = -31;
	int8_t x64 = INT8_MIN;
	int32_t t12 = 2939238;

	t12 = (x61-((x62<x63)|x64));

	if (t12 != -463150) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x65 = -1;
	int32_t x67 = 7500650;
	int32_t x68 = INT32_MIN;
	volatile int32_t t13 = -21948;

	t13 = (x65-((x66<x67)|x68));

	if (t13 != 2147483646) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = -1;
	static int32_t x72 = INT32_MIN;
	int32_t t14 = INT32_MAX;

	t14 = (x69-((x70<x71)|x72));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x74 = INT16_MIN;
	int8_t x75 = -17;
	volatile uint32_t x76 = UINT32_MAX;

	t15 = (x73-((x74<x75)|x76));

	if (t15 != 4170777912U) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x81 = 1048U;
	static int64_t x82 = INT64_MIN;
	int16_t x84 = 2;
	static volatile int32_t t16 = -31797;

	t16 = (x81-((x82<x83)|x84));

	if (t16 != 1046) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x86 = 332U;
	int8_t x88 = 21;
	volatile int32_t t17 = 5;

	t17 = (x85-((x86<x87)|x88));

	if (t17 != -149) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x89 = UINT64_MAX;
	int8_t x90 = INT8_MAX;
	static int8_t x91 = INT8_MIN;
	volatile uint64_t t18 = 47598LLU;

	t18 = (x89-((x90<x91)|x92));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x93 = INT16_MIN;
	volatile int16_t x94 = INT16_MIN;
	volatile int8_t x95 = 0;
	volatile uint64_t x96 = 5772LLU;
	static uint64_t t19 = 87528387749LLU;

	t19 = (x93-((x94<x95)|x96));

	if (t19 != 18446744073709513075LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x97 = -12;
	uint32_t x98 = 131U;
	static uint8_t x99 = 0U;
	static int32_t x100 = -1;
	volatile int32_t t20 = -837303049;

	t20 = (x97-((x98<x99)|x100));

	if (t20 != -11) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x102 = UINT32_MAX;

	t21 = (x101-((x102<x103)|x104));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -120;
	int8_t x106 = -1;
	static int64_t x107 = -1LL;

	t22 = (x105-((x106<x107)|x108));

	if (t22 != 4164061772U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = 1230;
	int32_t x110 = INT32_MIN;
	uint16_t x111 = UINT16_MAX;
	int32_t x112 = -1;
	int32_t t23 = 187407657;

	t23 = (x109-((x110<x111)|x112));

	if (t23 != 1231) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = 14;
	int16_t x114 = -1;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = 26U;

	t24 = (x113-((x114<x115)|x116));

	if (t24 != -12) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x119 = INT8_MIN;
	volatile int32_t t25 = -955484;

	t25 = (x117-((x118<x119)|x120));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x121 = 2U;
	static int16_t x122 = INT16_MIN;
	int64_t x123 = -85510932848LL;
	static uint64_t x124 = UINT64_MAX;

	t26 = (x121-((x122<x123)|x124));

	if (t26 != 3LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -1;
	volatile uint64_t x126 = 560224907169LLU;
	uint16_t x127 = 29U;
	int32_t x128 = 1;
	volatile int32_t t27 = -1;

	t27 = (x125-((x126<x127)|x128));

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x129 = -430;
	volatile int32_t x132 = INT32_MIN;

	t28 = (x129-((x130<x131)|x132));

	if (t28 != 2147483217) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x133 = 107U;
	int32_t x134 = INT32_MIN;
	static int16_t x135 = INT16_MIN;
	static volatile int16_t x136 = -121;
	int32_t t29 = 1;

	t29 = (x133-((x134<x135)|x136));

	if (t29 != 228) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x137 = 54;
	static int8_t x138 = INT8_MIN;
	volatile int16_t x140 = INT16_MIN;
	int32_t t30 = -642212;

	t30 = (x137-((x138<x139)|x140));

	if (t30 != 32821) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x141 = UINT16_MAX;
	uint64_t x142 = UINT64_MAX;
	int16_t x143 = INT16_MIN;
	int8_t x144 = -1;
	static int32_t t31 = -171;

	t31 = (x141-((x142<x143)|x144));

	if (t31 != 65536) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x145 = 38U;
	int32_t x146 = -205;
	int32_t x147 = 660;
	static int32_t x148 = 1772;
	int32_t t32 = 150220;

	t32 = (x145-((x146<x147)|x148));

	if (t32 != -1735) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = -1LL;
	uint16_t x150 = 0U;
	int8_t x151 = 22;
	int16_t x152 = INT16_MIN;
	volatile int64_t t33 = 9049277323717383LL;

	t33 = (x149-((x150<x151)|x152));

	if (t33 != 32766LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	uint8_t x155 = UINT8_MAX;
	uint8_t x156 = UINT8_MAX;
	static volatile int32_t t34 = -106836934;

	t34 = (x153-((x154<x155)|x156));

	if (t34 != -255) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x157 = 3U;
	uint32_t x158 = 118U;
	int64_t x159 = -1LL;
	int8_t x160 = INT8_MIN;
	volatile int32_t t35 = 1029771;

	t35 = (x157-((x158<x159)|x160));

	if (t35 != 131) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = -38318LL;
	volatile uint32_t x164 = 24U;
	static volatile int64_t t36 = 9122475107863LL;

	t36 = (x161-((x162<x163)|x164));

	if (t36 != -38342LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x165 = INT8_MIN;
	int32_t x166 = 46648118;
	volatile int64_t x167 = INT64_MIN;

	t37 = (x165-((x166<x167)|x168));

	if (t37 != -154) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x169 = INT64_MIN;
	int32_t x170 = INT32_MAX;
	uint16_t x171 = UINT16_MAX;
	static uint64_t x172 = 2285000440141368239LLU;

	t38 = (x169-((x170<x171)|x172));

	if (t38 != 6938371596713407569LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x173 = 128U;
	int16_t x174 = 1259;
	int32_t x175 = INT32_MAX;
	uint8_t x176 = 19U;
	uint32_t t39 = 262766U;

	t39 = (x173-((x174<x175)|x176));

	if (t39 != 109U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x177 = -1742LL;
	static volatile int16_t x178 = -1;
	uint32_t x179 = UINT32_MAX;
	int64_t t40 = -18358549LL;

	t40 = (x177-((x178<x179)|x180));

	if (t40 != -1748LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x181 = -1LL;
	volatile int32_t x182 = -1;
	int16_t x183 = INT16_MAX;
	int16_t x184 = INT16_MIN;
	volatile int64_t t41 = 330908LL;

	t41 = (x181-((x182<x183)|x184));

	if (t41 != 32766LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 25U;
	volatile int16_t x186 = INT16_MIN;
	volatile int8_t x187 = -1;
	uint32_t t42 = 8655U;

	t42 = (x185-((x186<x187)|x188));

	if (t42 != 4294948716U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	int8_t x192 = INT8_MAX;
	static int32_t t43 = -1;

	t43 = (x189-((x190<x191)|x192));

	if (t43 != -102) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x193 = INT64_MIN;
	int64_t x194 = -1443961092834713LL;
	static uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MIN;
	int64_t t44 = -256807LL;

	t44 = (x193-((x194<x195)|x196));

	if (t44 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x197 = -1;
	int64_t x198 = INT64_MAX;
	volatile int16_t x199 = INT16_MIN;
	static int32_t x200 = -6333;
	volatile int32_t t45 = -8;

	t45 = (x197-((x198<x199)|x200));

	if (t45 != 6332) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = -2040316;
	volatile int16_t x202 = INT16_MIN;
	int32_t t46 = 939;

	t46 = (x201-((x202<x203)|x204));

	if (t46 != -2040571) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 7U;
	uint16_t x206 = 31883U;
	int16_t x207 = INT16_MAX;
	uint16_t x208 = 151U;
	static volatile uint32_t t47 = 10756U;

	t47 = (x205-((x206<x207)|x208));

	if (t47 != 4294967152U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x209 = 13388845032LLU;
	int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MIN;
	int8_t x212 = -1;
	static volatile uint64_t t48 = 4199743LLU;

	t48 = (x209-((x210<x211)|x212));

	if (t48 != 13388845033LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -1;
	int16_t x214 = INT16_MIN;
	uint16_t x215 = 0U;
	volatile uint8_t x216 = UINT8_MAX;
	int32_t t49 = 92;

	t49 = (x213-((x214<x215)|x216));

	if (t49 != -256) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x218 = 58U;
	int16_t x219 = -3852;
	volatile int32_t t50 = 0;

	t50 = (x217-((x218<x219)|x220));

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x221 = -23;
	volatile int32_t x222 = INT32_MAX;
	uint32_t x223 = 1889688U;
	static int32_t t51 = 8408673;

	t51 = (x221-((x222<x223)|x224));

	if (t51 != 2147483625) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x227 = 186857387U;
	static uint16_t x228 = 3U;
	int32_t t52 = 2547;

	t52 = (x225-((x226<x227)|x228));

	if (t52 != 19) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 16298U;
	static int8_t x230 = -1;
	static uint16_t x232 = 27458U;
	volatile int32_t t53 = -6114;

	t53 = (x229-((x230<x231)|x232));

	if (t53 != -11160) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = -108027;
	uint8_t x234 = UINT8_MAX;
	static int8_t x235 = INT8_MAX;
	int16_t x236 = 60;

	t54 = (x233-((x234<x235)|x236));

	if (t54 != -108087) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint64_t x237 = 1453450117768LLU;
	int16_t x238 = -1;
	int16_t x239 = -1909;
	int32_t x240 = INT32_MIN;
	uint64_t t55 = 989960LLU;

	t55 = (x237-((x238<x239)|x240));

	if (t55 != 1455597601416LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = INT8_MIN;
	int64_t x242 = INT64_MIN;
	volatile int8_t x243 = INT8_MIN;
	int8_t x244 = INT8_MAX;
	int32_t t56 = 2196;

	t56 = (x241-((x242<x243)|x244));

	if (t56 != -255) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 51U;
	int8_t x246 = 53;
	int32_t x247 = 1139;
	uint8_t x248 = UINT8_MAX;
	int32_t t57 = 742;

	t57 = (x245-((x246<x247)|x248));

	if (t57 != -204) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x249 = 4;
	int64_t x250 = INT64_MAX;
	static int32_t x251 = -138436;
	uint8_t x252 = 12U;
	static volatile int32_t t58 = 0;

	t58 = (x249-((x250<x251)|x252));

	if (t58 != -8) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x254 = 17U;
	int64_t x255 = INT64_MIN;
	int32_t x256 = 564446;
	int64_t t59 = 164264855251741LL;

	t59 = (x253-((x254<x255)|x256));

	if (t59 != -564447LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x257 = -1;
	int64_t x258 = 345123186LL;
	int8_t x259 = -1;
	static int64_t x260 = -1LL;

	t60 = (x257-((x258<x259)|x260));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -1;
	uint64_t x262 = 153847LLU;
	static int16_t x263 = -178;
	volatile int32_t t61 = 1197;

	t61 = (x261-((x262<x263)|x264));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x269 = 584170324U;
	static uint16_t x272 = 53U;
	uint32_t t62 = 31U;

	t62 = (x269-((x270<x271)|x272));

	if (t62 != 584170271U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x274 = INT64_MIN;
	int8_t x276 = -1;
	int32_t t63 = -7952101;

	t63 = (x273-((x274<x275)|x276));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x277 = UINT8_MAX;
	int8_t x278 = -1;
	static volatile int32_t t64 = 27674;

	t64 = (x277-((x278<x279)|x280));

	if (t64 != 256) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x281 = -1;
	int64_t x282 = 126LL;
	static int16_t x284 = INT16_MIN;
	volatile int32_t t65 = 40699;

	t65 = (x281-((x282<x283)|x284));

	if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x285 = 904113673U;
	int8_t x286 = INT8_MAX;
	static int32_t x287 = INT32_MIN;
	uint32_t x288 = UINT32_MAX;
	static volatile uint32_t t66 = 255002678U;

	t66 = (x285-((x286<x287)|x288));

	if (t66 != 904113674U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x290 = -1;
	int64_t x291 = INT64_MIN;
	volatile int16_t x292 = INT16_MIN;
	int32_t t67 = 631;

	t67 = (x289-((x290<x291)|x292));

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MAX;
	int16_t x295 = -1;
	int16_t x296 = INT16_MAX;
	int32_t t68 = 496371799;

	t68 = (x293-((x294<x295)|x296));

	if (t68 != 2147450880) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x297 = 489U;
	int64_t x298 = INT64_MAX;
	int16_t x299 = INT16_MAX;
	int16_t x300 = -1;
	volatile int32_t t69 = 27;

	t69 = (x297-((x298<x299)|x300));

	if (t69 != 490) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x302 = -1LL;
	int32_t x303 = INT32_MIN;
	volatile int16_t x304 = INT16_MAX;

	t70 = (x301-((x302<x303)|x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = -1;
	static uint16_t x306 = 37U;
	int16_t x307 = INT16_MAX;
	uint32_t t71 = 1175633U;

	t71 = (x305-((x306<x307)|x308));

	if (t71 != 4294091404U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = -111;
	static int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MAX;
	static int32_t t72 = -227992813;

	t72 = (x309-((x310<x311)|x312));

	if (t72 != -134) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x313 = 5976U;
	int8_t x314 = 0;
	static uint64_t x315 = 3444651045800LLU;
	static int16_t x316 = 3;
	int32_t t73 = 0;

	t73 = (x313-((x314<x315)|x316));

	if (t73 != 5973) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = 972068306;
	volatile uint16_t x319 = UINT16_MAX;
	int64_t x320 = -134225640111833411LL;
	volatile int64_t t74 = -887324LL;

	t74 = (x317-((x318<x319)|x320));

	if (t74 != -9089146396742942397LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	static volatile int16_t x322 = -1;
	int8_t x323 = INT8_MIN;
	uint32_t x324 = 27U;
	uint32_t t75 = 4861U;

	t75 = (x321-((x322<x323)|x324));

	if (t75 != 4294967141U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x329 = INT8_MIN;
	static int32_t x330 = INT32_MIN;
	static volatile uint64_t x331 = 136235536022LLU;
	uint32_t x332 = 1403511U;
	static volatile uint32_t t76 = 51U;

	t76 = (x329-((x330<x331)|x332));

	if (t76 != 4293563657U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = INT8_MIN;
	uint32_t x334 = UINT32_MAX;
	int32_t x335 = INT32_MAX;
	volatile int16_t x336 = 1;
	int32_t t77 = -123;

	t77 = (x333-((x334<x335)|x336));

	if (t77 != -129) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x337 = INT8_MIN;
	volatile int32_t x338 = INT32_MIN;
	uint16_t x339 = 29U;
	volatile int32_t t78 = 8;

	t78 = (x337-((x338<x339)|x340));

	if (t78 != -129) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x341 = 4959U;
	uint8_t x342 = 3U;
	int8_t x343 = 43;
	int8_t x344 = INT8_MIN;

	t79 = (x341-((x342<x343)|x344));

	if (t79 != 5086U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x345 = 13435;
	uint64_t x346 = 30922LLU;
	volatile uint16_t x347 = UINT16_MAX;
	static volatile uint32_t x348 = 5U;
	uint32_t t80 = 41132U;

	t80 = (x345-((x346<x347)|x348));

	if (t80 != 13430U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = 9U;
	int64_t x350 = -1LL;
	volatile uint16_t x351 = UINT16_MAX;
	int8_t x352 = 53;
	int32_t t81 = -3623;

	t81 = (x349-((x350<x351)|x352));

	if (t81 != -44) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x353 = -1;
	int64_t x354 = INT64_MAX;
	uint32_t x355 = UINT32_MAX;
	volatile int32_t x356 = INT32_MAX;
	static volatile int32_t t82 = INT32_MIN;

	t82 = (x353-((x354<x355)|x356));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x357 = -12;
	uint8_t x358 = 0U;
	int16_t x359 = 2;
	int8_t x360 = -1;

	t83 = (x357-((x358<x359)|x360));

	if (t83 != -11) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x361 = -1;
	int8_t x363 = -1;
	int64_t x364 = INT64_MIN;
	int64_t t84 = INT64_MAX;

	t84 = (x361-((x362<x363)|x364));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x366 = UINT8_MAX;
	static int16_t x368 = -2;
	static int64_t t85 = -268307488847LL;

	t85 = (x365-((x366<x367)|x368));

	if (t85 != 165978LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x369 = 555U;
	int8_t x370 = INT8_MIN;
	static int16_t x372 = -1915;

	t86 = (x369-((x370<x371)|x372));

	if (t86 != 2470) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x373 = INT16_MAX;
	static int8_t x374 = INT8_MIN;
	uint8_t x376 = 2U;
	int32_t t87 = -118;

	t87 = (x373-((x374<x375)|x376));

	if (t87 != 32765) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = INT8_MAX;
	int64_t x378 = 759989743029LL;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = 4729U;
	uint32_t t88 = 3U;

	t88 = (x377-((x378<x379)|x380));

	if (t88 != 4294962694U) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = 1LL;

	t89 = (x381-((x382<x383)|x384));

	if (t89 != -4294967294LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = -1;
	static volatile int32_t x387 = 1;
	static int16_t x388 = -36;

	t90 = (x385-((x386<x387)|x388));

	if (t90 != 34) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -1LL;
	static int64_t x390 = INT64_MIN;
	static volatile uint8_t x391 = UINT8_MAX;
	int64_t x392 = INT64_MIN;
	int64_t t91 = 3782448LL;

	t91 = (x389-((x390<x391)|x392));

	if (t91 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x393 = INT8_MIN;
	int16_t x394 = 0;
	int32_t t92 = 156196801;

	t92 = (x393-((x394<x395)|x396));

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x401 = UINT64_MAX;
	uint32_t x402 = 1938U;
	volatile uint8_t x403 = 7U;
	static uint64_t x404 = 358284489763505020LLU;
	uint64_t t93 = 1998001383785888LLU;

	t93 = (x401-((x402<x403)|x404));

	if (t93 != 18088459583946046595LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x405 = -6510800LL;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	static int64_t x408 = -1LL;

	t94 = (x405-((x406<x407)|x408));

	if (t94 != -6510799LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x413 = -1;
	static int32_t x414 = -1;
	int64_t x415 = 369784447763391LL;
	int8_t x416 = INT8_MIN;
	static volatile int32_t t95 = -1;

	t95 = (x413-((x414<x415)|x416));

	if (t95 != 126) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = INT8_MIN;
	volatile int16_t x418 = 2710;
	int16_t x419 = -1;
	uint64_t x420 = 391543041912LLU;

	t96 = (x417-((x418<x419)|x420));

	if (t96 != 18446743682166509576LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x421 = 5427LL;
	int64_t x423 = 778643LL;
	volatile uint64_t x424 = 1LLU;
	volatile uint64_t t97 = 340756LLU;

	t97 = (x421-((x422<x423)|x424));

	if (t97 != 5426LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x425 = INT16_MAX;
	uint32_t x426 = 22707240U;
	int16_t x427 = INT16_MAX;
	uint32_t x428 = UINT32_MAX;
	uint32_t t98 = 245732446U;

	t98 = (x425-((x426<x427)|x428));

	if (t98 != 32768U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x429 = INT64_MAX;
	static int16_t x430 = 225;
	uint8_t x431 = 0U;
	static uint32_t x432 = 31955U;
	int64_t t99 = -240103637LL;

	t99 = (x429-((x430<x431)|x432));

	if (t99 != 9223372036854743852LL) { NG(); } else { ; }
	
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

